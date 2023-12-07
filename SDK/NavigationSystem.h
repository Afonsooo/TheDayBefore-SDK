
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package NavigationSystem.

/// Struct /Script/NavigationSystem.NavCollisionCylinder
/// Size: 0x0020 (0x000000 - 0x000020)
struct FNavCollisionCylinder
{ 
	FVector                                            Offset;                                                     // 0x0000   (0x0018)  
	float                                              Radius;                                                     // 0x0018   (0x0004)  
	float                                              Height;                                                     // 0x001C   (0x0004)  
};

/// Struct /Script/NavigationSystem.NavCollisionBox
/// Size: 0x0030 (0x000000 - 0x000030)
struct FNavCollisionBox
{ 
	FVector                                            Offset;                                                     // 0x0000   (0x0018)  
	FVector                                            Extent;                                                     // 0x0018   (0x0018)  
};

/// Struct /Script/NavigationSystem.NavigationFilterArea
/// Size: 0x0018 (0x000000 - 0x000018)
struct FNavigationFilterArea
{ 
	UClass*                                            AreaClass;                                                  // 0x0000   (0x0008)  
	float                                              TravelCostOverride;                                         // 0x0008   (0x0004)  
	float                                              EnteringCostOverride;                                       // 0x000C   (0x0004)  
	bool                                               bIsExcluded : 1;                                            // 0x0010:0 (0x0001)  
	bool                                               bOverrideTravelCost : 1;                                    // 0x0010:1 (0x0001)  
	bool                                               bOverrideEnteringCost : 1;                                  // 0x0010:2 (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/NavigationSystem.NavigationFilterFlags
/// Size: 0x0004 (0x000000 - 0x000004)
struct FNavigationFilterFlags
{ 
	bool                                               bNavFlag0 : 1;                                              // 0x0000:0 (0x0001)  
	bool                                               bNavFlag1 : 1;                                              // 0x0000:1 (0x0001)  
	bool                                               bNavFlag2 : 1;                                              // 0x0000:2 (0x0001)  
	bool                                               bNavFlag3 : 1;                                              // 0x0000:3 (0x0001)  
	bool                                               bNavFlag4 : 1;                                              // 0x0000:4 (0x0001)  
	bool                                               bNavFlag5 : 1;                                              // 0x0000:5 (0x0001)  
	bool                                               bNavFlag6 : 1;                                              // 0x0000:6 (0x0001)  
	bool                                               bNavFlag7 : 1;                                              // 0x0000:7 (0x0001)  
	bool                                               bNavFlag8 : 1;                                              // 0x0001:0 (0x0001)  
	bool                                               bNavFlag9 : 1;                                              // 0x0001:1 (0x0001)  
	bool                                               bNavFlag10 : 1;                                             // 0x0001:2 (0x0001)  
	bool                                               bNavFlag11 : 1;                                             // 0x0001:3 (0x0001)  
	bool                                               bNavFlag12 : 1;                                             // 0x0001:4 (0x0001)  
	bool                                               bNavFlag13 : 1;                                             // 0x0001:5 (0x0001)  
	bool                                               bNavFlag14 : 1;                                             // 0x0001:6 (0x0001)  
	bool                                               bNavFlag15 : 1;                                             // 0x0001:7 (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0002   (0x0002)  MISSED
};

/// Struct /Script/NavigationSystem.NavGraphEdge
/// Size: 0x0018 (0x000000 - 0x000018)
struct FNavGraphEdge
{ 
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0000   (0x0018)  MISSED
};

/// Struct /Script/NavigationSystem.NavGraphNode
/// Size: 0x0018 (0x000000 - 0x000018)
struct FNavGraphNode
{ 
	UObject*                                           Owner;                                                      // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0008   (0x0010)  MISSED
};

/// Struct /Script/NavigationSystem.SupportedAreaData
/// Size: 0x0020 (0x000000 - 0x000020)
struct FSupportedAreaData
{ 
	FString                                            AreaClassName;                                              // 0x0000   (0x0010)  
	int32_t                                            AreaID;                                                     // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0014   (0x0004)  MISSED
	UClass*                                            AreaClass;                                                  // 0x0018   (0x0008)  
};

/// Struct /Script/NavigationSystem.NavLinkCustomInstanceData
/// Size: 0x0008 (0x000068 - 0x000070)
struct FNavLinkCustomInstanceData : FActorComponentInstanceData
{ 
	uint32_t                                           NavLinkUserId;                                              // 0x0068   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x006C   (0x0004)  MISSED
};

/// Struct /Script/NavigationSystem.RecastNavMeshGenerationProperties
/// Size: 0x0040 (0x000000 - 0x000040)
struct FRecastNavMeshGenerationProperties
{ 
	int32_t                                            TilePoolSize;                                               // 0x0000   (0x0004)  
	float                                              TileSizeUU;                                                 // 0x0004   (0x0004)  
	float                                              CellSize;                                                   // 0x0008   (0x0004)  
	float                                              CellHeight;                                                 // 0x000C   (0x0004)  
	float                                              AgentRadius;                                                // 0x0010   (0x0004)  
	float                                              AgentHeight;                                                // 0x0014   (0x0004)  
	float                                              AgentMaxSlope;                                              // 0x0018   (0x0004)  
	float                                              AgentMaxStepHeight;                                         // 0x001C   (0x0004)  
	float                                              MinRegionArea;                                              // 0x0020   (0x0004)  
	float                                              MergeRegionSize;                                            // 0x0024   (0x0004)  
	float                                              MaxSimplificationError;                                     // 0x0028   (0x0004)  
	int32_t                                            TileNumberHardLimit;                                        // 0x002C   (0x0004)  
	TEnumAsByte<ERecastPartitioning>                   RegionPartitioning;                                         // 0x0030   (0x0001)  
	TEnumAsByte<ERecastPartitioning>                   LayerPartitioning;                                          // 0x0031   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0032   (0x0002)  MISSED
	int32_t                                            RegionChunkSplits;                                          // 0x0034   (0x0004)  
	int32_t                                            LayerChunkSplits;                                           // 0x0038   (0x0004)  
	bool                                               bSortNavigationAreasByCost : 1;                             // 0x003C:0 (0x0001)  
	bool                                               bPerformVoxelFiltering : 1;                                 // 0x003C:1 (0x0001)  
	bool                                               bMarkLowHeightAreas : 1;                                    // 0x003C:2 (0x0001)  
	bool                                               bUseExtraTopCellWhenMarkingAreas : 1;                       // 0x003C:3 (0x0001)  
	bool                                               bFilterLowSpanSequences : 1;                                // 0x003C:4 (0x0001)  
	bool                                               bFilterLowSpanFromTileCache : 1;                            // 0x003C:5 (0x0001)  
	bool                                               bFixedTilePoolSize : 1;                                     // 0x003C:6 (0x0001)  
	bool                                               bIsWorldPartitioned : 1;                                    // 0x003C:7 (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x003D   (0x0003)  MISSED
};

/// Struct /Script/NavigationSystem.RecastNavMeshTileGenerationDebug
/// Size: 0x001C (0x000000 - 0x00001C)
struct FRecastNavMeshTileGenerationDebug
{ 
	bool                                               bEnabled : 1;                                               // 0x0000:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x0001   (0x0003)  MISSED
	FIntVector                                         TileCoordinate;                                             // 0x0004   (0x000C)  
	bool                                               bGenerateDebugTileOnly : 1;                                 // 0x0010:0 (0x0001)  
	bool                                               bCollisionGeometry : 1;                                     // 0x0010:1 (0x0001)  
	unsigned char                                      UnknownData01_4[0x3];                                       // 0x0011   (0x0003)  MISSED
	EHeightFieldRenderMode                             HeightFieldRenderMode;                                      // 0x0014   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0015   (0x0003)  MISSED
	bool                                               bHeightfieldFromRasterization : 1;                          // 0x0018:0 (0x0001)  
	bool                                               bHeightfieldPostInclusionBoundsFiltering : 1;               // 0x0018:1 (0x0001)  
	bool                                               bHeightfieldPostHeightFiltering : 1;                        // 0x0018:2 (0x0001)  
	bool                                               bHeightfieldBounds : 1;                                     // 0x0018:3 (0x0001)  
	bool                                               bCompactHeightfield : 1;                                    // 0x0018:4 (0x0001)  
	bool                                               bCompactHeightfieldEroded : 1;                              // 0x0018:5 (0x0001)  
	bool                                               bCompactHeightfieldRegions : 1;                             // 0x0018:6 (0x0001)  
	bool                                               bCompactHeightfieldDistances : 1;                           // 0x0018:7 (0x0001)  
	bool                                               bTileCacheLayerAreas : 1;                                   // 0x0019:0 (0x0001)  
	bool                                               bTileCacheLayerRegions : 1;                                 // 0x0019:1 (0x0001)  
	bool                                               bTileCacheContours : 1;                                     // 0x0019:2 (0x0001)  
	bool                                               bTileCachePolyMesh : 1;                                     // 0x0019:3 (0x0001)  
	bool                                               bTileCacheDetailMesh : 1;                                   // 0x0019:4 (0x0001)  
	unsigned char                                      UnknownData03_6[0x2];                                       // 0x001A   (0x0002)  MISSED
};

/// Struct /Script/NavigationSystem.NavMeshResolutionParam
/// Size: 0x0008 (0x000000 - 0x000008)
struct FNavMeshResolutionParam
{ 
	float                                              CellSize;                                                   // 0x0000   (0x0004)  
	float                                              CellHeight;                                                 // 0x0004   (0x0004)  
};

/// Class /Script/NavigationSystem.NavModifierVolume
/// Size: 0x0028 (0x0002C8 - 0x0002F0)
class ANavModifierVolume : public AVolume : AVolume
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x02C8   (0x0008)  MISSED
	UClass*                                            AreaClass;                                                  // 0x02D0   (0x0008)  
	bool                                               bMaskFillCollisionUnderneathForNavmesh;                     // 0x02D8   (0x0001)  
	ENavigationDataResolution                          NavMeshResolution;                                          // 0x02D9   (0x0001)  
	unsigned char                                      UnknownData01_6[0x16];                                      // 0x02DA   (0x0016)  MISSED


