
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package IKRig.

/// Struct /Script/IKRig.RetargetProfile
/// Size: 0x0108 (0x000000 - 0x000108)
struct FRetargetProfile
{ 
	bool                                               bApplyTargetRetargetPose;                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	FName                                              TargetRetargetPoseName;                                     // 0x0004   (0x0008)  
	bool                                               bApplySourceRetargetPose;                                   // 0x000C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x000D   (0x0003)  MISSED
	FName                                              SourceRetargetPoseName;                                     // 0x0010   (0x0008)  
	bool                                               bApplyChainSettings;                                        // 0x0018   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0019   (0x0007)  MISSED
	TMap<FName, FTargetChainSettings>                  ChainSettings;                                              // 0x0020   (0x0050)  
	bool                                               bApplyRootSettings;                                         // 0x0070   (0x0001)  
	unsigned char                                      UnknownData03_5[0x7];                                       // 0x0071   (0x0007)  MISSED
	FTargetRootSettings                                RootSettings;                                               // 0x0078   (0x0068)  
	bool                                               bApplyGlobalSettings;                                       // 0x00E0   (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x00E1   (0x0003)  MISSED
	FRetargetGlobalSettings                            GlobalSettings;                                             // 0x00E4   (0x0020)  
	unsigned char                                      UnknownData05_6[0x4];                                       // 0x0104   (0x0004)  MISSED
};

/// Struct /Script/IKRig.RetargetGlobalSettings
/// Size: 0x0020 (0x000000 - 0x000020)
struct FRetargetGlobalSettings
{ 
	bool                                               bEnableRoot;                                                // 0x0000   (0x0001)  
	bool                                               bEnableFK;                                                  // 0x0001   (0x0001)  
	bool                                               bEnableIK;                                                  // 0x0002   (0x0001)  
	bool                                               bWarping;                                                   // 0x0003   (0x0001)  
	EWarpingDirectionSource                            DirectionSource;                                            // 0x0004   (0x0004)  
	EBasicAxis                                         ForwardDirection;                                           // 0x0008   (0x0004)  
	FName                                              DirectionChain;                                             // 0x000C   (0x0008)  
	float                                              WarpForwards;                                               // 0x0014   (0x0004)  
	float                                              SidewaysOffset;                                             // 0x0018   (0x0004)  
	float                                              WarpSplay;                                                  // 0x001C   (0x0004)  
};

/// Struct /Script/IKRig.TargetRootSettings
/// Size: 0x0068 (0x000000 - 0x000068)
struct FTargetRootSettings
{ 
	float                                              RotationAlpha;                                              // 0x0000   (0x0004)  
	float                                              TranslationAlpha;                                           // 0x0004   (0x0004)  
	float                                              BlendToSource;                                              // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	FVector                                            BlendToSourceWeights;                                       // 0x0010   (0x0018)  
	float                                              ScaleHorizontal;                                            // 0x0028   (0x0004)  
	float                                              ScaleVertical;                                              // 0x002C   (0x0004)  
	FVector                                            TranslationOffset;                                          // 0x0030   (0x0018)  
	FRotator                                           RotationOffset;                                             // 0x0048   (0x0018)  
	float                                              AffectIKHorizontal;                                         // 0x0060   (0x0004)  
	float                                              AffectIKVertical;                                           // 0x0064   (0x0004)  
};

/// Struct /Script/IKRig.TargetChainSettings
/// Size: 0x00A8 (0x000000 - 0x0000A8)
struct FTargetChainSettings
{ 
	FTargetChainFKSettings                             FK;                                                         // 0x0000   (0x0018)  
	FTargetChainIKSettings                             IK;                                                         // 0x0018   (0x0078)  
	FTargetChainSpeedPlantSettings                     SpeedPlanting;                                              // 0x0090   (0x0018)  
};

/// Struct /Script/IKRig.TargetChainSpeedPlantSettings
/// Size: 0x0018 (0x000000 - 0x000018)
struct FTargetChainSpeedPlantSettings
{ 
	bool                                               EnableSpeedPlanting;                                        // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	FName                                              SpeedCurveName;                                             // 0x0004   (0x0008)  
	float                                              SpeedThreshold;                                             // 0x000C   (0x0004)  
	float                                              UnplantStiffness;                                           // 0x0010   (0x0004)  
	float                                              UnplantCriticalDamping;                                     // 0x0014   (0x0004)  
};

