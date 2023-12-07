
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package Landscape.

/// Struct /Script/Landscape.LandscapeLayerBrush
/// Size: 0x0001 (0x000000 - 0x000001)
struct FLandscapeLayerBrush
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/Landscape.LandscapeLayer
/// Size: 0x0088 (0x000000 - 0x000088)
struct FLandscapeLayer
{ 
	FGuid                                              Guid;                                                       // 0x0000   (0x0010)  
	FName                                              Name;                                                       // 0x0010   (0x0008)  
	bool                                               bVisible;                                                   // 0x0018   (0x0001)  
	bool                                               bLocked;                                                    // 0x0019   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x001A   (0x0002)  MISSED
	float                                              HeightmapAlpha;                                             // 0x001C   (0x0004)  
	float                                              WeightmapAlpha;                                             // 0x0020   (0x0004)  
	TEnumAsByte<ELandscapeBlendMode>                   BlendMode;                                                  // 0x0024   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0025   (0x0003)  MISSED
	TArray<FLandscapeLayerBrush>                       Brushes;                                                    // 0x0028   (0x0010)  
	TMap<ULandscapeLayerInfoObject*, bool>             WeightmapLayerAllocationBlend;                              // 0x0038   (0x0050)  
};

/// Struct /Script/Landscape.LandscapeEditToolRenderData
/// Size: 0x0038 (0x000000 - 0x000038)
struct FLandscapeEditToolRenderData
{ 
	UMaterialInterface*                                ToolMaterial;                                               // 0x0000   (0x0008)  
	UMaterialInterface*                                GizmoMaterial;                                              // 0x0008   (0x0008)  
	int32_t                                            SelectedType;                                               // 0x0010   (0x0004)  
	int32_t                                            DebugChannelR;                                              // 0x0014   (0x0004)  
	int32_t                                            DebugChannelG;                                              // 0x0018   (0x0004)  
	int32_t                                            DebugChannelB;                                              // 0x001C   (0x0004)  
	UTexture2D*                                        DataTexture;                                                // 0x0020   (0x0008)  
	UTexture2D*                                        LayerContributionTexture;                                   // 0x0028   (0x0008)  
	UTexture2D*                                        DirtyTexture;                                               // 0x0030   (0x0008)  
};

/// Struct /Script/Landscape.WeightmapLayerAllocationInfo
/// Size: 0x0010 (0x000000 - 0x000010)
struct FWeightmapLayerAllocationInfo
{ 
	ULandscapeLayerInfoObject*                         LayerInfo;                                                  // 0x0000   (0x0008)  
	char                                               WeightmapTextureIndex;                                      // 0x0008   (0x0001)  
	char                                               WeightmapTextureChannel;                                    // 0x0009   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x000A   (0x0006)  MISSED
};

/// Struct /Script/Landscape.LandscapeComponentMaterialOverride
/// Size: 0x0010 (0x000000 - 0x000010)
struct FLandscapeComponentMaterialOverride
{ 
	FPerPlatformInt                                    LODIndex;                                                   // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	UMaterialInterface*                                Material;                                                   // 0x0008   (0x0008)  
};

/// Struct /Script/Landscape.LandscapePerLODMaterialOverride
/// Size: 0x0010 (0x000000 - 0x000010)
struct FLandscapePerLODMaterialOverride
{ 
	int32_t                                            LODIndex;                                                   // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	UMaterialInterface*                                Material;                                                   // 0x0008   (0x0008)  
};

/// Struct /Script/Landscape.WeightmapData
/// Size: 0x0030 (0x000000 - 0x000030)
struct FWeightmapData
{ 
	TArray<UTexture2D*>                                Textures;                                                   // 0x0000   (0x0010)  
	TArray<FWeightmapLayerAllocationInfo>              LayerAllocations;                                           // 0x0010   (0x0010)  
	TArray<ULandscapeWeightmapUsage*>                  TextureUsages;                                              // 0x0020   (0x0010)  
};

/// Struct /Script/Landscape.HeightmapData
/// Size: 0x0008 (0x000000 - 0x000008)
struct FHeightmapData
{ 
	UTexture2D*                                        Texture;                                                    // 0x0000   (0x0008)  
};

/// Struct /Script/Landscape.LandscapeLayerComponentData
/// Size: 0x0038 (0x000000 - 0x000038)
struct FLandscapeLayerComponentData
{ 
	FHeightmapData                                     HeightmapData;                                              // 0x0000   (0x0008)  
	FWeightmapData                                     WeightmapData;                                              // 0x0008   (0x0030)  
};

/// Struct /Script/Landscape.GizmoSelectData
/// Size: 0x0050 (0x000000 - 0x000050)
struct FGizmoSelectData
{ 
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x0000   (0x0050)  MISSED
};

/// Struct /Script/Landscape.GrassVariety
/// Size: 0x01A0 (0x000000 - 0x0001A0)
struct FGrassVariety
{ 
	UStaticMesh*                                       GrassMesh;                                                  // 0x0000   (0x0008)  
	TArray<UMaterialInterface*>                        OverrideMaterials;                                          // 0x0008   (0x0010)  
	FPerPlatformFloat                                  GrassDensity;                                               // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x001C   (0x0004)  MISSED
	FPerQualityLevelFloat                              GrassDensityQuality;                                        // 0x0020   (0x0068)  
	bool                                               bUseGrid;                                                   // 0x0088   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0089   (0x0003)  MISSED
	float                                              PlacementJitter;                                            // 0x008C   (0x0004)  
	FPerPlatformInt                                    StartCullDistance;                                          // 0x0090   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0094   (0x0004)  MISSED
	FPerQualityLevelInt                                StartCullDistanceQuality;                                   // 0x0098   (0x0068)  
	FPerPlatformInt                                    EndCullDistance;                                            // 0x0100   (0x0004)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x0104   (0x0004)  MISSED
	FPerQualityLevelInt                                EndCullDistanceQuality;                                     // 0x0108   (0x0068)  
	int32_t                                            MinLOD;                                                     // 0x0170   (0x0004)  
	EGrassScaling                                      Scaling;                                                    // 0x0174   (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x0175   (0x0003)  MISSED
	FFloatInterval                                     ScaleX;                                                     // 0x0178   (0x0008)  
	FFloatInterval                                     ScaleY;                                                     // 0x0180   (0x0008)  
	FFloatInterval                                     ScaleZ;                                                     // 0x0188   (0x0008)  
	bool                                               RandomRotation;                                             // 0x0190   (0x0001)  
	bool                                               AlignToSurface;                                             // 0x0191   (0x0001)  
	bool                                               bUseLandscapeLightmap;                                      // 0x0192   (0x0001)  
	FLightingChannels                                  LightingChannels;                                           // 0x0193   (0x0001)  
	bool                                               bReceivesDecals;                                            // 0x0194   (0x0001)  
	bool                                               bAffectDistanceFieldLighting;                               // 0x0195   (0x0001)  
	bool                                               bCastDynamicShadow;                                         // 0x0196   (0x0001)  
	bool                                               bCastContactShadow;                                         // 0x0197   (0x0001)  
	bool                                               bKeepInstanceBufferCPUCopy;                                 // 0x0198   (0x0001)  
	unsigned char                                      UnknownData05_5[0x3];                                       // 0x0199   (0x0003)  MISSED
	uint32_t                                           InstanceWorldPositionOffsetDisableDistance;                 // 0x019C   (0x0004)  
};

