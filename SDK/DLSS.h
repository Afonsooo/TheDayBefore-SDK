
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package DLSS.

/// Class /Script/DLSS.DLSSOverrideSettings
/// Size: 0x0008 (0x000028 - 0x000030)
class UDLSSOverrideSettings : public UObject : UObject
{ 
public:
	EDLSSSettingOverride                               EnableDLSSInEditorViewportsOverride;                        // 0x0028   (0x0001)  
	EDLSSSettingOverride                               EnableDLSSInPlayInEditorViewportsOverride;                  // 0x0029   (0x0001)  
	bool                                               bShowDLSSIncompatiblePluginsToolsWarnings;                  // 0x002A   (0x0001)  
	EDLSSSettingOverride                               ShowDLSSSDebugOnScreenMessages;                             // 0x002B   (0x0001)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Class /Script/DLSS.DLSSSettings
/// Size: 0x0040 (0x000028 - 0x000068)
class UDLSSSettings : public UObject : UObject
{ 
public:
	bool                                               bEnableDLSSD3D12;                                           // 0x0028   (0x0001)  
	bool                                               bEnableDLSSD3D11;                                           // 0x0029   (0x0001)  
	bool                                               bEnableDLSSVulkan;                                          // 0x002A   (0x0001)  
	bool                                               bEnableDLSSInEditorViewports;                               // 0x002B   (0x0001)  
	bool                                               bEnableDLSSInPlayInEditorViewports;                         // 0x002C   (0x0001)  
	bool                                               bShowDLSSSDebugOnScreenMessages;                            // 0x002D   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x002E   (0x0002)  MISSED
	FString                                            GenericDLSSBinaryPath;                                      // 0x0030   (0x0010)  
	bool                                               bGenericDLSSBinaryExists;                                   // 0x0040   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0041   (0x0003)  MISSED
	uint32_t                                           NVIDIANGXApplicationId;                                     // 0x0044   (0x0004)  
	FString                                            CustomDLSSBinaryPath;                                       // 0x0048   (0x0010)  
	bool                                               bCustomDLSSBinaryExists;                                    // 0x0058   (0x0001)  
	bool                                               bAllowOTAUpdate;                                            // 0x0059   (0x0001)  
	bool                                               bShowDLSSIncompatiblePluginsToolsWarnings;                  // 0x005A   (0x0001)  
	EDLSSPreset                                        DLAAPreset;                                                 // 0x005B   (0x0001)  
	unsigned char                                      UnknownData02_5[0x1];                                       // 0x005C   (0x0001)  MISSED
	EDLSSPreset                                        DLSSQualityPreset;                                          // 0x005D   (0x0001)  
	EDLSSPreset                                        DLSSBalancedPreset;                                         // 0x005E   (0x0001)  
	EDLSSPreset                                        DLSSPerformancePreset;                                      // 0x005F   (0x0001)  
	EDLSSPreset                                        DLSSUltraPerformancePreset;                                 // 0x0060   (0x0001)  
	unsigned char                                      UnknownData03_6[0x7];                                       // 0x0061   (0x0007)  MISSED
};

/// Enum /Script/DLSS.EDLSSSettingOverride
/// Size: 0x04
enum EDLSSSettingOverride : uint8_t
{
	EDLSSSettingOverride__Enabled0                                                   = 0,
	EDLSSSettingOverride__Disabled1                                                  = 1,
	EDLSSSettingOverride__UseProjectSettings2                                        = 2,
	EDLSSSettingOverride__EDLSSSettingOverride_MAX3                                  = 3
};

/// Enum /Script/DLSS.EDLSSPreset
/// Size: 0x09
enum EDLSSPreset : uint8_t
{
	EDLSSPreset__Default0                                                            = 0,
	EDLSSPreset__A1                                                                  = 1,
	EDLSSPreset__B2                                                                  = 2,
	EDLSSPreset__C3                                                                  = 3,
	EDLSSPreset__D4                                                                  = 4,
	EDLSSPreset__E5                                                                  = 5,
	EDLSSPreset__F6                                                                  = 6,
	EDLSSPreset__G7                                                                  = 7,
	EDLSSPreset__EDLSSPreset_MAX8                                                    = 8
};

