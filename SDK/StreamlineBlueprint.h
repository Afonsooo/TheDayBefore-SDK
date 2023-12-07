
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package StreamlineBlueprint.

/// Struct /Script/StreamlineBlueprint.StreamlineVersion
/// Size: 0x000C (0x000000 - 0x00000C)
struct FStreamlineVersion
{ 
	int32_t                                            Major;                                                      // 0x0000   (0x0004)  
	int32_t                                            Minor;                                                      // 0x0004   (0x0004)  
	int32_t                                            Build;                                                      // 0x0008   (0x0004)  
};

/// Struct /Script/StreamlineBlueprint.StreamlineFeatureRequirements
/// Size: 0x0034 (0x000000 - 0x000034)
struct FStreamlineFeatureRequirements
{ 
	UStreamlineFeatureSupport                          Support;                                                    // 0x0000   (0x0001)  
	UStreamlineFeatureRequirementsFlags                Requirements;                                               // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0002   (0x0002)  MISSED
	FStreamlineVersion                                 RequiredOperatingSystemVersion;                             // 0x0004   (0x000C)  
	FStreamlineVersion                                 DetectedOperatingSystemVersion;                             // 0x0010   (0x000C)  
	FStreamlineVersion                                 RequiredDriverVersion;                                      // 0x001C   (0x000C)  
	FStreamlineVersion                                 DetectedDriverVersion;                                      // 0x0028   (0x000C)  
};

/// Class /Script/StreamlineBlueprint.StreamlineLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UStreamlineLibrary : public UBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/StreamlineBlueprint.StreamlineLibraryDLSSG
/// Size: 0x0000 (0x000028 - 0x000028)
class UStreamlineLibraryDLSSG : public UBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/StreamlineBlueprint.StreamlineLibraryReflex
/// Size: 0x0000 (0x000028 - 0x000028)
class UStreamlineLibraryReflex : public UBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{ 
public:
};

/// Enum /Script/StreamlineBlueprint.UStreamlineFeature
/// Size: 0x04
enum UStreamlineFeature : uint8_t
{
	UStreamlineFeature__DLSSG0                                                       = 0,
	UStreamlineFeature__Reflex1                                                      = 1,
	UStreamlineFeature__Count2                                                       = 2,
	UStreamlineFeature__UStreamlineFeature_MAX3                                      = 3
};

/// Enum /Script/StreamlineBlueprint.UStreamlineFeatureSupport
/// Size: 0x10
enum UStreamlineFeatureSupport : uint8_t
{
	UStreamlineFeatureSupport__Supported0                                            = 0,
	UStreamlineFeatureSupport__NotSupported1                                         = 1,
	UStreamlineFeatureSupport__NotSupportedIncompatibleHardware2                     = 2,
	UStreamlineFeatureSupport__NotSupportedDriverOutOfDate3                          = 3,
	UStreamlineFeatureSupport__NotSupportedOperatingSystemOutOfDate4                 = 4,
	UStreamlineFeatureSupport__NotSupportedHardewareSchedulingDisabled5              = 5,
	UStreamlineFeatureSupport__NotSupportedByRHI6                                    = 6,
	UStreamlineFeatureSupport__NotSupportedByPlatformAtBuildTime7                    = 7,
	UStreamlineFeatureSupport__NotSupportedIncompatibleAPICaptureToolActive8         = 8,
	UStreamlineFeatureSupport__UStreamlineFeatureSupport_MAX9                        = 9
};

/// Enum /Script/StreamlineBlueprint.UStreamlineFeatureRequirementsFlags
/// Size: 0x07
enum UStreamlineFeatureRequirementsFlags : uint8_t
{
	UStreamlineFeatureRequirementsFlags__None0                                       = 0,
	UStreamlineFeatureRequirementsFlags__D3D11Supported1                             = 1,
	UStreamlineFeatureRequirementsFlags__D3D12Supported2                             = 2,
	UStreamlineFeatureRequirementsFlags__VulkanSupported3                            = 4,
	UStreamlineFeatureRequirementsFlags__VSyncOffRequired4                           = 8,
	UStreamlineFeatureRequirementsFlags__HardwareSchedulingRequired5                 = 16,
	UStreamlineFeatureRequirementsFlags__UStreamlineFeatureRequirementsFlags_MAX6    = 17
};

/// Enum /Script/StreamlineBlueprint.UStreamlineDLSSGMode
/// Size: 0x04
enum UStreamlineDLSSGMode : uint8_t
{
	UStreamlineDLSSGMode__Off0                                                       = 0,
	UStreamlineDLSSGMode__On1                                                        = 1,
	UStreamlineDLSSGMode__Auto2                                                      = 2,
	UStreamlineDLSSGMode__UStreamlineDLSSGMode_MAX3                                  = 3
};

/// Enum /Script/StreamlineBlueprint.UStreamlineReflexMode
/// Size: 0x04
enum UStreamlineReflexMode : uint8_t
{
	UStreamlineReflexMode__Disabled0                                                 = 0,
	UStreamlineReflexMode__Enabled1                                                  = 1,
	UStreamlineReflexMode__EnabledPlusBoost2                                         = 3,
	UStreamlineReflexMode__UStreamlineReflexMode_MAX3                                = 4
};

