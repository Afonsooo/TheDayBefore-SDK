
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package Foliage.

/// Struct /Script/Foliage.FoliageVertexColorChannelMask
/// Size: 0x000C (0x000000 - 0x00000C)
struct FFoliageVertexColorChannelMask
{ 
	bool                                               UseMask : 1;                                                // 0x0000:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              MaskThreshold;                                              // 0x0004   (0x0004)  
	bool                                               InvertMask : 1;                                             // 0x0008:0 (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0009   (0x0003)  MISSED
};

/// Struct /Script/Foliage.FoliageDensityFalloff
/// Size: 0x0090 (0x000000 - 0x000090)
struct FFoliageDensityFalloff
{ 
	bool                                               bUseFalloffCurve;                                           // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	FRuntimeFloatCurve                                 FalloffCurve;                                               // 0x0008   (0x0088)  
};

/// Struct /Script/Foliage.FoliageTypeObject
/// Size: 0x0020 (0x000000 - 0x000020)
struct FFoliageTypeObject
{ 
	UObject*                                           FoliageTypeObject;                                          // 0x0000   (0x0008)  
	UFoliageType*                                      TypeInstance;                                               // 0x0008   (0x0008)  
	bool                                               bIsAsset;                                                   // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0011   (0x0007)  MISSED
	UClass*                                            Type;                                                       // 0x0018   (0x0008)  
};

/// Struct /Script/Foliage.ProceduralFoliageInstance
/// Size: 0x0080 (0x000000 - 0x000080)
struct FProceduralFoliageInstance
{ 
	FQuat                                              Rotation;                                                   // 0x0000   (0x0020)  
	FVector                                            Location;                                                   // 0x0020   (0x0018)  
	float                                              AGE;                                                        // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x003C   (0x0004)  MISSED
	FVector                                            Normal;                                                     // 0x0040   (0x0018)  
	float                                              Scale;                                                      // 0x0058   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x005C   (0x0004)  MISSED
	UFoliageType*                                      Type;                                                       // 0x0060   (0x0008)  
	unsigned char                                      UnknownData02_6[0x18];                                      // 0x0068   (0x0018)  MISSED
};

/// Class /Script/Foliage.FoliageInstancedStaticMeshComponent
/// Size: 0x0030 (0x000900 - 0x000930)
class UFoliageInstancedStaticMeshComponent : public UHierarchicalInstancedStaticMeshComponent : UHierarchicalInstancedStaticMeshComponent
{ 
public:
	FMulticastInlineDelegate                           OnInstanceTakePointDamage;                                  // 0x08F8   (0x0010)  
	FMulticastInlineDelegate                           OnInstanceTakeRadialDamage;                                 // 0x0908   (0x0010)  
	bool                                               bEnableDiscardOnLoad;                                       // 0x0918   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0919   (0x0003)  MISSED
	FGuid                                              GenerationGuid;                                             // 0x091C   (0x0010)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x092C   (0x0004)  MISSED
};

