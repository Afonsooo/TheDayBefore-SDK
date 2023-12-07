
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package BattlEye.

/// Struct /Script/BattlEye.SteamReqData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FSteamReqData
{ 
	FString                                            SteamSessionTicket;                                         // 0x0000   (0x0010)  
};

/// Class /Script/BattlEye.BE_Client
/// Size: 0x0008 (0x000028 - 0x000030)
class UBE_Client : public UObject : UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/BattlEye.BE_GameInstance
/// Size: 0x0030 (0x0001C0 - 0x0001F0)
class UBE_GameInstance : public UGameInstance : UGameInstance
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x01C0   (0x0010)  MISSED
	FString                                            BattlEyeServerIpAddress;                                    // 0x01D0   (0x0010)  
	int32_t                                            BattlEyeServerPort;                                         // 0x01E0   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x01E4   (0x0004)  MISSED
	int64_t                                            SteamID;                                                    // 0x01E8   (0x0008)  


	/// Functions
	// Function /Script/BattlEye.BE_GameInstance.OnRequestRestartClient
	void OnRequestRestartClient(ERestartReason pReason);                                                                     // [0x1932490] Native|Event|Public|BlueprintEvent 
	// Function /Script/BattlEye.BE_GameInstance.OnPrintMessageServer
	void OnPrintMessageServer(FString pMessage, EMessageType pType);                                                         // [0x1932300] Native|Event|Public|BlueprintEvent 
	// Function /Script/BattlEye.BE_GameInstance.OnPrintMessageClient
	void OnPrintMessageClient(FString pMessage);                                                                             // [0x1932280] Native|Event|Public|BlueprintEvent 
	// Function /Script/BattlEye.BE_GameInstance.InitClient
	bool InitClient();                                                                                                       // [0x1932190] Final|Native|Public|BlueprintCallable 
	// Function /Script/BattlEye.BE_GameInstance.GetBEServerVersion
	int32_t GetBEServerVersion();                                                                                            // [0x1932020] Final|Native|Public|BlueprintCallable 
	// Function /Script/BattlEye.BE_GameInstance.GetBEClientVersion
	int32_t GetBEClientVersion();                                                                                            // [0x1931fc0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/BattlEye.BE_GameMode
/// Size: 0x0058 (0x000330 - 0x000388)
class ABE_GameMode : public AGameModeBase : AGameModeBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x58];                                      // 0x0330   (0x0058)  MISSED
};

/// Class /Script/BattlEye.BE_PlayerController
/// Size: 0x0018 (0x000850 - 0x000868)
class ABE_PlayerController : public APlayerController : APlayerController
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0850   (0x0018)  MISSED
};

/// Class /Script/BattlEye.BE_Server
/// Size: 0x0028 (0x000028 - 0x000050)
class UBE_Server : public UObject : UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x0028   (0x0028)  MISSED
};

/// Enum /Script/BattlEye.EMessageType
/// Size: 0x04
enum EMessageType : uint8_t
{
	EMessageType__Info0                                                              = 0,
	EMessageType__Warning1                                                           = 1,
	EMessageType__Error2                                                             = 2,
	EMessageType__EMessageType_MAX3                                                  = 3
};

/// Enum /Script/BattlEye.EPlayerStatus
/// Size: 0x04
enum EPlayerStatus : uint8_t
{
	EPlayerStatus__Disconnected0                                                     = 0,
	EPlayerStatus__PreGame1                                                          = 1,
	EPlayerStatus__InGame2                                                           = 2,
	EPlayerStatus__EPlayerStatus_MAX3                                                = 3
};

/// Enum /Script/BattlEye.ERestartReason
/// Size: 0x03
enum ERestartReason : uint8_t
{
	ERestartReason__NotRunProperly0                                                  = 0,
	ERestartReason__NeedUpdate1                                                      = 1,
	ERestartReason__ERestartReason_MAX2                                              = 2
};