/// Struct /Script/IKRig.TargetChainIKSettings
/// Size: 0x0078 (0x000000 - 0x000078)
struct FTargetChainIKSettings
{ 
	bool                                               EnableIK;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              BlendToSource;                                              // 0x0004   (0x0004)  
	FVector                                            BlendToSourceWeights;                                       // 0x0008   (0x0018)  
	FVector                                            StaticOffset;                                               // 0x0020   (0x0018)  
	FVector                                            StaticLocalOffset;                                          // 0x0038   (0x0018)  
	FRotator                                           StaticRotationOffset;                                       // 0x0050   (0x0018)  
	float                                              ScaleVertical;                                              // 0x0068   (0x0004)  
	float                                              Extension;                                                  // 0x006C   (0x0004)  
	bool                                               bAffectedByIKWarping;                                       // 0x0070   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0071   (0x0007)  MISSED
};

/// Struct /Script/IKRig.TargetChainFKSettings
/// Size: 0x0018 (0x000000 - 0x000018)
struct FTargetChainFKSettings
{ 
	bool                                               EnableFK;                                                   // 0x0000   (0x0001)  
	ERetargetRotationMode                              RotationMode;                                               // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0002   (0x0002)  MISSED
	float                                              RotationAlpha;                                              // 0x0004   (0x0004)  
	ERetargetTranslationMode                           TranslationMode;                                            // 0x0008   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0009   (0x0003)  MISSED
	float                                              TranslationAlpha;                                           // 0x000C   (0x0004)  
	float                                              PoleVectorMatching;                                         // 0x0010   (0x0004)  
	float                                              PoleVectorOffset;                                           // 0x0014   (0x0004)  
};

/// Struct /Script/IKRig.AnimNode_IKRig
/// Size: 0x0188 (0x000058 - 0x0001E0)
struct FAnimNode_IKRig : FAnimNode_CustomProperty
{ 
	FPoseLink                                          Source;                                                     // 0x0058   (0x0010)  
	UIKRigDefinition*                                  RigDefinitionAsset;                                         // 0x0068   (0x0008)  
	TArray<FIKRigGoal>                                 Goals;                                                      // 0x0070   (0x0010)  
	bool                                               bStartFromRefPose;                                          // 0x0080   (0x0001)  
	EAnimAlphaInputType                                AlphaInputType;                                             // 0x0081   (0x0001)  
	bool                                               bAlphaBoolEnabled;                                          // 0x0082   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0083   (0x0001)  MISSED
	float                                              alpha;                                                      // 0x0084   (0x0004)  
	FInputScaleBias                                    AlphaScaleBias;                                             // 0x0088   (0x0008)  
	FInputAlphaBoolBlend                               AlphaBoolBlend;                                             // 0x0090   (0x0048)  
	FName                                              AlphaCurveName;                                             // 0x00D8   (0x0008)  
	FInputScaleBiasClamp                               AlphaScaleBiasClamp;                                        // 0x00E0   (0x0030)  
	UIKRigProcessor*                                   IKRigProcessor;                                             // 0x0110   (0x0008)  
	unsigned char                                      UnknownData01_5[0xC0];                                      // 0x0118   (0x00C0)  MISSED
	float                                              ActualAlpha;                                                // 0x01D8   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x01DC   (0x0004)  MISSED
};

/// Struct /Script/IKRig.IKRigGoal
/// Size: 0x00A0 (0x000000 - 0x0000A0)
struct FIKRigGoal
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
	EIKRigGoalTransformSource                          TransformSource;                                            // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0009   (0x0003)  MISSED
	FBoneReference                                     SourceBone;                                                 // 0x000C   (0x0010)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x001C   (0x0004)  MISSED
	FVector                                            Position;                                                   // 0x0020   (0x0018)  
	FRotator                                           Rotation;                                                   // 0x0038   (0x0018)  
	float                                              PositionAlpha;                                              // 0x0050   (0x0004)  
	float                                              RotationAlpha;                                              // 0x0054   (0x0004)  
	EIKRigGoalSpace                                    PositionSpace;                                              // 0x0058   (0x0001)  
	EIKRigGoalSpace                                    RotationSpace;                                              // 0x0059   (0x0001)  
	unsigned char                                      UnknownData02_5[0x6];                                       // 0x005A   (0x0006)  MISSED
	FVector                                            FinalBlendedPosition;                                       // 0x0060   (0x0018)  
	unsigned char                                      UnknownData03_5[0x8];                                       // 0x0078   (0x0008)  MISSED
	FQuat                                              FinalBlendedRotation;                                       // 0x0080   (0x0020)  
};