	/// Functions
	// Function /Script/NavigationSystem.NavModifierVolume.SetAreaClass
	void SetAreaClass(UClass* NewAreaClass);                                                                                 // [0x483ce00] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/NavigationSystem.CrowdManagerBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UCrowdManagerBase : public UObject : UObject
{ 
public:
};

/// Class /Script/NavigationSystem.NavigationGraphNode
/// Size: 0x0000 (0x000290 - 0x000290)
class ANavigationGraphNode : public AActor : AActor
{ 
public:
};

/// Class /Script/NavigationSystem.NavigationGraphNodeComponent
/// Size: 0x0030 (0x0002A0 - 0x0002D0)
class UNavigationGraphNodeComponent : public USceneComponent : USceneComponent
{ 
public:
	FNavGraphNode                                      Node;                                                       // 0x02A0   (0x0018)  
	UNavigationGraphNodeComponent*                     NextNodeComponent;                                          // 0x02B8   (0x0008)  
	UNavigationGraphNodeComponent*                     PrevNodeComponent;                                          // 0x02C0   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x02C8   (0x0008)  MISSED
};

/// Class /Script/NavigationSystem.NavigationPathGenerator
/// Size: 0x0000 (0x000028 - 0x000028)
class UNavigationPathGenerator : public UInterface : UInterface
{ 
public:
};

/// Class /Script/NavigationSystem.NavLinkCustomInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UNavLinkCustomInterface : public UInterface : UInterface
{ 
public:
};

/// Class /Script/NavigationSystem.NavLinkHostInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UNavLinkHostInterface : public UInterface : UInterface
{ 
public:
};

/// Class /Script/NavigationSystem.NavLinkTrivial
/// Size: 0x0000 (0x000050 - 0x000050)
class UNavLinkTrivial : public UNavLinkDefinition : UNavLinkDefinition
{ 
public:
};

/// Class /Script/NavigationSystem.NavNodeInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UNavNodeInterface : public UInterface : UInterface
{ 
public:
};

/// Class /Script/NavigationSystem.NavigationData
/// Size: 0x0228 (0x000290 - 0x0004B8)
class ANavigationData : public AActor : AActor
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0290   (0x0008)  MISSED
	UPrimitiveComponent*                               RenderingComp;                                              // 0x0298   (0x0008)  
	FNavDataConfig                                     NavDataConfig;                                              // 0x02A0   (0x0098)  
	bool                                               bEnableDrawing : 1;                                         // 0x0338:0 (0x0001)  
	bool                                               bForceRebuildOnLoad : 1;                                    // 0x0338:1 (0x0001)  
	bool                                               bAutoDestroyWhenNoNavigation : 1;                           // 0x0338:2 (0x0001)  
	bool                                               bCanBeMainNavData : 1;                                      // 0x0338:3 (0x0001)  
	bool                                               bCanSpawnOnRebuild : 1;                                     // 0x0338:4 (0x0001)  
	bool                                               bRebuildAtRuntime : 1;                                      // 0x0338:5 (0x0001)  
	unsigned char                                      UnknownData01_4[0x3];                                       // 0x0339   (0x0003)  MISSED
	ERuntimeGenerationType                             RuntimeGeneration;                                          // 0x033C   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x033D   (0x0003)  MISSED
	float                                              ObservedPathsTickInterval;                                  // 0x0340   (0x0004)  
	uint32_t                                           DataVersion;                                                // 0x0344   (0x0004)  
	unsigned char                                      UnknownData03_5[0x108];                                     // 0x0348   (0x0108)  MISSED
	TArray<FSupportedAreaData>                         SupportedAreas;                                             // 0x0450   (0x0010)  
	unsigned char                                      UnknownData04_6[0x58];                                      // 0x0460   (0x0058)  MISSED
};