/// Struct /Script/Landscape.LandscapeMaterialTextureStreamingInfo
/// Size: 0x000C (0x000000 - 0x00000C)
struct FLandscapeMaterialTextureStreamingInfo
{ 
	FName                                              TextureName;                                                // 0x0000   (0x0008)  
	float                                              TexelFactor;                                                // 0x0008   (0x0004)  
};

/// Struct /Script/Landscape.LandscapeSplineConnection
/// Size: 0x0010 (0x000000 - 0x000010)
struct FLandscapeSplineConnection
{ 
	ULandscapeSplineSegment*                           Segment;                                                    // 0x0000   (0x0008)  
	bool                                               End : 1;                                                    // 0x0008:0 (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0009   (0x0007)  MISSED
};

/// Struct /Script/Landscape.ForeignControlPointData
/// Size: 0x0001 (0x000000 - 0x000001)
struct FForeignControlPointData
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/Landscape.ForeignSplineSegmentData
/// Size: 0x0001 (0x000000 - 0x000001)
struct FForeignSplineSegmentData
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/Landscape.ForeignWorldSplineData
/// Size: 0x0001 (0x000000 - 0x000001)
struct FForeignWorldSplineData
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/Landscape.LandscapeSplineInterpPoint
/// Size: 0x00E0 (0x000000 - 0x0000E0)
struct FLandscapeSplineInterpPoint
{ 
	FVector                                            Center;                                                     // 0x0000   (0x0018)  
	FVector                                            Left;                                                       // 0x0018   (0x0018)  
	FVector                                            Right;                                                      // 0x0030   (0x0018)  
	FVector                                            FalloffLeft;                                                // 0x0048   (0x0018)  
	FVector                                            FalloffRight;                                               // 0x0060   (0x0018)  
	FVector                                            LayerLeft;                                                  // 0x0078   (0x0018)  
	FVector                                            LayerRight;                                                 // 0x0090   (0x0018)  
	FVector                                            LayerFalloffLeft;                                           // 0x00A8   (0x0018)  
	FVector                                            LayerFalloffRight;                                          // 0x00C0   (0x0018)  
	float                                              StartEndFalloff;                                            // 0x00D8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00DC   (0x0004)  MISSED
};

/// Struct /Script/Landscape.LandscapeSplineSegmentConnection
/// Size: 0x0018 (0x000000 - 0x000018)
struct FLandscapeSplineSegmentConnection
{ 
	ULandscapeSplineControlPoint*                      ControlPoint;                                               // 0x0000   (0x0008)  
	float                                              TangentLen;                                                 // 0x0008   (0x0004)  
	FName                                              SocketName;                                                 // 0x000C   (0x0008)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/Landscape.LandscapeSplineMeshEntry
/// Size: 0x0058 (0x000000 - 0x000058)
struct FLandscapeSplineMeshEntry
{ 
	UStaticMesh*                                       Mesh;                                                       // 0x0000   (0x0008)  
	TArray<UMaterialInterface*>                        MaterialOverrides;                                          // 0x0008   (0x0010)  
	bool                                               bCenterH : 1;                                               // 0x0018:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x7];                                       // 0x0019   (0x0007)  MISSED
	FVector2D                                          CenterAdjust;                                               // 0x0020   (0x0010)  
	bool                                               bScaleToWidth : 1;                                          // 0x0030:0 (0x0001)  
	unsigned char                                      UnknownData01_4[0x7];                                       // 0x0031   (0x0007)  MISSED
	FVector                                            Scale;                                                      // 0x0038   (0x0018)  
	TEnumAsByte<LandscapeSplineMeshOrientation>        Orientation;                                                // 0x0050   (0x0001)  
	TEnumAsByte<ESplineMeshAxis>                       ForwardAxis;                                                // 0x0051   (0x0001)  
	TEnumAsByte<ESplineMeshAxis>                       UpAxis;                                                     // 0x0052   (0x0001)  
	unsigned char                                      UnknownData02_6[0x5];                                       // 0x0053   (0x0005)  MISSED
};

/// Struct /Script/Landscape.GrassInput
/// Size: 0x0038 (0x000000 - 0x000038)
struct FGrassInput
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
	ULandscapeGrassType*                               GrassType;                                                  // 0x0008   (0x0008)  
	FExpressionInput                                   Input;                                                      // 0x0010   (0x0028)  
};

/// Struct /Script/Landscape.LayerBlendInput
/// Size: 0x0088 (0x000000 - 0x000088)
struct FLayerBlendInput
{ 
	FName                                              LayerName;                                                  // 0x0000   (0x0008)  
	TEnumAsByte<ELandscapeLayerBlendType>              BlendType;                                                  // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0009   (0x0007)  MISSED
	FExpressionInput                                   LayerInput;                                                 // 0x0010   (0x0028)  
	FExpressionInput                                   HeightInput;                                                // 0x0038   (0x0028)  
	float                                              PreviewWeight;                                              // 0x0060   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0064   (0x0004)  MISSED
	FVector                                            ConstLayerInput;                                            // 0x0068   (0x0018)  
	float                                              ConstHeightInput;                                           // 0x0080   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0084   (0x0004)  MISSED
};

/// Struct /Script/Landscape.LandscapeInfoLayerSettings
/// Size: 0x0010 (0x000000 - 0x000010)
struct FLandscapeInfoLayerSettings
{ 
	ULandscapeLayerInfoObject*                         LayerInfoObj;                                               // 0x0000   (0x0008)  
	FName                                              LayerName;                                                  // 0x0008   (0x0008)  
};

/// Struct /Script/Landscape.LandscapeEditorLayerSettings
/// Size: 0x0001 (0x000000 - 0x000001)
struct FLandscapeEditorLayerSettings
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/Landscape.LandscapeLayerStruct
/// Size: 0x0008 (0x000000 - 0x000008)
struct FLandscapeLayerStruct
{ 
	ULandscapeLayerInfoObject*                         LayerInfoObj;                                               // 0x0000   (0x0008)  
};

/// Struct /Script/Landscape.LandscapeImportLayerInfo
/// Size: 0x0001 (0x000000 - 0x000001)
struct FLandscapeImportLayerInfo
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/Landscape.LandscapeProxyMaterialOverride
/// Size: 0x0010 (0x000000 - 0x000010)
struct FLandscapeProxyMaterialOverride
{ 
	FPerPlatformInt                                    LODIndex;                                                   // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	UMaterialInterface*                                Material;                                                   // 0x0008   (0x0008)  
};

/// Struct /Script/Landscape.PhysicalMaterialInput
/// Size: 0x0030 (0x000000 - 0x000030)
struct FPhysicalMaterialInput
{ 
	UPhysicalMaterial*                                 PhysicalMaterial;                                           // 0x0000   (0x0008)  
	FExpressionInput                                   Input;                                                      // 0x0008   (0x0028)  
};