/// Struct /Script/IKRig.AnimNode_RetargetPoseFromMesh
/// Size: 0x0248 (0x000010 - 0x000258)
struct FAnimNode_RetargetPoseFromMesh : FAnimNode_Base
{ 
	TWeakObjectPtr<USkeletalMeshComponent*>            SourceMeshComponent;                                        // 0x0010   (0x0008)  
	bool                                               bUseAttachedParent;                                         // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0019   (0x0007)  MISSED
	UIKRetargeter*                                     IKRetargeterAsset;                                          // 0x0020   (0x0008)  
	FRetargetProfile                                   CustomRetargetProfile;                                      // 0x0028   (0x0108)  
	bool                                               bSuppressWarnings;                                          // 0x0130   (0x0001)  
	bool                                               bCopyCurves;                                                // 0x0131   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x0132   (0x0006)  MISSED
	UIKRetargetProcessor*                              Processor;                                                  // 0x0138   (0x0008)  
	unsigned char                                      UnknownData02_6[0x118];                                     // 0x0140   (0x0118)  MISSED
};

/// Struct /Script/IKRig.IKRigGoalContainer
/// Size: 0x0010 (0x000000 - 0x000010)
struct FIKRigGoalContainer
{ 
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/IKRig.BoneChain
/// Size: 0x0030 (0x000000 - 0x000030)
struct FBoneChain
{ 
	FName                                              ChainName;                                                  // 0x0000   (0x0008)  
	FBoneReference                                     StartBone;                                                  // 0x0008   (0x0010)  
	FBoneReference                                     EndBone;                                                    // 0x0018   (0x0010)  
	FName                                              IKGoalName;                                                 // 0x0028   (0x0008)  
};

/// Struct /Script/IKRig.RetargetDefinition
/// Size: 0x0018 (0x000000 - 0x000018)
struct FRetargetDefinition
{ 
	FName                                              RootBone;                                                   // 0x0000   (0x0008)  
	TArray<FBoneChain>                                 BoneChains;                                                 // 0x0008   (0x0010)  
};

/// Struct /Script/IKRig.GoalBone
/// Size: 0x0010 (0x000000 - 0x000010)
struct FGoalBone
{ 
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/IKRig.IKRigInputSkeleton
/// Size: 0x0038 (0x000000 - 0x000038)
struct FIKRigInputSkeleton
{ 
	unsigned char                                      UnknownData00_1[0x38];                                      // 0x0000   (0x0038)  MISSED
};

/// Struct /Script/IKRig.IKRigSkeleton
/// Size: 0x0070 (0x000000 - 0x000070)
struct FIKRigSkeleton
{ 
	TArray<FName>                                      BoneNames;                                                  // 0x0000   (0x0010)  
	TArray<int32_t>                                    ParentIndices;                                              // 0x0010   (0x0010)  
	TArray<FName>                                      ExcludedBones;                                              // 0x0020   (0x0010)  
	TArray<FTransform>                                 CurrentPoseGlobal;                                          // 0x0030   (0x0010)  
	TArray<FTransform>                                 CurrentPoseLocal;                                           // 0x0040   (0x0010)  
	TArray<FTransform>                                 RefPoseGlobal;                                              // 0x0050   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0060   (0x0010)  MISSED
};

/// Struct /Script/IKRig.RetargetChainMap
/// Size: 0x0010 (0x000000 - 0x000010)
struct FRetargetChainMap
{ 
	FName                                              SourceChain;                                                // 0x0000   (0x0008)  
	FName                                              TargetChain;                                                // 0x0008   (0x0008)  
};

/// Struct /Script/IKRig.IKRetargetPose
/// Size: 0x0068 (0x000000 - 0x000068)
struct FIKRetargetPose
{ 
	FVector                                            RootTranslationOffset;                                      // 0x0000   (0x0018)  
	TMap<FName, FQuat>                                 BoneRotationOffsets;                                        // 0x0018   (0x0050)  
};

/// Struct /Script/IKRig.LimbSolverSettings
/// Size: 0x0024 (0x000000 - 0x000024)
struct FLimbSolverSettings
{ 
	float                                              ReachPrecision;                                             // 0x0000   (0x0004)  
	TEnumAsByte<EAxis>                                 HingeRotationAxis;                                          // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0005   (0x0003)  MISSED
	int32_t                                            MaxIterations;                                              // 0x0008   (0x0004)  
	bool                                               bEnableLimit;                                               // 0x000C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x000D   (0x0003)  MISSED
	float                                              MinRotationAngle;                                           // 0x0010   (0x0004)  
	bool                                               bAveragePull;                                               // 0x0014   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0015   (0x0003)  MISSED
	float                                              PullDistribution;                                           // 0x0018   (0x0004)  
	float                                              ReachStepAlpha;                                             // 0x001C   (0x0004)  
	bool                                               bEnableTwistCorrection;                                     // 0x0020   (0x0001)  
	TEnumAsByte<EAxis>                                 EndBoneForwardAxis;                                         // 0x0021   (0x0001)  
	unsigned char                                      UnknownData03_6[0x2];                                       // 0x0022   (0x0002)  MISSED
};

/// Struct /Script/IKRig.LimbLink
/// Size: 0x0068 (0x000000 - 0x000068)
struct FLimbLink
{ 
	unsigned char                                      UnknownData00_1[0x68];                                      // 0x0000   (0x0068)  MISSED
};

/// Struct /Script/IKRig.LimbSolver
/// Size: 0x0018 (0x000000 - 0x000018)
struct FLimbSolver
{ 
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0000   (0x0018)  MISSED
};

/// Class /Script/IKRig.IKGoalCreatorInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UIKGoalCreatorInterface : public UInterface : UInterface
{ 
public:
};

/// Class /Script/IKRig.IKRigComponent
/// Size: 0x0018 (0x0000A0 - 0x0000B8)
class UIKRigComponent : public UActorComponent : UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x00A0   (0x0018)  MISSED
};

/// Class /Script/IKRig.IKRigEffectorGoal
/// Size: 0x00D8 (0x000028 - 0x000100)
class UIKRigEffectorGoal : public UObject : UObject
{ 
public:
	FName                                              GoalName;                                                   // 0x0028   (0x0008)  
	FName                                              BoneName;                                                   // 0x0030   (0x0008)  
	float                                              PositionAlpha;                                              // 0x0038   (0x0004)  
	float                                              RotationAlpha;                                              // 0x003C   (0x0004)  
	FTransform                                         CurrentTransform;                                           // 0x0040   (0x0060)  
	FTransform                                         InitialTransform;                                           // 0x00A0   (0x0060)  
};

/// Class /Script/IKRig.IKRigDefinition
/// Size: 0x00E0 (0x000028 - 0x000108)
class UIKRigDefinition : public UObject : UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0028   (0x0008)  MISSED
	TWeakObjectPtr<USkeletalMesh*>                     PreviewSkeletalMesh;                                        // 0x0030   (0x0030)  
	FIKRigSkeleton                                     Skeleton;                                                   // 0x0060   (0x0070)  
	TArray<UIKRigEffectorGoal*>                        Goals;                                                      // 0x00D0   (0x0010)  
	TArray<UIKRigSolver*>                              Solvers;                                                    // 0x00E0   (0x0010)  
	FRetargetDefinition                                RetargetDefinition;                                         // 0x00F0   (0x0018)  
};

