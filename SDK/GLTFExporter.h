
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package GLTFExporter.

/// Struct /Script/GLTFExporter.GLTFExportMessages
/// Size: 0x0030 (0x000000 - 0x000030)
struct FGLTFExportMessages
{ 
	TArray<FString>                                    Suggestions;                                                // 0x0000   (0x0010)  
	TArray<FString>                                    Warnings;                                                   // 0x0010   (0x0010)  
	TArray<FString>                                    Errors;                                                     // 0x0020   (0x0010)  
};

/// Struct /Script/GLTFExporter.GLTFOverrideMaterialBakeSettings
/// Size: 0x0006 (0x000000 - 0x000006)
struct FGLTFOverrideMaterialBakeSettings
{ 
	bool                                               bOverrideSize;                                              // 0x0000   (0x0001)  
	EGLTFMaterialBakeSizePOT                           Size;                                                       // 0x0001   (0x0001)  
	bool                                               bOverrideFilter;                                            // 0x0002   (0x0001)  
	TEnumAsByte<TextureFilter>                         Filter;                                                     // 0x0003   (0x0001)  
	bool                                               bOverrideTiling;                                            // 0x0004   (0x0001)  
	TEnumAsByte<TextureAddress>                        Tiling;                                                     // 0x0005   (0x0001)  
};

/// Class /Script/GLTFExporter.GLTFExportOptions
/// Size: 0x0078 (0x000028 - 0x0000A0)
class UGLTFExportOptions : public UObject : UObject
{ 
public:
	float                                              ExportUniformScale;                                         // 0x0028   (0x0004)  
	bool                                               bExportPreviewMesh;                                         // 0x002C   (0x0001)  
	bool                                               bSkipNearDefaultValues;                                     // 0x002D   (0x0001)  
	bool                                               bExportProxyMaterials;                                      // 0x002E   (0x0001)  
	bool                                               bExportUnlitMaterials;                                      // 0x002F   (0x0001)  
	bool                                               bExportClearCoatMaterials;                                  // 0x0030   (0x0001)  
	EGLTFMaterialBakeMode                              BakeMaterialInputs;                                         // 0x0031   (0x0001)  
	EGLTFMaterialBakeSizePOT                           DefaultMaterialBakeSize;                                    // 0x0032   (0x0001)  
	TEnumAsByte<TextureFilter>                         DefaultMaterialBakeFilter;                                  // 0x0033   (0x0001)  
	TEnumAsByte<TextureAddress>                        DefaultMaterialBakeTiling;                                  // 0x0034   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0035   (0x0003)  MISSED
	TMap<EGLTFMaterialPropertyGroup, FGLTFOverrideMaterialBakeSettings> DefaultInputBakeSettings;                  // 0x0038   (0x0050)  
	int32_t                                            DefaultLevelOfDetail;                                       // 0x0088   (0x0004)  
	bool                                               bExportVertexColors;                                        // 0x008C   (0x0001)  
	bool                                               bExportVertexSkinWeights;                                   // 0x008D   (0x0001)  
	bool                                               bUseMeshQuantization;                                       // 0x008E   (0x0001)  
	bool                                               bExportLevelSequences;                                      // 0x008F   (0x0001)  
	bool                                               bExportAnimationSequences;                                  // 0x0090   (0x0001)  
	EGLTFTextureImageFormat                            TextureImageFormat;                                         // 0x0091   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x0092   (0x0002)  MISSED
	int32_t                                            TextureImageQuality;                                        // 0x0094   (0x0004)  
	bool                                               bExportTextureTransforms;                                   // 0x0098   (0x0001)  
	bool                                               bAdjustNormalmaps;                                          // 0x0099   (0x0001)  
	bool                                               bExportHiddenInGame;                                        // 0x009A   (0x0001)  
	bool                                               bExportLights;                                              // 0x009B   (0x0001)  
	bool                                               bExportCameras;                                             // 0x009C   (0x0001)  
	EGLTFMaterialVariantMode                           ExportMaterialVariants;                                     // 0x009D   (0x0001)  
	unsigned char                                      UnknownData02_6[0x2];                                       // 0x009E   (0x0002)  MISSED


