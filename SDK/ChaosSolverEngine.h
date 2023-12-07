
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package ChaosSolverEngine.

/// Struct /Script/ChaosSolverEngine.ChaosPhysicsCollisionInfo
/// Size: 0x00C0 (0x000000 - 0x0000C0)
struct FChaosPhysicsCollisionInfo
{ 
	UPrimitiveComponent*                               Component;                                                  // 0x0000   (0x0008)  
	UPrimitiveComponent*                               OtherComponent;                                             // 0x0008   (0x0008)  
	FVector                                            Location;                                                   // 0x0010   (0x0018)  
	FVector                                            Normal;                                                     // 0x0028   (0x0018)  
	FVector                                            AccumulatedImpulse;                                         // 0x0040   (0x0018)  
	FVector                                            Velocity;                                                   // 0x0058   (0x0018)  
	FVector                                            OtherVelocity;                                              // 0x0070   (0x0018)  
	FVector                                            AngularVelocity;                                            // 0x0088   (0x0018)  
	FVector                                            OtherAngularVelocity;                                       // 0x00A0   (0x0018)  
	float                                              Mass;                                                       // 0x00B8   (0x0004)  
	float                                              OtherMass;                                                  // 0x00BC   (0x0004)  
};

/// Struct /Script/ChaosSolverEngine.ChaosBreakEvent
/// Size: 0x0078 (0x000000 - 0x000078)
struct FChaosBreakEvent
{ 
	UPrimitiveComponent*                               Component;                                                  // 0x0000   (0x0008)  
	FVector                                            Location;                                                   // 0x0008   (0x0018)  
	FVector                                            Velocity;                                                   // 0x0020   (0x0018)  
	FVector                                            AngularVelocity;                                            // 0x0038   (0x0018)  
	FVector                                            Extents;                                                    // 0x0050   (0x0018)  
	float                                              Mass;                                                       // 0x0068   (0x0004)  
	int32_t                                            Index;                                                      // 0x006C   (0x0004)  
	bool                                               bFromCrumble;                                               // 0x0070   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0071   (0x0007)  MISSED
};

/// Struct /Script/ChaosSolverEngine.ChaosCrumblingEvent
/// Size: 0x00C0 (0x000000 - 0x0000C0)
struct FChaosCrumblingEvent
{ 
	UPrimitiveComponent*                               Component;                                                  // 0x0000   (0x0008)  
	FVector                                            Location;                                                   // 0x0008   (0x0018)  
	FQuat                                              Orientation;                                                // 0x0020   (0x0020)  
	FVector                                            LinearVelocity;                                             // 0x0040   (0x0018)  
	FVector                                            AngularVelocity;                                            // 0x0058   (0x0018)  
	float                                              Mass;                                                       // 0x0070   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0074   (0x0004)  MISSED
	FBox                                               LocalBounds;                                                // 0x0078   (0x0038)  
	TArray<int32_t>                                    Children;                                                   // 0x00B0   (0x0010)  
};

/// Struct /Script/ChaosSolverEngine.ChaosRemovalEvent
/// Size: 0x0028 (0x000000 - 0x000028)
struct FChaosRemovalEvent
{ 
	UPrimitiveComponent*                               Component;                                                  // 0x0000   (0x0008)  
	FVector                                            Location;                                                   // 0x0008   (0x0018)  
	float                                              Mass;                                                       // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/ChaosSolverEngine.BreakEventCallbackWrapper
/// Size: 0x0040 (0x000000 - 0x000040)
struct FBreakEventCallbackWrapper
{ 
	unsigned char                                      UnknownData00_1[0x40];                                      // 0x0000   (0x0040)  MISSED
};

/// Struct /Script/ChaosSolverEngine.RemovalEventCallbackWrapper
/// Size: 0x0040 (0x000000 - 0x000040)
struct FRemovalEventCallbackWrapper
{ 
	unsigned char                                      UnknownData00_1[0x40];                                      // 0x0000   (0x0040)  MISSED
};

/// Struct /Script/ChaosSolverEngine.CrumblingEventCallbackWrapper
/// Size: 0x0040 (0x000000 - 0x000040)
struct FCrumblingEventCallbackWrapper
{ 
	unsigned char                                      UnknownData00_1[0x40];                                      // 0x0000   (0x0040)  MISSED
};

/// Struct /Script/ChaosSolverEngine.ChaosHandlerSet
/// Size: 0x0058 (0x000000 - 0x000058)
struct FChaosHandlerSet
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
	TSet<UObject*>                                     ChaosHandlers;                                              // 0x0008   (0x0050)  
};

/// Struct /Script/ChaosSolverEngine.ChaosDebugSubstepControl
/// Size: 0x0003 (0x000000 - 0x000003)
struct FChaosDebugSubstepControl
{ 
	bool                                               bPause;                                                     // 0x0000   (0x0001)  
	bool                                               bSubstep;                                                   // 0x0001   (0x0001)  
	bool                                               bStep;                                                      // 0x0002   (0x0001)  
};

/// Class /Script/ChaosSolverEngine.ChaosDebugDrawComponent
/// Size: 0x0008 (0x0000A0 - 0x0000A8)
class UChaosDebugDrawComponent : public UActorComponent : UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00A0   (0x0008)  MISSED
};

/// Class /Script/ChaosSolverEngine.ChaosEventListenerComponent
/// Size: 0x0008 (0x0000A0 - 0x0000A8)
class UChaosEventListenerComponent : public UActorComponent : UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00A0   (0x0008)  MISSED
};