/// Class /Script/IKRig.IKRigProcessor
/// Size: 0x0120 (0x000028 - 0x000148)
class UIKRigProcessor : public UObject : UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x38];                                      // 0x0028   (0x0038)  MISSED
	TArray<UIKRigSolver*>                              Solvers;                                                    // 0x0060   (0x0010)  
	unsigned char                                      UnknownData01_6[0xD8];                                      // 0x0070   (0x00D8)  MISSED
};

/// Class /Script/IKRig.IKRigSolver
/// Size: 0x0008 (0x000028 - 0x000030)
class UIKRigSolver : public UObject : UObject
{ 
public:
	bool                                               bIsEnabled;                                                 // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0029   (0x0007)  MISSED
};

/// Class /Script/IKRig.RetargetChainSettings
/// Size: 0x00B8 (0x000028 - 0x0000E0)
class URetargetChainSettings : public UObject : UObject
{ 
public:
	FName                                              SourceChain;                                                // 0x0028   (0x0008)  
	FName                                              TargetChain;                                                // 0x0030   (0x0008)  
	FTargetChainSettings                               Settings;                                                   // 0x0038   (0x00A8)  
};

/// Class /Script/IKRig.RetargetRootSettings
/// Size: 0x0068 (0x000028 - 0x000090)
class URetargetRootSettings : public UObject : UObject
{ 
public:
	FTargetRootSettings                                Settings;                                                   // 0x0028   (0x0068)  
};