/// Class /Script/NavigationSystem.AbstractNavData
/// Size: 0x0000 (0x0004B8 - 0x0004B8)
class AAbstractNavData : public ANavigationData : ANavigationData
{ 
public:
};

/// Class /Script/NavigationSystem.NavArea
/// Size: 0x0018 (0x000030 - 0x000048)
class UNavArea : public UNavAreaBase : UNavAreaBase
{ 
public:
	float                                              DefaultCost;                                                // 0x0030   (0x0004)  
	float                                              FixedAreaEnteringCost;                                      // 0x0034   (0x0004)  
	FColor                                             DrawColor;                                                  // 0x0038   (0x0004)  
	FNavAgentSelector                                  SupportedAgents;                                            // 0x003C   (0x0004)  
	bool                                               bSupportsAgent0 : 1;                                        // 0x0040:0 (0x0001)  
	bool                                               bSupportsAgent1 : 1;                                        // 0x0040:1 (0x0001)  
	bool                                               bSupportsAgent2 : 1;                                        // 0x0040:2 (0x0001)  
	bool                                               bSupportsAgent3 : 1;                                        // 0x0040:3 (0x0001)  
	bool                                               bSupportsAgent4 : 1;                                        // 0x0040:4 (0x0001)  
	bool                                               bSupportsAgent5 : 1;                                        // 0x0040:5 (0x0001)  
	bool                                               bSupportsAgent6 : 1;                                        // 0x0040:6 (0x0001)  
	bool                                               bSupportsAgent7 : 1;                                        // 0x0040:7 (0x0001)  
	bool                                               bSupportsAgent8 : 1;                                        // 0x0041:0 (0x0001)  
	bool                                               bSupportsAgent9 : 1;                                        // 0x0041:1 (0x0001)  
	bool                                               bSupportsAgent10 : 1;                                       // 0x0041:2 (0x0001)  
	bool                                               bSupportsAgent11 : 1;                                       // 0x0041:3 (0x0001)  
	bool                                               bSupportsAgent12 : 1;                                       // 0x0041:4 (0x0001)  
	bool                                               bSupportsAgent13 : 1;                                       // 0x0041:5 (0x0001)  
	bool                                               bSupportsAgent14 : 1;                                       // 0x0041:6 (0x0001)  
	bool                                               bSupportsAgent15 : 1;                                       // 0x0041:7 (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0042   (0x0006)  MISSED
};

/// Class /Script/NavigationSystem.NavAreaMeta
/// Size: 0x0000 (0x000048 - 0x000048)
class UNavAreaMeta : public UNavArea : UNavArea
{ 
public:
};

/// Class /Script/NavigationSystem.NavAreaMeta_SwitchByAgent
/// Size: 0x0080 (0x000048 - 0x0000C8)
class UNavAreaMeta_SwitchByAgent : public UNavAreaMeta : UNavAreaMeta
{ 
public:
	UClass*                                            Agent0Area;                                                 // 0x0048   (0x0008)  
	UClass*                                            Agent1Area;                                                 // 0x0050   (0x0008)  
	UClass*                                            Agent2Area;                                                 // 0x0058   (0x0008)  
	UClass*                                            Agent3Area;                                                 // 0x0060   (0x0008)  
	UClass*                                            Agent4Area;                                                 // 0x0068   (0x0008)  
	UClass*                                            Agent5Area;                                                 // 0x0070   (0x0008)  
	UClass*                                            Agent6Area;                                                 // 0x0078   (0x0008)  
	UClass*                                            Agent7Area;                                                 // 0x0080   (0x0008)  
	UClass*                                            Agent8Area;                                                 // 0x0088   (0x0008)  
	UClass*                                            Agent9Area;                                                 // 0x0090   (0x0008)  
	UClass*                                            Agent10Area;                                                // 0x0098   (0x0008)  
	UClass*                                            Agent11Area;                                                // 0x00A0   (0x0008)  
	UClass*                                            Agent12Area;                                                // 0x00A8   (0x0008)  
	UClass*                                            Agent13Area;                                                // 0x00B0   (0x0008)  
	UClass*                                            Agent14Area;                                                // 0x00B8   (0x0008)  
	UClass*                                            Agent15Area;                                                // 0x00C0   (0x0008)  
};

/// Class /Script/NavigationSystem.NavArea_Default
/// Size: 0x0000 (0x000048 - 0x000048)
class UNavArea_Default : public UNavArea : UNavArea
{ 
public:
};

/// Class /Script/NavigationSystem.NavArea_LowHeight
/// Size: 0x0000 (0x000048 - 0x000048)
class UNavArea_LowHeight : public UNavArea : UNavArea
{ 
public:
};

/// Class /Script/NavigationSystem.NavArea_Null
/// Size: 0x0000 (0x000048 - 0x000048)
class UNavArea_Null : public UNavArea : UNavArea
{ 
public:
};

/// Class /Script/NavigationSystem.NavArea_Obstacle
/// Size: 0x0000 (0x000048 - 0x000048)
class UNavArea_Obstacle : public UNavArea : UNavArea
{ 
public:
};

/// Class /Script/NavigationSystem.NavCollision
/// Size: 0x0060 (0x000070 - 0x0000D0)
class UNavCollision : public UNavCollisionBase : UNavCollisionBase
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0070   (0x0010)  MISSED
	TArray<FNavCollisionCylinder>                      CylinderCollision;                                          // 0x0080   (0x0010)  
	TArray<FNavCollisionBox>                           boxCollision;                                               // 0x0090   (0x0010)  
	UClass*                                            AreaClass;                                                  // 0x00A0   (0x0008)  
	bool                                               bGatherConvexGeometry : 1;                                  // 0x00A8:0 (0x0001)  
	bool                                               bCreateOnClient : 1;                                        // 0x00A8:1 (0x0001)  
	unsigned char                                      UnknownData01_6[0x27];                                      // 0x00A9   (0x0027)  MISSED
};

