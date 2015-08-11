#include <idc.idc>
static nameFunction(offset, name)
{
	if(offset != BADADDR)
	{
		MakeName(offset, name);
		MakeFunction(offset, BADADDR);
		Message(form("Named function %s at offset: 0x%08x\n", name, offset));	
	}
	else
		Message(form("Did not find binary function %s\n", name));	

	return offset;
}

static nameLocal(offset, location, name)
{
	// TODO: error handling
	MakeLocal(offset, BADADDR, location, name);
}

static nameVariable(offset, name)
{
	MakeName(offset, name);
	Message(form("Named variable %s at offset: 0x%08x\n", name, offset));

	return offset;
}

static main()
{
	gameTimeFunctions();	
	hsScriptFunctions();
	havokFunctions();
	cameraFunctions();
	networkFunctions();
	nameGlobals();
	
	nameFunction(0x5FFDE0, "Game_GetConfigValue");
	nameFunction(0x52FDC0, "Game_GetLanguageNameFromIdx");
	nameFunction(0x837110, "Game_ProcessAccountInfo");
	nameFunction(0x837360, "Game_VerifyAccountAndLoadAnticheat");
	nameFunction(0x42EB10, "Game_Startup");
	nameFunction(0x600630, "Game_Startup_DoAppOnlyStuff");
	nameFunction(0x506FB0, "Game_DebugLog");
	nameFunction(0x5CE190, "Game_GetCurrentGameVariant");
	nameFunction(0x5CE150, "Game_GetCurrentGameVariant_2");
	nameFunction(0x586570, "Game_ForgeVariant_SetName");
	nameFunction(0xAEA120, "Game_ForgeVariant_Save");
	nameFunction(0xAEB1D0, "Game_ForgeVariant_Save_jmp");
	nameFunction(0xAEB490, "Game_ForgeVariant_Save_AfterNameEntered");
	nameFunction(0xB03530, "Game_GameVariant_Save");
	nameFunction(0xB03D90, "Game_GameVariant_Save_jmp");
	nameFunction(0xB0D330, "Game_GameVariant_Save_AfterNameEntered");

	nameFunction(0x42E5F0, "Game_IsAppBotClient");
	nameFunction(0x42E610, "Game_IsAppHalo3");
	nameFunction(0x42E620, "Game_IsAppGuerilla");
	nameFunction(0x42E630, "Game_IsAppUnk1");
	nameFunction(0x42E640, "Game_IsAppSapien");
	nameFunction(0x42E650, "Game_IsAppTool");
	nameFunction(0x42E600, "Game_IsAppDedicatedServer");

	nameFunction(0x54C110, "Game_Maps_InitMapInfo");
	nameFunction(0x531E90, "Game_IsMapModeMainMenu");
	nameFunction(0x531C00, "Game_IsMapModeMultiplayer");
	nameFunction(0x505700, "Game_IsStopped");
	nameFunction(0x5056D0, "Game_StopGame");
	
	nameFunction(0x503370, "Tags_GetTagAddress");

	nameFunction(0xA21950, "Video_GetD3DCreate9Ex_Ptr");
	nameFunction(0xA218E0, "Video_GetD3DCreate9_Ptr");
	nameFunction(0x108E7A0, "Video_CallsD3DBeginScene");
	nameFunction(0xA21510, "Video_CallsD3DEndScene");
	nameFunction(0xA21B40, "Video_InitD3D");
	nameFunction(0x591F80, "Video_DrawPanCamText");

	nameFunction(0xA7DCA0, "User_IsProfileAvailable");

	nameFunction(0x60BE60, "Input_IsGamepadEnabled");
	nameFunction(0x60D7B0, "Input_SetsGamepadEnabledFlag");
	nameFunction(0x65EF00, "Input_XInput_Init");
	nameFunction(0x65EEB0, "Input_XInput_Free");
	nameFunction(0x512690, "Input_XInput_Update");
	nameFunction(0x65EF60, "Input_XInput_GetState");
	nameFunction(0x512350, "Input_RawInputHandler");
	nameFunction(0x5119F0, "Input_GetMouseData");
	nameFunction(0x5D3430, "Input_UpdatePlayerView");
	nameFunction(0x50BA10, "Input_GetMouseAccelValue");
	nameFunction(0x50DC50, "Input_SetMouseAccelValue");
	nameFunction(0x50BB10, "Input_GetYAxisInverted");
	nameFunction(0x50DD70, "Input_SetYAxisInverted");
	nameFunction(0x50BA90, "Input_GetYAxisInvertedAlt");
	nameFunction(0x50DCE0, "Input_SetYAxisInvertedAlt");

	nameFunction(0x55B410, "Globals_Push");
	nameFunction(0x55B2E0, "Globals_Pop");
	nameFunction(0x5A0220, "Globals_AllocateGameMemory_1");
	nameFunction(0x55AFA0, "Globals_AllocateGameMemory_2");
	nameFunction(0x14EA9D0, "Globals_AllocateGameMemory_3");
	nameFunction(0x968070, "Globals_AllocateGameMemory_4");
	nameFunction(0xBB61A0, "Globals_AllocateGameMemory_5");
	nameFunction(0x96A650, "Globals_AllocateGameMemory_6");

	nameFunction(0x5A85E0, "FS_CheckIfItemCanBeSaved");
	nameFunction(0x526550, "FS_GetFileNameForItemType");
	nameFunction(0x5A6CE0, "FS_SaveGameNameNotTaken");
	nameFunction(0x528500, "FS_SetupFiloStruct");
	nameFunction(0x52A9A0, "FS_Calls_SetupFiloStruct_and_sets_108h_to_minus1");
	nameFunction(0x528550, "FS_Calls_SetupFiloStruct");
	nameFunction(0x5285B0, "FS_Calls_SetupFiloStruct2");

	nameFunction(0x74CBE0, "FS_XContent_CreatePackage");
	nameFunction(0x74CC00, "FS_XContent_GetMountPath");
	nameFunction(0x74D010, "FS_XContent_MountPackage");
	nameFunction(0x5A7A80, "FS_XContent_GetSelectedDeviceId");
	nameFunction(0x74D570, "FS_XContent_GetSelectedDeviceId2");

	nameFunction(0x5085C0, "FS_Class_AddFileOperation");
	nameFunction(0x5256D0, "FS_Class_AddGameDataSaveOperation");
	nameFunction(0x525760, "FS_Class_Operations_GameDataSave");

	nameFunction(0x528B60, "FS_file_close");
	nameFunction(0x528C60, "FS_file_copy_to");
	nameFunction(0x528FB0, "FS_file_create");
	nameFunction(0x52A220, "FS_file_open");
	nameFunction(0x52B250, "FS_file_write");
	nameFunction(0x529B00, "FS_file_get_size");

	nameFunction(0x525B50, "FS_saved_game_files_create_saved_game_file_reference");

	nameFunction(0x4ECBD0, "Util_Utf16StrNotEmpty");
	nameFunction(0x401760, "Util_Utf16Concat");
	nameFunction(0x4ECCD0, "Util_Utf16Strcpy");
	nameFunction(0x4EC4C0, "Util_AsciiToUtf16");
	nameFunction(0x401610, "Util_strcpy_alt");
	nameFunction(0x401870, "Util_strlen_alt");

	nameFunction(0xADF6E0, "UI_MainMenu_Update");
	nameFunction(0xAC34A0, "UI_Lobby_InitNetworkSelection");
	nameFunction(0xAE2180, "UI_Forge_ButtonPressHandler");
	nameFunction(0xAB1BA0, "UI_ButtonPressHandler");
	nameFunction(0xA92780, "UI_OpenDialogById_InitMessage");
	nameFunction(0xABA240, "UI_ToggleVisibility");
	nameFunction(0xAABFD0, "UI_IsDialogIDValid");
	nameFunction(0xA926A0, "UI_InGame_ShowScreenshotUploadingDialog");
	nameFunction(0xAE1CC0, "UI_Forge_ShowMenuDialog");
	nameFunction(0xA92740, "UI_ShowMsgBoxDialog");
	nameFunction(0xA93450, "UI_PostMessage");
	nameFunction(0xB01240, "UI_Lobby_StartGameButton_GetStringId");
	nameFunction(0xB22A10, "UI_Lobby_StartGameButton_GetText");
	nameFunction(0xAC3F60, "UI_Lobby_LoadMapImage");
    nameFunction(0xA935C0, "UI_Input_ButtonPress");
    nameFunction(0xAB2830, "UI_CloseDialog");
    
    // ButtonPress is at +0x8C into vftable of classes derived from either c_gui_screen_widget or c_gui_widget
    nameFunction(0xB03950, "c_gui_screen_pregame_selection::ButtonPress");
    nameFunction(0xB1F620, "c_start_menu_pane_screen_widget::ButtonPress");
    nameFunction(0xAE05B0, "c_start_menu_screen_widget::ButtonPress");
    nameFunction(0xAE7660, "c_main_menu_screen_widget::ButtonPress");
    
    nameFunction(0xB89190, "Equipment_GetNumRemainingUses");

	nameFunction(0x4E1840, "VKeyboard_CreateKeyboard");
	nameFunction(0x4E19A0, "VKeyboard_SetDefaultValue");
	nameFunction(0x4E19D0, "VKeyboard_SetKeyboardTitle");
	nameFunction(0x4E19B0, "VKeyboard_SetKeyboardDescription");
	nameFunction(0x5A8F40, "VKeyboard_ShowKeyboard");

	nameFunction(0x65F840, "Camera_FirstPerson_Func");
	nameFunction(0x7293F2, "Camera_ThirdPerson_Func");

	nameFunction(0x6189F0, "DebugLog_Float");
	nameFunction(0x618A00, "DebugLog_UnknownType");
	nameFunction(0x618A10, "DebugLog_Int");
	nameFunction(0x618A20, "DebugLog_Vector");
	nameFunction(0x618A30, "DebugLog_String");
	nameFunction(0x618A50, "DebugLog_UnicodeString");

	nameFunction(0x79C190, "SSL_Native_GetControlsMethod");
	nameFunction(0x79DD10, "SSL_Native_SetControlsMethod");
	nameFunction(0xF384A0, "SSL_CalledAtCallbackEnd");
	nameFunction(0xF38D90, "SSL_CalledAtCallbackStart");
	nameFunction(0xD87130, "SSL_Alloc");

	nameFunction(0x8E0D00, "JSON_GetObjectAsArray");
	nameFunction(0x8E3340, "JSON_GetObjectAsNumber");

	nameFunction(0x42CB10, "Frost_DebugLog");
	nameFunction(0x425E00, "Frost_Finish2");
	nameFunction(0x428310, "Frost_Finish2_Unused");
	nameFunction(0x427EE0, "Frost_Init");
	nameFunction(0x428230, "Frost_InitW");
	nameFunction(0x427CE0, "Frost_LoadLibrary");
	nameFunction(0x425EC0, "Frost_SetCharName");
	nameFunction(0x4283F0, "Frost_SetCharName2");
	nameFunction(0x428560, "Frost_SetCharNameW");
	nameFunction(0x425E60, "Frost_SetUserName");
	
	nameFunction(0x463540, "BLF_VerifyHeader");
	nameFunction(0xAC3F60, "BLF_LoadBlf");
	
	nameFunction(0xDFC730, "Sound_DebugPrint");
}