/// Class /Script/Foliage.FoliageType
/// Size: 0x0498 (0x000028 - 0x0004C0)
class UFoliageType : public UObject : UObject
{ 
public:
	FGuid                                              UpdateGuid;                                                 // 0x0028   (0x0010)  
	float                                              Density;                                                    // 0x0038   (0x0004)  
	float                                              DensityAdjustmentFactor;                                    // 0x003C   (0x0004)  
	float                                              Radius;                                                     // 0x0040   (0x0004)  
	bool                                               bSingleInstanceModeOverrideRadius;                          // 0x0044   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0045   (0x0003)  MISSED
	float                                              SingleInstanceModeRadius;                                   // 0x0048   (0x0004)  
	EFoliageScaling                                    Scaling;                                                    // 0x004C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x004D   (0x0003)  MISSED
	FFloatInterval                                     ScaleX;                                                     // 0x0050   (0x0008)  
	FFloatInterval                                     ScaleY;                                                     // 0x0058   (0x0008)  
	FFloatInterval                                     ScaleZ;                                                     // 0x0060   (0x0008)  
	FFoliageVertexColorChannelMask                     VertexColorMaskByChannel;                                   // 0x0068   (0x0030)  
	TEnumAsByte<FoliageVertexColorMask>                VertexColorMask;                                            // 0x0098   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0099   (0x0003)  MISSED
	float                                              VertexColorMaskThreshold;                                   // 0x009C   (0x0004)  
	bool                                               VertexColorMaskInvert : 1;                                  // 0x00A0:0 (0x0001)  
	unsigned char                                      UnknownData03_4[0x3];                                       // 0x00A1   (0x0003)  MISSED
	FFloatInterval                                     ZOffset;                                                    // 0x00A4   (0x0008)  
	bool                                               AlignToNormal : 1;                                          // 0x00AC:0 (0x0001)  
	bool                                               AverageNormal : 1;                                          // 0x00AC:1 (0x0001)  
	bool                                               AverageNormalSingleComponent : 1;                           // 0x00AC:2 (0x0001)  
	unsigned char                                      UnknownData04_4[0x3];                                       // 0x00AD   (0x0003)  MISSED
	float                                              AlignMaxAngle;                                              // 0x00B0   (0x0004)  
	bool                                               RandomYaw : 1;                                              // 0x00B4:0 (0x0001)  
	unsigned char                                      UnknownData05_4[0x3];                                       // 0x00B5   (0x0003)  MISSED
	float                                              RandomPitchAngle;                                           // 0x00B8   (0x0004)  
	FFloatInterval                                     GroundSlopeAngle;                                           // 0x00BC   (0x0008)  
	FFloatInterval                                     Height;                                                     // 0x00C4   (0x0008)  
	unsigned char                                      UnknownData06_5[0x4];                                       // 0x00CC   (0x0004)  MISSED
	TArray<FName>                                      LandscapeLayers;                                            // 0x00D0   (0x0010)  
	float                                              MinimumLayerWeight;                                         // 0x00E0   (0x0004)  
	unsigned char                                      UnknownData07_5[0x4];                                       // 0x00E4   (0x0004)  MISSED
	TArray<FName>                                      ExclusionLandscapeLayers;                                   // 0x00E8   (0x0010)  
	float                                              MinimumExclusionLayerWeight;                                // 0x00F8   (0x0004)  
	FName                                              LandscapeLayer;                                             // 0x00FC   (0x0008)  
	bool                                               CollisionWithWorld : 1;                                     // 0x0104:0 (0x0001)  
	unsigned char                                      UnknownData08_4[0x3];                                       // 0x0105   (0x0003)  MISSED
	FVector                                            CollisionScale;                                             // 0x0108   (0x0018)  
	int32_t                                            AverageNormalSampleCount;                                   // 0x0120   (0x0004)  
	unsigned char                                      UnknownData09_5[0x4];                                       // 0x0124   (0x0004)  MISSED
	FBoxSphereBounds                                   MeshBounds;                                                 // 0x0128   (0x0038)  
	FVector                                            LowBoundOriginRadius;                                       // 0x0160   (0x0018)  
	TEnumAsByte<EComponentMobility>                    Mobility;                                                   // 0x0178   (0x0001)  
	unsigned char                                      UnknownData10_5[0x3];                                       // 0x0179   (0x0003)  MISSED
	FInt32Interval                                     CullDistance;                                               // 0x017C   (0x0008)  
	bool                                               bEnableStaticLighting : 1;                                  // 0x0184:0 (0x0001)  
	bool                                               CastShadow : 1;                                             // 0x0184:1 (0x0001)  
	bool                                               bAffectDynamicIndirectLighting : 1;                         // 0x0184:2 (0x0001)  
	bool                                               bAffectDistanceFieldLighting : 1;                           // 0x0184:3 (0x0001)  
	bool                                               bCastDynamicShadow : 1;                                     // 0x0184:4 (0x0001)  
	bool                                               bCastStaticShadow : 1;                                      // 0x0184:5 (0x0001)  
	unsigned char                                      UnknownData11_3[0x3];                                       // 0x0185   (0x0003)  MISSED
	bool                                               bCastContactShadow : 1;                                     // 0x0188:0 (0x0001)  
	unsigned char                                      UnknownData12_3[0x3];                                       // 0x0189   (0x0003)  MISSED
	bool                                               bCastShadowAsTwoSided : 1;                                  // 0x018C:0 (0x0001)  
	bool                                               bReceivesDecals : 1;                                        // 0x018C:1 (0x0001)  
	bool                                               bOverrideLightMapRes : 1;                                   // 0x018C:2 (0x0001)  
	unsigned char                                      UnknownData13_4[0x3];                                       // 0x018D   (0x0003)  MISSED
	int32_t                                            OverriddenLightMapRes;                                      // 0x0190   (0x0004)  
	ELightmapType                                      LightmapType;                                               // 0x0194   (0x0001)  
	unsigned char                                      UnknownData14_5[0x3];                                       // 0x0195   (0x0003)  MISSED
	bool                                               bUseAsOccluder : 1;                                         // 0x0198:0 (0x0001)  
	unsigned char                                      UnknownData15_3[0x3];                                       // 0x0199   (0x0003)  MISSED
	bool                                               bVisibleInRayTracing : 1;                                   // 0x019C:0 (0x0001)  
	bool                                               bEvaluateWorldPositionOffset : 1;                           // 0x019C:1 (0x0001)  
	unsigned char                                      UnknownData16_4[0x3];                                       // 0x019D   (0x0003)  MISSED
	int32_t                                            WorldPositionOffsetDisableDistance;                         // 0x01A0   (0x0004)  
	unsigned char                                      UnknownData17_5[0x4];                                       // 0x01A4   (0x0004)  MISSED
	FBodyInstance                                      BodyInstance;                                               // 0x01A8   (0x0190)  
	TEnumAsByte<EHasCustomNavigableGeometry>           CustomNavigableGeometry;                                    // 0x0338   (0x0001)  
	FLightingChannels                                  LightingChannels;                                           // 0x0339   (0x0001)  
	unsigned char                                      UnknownData18_5[0x2];                                       // 0x033A   (0x0002)  MISSED
	bool                                               bRenderCustomDepth : 1;                                     // 0x033C:0 (0x0001)  
	unsigned char                                      UnknownData19_4[0x3];                                       // 0x033D   (0x0003)  MISSED
	ERendererStencilMask                               CustomDepthStencilWriteMask;                                // 0x0340   (0x0001)  
	unsigned char                                      UnknownData20_5[0x3];                                       // 0x0341   (0x0003)  MISSED
	int32_t                                            CustomDepthStencilValue;                                    // 0x0344   (0x0004)  
	int32_t                                            TranslucencySortPriority;                                   // 0x0348   (0x0004)  
	float                                              CollisionRadius;                                            // 0x034C   (0x0004)  
	float                                              ShadeRadius;                                                // 0x0350   (0x0004)  
	int32_t                                            NumSteps;                                                   // 0x0354   (0x0004)  
	float                                              InitialSeedDensity;                                         // 0x0358   (0x0004)  
	float                                              AverageSpreadDistance;                                      // 0x035C   (0x0004)  
	float                                              SpreadVariance;                                             // 0x0360   (0x0004)  
	int32_t                                            SeedsPerStep;                                               // 0x0364   (0x0004)  
	int32_t                                            DistributionSeed;                                           // 0x0368   (0x0004)  
	float                                              MaxInitialSeedOffset;                                       // 0x036C   (0x0004)  
	bool                                               bCanGrowInShade;                                            // 0x0370   (0x0001)  
	bool                                               bSpawnsInShade;                                             // 0x0371   (0x0001)  
	unsigned char                                      UnknownData21_5[0x2];                                       // 0x0372   (0x0002)  MISSED
	float                                              MaxInitialAge;                                              // 0x0374   (0x0004)  
	float                                              MaxAge;                                                     // 0x0378   (0x0004)  
	float                                              OverlapPriority;                                            // 0x037C   (0x0004)  
	FFloatInterval                                     ProceduralScale;                                            // 0x0380   (0x0008)  
	FRuntimeFloatCurve                                 ScaleCurve;                                                 // 0x0388   (0x0088)  
	FFoliageDensityFalloff                             DensityFalloff;                                             // 0x0410   (0x0090)  
	int32_t                                            ChangeCount;                                                // 0x04A0   (0x0004)  
	bool                                               ReapplyDensity : 1;                                         // 0x04A4:0 (0x0001)  
	bool                                               ReapplyRadius : 1;                                          // 0x04A4:1 (0x0001)  
	bool                                               ReapplyAlignToNormal : 1;                                   // 0x04A4:2 (0x0001)  
	bool                                               ReapplyRandomYaw : 1;                                       // 0x04A4:3 (0x0001)  
	bool                                               ReapplyScaling : 1;                                         // 0x04A4:4 (0x0001)  
	bool                                               ReapplyScaleX : 1;                                          // 0x04A4:5 (0x0001)  
	bool                                               ReapplyScaleY : 1;                                          // 0x04A4:6 (0x0001)  
	bool                                               ReapplyScaleZ : 1;                                          // 0x04A4:7 (0x0001)  
	bool                                               ReapplyRandomPitchAngle : 1;                                // 0x04A5:0 (0x0001)  
	bool                                               ReapplyGroundSlope : 1;                                     // 0x04A5:1 (0x0001)  
	bool                                               ReapplyHeight : 1;                                          // 0x04A5:2 (0x0001)  
	bool                                               ReapplyLandscapeLayers : 1;                                 // 0x04A5:3 (0x0001)  
	bool                                               ReapplyZOffset : 1;                                         // 0x04A5:4 (0x0001)  
	bool                                               ReapplyCollisionWithWorld : 1;                              // 0x04A5:5 (0x0001)  
	bool                                               ReapplyVertexColorMask : 1;                                 // 0x04A5:6 (0x0001)  
	bool                                               bEnableDensityScaling : 1;                                  // 0x04A5:7 (0x0001)  
	bool                                               bEnableDiscardOnLoad : 1;                                   // 0x04A6:0 (0x0001)  
	bool                                               bEnableCullDistanceScaling : 1;                             // 0x04A6:1 (0x0001)  
	unsigned char                                      UnknownData22_4[0x1];                                       // 0x04A7   (0x0001)  MISSED
	TArray<URuntimeVirtualTexture*>                    RuntimeVirtualTextures;                                     // 0x04A8   (0x0010)  
	int32_t                                            VirtualTextureCullMips;                                     // 0x04B8   (0x0004)  
	ERuntimeVirtualTextureMainPassType                 VirtualTextureRenderPassType;                               // 0x04BC   (0x0001)  
	unsigned char                                      UnknownData23_6[0x3];                                       // 0x04BD   (0x0003)  MISSED
};