/// Class /Script/NavigationSystem.NavigationQueryFilter
/// Size: 0x0020 (0x000028 - 0x000048)
class UNavigationQueryFilter : public UObject : UObject
{ 
public:
	TArray<FNavigationFilterArea>                      Areas;                                                      // 0x0028   (0x0010)  
	FNavigationFilterFlags                             IncludeFlags;                                               // 0x0038   (0x0004)  
	FNavigationFilterFlags                             ExcludeFlags;                                               // 0x003C   (0x0004)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0040   (0x0008)  MISSED
};

/// Class /Script/NavigationSystem.RecastFilter_UseDefaultArea
/// Size: 0x0000 (0x000048 - 0x000048)
class URecastFilter_UseDefaultArea : public UNavigationQueryFilter : UNavigationQueryFilter
{ 
public:
};

/// Class /Script/NavigationSystem.NavigationGraph
/// Size: 0x0000 (0x0004B8 - 0x0004B8)
class ANavigationGraph : public ANavigationData : ANavigationData
{ 
public:
};

/// Class /Script/NavigationSystem.NavigationInvokerComponent
/// Size: 0x0010 (0x0000A0 - 0x0000B0)
class UNavigationInvokerComponent : public UActorComponent : UActorComponent
{ 
public:
	float                                              TileGenerationRadius;                                       // 0x00A0   (0x0004)  
	float                                              TileRemovalRadius;                                          // 0x00A4   (0x0004)  
	FNavAgentSelector                                  SupportedAgents;                                            // 0x00A8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00AC   (0x0004)  MISSED
};

/// Class /Script/NavigationSystem.NavigationPath
/// Size: 0x0060 (0x000028 - 0x000088)
class UNavigationPath : public UObject : UObject
{ 
public:
	FMulticastInlineDelegate                           PathUpdatedNotifier;                                        // 0x0028   (0x0010)  
	TArray<FVector>                                    PathPoints;                                                 // 0x0038   (0x0010)  
	TEnumAsByte<ENavigationOptionFlag>                 RecalculateOnInvalidation;                                  // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3F];                                      // 0x0049   (0x003F)  MISSED


	/// Functions
	// Function /Script/NavigationSystem.NavigationPath.IsValid
	bool IsValid();                                                                                                          // [0x47fdc90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NavigationSystem.NavigationPath.IsStringPulled
	bool IsStringPulled();                                                                                                   // [0x3365fc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NavigationSystem.NavigationPath.IsPartial
	bool IsPartial();                                                                                                        // [0x47fdc50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NavigationSystem.NavigationPath.GetPathLength
	double GetPathLength();                                                                                                  // [0x47fd7a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NavigationSystem.NavigationPath.GetPathCost
	double GetPathCost();                                                                                                    // [0x47fd510] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NavigationSystem.NavigationPath.GetDebugString
	FString GetDebugString();                                                                                                // [0x47fd370] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NavigationSystem.NavigationPath.EnableRecalculationOnInvalidation
	void EnableRecalculationOnInvalidation(TEnumAsByte<ENavigationOptionFlag> DoRecalculation);                              // [0x47fcdc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/NavigationSystem.NavigationPath.EnableDebugDrawing
	void EnableDebugDrawing(bool bShouldDrawDebugData, FLinearColor PathColor);                                              // [0x47fcbe0] Final|Native|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/NavigationSystem.NavigationSystemV1
/// Size: 0x1510 (0x000028 - 0x001538)
class UNavigationSystemV1 : public UNavigationSystemBase : UNavigationSystemBase
{ 
public:
	ANavigationData*                                   MainNavData;                                                // 0x0028   (0x0008)  
	ANavigationData*                                   AbstractNavData;                                            // 0x0030   (0x0008)  
	FName                                              DefaultAgentName;                                           // 0x0038   (0x0008)  
	TWeakObjectPtr<UClass*>                            CrowdManagerClass;                                          // 0x0040   (0x0030)  
	bool                                               bAutoCreateNavigationData : 1;                              // 0x0070:0 (0x0001)  
	bool                                               bSpawnNavDataInNavBoundsLevel : 1;                          // 0x0070:1 (0x0001)  
	bool                                               bAllowClientSideNavigation : 1;                             // 0x0070:2 (0x0001)  
	bool                                               bShouldDiscardSubLevelNavData : 1;                          // 0x0070:3 (0x0001)  
	bool                                               bTickWhilePaused : 1;                                       // 0x0070:4 (0x0001)  
	bool                                               bSupportRebuilding : 1;                                     // 0x0070:5 (0x0001)  
	bool                                               bInitialBuildingLocked : 1;                                 // 0x0070:6 (0x0001)  
	unsigned char                                      UnknownBit00 : 1;                                           // 0x0070:7 (0x0001)  MISSED
	bool                                               bSkipAgentHeightCheckWhenPickingNavData : 1;                // 0x0071:0 (0x0001)  
	unsigned char                                      UnknownData01_4[0x2];                                       // 0x0072   (0x0002)  MISSED
	int32_t                                            GeometryExportTriangleCountWarningThreshold;                // 0x0074   (0x0004)  
	bool                                               bGenerateNavigationOnlyAroundNavigationInvokers : 1;        // 0x0078:0 (0x0001)  
	unsigned char                                      UnknownData02_4[0x3];                                       // 0x0079   (0x0003)  MISSED
	float                                              ActiveTilesUpdateInterval;                                  // 0x007C   (0x0004)  
	ENavDataGatheringModeConfig                        DataGatheringMode;                                          // 0x0080   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0081   (0x0003)  MISSED
	float                                              DirtyAreaWarningSizeThreshold;                              // 0x0084   (0x0004)  
	float                                              GatheringNavModifiersWarningLimitTime;                      // 0x0088   (0x0004)  
	unsigned char                                      UnknownData04_5[0x4];                                       // 0x008C   (0x0004)  MISSED
	TArray<FNavDataConfig>                             SupportedAgents;                                            // 0x0090   (0x0010)  
	FNavAgentSelector                                  SupportedAgentsMask;                                        // 0x00A0   (0x0004)  
	unsigned char                                      UnknownData05_5[0x4];                                       // 0x00A4   (0x0004)  MISSED
	FBox                                               BuildBounds;                                                // 0x00A8   (0x0038)  
	TArray<ANavigationData*>                           NavDataSet;                                                 // 0x00E0   (0x0010)  
	TArray<ANavigationData*>                           NavDataRegistrationQueue;                                   // 0x00F0   (0x0010)  
	unsigned char                                      UnknownData06_5[0x10];                                      // 0x0100   (0x0010)  MISSED
	FMulticastInlineDelegate                           OnNavDataRegisteredEvent;                                   // 0x0110   (0x0010)  
	FMulticastInlineDelegate                           OnNavigationGenerationFinishedDelegate;                     // 0x0120   (0x0010)  
	unsigned char                                      UnknownData07_5[0xE0];                                      // 0x0130   (0x00E0)  MISSED
	FNavigationSystemRunMode                           OperationMode;                                              // 0x0210   (0x0001)  
	unsigned char                                      UnknownData08_6[0x1327];                                    // 0x0211   (0x1327)  MISSED