static nameGlobals()
{
	nameVariable(0x2179468, "g_bIsConnectedToLive");
	nameVariable(0x244DE98, "g_bIsGamepadEnabled");

	nameVariable(0x224A498, "g_NetworkPacketHandler");
	nameVariable(0x224A4AC, "g_NetworkPropertiesHandler");
	nameVariable(0x224A490, "g_NetworkPropertiesHandler_ptr");
	
	nameVariable(0x18B49E4, "g_InputMaxVerticalAngle");
	nameVariable(0x2301DB4, "g_InputIsYAxisInverted");
	
	nameVariable(0x238E6BC, "g_InputMouseButtonsPressed");

	nameVariable(0x238E6C0, "g_InputMouseX");
	nameVariable(0x238E6C4, "g_InputMouseY");
	nameVariable(0x238E6C8, "g_InputMouseWheel");

	nameVariable(0x238E6A0, "g_InputMouseX_WithSensitivity");
	nameVariable(0x238E6A4, "g_InputMouseY_WithSensitivity");
	nameVariable(0x238E6A8, "g_InputMouseWheel_WithSensitivity");

	nameVariable(0x238E6F8, "g_InputMouseX_Sensitivity_maybe");
	nameVariable(0x238E6FC, "g_InputMouseY_Sensitivity_maybe");
	nameVariable(0x238E700, "g_InputMouseWheel_Sensitivity_maybe");

	nameVariable(0x238E704, "g_InputMouseX_Sensitivity_2_maybe");
	nameVariable(0x238E708, "g_InputMouseY_Sensitivity_2_maybe");
	nameVariable(0x238E70C, "g_InputMouseWheel_Sensitivity_2_maybe");

	nameVariable(0x199C014, "g_GameWindowHWND");
	
	nameVariable(0x189E2D4, "g_CampaignsGlobalPtr");
	nameVariable(0x189E2D8, "g_CampaignLevelsGlobalPtr");
	nameVariable(0x189E2DC, "g_CampaignInsertionsGlobalPtr");
	nameVariable(0x189E2E0, "g_MultiplayerLevelsGlobalPtr");
	
}

