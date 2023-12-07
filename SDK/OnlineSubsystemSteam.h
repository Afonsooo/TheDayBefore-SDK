
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package OnlineSubsystemSteam.

/// Class /Script/OnlineSubsystemSteam.SteamAuthComponentModuleInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class USteamAuthComponentModuleInterface : public UHandlerComponentFactory : UHandlerComponentFactory
{ 
public:
};

/// Class /Script/OnlineSubsystemSteam.SteamNetConnection
/// Size: 0x0008 (0x001E48 - 0x001E50)
class USteamNetConnection : public UIpConnection : UIpConnection
{ 
public:
	bool                                               bIsPassthrough;                                             // 0x1E48   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x1E49   (0x0007)  MISSED
};

/// Class /Script/OnlineSubsystemSteam.SteamNetDriver
/// Size: 0x0008 (0x000858 - 0x000860)
class USteamNetDriver : public UIpNetDriver : UIpNetDriver
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0858   (0x0008)  MISSED
};

