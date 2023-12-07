
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package StreamlineRHI.

/// Class /Script/StreamlineRHI.StreamlineOverrideSettings
/// Size: 0x0008 (0x000028 - 0x000030)
class UStreamlineOverrideSettings : public UObject : UObject
{ 
public:
	EStreamlineSettingOverride                         EnableDLSSFGInPlayInEditorViewportsOverride;                // 0x0028   (0x0001)  
	EStreamlineSettingOverride                         LoadDebugOverlayOverride;                                   // 0x0029   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x002A   (0x0006)  MISSED
};

/// Class /Script/StreamlineRHI.StreamlineSettings
/// Size: 0x0010 (0x000028 - 0x000038)
class UStreamlineSettings : public UObject : UObject
{ 
public:
	bool                                               bEnableStreamlineD3D12;                                     // 0x0028   (0x0001)  
	bool                                               bEnableStreamlineD3D11;                                     // 0x0029   (0x0001)  
	bool                                               bEnableDLSSFGInPlayInEditorViewports;                       // 0x002A   (0x0001)  
	bool                                               bLoadDebugOverlay;                                          // 0x002B   (0x0001)  
	bool                                               bAllowOTAUpdate;                                            // 0x002C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x002D   (0x0003)  MISSED
	int32_t                                            NVIDIANGXApplicationId;                                     // 0x0030   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Enum /Script/StreamlineRHI.EStreamlineSettingOverride
/// Size: 0x04
enum EStreamlineSettingOverride : uint8_t
{
	EStreamlineSettingOverride__Enabled0                                             = 0,
	EStreamlineSettingOverride__Disabled1                                            = 1,
	EStreamlineSettingOverride__UseProjectSettings2                                  = 2,
	EStreamlineSettingOverride__EStreamlineSettingOverride_MAX3                      = 3
};