static gameTimeFunctions()
{
	nameFunction(0x552100, "Game_Time_UpdateCountdownTimer");
	nameLocal(0x552100, "[bp+0X8]", "playerIndex");
	nameLocal(0x552100, "[bp+0XC]", "ticksLeft");

	nameFunction(0x564B40, "Game_Time_GetIntTickCountFromSeconds");
	nameLocal(0x564B40, "[bp+0X8]", "seconds");
	
	nameFunction(0x564B70, "Game_Time_GetFloatTickCountFromSeconds");
	nameLocal(0x564B70, "[bp+0X8]", "seconds");
	
	nameFunction(0x564C20, "Game_Time_GetSecondsPerTick");
	nameFunction(0x564C20, "Game_Time_GetTicksPerSecond");
	
	nameFunction(0x564C60, "Game_Time_GetSecondsFromTickCount");
	nameLocal(0x564C60, "[bp+0X8]", "ticks");
	
	nameFunction(0x564C90, "Game_Time_IncreaseTickCount");
	nameFunction(0x564D50, "Game_Time_GetMatchTicksElapsed");
	nameFunction(0x564E60, "Game_Time_GetMatchSecondsElapsed");
	nameFunction(0x564EB0, "Game_Time_GetSpeed");
	nameFunction(0x564ED0, "Game_Time_AllocateGlobals");
	nameFunction(0x564F30, "Game_Time_InitializeGlobals");
	nameFunction(0x564FA0, "Game_Time_IsPaused");
	nameFunction(0x564FE0, "Game_Time_SetMatchTicksElapsed");
	nameFunction(0x5651D0, "Game_Time_SetSpeed");
	
	nameFunction(0x5A40F0, "Game_Time_GetSecondsFromFrameCount");
	nameLocal(0x5A40F0, "[bp+0X8]", "frames");
	
	nameFunction(0xA1FCD0, "Game_Time_GetTicksPerSecondConstant");
}

