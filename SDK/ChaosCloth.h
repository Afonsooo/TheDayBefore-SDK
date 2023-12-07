
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package ChaosCloth.

/// Struct /Script/ChaosCloth.ChaosClothWeightedValue
/// Size: 0x0008 (0x000000 - 0x000008)
struct FChaosClothWeightedValue
{ 
	float                                              Low;                                                        // 0x0000   (0x0004)  
	float                                              High;                                                       // 0x0004   (0x0004)  
};

/// Class /Script/ChaosCloth.ChaosClothConfig
/// Size: 0x00F0 (0x000028 - 0x000118)
class UChaosClothConfig : public UClothConfigCommon : UClothConfigCommon
{ 
public:
	EClothMassMode                                     MassMode;                                                   // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0029   (0x0003)  MISSED
	float                                              UniformMass;                                                // 0x002C   (0x0004)  
	float                                              TotalMass;                                                  // 0x0030   (0x0004)  
	float                                              Density;                                                    // 0x0034   (0x0004)  
	float                                              MinPerParticleMass;                                         // 0x0038   (0x0004)  
	FChaosClothWeightedValue                           EdgeStiffnessWeighted;                                      // 0x003C   (0x0008)  
	FChaosClothWeightedValue                           BendingStiffnessWeighted;                                   // 0x0044   (0x0008)  
	bool                                               bUseBendingElements;                                        // 0x004C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x004D   (0x0003)  MISSED
	float                                              BucklingRatio;                                              // 0x0050   (0x0004)  
	FChaosClothWeightedValue                           BucklingStiffnessWeighted;                                  // 0x0054   (0x0008)  
	FChaosClothWeightedValue                           AreaStiffnessWeighted;                                      // 0x005C   (0x0008)  
	float                                              VolumeStiffness;                                            // 0x0064   (0x0004)  
	FChaosClothWeightedValue                           TetherStiffness;                                            // 0x0068   (0x0008)  
	FChaosClothWeightedValue                           TetherScale;                                                // 0x0070   (0x0008)  
	bool                                               bUseGeodesicDistance;                                       // 0x0078   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0079   (0x0003)  MISSED
	float                                              ShapeTargetStiffness;                                       // 0x007C   (0x0004)  
	float                                              CollisionThickness;                                         // 0x0080   (0x0004)  
	float                                              FrictionCoefficient;                                        // 0x0084   (0x0004)  
	bool                                               bUseCCD;                                                    // 0x0088   (0x0001)  
	bool                                               bUseSelfCollisions;                                         // 0x0089   (0x0001)  
	unsigned char                                      UnknownData03_5[0x2];                                       // 0x008A   (0x0002)  MISSED
	float                                              SelfCollisionThickness;                                     // 0x008C   (0x0004)  
	float                                              SelfCollisionFriction;                                      // 0x0090   (0x0004)  
	bool                                               bUseSelfIntersections;                                      // 0x0094   (0x0001)  
	bool                                               bUseLegacyBackstop;                                         // 0x0095   (0x0001)  
	unsigned char                                      UnknownData04_5[0x2];                                       // 0x0096   (0x0002)  MISSED
	float                                              DampingCoefficient;                                         // 0x0098   (0x0004)  
	float                                              LocalDampingCoefficient;                                    // 0x009C   (0x0004)  
	bool                                               bUsePointBasedWindModel;                                    // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData05_5[0x3];                                       // 0x00A1   (0x0003)  MISSED
	FChaosClothWeightedValue                           Drag;                                                       // 0x00A4   (0x0008)  
	FChaosClothWeightedValue                           Lift;                                                       // 0x00AC   (0x0008)  
	bool                                               bUseGravityOverride;                                        // 0x00B4   (0x0001)  
	unsigned char                                      UnknownData06_5[0x3];                                       // 0x00B5   (0x0003)  MISSED
	float                                              GravityScale;                                               // 0x00B8   (0x0004)  
	unsigned char                                      UnknownData07_5[0x4];                                       // 0x00BC   (0x0004)  MISSED
	FVector                                            Gravity;                                                    // 0x00C0   (0x0018)  
	FChaosClothWeightedValue                           Pressure;                                                   // 0x00D8   (0x0008)  
	FChaosClothWeightedValue                           AnimDriveStiffness;                                         // 0x00E0   (0x0008)  
	FChaosClothWeightedValue                           AnimDriveDamping;                                           // 0x00E8   (0x0008)  
	FVector                                            LinearVelocityScale;                                        // 0x00F0   (0x0018)  
	float                                              AngularVelocityScale;                                       // 0x0108   (0x0004)  
	float                                              FictitiousAngularScale;                                     // 0x010C   (0x0004)  
	bool                                               bUseTetrahedralConstraints;                                 // 0x0110   (0x0001)  
	bool                                               bUseThinShellVolumeConstraints;                             // 0x0111   (0x0001)  
	bool                                               bUseContinuousCollisionDetection;                           // 0x0112   (0x0001)  
	unsigned char                                      UnknownData08_6[0x5];                                       // 0x0113   (0x0005)  MISSED
};

