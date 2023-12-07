
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package GeometryCollectionEngine.

/// Struct /Script/GeometryCollectionEngine.ChaosBreakingEventData
/// Size: 0x0038 (0x000000 - 0x000038)
struct FChaosBreakingEventData
{ 
	FVector                                            Location;                                                   // 0x0000   (0x0018)  
	FVector                                            Velocity;                                                   // 0x0018   (0x0018)  
	float                                              Mass;                                                       // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Struct /Script/GeometryCollectionEngine.ChaosCollisionEventData
/// Size: 0x0080 (0x000000 - 0x000080)
struct FChaosCollisionEventData
{ 
	FVector                                            Location;                                                   // 0x0000   (0x0018)  
	FVector                                            Normal;                                                     // 0x0018   (0x0018)  
	FVector                                            Velocity1;                                                  // 0x0030   (0x0018)  
	FVector                                            Velocity2;                                                  // 0x0048   (0x0018)  
	float                                              Mass1;                                                      // 0x0060   (0x0004)  
	float                                              Mass2;                                                      // 0x0064   (0x0004)  
	FVector                                            Impulse;                                                    // 0x0068   (0x0018)  
};

/// Struct /Script/GeometryCollectionEngine.ChaosRemovalEventData
/// Size: 0x0020 (0x000000 - 0x000020)
struct FChaosRemovalEventData
{ 
	FVector                                            Location;                                                   // 0x0000   (0x0018)  
	float                                              Mass;                                                       // 0x0018   (0x0004)  
	int32_t                                            ParticleIndex;                                              // 0x001C   (0x0004)  
};

/// Struct /Script/GeometryCollectionEngine.ChaosTrailingEventData
/// Size: 0x0050 (0x000000 - 0x000050)
struct FChaosTrailingEventData
{ 
	FVector                                            Location;                                                   // 0x0000   (0x0018)  
	FVector                                            Velocity;                                                   // 0x0018   (0x0018)  
	FVector                                            AngularVelocity;                                            // 0x0030   (0x0018)  
	float                                              Mass;                                                       // 0x0048   (0x0004)  
	int32_t                                            ParticleIndex;                                              // 0x004C   (0x0004)  
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionRepData
/// Size: 0x0028 (0x000000 - 0x000028)
struct FGeometryCollectionRepData
{ 
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x0000   (0x0028)  MISSED
};

/// Struct /Script/GeometryCollectionEngine.GeomComponentCacheParameters
/// Size: 0x0050 (0x000000 - 0x000050)
struct FGeomComponentCacheParameters
{ 
	EGeometryCollectionCacheType                       CacheMode;                                                  // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	UGeometryCollectionCache*                          TargetCache;                                                // 0x0008   (0x0008)  
	float                                              ReverseCacheBeginTime;                                      // 0x0010   (0x0004)  
	bool                                               SaveCollisionData;                                          // 0x0014   (0x0001)  
	bool                                               DoGenerateCollisionData;                                    // 0x0015   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x0016   (0x0002)  MISSED
	int32_t                                            CollisionDataSizeMax;                                       // 0x0018   (0x0004)  
	bool                                               DoCollisionDataSpatialHash;                                 // 0x001C   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x001D   (0x0003)  MISSED
	float                                              CollisionDataSpatialHashRadius;                             // 0x0020   (0x0004)  
	int32_t                                            MaxCollisionPerCell;                                        // 0x0024   (0x0004)  
	bool                                               SaveBreakingData;                                           // 0x0028   (0x0001)  
	bool                                               DoGenerateBreakingData;                                     // 0x0029   (0x0001)  
	unsigned char                                      UnknownData03_5[0x2];                                       // 0x002A   (0x0002)  MISSED
	int32_t                                            BreakingDataSizeMax;                                        // 0x002C   (0x0004)  
	bool                                               DoBreakingDataSpatialHash;                                  // 0x0030   (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x0031   (0x0003)  MISSED
	float                                              BreakingDataSpatialHashRadius;                              // 0x0034   (0x0004)  
	int32_t                                            MaxBreakingPerCell;                                         // 0x0038   (0x0004)  
	bool                                               SaveTrailingData;                                           // 0x003C   (0x0001)  
	bool                                               DoGenerateTrailingData;                                     // 0x003D   (0x0001)  
	unsigned char                                      UnknownData05_5[0x2];                                       // 0x003E   (0x0002)  MISSED
	int32_t                                            TrailingDataSizeMax;                                        // 0x0040   (0x0004)  
	float                                              TrailingMinSpeedThreshold;                                  // 0x0044   (0x0004)  
	float                                              TrailingMinVolumeThreshold;                                 // 0x0048   (0x0004)  
	unsigned char                                      UnknownData06_6[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionDamagePropagationData
/// Size: 0x000C (0x000000 - 0x00000C)
struct FGeometryCollectionDamagePropagationData
{ 
	bool                                               bEnabled;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              BreakDamagePropagationFactor;                               // 0x0004   (0x0004)  
	float                                              ShockDamagePropagationFactor;                               // 0x0008   (0x0004)  
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionAutoInstanceMesh
/// Size: 0x0030 (0x000000 - 0x000030)
struct FGeometryCollectionAutoInstanceMesh
{ 
	FSoftObjectPath                                    StaticMesh;                                                 // 0x0000   (0x0020)  
	TArray<UMaterialInterface*>                        Materials;                                                  // 0x0020   (0x0010)  
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionSource
/// Size: 0x00A0 (0x000000 - 0x0000A0)
struct FGeometryCollectionSource
{ 
	FSoftObjectPath                                    SourceGeometryObject;                                       // 0x0000   (0x0020)  
	FTransform                                         LocalTransform;                                             // 0x0020   (0x0060)  
	TArray<UMaterialInterface*>                        SourceMaterial;                                             // 0x0080   (0x0010)  
	bool                                               bAddInternalMaterials;                                      // 0x0090   (0x0001)  
	bool                                               bSplitComponents;                                           // 0x0091   (0x0001)  
	unsigned char                                      UnknownData00_6[0xE];                                       // 0x0092   (0x000E)  MISSED
};

/// Struct /Script/GeometryCollectionEngine.ChaosBreakingEventRequestSettings
/// Size: 0x0018 (0x000000 - 0x000018)
struct FChaosBreakingEventRequestSettings
{ 
	int32_t                                            MaxNumberOfResults;                                         // 0x0000   (0x0004)  
	float                                              MinRadius;                                                  // 0x0004   (0x0004)  
	float                                              MinSpeed;                                                   // 0x0008   (0x0004)  
	float                                              MinMass;                                                    // 0x000C   (0x0004)  
	float                                              MaxDistance;                                                // 0x0010   (0x0004)  
	EChaosBreakingSortMethod                           SortMethod;                                                 // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0015   (0x0003)  MISSED
};

/// Struct /Script/GeometryCollectionEngine.ChaosCollisionEventRequestSettings
/// Size: 0x0018 (0x000000 - 0x000018)
struct FChaosCollisionEventRequestSettings
{ 
	int32_t                                            MaxNumberResults;                                           // 0x0000   (0x0004)  
	float                                              MinMass;                                                    // 0x0004   (0x0004)  
	float                                              MinSpeed;                                                   // 0x0008   (0x0004)  
	float                                              MinImpulse;                                                 // 0x000C   (0x0004)  
	float                                              MaxDistance;                                                // 0x0010   (0x0004)  
	EChaosCollisionSortMethod                          SortMethod;                                                 // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0015   (0x0003)  MISSED
};

/// Struct /Script/GeometryCollectionEngine.ChaosRemovalEventRequestSettings
/// Size: 0x0010 (0x000000 - 0x000010)
struct FChaosRemovalEventRequestSettings
{ 
	int32_t                                            MaxNumberOfResults;                                         // 0x0000   (0x0004)  
	float                                              MinMass;                                                    // 0x0004   (0x0004)  
	float                                              MaxDistance;                                                // 0x0008   (0x0004)  
	EChaosRemovalSortMethod                            SortMethod;                                                 // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x000D   (0x0003)  MISSED
};

/// Struct /Script/GeometryCollectionEngine.ChaosTrailingEventRequestSettings
/// Size: 0x0018 (0x000000 - 0x000018)
struct FChaosTrailingEventRequestSettings
{ 
	int32_t                                            MaxNumberOfResults;                                         // 0x0000   (0x0004)  
	float                                              MinMass;                                                    // 0x0004   (0x0004)  
	float                                              MinSpeed;                                                   // 0x0008   (0x0004)  
	float                                              MinAngularSpeed;                                            // 0x000C   (0x0004)  
	float                                              MaxDistance;                                                // 0x0010   (0x0004)  
	EChaosTrailingSortMethod                           SortMethod;                                                 // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0015   (0x0003)  MISSED
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionDebugDrawWarningMessage
/// Size: 0x0001 (0x000000 - 0x000001)
struct FGeometryCollectionDebugDrawWarningMessage
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionDebugDrawActorSelectedRigidBody
/// Size: 0x0018 (0x000000 - 0x000018)
struct FGeometryCollectionDebugDrawActorSelectedRigidBody
{ 
	int32_t                                            ID;                                                         // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	AChaosSolverActor*                                 Solver;                                                     // 0x0008   (0x0008)  
	AGeometryCollectionActor*                          GeometryCollection;                                         // 0x0010   (0x0008)  
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionEmbeddedExemplar
/// Size: 0x0030 (0x000000 - 0x000030)
struct FGeometryCollectionEmbeddedExemplar
{ 
	FSoftObjectPath                                    StaticMeshExemplar;                                         // 0x0000   (0x0020)  
	float                                              StartCullDistance;                                          // 0x0020   (0x0004)  
	float                                              EndCullDistance;                                            // 0x0024   (0x0004)  
	int32_t                                            InstanceCount;                                              // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionLevelSetData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FGeometryCollectionLevelSetData
{ 
	int32_t                                            MinLevelSetResolution;                                      // 0x0000   (0x0004)  
	int32_t                                            MaxLevelSetResolution;                                      // 0x0004   (0x0004)  
	int32_t                                            MinClusterLevelSetResolution;                               // 0x0008   (0x0004)  
	int32_t                                            MaxClusterLevelSetResolution;                               // 0x000C   (0x0004)  
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionCollisionParticleData
/// Size: 0x0008 (0x000000 - 0x000008)
struct FGeometryCollectionCollisionParticleData
{ 
	float                                              CollisionParticlesFraction;                                 // 0x0000   (0x0004)  
	int32_t                                            MaximumCollisionParticles;                                  // 0x0004   (0x0004)  
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionCollisionTypeData
/// Size: 0x0024 (0x000000 - 0x000024)
struct FGeometryCollectionCollisionTypeData
{ 
	ECollisionTypeEnum                                 CollisionType;                                              // 0x0000   (0x0001)  
	EImplicitTypeEnum                                  ImplicitType;                                               // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0002   (0x0002)  MISSED
	FGeometryCollectionLevelSetData                    LevelSet;                                                   // 0x0004   (0x0010)  
	FGeometryCollectionCollisionParticleData           CollisionParticles;                                         // 0x0014   (0x0008)  
	float                                              CollisionObjectReductionPercentage;                         // 0x001C   (0x0004)  
	float                                              CollisionMarginFraction;                                    // 0x0020   (0x0004)  
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionSizeSpecificData
/// Size: 0x0020 (0x000000 - 0x000020)
struct FGeometryCollectionSizeSpecificData
{ 
	float                                              MaxSize;                                                    // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<FGeometryCollectionCollisionTypeData>       CollisionShapes;                                            // 0x0008   (0x0010)  
	int32_t                                            DamageThreshold;                                            // 0x0018   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Class /Script/GeometryCollectionEngine.ChaosDestructionListener
/// Size: 0x02B0 (0x0002A0 - 0x000550)
class UChaosDestructionListener : public USceneComponent : USceneComponent
{ 
public:
	bool                                               bIsCollisionEventListeningEnabled : 1;                      // 0x02A0:0 (0x0001)  
	bool                                               bIsBreakingEventListeningEnabled : 1;                       // 0x02A0:1 (0x0001)  
	bool                                               bIsTrailingEventListeningEnabled : 1;                       // 0x02A0:2 (0x0001)  
	bool                                               bIsRemovalEventListeningEnabled : 1;                        // 0x02A0:3 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x02A1   (0x0003)  MISSED
	FChaosCollisionEventRequestSettings                CollisionEventRequestSettings;                              // 0x02A4   (0x0018)  
	FChaosBreakingEventRequestSettings                 BreakingEventRequestSettings;                               // 0x02BC   (0x0018)  
	FChaosTrailingEventRequestSettings                 TrailingEventRequestSettings;                               // 0x02D4   (0x0018)  
	FChaosRemovalEventRequestSettings                  RemovalEventRequestSettings;                                // 0x02EC   (0x0010)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x02FC   (0x0004)  MISSED
	TSet<AChaosSolverActor*>                           ChaosSolverActors;                                          // 0x0300   (0x0050)  
	TSet<AGeometryCollectionActor*>                    GeometryCollectionActors;                                   // 0x0350   (0x0050)  
	FMulticastInlineDelegate                           OnCollisionEvents;                                          // 0x03A0   (0x0010)  
	FMulticastInlineDelegate                           OnBreakingEvents;                                           // 0x03B0   (0x0010)  
	FMulticastInlineDelegate                           OnTrailingEvents;                                           // 0x03C0   (0x0010)  
	FMulticastInlineDelegate                           OnRemovalEvents;                                            // 0x03D0   (0x0010)  
	unsigned char                                      UnknownData02_6[0x170];                                     // 0x03E0   (0x0170)  MISSED


	/// Functions
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SortTrailingEvents
	void SortTrailingEvents(TArray<FChaosTrailingEventData>& TrailingEvents, EChaosTrailingSortMethod SortMethod);           // [0x3759170] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SortRemovalEvents
	void SortRemovalEvents(TArray<FChaosRemovalEventData>& RemovalEvents, EChaosRemovalSortMethod SortMethod);               // [0x3759060] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SortCollisionEvents
	void SortCollisionEvents(TArray<FChaosCollisionEventData>& CollisionEvents, EChaosCollisionSortMethod SortMethod);       // [0x3758f50] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SortBreakingEvents
	void SortBreakingEvents(TArray<FChaosBreakingEventData>& BreakingEvents, EChaosBreakingSortMethod SortMethod);           // [0x3758e40] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventRequestSettings
	void SetTrailingEventRequestSettings(FChaosTrailingEventRequestSettings& InSettings);                                    // [0x3758d80] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventEnabled
	void SetTrailingEventEnabled(bool bIsEnabled);                                                                           // [0x3758ce0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SetRemovalEventRequestSettings
	void SetRemovalEventRequestSettings(FChaosRemovalEventRequestSettings& InSettings);                                      // [0x3758920] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SetRemovalEventEnabled
	void SetRemovalEventEnabled(bool bIsEnabled);                                                                            // [0x3758880] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventRequestSettings
	void SetCollisionEventRequestSettings(FChaosCollisionEventRequestSettings& InSettings);                                  // [0x3758380] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventEnabled
	void SetCollisionEventEnabled(bool bIsEnabled);                                                                          // [0x37582e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventRequestSettings
	void SetBreakingEventRequestSettings(FChaosBreakingEventRequestSettings& InSettings);                                    // [0x3758220] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventEnabled
	void SetBreakingEventEnabled(bool bIsEnabled);                                                                           // [0x3758180] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.RemoveGeometryCollectionActor
	void RemoveGeometryCollectionActor(AGeometryCollectionActor* GeometryCollectionActor);                                   // [0x3757c20] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.RemoveChaosSolverActor
	void RemoveChaosSolverActor(AChaosSolverActor* ChaosSolverActor);                                                        // [0x1b2a540] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.IsEventListening
	bool IsEventListening();                                                                                                 // [0x3757910] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.AddGeometryCollectionActor
	void AddGeometryCollectionActor(AGeometryCollectionActor* GeometryCollectionActor);                                      // [0x3756700] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.AddChaosSolverActor
	void AddChaosSolverActor(AChaosSolverActor* ChaosSolverActor);                                                           // [0x1b2a540] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GeometryCollectionEngine.GeometryCollectionActor
/// Size: 0x0010 (0x000290 - 0x0002A0)
class AGeometryCollectionActor : public AActor : AActor
{ 
public:
	UGeometryCollectionComponent*                      GeometryCollectionComponent;                                // 0x0290   (0x0008)  
	UGeometryCollectionDebugDrawComponent*             GeometryCollectionDebugDrawComponent;                       // 0x0298   (0x0008)  


	/// Functions
	// Function /Script/GeometryCollectionEngine.GeometryCollectionActor.RaycastSingle
	bool RaycastSingle(FVector Start, FVector End, FHitResult& OutHit);                                                      // [0x3757940] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/GeometryCollectionEngine.GeometryCollectionCache
/// Size: 0x0028 (0x000028 - 0x000050)
class UGeometryCollectionCache : public UObject : UObject
{ 
public:
	FRecordedTransformTrack                            RecordedData;                                               // 0x0028   (0x0010)  
	UGeometryCollection*                               SupportedCollection;                                        // 0x0038   (0x0008)  
	FGuid                                              CompatibleCollectionState;                                  // 0x0040   (0x0010)  
};

/// Class /Script/GeometryCollectionEngine.GeometryCollectionComponent
/// Size: 0x05A0 (0x0005A0 - 0x000B40)
class UGeometryCollectionComponent : public UMeshComponent : UMeshComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x05A0   (0x0008)  MISSED
	AChaosSolverActor*                                 ChaosSolverActor;                                           // 0x05A8   (0x0008)  
	unsigned char                                      UnknownData01_5[0xE0];                                      // 0x05B0   (0x00E0)  MISSED
	UGeometryCollection*                               RestCollection;                                             // 0x0690   (0x0008)  
	TArray<AFieldSystemActor*>                         InitializationFields;                                       // 0x0698   (0x0010)  
	bool                                               Simulating;                                                 // 0x06A8   (0x0001)  
	unsigned char                                      UnknownData02_5[0x1];                                       // 0x06A9   (0x0001)  MISSED
	EObjectStateTypeEnum                               ObjectType;                                                 // 0x06AA   (0x0001)  
	bool                                               bForceMotionBlur;                                           // 0x06AB   (0x0001)  
	bool                                               EnableClustering;                                           // 0x06AC   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x06AD   (0x0003)  MISSED
	int32_t                                            ClusterGroupIndex;                                          // 0x06B0   (0x0004)  
	int32_t                                            MaxClusterLevel;                                            // 0x06B4   (0x0004)  
	TArray<float>                                      DamageThreshold;                                            // 0x06B8   (0x0010)  
	bool                                               bUseSizeSpecificDamageThreshold;                            // 0x06C8   (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x06C9   (0x0003)  MISSED
	FGeometryCollectionDamagePropagationData           DamagePropagationData;                                      // 0x06CC   (0x000C)  
	bool                                               bEnableDamageFromCollision;                                 // 0x06D8   (0x0001)  
	bool                                               bAllowRemovalOnSleep;                                       // 0x06D9   (0x0001)  
	bool                                               bAllowRemovalOnBreak;                                       // 0x06DA   (0x0001)  
	EClusterConnectionTypeEnum                         ClusterConnectionType;                                      // 0x06DB   (0x0001)  
	int32_t                                            CollisionGroup;                                             // 0x06DC   (0x0004)  
	float                                              CollisionSampleFraction;                                    // 0x06E0   (0x0004)  
	float                                              LinearEtherDrag;                                            // 0x06E4   (0x0004)  
	float                                              AngularEtherDrag;                                           // 0x06E8   (0x0004)  
	unsigned char                                      UnknownData05_5[0x4];                                       // 0x06EC   (0x0004)  MISSED
	UChaosPhysicalMaterial*                            PhysicalMaterial;                                           // 0x06F0   (0x0008)  
	EInitialVelocityTypeEnum                           InitialVelocityType;                                        // 0x06F8   (0x0001)  
	unsigned char                                      UnknownData06_5[0x7];                                       // 0x06F9   (0x0007)  MISSED
	FVector                                            InitialLinearVelocity;                                      // 0x0700   (0x0018)  
	FVector                                            InitialAngularVelocity;                                     // 0x0718   (0x0018)  
	UPhysicalMaterial*                                 PhysicalMaterialOverride;                                   // 0x0730   (0x0008)  
	FGeomComponentCacheParameters                      CacheParameters;                                            // 0x0738   (0x0050)  
	TArray<FTransform>                                 RestTransforms;                                             // 0x0788   (0x0010)  
	FMulticastInlineDelegate                           NotifyGeometryCollectionPhysicsStateChange;                 // 0x0798   (0x0010)  
	FMulticastInlineDelegate                           NotifyGeometryCollectionPhysicsLoadingStateChange;          // 0x07A8   (0x0010)  
	unsigned char                                      UnknownData07_5[0x18];                                      // 0x07B8   (0x0018)  MISSED
	FMulticastInlineDelegate                           OnChaosBreakEvent;                                          // 0x07D0   (0x0010)  
	FMulticastInlineDelegate                           OnChaosRemovalEvent;                                        // 0x07E0   (0x0010)  
	FMulticastInlineDelegate                           OnChaosCrumblingEvent;                                      // 0x07F0   (0x0010)  
	float                                              DesiredCacheTime;                                           // 0x0800   (0x0004)  
	bool                                               CachePlayback;                                              // 0x0804   (0x0001)  
	unsigned char                                      UnknownData08_5[0x3];                                       // 0x0805   (0x0003)  MISSED
	FMulticastInlineDelegate                           OnChaosPhysicsCollision;                                    // 0x0808   (0x0010)  
	bool                                               bNotifyBreaks;                                              // 0x0818   (0x0001)  
	bool                                               bNotifyCollisions;                                          // 0x0819   (0x0001)  
	bool                                               bNotifyTrailing;                                            // 0x081A   (0x0001)  
	bool                                               bNotifyRemovals;                                            // 0x081B   (0x0001)  
	bool                                               bNotifyCrumblings;                                          // 0x081C   (0x0001)  
	bool                                               bCrumblingEventIncludesChildren;                            // 0x081D   (0x0001)  
	bool                                               bStoreVelocities;                                           // 0x081E   (0x0001)  
	bool                                               bShowBoneColors;                                            // 0x081F   (0x0001)  
	bool                                               bUseRootProxyForNavigation;                                 // 0x0820   (0x0001)  
	bool                                               bUpdateNavigationInTick;                                    // 0x0821   (0x0001)  
	unsigned char                                      UnknownData09_5[0x6];                                       // 0x0822   (0x0006)  MISSED
	AGeometryCollectionISMPoolActor*                   ISMPool;                                                    // 0x0828   (0x0008)  
	unsigned char                                      UnknownData10_5[0x8];                                       // 0x0830   (0x0008)  MISSED
	bool                                               bEnableReplication;                                         // 0x0838   (0x0001)  
	bool                                               bEnableAbandonAfterLevel;                                   // 0x0839   (0x0001)  
	unsigned char                                      UnknownData11_5[0x2];                                       // 0x083A   (0x0002)  MISSED
	int32_t                                            ReplicationAbandonClusterLevel;                             // 0x083C   (0x0004)  
	int32_t                                            ReplicationAbandonAfterLevel;                               // 0x0840   (0x0004)  
	unsigned char                                      UnknownData12_5[0x4];                                       // 0x0844   (0x0004)  MISSED
	FGeometryCollectionRepData                         RepData;                                                    // 0x0848   (0x0028)  
	unsigned char                                      UnknownData13_5[0x290];                                     // 0x0870   (0x0290)  MISSED
	UBodySetup*                                        DummyBodySetup;                                             // 0x0B00   (0x0008)  
	unsigned char                                      UnknownData14_5[0x8];                                       // 0x0B08   (0x0008)  MISSED
	TArray<UInstancedStaticMeshComponent*>             EmbeddedGeometryComponents;                                 // 0x0B10   (0x0010)  
	unsigned char                                      UnknownData15_6[0x20];                                      // 0x0B20   (0x0020)  MISSED


	/// Functions
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetRestCollection
	void SetRestCollection(UGeometryCollection* RestCollectionIn);                                                           // [0x37589d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyRemovals
	void SetNotifyRemovals(bool bNewNotifyRemovals);                                                                         // [0x3758770] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyCrumblings
	void SetNotifyCrumblings(bool bNewNotifyCrumblings, bool bNewCrumblingEventIncludesChildren);                            // [0x37585f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyBreaks
	void SetNotifyBreaks(bool bNewNotifyBreaks);                                                                             // [0x37584e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetEnableDamageFromCollision
	void SetEnableDamageFromCollision(bool bValue);                                                                          // [0x3758440] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetAnchoredByTransformedBox
	void SetAnchoredByTransformedBox(FBox Box, FTransform Transform, bool bAnchored, int32_t MaxLevel);                      // [0x3757f50] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetAnchoredByIndex
	void SetAnchoredByIndex(int32_t Index, bool bAnchored);                                                                  // [0x3757e70] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetAnchoredByBox
	void SetAnchoredByBox(FBox WorldSpaceBox, bool bAnchored, int32_t MaxLevel);                                             // [0x3757cd0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.RemoveAllAnchors
	void RemoveAllAnchors();                                                                                                 // [0x3757bf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.ReceivePhysicsCollision
	void ReceivePhysicsCollision(FChaosPhysicsCollisionInfo& CollisionInfo);                                                 // [0x2407bf0] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsStateChange__DelegateSignature
	void NotifyGeometryCollectionPhysicsStateChange__DelegateSignature(UGeometryCollectionComponent* FracturedComponent);    // [0x2407bf0] MulticastDelegate|Public|Delegate 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature
	void NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature(UGeometryCollectionComponent* FracturedComponent); // [0x2407bf0] MulticastDelegate|Public|Delegate 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.GetRootIndex
	int32_t GetRootIndex();                                                                                                  // [0x37578e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.GetMassAndExtents
	void GetMassAndExtents(int32_t ItemIndex, float& OutMass, FBox& OutExtents);                                             // [0x37577a0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.GetLocalBounds
	FBox GetLocalBounds();                                                                                                   // [0x3757750] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.GetInitialLevel
	int32_t GetInitialLevel(int32_t ItemIndex);                                                                              // [0x37576b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.GetDebugInfo
	FString GetDebugInfo();                                                                                                  // [0x3757630] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.CrumbleCluster
	void CrumbleCluster(int32_t ItemIndex);                                                                                  // [0x3757560] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.CrumbleActiveClusters
	void CrumbleActiveClusters();                                                                                            // [0x3757530] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.ApplyPhysicsField
	void ApplyPhysicsField(bool Enabled, EGeometryCollectionPhysicsTypeEnum Target, UFieldSystemMetaData* Metadata, UFieldNodeBase* Field); // [0x37570b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.ApplyLinearVelocity
	void ApplyLinearVelocity(int32_t ItemIndex, FVector& LinearVelocity);                                                    // [0x3756fc0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.ApplyKinematicField
	void ApplyKinematicField(float Radius, FVector Position);                                                                // [0x3756e20] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.ApplyInternalStrain
	void ApplyInternalStrain(int32_t ItemIndex, FVector& Location, float Radius, int32_t PropagationDepth, float PropagationFactor, float Strain); // [0x3756c30] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.ApplyExternalStrain
	void ApplyExternalStrain(int32_t ItemIndex, FVector& Location, float Radius, int32_t PropagationDepth, float PropagationFactor, float Strain); // [0x3756a40] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.ApplyBreakingLinearVelocity
	void ApplyBreakingLinearVelocity(int32_t ItemIndex, FVector& LinearVelocity);                                            // [0x3756950] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.ApplyBreakingAngularVelocity
	void ApplyBreakingAngularVelocity(int32_t ItemIndex, FVector& AngularVelocity);                                          // [0x3756950] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.ApplyAngularVelocity
	void ApplyAngularVelocity(int32_t ItemIndex, FVector& AngularVelocity);                                                  // [0x3756860] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/GeometryCollectionEngine.GeometryCollectionDebugDrawActor
/// Size: 0x00C0 (0x000290 - 0x000350)
class AGeometryCollectionDebugDrawActor : public AActor : AActor
{ 
public:
	FGeometryCollectionDebugDrawWarningMessage         WarningMessage;                                             // 0x0290   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0291   (0x0007)  MISSED
	FGeometryCollectionDebugDrawActorSelectedRigidBody SelectedRigidBody;                                          // 0x0298   (0x0018)  
	bool                                               bDebugDrawWholeCollection;                                  // 0x02B0   (0x0001)  
	bool                                               bDebugDrawHierarchy;                                        // 0x02B1   (0x0001)  
	bool                                               bDebugDrawClustering;                                       // 0x02B2   (0x0001)  
	EGeometryCollectionDebugDrawActorHideGeometry      HideGeometry;                                               // 0x02B3   (0x0001)  
	bool                                               bShowRigidBodyId;                                           // 0x02B4   (0x0001)  
	bool                                               bShowRigidBodyCollision;                                    // 0x02B5   (0x0001)  
	bool                                               bCollisionAtOrigin;                                         // 0x02B6   (0x0001)  
	bool                                               bShowRigidBodyTransform;                                    // 0x02B7   (0x0001)  
	bool                                               bShowRigidBodyInertia;                                      // 0x02B8   (0x0001)  
	bool                                               bShowRigidBodyVelocity;                                     // 0x02B9   (0x0001)  
	bool                                               bShowRigidBodyForce;                                        // 0x02BA   (0x0001)  
	bool                                               bShowRigidBodyInfos;                                        // 0x02BB   (0x0001)  
	bool                                               bShowTransformIndex;                                        // 0x02BC   (0x0001)  
	bool                                               bShowTransform;                                             // 0x02BD   (0x0001)  
	bool                                               bShowParent;                                                // 0x02BE   (0x0001)  
	bool                                               bShowLevel;                                                 // 0x02BF   (0x0001)  
	bool                                               bShowConnectivityEdges;                                     // 0x02C0   (0x0001)  
	bool                                               bShowGeometryIndex;                                         // 0x02C1   (0x0001)  
	bool                                               bShowGeometryTransform;                                     // 0x02C2   (0x0001)  
	bool                                               bShowBoundingBox;                                           // 0x02C3   (0x0001)  
	bool                                               bShowFaces;                                                 // 0x02C4   (0x0001)  
	bool                                               bShowFaceIndices;                                           // 0x02C5   (0x0001)  
	bool                                               bShowFaceNormals;                                           // 0x02C6   (0x0001)  
	bool                                               bShowSingleFace;                                            // 0x02C7   (0x0001)  
	int32_t                                            SingleFaceIndex;                                            // 0x02C8   (0x0004)  
	bool                                               bShowVertices;                                              // 0x02CC   (0x0001)  
	bool                                               bShowVertexIndices;                                         // 0x02CD   (0x0001)  
	bool                                               bShowVertexNormals;                                         // 0x02CE   (0x0001)  
	bool                                               bUseActiveVisualization;                                    // 0x02CF   (0x0001)  
	float                                              PointThickness;                                             // 0x02D0   (0x0004)  
	float                                              LineThickness;                                              // 0x02D4   (0x0004)  
	bool                                               bTextShadow;                                                // 0x02D8   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x02D9   (0x0003)  MISSED
	float                                              TextScale;                                                  // 0x02DC   (0x0004)  
	float                                              NormalScale;                                                // 0x02E0   (0x0004)  
	float                                              AxisScale;                                                  // 0x02E4   (0x0004)  
	float                                              ArrowScale;                                                 // 0x02E8   (0x0004)  
	FColor                                             RigidBodyIdColor;                                           // 0x02EC   (0x0004)  
	float                                              RigidBodyTransformScale;                                    // 0x02F0   (0x0004)  
	FColor                                             RigidBodyCollisionColor;                                    // 0x02F4   (0x0004)  
	FColor                                             RigidBodyInertiaColor;                                      // 0x02F8   (0x0004)  
	FColor                                             RigidBodyVelocityColor;                                     // 0x02FC   (0x0004)  
	FColor                                             RigidBodyForceColor;                                        // 0x0300   (0x0004)  
	FColor                                             RigidBodyInfoColor;                                         // 0x0304   (0x0004)  
	FColor                                             TransformIndexColor;                                        // 0x0308   (0x0004)  
	float                                              TransformScale;                                             // 0x030C   (0x0004)  
	FColor                                             LevelColor;                                                 // 0x0310   (0x0004)  
	FColor                                             ParentColor;                                                // 0x0314   (0x0004)  
	float                                              ConnectivityEdgeThickness;                                  // 0x0318   (0x0004)  
	FColor                                             GeometryIndexColor;                                         // 0x031C   (0x0004)  
	float                                              GeometryTransformScale;                                     // 0x0320   (0x0004)  
	FColor                                             BoundingBoxColor;                                           // 0x0324   (0x0004)  
	FColor                                             FaceColor;                                                  // 0x0328   (0x0004)  
	FColor                                             FaceIndexColor;                                             // 0x032C   (0x0004)  
	FColor                                             FaceNormalColor;                                            // 0x0330   (0x0004)  
	FColor                                             SingleFaceColor;                                            // 0x0334   (0x0004)  
	FColor                                             VertexColor;                                                // 0x0338   (0x0004)  
	FColor                                             VertexIndexColor;                                           // 0x033C   (0x0004)  
	FColor                                             VertexNormalColor;                                          // 0x0340   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0344   (0x0004)  MISSED
	UBillboardComponent*                               SpriteComponent;                                            // 0x0348   (0x0008)  
};

/// Class /Script/GeometryCollectionEngine.GeometryCollectionDebugDrawComponent
/// Size: 0x0018 (0x0000A0 - 0x0000B8)
class UGeometryCollectionDebugDrawComponent : public UActorComponent : UActorComponent
{ 
public:
	AGeometryCollectionDebugDrawActor*                 GeometryCollectionDebugDrawActor;                           // 0x00A0   (0x0008)  
	AGeometryCollectionRenderLevelSetActor*            GeometryCollectionRenderLevelSetActor;                      // 0x00A8   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x00B0   (0x0008)  MISSED
};

/// Class /Script/GeometryCollectionEngine.GeometryCollectionISMPoolActor
/// Size: 0x0008 (0x000290 - 0x000298)
class AGeometryCollectionISMPoolActor : public AActor : AActor
{ 
public:
	UGeometryCollectionISMPoolComponent*               ISMPoolComp;                                                // 0x0290   (0x0008)  
};

/// Class /Script/GeometryCollectionEngine.GeometryCollectionISMPoolComponent
/// Size: 0x00C0 (0x0002A0 - 0x000360)
class UGeometryCollectionISMPoolComponent : public USceneComponent : USceneComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0xC0];                                      // 0x02A0   (0x00C0)  MISSED
};

/// Class /Script/GeometryCollectionEngine.GeometryCollection
/// Size: 0x0148 (0x000028 - 0x000170)
class UGeometryCollection : public UObject : UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0028   (0x0008)  MISSED
	bool                                               EnableClustering;                                           // 0x0030   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0031   (0x0003)  MISSED
	int32_t                                            ClusterGroupIndex;                                          // 0x0034   (0x0004)  
	int32_t                                            MaxClusterLevel;                                            // 0x0038   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x003C   (0x0004)  MISSED
	TArray<float>                                      DamageThreshold;                                            // 0x0040   (0x0010)  
	bool                                               bUseSizeSpecificDamageThreshold;                            // 0x0050   (0x0001)  
	bool                                               PerClusterOnlyDamageThreshold;                              // 0x0051   (0x0001)  
	unsigned char                                      UnknownData03_5[0x2];                                       // 0x0052   (0x0002)  MISSED
	FGeometryCollectionDamagePropagationData           DamagePropagationData;                                      // 0x0054   (0x000C)  
	EClusterConnectionTypeEnum                         ClusterConnectionType;                                      // 0x0060   (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x0061   (0x0003)  MISSED
	float                                              ConnectionGraphBoundsFilteringMargin;                       // 0x0064   (0x0004)  
	TArray<UMaterialInterface*>                        Materials;                                                  // 0x0068   (0x0010)  
	TArray<FGeometryCollectionEmbeddedExemplar>        EmbeddedGeometryExemplar;                                   // 0x0078   (0x0010)  
	bool                                               bUseFullPrecisionUVs;                                       // 0x0088   (0x0001)  
	unsigned char                                      UnknownData05_5[0x7];                                       // 0x0089   (0x0007)  MISSED
	TArray<FGeometryCollectionAutoInstanceMesh>        AutoInstanceMeshes;                                         // 0x0090   (0x0010)  
	FSoftObjectPath                                    RootProxy;                                                  // 0x00A0   (0x0020)  
	bool                                               bStripOnCook;                                               // 0x00C0   (0x0001)  
	bool                                               EnableNanite;                                               // 0x00C1   (0x0001)  
	bool                                               bMassAsDensity;                                             // 0x00C2   (0x0001)  
	unsigned char                                      UnknownData06_5[0x1];                                       // 0x00C3   (0x0001)  MISSED
	float                                              Mass;                                                       // 0x00C4   (0x0004)  
	float                                              MinimumMassClamp;                                           // 0x00C8   (0x0004)  
	bool                                               bImportCollisionFromSource;                                 // 0x00CC   (0x0001)  
	bool                                               bRemoveOnMaxSleep;                                          // 0x00CD   (0x0001)  
	unsigned char                                      UnknownData07_5[0x2];                                       // 0x00CE   (0x0002)  MISSED
	FVector2D                                          MaximumSleepTime;                                           // 0x00D0   (0x0010)  
	FVector2D                                          RemovalDuration;                                            // 0x00E0   (0x0010)  
	bool                                               bSlowMovingAsSleeping;                                      // 0x00F0   (0x0001)  
	unsigned char                                      UnknownData08_5[0x3];                                       // 0x00F1   (0x0003)  MISSED
	float                                              SlowMovingVelocityThreshold;                                // 0x00F4   (0x0004)  
	TArray<FGeometryCollectionSizeSpecificData>        SizeSpecificData;                                           // 0x00F8   (0x0010)  
	bool                                               EnableRemovePiecesOnFracture;                               // 0x0108   (0x0001)  
	unsigned char                                      UnknownData09_5[0x7];                                       // 0x0109   (0x0007)  MISSED
	TArray<UMaterialInterface*>                        RemoveOnFractureMaterials;                                  // 0x0110   (0x0010)  
	UDataflow*                                         DataflowAsset;                                              // 0x0120   (0x0008)  
	FString                                            DataflowTerminal;                                           // 0x0128   (0x0010)  
	FGuid                                              PersistentGuid;                                             // 0x0138   (0x0010)  
	FGuid                                              StateGuid;                                                  // 0x0148   (0x0010)  
	int32_t                                            BoneSelectedMaterialIndex;                                  // 0x0158   (0x0004)  
	unsigned char                                      UnknownData10_6[0x14];                                      // 0x015C   (0x0014)  MISSED
};

/// Class /Script/GeometryCollectionEngine.GeometryCollectionRenderLevelSetActor
/// Size: 0x00F0 (0x000290 - 0x000380)
class AGeometryCollectionRenderLevelSetActor : public AActor : AActor
{ 
public:
	UVolumeTexture*                                    TargetVolumeTexture;                                        // 0x0290   (0x0008)  
	UMaterial*                                         RayMarchMaterial;                                           // 0x0298   (0x0008)  
	float                                              SurfaceTolerance;                                           // 0x02A0   (0x0004)  
	float                                              Isovalue;                                                   // 0x02A4   (0x0004)  
	bool                                               Enabled;                                                    // 0x02A8   (0x0001)  
	bool                                               RenderVolumeBoundingBox;                                    // 0x02A9   (0x0001)  
	unsigned char                                      UnknownData00_6[0xD6];                                      // 0x02AA   (0x00D6)  MISSED
};

/// Enum /Script/GeometryCollectionEngine.ECollectionAttributeEnum
/// Size: 0x04
enum ECollectionAttributeEnum : uint8_t
{
	ECollectionAttributeEnum__Chaos_Active0                                          = 0,
	ECollectionAttributeEnum__Chaos_DynamicState1                                    = 1,
	ECollectionAttributeEnum__Chaos_CollisionGroup2                                  = 2,
	ECollectionAttributeEnum__Chaos_Max3                                             = 3
};

/// Enum /Script/GeometryCollectionEngine.ECollectionGroupEnum
/// Size: 0x02
enum ECollectionGroupEnum : uint8_t
{
	ECollectionGroupEnum__Chaos_Traansform0                                          = 0,
	ECollectionGroupEnum__Chaos_Max1                                                 = 1
};

/// Enum /Script/GeometryCollectionEngine.EChaosBreakingSortMethod
/// Size: 0x06
enum EChaosBreakingSortMethod : uint8_t
{
	EChaosBreakingSortMethod__SortNone0                                              = 0,
	EChaosBreakingSortMethod__SortByHighestMass1                                     = 1,
	EChaosBreakingSortMethod__SortByHighestSpeed2                                    = 2,
	EChaosBreakingSortMethod__SortByNearestFirst3                                    = 3,
	EChaosBreakingSortMethod__Count4                                                 = 4,
	EChaosBreakingSortMethod__EChaosBreakingSortMethod_MAX5                          = 5
};

/// Enum /Script/GeometryCollectionEngine.EChaosCollisionSortMethod
/// Size: 0x07
enum EChaosCollisionSortMethod : uint8_t
{
	EChaosCollisionSortMethod__SortNone0                                             = 0,
	EChaosCollisionSortMethod__SortByHighestMass1                                    = 1,
	EChaosCollisionSortMethod__SortByHighestSpeed2                                   = 2,
	EChaosCollisionSortMethod__SortByHighestImpulse3                                 = 3,
	EChaosCollisionSortMethod__SortByNearestFirst4                                   = 4,
	EChaosCollisionSortMethod__Count5                                                = 5,
	EChaosCollisionSortMethod__EChaosCollisionSortMethod_MAX6                        = 6
};

/// Enum /Script/GeometryCollectionEngine.EChaosRemovalSortMethod
/// Size: 0x05
enum EChaosRemovalSortMethod : uint8_t
{
	EChaosRemovalSortMethod__SortNone0                                               = 0,
	EChaosRemovalSortMethod__SortByHighestMass1                                      = 1,
	EChaosRemovalSortMethod__SortByNearestFirst2                                     = 2,
	EChaosRemovalSortMethod__Count3                                                  = 3,
	EChaosRemovalSortMethod__EChaosRemovalSortMethod_MAX4                            = 4
};

/// Enum /Script/GeometryCollectionEngine.EChaosTrailingSortMethod
/// Size: 0x06
enum EChaosTrailingSortMethod : uint8_t
{
	EChaosTrailingSortMethod__SortNone0                                              = 0,
	EChaosTrailingSortMethod__SortByHighestMass1                                     = 1,
	EChaosTrailingSortMethod__SortByHighestSpeed2                                    = 2,
	EChaosTrailingSortMethod__SortByNearestFirst3                                    = 3,
	EChaosTrailingSortMethod__Count4                                                 = 4,
	EChaosTrailingSortMethod__EChaosTrailingSortMethod_MAX5                          = 5
};

/// Enum /Script/GeometryCollectionEngine.EGeometryCollectionDebugDrawActorHideGeometry
/// Size: 0x06
enum EGeometryCollectionDebugDrawActorHideGeometry : uint8_t
{
	EGeometryCollectionDebugDrawActorHideGeometry__HideNone0                         = 0,
	EGeometryCollectionDebugDrawActorHideGeometry__HideWithCollision1                = 1,
	EGeometryCollectionDebugDrawActorHideGeometry__HideSelected2                     = 2,
	EGeometryCollectionDebugDrawActorHideGeometry__HideWholeCollection3              = 3,
	EGeometryCollectionDebugDrawActorHideGeometry__HideAll4                          = 4,
	EGeometryCollectionDebugDrawActorHideGeometry__EGeometryCollectionDebugDrawActorHideGeometry_MAX5 = 5
};

