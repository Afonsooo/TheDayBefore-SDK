
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package PhysicsCore.

/// Struct /Script/PhysicsCore.BodyInstanceCore
/// Size: 0x0018 (0x000000 - 0x000018)
struct FBodyInstanceCore
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
	bool                                               bSimulatePhysics : 1;                                       // 0x0010:0 (0x0001)  
	bool                                               bOverrideMass : 1;                                          // 0x0010:1 (0x0001)  
	bool                                               bEnableGravity : 1;                                         // 0x0010:2 (0x0001)  
	bool                                               bAutoWeld : 1;                                              // 0x0010:3 (0x0001)  
	bool                                               bStartAwake : 1;                                            // 0x0010:4 (0x0001)  
	bool                                               bGenerateWakeEvents : 1;                                    // 0x0010:5 (0x0001)  
	bool                                               bUpdateMassWhenScaleChanges : 1;                            // 0x0010:6 (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Class /Script/PhysicsCore.PhysicalMaterial
/// Size: 0x0058 (0x000028 - 0x000080)
class UPhysicalMaterial : public UObject : UObject
{ 
public:
	float                                              Friction;                                                   // 0x0028   (0x0004)  
	float                                              StaticFriction;                                             // 0x002C   (0x0004)  
	TEnumAsByte<EFrictionCombineMode>                  FrictionCombineMode;                                        // 0x0030   (0x0001)  
	bool                                               bOverrideFrictionCombineMode;                               // 0x0031   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0032   (0x0002)  MISSED
	float                                              Restitution;                                                // 0x0034   (0x0004)  
	TEnumAsByte<EFrictionCombineMode>                  RestitutionCombineMode;                                     // 0x0038   (0x0001)  
	bool                                               bOverrideRestitutionCombineMode;                            // 0x0039   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x003A   (0x0002)  MISSED
	float                                              Density;                                                    // 0x003C   (0x0004)  
	float                                              SleepLinearVelocityThreshold;                               // 0x0040   (0x0004)  
	float                                              SleepAngularVelocityThreshold;                              // 0x0044   (0x0004)  
	int32_t                                            SleepCounterThreshold;                                      // 0x0048   (0x0004)  
	float                                              RaiseMassToPower;                                           // 0x004C   (0x0004)  
	float                                              DestructibleDamageThresholdScale;                           // 0x0050   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0054   (0x0004)  MISSED
	UPhysicalMaterialPropertyBase*                     PhysicalMaterialProperty;                                   // 0x0058   (0x0008)  
	TEnumAsByte<EPhysicalSurface>                      SurfaceType;                                                // 0x0060   (0x0001)  
	unsigned char                                      UnknownData03_6[0x1F];                                      // 0x0061   (0x001F)  MISSED
};

/// Class /Script/PhysicsCore.PhysicalMaterialPropertyBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UPhysicalMaterialPropertyBase : public UObject : UObject
{ 
public:
};

/// Class /Script/PhysicsCore.BodySetupCore
/// Size: 0x0010 (0x000028 - 0x000038)
class UBodySetupCore : public UObject : UObject
{ 
public:
	FName                                              BoneName;                                                   // 0x0028   (0x0008)  
	TEnumAsByte<EPhysicsType>                          PhysicsType;                                                // 0x0030   (0x0001)  
	TEnumAsByte<ECollisionTraceFlag>                   CollisionTraceFlag;                                         // 0x0031   (0x0001)  
	TEnumAsByte<EBodyCollisionResponse>                CollisionReponse;                                           // 0x0032   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x0033   (0x0005)  MISSED
};

/// Class /Script/PhysicsCore.ChaosPhysicalMaterial
/// Size: 0x0020 (0x000028 - 0x000048)
class UChaosPhysicalMaterial : public UObject : UObject
{ 
public:
	float                                              Friction;                                                   // 0x0028   (0x0004)  
	float                                              StaticFriction;                                             // 0x002C   (0x0004)  
	float                                              Restitution;                                                // 0x0030   (0x0004)  
	float                                              LinearEtherDrag;                                            // 0x0034   (0x0004)  
	float                                              AngularEtherDrag;                                           // 0x0038   (0x0004)  
	float                                              SleepingLinearVelocityThreshold;                            // 0x003C   (0x0004)  
	float                                              SleepingAngularVelocityThreshold;                           // 0x0040   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0044   (0x0004)  MISSED
};