/// Class /Script/Foliage.FoliageType_Actor
/// Size: 0x0018 (0x0004C0 - 0x0004D8)
class UFoliageType_Actor : public UFoliageType : UFoliageType
{ 
public:
	UClass*                                            ActorClass;                                                 // 0x04C0   (0x0008)  
	bool                                               bShouldAttachToBaseComponent;                               // 0x04C8   (0x0001)  
	bool                                               bStaticMeshOnly;                                            // 0x04C9   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x04CA   (0x0006)  MISSED
	UClass*                                            StaticMeshOnlyComponentClass;                               // 0x04D0   (0x0008)  
};

/// Class /Script/Foliage.FoliageType_InstancedStaticMesh
/// Size: 0x0030 (0x0004C0 - 0x0004F0)
class UFoliageType_InstancedStaticMesh : public UFoliageType : UFoliageType
{ 
public:
	UStaticMesh*                                       Mesh;                                                       // 0x04C0   (0x0008)  
	TArray<UMaterialInterface*>                        OverrideMaterials;                                          // 0x04C8   (0x0010)  
	TArray<UMaterialInterface*>                        NaniteOverrideMaterials;                                    // 0x04D8   (0x0010)  
	UClass*                                            ComponentClass;                                             // 0x04E8   (0x0008)  
};