/// Class /Script/ChaosCloth.ChaosClothSharedSimConfig
/// Size: 0x0010 (0x000028 - 0x000038)
class UChaosClothSharedSimConfig : public UClothSharedConfigCommon : UClothSharedConfigCommon
{ 
public:
	int32_t                                            IterationCount;                                             // 0x0028   (0x0004)  
	int32_t                                            MaxIterationCount;                                          // 0x002C   (0x0004)  
	int32_t                                            SubdivisionCount;                                           // 0x0030   (0x0004)  
	bool                                               bUseLocalSpaceSimulation;                                   // 0x0034   (0x0001)  
	bool                                               bUseXPBDConstraints;                                        // 0x0035   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0036   (0x0002)  MISSED
};

/// Class /Script/ChaosCloth.ChaosClothingSimulationFactory
/// Size: 0x0000 (0x000028 - 0x000028)
class UChaosClothingSimulationFactory : public UClothingSimulationFactory : UClothingSimulationFactory
{ 
public:
};

/// Class /Script/ChaosCloth.ChaosClothingInteractor
/// Size: 0x0010 (0x000030 - 0x000040)
class UChaosClothingInteractor : public UClothingInteractor : UClothingInteractor
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0030   (0x0010)  MISSED
};

/// Class /Script/ChaosCloth.ChaosClothingSimulationInteractor
/// Size: 0x0010 (0x000090 - 0x0000A0)
class UChaosClothingSimulationInteractor : public UClothingSimulationInteractor : UClothingSimulationInteractor
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0090   (0x0010)  MISSED
};

/// Enum /Script/ChaosCloth.EChaosWeightMapTarget
/// Size: 0x16
enum EChaosWeightMapTarget : uint8_t
{
	EChaosWeightMapTarget__None0                                                     = 0,
	EChaosWeightMapTarget__MaxDistance1                                              = 1,
	EChaosWeightMapTarget__BackstopDistance2                                         = 2,
	EChaosWeightMapTarget__BackstopRadius3                                           = 3,
	EChaosWeightMapTarget__AnimDriveStiffness4                                       = 4,
	EChaosWeightMapTarget__AnimDriveDamping5                                         = 5,
	EChaosWeightMapTarget__TetherStiffness6                                          = 6,
	EChaosWeightMapTarget__TetherScale7                                              = 7,
	EChaosWeightMapTarget__Drag8                                                     = 8,
	EChaosWeightMapTarget__Lift9                                                     = 9,
	EChaosWeightMapTarget__EdgeStiffness10                                           = 10,
	EChaosWeightMapTarget__BendingStiffness11                                        = 11,
	EChaosWeightMapTarget__AreaStiffness12                                           = 12,
	EChaosWeightMapTarget__BucklingStiffness13                                       = 13,
	EChaosWeightMapTarget__Pressure14                                                = 14,
	EChaosWeightMapTarget__EChaosWeightMapTarget_MAX15                               = 15
};

/// Enum /Script/ChaosCloth.EChaosClothTetherMode
/// Size: 0x05
enum EChaosClothTetherMode : uint8_t
{
	EChaosClothTetherMode__FastTetherFastLength0                                     = 0,
	EChaosClothTetherMode__AccurateTetherFastLength1                                 = 1,
	EChaosClothTetherMode__AccurateTetherAccurateLength2                             = 2,
	EChaosClothTetherMode__MaxChaosClothTetherMode3                                  = 3,
	EChaosClothTetherMode__EChaosClothTetherMode_MAX4                                = 4
};