/// Class /Script/PhysicsCore.PhysicsSettingsCore
/// Size: 0x00A8 (0x000038 - 0x0000E0)
class UPhysicsSettingsCore : public UDeveloperSettings : UDeveloperSettings
{ 
public:
	float                                              DefaultGravityZ;                                            // 0x0038   (0x0004)  
	float                                              DefaultTerminalVelocity;                                    // 0x003C   (0x0004)  
	float                                              DefaultFluidFriction;                                       // 0x0040   (0x0004)  
	int32_t                                            SimulateScratchMemorySize;                                  // 0x0044   (0x0004)  
	int32_t                                            RagdollAggregateThreshold;                                  // 0x0048   (0x0004)  
	float                                              TriangleMeshTriangleMinAreaThreshold;                       // 0x004C   (0x0004)  
	bool                                               bEnableEnhancedDeterminism;                                 // 0x0050   (0x0001)  
	bool                                               bEnableShapeSharing;                                        // 0x0051   (0x0001)  
	bool                                               bEnablePCM;                                                 // 0x0052   (0x0001)  
	bool                                               bEnableStabilization;                                       // 0x0053   (0x0001)  
	bool                                               bWarnMissingLocks;                                          // 0x0054   (0x0001)  
	bool                                               bEnable2DPhysics;                                           // 0x0055   (0x0001)  
	bool                                               bDefaultHasComplexCollision;                                // 0x0056   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0057   (0x0001)  MISSED
	float                                              BounceThresholdVelocity;                                    // 0x0058   (0x0004)  
	TEnumAsByte<EFrictionCombineMode>                  FrictionCombineMode;                                        // 0x005C   (0x0001)  
	TEnumAsByte<EFrictionCombineMode>                  RestitutionCombineMode;                                     // 0x005D   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x005E   (0x0002)  MISSED
	float                                              MaxAngularVelocity;                                         // 0x0060   (0x0004)  
	float                                              MaxDepenetrationVelocity;                                   // 0x0064   (0x0004)  
	float                                              ContactOffsetMultiplier;                                    // 0x0068   (0x0004)  
	float                                              MinContactOffset;                                           // 0x006C   (0x0004)  
	float                                              MaxContactOffset;                                           // 0x0070   (0x0004)  
	bool                                               bSimulateSkeletalMeshOnDedicatedServer;                     // 0x0074   (0x0001)  
	TEnumAsByte<ECollisionTraceFlag>                   DefaultShapeComplexity;                                     // 0x0075   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x0076   (0x0002)  MISSED
	FChaosSolverConfiguration                          SolverOptions;                                              // 0x0078   (0x0068)  
};

/// Enum /Script/PhysicsCore.EPhysicalSurface
/// Size: 0x65
enum EPhysicalSurface : uint8_t
{
	SurfaceType_Default0                                                             = 0,
	SurfaceType11                                                                    = 1,
	SurfaceType22                                                                    = 2,
	SurfaceType33                                                                    = 3,
	SurfaceType44                                                                    = 4,
	SurfaceType55                                                                    = 5,
	SurfaceType66                                                                    = 6,
	SurfaceType77                                                                    = 7,
	SurfaceType88                                                                    = 8,
	SurfaceType99                                                                    = 9,
	SurfaceType1010                                                                  = 10,
	SurfaceType1111                                                                  = 11,
	SurfaceType1212                                                                  = 12,
	SurfaceType1313                                                                  = 13,
	SurfaceType1414                                                                  = 14,
	SurfaceType1515                                                                  = 15,
	SurfaceType1616                                                                  = 16,
	SurfaceType1717                                                                  = 17,
	SurfaceType1818                                                                  = 18,
	SurfaceType1919                                                                  = 19,
	SurfaceType2020                                                                  = 20,
	SurfaceType2121                                                                  = 21,
	SurfaceType2222                                                                  = 22,
	SurfaceType2323                                                                  = 23,
	SurfaceType2424                                                                  = 24,
	SurfaceType2525                                                                  = 25,
	SurfaceType2626                                                                  = 26,
	SurfaceType2727                                                                  = 27,
	SurfaceType2828                                                                  = 28,
	SurfaceType2929                                                                  = 29,
	SurfaceType3030                                                                  = 30,
	SurfaceType3131                                                                  = 31,
	SurfaceType3232                                                                  = 32,
	SurfaceType3333                                                                  = 33,
	SurfaceType3434                                                                  = 34,
	SurfaceType3535                                                                  = 35,
	SurfaceType3636                                                                  = 36,
	SurfaceType3737                                                                  = 37,
	SurfaceType3838                                                                  = 38,
	SurfaceType3939                                                                  = 39,
	SurfaceType4040                                                                  = 40,
	SurfaceType4141                                                                  = 41,
	SurfaceType4242                                                                  = 42,
	SurfaceType4343                                                                  = 43,
	SurfaceType4444                                                                  = 44,
	SurfaceType4545                                                                  = 45,
	SurfaceType4646                                                                  = 46,
	SurfaceType4747                                                                  = 47,
	SurfaceType4848                                                                  = 48,
	SurfaceType4949                                                                  = 49,
	SurfaceType5050                                                                  = 50,
	SurfaceType5151                                                                  = 51,
	SurfaceType5252                                                                  = 52,
	SurfaceType5353                                                                  = 53,
	SurfaceType5454                                                                  = 54,
	SurfaceType5555                                                                  = 55,
	SurfaceType5656                                                                  = 56,
	SurfaceType5757                                                                  = 57,
	SurfaceType5858                                                                  = 58,
	SurfaceType5959                                                                  = 59,
	SurfaceType6060                                                                  = 60,
	SurfaceType6161                                                                  = 61,
	SurfaceType6262                                                                  = 62,
	SurfaceType_Max63                                                                = 63,
	EPhysicalSurface_MAX64                                                           = 64
};