static hsScriptFunctions()
{
	MakeName(0x18ED378,	"hs_script_info_vtable");
	nameFunction(0x5972F0, "Scripts_Prologue");
	nameFunction(0x5974E0, "Scripts_Epilogue");
}

static havokFunctions()
{
	MakeName(0x2443FFC,	"Havok_hkpWorld");

	nameFunction(0x5C4FC0, "Havok_GetStats");
	nameFunction(0x5C5EF0, "Havok_InitializeWorld");
	nameFunction(0x5C6360, "Havok_UpdateTickCount");
	nameFunction(0x7610B0, "Havok_hkCriticalSection");
	nameFunction(0xC310F0, "Havok_hkErrStream");
	nameFunction(0xC31140, "Havok_hkError");
	nameFunction(0xC31450, "Havok_hkOstream::Operator");
	nameFunction(0xC318E0, "Havok_hkOstream::Destructor");
	nameFunction(0xC45760, "Havok_hkCollisionDispatcher::Constructor");
	nameFunction(0xC45AD0, "Havok_hkCollisionDispatcher::DebugPrintTable");
	nameFunction(0xC59D70, "Havok_hkGetShapeTypeName");
	nameFunction(0xC742B0, "Havok_hkpNullAgent::createNullAgent");
	nameFunction(0xC7C0E0, "Havok_hkpWorld::hkpWorld");
	nameFunction(0xC97B20, "Havok_hkpSimpleConstraintContactMgr::Factory");
}

static cameraFunctions()
{
	nameFunction(0x614300, "Camera_Update");
	nameLocal(0x614300, "[bp+0X8]", "playerIndex");
}