/// Class /Script/Landscape.ControlPointMeshComponent
/// Size: 0x0010 (0x000620 - 0x000630)
class UControlPointMeshComponent : public UStaticMeshComponent : UStaticMeshComponent
{ 
public:
	float                                              VirtualTextureMainPassMaxDrawDistance;                      // 0x0620   (0x0004)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x0624   (0x000C)  MISSED
};

/// Class /Script/Landscape.LandscapeSplineInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class ULandscapeSplineInterface : public UInterface : UInterface
{ 
public:
};

/// Class /Script/Landscape.LandscapeProxy
/// Size: 0x0350 (0x000290 - 0x0005E0)
class ALandscapeProxy : public APartitionActor : APartitionActor
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0290   (0x0008)  MISSED
	ULandscapeSplinesComponent*                        SplineComponent;                                            // 0x0298   (0x0008)  
	FGuid                                              LandscapeGuid;                                              // 0x02A0   (0x0010)  
	TArray<FLandscapePerLODMaterialOverride>           PerLODOverrideMaterials;                                    // 0x02B0   (0x0010)  
	FIntPoint                                          LandscapeSectionOffset;                                     // 0x02C0   (0x0008)  
	int32_t                                            MaxLODLevel;                                                // 0x02C8   (0x0004)  
	float                                              ComponentScreenSizeToUseSubSections;                        // 0x02CC   (0x0004)  
	float                                              LOD0ScreenSize;                                             // 0x02D0   (0x0004)  
	float                                              LOD0DistributionSetting;                                    // 0x02D4   (0x0004)  
	float                                              LODDistributionSetting;                                     // 0x02D8   (0x0004)  
	int32_t                                            StaticLightingLOD;                                          // 0x02DC   (0x0004)  
	UPhysicalMaterial*                                 DefaultPhysMaterial;                                        // 0x02E0   (0x0008)  
	float                                              StreamingDistanceMultiplier;                                // 0x02E8   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x02EC   (0x0004)  MISSED
	UMaterialInterface*                                LandscapeMaterial;                                          // 0x02F0   (0x0008)  
	unsigned char                                      UnknownData02_5[0x20];                                      // 0x02F8   (0x0020)  MISSED
	UMaterialInterface*                                LandscapeHoleMaterial;                                      // 0x0318   (0x0008)  
	TArray<URuntimeVirtualTexture*>                    RuntimeVirtualTextures;                                     // 0x0320   (0x0010)  
	bool                                               bSetCreateRuntimeVirtualTextureVolumes;                     // 0x0330   (0x0001)  
	bool                                               bVirtualTextureRenderWithQuad;                              // 0x0331   (0x0001)  
	bool                                               bVirtualTextureRenderWithQuadHQ;                            // 0x0332   (0x0001)  
	unsigned char                                      UnknownData03_5[0x1];                                       // 0x0333   (0x0001)  MISSED
	int32_t                                            VirtualTextureNumLods;                                      // 0x0334   (0x0004)  
	int32_t                                            VirtualTextureLodBias;                                      // 0x0338   (0x0004)  
	ERuntimeVirtualTextureMainPassType                 VirtualTextureRenderPassType;                               // 0x033C   (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x033D   (0x0003)  MISSED
	float                                              NegativeZBoundsExtension;                                   // 0x0340   (0x0004)  
	float                                              PositiveZBoundsExtension;                                   // 0x0344   (0x0004)  
	TArray<ULandscapeComponent*>                       LandscapeComponents;                                        // 0x0348   (0x0010)  
	TArray<ULandscapeHeightfieldCollisionComponent*>   CollisionComponents;                                        // 0x0358   (0x0010)  
	TArray<UHierarchicalInstancedStaticMeshComponent*> FoliageComponents;                                          // 0x0368   (0x0010)  
	ULandscapeNaniteComponent*                         NaniteComponent;                                            // 0x0378   (0x0008)  
	unsigned char                                      UnknownData05_5[0x64];                                      // 0x0380   (0x0064)  MISSED
	bool                                               bHasLandscapeGrass;                                         // 0x03E4   (0x0001)  
	unsigned char                                      UnknownData06_5[0x3];                                       // 0x03E5   (0x0003)  MISSED
	float                                              StaticLightingResolution;                                   // 0x03E8   (0x0004)  
	bool                                               CastShadow : 1;                                             // 0x03EC:0 (0x0001)  
	bool                                               bCastDynamicShadow : 1;                                     // 0x03EC:1 (0x0001)  
	bool                                               bCastStaticShadow : 1;                                      // 0x03EC:2 (0x0001)  
	bool                                               bCastContactShadow : 1;                                     // 0x03EC:3 (0x0001)  
	unsigned char                                      UnknownData07_3[0x3];                                       // 0x03ED   (0x0003)  MISSED
	bool                                               bCastFarShadow : 1;                                         // 0x03F0:0 (0x0001)  
	unsigned char                                      UnknownData08_3[0x3];                                       // 0x03F1   (0x0003)  MISSED
	bool                                               bCastHiddenShadow : 1;                                      // 0x03F4:0 (0x0001)  
	unsigned char                                      UnknownData09_3[0x3];                                       // 0x03F5   (0x0003)  MISSED
	bool                                               bCastShadowAsTwoSided : 1;                                  // 0x03F8:0 (0x0001)  
	unsigned char                                      UnknownData10_3[0x3];                                       // 0x03F9   (0x0003)  MISSED
	bool                                               bAffectDistanceFieldLighting : 1;                           // 0x03FC:0 (0x0001)  
	FLightingChannels                                  LightingChannels;                                           // 0x03FD   (0x0001)  
	unsigned char                                      UnknownData11_6[0x1E2];                                     // 0x03FE   (0x01E2)  MISSED


	/// Functions
	// Function /Script/Landscape.LandscapeProxy.SetVirtualTextureRenderPassType
	void SetVirtualTextureRenderPassType(ERuntimeVirtualTextureMainPassType InType);                                         // [0x35fc730] Final|Native|Public|BlueprintCallable 
	// Function /Script/Landscape.LandscapeProxy.SetLandscapeMaterialVectorParameterValue
	void SetLandscapeMaterialVectorParameterValue(FName ParameterName, FLinearColor Value);                                  // [0x35fc660] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Landscape.LandscapeProxy.SetLandscapeMaterialTextureParameterValue
	void SetLandscapeMaterialTextureParameterValue(FName ParameterName, UTexture* Value);                                    // [0x35fc590] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Landscape.LandscapeProxy.SetLandscapeMaterialScalarParameterValue
	void SetLandscapeMaterialScalarParameterValue(FName ParameterName, float Value);                                         // [0x35fc4c0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Landscape.LandscapeProxy.LandscapeExportHeightmapToRenderTarget
	bool LandscapeExportHeightmapToRenderTarget(UTextureRenderTarget2D* InRenderTarget, bool InExportHeightIntoRGChannel, bool InExportLandscapeProxies); // [0x35fc3a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Landscape.LandscapeProxy.GetLandscapeActor
	ALandscape* GetLandscapeActor();                                                                                         // [0x35fc370] Native|Public|BlueprintCallable 
	// Function /Script/Landscape.LandscapeProxy.EditorSetLandscapeMaterial
	void EditorSetLandscapeMaterial(UMaterialInterface* NewLandscapeMaterial);                                               // [0x19ba7f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Landscape.LandscapeProxy.EditorApplySpline
	void EditorApplySpline(USplineComponent* InSplineComponent, float StartWidth, float EndWidth, float StartSideFalloff, float EndSideFalloff, float StartRoll, float EndRoll, int32_t NumSubdivisions, bool bRaiseHeights, bool bLowerHeights, ULandscapeLayerInfoObject* PaintLayer, FName EditLayerName); // [0x35fbfe0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Landscape.LandscapeProxy.ChangeLODDistanceFactor
	void ChangeLODDistanceFactor(float InLODDistanceFactor);                                                                 // [0x35fbf50] Native|Public|BlueprintCallable 
	// Function /Script/Landscape.LandscapeProxy.ChangeComponentScreenSizeToUseSubSections
	void ChangeComponentScreenSizeToUseSubSections(float InComponentScreenSizeToUseSubSections);                             // [0x35fbec0] Native|Public|BlueprintCallable 
};