/// Class /Script/Foliage.InstancedFoliageActor
/// Size: 0x0050 (0x0002A0 - 0x0002F0)
class AInstancedFoliageActor : public AISMPartitionActor : AISMPartitionActor
{ 
public:
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x02A0   (0x0050)  MISSED
};

/// Class /Script/Foliage.InteractiveFoliageComponent
/// Size: 0x0010 (0x000620 - 0x000630)
class UInteractiveFoliageComponent : public UStaticMeshComponent : UStaticMeshComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0620   (0x0010)  MISSED
};

/// Class /Script/Foliage.FoliageStatistics
/// Size: 0x0000 (0x000028 - 0x000028)
class UFoliageStatistics : public UBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/Foliage.GrassInstancedStaticMeshComponent
/// Size: 0x0000 (0x000900 - 0x000900)
class UGrassInstancedStaticMeshComponent : public UHierarchicalInstancedStaticMeshComponent : UHierarchicalInstancedStaticMeshComponent
{ 
public:
};

/// Class /Script/Foliage.InteractiveFoliageActor
/// Size: 0x0090 (0x0002A0 - 0x000330)
class AInteractiveFoliageActor : public AStaticMeshActor : AStaticMeshActor
{ 
public:
	UCapsuleComponent*                                 CapsuleComponent;                                           // 0x02A0   (0x0008)  
	FVector                                            TouchingActorEntryPosition;                                 // 0x02A8   (0x0018)  
	FVector                                            FoliageVelocity;                                            // 0x02C0   (0x0018)  
	FVector                                            FoliageForce;                                               // 0x02D8   (0x0018)  
	FVector                                            FoliagePosition;                                            // 0x02F0   (0x0018)  
	float                                              FoliageDamageImpulseScale;                                  // 0x0308   (0x0004)  
	float                                              FoliageTouchImpulseScale;                                   // 0x030C   (0x0004)  
	float                                              FoliageStiffness;                                           // 0x0310   (0x0004)  
	float                                              FoliageStiffnessQuadratic;                                  // 0x0314   (0x0004)  
	float                                              FoliageDamping;                                             // 0x0318   (0x0004)  
	float                                              MaxDamageImpulse;                                           // 0x031C   (0x0004)  
	float                                              MaxTouchImpulse;                                            // 0x0320   (0x0004)  
	float                                              MaxForce;                                                   // 0x0324   (0x0004)  
	float                                              Mass;                                                       // 0x0328   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x032C   (0x0004)  MISSED