	/// Functions
	// Function /Script/NavigationSystem.NavigationSystemV1.UnregisterNavigationInvoker
	void UnregisterNavigationInvoker(AActor* Invoker);                                                                       // [0x47fec50] Final|Native|Public|BlueprintCallable 
	// Function /Script/NavigationSystem.NavigationSystemV1.SetMaxSimultaneousTileGenerationJobsCount
	void SetMaxSimultaneousTileGenerationJobsCount(int32_t MaxNumberOfJobs);                                                 // [0x47feb60] Final|Native|Public|BlueprintCallable 
	// Function /Script/NavigationSystem.NavigationSystemV1.SetGeometryGatheringMode
	void SetGeometryGatheringMode(ENavDataGatheringModeConfig NewMode);                                                      // [0x47fead0] Final|Native|Public|BlueprintCallable 
	// Function /Script/NavigationSystem.NavigationSystemV1.ResetMaxSimultaneousTileGenerationJobsCount
	void ResetMaxSimultaneousTileGenerationJobsCount();                                                                      // [0x47fea10] Final|Native|Public|BlueprintCallable 
	// Function /Script/NavigationSystem.NavigationSystemV1.RegisterNavigationInvoker
	void RegisterNavigationInvoker(AActor* Invoker, float TileGenerationRadius, float TileRemovalRadius);                    // [0x47fe8b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/NavigationSystem.NavigationSystemV1.OnNavigationBoundsUpdated
	void OnNavigationBoundsUpdated(ANavMeshBoundsVolume* NavVolume);                                                         // [0x47fe770] Final|Native|Public|BlueprintCallable 
	// Function /Script/NavigationSystem.NavigationSystemV1.NavigationRaycast
	bool NavigationRaycast(UObject* WorldContextObject, FVector& RayStart, FVector& RayEnd, FVector& HitLocation, UClass* FilterClass, AController* Querier); // [0x47fe530] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/NavigationSystem.NavigationSystemV1.K2_ReplaceAreaInOctreeData
	bool K2_ReplaceAreaInOctreeData(UObject* Object, UClass* OldArea, UClass* NewArea);                                      // [0x47fe3f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/NavigationSystem.NavigationSystemV1.K2_ProjectPointToNavigation
	bool K2_ProjectPointToNavigation(UObject* WorldContextObject, FVector& Point, FVector& ProjectedLocation, ANavigationData* NavData, UClass* FilterClass, FVector QueryExtent); // [0x47fe1e0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/NavigationSystem.NavigationSystemV1.K2_GetRandomReachablePointInRadius
	bool K2_GetRandomReachablePointInRadius(UObject* WorldContextObject, FVector& Origin, FVector& RandomLocation, float Radius, ANavigationData* NavData, UClass* FilterClass); // [0x47fded0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/NavigationSystem.NavigationSystemV1.K2_GetRandomPointInNavigableRadius
	bool K2_GetRandomPointInNavigableRadius(UObject* WorldContextObject, FVector& Origin, FVector& RandomLocation, float Radius, ANavigationData* NavData, UClass* FilterClass); // [0x47fdcb0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/NavigationSystem.NavigationSystemV1.K2_GetRandomLocationInNavigableRadius
	bool K2_GetRandomLocationInNavigableRadius(UObject* WorldContextObject, FVector& Origin, FVector& RandomLocation, float Radius, ANavigationData* NavData, UClass* FilterClass); // [0x47fdcb0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/NavigationSystem.NavigationSystemV1.IsNavigationBeingBuiltOrLocked
	bool IsNavigationBeingBuiltOrLocked(UObject* WorldContextObject);                                                        // [0x47fdb60] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/NavigationSystem.NavigationSystemV1.IsNavigationBeingBuilt
	bool IsNavigationBeingBuilt(UObject* WorldContextObject);                                                                // [0x47fda70] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/NavigationSystem.NavigationSystemV1.GetPathLength
	TEnumAsByte<ENavigationQueryResult> GetPathLength(UObject* WorldContextObject, FVector& PathStart, FVector& PathEnd, double& PathLength, ANavigationData* NavData, UClass* FilterClass); // [0x47fd830] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/NavigationSystem.NavigationSystemV1.GetPathCost
	TEnumAsByte<ENavigationQueryResult> GetPathCost(UObject* WorldContextObject, FVector& PathStart, FVector& PathEnd, double& PathCost, ANavigationData* NavData, UClass* FilterClass); // [0x47fd560] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/NavigationSystem.NavigationSystemV1.GetNavigationSystem
	UNavigationSystemV1* GetNavigationSystem(UObject* WorldContextObject);                                                   // [0x47fd450] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/NavigationSystem.NavigationSystemV1.FindPathToLocationSynchronously
	UNavigationPath* FindPathToLocationSynchronously(UObject* WorldContextObject, FVector& PathStart, FVector& PathEnd, AActor* PathfindingContext, UClass* FilterClass); // [0x47fd1a0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/NavigationSystem.NavigationSystemV1.FindPathToActorSynchronously
	UNavigationPath* FindPathToActorSynchronously(UObject* WorldContextObject, FVector& PathStart, AActor* GoalActor, float TetherDistance, AActor* PathfindingContext, UClass* FilterClass); // [0x47fce70] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/NavigationSystem.NavigationSystemModuleConfig
/// Size: 0x0008 (0x000058 - 0x000060)
class UNavigationSystemModuleConfig : public UNavigationSystemConfig : UNavigationSystemConfig
{ 
public:
	bool                                               bStrictlyStatic : 1;                                        // 0x0058:0 (0x0001)  
	bool                                               bCreateOnClient : 1;                                        // 0x0058:1 (0x0001)  
	bool                                               bAutoSpawnMissingNavData : 1;                               // 0x0058:2 (0x0001)  
	bool                                               bSpawnNavDataInNavBoundsLevel : 1;                          // 0x0058:3 (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0059   (0x0007)  MISSED
};

/// Class /Script/NavigationSystem.NavigationTestingActor
/// Size: 0x0128 (0x000290 - 0x0003B8)
class ANavigationTestingActor : public AActor : AActor
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0290   (0x0010)  MISSED
	UCapsuleComponent*                                 CapsuleComponent;                                           // 0x02A0   (0x0008)  
	UNavigationInvokerComponent*                       InvokerComponent;                                           // 0x02A8   (0x0008)  
	bool                                               bActAsNavigationInvoker : 1;                                // 0x02B0:0 (0x0001)  
	unsigned char                                      UnknownData01_4[0x7];                                       // 0x02B1   (0x0007)  MISSED
	FNavAgentProperties                                NavAgentProps;                                              // 0x02B8   (0x0038)  
	FVector                                            QueryingExtent;                                             // 0x02F0   (0x0018)  
	ANavigationData*                                   MyNavData;                                                  // 0x0308   (0x0008)  
	FVector                                            ProjectedLocation;                                          // 0x0310   (0x0018)  
	bool                                               bProjectedLocationValid : 1;                                // 0x0328:0 (0x0001)  
	bool                                               bSearchStart : 1;                                           // 0x0328:1 (0x0001)  
	unsigned char                                      UnknownData02_4[0x3];                                       // 0x0329   (0x0003)  MISSED
	float                                              CostLimitFactor;                                            // 0x032C   (0x0004)  
	float                                              MinimumCostLimit;                                           // 0x0330   (0x0004)  
	bool                                               bBacktracking : 1;                                          // 0x0334:0 (0x0001)  
	bool                                               bUseHierarchicalPathfinding : 1;                            // 0x0334:1 (0x0001)  
	bool                                               bGatherDetailedInfo : 1;                                    // 0x0334:2 (0x0001)  
	bool                                               bRequireNavigableEndLocation : 1;                           // 0x0334:3 (0x0001)  
	bool                                               bDrawDistanceToWall : 1;                                    // 0x0334:4 (0x0001)  
	bool                                               bShowNodePool : 1;                                          // 0x0334:5 (0x0001)  
	bool                                               bShowBestPath : 1;                                          // 0x0334:6 (0x0001)  
	bool                                               bShowDiffWithPreviousStep : 1;                              // 0x0334:7 (0x0001)  
	bool                                               bShouldBeVisibleInGame : 1;                                 // 0x0335:0 (0x0001)  
	unsigned char                                      UnknownData03_4[0x2];                                       // 0x0336   (0x0002)  MISSED
	TEnumAsByte<ENavCostDisplay>                       CostDisplayMode;                                            // 0x0338   (0x0001)  
	unsigned char                                      UnknownData04_5[0x7];                                       // 0x0339   (0x0007)  MISSED
	FVector2D                                          TextCanvasOffset;                                           // 0x0340   (0x0010)  
	bool                                               bPathExist : 1;                                             // 0x0350:0 (0x0001)  
	bool                                               bPathIsPartial : 1;                                         // 0x0350:1 (0x0001)  
	bool                                               bPathSearchOutOfNodes : 1;                                  // 0x0350:2 (0x0001)  
	unsigned char                                      UnknownData05_4[0x3];                                       // 0x0351   (0x0003)  MISSED
	float                                              PathfindingTime;                                            // 0x0354   (0x0004)  
	double                                             PathCost;                                                   // 0x0358   (0x0008)  
	int32_t                                            PathfindingSteps;                                           // 0x0360   (0x0004)  
	unsigned char                                      UnknownData06_5[0x4];                                       // 0x0364   (0x0004)  MISSED
	ANavigationTestingActor*                           OtherActor;                                                 // 0x0368   (0x0008)  
	UClass*                                            FilterClass;                                                // 0x0370   (0x0008)  
	int32_t                                            ShowStepIndex;                                              // 0x0378   (0x0004)  
	float                                              OffsetFromCornersDistance;                                  // 0x037C   (0x0004)  
	unsigned char                                      UnknownData07_6[0x38];                                      // 0x0380   (0x0038)  MISSED
};

/// Class /Script/NavigationSystem.NavLinkComponent
/// Size: 0x0010 (0x000570 - 0x000580)
class UNavLinkComponent : public UPrimitiveComponent : UPrimitiveComponent
{ 
public:
	TArray<FNavigationLink>                            Links;                                                      // 0x0570   (0x0010)  
};

/// Class /Script/NavigationSystem.NavRelevantComponent
/// Size: 0x0050 (0x0000A0 - 0x0000F0)
class UNavRelevantComponent : public UActorComponent : UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x40];                                      // 0x00A0   (0x0040)  MISSED
	bool                                               bAttachToOwnersRoot : 1;                                    // 0x00E0:0 (0x0001)  
	unsigned char                                      UnknownData01_4[0x7];                                       // 0x00E1   (0x0007)  MISSED
	UObject*                                           CachedNavParent;                                            // 0x00E8   (0x0008)  


	/// Functions
	// Function /Script/NavigationSystem.NavRelevantComponent.SetNavigationRelevancy
	void SetNavigationRelevancy(bool bRelevant);                                                                             // [0x483d010] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/NavigationSystem.NavLinkCustomComponent