/// Class /Script/Landscape.Landscape
/// Size: 0x0000 (0x0005E0 - 0x0005E0)
class ALandscape : public ALandscapeProxy : ALandscapeProxy
{ 
public:
};

/// Class /Script/Landscape.LandscapeLODStreamingProxy_DEPRECATED
/// Size: 0x0000 (0x0000C8 - 0x0000C8)
class ULandscapeLODStreamingProxy_DEPRECATED : public UStreamableRenderAsset : UStreamableRenderAsset
{ 
public:
};

/// Class /Script/Landscape.LandscapeComponent
/// Size: 0x01F0 (0x000570 - 0x000760)
class ULandscapeComponent : public UPrimitiveComponent : UPrimitiveComponent
{ 
public:
	int32_t                                            SectionBaseX;                                               // 0x0568   (0x0004)  
	int32_t                                            SectionBaseY;                                               // 0x056C   (0x0004)  
	int32_t                                            ComponentSizeQuads;                                         // 0x0570   (0x0004)  
	int32_t                                            SubsectionSizeQuads;                                        // 0x0574   (0x0004)  
	int32_t                                            NumSubsections;                                             // 0x0578   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x057C   (0x0004)  MISSED
	UMaterialInterface*                                OverrideMaterial;                                           // 0x0580   (0x0008)  
	UMaterialInterface*                                OverrideHoleMaterial;                                       // 0x0588   (0x0008)  
	TArray<UMaterialInstanceConstant*>                 MaterialInstances;                                          // 0x0590   (0x0010)  
	TArray<UMaterialInstanceDynamic*>                  MaterialInstancesDynamic;                                   // 0x05A0   (0x0010)  
	TArray<int8_t>                                     LODIndexToMaterialIndex;                                    // 0x05B0   (0x0010)  
	UTexture2D*                                        XYOffsetmapTexture;                                         // 0x05C0   (0x0008)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x05C8   (0x0008)  MISSED
	FVector4                                           WeightmapScaleBias;                                         // 0x05D0   (0x0020)  
	float                                              WeightmapSubsectionOffset;                                  // 0x05F0   (0x0004)  
	unsigned char                                      UnknownData02_5[0xC];                                       // 0x05F4   (0x000C)  MISSED
	FVector4                                           HeightmapScaleBias;                                         // 0x0600   (0x0020)  
	FBox                                               CachedLocalBox;                                             // 0x0620   (0x0038)  
	ULandscapeHeightfieldCollisionComponent*           CollisionComponentRef;                                      // 0x0658   (0x0008)  
	bool                                               bUserTriggeredChangeRequested;                              // 0x0660   (0x0001)  
	bool                                               bNaniteActive;                                              // 0x0661   (0x0001)  
	unsigned char                                      UnknownData03_5[0x6];                                       // 0x0662   (0x0006)  MISSED
	UTexture2D*                                        HeightmapTexture;                                           // 0x0668   (0x0008)  
	TArray<FWeightmapLayerAllocationInfo>              WeightmapLayerAllocations;                                  // 0x0670   (0x0010)  
	TArray<UTexture2D*>                                WeightmapTextures;                                          // 0x0680   (0x0010)  
	TArray<FLandscapePerLODMaterialOverride>           PerLODOverrideMaterials;                                    // 0x0690   (0x0010)  
	FGuid                                              MapBuildDataId;                                             // 0x06A0   (0x0010)  
	int32_t                                            CollisionMipLevel;                                          // 0x06B0   (0x0004)  
	int32_t                                            SimpleCollisionMipLevel;                                    // 0x06B4   (0x0004)  
	float                                              NegativeZBoundsExtension;                                   // 0x06B8   (0x0004)  
	float                                              PositiveZBoundsExtension;                                   // 0x06BC   (0x0004)  
	float                                              StaticLightingResolution;                                   // 0x06C0   (0x0004)  
	int32_t                                            ForcedLOD;                                                  // 0x06C4   (0x0004)  
	int32_t                                            LODBias;                                                    // 0x06C8   (0x0004)  
	FGuid                                              StateId;                                                    // 0x06CC   (0x0010)  
	FGuid                                              BakedTextureMaterialGuid;                                   // 0x06DC   (0x0010)  
	FGuid                                              LastBakedTextureMaterialGuid;                               // 0x06EC   (0x0010)  
	unsigned char                                      UnknownData04_5[0x4];                                       // 0x06FC   (0x0004)  MISSED
	UTexture2D*                                        GIBakedBaseColorTexture;                                    // 0x0700   (0x0008)  
	UMaterialInterface*                                MobileMaterialInterface;                                    // 0x0708   (0x0008)  
	TArray<UMaterialInterface*>                        MobileMaterialInterfaces;                                   // 0x0710   (0x0010)  
	TArray<UTexture2D*>                                MobileWeightmapTextures;                                    // 0x0720   (0x0010)  
	unsigned char                                      UnknownData05_6[0x30];                                      // 0x0730   (0x0030)  MISSED