	/// Functions
	// Function /Script/Foliage.InteractiveFoliageActor.CapsuleTouched
	void CapsuleTouched(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& OverlapInfo); // [0x35c0a30] Final|Native|Protected|HasOutParms 
};

/// Class /Script/Foliage.ProceduralFoliageBlockingVolume
/// Size: 0x0098 (0x0002C8 - 0x000360)
class AProceduralFoliageBlockingVolume : public AVolume : AVolume
{ 
public:
	AProceduralFoliageVolume*                          ProceduralFoliageVolume;                                    // 0x02C8   (0x0008)  
	FFoliageDensityFalloff                             DensityFalloff;                                             // 0x02D0   (0x0090)  
};

/// Class /Script/Foliage.ProceduralFoliageComponent
/// Size: 0x0028 (0x0000A0 - 0x0000C8)
class UProceduralFoliageComponent : public UActorComponent : UActorComponent
{ 
public:
	UProceduralFoliageSpawner*                         FoliageSpawner;                                             // 0x00A0   (0x0008)  
	float                                              TileOverlap;                                                // 0x00A8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00AC   (0x0004)  MISSED
	AVolume*                                           SpawningVolume;                                             // 0x00B0   (0x0008)  
	FGuid                                              ProceduralGuid;                                             // 0x00B8   (0x0010)  
};

/// Class /Script/Foliage.ProceduralFoliageSpawner
/// Size: 0x0040 (0x000028 - 0x000068)
class UProceduralFoliageSpawner : public UObject : UObject
{ 
public:
	int32_t                                            RandomSeed;                                                 // 0x0028   (0x0004)  
	float                                              TileSize;                                                   // 0x002C   (0x0004)  
	int32_t                                            NumUniqueTiles;                                             // 0x0030   (0x0004)  
	float                                              MinimumQuadTreeSize;                                        // 0x0034   (0x0004)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0038   (0x0008)  MISSED
	TArray<FFoliageTypeObject>                         FoliageTypes;                                               // 0x0040   (0x0010)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x0050   (0x0018)  MISSED