/// Size: 0x00E0 (0x0000F0 - 0x0001D0)
class UNavLinkCustomComponent : public UNavRelevantComponent : UNavRelevantComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x00F0   (0x0008)  MISSED
	uint32_t                                           NavLinkUserId;                                              // 0x00F8   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x00FC   (0x0004)  MISSED
	UClass*                                            EnabledAreaClass;                                           // 0x0100   (0x0008)  
	UClass*                                            DisabledAreaClass;                                          // 0x0108   (0x0008)  
	FNavAgentSelector                                  SupportedAgents;                                            // 0x0110   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0114   (0x0004)  MISSED
	FVector                                            LinkRelativeStart;                                          // 0x0118   (0x0018)  
	FVector                                            LinkRelativeEnd;                                            // 0x0130   (0x0018)  
	TEnumAsByte<ENavLinkDirection>                     LinkDirection;                                              // 0x0148   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0149   (0x0003)  MISSED
	bool                                               bLinkEnabled : 1;                                           // 0x014C:0 (0x0001)  
	bool                                               bNotifyWhenEnabled : 1;                                     // 0x014C:1 (0x0001)  
	bool                                               bNotifyWhenDisabled : 1;                                    // 0x014C:2 (0x0001)  
	bool                                               bCreateBoxObstacle : 1;                                     // 0x014C:3 (0x0001)  
	unsigned char                                      UnknownData04_4[0x3];                                       // 0x014D   (0x0003)  MISSED
	FVector                                            ObstacleOffset;                                             // 0x0150   (0x0018)  
	FVector                                            ObstacleExtent;                                             // 0x0168   (0x0018)  
	UClass*                                            ObstacleAreaClass;                                          // 0x0180   (0x0008)  
	float                                              BroadcastRadius;                                            // 0x0188   (0x0004)  
	float                                              BroadcastInterval;                                          // 0x018C   (0x0004)  
	TEnumAsByte<ECollisionChannel>                     BroadcastChannel;                                           // 0x0190   (0x0001)  
	unsigned char                                      UnknownData05_6[0x3F];                                      // 0x0191   (0x003F)  MISSED
};

