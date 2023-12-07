
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package OpenColorIO.

/// Struct /Script/OpenColorIO.OpenColorIOColorSpace
/// Size: 0x0028 (0x000000 - 0x000028)
struct FOpenColorIOColorSpace
{ 
	FString                                            ColorSpaceName;                                             // 0x0000   (0x0010)  
	int32_t                                            ColorSpaceIndex;                                            // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0014   (0x0004)  MISSED
	FString                                            FamilyName;                                                 // 0x0018   (0x0010)  
};

/// Struct /Script/OpenColorIO.OpenColorIODisplayView
/// Size: 0x0020 (0x000000 - 0x000020)
struct FOpenColorIODisplayView
{ 
	FString                                            Display;                                                    // 0x0000   (0x0010)  
	FString                                            View;                                                       // 0x0010   (0x0010)  
};

/// Struct /Script/OpenColorIO.OpenColorIOColorConversionSettings
/// Size: 0x0098 (0x000000 - 0x000098)
struct FOpenColorIOColorConversionSettings
{ 
	UOpenColorIOConfiguration*                         ConfigurationSource;                                        // 0x0000   (0x0008)  
	FOpenColorIOColorSpace                             SourceColorSpace;                                           // 0x0008   (0x0028)  
	FOpenColorIOColorSpace                             DestinationColorSpace;                                      // 0x0030   (0x0028)  
	FOpenColorIODisplayView                            DestinationDisplayView;                                     // 0x0058   (0x0020)  
	EOpenColorIOViewTransformDirection                 DisplayViewDirection;                                       // 0x0078   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1F];                                      // 0x0079   (0x001F)  MISSED
};

/// Struct /Script/OpenColorIO.OpenColorIODisplayConfiguration
/// Size: 0x00A0 (0x000000 - 0x0000A0)
struct FOpenColorIODisplayConfiguration
{ 
	bool                                               bIsEnabled;                                                 // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	FOpenColorIOColorConversionSettings                ColorConfiguration;                                         // 0x0008   (0x0098)  
};

/// Class /Script/OpenColorIO.OpenColorIOSettings
/// Size: 0x0008 (0x000038 - 0x000040)
class UOpenColorIOSettings : public UDeveloperSettings : UDeveloperSettings
{ 
public:
	bool                                               bUseLegacyProcessor : 1;                                    // 0x0038:0 (0x0001)  
	bool                                               bUse32fLUT : 1;                                             // 0x0038:1 (0x0001)  
	bool                                               bSupportInverseViewTransforms : 1;                          // 0x0038:2 (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0039   (0x0007)  MISSED
};

/// Class /Script/OpenColorIO.OpenColorIOBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UOpenColorIOBlueprintLibrary : public UBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/OpenColorIO.OpenColorIOColorTransform
/// Size: 0x0140 (0x000028 - 0x000168)
class UOpenColorIOColorTransform : public UObject : UObject
{ 
public:
	UOpenColorIOConfiguration*                         ConfigurationOwner;                                         // 0x0028   (0x0008)  
	bool                                               bIsDisplayViewType;                                         // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0031   (0x0007)  MISSED
	FString                                            SourceColorSpace;                                           // 0x0038   (0x0010)  
	FString                                            DestinationColorSpace;                                      // 0x0048   (0x0010)  
	FString                                            Display;                                                    // 0x0058   (0x0010)  
	FString                                            View;                                                       // 0x0068   (0x0010)  
	EOpenColorIOViewTransformDirection                 DisplayViewDirection;                                       // 0x0078   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0079   (0x0007)  MISSED
	TMap<int32_t, UTexture*>                           Textures;                                                   // 0x0080   (0x0050)  
	unsigned char                                      UnknownData02_6[0x98];                                      // 0x00D0   (0x0098)  MISSED
};

/// Class /Script/OpenColorIO.OpenColorIOConfiguration
/// Size: 0x0070 (0x000028 - 0x000098)
class UOpenColorIOConfiguration : public UObject : UObject
{ 
public:
	FFilePath                                          ConfigurationFile;                                          // 0x0028   (0x0010)  
	TArray<FOpenColorIOColorSpace>                     DesiredColorSpaces;                                         // 0x0038   (0x0010)  
	TArray<FOpenColorIODisplayView>                    DesiredDisplayViews;                                        // 0x0048   (0x0010)  
	TArray<UOpenColorIOColorTransform*>                ColorTransforms;                                            // 0x0058   (0x0010)  
	unsigned char                                      UnknownData00_6[0x30];                                      // 0x0068   (0x0030)  MISSED


	/// Functions
	// Function /Script/OpenColorIO.OpenColorIOConfiguration.ReloadExistingColorspaces
	void ReloadExistingColorspaces();                                                                                        // [0xd0bd90] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/OpenColorIO.OpenColorIODisplayExtensionWrapper
/// Size: 0x0010 (0x000028 - 0x000038)
class UOpenColorIODisplayExtensionWrapper : public UObject : UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED
};

/// Enum /Script/OpenColorIO.EOpenColorIOViewTransformDirection
/// Size: 0x03
enum EOpenColorIOViewTransformDirection : uint8_t
{
	EOpenColorIOViewTransformDirection__Forward0                                     = 0,
	EOpenColorIOViewTransformDirection__Inverse1                                     = 1,
	EOpenColorIOViewTransformDirection__EOpenColorIOViewTransformDirection_MAX2      = 2
};