/// Class /Script/IKRig.IKRetargetGlobalSettings
/// Size: 0x0020 (0x000028 - 0x000048)
class UIKRetargetGlobalSettings : public UObject : UObject
{ 
public:
	FRetargetGlobalSettings                            Settings;                                                   // 0x0028   (0x0020)  
};

/// Class /Script/IKRig.IKRetargeter
/// Size: 0x01F0 (0x000028 - 0x000218)
class UIKRetargeter : public UObject : UObject
{ 
public:
	TWeakObjectPtr<UIKRigDefinition*>                  SourceIKRigAsset;                                           // 0x0028   (0x0030)  
	TWeakObjectPtr<UIKRigDefinition*>                  TargetIKRigAsset;                                           // 0x0058   (0x0030)  
	TArray<FRetargetChainMap>                          ChainMapping;                                               // 0x0088   (0x0010)  
	TArray<URetargetChainSettings*>                    ChainSettings;                                              // 0x0098   (0x0010)  
	URetargetRootSettings*                             RootSettings;                                               // 0x00A8   (0x0008)  
	UIKRetargetGlobalSettings*                         GlobalSettings;                                             // 0x00B0   (0x0008)  
	TMap<FName, FRetargetProfile>                      Profiles;                                                   // 0x00B8   (0x0050)  
	FName                                              CurrentProfile;                                             // 0x0108   (0x0008)  
	TMap<FName, FIKRetargetPose>                       SourceRetargetPoses;                                        // 0x0110   (0x0050)  
	TMap<FName, FIKRetargetPose>                       TargetRetargetPoses;                                        // 0x0160   (0x0050)  
	FName                                              CurrentSourceRetargetPose;                                  // 0x01B0   (0x0008)  
	FName                                              CurrentTargetRetargetPose;                                  // 0x01B8   (0x0008)  
	TMap<FName, FIKRetargetPose>                       RetargetPoses;                                              // 0x01C0   (0x0050)  
	FName                                              CurrentRetargetPose;                                        // 0x0210   (0x0008)  


	/// Functions
	// Function /Script/IKRig.IKRetargeter.SetRootSettingsInRetargetProfile
	void SetRootSettingsInRetargetProfile(FRetargetProfile& RetargetProfile, FTargetRootSettings& RootSettings);             // [0x19a02a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/IKRig.IKRetargeter.SetGlobalSettingsInRetargetProfile
	void SetGlobalSettingsInRetargetProfile(FRetargetProfile& RetargetProfile, FRetargetGlobalSettings& GlobalSettings);     // [0x199fb40] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/IKRig.IKRetargeter.SetChainSpeedPlantSettingsInRetargetProfile
	void SetChainSpeedPlantSettingsInRetargetProfile(FRetargetProfile& RetargetProfile, FTargetChainSpeedPlantSettings& SpeedPlantSettings, FName TargetChainName); // [0x199f970] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/IKRig.IKRetargeter.SetChainSettingsInRetargetProfile
	void SetChainSettingsInRetargetProfile(FRetargetProfile& RetargetProfile, FTargetChainSettings& ChainSettings, FName TargetChainName); // [0x199f730] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/IKRig.IKRetargeter.SetChainIKSettingsInRetargetProfile
	void SetChainIKSettingsInRetargetProfile(FRetargetProfile& RetargetProfile, FTargetChainIKSettings& IKSettings, FName TargetChainName); // [0x199f4e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/IKRig.IKRetargeter.SetChainFKSettingsInRetargetProfile
	void SetChainFKSettingsInRetargetProfile(FRetargetProfile& RetargetProfile, FTargetChainFKSettings& FKSettings, FName TargetChainName); // [0x199f310] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/IKRig.IKRetargeter.GetRootSettingsFromRetargetProfile
	FTargetRootSettings GetRootSettingsFromRetargetProfile(FRetargetProfile& RetargetProfile);                               // [0x199f1d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/IKRig.IKRetargeter.GetRootSettingsFromRetargetAsset
	void GetRootSettingsFromRetargetAsset(UIKRetargeter* RetargetAsset, FName OptionalProfileName, FTargetRootSettings& OutSettings); // [0x199eef0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/IKRig.IKRetargeter.GetGlobalSettingsFromRetargetProfile
	FRetargetGlobalSettings GetGlobalSettingsFromRetargetProfile(FRetargetProfile& RetargetProfile);                         // [0x199edf0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/IKRig.IKRetargeter.GetGlobalSettingsFromRetargetAsset
	void GetGlobalSettingsFromRetargetAsset(UIKRetargeter* RetargetAsset, FName OptionalProfileName, FRetargetGlobalSettings& OutSettings); // [0x199ec50] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/IKRig.IKRetargeter.GetChainUsingGoalFromRetargetAsset
	FTargetChainSettings GetChainUsingGoalFromRetargetAsset(UIKRetargeter* RetargetAsset, FName IKGoalName);                 // [0x199e920] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/IKRig.IKRetargeter.GetChainSettingsFromRetargetProfile
	FTargetChainSettings GetChainSettingsFromRetargetProfile(FRetargetProfile& RetargetProfile, FName TargetChainName);      // [0x199e6f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/IKRig.IKRetargeter.GetChainSettingsFromRetargetAsset
	FTargetChainSettings GetChainSettingsFromRetargetAsset(UIKRetargeter* RetargetAsset, FName TargetChainName, FName OptionalProfileName); // [0x199e2d0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/IKRig.IKRetargetProcessor
/// Size: 0x0348 (0x000028 - 0x000370)
class UIKRetargetProcessor : public UObject : UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x148];                                     // 0x0028   (0x0148)  MISSED
	UIKRigProcessor*                                   IKRigProcessor;                                             // 0x0170   (0x0008)  
	unsigned char                                      UnknownData01_6[0x1F8];                                     // 0x0178   (0x01F8)  MISSED
};