	/// Functions
	// Function /Script/Landscape.LandscapeComponent.SetLODBias
	void SetLODBias(int32_t InLODBias);                                                                                      // [0x35c4270] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Landscape.LandscapeComponent.SetForcedLOD
	void SetForcedLOD(int32_t InForcedLOD);                                                                                  // [0x35c41e0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Landscape.LandscapeComponent.GetMaterialInstanceDynamic
	UMaterialInstanceDynamic* GetMaterialInstanceDynamic(int32_t InIndex);                                                   // [0x35c3f60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Landscape.LandscapeComponent.EditorGetPaintLayerWeightByNameAtLocation
	float EditorGetPaintLayerWeightByNameAtLocation(FVector& InLocation, FName InPaintLayerName);                            // [0x35c3e70] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Landscape.LandscapeComponent.EditorGetPaintLayerWeightAtLocation
	float EditorGetPaintLayerWeightAtLocation(FVector& InLocation, ULandscapeLayerInfoObject* PaintLayer);                   // [0x35c3d80] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/Landscape.LandscapeGizmoActor
/// Size: 0x0000 (0x000290 - 0x000290)
class ALandscapeGizmoActor : public AActor : AActor
{ 
public:
};

/// Class /Script/Landscape.LandscapeGizmoActiveActor
/// Size: 0x0050 (0x000290 - 0x0002E0)
class ALandscapeGizmoActiveActor : public ALandscapeGizmoActor : ALandscapeGizmoActor
{ 
public:
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x0290   (0x0050)  MISSED
};

/// Class /Script/Landscape.LandscapeGizmoRenderComponent
/// Size: 0x0000 (0x000570 - 0x000570)
class ULandscapeGizmoRenderComponent : public UPrimitiveComponent : UPrimitiveComponent
{ 
public:
};

/// Class /Script/Landscape.LandscapeGrassType
/// Size: 0x0038 (0x000028 - 0x000060)
class ULandscapeGrassType : public UObject : UObject
{ 
public:
	TArray<FGrassVariety>                              GrassVarieties;                                             // 0x0028   (0x0010)  
	bool                                               bEnableDensityScaling : 1;                                  // 0x0038:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x7];                                       // 0x0039   (0x0007)  MISSED
	UStaticMesh*                                       GrassMesh;                                                  // 0x0040   (0x0008)  
	float                                              GrassDensity;                                               // 0x0048   (0x0004)  
	float                                              PlacementJitter;                                            // 0x004C   (0x0004)  
	int32_t                                            StartCullDistance;                                          // 0x0050   (0x0004)  
	int32_t                                            EndCullDistance;                                            // 0x0054   (0x0004)  
	bool                                               RandomRotation;                                             // 0x0058   (0x0001)  
	bool                                               AlignToSurface;                                             // 0x0059   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x005A   (0x0006)  MISSED
};

/// Class /Script/Landscape.LandscapeHeightfieldCollisionComponent
/// Size: 0x00E0 (0x000570 - 0x000650)
class ULandscapeHeightfieldCollisionComponent : public UPrimitiveComponent : UPrimitiveComponent
{ 
public:
	TArray<ULandscapeLayerInfoObject*>                 ComponentLayerInfos;                                        // 0x0568   (0x0010)  
	int32_t                                            SectionBaseX;                                               // 0x0578   (0x0004)  
	int32_t                                            SectionBaseY;                                               // 0x057C   (0x0004)  
	int32_t                                            CollisionSizeQuads;                                         // 0x0580   (0x0004)  
	float                                              CollisionScale;                                             // 0x0584   (0x0004)  
	int32_t                                            SimpleCollisionSizeQuads;                                   // 0x0588   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x058C   (0x0004)  MISSED
	TArray<char>                                       CollisionQuadFlags;                                         // 0x0590   (0x0010)  
	FGuid                                              HeightfieldGuid;                                            // 0x05A0   (0x0010)  
	FBox                                               CachedLocalBox;                                             // 0x05B0   (0x0038)  
	ULandscapeComponent*                               RenderComponentRef;                                         // 0x05E8   (0x0008)  
	unsigned char                                      UnknownData01_5[0x10];                                      // 0x05F0   (0x0010)  MISSED
	TArray<UPhysicalMaterial*>                         CookedPhysicalMaterials;                                    // 0x0600   (0x0010)  
	unsigned char                                      UnknownData02_6[0x40];                                      // 0x0610   (0x0040)  MISSED


	/// Functions
	// Function /Script/Landscape.LandscapeHeightfieldCollisionComponent.GetRenderComponent
	ULandscapeComponent* GetRenderComponent();                                                                               // [0x35c4000] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Landscape.LandscapeLayerInfoObject
/// Size: 0x0028 (0x000028 - 0x000050)
class ULandscapeLayerInfoObject : public UObject : UObject
{ 
public:
	FName                                              LayerName;                                                  // 0x0028   (0x0008)  
	UPhysicalMaterial*                                 PhysMaterial;                                               // 0x0030   (0x0008)  
	float                                              Hardness;                                                   // 0x0038   (0x0004)  
	FLinearColor                                       LayerUsageDebugColor;                                       // 0x003C   (0x0010)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Class /Script/Landscape.LandscapeMaterialInstanceConstant
/// Size: 0x0018 (0x000230 - 0x000248)
class ULandscapeMaterialInstanceConstant : public UMaterialInstanceConstant : UMaterialInstanceConstant
{ 
public:
	TArray<FLandscapeMaterialTextureStreamingInfo>     TextureStreamingInfo;                                       // 0x0230   (0x0010)  
	bool                                               bIsLayerThumbnail : 1;                                      // 0x0240:0 (0x0001)  
	bool                                               bDisableTessellation : 1;                                   // 0x0240:1 (0x0001)  
	bool                                               bMobile : 1;                                                // 0x0240:2 (0x0001)  
	bool                                               bEditorToolUsage : 1;                                       // 0x0240:3 (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0241   (0x0007)  MISSED
};

/// Class /Script/Landscape.LandscapeMeshCollisionComponent
/// Size: 0x0020 (0x000650 - 0x000670)
class ULandscapeMeshCollisionComponent : public ULandscapeHeightfieldCollisionComponent : ULandscapeHeightfieldCollisionComponent
{ 
public:
	FGuid                                              MeshGuid;                                                   // 0x0650   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0660   (0x0010)  MISSED
};

/// Class /Script/Landscape.LandscapeMeshProxyActor
/// Size: 0x0008 (0x000290 - 0x000298)
class ALandscapeMeshProxyActor : public AActor : AActor
{ 
public:
	ULandscapeMeshProxyComponent*                      LandscapeMeshProxyComponent;                                // 0x0290   (0x0008)  
};

/// Class /Script/Landscape.LandscapeMeshProxyComponent
/// Size: 0x0030 (0x000620 - 0x000650)
class ULandscapeMeshProxyComponent : public UStaticMeshComponent : UStaticMeshComponent
{ 
public:
	FGuid                                              LandscapeGuid;                                              // 0x0620   (0x0010)  
	TArray<FIntPoint>                                  ProxyComponentBases;                                        // 0x0630   (0x0010)  
	int8_t                                             ProxyLOD;                                                   // 0x0640   (0x0001)  
	unsigned char                                      UnknownData00_6[0xF];                                       // 0x0641   (0x000F)  MISSED
};

/// Class /Script/Landscape.LandscapeSettings
/// Size: 0x0078 (0x000038 - 0x0000B0)
class ULandscapeSettings : public UDeveloperSettings : UDeveloperSettings
{ 
public:
	int32_t                                            MaxNumberOfLayers;                                          // 0x0038   (0x0004)  
	ELandscapeDirtyingMode                             LandscapeDirtyingMode;                                      // 0x003C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x003D   (0x0003)  MISSED
	int32_t                                            SideResolutionLimit;                                        // 0x0040   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0044   (0x0004)  MISSED
	TWeakObjectPtr<UMaterialInterface*>                DefaultLandscapeMaterial;                                   // 0x0048   (0x0030)  
	TWeakObjectPtr<ULandscapeLayerInfoObject*>         DefaultLayerInfoObject;                                     // 0x0078   (0x0030)  
	bool                                               bRestrictiveMode;                                           // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x00A9   (0x0007)  MISSED
};

/// Class /Script/Landscape.LandscapeSplinesComponent
/// Size: 0x0030 (0x000570 - 0x0005A0)
class ULandscapeSplinesComponent : public UPrimitiveComponent : UPrimitiveComponent
{ 
public:
	TArray<ULandscapeSplineControlPoint*>              ControlPoints;                                              // 0x0568   (0x0010)  
	TArray<ULandscapeSplineSegment*>                   Segments;                                                   // 0x0578   (0x0010)  
	TArray<UMeshComponent*>                            CookedForeignMeshComponents;                                // 0x0588   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0598   (0x0008)  MISSED