/// Class /Script/ChaosSolverEngine.ChaosGameplayEventDispatcher
/// Size: 0x0260 (0x0000A8 - 0x000308)
class UChaosGameplayEventDispatcher : public UChaosEventListenerComponent : UChaosEventListenerComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x110];                                     // 0x00A8   (0x0110)  MISSED
	TMap<UPrimitiveComponent*, FChaosHandlerSet>       CollisionEventRegistrations;                                // 0x01B8   (0x0050)  
	TMap<UPrimitiveComponent*, FBreakEventCallbackWrapper> BreakEventRegistrations;                                // 0x0208   (0x0050)  
	TMap<UPrimitiveComponent*, FRemovalEventCallbackWrapper> RemovalEventRegistrations;                            // 0x0258   (0x0050)  
	TMap<UPrimitiveComponent*, FCrumblingEventCallbackWrapper> CrumblingEventRegistrations;                        // 0x02A8   (0x0050)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x02F8   (0x0010)  MISSED
};

/// Class /Script/ChaosSolverEngine.ChaosNotifyHandlerInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UChaosNotifyHandlerInterface : public UInterface : UInterface
{ 
public:
};

/// Class /Script/ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UChaosSolverEngineBlueprintLibrary : public UBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/ChaosSolverEngine.ChaosSolver
/// Size: 0x0000 (0x000028 - 0x000028)
class UChaosSolver : public UObject : UObject
{ 
public:
};

/// Class /Script/ChaosSolverEngine.ChaosSolverActor
/// Size: 0x00F8 (0x000290 - 0x000388)
class AChaosSolverActor : public AActor : AActor
{ 
public:
	FChaosSolverConfiguration                          Properties;                                                 // 0x0290   (0x0068)  
	float                                              TimeStepMultiplier;                                         // 0x02F8   (0x0004)  
	int32_t                                            CollisionIterations;                                        // 0x02FC   (0x0004)  
	int32_t                                            PushOutIterations;                                          // 0x0300   (0x0004)  
	int32_t                                            PushOutPairIterations;                                      // 0x0304   (0x0004)  
	float                                              ClusterConnectionFactor;                                    // 0x0308   (0x0004)  
	EClusterConnectionTypeEnum                         ClusterUnionConnectionType;                                 // 0x030C   (0x0001)  
	bool                                               DoGenerateCollisionData;                                    // 0x030D   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x030E   (0x0002)  MISSED
	FSolverCollisionFilterSettings                     CollisionFilterSettings;                                    // 0x0310   (0x0010)  
	bool                                               DoGenerateBreakingData;                                     // 0x0320   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0321   (0x0003)  MISSED
	FSolverBreakingFilterSettings                      BreakingFilterSettings;                                     // 0x0324   (0x0010)  
	bool                                               DoGenerateTrailingData;                                     // 0x0334   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0335   (0x0003)  MISSED
	FSolverTrailingFilterSettings                      TrailingFilterSettings;                                     // 0x0338   (0x0010)  
	float                                              MassScale;                                                  // 0x0348   (0x0004)  
	bool                                               bHasFloor;                                                  // 0x034C   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x034D   (0x0003)  MISSED
	float                                              FloorHeight;                                                // 0x0350   (0x0004)  
	FChaosDebugSubstepControl                          ChaosDebugSubstepControl;                                   // 0x0354   (0x0003)  
	unsigned char                                      UnknownData04_5[0x1];                                       // 0x0357   (0x0001)  MISSED
	UBillboardComponent*                               SpriteComponent;                                            // 0x0358   (0x0008)  
	unsigned char                                      UnknownData05_5[0x18];                                      // 0x0360   (0x0018)  MISSED
	UChaosGameplayEventDispatcher*                     GameplayEventDispatcherComponent;                           // 0x0378   (0x0008)  
	unsigned char                                      UnknownData06_6[0x8];                                       // 0x0380   (0x0008)  MISSED


	/// Functions
	// Function /Script/ChaosSolverEngine.ChaosSolverActor.SetSolverActive
	void SetSolverActive(bool bActive);                                                                                      // [0xa6b640] Native|Public|BlueprintCallable 
	// Function /Script/ChaosSolverEngine.ChaosSolverActor.SetAsCurrentWorldSolver
	void SetAsCurrentWorldSolver();                                                                                          // [0x3705f00] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/ChaosSolverEngine.ChaosSolverSettings
/// Size: 0x0028 (0x000038 - 0x000060)
class UChaosSolverSettings : public UDeveloperSettings : UDeveloperSettings
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0038   (0x0008)  MISSED
	FSoftClassPath                                     DefaultChaosSolverActorClass;                               // 0x0040   (0x0020)  
};

/// Enum /Script/ChaosSolverEngine.EClusterConnectionTypeEnum
/// Size: 0x08
enum EClusterConnectionTypeEnum : uint8_t
{
	EClusterConnectionTypeEnum__Chaos_PointImplicit0                                 = 0,
	EClusterConnectionTypeEnum__Chaos_DelaunayTriangulation1                         = 1,
	EClusterConnectionTypeEnum__Chaos_MinimalSpanningSubsetDelaunayTriangulation2    = 2,
	EClusterConnectionTypeEnum__Chaos_PointImplicitAugmentedWithMinimalDelaunay3     = 3,
	EClusterConnectionTypeEnum__Chaos_BoundsOverlapFilteredDelaunayTriangulation4    = 4,
	EClusterConnectionTypeEnum__Chaos_None5                                          = 5,
	EClusterConnectionTypeEnum__Chaos_EClsuterCreationParameters_Max6                = 6,
	EClusterConnectionTypeEnum__Chaos_MAX7                                           = 7
};