/// Enum /Script/PhysicsCore.ECollisionTraceFlag
/// Size: 0x05
enum ECollisionTraceFlag : uint8_t
{
	CTF_UseDefault0                                                                  = 0,
	CTF_UseSimpleAndComplex1                                                         = 1,
	CTF_UseSimpleAsComplex2                                                          = 2,
	CTF_UseComplexAsSimple3                                                          = 3,
	CTF_MAX4                                                                         = 4
};

/// Enum /Script/PhysicsCore.EPhysicsType
/// Size: 0x04
enum EPhysicsType : uint8_t
{
	PhysType_Default0                                                                = 0,
	PhysType_Kinematic1                                                              = 1,
	PhysType_Simulated2                                                              = 2,
	PhysType_MAX3                                                                    = 3
};

/// Enum /Script/PhysicsCore.EBodyCollisionResponse
/// Size: 0x03
enum EBodyCollisionResponse : uint8_t
{
	EBodyCollisionResponse__BodyCollision_Enabled0                                   = 0,
	EBodyCollisionResponse__BodyCollision_Disabled1                                  = 1,
	EBodyCollisionResponse__BodyCollision_MAX2                                       = 2
};

/// Enum /Script/PhysicsCore.ERadialImpulseFalloff
/// Size: 0x03
enum ERadialImpulseFalloff : uint8_t
{
	RIF_Constant0                                                                    = 0,
	RIF_Linear1                                                                      = 1,
	RIF_MAX2                                                                         = 2
};

/// Enum /Script/PhysicsCore.ESleepFamily
/// Size: 0x04
enum ESleepFamily : uint8_t
{
	ESleepFamily__Normal0                                                            = 0,
	ESleepFamily__Sensitive1                                                         = 1,
	ESleepFamily__Custom2                                                            = 2,
	ESleepFamily__ESleepFamily_MAX3                                                  = 3
};

/// Enum /Script/PhysicsCore.EAngularConstraintMotion
/// Size: 0x04
enum EAngularConstraintMotion : uint8_t
{
	ACM_Free0                                                                        = 0,
	ACM_Limited1                                                                     = 1,
	ACM_Locked2                                                                      = 2,
	ACM_MAX3                                                                         = 3
};

/// Enum /Script/PhysicsCore.EConstraintFrame
/// Size: 0x03
enum EConstraintFrame : uint8_t
{
	EConstraintFrame__Frame10                                                        = 0,
	EConstraintFrame__Frame21                                                        = 1,
	EConstraintFrame__EConstraintFrame_MAX2                                          = 2
};

/// Enum /Script/PhysicsCore.EConstraintPlasticityType
/// Size: 0x04
enum EConstraintPlasticityType : uint8_t
{
	CCPT_Free0                                                                       = 0,
	CCPT_Shrink1                                                                     = 1,
	CCPT_Grow2                                                                       = 2,
	CCPT_MAX3                                                                        = 3
};

/// Enum /Script/PhysicsCore.ELinearConstraintMotion
/// Size: 0x04
enum ELinearConstraintMotion : uint8_t
{
	LCM_Free0                                                                        = 0,
	LCM_Limited1                                                                     = 1,
	LCM_Locked2                                                                      = 2,
	LCM_MAX3                                                                         = 3
};

/// Enum /Script/PhysicsCore.EFrictionCombineMode
/// Size: 0x04
enum EFrictionCombineMode : uint8_t
{
	EFrictionCombineMode__Average0                                                   = 0,
	EFrictionCombineMode__Min1                                                       = 1,
	EFrictionCombineMode__Multiply2                                                  = 2,
	EFrictionCombineMode__Max3                                                       = 3
};