/// Class /Script/NavigationSystem.NavLinkRenderingComponent
/// Size: 0x0000 (0x000570 - 0x000570)
class UNavLinkRenderingComponent : public UPrimitiveComponent : UPrimitiveComponent
{ 
public:
};

/// Class /Script/NavigationSystem.NavMeshBoundsVolume
/// Size: 0x0008 (0x0002C8 - 0x0002D0)
class ANavMeshBoundsVolume : public AVolume : AVolume
{ 
public:
	FNavAgentSelector                                  SupportedAgents;                                            // 0x02C8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x02CC   (0x0004)  MISSED
};

/// Class /Script/NavigationSystem.NavMeshRenderingComponent
/// Size: 0x0010 (0x0005C0 - 0x0005D0)
class UNavMeshRenderingComponent : public UDebugDrawComponent : UDebugDrawComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x05C0   (0x0010)  MISSED
};

/// Class /Script/NavigationSystem.NavTestRenderingComponent
/// Size: 0x0000 (0x0005C0 - 0x0005C0)
class UNavTestRenderingComponent : public UDebugDrawComponent : UDebugDrawComponent
{ 
public:
};

/// Class /Script/NavigationSystem.RecastNavMesh
/// Size: 0x0100 (0x0004B8 - 0x0005B8)
class ARecastNavMesh : public ANavigationData : ANavigationData
{ 
public:
	bool                                               bDrawTriangleEdges : 1;                                     // 0x04B8:0 (0x0001)  
	bool                                               bDrawPolyEdges : 1;                                         // 0x04B8:1 (0x0001)  
	bool                                               bDrawFilledPolys : 1;                                       // 0x04B8:2 (0x0001)  
	bool                                               bDrawNavMeshEdges : 1;                                      // 0x04B8:3 (0x0001)  
	bool                                               bDrawTileBounds : 1;                                        // 0x04B8:4 (0x0001)  
	bool                                               bDrawTileResolutions : 1;                                   // 0x04B8:5 (0x0001)  
	bool                                               bDrawPathCollidingGeometry : 1;                             // 0x04B8:6 (0x0001)  
	bool                                               bDrawTileLabels : 1;                                        // 0x04B8:7 (0x0001)  
	bool                                               bDrawTileBuildTimes : 1;                                    // 0x04B9:0 (0x0001)  
	bool                                               bDrawTileBuildTimesHeatMap : 1;                             // 0x04B9:1 (0x0001)  
	bool                                               bDrawPolygonLabels : 1;                                     // 0x04B9:2 (0x0001)  
	bool                                               bDrawDefaultPolygonCost : 1;                                // 0x04B9:3 (0x0001)  
	bool                                               bDrawPolygonFlags : 1;                                      // 0x04B9:4 (0x0001)  
	bool                                               bDrawLabelsOnPathNodes : 1;                                 // 0x04B9:5 (0x0001)  
	bool                                               bDrawNavLinks : 1;                                          // 0x04B9:6 (0x0001)  
	bool                                               bDrawFailedNavLinks : 1;                                    // 0x04B9:7 (0x0001)  
	bool                                               bDrawClusters : 1;                                          // 0x04BA:0 (0x0001)  
	bool                                               bDrawOctree : 1;                                            // 0x04BA:1 (0x0001)  
	bool                                               bDrawOctreeDetails : 1;                                     // 0x04BA:2 (0x0001)  
	bool                                               bDrawMarkedForbiddenPolys : 1;                              // 0x04BA:3 (0x0001)  
	bool                                               bDistinctlyDrawTilesBeingBuilt : 1;                         // 0x04BA:4 (0x0001)  
	unsigned char                                      UnknownData00_4[0x1];                                       // 0x04BB   (0x0001)  MISSED
	float                                              DrawOffset;                                                 // 0x04BC   (0x0004)  
	FRecastNavMeshTileGenerationDebug                  TileGenerationDebug;                                        // 0x04C0   (0x001C)  
	bool                                               bFixedTilePoolSize : 1;                                     // 0x04DC:0 (0x0001)  
	unsigned char                                      UnknownData01_4[0x3];                                       // 0x04DD   (0x0003)  MISSED
	int32_t                                            TilePoolSize;                                               // 0x04E0   (0x0004)  
	float                                              TileSizeUU;                                                 // 0x04E4   (0x0004)  
	float                                              CellSize;                                                   // 0x04E8   (0x0004)  
	float                                              CellHeight;                                                 // 0x04EC   (0x0004)  
	FNavMeshResolutionParam                            NavMeshResolutionParams;                                    // 0x04F0   (0x0018)  
	float                                              AgentRadius;                                                // 0x0508   (0x0004)  
	float                                              AgentHeight;                                                // 0x050C   (0x0004)  
	float                                              AgentMaxSlope;                                              // 0x0510   (0x0004)  
	float                                              AgentMaxStepHeight;                                         // 0x0514   (0x0004)  
	float                                              MinRegionArea;                                              // 0x0518   (0x0004)  
	float                                              MergeRegionSize;                                            // 0x051C   (0x0004)  
	float                                              MaxSimplificationError;                                     // 0x0520   (0x0004)  
	int32_t                                            MaxSimultaneousTileGenerationJobsCount;                     // 0x0524   (0x0004)  
	int32_t                                            TileNumberHardLimit;                                        // 0x0528   (0x0004)  
	int32_t                                            PolyRefTileBits;                                            // 0x052C   (0x0004)  
	int32_t                                            PolyRefNavPolyBits;                                         // 0x0530   (0x0004)  
	int32_t                                            PolyRefSaltBits;                                            // 0x0534   (0x0004)  
	FVector                                            NavMeshOriginOffset;                                        // 0x0538   (0x0018)  
	float                                              DefaultDrawDistance;                                        // 0x0550   (0x0004)  
	float                                              DefaultMaxSearchNodes;                                      // 0x0554   (0x0004)  
	float                                              DefaultMaxHierarchicalSearchNodes;                          // 0x0558   (0x0004)  
	TEnumAsByte<ERecastPartitioning>                   RegionPartitioning;                                         // 0x055C   (0x0001)  
	TEnumAsByte<ERecastPartitioning>                   LayerPartitioning;                                          // 0x055D   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x055E   (0x0002)  MISSED
	int32_t                                            RegionChunkSplits;                                          // 0x0560   (0x0004)  
	int32_t                                            LayerChunkSplits;                                           // 0x0564   (0x0004)  
	bool                                               bSortNavigationAreasByCost : 1;                             // 0x0568:0 (0x0001)  
	bool                                               bIsWorldPartitioned : 1;                                    // 0x0568:1 (0x0001)  
	bool                                               bPerformVoxelFiltering : 1;                                 // 0x0568:2 (0x0001)  
	bool                                               bMarkLowHeightAreas : 1;                                    // 0x0568:3 (0x0001)  
	bool                                               bUseExtraTopCellWhenMarkingAreas : 1;                       // 0x0568:4 (0x0001)  
	bool                                               bFilterLowSpanSequences : 1;                                // 0x0568:5 (0x0001)  
	bool                                               bFilterLowSpanFromTileCache : 1;                            // 0x0568:6 (0x0001)  
	bool                                               bDoFullyAsyncNavDataGathering : 1;                          // 0x0568:7 (0x0001)  
	bool                                               bUseBetterOffsetsFromCorners : 1;                           // 0x0569:0 (0x0001)  
	bool                                               bStoreEmptyTileLayers : 1;                                  // 0x0569:1 (0x0001)  
	bool                                               bUseVirtualFilters : 1;                                     // 0x0569:2 (0x0001)  
	bool                                               bUseVirtualGeometryFilteringAndDirtying : 1;                // 0x0569:3 (0x0001)  
	bool                                               bAllowNavLinkAsPathEnd : 1;                                 // 0x0569:4 (0x0001)  
	unsigned char                                      UnknownData03_4[0x2];                                       // 0x056A   (0x0002)  MISSED
	int32_t                                            TimeSliceFilterLedgeSpansMaxYProcess;                       // 0x056C   (0x0004)  
	double                                             TimeSliceLongDurationDebug;                                 // 0x0570   (0x0008)  
	bool                                               bUseVoxelCache : 1;                                         // 0x0578:0 (0x0001)  
	unsigned char                                      UnknownData04_4[0x3];                                       // 0x0579   (0x0003)  MISSED
	float                                              TileSetUpdateInterval;                                      // 0x057C   (0x0004)  
	float                                              HeuristicScale;                                             // 0x0580   (0x0004)  
	float                                              VerticalDeviationFromGroundCompensation;                    // 0x0584   (0x0004)  
	unsigned char                                      UnknownData05_6[0x30];                                      // 0x0588   (0x0030)  MISSED


