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

static main()
{
	nameFunction(0x5FFDE0, "Game_GetConfigValue");
	nameFunction(0x52FDC0, "Game_GetLanguageNameFromIdx");
	nameFunction(0x837110, "Game_ProcessAccountInfo");
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
	
	nameFunction(0x531E90, "Game_IsMapModeMainMenu");
	nameFunction(0x531C00, "Game_IsMapModeMultiplayer");
	nameFunction(0x505700, "Game_IsStopped");
	nameFunction(0x5056D0, "Game_StopGame");
	
	nameFunction(0xA21950, "Video_GetD3DCreate9Ex_Ptr");
	nameFunction(0xA218E0, "Video_GetD3DCreate9_Ptr");
	nameFunction(0x108E7A0, "Video_CallsD3DBeginScene");
	nameFunction(0xA21510, "Video_CallsD3DEndScene");
	nameFunction(0xA21B40, "Video_InitD3D");
	nameFunction(0x591F80, "Video_DrawPanCamText");

	nameFunction(0xA7DCA0, "User_IsProfileAvailable");
	
	nameFunction(0x60BE60, "Input_GamepadEnabled");
	nameFunction(0x65EF00, "Input_XInput_Init");
	nameFunction(0x65EEB0, "Input_XInput_Free");
	nameFunction(0x512690, "Input_XInput_Update");
	nameFunction(0x65EF60, "Input_XInput_GetState");
	
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
	
	nameFunction(0x43BAB0, "Network_c_network_link__initialize_link");
	nameFunction(0x43B6F0, "Network_c_network_link__create_endpoint");
	
	nameFunction(0x483DE0, "Network_c_network_message_gateway__initialize_gateway");
	
	nameFunction(0x45CAB0, "Network_c_network_session__initialize_session");
	nameFunction(0x45B270, "Network_c_network_session__connect_peer_to_remote_session");
	nameFunction(0x45B310, "Network_c_network_session__create_host_session");
	nameFunction(0x45DD20, "Network_c_network_session__peer_request_player_desired_properties_update");
	nameFunction(0x45B6D0, "Network_c_network_session__create_session_for_remote_join");
	nameFunction(0x45B960, "Network_c_network_session__destroy_session");
	
	nameFunction(0x4A5AC0, "Network_c_network_storage_manifest__get");
	
	nameFunction(0x4474F0, "Network_c_network_observer__observer_channel_send_message");
	nameFunction(0x445840, "Network_c_network_observer__build_secure_connection");
	nameFunction(0x4466A0, "Network_c_network_observer__handle_connect_request");
	
	nameFunction(0x48D220, "Network_c_life_cycle_state_handler__enter");
	nameFunction(0x4937F0, "Network_c_life_cycle_state_handler_joining__update");
	nameFunction(0x490680, "Network_c_life_cycle_state_handler_pre_game__update_for_state_transition");
	
	nameFunction(0x456170, "Network_c_network_session_parameter_game_variant__request_change");
	nameFunction(0x456220, "Network_c_network_session_parameter_game_variant__set");
	
	nameFunction(0x431C40, "Network_c_online_lsp_manager__go_into_crash_mode");

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
	nameFunction(0x436CF0, "Network_network_session_interface_update_local_state");
	nameFunction(0x4306C0, "Network_transport_global_update");
	nameFunction(0x430CF0, "Network_transport_secure_address_resolve");

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
	
	nameFunction(0x4546D0, "Network_State_EndGameWriteStats_GetName");
	nameFunction(0x4546E0, "Network_State_EndMatchWriteStats_GetName");
	nameFunction(0x4546F0, "Network_State_InGame_GetName");
	nameFunction(0x454700, "Network_State_InMatch_GetName");
	nameFunction(0x454710, "Network_State_Joining_GetName");
	nameFunction(0x454720, "Network_State_Leaving_GetName");
	nameFunction(0x454730, "Network_State_MatchmakingArbitration_GetName");
	nameFunction(0x454740, "Network_State_MatchmakingAssembleMatch_GetName");
	nameFunction(0x454750, "Network_State_MatchmakingFindAndAssembleMatch_GetName");
	nameFunction(0x454760, "Network_State_MatchmakingFindMatch_GetName");
	nameFunction(0x454770, "Network_State_MatchmakingFindMatchClient_GetName");
	nameFunction(0x454780, "Network_State_MatchmakingPrepareMap_GetName");
	nameFunction(0x454790, "Network_State_MatchmakingSelectHost_GetName");
	nameFunction(0x4547A0, "Network_State_MatchmakingStart_GetName");
	nameFunction(0x4547B0, "Network_State_None_GetName");
	nameFunction(0x4547C0, "Network_State_PostMatch_GetName");
	nameFunction(0x4547D0, "Network_State_Pregame_GetName");
	nameFunction(0x4547E0, "Network_State_StartGame_GetName");
	
	nameFunction(0x430B60, "Network_XnAddrToInAddr_jmp");
	nameFunction(0x52D840, "Network_XnAddrToInAddr");
	nameFunction(0x430F30, "Network_InAddrToXnAddr_jmp");
	nameFunction(0x52D970, "Network_InAddrToXnAddr");
	nameFunction(0x43F6F0, "Network_GetIPStringFromInAddr");

	nameFunction(0x4ECBD0, "Util_Utf16StrNotEmpty");
	nameFunction(0x401760, "Util_Utf16Concat");
	nameFunction(0x4ECCD0, "Util_Utf16Strcpy");

	nameFunction(0xADF6E0, "UI_MainMenu_Update");
	nameFunction(0xAC34A0, "UI_Lobby_InitNetworkSelection");
	nameFunction(0xAE2180, "UI_Forge_ButtonPressHandler");
	nameFunction(0xAB1BA0, "UI_ButtonPressHandler");
	nameFunction(0xA92780, "UI_InitById");
	nameFunction(0xABA240, "UI_ToggleVisibility");
	nameFunction(0xAABFD0, "UI_IsMenuIDValid");
	nameFunction(0xA926A0, "UI_InGame_InitScreenshotUploadingBox");

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
}