	/// Functions
	// Function /Script/Landscape.LandscapeSplinesComponent.GetSplineMeshComponents
	TArray<USplineMeshComponent*> GetSplineMeshComponents();                                                                 // [0x15da850] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/Landscape.LandscapeSplineControlPoint
/// Size: 0x00B0 (0x000028 - 0x0000D8)
class ULandscapeSplineControlPoint : public UObject : UObject
{ 
public:
	FVector                                            Location;                                                   // 0x0028   (0x0018)  
	FRotator                                           Rotation;                                                   // 0x0040   (0x0018)  
	float                                              Width;                                                      // 0x0058   (0x0004)  
	float                                              LayerWidthRatio;                                            // 0x005C   (0x0004)  
	float                                              SideFalloff;                                                // 0x0060   (0x0004)  
	float                                              LeftSideFalloffFactor;                                      // 0x0064   (0x0004)  
	float                                              RightSideFalloffFactor;                                     // 0x0068   (0x0004)  
	float                                              LeftSideLayerFalloffFactor;                                 // 0x006C   (0x0004)  
	float                                              RightSideLayerFalloffFactor;                                // 0x0070   (0x0004)  
	float                                              EndFalloff;                                                 // 0x0074   (0x0004)  
	TArray<FLandscapeSplineConnection>                 ConnectedSegments;                                          // 0x0078   (0x0010)  
	TArray<FLandscapeSplineInterpPoint>                Points;                                                     // 0x0088   (0x0010)  
	FBox                                               Bounds;                                                     // 0x0098   (0x0038)  
	UControlPointMeshComponent*                        LocalMeshComponent;                                         // 0x00D0   (0x0008)  
};

/// Class /Script/Landscape.LandscapeSplineSegment
/// Size: 0x00A0 (0x000028 - 0x0000C8)
class ULandscapeSplineSegment : public UObject : UObject
{ 
public:
	FLandscapeSplineSegmentConnection                  Connections;                                                // 0x0028   (0x0030)  
	FInterpCurveVector                                 SplineInfo;                                                 // 0x0058   (0x0018)  
	TArray<FLandscapeSplineInterpPoint>                Points;                                                     // 0x0070   (0x0010)  
	FBox                                               Bounds;                                                     // 0x0080   (0x0038)  
	TArray<USplineMeshComponent*>                      LocalMeshComponents;                                        // 0x00B8   (0x0010)  
};

/// Class /Script/Landscape.LandscapeStreamingProxy
/// Size: 0x0030 (0x0005E0 - 0x000610)
class ALandscapeStreamingProxy : public ALandscapeProxy : ALandscapeProxy
{ 
public:
	TWeakObjectPtr<ALandscape*>                        LandscapeActorRef;                                          // 0x05E0   (0x0030)  
};

/// Class /Script/Landscape.LandscapeWeightmapUsage
/// Size: 0x0030 (0x000028 - 0x000058)
class ULandscapeWeightmapUsage : public UObject : UObject
{ 
public:
	ULandscapeComponent*                               ChannelUsage;                                               // 0x0028   (0x0020)  
	FGuid                                              LayerGuid;                                                  // 0x0048   (0x0010)  
};

/// Class /Script/Landscape.MaterialExpressionLandscapeGrassOutput
/// Size: 0x0010 (0x0000B0 - 0x0000C0)
class UMaterialExpressionLandscapeGrassOutput : public UMaterialExpressionCustomOutput : UMaterialExpressionCustomOutput
{ 
public:
	TArray<FGrassInput>                                GrassTypes;                                                 // 0x00B0   (0x0010)  
};

/// Class /Script/Landscape.MaterialExpressionLandscapeLayerBlend
/// Size: 0x0010 (0x0000B0 - 0x0000C0)
class UMaterialExpressionLandscapeLayerBlend : public UMaterialExpression : UMaterialExpression
{ 
public:
	TArray<FLayerBlendInput>                           Layers;                                                     // 0x00B0   (0x0010)  
};

/// Class /Script/Landscape.MaterialExpressionLandscapeLayerCoords
/// Size: 0x0018 (0x0000B0 - 0x0000C8)
class UMaterialExpressionLandscapeLayerCoords : public UMaterialExpression : UMaterialExpression
{ 
public:
	TEnumAsByte<ETerrainCoordMappingType>              MappingType;                                                // 0x00B0   (0x0001)  
	TEnumAsByte<ELandscapeCustomizedCoordType>         CustomUVType;                                               // 0x00B1   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x00B2   (0x0002)  MISSED
	float                                              MappingScale;                                               // 0x00B4   (0x0004)  
	float                                              MappingRotation;                                            // 0x00B8   (0x0004)  
	float                                              MappingPanU;                                                // 0x00BC   (0x0004)  
	float                                              MappingPanV;                                                // 0x00C0   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00C4   (0x0004)  MISSED
};

/// Class /Script/Landscape.ControlPointMeshActor
/// Size: 0x0008 (0x000290 - 0x000298)
class AControlPointMeshActor : public AActor : AActor
{ 
public:
	UControlPointMeshComponent*                        ControlPointMeshComponent;                                  // 0x0290   (0x0008)  
};

/// Class /Script/Landscape.LandscapeBlueprintBrushBase
/// Size: 0x0000 (0x000290 - 0x000290)
class ALandscapeBlueprintBrushBase : public AActor : AActor
{ 
public:
};

/// Class /Script/Landscape.LandscapeHLODBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class ULandscapeHLODBuilder : public UHLODBuilder : UHLODBuilder
{ 
public:
};

/// Class /Script/Landscape.LandscapeInfo
/// Size: 0x0200 (0x000028 - 0x000228)
class ULandscapeInfo : public UObject : UObject
{ 
public:
	TWeakObjectPtr<ALandscape*>                        LandscapeActor;                                             // 0x0028   (0x0008)  
	FGuid                                              LandscapeGuid;                                              // 0x0030   (0x0010)  
	int32_t                                            ComponentSizeQuads;                                         // 0x0040   (0x0004)  
	int32_t                                            SubsectionSizeQuads;                                        // 0x0044   (0x0004)  
	int32_t                                            ComponentNumSubsections;                                    // 0x0048   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x004C   (0x0004)  MISSED
	FVector                                            DrawScale;                                                  // 0x0050   (0x0018)  
	unsigned char                                      UnknownData01_5[0xB0];                                      // 0x0068   (0x00B0)  MISSED
	TArray<TWeakObjectPtr>                             StreamingProxies;                                           // 0x0118   (0x0010)  
	unsigned char                                      UnknownData02_6[0x100];                                     // 0x0128   (0x0100)  MISSED
};

/// Class /Script/Landscape.LandscapeInfoMap
/// Size: 0x0058 (0x000028 - 0x000080)
class ULandscapeInfoMap : public UObject : UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x58];                                      // 0x0028   (0x0058)  MISSED
};

/// Class /Script/Landscape.LandscapeNaniteComponent
/// Size: 0x0020 (0x000620 - 0x000640)
class ULandscapeNaniteComponent : public UStaticMeshComponent : UStaticMeshComponent
{ 
public:
	FGuid                                              ProxyContentId;                                             // 0x0620   (0x0010)  
	bool                                               bEnabled;                                                   // 0x0630   (0x0001)  
	unsigned char                                      UnknownData00_6[0xF];                                       // 0x0631   (0x000F)  MISSED
};

/// Class /Script/Landscape.LandscapeSplineActor
/// Size: 0x0018 (0x000290 - 0x0002A8)
class ALandscapeSplineActor : public AActor : AActor
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0290   (0x0008)  MISSED
	FGuid                                              LandscapeGuid;                                              // 0x0298   (0x0010)  
};

/// Class /Script/Landscape.LandscapeSplineMeshesActor
/// Size: 0x0010 (0x000290 - 0x0002A0)
class ALandscapeSplineMeshesActor : public APartitionActor : APartitionActor
{ 
public:
	TArray<UStaticMeshComponent*>                      StaticMeshComponents;                                       // 0x0290   (0x0010)  
};

/// Class /Script/Landscape.LandscapeSubsystem
/// Size: 0x0018 (0x000040 - 0x000058)
class ULandscapeSubsystem : public UTickableWorldSubsystem : UTickableWorldSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0040   (0x0018)  MISSED
};