	/// Functions
	// Function /Script/NavigationSystem.RecastNavMesh.K2_ReplaceAreaInTileBounds
	bool K2_ReplaceAreaInTileBounds(FBox Bounds, UClass* OldArea, UClass* NewArea, bool ReplaceLinks);                       // [0x4838a20] Final|Native|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/NavigationSystem.RecastNavMeshDataChunk
/// Size: 0x0010 (0x000030 - 0x000040)
class URecastNavMeshDataChunk : public UNavigationDataChunk : UNavigationDataChunk
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0030   (0x0010)  MISSED
};

/// Class /Script/NavigationSystem.NavModifierComponent
/// Size: 0x00B0 (0x0000F0 - 0x0001A0)
class UNavModifierComponent : public UNavRelevantComponent : UNavRelevantComponent
{ 
public:
	UClass*                                            AreaClass;                                                  // 0x00F0   (0x0008)  
	FVector                                            FailsafeExtent;                                             // 0x00F8   (0x0018)  
	bool                                               bIncludeAgentHeight : 1;                                    // 0x0110:0 (0x0001)  
	unsigned char                                      UnknownData00_6[0x8F];                                      // 0x0111   (0x008F)  MISSED


	/// Functions
	// Function /Script/NavigationSystem.NavModifierComponent.SetAreaClass
	void SetAreaClass(UClass* NewAreaClass);                                                                                 // [0x483cf00] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/NavigationSystem.NavSystemConfigOverride
/// Size: 0x0010 (0x000290 - 0x0002A0)
class ANavSystemConfigOverride : public AActor : AActor
{ 
public:
	UNavigationSystemConfig*                           NavigationSystemConfig;                                     // 0x0290   (0x0008)  
	ENavSystemOverridePolicy                           OverridePolicy;                                             // 0x0298   (0x0001)  
	bool                                               bLoadOnClient : 1;                                          // 0x0299:0 (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x029A   (0x0006)  MISSED
};

/// Enum /Script/NavigationSystem.ERuntimeGenerationType
/// Size: 0x05
enum ERuntimeGenerationType : uint8_t
{
	ERuntimeGenerationType__Static0                                                  = 0,
	ERuntimeGenerationType__DynamicModifiersOnly1                                    = 1,
	ERuntimeGenerationType__Dynamic2                                                 = 2,
	ERuntimeGenerationType__LegacyGeneration3                                        = 3,
	ERuntimeGenerationType__ERuntimeGenerationType_MAX4                              = 4
};

/// Enum /Script/NavigationSystem.ENavCostDisplay
/// Size: 0x04
enum ENavCostDisplay : uint8_t
{
	ENavCostDisplay__TotalCost0                                                      = 0,
	ENavCostDisplay__HeuristicOnly1                                                  = 1,
	ENavCostDisplay__RealCostOnly2                                                   = 2,
	ENavCostDisplay__ENavCostDisplay_MAX3                                            = 3
};

/// Enum /Script/NavigationSystem.ERecastPartitioning
/// Size: 0x04
enum ERecastPartitioning : uint8_t
{
	ERecastPartitioning__Monotone0                                                   = 0,
	ERecastPartitioning__Watershed1                                                  = 1,
	ERecastPartitioning__ChunkyMonotone2                                             = 2,
	ERecastPartitioning__ERecastPartitioning_MAX3                                    = 3
};

/// Enum /Script/NavigationSystem.EHeightFieldRenderMode
/// Size: 0x03
enum EHeightFieldRenderMode : uint8_t
{
	EHeightFieldRenderMode__Solid0                                                   = 0,
	EHeightFieldRenderMode__Walkable1                                                = 1,
	EHeightFieldRenderMode__EHeightFieldRenderMode_MAX2                              = 2
};

/// Enum /Script/NavigationSystem.ENavSystemOverridePolicy
/// Size: 0x04
enum ENavSystemOverridePolicy : uint8_t
{
	ENavSystemOverridePolicy__Override0                                              = 0,
	ENavSystemOverridePolicy__Append1                                                = 1,
	ENavSystemOverridePolicy__Skip2                                                  = 2,
	ENavSystemOverridePolicy__ENavSystemOverridePolicy_MAX3                          = 3
};