	/// Functions
	// Function /Script/GLTFExporter.GLTFExportOptions.ResetToDefault
	void ResetToDefault();                                                                                                   // [0x19fbb30] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GLTFExporter.GLTFExporter
/// Size: 0x0000 (0x000078 - 0x000078)
class UGLTFExporter : public UExporter : UExporter
{ 
public:
};

/// Class /Script/GLTFExporter.GLTFAnimSequenceExporter
/// Size: 0x0000 (0x000078 - 0x000078)
class UGLTFAnimSequenceExporter : public UGLTFExporter : UGLTFExporter
{ 
public:
};

/// Class /Script/GLTFExporter.GLTFLevelExporter
/// Size: 0x0000 (0x000078 - 0x000078)
class UGLTFLevelExporter : public UGLTFExporter : UGLTFExporter
{ 
public:
};

/// Class /Script/GLTFExporter.GLTFLevelSequenceExporter
/// Size: 0x0000 (0x000078 - 0x000078)
class UGLTFLevelSequenceExporter : public UGLTFExporter : UGLTFExporter
{ 
public:
};

/// Class /Script/GLTFExporter.GLTFLevelVariantSetsExporter
/// Size: 0x0000 (0x000078 - 0x000078)
class UGLTFLevelVariantSetsExporter : public UGLTFExporter : UGLTFExporter
{ 
public:
};

/// Class /Script/GLTFExporter.GLTFMaterialExporter
/// Size: 0x0000 (0x000078 - 0x000078)
class UGLTFMaterialExporter : public UGLTFExporter : UGLTFExporter
{ 
public:
};

/// Class /Script/GLTFExporter.GLTFSkeletalMeshExporter
/// Size: 0x0000 (0x000078 - 0x000078)
class UGLTFSkeletalMeshExporter : public UGLTFExporter : UGLTFExporter
{ 
public:
};

/// Class /Script/GLTFExporter.GLTFStaticMeshExporter
/// Size: 0x0000 (0x000078 - 0x000078)
class UGLTFStaticMeshExporter : public UGLTFExporter : UGLTFExporter
{ 
public:
};

/// Class /Script/GLTFExporter.GLTFProxyOptions
/// Size: 0x0058 (0x000028 - 0x000080)
class UGLTFProxyOptions : public UObject : UObject
{ 
public:
	bool                                               bBakeMaterialInputs;                                        // 0x0028   (0x0001)  
	EGLTFMaterialBakeSizePOT                           DefaultMaterialBakeSize;                                    // 0x0029   (0x0001)  
	TEnumAsByte<TextureFilter>                         DefaultMaterialBakeFilter;                                  // 0x002A   (0x0001)  
	TEnumAsByte<TextureAddress>                        DefaultMaterialBakeTiling;                                  // 0x002B   (0x0001)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x002C   (0x0004)  MISSED
	TMap<EGLTFMaterialPropertyGroup, FGLTFOverrideMaterialBakeSettings> DefaultInputBakeSettings;                  // 0x0030   (0x0050)  


