
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package DeveloperSettings.

/// Struct /Script/DeveloperSettings.PerPlatformSettings
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPerPlatformSettings
{ 
	TArray<UPlatformSettings*>                         Settings;                                                   // 0x0000   (0x0010)  
};

/// Struct /Script/DeveloperSettings.PlatformSettingsInstances
/// Size: 0x0058 (0x000000 - 0x000058)
struct FPlatformSettingsInstances
{ 
	UPlatformSettings*                                 PlatformInstance;                                           // 0x0000   (0x0008)  
	TMap<FName, UPlatformSettings*>                    OtherPlatforms;                                             // 0x0008   (0x0050)  
};

/// Class /Script/DeveloperSettings.DeveloperSettings
/// Size: 0x0010 (0x000028 - 0x000038)
class UDeveloperSettings : public UObject : UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED
};

/// Class /Script/DeveloperSettings.PlatformSettings
/// Size: 0x0018 (0x000028 - 0x000040)
class UPlatformSettings : public UObject : UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0028   (0x0018)  MISSED
};

/// Class /Script/DeveloperSettings.DeveloperSettingsBackedByCVars
/// Size: 0x0000 (0x000038 - 0x000038)
class UDeveloperSettingsBackedByCVars : public UDeveloperSettings : UDeveloperSettings
{ 
public:
};

/// Class /Script/DeveloperSettings.PlatformSettingsManager
/// Size: 0x0058 (0x000028 - 0x000080)
class UPlatformSettingsManager : public UObject : UObject
{ 
public:
	TMap<UClass*, FPlatformSettingsInstances>          SettingsMap;                                                // 0x0028   (0x0050)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0078   (0x0008)  MISSED
};