/// Class /Script/Landscape.MaterialExpressionLandscapeLayerSample
/// Size: 0x0010 (0x0000B0 - 0x0000C0)
class UMaterialExpressionLandscapeLayerSample : public UMaterialExpression : UMaterialExpression
{ 
public:
	FName                                              ParameterName;                                              // 0x00B0   (0x0008)  
	float                                              PreviewWeight;                                              // 0x00B8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00BC   (0x0004)  MISSED
};

/// Class /Script/Landscape.MaterialExpressionLandscapeLayerSwitch
/// Size: 0x0060 (0x0000B0 - 0x000110)
class UMaterialExpressionLandscapeLayerSwitch : public UMaterialExpression : UMaterialExpression
{ 
public:
	FExpressionInput                                   LayerUsed;                                                  // 0x00B0   (0x0028)  
	FExpressionInput                                   LayerNotUsed;                                               // 0x00D8   (0x0028)  
	FName                                              ParameterName;                                              // 0x0100   (0x0008)  
	bool                                               PreviewUsed : 1;                                            // 0x0108:0 (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0109   (0x0007)  MISSED
};

/// Class /Script/Landscape.MaterialExpressionLandscapeLayerWeight
/// Size: 0x0078 (0x0000B0 - 0x000128)
class UMaterialExpressionLandscapeLayerWeight : public UMaterialExpression : UMaterialExpression
{ 
public:
	FExpressionInput                                   base;                                                       // 0x00B0   (0x0028)  
	FExpressionInput                                   Layer;                                                      // 0x00D8   (0x0028)  
	FName                                              ParameterName;                                              // 0x0100   (0x0008)  
	float                                              PreviewWeight;                                              // 0x0108   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x010C   (0x0004)  MISSED
	FVector                                            ConstBase;                                                  // 0x0110   (0x0018)  
};

/// Class /Script/Landscape.MaterialExpressionLandscapePhysicalMaterialOutput
/// Size: 0x0010 (0x0000B0 - 0x0000C0)
class UMaterialExpressionLandscapePhysicalMaterialOutput : public UMaterialExpressionCustomOutput : UMaterialExpressionCustomOutput
{ 
public:
	TArray<FPhysicalMaterialInput>                     Inputs;                                                     // 0x00B0   (0x0010)  
};

/// Class /Script/Landscape.MaterialExpressionLandscapeVisibilityMask
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class UMaterialExpressionLandscapeVisibilityMask : public UMaterialExpression : UMaterialExpression
{ 
public:
};

/// Enum /Script/Landscape.ELandscapeSetupErrors
/// Size: 0x05
enum ELandscapeSetupErrors : uint8_t
{
	LSE_None0                                                                        = 0,
	LSE_NoLandscapeInfo1                                                             = 1,
	LSE_CollsionXY2                                                                  = 2,
	LSE_NoLayerInfo3                                                                 = 3,
	LSE_MAX4                                                                         = 4
};

/// Enum /Script/Landscape.ERTDrawingType
/// Size: 0x06
enum ERTDrawingType : uint8_t
{
	ERTDrawingType__RTAtlas0                                                         = 0,
	ERTDrawingType__RTAtlasToNonAtlas1                                               = 1,
	ERTDrawingType__RTNonAtlasToAtlas2                                               = 2,
	ERTDrawingType__RTNonAtlas3                                                      = 3,
	ERTDrawingType__RTMips4                                                          = 4,
	ERTDrawingType__ERTDrawingType_MAX5                                              = 5
};

/// Enum /Script/Landscape.EHeightmapRTType
/// Size: 0x14
enum EHeightmapRTType : uint8_t
{
	EHeightmapRTType__HeightmapRT_CombinedAtlas0                                     = 0,
	EHeightmapRTType__HeightmapRT_CombinedNonAtlas1                                  = 1,
	EHeightmapRTType__HeightmapRT_Scratch12                                          = 2,
	EHeightmapRTType__HeightmapRT_Scratch23                                          = 3,
	EHeightmapRTType__HeightmapRT_Scratch34                                          = 4,
	EHeightmapRTType__HeightmapRT_Mip15                                              = 5,
	EHeightmapRTType__HeightmapRT_Mip26                                              = 6,
	EHeightmapRTType__HeightmapRT_Mip37                                              = 7,
	EHeightmapRTType__HeightmapRT_Mip48                                              = 8,
	EHeightmapRTType__HeightmapRT_Mip59                                              = 9,
	EHeightmapRTType__HeightmapRT_Mip610                                             = 10,
	EHeightmapRTType__HeightmapRT_Mip711                                             = 11,
	EHeightmapRTType__HeightmapRT_Count12                                            = 12,
	EHeightmapRTType__HeightmapRT_MAX13                                              = 13
};

/// Enum /Script/Landscape.EWeightmapRTType
/// Size: 0x14
enum EWeightmapRTType : uint8_t
{
	EWeightmapRTType__WeightmapRT_Scratch_RGBA0                                      = 0,
	EWeightmapRTType__WeightmapRT_Scratch11                                          = 1,
	EWeightmapRTType__WeightmapRT_Scratch22                                          = 2,
	EWeightmapRTType__WeightmapRT_Scratch33                                          = 3,
	EWeightmapRTType__WeightmapRT_Mip04                                              = 4,
	EWeightmapRTType__WeightmapRT_Mip15                                              = 5,
	EWeightmapRTType__WeightmapRT_Mip26                                              = 6,
	EWeightmapRTType__WeightmapRT_Mip37                                              = 7,
	EWeightmapRTType__WeightmapRT_Mip48                                              = 8,
	EWeightmapRTType__WeightmapRT_Mip59                                              = 9,
	EWeightmapRTType__WeightmapRT_Mip610                                             = 10,
	EWeightmapRTType__WeightmapRT_Mip711                                             = 11,
	EWeightmapRTType__WeightmapRT_Count12                                            = 12,
	EWeightmapRTType__WeightmapRT_MAX13                                              = 13
};