	/// Functions
	// Function /Script/GLTFExporter.GLTFProxyOptions.ResetToDefault
	void ResetToDefault();                                                                                                   // [0x19fbba0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GLTFExporter.GLTFMaterialExportOptions
/// Size: 0x0060 (0x000028 - 0x000088)
class UGLTFMaterialExportOptions : public UAssetUserData : UAssetUserData
{ 
public:
	UMaterialInterface*                                Proxy;                                                      // 0x0028   (0x0008)  
	FGLTFOverrideMaterialBakeSettings                  Default;                                                    // 0x0030   (0x0006)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0036   (0x0002)  MISSED
	TMap<EGLTFMaterialPropertyGroup, FGLTFOverrideMaterialBakeSettings> Inputs;                                    // 0x0038   (0x0050)  
};

/// Enum /Script/GLTFExporter.EGLTFTextureImageFormat
/// Size: 0x04
enum EGLTFTextureImageFormat : uint8_t
{
	EGLTFTextureImageFormat__None0                                                   = 0,
	EGLTFTextureImageFormat__PNG1                                                    = 1,
	EGLTFTextureImageFormat__JPEG2                                                   = 2,
	EGLTFTextureImageFormat__EGLTFTextureImageFormat_MAX3                            = 3
};

/// Enum /Script/GLTFExporter.EGLTFMaterialVariantMode
/// Size: 0x04
enum EGLTFMaterialVariantMode : uint8_t
{
	EGLTFMaterialVariantMode__None0                                                  = 0,
	EGLTFMaterialVariantMode__Simple1                                                = 1,
	EGLTFMaterialVariantMode__UseMeshData2                                           = 2,
	EGLTFMaterialVariantMode__EGLTFMaterialVariantMode_MAX3                          = 3
};

/// Enum /Script/GLTFExporter.EGLTFMaterialBakeMode
/// Size: 0x04
enum EGLTFMaterialBakeMode : uint8_t
{
	EGLTFMaterialBakeMode__Disabled0                                                 = 0,
	EGLTFMaterialBakeMode__Simple1                                                   = 1,
	EGLTFMaterialBakeMode__UseMeshData2                                              = 2,
	EGLTFMaterialBakeMode__EGLTFMaterialBakeMode_MAX3                                = 3
};

/// Enum /Script/GLTFExporter.EGLTFMaterialBakeSizePOT
/// Size: 0x15
enum EGLTFMaterialBakeSizePOT : uint8_t
{
	EGLTFMaterialBakeSizePOT__POT0                                                   = 0,
	EGLTFMaterialBakeSizePOT__POT1                                                   = 1,
	EGLTFMaterialBakeSizePOT__POT2                                                   = 2,
	EGLTFMaterialBakeSizePOT__POT3                                                   = 3,
	EGLTFMaterialBakeSizePOT__POT4                                                   = 4,
	EGLTFMaterialBakeSizePOT__POT5                                                   = 5,
	EGLTFMaterialBakeSizePOT__POT6                                                   = 6,
	EGLTFMaterialBakeSizePOT__POT7                                                   = 7,
	EGLTFMaterialBakeSizePOT__POT8                                                   = 8,
	EGLTFMaterialBakeSizePOT__POT9                                                   = 9,
	EGLTFMaterialBakeSizePOT__POT10                                                  = 10,
	EGLTFMaterialBakeSizePOT__POT11                                                  = 11,
	EGLTFMaterialBakeSizePOT__POT12                                                  = 12,
	EGLTFMaterialBakeSizePOT__POT13                                                  = 13,
	EGLTFMaterialBakeSizePOT__POT_MAX14                                              = 14
};

/// Enum /Script/GLTFExporter.EGLTFMaterialPropertyGroup
/// Size: 0x09
enum EGLTFMaterialPropertyGroup : uint8_t
{
	EGLTFMaterialPropertyGroup__None0                                                = 0,
	EGLTFMaterialPropertyGroup__BaseColorOpacity1                                    = 1,
	EGLTFMaterialPropertyGroup__MetallicRoughness2                                   = 2,
	EGLTFMaterialPropertyGroup__EmissiveColor3                                       = 3,
	EGLTFMaterialPropertyGroup__Normal4                                              = 4,
	EGLTFMaterialPropertyGroup__AmbientOcclusion5                                    = 5,
	EGLTFMaterialPropertyGroup__ClearCoatRoughness6                                  = 6,
	EGLTFMaterialPropertyGroup__ClearCoatBottomNormal7                               = 7,
	EGLTFMaterialPropertyGroup__EGLTFMaterialPropertyGroup_MAX8                      = 8
};