	/// Functions
	// Function /Script/Foliage.ProceduralFoliageSpawner.Simulate
	void Simulate(int32_t NumSteps);                                                                                         // [0x35c1230] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/Foliage.ProceduralFoliageTile
/// Size: 0x0148 (0x000028 - 0x000170)
class UProceduralFoliageTile : public UObject : UObject
{ 
public:
	UProceduralFoliageSpawner*                         FoliageSpawner;                                             // 0x0028   (0x0008)  
	unsigned char                                      UnknownData00_5[0xA0];                                      // 0x0030   (0x00A0)  MISSED
	TArray<FProceduralFoliageInstance>                 InstancesArray;                                             // 0x00D0   (0x0010)  
	unsigned char                                      UnknownData01_6[0x90];                                      // 0x00E0   (0x0090)  MISSED
};

/// Class /Script/Foliage.ProceduralFoliageVolume
/// Size: 0x0010 (0x0002C8 - 0x0002D8)
class AProceduralFoliageVolume : public AVolume : AVolume
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x02C8   (0x0008)  MISSED
	UProceduralFoliageComponent*                       ProceduralComponent;                                        // 0x02D0   (0x0008)  
};

/// Enum /Script/Foliage.FoliageVertexColorMask
/// Size: 0x06
enum FoliageVertexColorMask : uint8_t
{
	FOLIAGEVERTEXCOLORMASK_Disabled0                                                 = 0,
	FOLIAGEVERTEXCOLORMASK_Red1                                                      = 1,
	FOLIAGEVERTEXCOLORMASK_Green2                                                    = 2,
	FOLIAGEVERTEXCOLORMASK_Blue3                                                     = 3,
	FOLIAGEVERTEXCOLORMASK_Alpha4                                                    = 4,
	FOLIAGEVERTEXCOLORMASK_MAX5                                                      = 5
};

/// Enum /Script/Foliage.EVertexColorMaskChannel
/// Size: 0x06
enum EVertexColorMaskChannel : uint8_t
{
	EVertexColorMaskChannel__Red0                                                    = 0,
	EVertexColorMaskChannel__Green1                                                  = 1,
	EVertexColorMaskChannel__Blue2                                                   = 2,
	EVertexColorMaskChannel__Alpha3                                                  = 3,
	EVertexColorMaskChannel__MAX_None4                                               = 4,
	EVertexColorMaskChannel__EVertexColorMaskChannel_MAX5                            = 5
};

/// Enum /Script/Foliage.EFoliageScaling
/// Size: 0x06
enum EFoliageScaling : uint8_t
{
	EFoliageScaling__Uniform0                                                        = 0,
	EFoliageScaling__Free1                                                           = 1,
	EFoliageScaling__LockXY2                                                         = 2,
	EFoliageScaling__LockXZ3                                                         = 3,
	EFoliageScaling__LockYZ4                                                         = 4,
	EFoliageScaling__EFoliageScaling_MAX5                                            = 5
};

/// Enum /Script/Foliage.ESimulationOverlap
/// Size: 0x04
enum ESimulationOverlap : uint8_t
{
	ESimulationOverlap__CollisionOverlap0                                            = 0,
	ESimulationOverlap__ShadeOverlap1                                                = 1,
	ESimulationOverlap__None2                                                        = 2,
	ESimulationOverlap__ESimulationOverlap_MAX3                                      = 3
};

/// Enum /Script/Foliage.ESimulationQuery
/// Size: 0x05
enum ESimulationQuery : uint8_t
{
	ESimulationQuery__None0                                                          = 0,
	ESimulationQuery__CollisionOverlap1                                              = 1,
	ESimulationQuery__ShadeOverlap2                                                  = 2,
	ESimulationQuery__AnyOverlap3                                                    = 3,
	ESimulationQuery__ESimulationQuery_MAX4                                          = 4
};

