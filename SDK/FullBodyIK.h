
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package FullBodyIK.

/// Struct /Script/FullBodyIK.FBIKBoneLimit
/// Size: 0x0020 (0x000000 - 0x000020)
struct FFBIKBoneLimit
{ 
	EFBIKBoneLimitType                                 LimitType_X;                                                // 0x0000   (0x0001)  
	EFBIKBoneLimitType                                 LimitType_Y;                                                // 0x0001   (0x0001)  
	EFBIKBoneLimitType                                 LimitType_Z;                                                // 0x0002   (0x0001)  
	unsigned char                                      UnknownData00_5[0x5];                                       // 0x0003   (0x0005)  MISSED
	FVector                                            Limit;                                                      // 0x0008   (0x0018)  
};

/// Struct /Script/FullBodyIK.FBIKConstraintOption
/// Size: 0x00A0 (0x000000 - 0x0000A0)
struct FFBIKConstraintOption
{ 
	FRigElementKey                                     Item;                                                       // 0x0000   (0x000C)  
	bool                                               bEnabled;                                                   // 0x000C   (0x0001)  
	bool                                               bUseStiffness;                                              // 0x000D   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x000E   (0x0002)  MISSED
	FVector                                            LinearStiffness;                                            // 0x0010   (0x0018)  
	FVector                                            AngularStiffness;                                           // 0x0028   (0x0018)  
	bool                                               bUseAngularLimit;                                           // 0x0040   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0041   (0x0007)  MISSED
	FFBIKBoneLimit                                     AngularLimit;                                               // 0x0048   (0x0020)  
	bool                                               bUsePoleVector;                                             // 0x0068   (0x0001)  
	EPoleVectorOption                                  PoleVectorOption;                                           // 0x0069   (0x0001)  
	unsigned char                                      UnknownData02_5[0x6];                                       // 0x006A   (0x0006)  MISSED
	FVector                                            PoleVector;                                                 // 0x0070   (0x0018)  
	FRotator                                           OffsetRotation;                                             // 0x0088   (0x0018)  
};

/// Struct /Script/FullBodyIK.MotionProcessInput
/// Size: 0x0002 (0x000000 - 0x000002)
struct FMotionProcessInput
{ 
	bool                                               bForceEffectorRotationTarget;                               // 0x0000   (0x0001)  
	bool                                               bOnlyApplyWhenReachedToTarget;                              // 0x0001   (0x0001)  
};

/// Struct /Script/FullBodyIK.FBIKDebugOption
/// Size: 0x0080 (0x000000 - 0x000080)
struct FFBIKDebugOption
{ 
	bool                                               bDrawDebugHierarchy;                                        // 0x0000   (0x0001)  
	bool                                               bColorAngularMotionStrength;                                // 0x0001   (0x0001)  
	bool                                               bColorLinearMotionStrength;                                 // 0x0002   (0x0001)  
	bool                                               bDrawDebugAxes;                                             // 0x0003   (0x0001)  
	bool                                               bDrawDebugEffector;                                         // 0x0004   (0x0001)  
	bool                                               bDrawDebugConstraints;                                      // 0x0005   (0x0001)  
	unsigned char                                      UnknownData00_5[0xA];                                       // 0x0006   (0x000A)  MISSED
	FTransform                                         DrawWorldOffset;                                            // 0x0010   (0x0060)  
	float                                              DrawSize;                                                   // 0x0070   (0x0004)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x0074   (0x000C)  MISSED
};

/// Struct /Script/FullBodyIK.SolverInput
/// Size: 0x0024 (0x000000 - 0x000024)
struct FSolverInput
{ 
	float                                              LinearMotionStrength;                                       // 0x0000   (0x0004)  
	float                                              MinLinearMotionStrength;                                    // 0x0004   (0x0004)  
	float                                              AngularMotionStrength;                                      // 0x0008   (0x0004)  
	float                                              MinAngularMotionStrength;                                   // 0x000C   (0x0004)  
	float                                              DefaultTargetClamp;                                         // 0x0010   (0x0004)  
	float                                              Precision;                                                  // 0x0014   (0x0004)  
	float                                              Damping;                                                    // 0x0018   (0x0004)  
	int32_t                                            MaxIterations;                                              // 0x001C   (0x0004)  
	bool                                               bUseJacobianTranspose;                                      // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0021   (0x0003)  MISSED
};

/// Struct /Script/FullBodyIK.FBIKEndEffector
/// Size: 0x0060 (0x000000 - 0x000060)
struct FFBIKEndEffector
{ 
	FRigElementKey                                     Item;                                                       // 0x0000   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	FVector                                            Position;                                                   // 0x0010   (0x0018)  
	float                                              PositionAlpha;                                              // 0x0028   (0x0004)  
	int32_t                                            PositionDepth;                                              // 0x002C   (0x0004)  
	FQuat                                              Rotation;                                                   // 0x0030   (0x0020)  
	float                                              RotationAlpha;                                              // 0x0050   (0x0004)  
	int32_t                                            RotationDepth;                                              // 0x0054   (0x0004)  
	float                                              Pull;                                                       // 0x0058   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x005C   (0x0004)  MISSED
};

/// Struct /Script/FullBodyIK.RigUnit_FullbodyIK_WorkData
/// Size: 0x0198 (0x000000 - 0x000198)
struct FRigUnit_FullbodyIK_WorkData
{ 
	unsigned char                                      UnknownData00_1[0x198];                                     // 0x0000   (0x0198)  MISSED
};

/// Struct /Script/FullBodyIK.RigUnit_FullbodyIK
/// Size: 0x0280 (0x000130 - 0x0003B0)
struct FRigUnit_FullbodyIK : FRigUnit_HighlevelBaseMutable
{ 
	FRigElementKey                                     Root;                                                       // 0x0130   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x013C   (0x0004)  MISSED
	TArray<FFBIKEndEffector>                           Effectors;                                                  // 0x0140   (0x0010)  
	TArray<FFBIKConstraintOption>                      Constraints;                                                // 0x0150   (0x0010)  
	FSolverInput                                       SolverProperty;                                             // 0x0160   (0x0024)  
	FMotionProcessInput                                MotionProperty;                                             // 0x0184   (0x0002)  
	bool                                               bPropagateToChildren;                                       // 0x0186   (0x0001)  
	unsigned char                                      UnknownData01_5[0x9];                                       // 0x0187   (0x0009)  MISSED
	FFBIKDebugOption                                   DebugOption;                                                // 0x0190   (0x0080)  
	FRigUnit_FullbodyIK_WorkData                       WorkData;                                                   // 0x0210   (0x0198)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x03A8   (0x0008)  MISSED
};

/// Enum /Script/FullBodyIK.EFBIKBoneLimitType
/// Size: 0x04
enum EFBIKBoneLimitType : uint8_t
{
	EFBIKBoneLimitType__Free0                                                        = 0,
	EFBIKBoneLimitType__Limit1                                                       = 1,
	EFBIKBoneLimitType__Locked2                                                      = 2,
	EFBIKBoneLimitType__EFBIKBoneLimitType_MAX3                                      = 3
};

/// Enum /Script/FullBodyIK.EPoleVectorOption
/// Size: 0x03
enum EPoleVectorOption : uint8_t
{
	EPoleVectorOption__Direction0                                                    = 0,
	EPoleVectorOption__Location1                                                     = 1,
	EPoleVectorOption__EPoleVectorOption_MAX2                                        = 2
};

