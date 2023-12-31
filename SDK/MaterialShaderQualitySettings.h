
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package MaterialShaderQualitySettings.

/// Struct /Script/MaterialShaderQualitySettings.MaterialQualityOverrides
/// Size: 0x0008 (0x000000 - 0x000008)
struct FMaterialQualityOverrides
{ 
	bool                                               bDiscardQualityDuringCook;                                  // 0x0000   (0x0001)  
	bool                                               bEnableOverride;                                            // 0x0001   (0x0001)  
	bool                                               bForceFullyRough;                                           // 0x0002   (0x0001)  
	bool                                               bForceNonMetal;                                             // 0x0003   (0x0001)  
	bool                                               bForceDisableLMDirectionality;                              // 0x0004   (0x0001)  
	bool                                               bForceDisablePreintegratedGF;                               // 0x0005   (0x0001)  
	bool                                               bDisableMaterialNormalCalculation;                          // 0x0006   (0x0001)  
	EMobileShadowQuality                               MobileShadowQuality;                                        // 0x0007   (0x0001)  
};

/// Class /Script/MaterialShaderQualitySettings.ShaderPlatformQualitySettings
/// Size: 0x0030 (0x000028 - 0x000058)
class UShaderPlatformQualitySettings : public UObject : UObject
{ 
public:
	FMaterialQualityOverrides                          QualityOverrides;                                           // 0x0028   (0x0020)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0048   (0x0010)  MISSED
};

/// Class /Script/MaterialShaderQualitySettings.MaterialShaderQualitySettings
/// Size: 0x0050 (0x000028 - 0x000078)
class UMaterialShaderQualitySettings : public UObject : UObject
{ 
public:
	TMap<FName, UShaderPlatformQualitySettings*>       ForwardSettingMap;                                          // 0x0028   (0x0050)  
};

/// Enum /Script/MaterialShaderQualitySettings.EMobileShadowQuality
/// Size: 0x05
enum EMobileShadowQuality : uint8_t
{
	EMobileShadowQuality__NoFiltering0                                               = 0,
	EMobileShadowQuality__PCF_1x11                                                   = 1,
	EMobileShadowQuality__PCF_3x32                                                   = 2,
	EMobileShadowQuality__PCF_5x53                                                   = 3,
	EMobileShadowQuality__EMobileShadowQuality_MAX4                                  = 4
};

