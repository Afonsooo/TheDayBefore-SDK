
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package CoreOnline.

/// Struct /Script/CoreOnline.JoinabilitySettings
/// Size: 0x0014 (0x000000 - 0x000014)
struct FJoinabilitySettings
{ 
	FName                                              SessionName;                                                // 0x0000   (0x0008)  
	bool                                               bPublicSearchable;                                          // 0x0008   (0x0001)  
	bool                                               bAllowInvites;                                              // 0x0009   (0x0001)  
	bool                                               bJoinViaPresence;                                           // 0x000A   (0x0001)  
	bool                                               bJoinViaPresenceFriendsOnly;                                // 0x000B   (0x0001)  
	int32_t                                            MaxPlayers;                                                 // 0x000C   (0x0004)  
	int32_t                                            MaxPartySize;                                               // 0x0010   (0x0004)  
};

/// Struct /Script/CoreOnline.UniqueNetIdWrapper
/// Size: 0x0001 (0x000000 - 0x000001)
struct FUniqueNetIdWrapper
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Enum /Script/CoreOnline.ECoreOnlineDummy
/// Size: 0x02
enum ECoreOnlineDummy : uint8_t
{
	ECoreOnlineDummy__Dummy0                                                         = 0,
	ECoreOnlineDummy__ECoreOnlineDummy_MAX1                                          = 1
};