static networkFunctions()
{
	nameFunction(0x42EF60, "Network_get_unique_player_name");
	nameFunction(0x42F1F0, "Network_set_machine_name");
	nameFunction(0x4300F0, "Network_netdebug_process_next_task");
	nameFunction(0x42FF70, "Network_netdebug_process_file_upload");
	nameFunction(0x430470, "Network_upload_synchronous");
	nameFunction(0x42F5A0, "Network_build_sessionid_time_segment");
	nameFunction(0x4306C0, "Network_transport_global_update");
	nameFunction(0x430820, "Network_transport_startup");
	nameFunction(0x430F60, "Network_transport_secure_key_create");
	nameFunction(0x430CF0, "Network_transport_secure_address_resolve");

	nameFunction(0x4322A0, "Network_c_online_lsp_manager::update_online_status");
	nameFunction(0x432400, "Network_c_online_lsp_manager::update_online_status_2");
	nameFunction(0x431440, "Network_c_online_lsp_manager::acquire_server");
	nameFunction(0x431C40, "Network_c_online_lsp_manager::go_into_crash_mode");

	nameFunction(0x433160, "Network_c_http_client::do_work");
	nameFunction(0x433CF0, "Network_c_http_client::start_connect");
	nameFunction(0x433DE0, "Network_c_http_client::start_connect_2");
	nameFunction(0x4339C0, "Network_c_http_client::send_data");
	nameFunction(0x433760, "Network_c_http_client::receive_data");

	nameFunction(0x4341F0, "Network_transport_endpoint_set_create");
	nameFunction(0x4342D0, "Network_transport_endpoint_set_poll");

	nameFunction(0x439BA0, "Network_squad_session_set_maximum_player_count");
	nameFunction(0x439390, "Network_squad_session_request_campaign_quit");
	nameFunction(0x439960, "Network_squad_session_set_hopper_statistics");
	nameFunction(0x438640, "Network_squad_session_delegate_leadership");
	nameFunction(0x438780, "Network_squad_session_end_game");
	nameFunction(0x437D60, "Network_squad_session_boot_player");

	nameFunction(0x4365D0, "Network_session_interface_handle_message");
	nameFunction(0x436000, "Network_session_interface_add_local_user");
	nameFunction(0x436810, "Network_session_interface_remove_local_user");
	nameFunction(0x436B30, "Network_session_interface_set_local_user_state");
	nameFunction(0x436B70, "Network_session_interface_set_local_user_xuid");
	nameFunction(0x436A60, "Network_session_interface_set_local_user_override_hopper_directory");
	nameFunction(0x436960, "Network_session_interface_set_live_service_qos");
	nameFunction(0x436CF0, "Network_session_interface_update_local_state");
	nameFunction(0x437020, "Network_session_interface_update_session");
	nameFunction(0x4375D0, "Network_session_update_peer_properties");
	nameFunction(0x437390, "Network_session_update_local_specific_parameters");
	nameFunction(0x437CE0, "Network_session_update_user_removal");
	nameFunction(0x437B30, "Network_session_update_user_properties");

	nameFunction(0x43BAB0, "Network_c_network_link::initialize_link");
	nameFunction(0x43B6F0, "Network_c_network_link::create_endpoint");
	nameFunction(0x43C250, "Network_c_network_link::send_out_of_band");
	nameFunction(0x43C370, "Network_c_network_link::send_packet_internal");
	nameFunction(0x43B820, "Network_c_network_link::decode_packet");
	nameFunction(0x43BC70, "Network_c_network_link::read_data_immediate");
	nameFunction(0x43BEC0, "Network_c_network_link::read_data_immediate_2");
	nameFunction(0x43C150, "Network_c_network_link::send_data_immediate");

	nameFunction(0x43F860, "Network_transport_address_valid");
	nameFunction(0x43FDF0, "Network_transport_endpoint_create");
	nameFunction(0x43F980, "Network_get_platform_socket_option");

	nameFunction(0x43FF80, "Network_transport_endpoint_get_option_value");
	nameFunction(0x440520, "Network_transport_endpoint_set_option_value");
	nameFunction(0x440470, "Network_transport_endpoint_set_blocking");
	nameFunction(0x43FB60, "Network_transport_endpoint_async_is_connected");
	nameFunction(0x440000, "Network_transport_endpoint_get_socket_address");
	nameFunction(0x440120, "Network_transport_endpoint_get_transport_address"); // on line 169 of 1515....

	nameFunction(0x483DE0, "Network_c_network_message_gateway::initialize_gateway");

	nameFunction(0x45CAB0, "Network_c_network_session::initialize_session");
	nameFunction(0x45B270, "Network_c_network_session::connect_peer_to_remote_session");
	nameFunction(0x45B310, "Network_c_network_session::create_host_session");
	nameFunction(0x45DD20, "Network_c_network_session::peer_request_player_desired_properties_update");
	nameFunction(0x45B6D0, "Network_c_network_session::create_session_for_remote_join");
	nameFunction(0x45B960, "Network_c_network_session::destroy_session");

	nameFunction(0x4A5AC0, "Network_c_network_storage_manifest::get");

	nameFunction(0x4474F0, "Network_c_network_observer::observer_channel_send_message");
	nameFunction(0x445840, "Network_c_network_observer::build_secure_connection");
	nameFunction(0x4466A0, "Network_c_network_observer::handle_connect_request");

	nameFunction(0x48D220, "Network_c_life_cycle_state_handler::enter");
	nameFunction(0x48D280, "Network_c_life_cycle_state_handler::exit");

	nameFunction(0x48F200, "Network_c_life_cycle_state_handler_none::update");
	nameFunction(0x48F260, "Network_c_life_cycle_state_handler_none::update_for_state_transition");
	nameFunction(0x48F180, "Network_c_life_cycle_state_handler_none::enter");
	nameFunction(0x48F1C0, "Network_c_life_cycle_state_handler_none::exit");
	nameFunction(0x4547B0, "Network_c_life_cycle_state_handler_none::get_name");

	nameFunction(0x4905F0, "Network_c_life_cycle_state_handler_pre_game::update");
	nameFunction(0x490680, "Network_c_life_cycle_state_handler_pre_game::update_for_state_transition");
	nameFunction(0x48F290, "Network_c_life_cycle_state_handler_pre_game::enter");
	nameFunction(0x48F340, "Network_c_life_cycle_state_handler_pre_game::exit");
	nameFunction(0x4547D0, "Network_c_life_cycle_state_handler_pre_game::get_name");

	nameFunction(0x490A20, "Network_c_life_cycle_state_handler_matchmaking_select_host::update");
	nameFunction(0x490AC0, "Network_c_life_cycle_state_handler_matchmaking_select_host::update_for_state_transition");
	nameFunction(0x490800, "Network_c_life_cycle_state_handler_matchmaking_select_host::enter");
	nameFunction(0x490850, "Network_c_life_cycle_state_handler_matchmaking_select_host::exit");
	nameFunction(0x454790, "Network_c_life_cycle_state_handler_matchmaking_select_host::get_name");
	nameFunction(0x490930, "Network_c_life_cycle_state_handler_matchmaking_select_host::handle_missing_required_session_parameter");

	nameFunction(0x490FB0, "Network_c_life_cycle_state_handler_start_game::update");
	nameFunction(0x491010, "Network_c_life_cycle_state_handler_start_game::update_for_state_transition");
	nameFunction(0x490C30, "Network_c_life_cycle_state_handler_start_game::enter");
	nameFunction(0x490CA0, "Network_c_life_cycle_state_handler_start_game::exit");
	nameFunction(0x4547E0, "Network_c_life_cycle_state_handler_start_game::get_name");

	nameFunction(0x491270, "Network_c_life_cycle_state_handler_in_match::update");
	nameFunction(0x491480, "Network_c_life_cycle_state_handler_in_match::update_for_state_transition");
	nameFunction(0x491080, "Network_c_life_cycle_state_handler_in_match::enter");
	nameFunction(0x4910E0, "Network_c_life_cycle_state_handler_in_match::exit");
	nameFunction(0x454700, "Network_c_life_cycle_state_handler_in_match::get_name");

	nameFunction(0x4923E0, "Network_c_life_cycle_state_handler_in_game::update");
	nameFunction(0x492960, "Network_c_life_cycle_state_handler_in_game::update_for_state_transition");
	nameFunction(0x4920C0, "Network_c_life_cycle_state_handler_in_game::enter");
	nameFunction(0x492140, "Network_c_life_cycle_state_handler_in_game::exit");
	nameFunction(0x4546F0, "Network_c_life_cycle_state_handler_in_game::get_name");

	nameFunction(0x492E10, "Network_c_life_cycle_state_handler_end_game_write_stats::update");
	nameFunction(0x493170, "Network_c_life_cycle_state_handler_end_game_write_stats::update_for_state_transition");
	nameFunction(0x492B50, "Network_c_life_cycle_state_handler_end_game_write_stats::enter");
	nameFunction(0x492C10, "Network_c_life_cycle_state_handler_end_game_write_stats::exit");
	nameFunction(0x4546D0, "Network_c_life_cycle_state_handler_end_game_write_stats::get_name");

	nameFunction(0x493500, "Network_c_life_cycle_state_handler_leaving::update");
	nameFunction(0x493610, "Network_c_life_cycle_state_handler_leaving::update_for_state_transition");
	nameFunction(0x4933E0, "Network_c_life_cycle_state_handler_leaving::enter");
	nameFunction(0x493460, "Network_c_life_cycle_state_handler_leaving::exit");
	nameFunction(0x454720, "Network_c_life_cycle_state_handler_leaving::get_name");

	nameFunction(0x4937F0, "Network_c_life_cycle_state_handler_joining::update");
	nameFunction(0x493890, "Network_c_life_cycle_state_handler_joining::update_for_state_transition");
	nameFunction(0x493670, "Network_c_life_cycle_state_handler_joining::enter");
	nameFunction(0x493750, "Network_c_life_cycle_state_handler_joining::exit");
	nameFunction(0x454710, "Network_c_life_cycle_state_handler_joining::get_name");

	nameFunction(0x4941D0, "Network_c_life_cycle_state_handler_matchmaking_start::update");
	nameFunction(0x494440, "Network_c_life_cycle_state_handler_matchmaking_start::update_for_state_transition");
	nameFunction(0x493A50, "Network_c_life_cycle_state_handler_matchmaking_start::enter");
	nameFunction(0x493C60, "Network_c_life_cycle_state_handler_matchmaking_start::exit");
	nameFunction(0x4547A0, "Network_c_life_cycle_state_handler_matchmaking_start::get_name");
	nameFunction(0x494010, "Network_c_life_cycle_state_handler_matchmaking_start::handle_missing_required_session_parameter");

	nameFunction(0x494EF0, "Network_c_life_cycle_state_handler_matchmaking_arbitration::update");
	nameFunction(0x495450, "Network_c_life_cycle_state_handler_matchmaking_arbitration::update_for_state_transition");
	nameFunction(0x4946E0, "Network_c_life_cycle_state_handler_matchmaking_arbitration::enter");
	nameFunction(0x4947E0, "Network_c_life_cycle_state_handler_matchmaking_arbitration::exit");
	nameFunction(0x454730, "Network_c_life_cycle_state_handler_matchmaking_arbitration::get_name");
	nameFunction(0x494960, "Network_c_life_cycle_state_handler_matchmaking_arbitration::handle_missing_required_session_parameter");

	nameFunction(0x495AB0, "Network_c_life_cycle_state_handler_matchmaking_find_match_client::update");
	nameFunction(0x495AC0, "Network_c_life_cycle_state_handler_matchmaking_find_match_client::update_for_state_transition");
	nameFunction(0x495A10, "Network_c_life_cycle_state_handler_matchmaking_find_match_client::enter");
	nameFunction(0x495A40, "Network_c_life_cycle_state_handler_matchmaking_find_match_client::exit");
	nameFunction(0x454770, "Network_c_life_cycle_state_handler_matchmaking_find_match_client::get_name");
	nameFunction(0x495A60, "Network_c_life_cycle_state_handler_matchmaking_find_match_client::handle_missing_required_session_parameter");

	nameFunction(0x495E20, "Network_c_life_cycle_state_handler_matchmaking_find_match::update");
	nameFunction(0x495EA0, "Network_c_life_cycle_state_handler_matchmaking_find_match::update_for_state_transition");
	nameFunction(0x495B60, "Network_c_life_cycle_state_handler_matchmaking_find_match::enter");
	nameFunction(0x495BB0, "Network_c_life_cycle_state_handler_matchmaking_find_match::exit");
	nameFunction(0x454760, "Network_c_life_cycle_state_handler_matchmaking_find_match::get_name");
	nameFunction(0x495D30, "Network_c_life_cycle_state_handler_matchmaking_find_match::handle_missing_required_session_parameter");

	nameFunction(0x496860, "Network_c_life_cycle_state_handler_matchmaking_find_and_assemble_match::update");
	nameFunction(0x496910, "Network_c_life_cycle_state_handler_matchmaking_find_and_assemble_match::update_for_state_transition");
	nameFunction(0x4963D0, "Network_c_life_cycle_state_handler_matchmaking_find_and_assemble_match::enter");
	nameFunction(0x496490, "Network_c_life_cycle_state_handler_matchmaking_find_and_assemble_match::exit");
	nameFunction(0x454750, "Network_c_life_cycle_state_handler_matchmaking_find_and_assemble_match::get_name");
	nameFunction(0x496740, "Network_c_life_cycle_state_handler_matchmaking_find_and_assemble_match::handle_missing_required_session_parameter");

	nameFunction(0x497D80, "Network_c_life_cycle_state_handler_matchmaking_assemble_match::update");
	nameFunction(0x498130, "Network_c_life_cycle_state_handler_matchmaking_assemble_match::update_for_state_transition");
	nameFunction(0x497280, "Network_c_life_cycle_state_handler_matchmaking_assemble_match::enter");
	nameFunction(0x497370, "Network_c_life_cycle_state_handler_matchmaking_assemble_match::exit");
	nameFunction(0x454740, "Network_c_life_cycle_state_handler_matchmaking_assemble_match::get_name");
	nameFunction(0x497920, "Network_c_life_cycle_state_handler_matchmaking_assemble_match::handle_missing_required_session_parameter");

	nameFunction(0x498A20, "Network_c_life_cycle_state_handler_matchmaking_prepare_map::update");
	nameFunction(0x498C70, "Network_c_life_cycle_state_handler_matchmaking_prepare_map::update_for_state_transition");
	nameFunction(0x4983C0, "Network_c_life_cycle_state_handler_matchmaking_prepare_map::enter");
	nameFunction(0x498450, "Network_c_life_cycle_state_handler_matchmaking_prepare_map::exit");
	nameFunction(0x454780, "Network_c_life_cycle_state_handler_matchmaking_prepare_map::get_name");
	nameFunction(0x498800, "Network_c_life_cycle_state_handler_matchmaking_prepare_map::handle_missing_required_session_parameter");

	nameFunction(0x499840, "Network_c_life_cycle_state_handler_end_match_write_stats::update");
	nameFunction(0x499B60, "Network_c_life_cycle_state_handler_end_match_write_stats::update_for_state_transition");
	nameFunction(0x499630, "Network_c_life_cycle_state_handler_end_match_write_stats::enter");
	nameFunction(0x499680, "Network_c_life_cycle_state_handler_end_match_write_stats::exit");
	nameFunction(0x4546E0, "Network_c_life_cycle_state_handler_end_match_write_stats::get_name");

	nameFunction(0x49A680, "Network_c_life_cycle_state_handler_post_match::update");
	nameFunction(0x49A7C0, "Network_c_life_cycle_state_handler_post_match::update_for_state_transition");
	nameFunction(0x499D70, "Network_c_life_cycle_state_handler_post_match::enter");
	nameFunction(0x499DE0, "Network_c_life_cycle_state_handler_post_match::exit");
	nameFunction(0x4547C0, "Network_c_life_cycle_state_handler_post_match::get_name");
	nameFunction(0x49A3D0, "Network_c_life_cycle_state_handler_post_match::handle_missing_required_session_parameter");

	nameFunction(0x48E920, "Network_c_life_cycle_state_manager::update_handle_session_states");

	nameFunction(0x456170, "Network_c_network_session_parameter_game_variant::request_change");
	nameFunction(0x456220, "Network_c_network_session_parameter_game_variant::set");


	nameFunction(0x4D26C0, "Network_Properties_ClearRegisteredProperties");
	nameFunction(0x4DB5F0, "Network_Properties_RegisterAll");
	nameFunction(0x4D27A0, "Network_Properties_Register");
	nameFunction(0x450890, "Network_PlayerProperties_Apply");
	nameFunction(0x4433C0, "Network_PlayerProperties_Serialize");
	nameFunction(0x4432E0, "Network_PlayerProperties_Deserialize");

	nameFunction(0xD858D0, "Network_DebugLog");
	nameFunction(0x442A90, "Network_IsConnectedToLive");
	nameFunction(0x442BB0, "Network_SetIsConnectedToLive");
	nameFunction(0x52E280, "Network_GetPlayerIndex");

	nameFunction(0x49E1B0, "Network_network_initialize");
	nameFunction(0x481110, "Network_managed_session_create_client");
	nameFunction(0x481270, "Network_managed_session_create_host");
	nameFunction(0x481550, "Network_managed_session_create_session_internal");
	nameFunction(0x482880, "Network_managed_session_process_pending_operations");
	nameFunction(0x47ECF0, "Network_network_join_to_remote_squad");
	nameFunction(0x47EEA0, "Network_network_join_update");
	nameFunction(0x454930, "Network_network_life_cycle_create_local_squad");
	nameFunction(0x454B40, "Network_network_life_cycle_end");

	nameFunction(0x47FF50, "Network_Packets_ClearRegisteredPackets");
	nameFunction(0x4801B0, "Network_Packets_Register");
	nameFunction(0x4DC3D0, "Network_Packets_Broadcast_RegisterAll");
	nameFunction(0x4DC850, "Network_Packets_Handshake_RegisterAll");
	nameFunction(0x4DD5D0, "Network_Packets_Connection_RegisterAll");
	nameFunction(0x4DFE60, "Network_Packets_InGame_RegisterAll");
	nameFunction(0x4E0030, "Network_Packets_Unk1_RegisterAll");
	nameFunction(0x4E0410, "Network_Packets_Unk2_RegisterAll");
	nameFunction(0x4E0D70, "Network_Packets_Theatre_RegisterAll");
	nameFunction(0x4E0EF0, "Network_Packets_EndGame_RegisterAll");
	nameFunction(0x4E1000, "Network_Packets_Test_RegisterAll");
	nameFunction(0x482040, "Network_Packets_InitPacket");

	nameFunction(0x48DE50, "Network_State_SetCurrentStateIdx");

	nameFunction(0x430B60, "Network_XnAddrToInAddr_jmp");
	nameFunction(0x52D840, "Network_XnAddrToInAddr");
	nameFunction(0x430F30, "Network_InAddrToXnAddr_jmp");
	nameFunction(0x52D970, "Network_InAddrToXnAddr");
	nameFunction(0x43F6F0, "Network_GetIPStringFromInAddr");
}