/// Enum /Script/Landscape.ELandscapeBlendMode
/// Size: 0x03
enum ELandscapeBlendMode : uint8_t
{
	LSBM_AdditiveBlend0                                                              = 0,
	LSBM_AlphaBlend1                                                                 = 1,
	LSBM_MAX2                                                                        = 2
};

/// Enum /Script/Landscape.ELandscapeClearMode
/// Size: 0x04
enum ELandscapeClearMode : uint8_t
{
	Clear_Weightmap0                                                                 = 1,
	Clear_Heightmap1                                                                 = 2,
	Clear_All2                                                                       = 3,
	Clear_MAX3                                                                       = 4
};

/// Enum /Script/Landscape.ELandscapeGizmoType
/// Size: 0x04
enum ELandscapeGizmoType : uint8_t
{
	LGT_None0                                                                        = 0,
	LGT_Height1                                                                      = 1,
	LGT_Weight2                                                                      = 2,
	LGT_MAX3                                                                         = 3
};

/// Enum /Script/Landscape.ELandscapeGizmoSnapType
/// Size: 0x04
enum ELandscapeGizmoSnapType : uint8_t
{
	ELandscapeGizmoSnapType__None0                                                   = 0,
	ELandscapeGizmoSnapType__Component1                                              = 1,
	ELandscapeGizmoSnapType__Texel2                                                  = 2,
	ELandscapeGizmoSnapType__ELandscapeGizmoSnapType_MAX3                            = 3
};

/// Enum /Script/Landscape.EGrassScaling
/// Size: 0x04
enum EGrassScaling : uint8_t
{
	EGrassScaling__Uniform0                                                          = 0,
	EGrassScaling__Free1                                                             = 1,
	EGrassScaling__LockXY2                                                           = 2,
	EGrassScaling__EGrassScaling_MAX3                                                = 3
};

/// Enum /Script/Landscape.ESplineModulationColorMask
/// Size: 0x05
enum ESplineModulationColorMask : uint8_t
{
	ESplineModulationColorMask__Red0                                                 = 0,
	ESplineModulationColorMask__Green1                                               = 1,
	ESplineModulationColorMask__Blue2                                                = 2,
	ESplineModulationColorMask__Alpha3                                               = 3,
	ESplineModulationColorMask__ESplineModulationColorMask_MAX4                      = 4
};

/// Enum /Script/Landscape.ELandscapeDirtyingMode
/// Size: 0x04
enum ELandscapeDirtyingMode : uint8_t
{
	ELandscapeDirtyingMode__Auto0                                                    = 0,
	ELandscapeDirtyingMode__InLandscapeModeOnly1                                     = 1,
	ELandscapeDirtyingMode__InLandscapeModeAndUserTriggeredChanges2                  = 2,
	ELandscapeDirtyingMode__ELandscapeDirtyingMode_MAX3                              = 3
};

/// Enum /Script/Landscape.LandscapeSplineMeshOrientation
/// Size: 0x03
enum LandscapeSplineMeshOrientation : uint8_t
{
	LSMO_XUp0                                                                        = 0,
	LSMO_YUp1                                                                        = 1,
	LSMO_MAX2                                                                        = 2
};

/// Enum /Script/Landscape.ELandscapeLayerBlendType
/// Size: 0x04
enum ELandscapeLayerBlendType : uint8_t
{
	LB_WeightBlend0                                                                  = 0,
	LB_AlphaBlend1                                                                   = 1,
	LB_HeightBlend2                                                                  = 2,
	LB_MAX3                                                                          = 3
};

/// Enum /Script/Landscape.ETerrainCoordMappingType
/// Size: 0x05
enum ETerrainCoordMappingType : uint8_t
{
	TCMT_Auto0                                                                       = 0,
	TCMT_XY1                                                                         = 1,
	TCMT_XZ2                                                                         = 2,
	TCMT_YZ3                                                                         = 3,
	TCMT_MAX4                                                                        = 4
};

/// Enum /Script/Landscape.ELandscapeCustomizedCoordType
/// Size: 0x06
enum ELandscapeCustomizedCoordType : uint8_t
{
	LCCT_None0                                                                       = 0,
	LCCT_CustomUV01                                                                  = 1,
	LCCT_CustomUV12                                                                  = 2,
	LCCT_CustomUV23                                                                  = 3,
	LCCT_WeightMapUV4                                                                = 4,
	LCCT_MAX5                                                                        = 5
};

/// Enum /Script/Landscape.ELandscapeResizeMode
/// Size: 0x04
enum ELandscapeResizeMode : uint8_t
{
	ELandscapeResizeMode__Resample0                                                  = 0,
	ELandscapeResizeMode__Clip1                                                      = 1,
	ELandscapeResizeMode__Expand2                                                    = 2,
	ELandscapeResizeMode__ELandscapeResizeMode_MAX3                                  = 3
};

/// Enum /Script/Landscape.ELandscapeImportAlphamapType
/// Size: 0x03
enum ELandscapeImportAlphamapType : uint8_t
{
	ELandscapeImportAlphamapType__Additive0                                          = 0,
	ELandscapeImportAlphamapType__Layered1                                           = 1,
	ELandscapeImportAlphamapType__ELandscapeImportAlphamapType_MAX2                  = 2
};

/// Enum /Script/Landscape.ELandscapeLayerPaintingRestriction
/// Size: 0x05
enum ELandscapeLayerPaintingRestriction : uint8_t
{
	ELandscapeLayerPaintingRestriction__None0                                        = 0,
	ELandscapeLayerPaintingRestriction__UseMaxLayers1                                = 1,
	ELandscapeLayerPaintingRestriction__ExistingOnly2                                = 2,
	ELandscapeLayerPaintingRestriction__UseComponentAllowList3                       = 3,
	ELandscapeLayerPaintingRestriction__ELandscapeLayerPaintingRestriction_MAX4      = 4
};

/// Enum /Script/Landscape.ELandscapeLayerDisplayMode
/// Size: 0x04
enum ELandscapeLayerDisplayMode : uint8_t
{
	ELandscapeLayerDisplayMode__Default0                                             = 0,
	ELandscapeLayerDisplayMode__Alphabetical1                                        = 1,
	ELandscapeLayerDisplayMode__UserSpecific2                                        = 2,
	ELandscapeLayerDisplayMode__ELandscapeLayerDisplayMode_MAX3                      = 3
};

/// Enum /Script/Landscape.ELandscapeLODFalloff
/// Size: 0x03
enum ELandscapeLODFalloff : uint8_t
{
	ELandscapeLODFalloff__Linear0                                                    = 0,
	ELandscapeLODFalloff__SquareRoot1                                                = 1,
	ELandscapeLODFalloff__ELandscapeLODFalloff_MAX2                                  = 2
};

