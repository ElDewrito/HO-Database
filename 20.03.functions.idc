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
	nameFunction(0x5CE190, "Game_GetCurrentGameVariant");
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

	nameFunction(0xA7DCA0, "User_IsProfileAvailable");

	nameFunction(0x55B410, "Globals_Push");
	nameFunction(0x55B2E0, "Globals_Pop");


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

	nameFunction(0xD858D0, "Network_DebugLog");

	nameFunction(0x49E1B0, "Network_network_initialize");
	nameFunction(0x43BAB0, "Network_c_network_link__initialize_link");
	nameFunction(0x483DE0, "Network_c_network_message_gateway__initialize_gateway");
	nameFunction(0x45CAB0, "Network_c_network_session__initialize_session");
	nameFunction(0x4A5AC0, "Network_c_network_storage_manifest__get");

	nameFunction(0x4D26C0, "Network_Properties_ClearRegisteredProperties");
	nameFunction(0x4DB5F0, "Network_Properties_RegisterAll");
	nameFunction(0x4D27A0, "Network_Properties_Register");
	nameFunction(0x450890, "Network_PlayerProperties_Apply");
	nameFunction(0x4433C0, "Network_PlayerProperties_Serialize");
	nameFunction(0x4432E0, "Network_PlayerProperties_Deserialize");
	nameFunction(0x45DD20, "Network_c_network_session__peer_request_player_desired_properties_update");

	nameFunction(0x52E280, "Network_GetPlayerIndex");

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

	nameFunction(0x4474F0, "Network_c_network_observer__observer_channel_send_message");

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

	nameFunction(0x4E1840, "VKeyboard_CreateKeyboard");
	nameFunction(0x4E19A0, "VKeyboard_SetDefaultValue");
	nameFunction(0x4E19D0, "VKeyboard_SetKeyboardTitle");
	nameFunction(0x4E19B0, "VKeyboard_SetKeyboardDescription");
	nameFunction(0x5A8F40, "VKeyboard_ShowKeyboard");
}