/// Class /Script/IKRig.IKRig_BodyMoverEffector
/// Size: 0x0018 (0x000028 - 0x000040)
class UIKRig_BodyMoverEffector : public UObject : UObject
{ 
public:
	FName                                              GoalName;                                                   // 0x0028   (0x0008)  
	FName                                              BoneName;                                                   // 0x0030   (0x0008)  
	float                                              InfluenceMultiplier;                                        // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Class /Script/IKRig.IKRig_BodyMover
/// Size: 0x0050 (0x000030 - 0x000080)
class UIKRig_BodyMover : public UIKRigSolver : UIKRigSolver
{ 
public:
	FName                                              RootBone;                                                   // 0x0030   (0x0008)  
	float                                              PositionAlpha;                                              // 0x0038   (0x0004)  
	float                                              PositionPositiveX;                                          // 0x003C   (0x0004)  
	float                                              PositionNegativeX;                                          // 0x0040   (0x0004)  
	float                                              PositionPositiveY;                                          // 0x0044   (0x0004)  
	float                                              PositionNegativeY;                                          // 0x0048   (0x0004)  
	float                                              PositionPositiveZ;                                          // 0x004C   (0x0004)  
	float                                              PositionNegativeZ;                                          // 0x0050   (0x0004)  
	float                                              RotationAlpha;                                              // 0x0054   (0x0004)  
	float                                              RotateXAlpha;                                               // 0x0058   (0x0004)  
	float                                              RotateYAlpha;                                               // 0x005C   (0x0004)  
	float                                              RotateZAlpha;                                               // 0x0060   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0064   (0x0004)  MISSED
	TArray<UIKRig_BodyMoverEffector*>                  Effectors;                                                  // 0x0068   (0x0010)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0078   (0x0008)  MISSED
};

/// Class /Script/IKRig.IKRig_LimbEffector
/// Size: 0x0010 (0x000028 - 0x000038)
class UIKRig_LimbEffector : public UObject : UObject
{ 
public:
	FName                                              GoalName;                                                   // 0x0028   (0x0008)  
	FName                                              BoneName;                                                   // 0x0030   (0x0008)  
};

/// Class /Script/IKRig.IKRig_LimbSolver
/// Size: 0x0060 (0x000030 - 0x000090)
class UIKRig_LimbSolver : public UIKRigSolver : UIKRigSolver
{ 
public:
	FName                                              RootName;                                                   // 0x0030   (0x0008)  
	float                                              ReachPrecision;                                             // 0x0038   (0x0004)  
	TEnumAsByte<EAxis>                                 HingeRotationAxis;                                          // 0x003C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x003D   (0x0003)  MISSED
	int32_t                                            MaxIterations;                                              // 0x0040   (0x0004)  
	bool                                               bEnableLimit;                                               // 0x0044   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0045   (0x0003)  MISSED
	float                                              MinRotationAngle;                                           // 0x0048   (0x0004)  
	bool                                               bAveragePull;                                               // 0x004C   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x004D   (0x0003)  MISSED
	float                                              PullDistribution;                                           // 0x0050   (0x0004)  
	float                                              ReachStepAlpha;                                             // 0x0054   (0x0004)  
	bool                                               bEnableTwistCorrection;                                     // 0x0058   (0x0001)  
	TEnumAsByte<EAxis>                                 EndBoneForwardAxis;                                         // 0x0059   (0x0001)  
	unsigned char                                      UnknownData03_5[0x6];                                       // 0x005A   (0x0006)  MISSED
	UIKRig_LimbEffector*                               Effector;                                                   // 0x0060   (0x0008)  
	unsigned char                                      UnknownData04_6[0x28];                                      // 0x0068   (0x0028)  MISSED
};

/// Class /Script/IKRig.IKRig_FBIKEffector
/// Size: 0x0020 (0x000028 - 0x000048)
class UIKRig_FBIKEffector : public UObject : UObject
{ 
public:
	FName                                              GoalName;                                                   // 0x0028   (0x0008)  
	FName                                              BoneName;                                                   // 0x0030   (0x0008)  
	float                                              StrengthAlpha;                                              // 0x0038   (0x0004)  
	float                                              PullChainAlpha;                                             // 0x003C   (0x0004)  
	float                                              PinRotation;                                                // 0x0040   (0x0004)  
	int32_t                                            IndexInSolver;                                              // 0x0044   (0x0004)  
};

/// Class /Script/IKRig.IKRig_FBIKBoneSettings
/// Size: 0x0050 (0x000028 - 0x000078)
class UIKRig_FBIKBoneSettings : public UObject : UObject
{ 
public:
	FName                                              bone;                                                       // 0x0028   (0x0008)  
	float                                              RotationStiffness;                                          // 0x0030   (0x0004)  
	float                                              PositionStiffness;                                          // 0x0034   (0x0004)  
	EPBIKLimitType                                     X;                                                          // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0039   (0x0003)  MISSED
	float                                              MinX;                                                       // 0x003C   (0x0004)  
	float                                              MaxX;                                                       // 0x0040   (0x0004)  
	EPBIKLimitType                                     Y;                                                          // 0x0044   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0045   (0x0003)  MISSED
	float                                              MinY;                                                       // 0x0048   (0x0004)  
	float                                              MaxY;                                                       // 0x004C   (0x0004)  
	EPBIKLimitType                                     Z;                                                          // 0x0050   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0051   (0x0003)  MISSED
	float                                              MinZ;                                                       // 0x0054   (0x0004)  
	float                                              MaxZ;                                                       // 0x0058   (0x0004)  
	bool                                               bUsePreferredAngles;                                        // 0x005C   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x005D   (0x0003)  MISSED
	FVector                                            PreferredAngles;                                            // 0x0060   (0x0018)  
};

/// Class /Script/IKRig.IKRigFBIKSolver
/// Size: 0x00D0 (0x000030 - 0x000100)
class UIKRigFBIKSolver : public UIKRigSolver : UIKRigSolver
{ 
public:
	FName                                              RootBone;                                                   // 0x0030   (0x0008)  
	int32_t                                            Iterations;                                                 // 0x0038   (0x0004)  
	float                                              MassMultiplier;                                             // 0x003C   (0x0004)  
	bool                                               bAllowStretch;                                              // 0x0040   (0x0001)  
	EPBIKRootBehavior                                  RootBehavior;                                               // 0x0041   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0042   (0x0002)  MISSED
	FRootPrePullSettings                               PrePullRootSettings;                                        // 0x0044   (0x0020)  
	float                                              PullChainAlpha;                                             // 0x0064   (0x0004)  
	float                                              MaxAngle;                                                   // 0x0068   (0x0004)  
	float                                              OverRelaxation;                                             // 0x006C   (0x0004)  
	bool                                               bStartSolveFromInputPose;                                   // 0x0070   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0071   (0x0007)  MISSED
	TArray<UIKRig_FBIKEffector*>                       Effectors;                                                  // 0x0078   (0x0010)  
	TArray<UIKRig_FBIKBoneSettings*>                   BoneSettings;                                               // 0x0088   (0x0010)  
	unsigned char                                      UnknownData02_6[0x68];                                      // 0x0098   (0x0068)  MISSED
};

/// Class /Script/IKRig.IKRig_PoleSolverEffector
/// Size: 0x0018 (0x000028 - 0x000040)
class UIKRig_PoleSolverEffector : public UObject : UObject
{ 
public:
	FName                                              GoalName;                                                   // 0x0028   (0x0008)  
	FName                                              BoneName;                                                   // 0x0030   (0x0008)  
	float                                              alpha;                                                      // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Class /Script/IKRig.IKRig_PoleSolver
/// Size: 0x0038 (0x000030 - 0x000068)
class UIKRig_PoleSolver : public UIKRigSolver : UIKRigSolver
{ 
public:
	FName                                              RootName;                                                   // 0x0030   (0x0008)  
	FName                                              EndName;                                                    // 0x0038   (0x0008)  
	UIKRig_PoleSolverEffector*                         Effector;                                                   // 0x0040   (0x0008)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0048   (0x0020)  MISSED
};

/// Class /Script/IKRig.IKRig_SetTransformEffector
/// Size: 0x0008 (0x000028 - 0x000030)
class UIKRig_SetTransformEffector : public UObject : UObject
{ 
public:
	bool                                               bEnablePosition;                                            // 0x0028   (0x0001)  
	bool                                               bEnableRotation;                                            // 0x0029   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x002A   (0x0002)  MISSED
	float                                              alpha;                                                      // 0x002C   (0x0004)  
};

/// Class /Script/IKRig.IKRig_SetTransform
/// Size: 0x0020 (0x000030 - 0x000050)
class UIKRig_SetTransform : public UIKRigSolver : UIKRigSolver
{ 
public:
	FName                                              Goal;                                                       // 0x0030   (0x0008)  
	FName                                              RootBone;                                                   // 0x0038   (0x0008)  
	UIKRig_SetTransformEffector*                       Effector;                                                   // 0x0040   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0048   (0x0008)  MISSED
};

/// Enum /Script/IKRig.EIKRigGoalSpace
/// Size: 0x04
enum EIKRigGoalSpace : uint8_t
{
	EIKRigGoalSpace__Component0                                                      = 0,
	EIKRigGoalSpace__Additive1                                                       = 1,
	EIKRigGoalSpace__World2                                                          = 2,
	EIKRigGoalSpace__EIKRigGoalSpace_MAX3                                            = 3
};

/// Enum /Script/IKRig.EIKRigGoalTransformSource
/// Size: 0x04
enum EIKRigGoalTransformSource : uint8_t
{
	EIKRigGoalTransformSource__Manual0                                               = 0,
	EIKRigGoalTransformSource__Bone1                                                 = 1,
	EIKRigGoalTransformSource__ActorComponent2                                       = 2,
	EIKRigGoalTransformSource__EIKRigGoalTransformSource_MAX3                        = 3
};

/// Enum /Script/IKRig.ERetargetSourceOrTarget
/// Size: 0x03
enum ERetargetSourceOrTarget : uint8_t
{
	ERetargetSourceOrTarget__Source0                                                 = 0,
	ERetargetSourceOrTarget__Target1                                                 = 1,
	ERetargetSourceOrTarget__ERetargetSourceOrTarget_MAX2                            = 2
};

/// Enum /Script/IKRig.ERetargetTranslationMode
/// Size: 0x04
enum ERetargetTranslationMode : uint8_t
{
	ERetargetTranslationMode__None0                                                  = 0,
	ERetargetTranslationMode__GloballyScaled1                                        = 1,
	ERetargetTranslationMode__Absolute2                                              = 2,
	ERetargetTranslationMode__ERetargetTranslationMode_MAX3                          = 3
};

/// Enum /Script/IKRig.ERetargetRotationMode
/// Size: 0x05
enum ERetargetRotationMode : uint8_t
{
	ERetargetRotationMode__Interpolated0                                             = 0,
	ERetargetRotationMode__OneToOne1                                                 = 1,
	ERetargetRotationMode__OneToOneReversed2                                         = 2,
	ERetargetRotationMode__None3                                                     = 3,
	ERetargetRotationMode__ERetargetRotationMode_MAX4                                = 4
};

/// Enum /Script/IKRig.EBasicAxis
/// Size: 0x07
enum EBasicAxis : uint8_t
{
	EBasicAxis__X0                                                                   = 0,
	EBasicAxis__Y1                                                                   = 1,
	EBasicAxis__Z2                                                                   = 2,
	EBasicAxis__NegX3                                                                = 3,
	EBasicAxis__NegY4                                                                = 4,
	EBasicAxis__NegZ5                                                                = 5,
	EBasicAxis__EBasicAxis_MAX6                                                      = 6
};

/// Enum /Script/IKRig.EWarpingDirectionSource
/// Size: 0x03
enum EWarpingDirectionSource : uint8_t
{
	EWarpingDirectionSource__Goals0                                                  = 0,
	EWarpingDirectionSource__Chain1                                                  = 1,
	EWarpingDirectionSource__EWarpingDirectionSource_MAX2                            = 2
};

