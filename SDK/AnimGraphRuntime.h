
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package AnimGraphRuntime.

/// Struct /Script/AnimGraphRuntime.AnimNode_SkeletalControlBase
/// Size: 0x00B8 (0x000010 - 0x0000C8)
struct FAnimNode_SkeletalControlBase : FAnimNode_Base
{ 
	FComponentSpacePoseLink                            ComponentPose;                                              // 0x0010   (0x0010)  
	int32_t                                            LODThreshold;                                               // 0x0020   (0x0004)  
	float                                              ActualAlpha;                                                // 0x0024   (0x0004)  
	EAnimAlphaInputType                                AlphaInputType;                                             // 0x0028   (0x0001)  
	bool                                               bAlphaBoolEnabled;                                          // 0x0029   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x002A   (0x0002)  MISSED
	float                                              alpha;                                                      // 0x002C   (0x0004)  
	FInputScaleBias                                    AlphaScaleBias;                                             // 0x0030   (0x0008)  
	FInputAlphaBoolBlend                               AlphaBoolBlend;                                             // 0x0038   (0x0048)  
	FName                                              AlphaCurveName;                                             // 0x0080   (0x0008)  
	FInputScaleBiasClamp                               AlphaScaleBiasClamp;                                        // 0x0088   (0x0030)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x00B8   (0x0010)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_BlendSpaceGraphBase
/// Size: 0x0058 (0x000010 - 0x000068)
struct FAnimNode_BlendSpaceGraphBase : FAnimNode_Base
{ 
	float                                              X;                                                          // 0x0010   (0x0004)  
	float                                              Y;                                                          // 0x0014   (0x0004)  
	FName                                              GroupName;                                                  // 0x0018   (0x0008)  
	TEnumAsByte<EAnimGroupRole>                        GroupRole;                                                  // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0021   (0x0007)  MISSED
	UBlendSpace*                                       BlendSpace;                                                 // 0x0028   (0x0008)  
	TArray<FPoseLink>                                  SamplePoseLinks;                                            // 0x0030   (0x0010)  
	unsigned char                                      UnknownData01_6[0x28];                                      // 0x0040   (0x0028)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_BlendSpaceGraph
/// Size: 0x0000 (0x000068 - 0x000068)
struct FAnimNode_BlendSpaceGraph : FAnimNode_BlendSpaceGraphBase
{ 
};

/// Struct /Script/AnimGraphRuntime.AnimNode_BlendSpaceSampleResult
/// Size: 0x0000 (0x000020 - 0x000020)
struct FAnimNode_BlendSpaceSampleResult : FAnimNode_Root
{ 
};

/// Struct /Script/AnimGraphRuntime.AnimNode_ModifyBone
/// Size: 0x0060 (0x0000C8 - 0x000128)
struct FAnimNode_ModifyBone : FAnimNode_SkeletalControlBase
{ 
	FBoneReference                                     BoneToModify;                                               // 0x00C8   (0x0010)  
	FVector                                            Translation;                                                // 0x00D8   (0x0018)  
	FRotator                                           Rotation;                                                   // 0x00F0   (0x0018)  
	FVector                                            Scale;                                                      // 0x0108   (0x0018)  
	TEnumAsByte<EBoneModificationMode>                 TranslationMode;                                            // 0x0120   (0x0001)  
	TEnumAsByte<EBoneModificationMode>                 RotationMode;                                               // 0x0121   (0x0001)  
	TEnumAsByte<EBoneModificationMode>                 ScaleMode;                                                  // 0x0122   (0x0001)  
	TEnumAsByte<EBoneControlSpace>                     TranslationSpace;                                           // 0x0123   (0x0001)  
	TEnumAsByte<EBoneControlSpace>                     RotationSpace;                                              // 0x0124   (0x0001)  
	TEnumAsByte<EBoneControlSpace>                     ScaleSpace;                                                 // 0x0125   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0126   (0x0002)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_RefPose
/// Size: 0x0000 (0x000010 - 0x000010)
struct FAnimNode_RefPose : FAnimNode_Base
{ 
};

/// Struct /Script/AnimGraphRuntime.AnimNode_MeshSpaceRefPose
/// Size: 0x0000 (0x000010 - 0x000010)
struct FAnimNode_MeshSpaceRefPose : FAnimNode_Base
{ 
};

/// Struct /Script/AnimGraphRuntime.AnimNode_RotationMultiplier
/// Size: 0x0028 (0x0000C8 - 0x0000F0)
struct FAnimNode_RotationMultiplier : FAnimNode_SkeletalControlBase
{ 
	FBoneReference                                     TargetBone;                                                 // 0x00C8   (0x0010)  
	FBoneReference                                     SourceBone;                                                 // 0x00D8   (0x0010)  
	float                                              Multiplier;                                                 // 0x00E8   (0x0004)  
	TEnumAsByte<EBoneAxis>                             RotationAxisToRefer;                                        // 0x00EC   (0x0001)  
	bool                                               bIsAdditive;                                                // 0x00ED   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x00EE   (0x0002)  MISSED
};

/// Struct /Script/AnimGraphRuntime.BlendSpaceReference
/// Size: 0x0000 (0x000010 - 0x000010)
struct FBlendSpaceReference : FAnimNodeReference
{ 
};

/// Struct /Script/AnimGraphRuntime.RotationRetargetingInfo
/// Size: 0x01A0 (0x000000 - 0x0001A0)
struct FRotationRetargetingInfo
{ 
	bool                                               bEnabled;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0xF];                                       // 0x0001   (0x000F)  MISSED
	FTransform                                         Source;                                                     // 0x0010   (0x0060)  
	FTransform                                         Target;                                                     // 0x0070   (0x0060)  
	ERotationComponent                                 RotationComponent;                                          // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x00D1   (0x0007)  MISSED
	FVector                                            TwistAxis;                                                  // 0x00D8   (0x0018)  
	bool                                               bUseAbsoluteAngle;                                          // 0x00F0   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x00F1   (0x0003)  MISSED
	float                                              SourceMinimum;                                              // 0x00F4   (0x0004)  
	float                                              SourceMaximum;                                              // 0x00F8   (0x0004)  
	float                                              TargetMinimum;                                              // 0x00FC   (0x0004)  
	float                                              TargetMaximum;                                              // 0x0100   (0x0004)  
	EEasingFuncType                                    EasingType;                                                 // 0x0104   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0105   (0x0003)  MISSED
	FRuntimeFloatCurve                                 CustomCurve;                                                // 0x0108   (0x0088)  
	bool                                               bFlipEasing;                                                // 0x0190   (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x0191   (0x0003)  MISSED
	float                                              EasingWeight;                                               // 0x0194   (0x0004)  
	bool                                               bClamp;                                                     // 0x0198   (0x0001)  
	unsigned char                                      UnknownData05_6[0x7];                                       // 0x0199   (0x0007)  MISSED
};

/// Struct /Script/AnimGraphRuntime.PositionHistory
/// Size: 0x0030 (0x000000 - 0x000030)
struct FPositionHistory
{ 
	TArray<FVector>                                    Positions;                                                  // 0x0000   (0x0010)  
	float                                              Range;                                                      // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x1C];                                      // 0x0014   (0x001C)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimationStateResultReference
/// Size: 0x0000 (0x000010 - 0x000010)
struct FAnimationStateResultReference : FAnimNodeReference
{ 
};

/// Struct /Script/AnimGraphRuntime.AnimationStateMachineReference
/// Size: 0x0000 (0x000010 - 0x000010)
struct FAnimationStateMachineReference : FAnimNodeReference
{ 
};

/// Struct /Script/AnimGraphRuntime.AnimNode_BlendSpacePlayerBase
/// Size: 0x0030 (0x000038 - 0x000068)
struct FAnimNode_BlendSpacePlayerBase : FAnimNode_AssetPlayerBase
{ 
	unsigned char                                      UnknownData00_2[0x28];                                      // 0x0038   (0x0028)  MISSED
	UBlendSpace*                                       PreviousBlendSpace;                                         // 0x0060   (0x0008)  
};

/// Struct /Script/AnimGraphRuntime.AnimNode_BlendSpacePlayer
/// Size: 0x0008 (0x000068 - 0x000070)
struct FAnimNode_BlendSpacePlayer : FAnimNode_BlendSpacePlayerBase
{ 
	UBlendSpace*                                       BlendSpace;                                                 // 0x0068   (0x0008)  
};

/// Struct /Script/AnimGraphRuntime.AnimNode_AimOffsetLookAt
/// Size: 0x0160 (0x000070 - 0x0001D0)
struct FAnimNode_AimOffsetLookAt : FAnimNode_BlendSpacePlayer
{ 
	unsigned char                                      UnknownData00_2[0xC0];                                      // 0x0070   (0x00C0)  MISSED
	FPoseLink                                          BasePose;                                                   // 0x0130   (0x0010)  
	int32_t                                            LODThreshold;                                               // 0x0140   (0x0004)  
	FName                                              SourceSocketName;                                           // 0x0144   (0x0008)  
	FName                                              PivotSocketName;                                            // 0x014C   (0x0008)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0154   (0x0004)  MISSED
	FVector                                            LookAtLocation;                                             // 0x0158   (0x0018)  
	FVector                                            SocketAxis;                                                 // 0x0170   (0x0018)  
	float                                              alpha;                                                      // 0x0188   (0x0004)  
	unsigned char                                      UnknownData02_6[0x44];                                      // 0x018C   (0x0044)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_ApplyAdditive
/// Size: 0x00B8 (0x000010 - 0x0000C8)
struct FAnimNode_ApplyAdditive : FAnimNode_Base
{ 
	FPoseLink                                          base;                                                       // 0x0010   (0x0010)  
	FPoseLink                                          Additive;                                                   // 0x0020   (0x0010)  
	float                                              alpha;                                                      // 0x0030   (0x0004)  
	FInputScaleBias                                    AlphaScaleBias;                                             // 0x0034   (0x0008)  
	int32_t                                            LODThreshold;                                               // 0x003C   (0x0004)  
	FInputAlphaBoolBlend                               AlphaBoolBlend;                                             // 0x0040   (0x0048)  
	FName                                              AlphaCurveName;                                             // 0x0088   (0x0008)  
	FInputScaleBiasClamp                               AlphaScaleBiasClamp;                                        // 0x0090   (0x0030)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00C0   (0x0004)  MISSED
	EAnimAlphaInputType                                AlphaInputType;                                             // 0x00C4   (0x0001)  
	bool                                               bAlphaBoolEnabled;                                          // 0x00C5   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x00C6   (0x0002)  MISSED
};

/// Struct /Script/AnimGraphRuntime.BlendBoneByChannelEntry
/// Size: 0x0024 (0x000000 - 0x000024)
struct FBlendBoneByChannelEntry
{ 
	FBoneReference                                     SourceBone;                                                 // 0x0000   (0x0010)  
	FBoneReference                                     TargetBone;                                                 // 0x0010   (0x0010)  
	bool                                               bBlendTranslation;                                          // 0x0020   (0x0001)  
	bool                                               bBlendRotation;                                             // 0x0021   (0x0001)  
	bool                                               bBlendScale;                                                // 0x0022   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x0023   (0x0001)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_BlendBoneByChannel
/// Size: 0x0058 (0x000010 - 0x000068)
struct FAnimNode_BlendBoneByChannel : FAnimNode_Base
{ 
	FPoseLink                                          A;                                                          // 0x0010   (0x0010)  
	FPoseLink                                          B;                                                          // 0x0020   (0x0010)  
	TArray<FBlendBoneByChannelEntry>                   BoneDefinitions;                                            // 0x0030   (0x0010)  
	unsigned char                                      UnknownData00_5[0x10];                                      // 0x0040   (0x0010)  MISSED
	float                                              alpha;                                                      // 0x0050   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0054   (0x0004)  MISSED
	FInputScaleBias                                    AlphaScaleBias;                                             // 0x0058   (0x0008)  
	TEnumAsByte<EBoneControlSpace>                     TransformsSpace;                                            // 0x0060   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0061   (0x0007)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_BlendListBase
/// Size: 0x0038 (0x000010 - 0x000048)
struct FAnimNode_BlendListBase : FAnimNode_Base
{ 
	TArray<FPoseLink>                                  BlendPose;                                                  // 0x0010   (0x0010)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x0020   (0x0028)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_BlendListByBool
/// Size: 0x0000 (0x000048 - 0x000048)
struct FAnimNode_BlendListByBool : FAnimNode_BlendListBase
{ 
};

/// Struct /Script/AnimGraphRuntime.AnimNode_BlendListByEnum
/// Size: 0x0000 (0x000048 - 0x000048)
struct FAnimNode_BlendListByEnum : FAnimNode_BlendListBase
{ 
};

/// Struct /Script/AnimGraphRuntime.AnimNode_BlendListByInt
/// Size: 0x0000 (0x000048 - 0x000048)
struct FAnimNode_BlendListByInt : FAnimNode_BlendListBase
{ 
};

/// Struct /Script/AnimGraphRuntime.AnimNode_BlendSpaceEvaluator
/// Size: 0x0008 (0x000070 - 0x000078)
struct FAnimNode_BlendSpaceEvaluator : FAnimNode_BlendSpacePlayer
{ 
	float                                              NormalizedTime;                                             // 0x0070   (0x0004)  
	bool                                               bTeleportToNormalizedTime;                                  // 0x0074   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0075   (0x0003)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_BlendSpacePlayer_Standalone
/// Size: 0x0028 (0x000068 - 0x000090)
struct FAnimNode_BlendSpacePlayer_Standalone : FAnimNode_BlendSpacePlayerBase
{ 
	FName                                              GroupName;                                                  // 0x0068   (0x0008)  
	TEnumAsByte<EAnimGroupRole>                        GroupRole;                                                  // 0x0070   (0x0001)  
	EAnimSyncMethod                                    Method;                                                     // 0x0071   (0x0001)  
	bool                                               bIgnoreForRelevancyTest;                                    // 0x0072   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0073   (0x0001)  MISSED
	float                                              X;                                                          // 0x0074   (0x0004)  
	float                                              Y;                                                          // 0x0078   (0x0004)  
	float                                              PlayRate;                                                   // 0x007C   (0x0004)  
	bool                                               bLoop;                                                      // 0x0080   (0x0001)  
	bool                                               bResetPlayTimeWhenBlendSpaceChanges;                        // 0x0081   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x0082   (0x0002)  MISSED
	float                                              StartPosition;                                              // 0x0084   (0x0004)  
	UBlendSpace*                                       BlendSpace;                                                 // 0x0088   (0x0008)  
};

/// Struct /Script/AnimGraphRuntime.AnimNode_CallFunction
/// Size: 0x0028 (0x000010 - 0x000038)
struct FAnimNode_CallFunction : FAnimNode_Base
{ 
	FPoseLink                                          Source;                                                     // 0x0010   (0x0010)  
	unsigned char                                      UnknownData00_5[0x14];                                      // 0x0020   (0x0014)  MISSED
	EAnimFunctionCallSite                              CallSite;                                                   // 0x0034   (0x0004)  
};

/// Struct /Script/AnimGraphRuntime.AnimNode_CopyPoseFromMesh
/// Size: 0x01C8 (0x000010 - 0x0001D8)
struct FAnimNode_CopyPoseFromMesh : FAnimNode_Base
{ 
	TWeakObjectPtr<USkeletalMeshComponent*>            SourceMeshComponent;                                        // 0x0010   (0x0008)  
	bool                                               bUseAttachedParent : 1;                                     // 0x0018:0 (0x0001)  
	bool                                               bCopyCurves : 1;                                            // 0x0018:1 (0x0001)  
	bool                                               bCopyCustomAttributes;                                      // 0x0019   (0x0001)  
	bool                                               bUseMeshPose : 1;                                           // 0x001A:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x1];                                       // 0x001B   (0x0001)  MISSED
	FName                                              RootBoneToCopy;                                             // 0x001C   (0x0008)  
	unsigned char                                      UnknownData01_6[0x1B4];                                     // 0x0024   (0x01B4)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_CurveSource
/// Size: 0x0030 (0x000010 - 0x000040)
struct FAnimNode_CurveSource : FAnimNode_Base
{ 
	FPoseLink                                          SourcePose;                                                 // 0x0010   (0x0010)  
	FName                                              SourceBinding;                                              // 0x0020   (0x0008)  
	float                                              alpha;                                                      // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x002C   (0x0004)  MISSED
	TScriptInterface<Class>                            CurveSource;                                                // 0x0030   (0x0010)  
};

/// Struct /Script/AnimGraphRuntime.AnimNode_LayeredBoneBlend
/// Size: 0x00D0 (0x000010 - 0x0000E0)
struct FAnimNode_LayeredBoneBlend : FAnimNode_Base
{ 
	FPoseLink                                          BasePose;                                                   // 0x0010   (0x0010)  
	TArray<FPoseLink>                                  BlendPoses;                                                 // 0x0020   (0x0010)  
	ELayeredBoneBlendMode                              BlendMode;                                                  // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0031   (0x0007)  MISSED
	TArray<UBlendProfile*>                             BlendMasks;                                                 // 0x0038   (0x0010)  
	TArray<FInputBlendPose>                            LayerSetup;                                                 // 0x0048   (0x0010)  
	TArray<float>                                      BlendWeights;                                               // 0x0058   (0x0010)  
	bool                                               bMeshSpaceRotationBlend;                                    // 0x0068   (0x0001)  
	bool                                               bMeshSpaceScaleBlend;                                       // 0x0069   (0x0001)  
	TEnumAsByte<ECurveBlendOption>                     CurveBlendOption;                                           // 0x006A   (0x0001)  
	bool                                               bBlendRootMotionBasedOnRootBone;                            // 0x006B   (0x0001)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x006C   (0x0004)  MISSED
	int32_t                                            LODThreshold;                                               // 0x0070   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0074   (0x0004)  MISSED
	TArray<FPerBoneBlendWeight>                        PerBoneBlendWeights;                                        // 0x0078   (0x0010)  
	FGuid                                              SkeletonGuid;                                               // 0x0088   (0x0010)  
	FGuid                                              VirtualBoneGuid;                                            // 0x0098   (0x0010)  
	unsigned char                                      UnknownData03_6[0x38];                                      // 0x00A8   (0x0038)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_MakeDynamicAdditive
/// Size: 0x0028 (0x000010 - 0x000038)
struct FAnimNode_MakeDynamicAdditive : FAnimNode_Base
{ 
	FPoseLink                                          base;                                                       // 0x0010   (0x0010)  
	FPoseLink                                          Additive;                                                   // 0x0020   (0x0010)  
	bool                                               bMeshSpaceAdditive;                                         // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_MirrorBase
/// Size: 0x0038 (0x000010 - 0x000048)
struct FAnimNode_MirrorBase : FAnimNode_Base
{ 
	FPoseLink                                          Source;                                                     // 0x0010   (0x0010)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x0020   (0x0028)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_Mirror
/// Size: 0x0000 (0x000048 - 0x000048)
struct FAnimNode_Mirror : FAnimNode_MirrorBase
{ 
};

/// Struct /Script/AnimGraphRuntime.AnimNode_Mirror_Standalone
/// Size: 0x0018 (0x000048 - 0x000060)
struct FAnimNode_Mirror_Standalone : FAnimNode_MirrorBase
{ 
	bool                                               bMirror;                                                    // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0049   (0x0007)  MISSED
	UMirrorDataTable*                                  MirrorDataTable;                                            // 0x0050   (0x0008)  
	float                                              BlendTime;                                                  // 0x0058   (0x0004)  
	bool                                               bResetChild;                                                // 0x005C   (0x0001)  
	bool                                               bBoneMirroring;                                             // 0x005D   (0x0001)  
	bool                                               bCurveMirroring;                                            // 0x005E   (0x0001)  
	bool                                               bAttributeMirroring;                                        // 0x005F   (0x0001)  
};

/// Struct /Script/AnimGraphRuntime.AnimNode_ModifyCurve
/// Size: 0x00F0 (0x000010 - 0x000100)
struct FAnimNode_ModifyCurve : FAnimNode_Base
{ 
	FPoseLink                                          SourcePose;                                                 // 0x0010   (0x0010)  
	TMap<FName, float>                                 CurveMap;                                                   // 0x0020   (0x0050)  
	TArray<float>                                      CurveValues;                                                // 0x0070   (0x0010)  
	TArray<FName>                                      CurveNames;                                                 // 0x0080   (0x0010)  
	unsigned char                                      UnknownData00_5[0x64];                                      // 0x0090   (0x0064)  MISSED
	float                                              alpha;                                                      // 0x00F4   (0x0004)  
	EModifyCurveApplyMode                              ApplyMode;                                                  // 0x00F8   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x00F9   (0x0007)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_MultiWayBlend
/// Size: 0x0040 (0x000010 - 0x000050)
struct FAnimNode_MultiWayBlend : FAnimNode_Base
{ 
	TArray<FPoseLink>                                  Poses;                                                      // 0x0010   (0x0010)  
	TArray<float>                                      DesiredAlphas;                                              // 0x0020   (0x0010)  
	unsigned char                                      UnknownData00_5[0x10];                                      // 0x0030   (0x0010)  MISSED
	FInputScaleBias                                    AlphaScaleBias;                                             // 0x0040   (0x0008)  
	bool                                               bAdditiveNode;                                              // 0x0048   (0x0001)  
	bool                                               bNormalizeAlpha;                                            // 0x0049   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x004A   (0x0006)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_PoseHandler
/// Size: 0x0060 (0x000038 - 0x000098)
struct FAnimNode_PoseHandler : FAnimNode_AssetPlayerBase
{ 
	UPoseAsset*                                        PoseAsset;                                                  // 0x0038   (0x0008)  
	unsigned char                                      UnknownData00_6[0x58];                                      // 0x0040   (0x0058)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_PoseBlendNode
/// Size: 0x0020 (0x000098 - 0x0000B8)
struct FAnimNode_PoseBlendNode : FAnimNode_PoseHandler
{ 
	FPoseLink                                          SourcePose;                                                 // 0x0098   (0x0010)  
	EAlphaBlendOption                                  BlendOption;                                                // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x00A9   (0x0007)  MISSED
	UCurveFloat*                                       CustomCurve;                                                // 0x00B0   (0x0008)  
};

/// Struct /Script/AnimGraphRuntime.AnimNode_PoseByName
/// Size: 0x0018 (0x000098 - 0x0000B0)
struct FAnimNode_PoseByName : FAnimNode_PoseHandler
{ 
	FName                                              PoseName;                                                   // 0x0098   (0x0008)  
	float                                              PoseWeight;                                                 // 0x00A0   (0x0004)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x00A4   (0x000C)  MISSED
};

/// Struct /Script/AnimGraphRuntime.PoseDriverTransform
/// Size: 0x0030 (0x000000 - 0x000030)
struct FPoseDriverTransform
{ 
	FVector                                            TargetTranslation;                                          // 0x0000   (0x0018)  
	FRotator                                           TargetRotation;                                             // 0x0018   (0x0018)  
};

/// Struct /Script/AnimGraphRuntime.PoseDriverTarget
/// Size: 0x00C8 (0x000000 - 0x0000C8)
struct FPoseDriverTarget
{ 
	TArray<FPoseDriverTransform>                       BoneTransforms;                                             // 0x0000   (0x0010)  
	FRotator                                           TargetRotation;                                             // 0x0010   (0x0018)  
	float                                              TargetScale;                                                // 0x0028   (0x0004)  
	ERBFDistanceMethod                                 DistanceMethod;                                             // 0x002C   (0x0001)  
	ERBFFunctionType                                   FunctionType;                                               // 0x002D   (0x0001)  
	bool                                               bApplyCustomCurve;                                          // 0x002E   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x002F   (0x0001)  MISSED
	FRichCurve                                         CustomCurve;                                                // 0x0030   (0x0080)  
	FName                                              DrivenName;                                                 // 0x00B0   (0x0008)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x00B8   (0x0008)  MISSED
	bool                                               bIsHidden;                                                  // 0x00C0   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x00C1   (0x0007)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_PoseDriver
/// Size: 0x00F8 (0x000098 - 0x000190)
struct FAnimNode_PoseDriver : FAnimNode_PoseHandler
{ 
	FPoseLink                                          SourcePose;                                                 // 0x0098   (0x0010)  
	TArray<FBoneReference>                             SourceBones;                                                // 0x00A8   (0x0010)  
	TArray<FBoneReference>                             OnlyDriveBones;                                             // 0x00B8   (0x0010)  
	TArray<FPoseDriverTarget>                          PoseTargets;                                                // 0x00C8   (0x0010)  
	unsigned char                                      UnknownData00_5[0x30];                                      // 0x00D8   (0x0030)  MISSED
	FBoneReference                                     EvalSpaceBone;                                              // 0x0108   (0x0010)  
	bool                                               bEvalFromRefPose;                                           // 0x0118   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0119   (0x0007)  MISSED
	FRBFParams                                         RBFParams;                                                  // 0x0120   (0x0038)  
	EPoseDriverSource                                  DriveSource;                                                // 0x0158   (0x0001)  
	EPoseDriverOutput                                  DriveOutput;                                                // 0x0159   (0x0001)  
	bool                                               bOnlyDriveSelectedBones : 1;                                // 0x015A:0 (0x0001)  
	unsigned char                                      UnknownData02_4[0x1];                                       // 0x015B   (0x0001)  MISSED
	int32_t                                            LODThreshold;                                               // 0x015C   (0x0004)  
	unsigned char                                      UnknownData03_6[0x30];                                      // 0x0160   (0x0030)  MISSED
};

/// Struct /Script/AnimGraphRuntime.RBFParams
/// Size: 0x0038 (0x000000 - 0x000038)
struct FRBFParams
{ 
	int32_t                                            TargetDimensions;                                           // 0x0000   (0x0004)  
	ERBFSolverType                                     SolverType;                                                 // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0005   (0x0003)  MISSED
	float                                              Radius;                                                     // 0x0008   (0x0004)  
	bool                                               bAutomaticRadius;                                           // 0x000C   (0x0001)  
	ERBFFunctionType                                   Function;                                                   // 0x000D   (0x0001)  
	ERBFDistanceMethod                                 DistanceMethod;                                             // 0x000E   (0x0001)  
	TEnumAsByte<EBoneAxis>                             TwistAxis;                                                  // 0x000F   (0x0001)  
	float                                              WeightThreshold;                                            // 0x0010   (0x0004)  
	ERBFNormalizeMethod                                NormalizeMethod;                                            // 0x0014   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0015   (0x0003)  MISSED
	FVector                                            MedianReference;                                            // 0x0018   (0x0018)  
	float                                              MedianMin;                                                  // 0x0030   (0x0004)  
	float                                              MedianMax;                                                  // 0x0034   (0x0004)  
};

/// Struct /Script/AnimGraphRuntime.AnimNode_PoseSnapshot
/// Size: 0x0080 (0x000010 - 0x000090)
struct FAnimNode_PoseSnapshot : FAnimNode_Base
{ 
	FName                                              SnapshotName;                                               // 0x0010   (0x0008)  
	FPoseSnapshot                                      Snapshot;                                                   // 0x0018   (0x0038)  
	ESnapshotSourceMode                                Mode;                                                       // 0x0050   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3F];                                      // 0x0051   (0x003F)  MISSED
};

/// Struct /Script/AnimGraphRuntime.RandomPlayerSequenceEntry
/// Size: 0x0050 (0x000000 - 0x000050)
struct FRandomPlayerSequenceEntry
{ 
	UAnimSequenceBase*                                 Sequence;                                                   // 0x0000   (0x0008)  
	float                                              ChanceToPlay;                                               // 0x0008   (0x0004)  
	int32_t                                            MinLoopCount;                                               // 0x000C   (0x0004)  
	int32_t                                            MaxLoopCount;                                               // 0x0010   (0x0004)  
	float                                              MinPlayRate;                                                // 0x0014   (0x0004)  
	float                                              MaxPlayRate;                                                // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x001C   (0x0004)  MISSED
	FAlphaBlend                                        BlendIn;                                                    // 0x0020   (0x0030)  
};

/// Struct /Script/AnimGraphRuntime.AnimNode_RandomPlayer
/// Size: 0x0068 (0x000010 - 0x000078)
struct FAnimNode_RandomPlayer : FAnimNode_AssetPlayerRelevancyBase
{ 
	TArray<FRandomPlayerSequenceEntry>                 Entries;                                                    // 0x0010   (0x0010)  
	unsigned char                                      UnknownData00_5[0x50];                                      // 0x0020   (0x0050)  MISSED
	float                                              BlendWeight;                                                // 0x0070   (0x0004)  
	bool                                               bShuffleMode;                                               // 0x0074   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0075   (0x0003)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_RotateRootBone
/// Size: 0x0098 (0x000010 - 0x0000A8)
struct FAnimNode_RotateRootBone : FAnimNode_Base
{ 
	FPoseLink                                          BasePose;                                                   // 0x0010   (0x0010)  
	float                                              Pitch;                                                      // 0x0020   (0x0004)  
	float                                              Yaw;                                                        // 0x0024   (0x0004)  
	FInputScaleBiasClamp                               PitchScaleBiasClamp;                                        // 0x0028   (0x0030)  
	FInputScaleBiasClamp                               YawScaleBiasClamp;                                          // 0x0058   (0x0030)  
	FRotator                                           MeshToComponent;                                            // 0x0088   (0x0018)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x00A0   (0x0008)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_RotationOffsetBlendSpace
/// Size: 0x00A8 (0x000070 - 0x000118)
struct FAnimNode_RotationOffsetBlendSpace : FAnimNode_BlendSpacePlayer
{ 
	FPoseLink                                          BasePose;                                                   // 0x0070   (0x0010)  
	int32_t                                            LODThreshold;                                               // 0x0080   (0x0004)  
	float                                              alpha;                                                      // 0x0084   (0x0004)  
	FInputScaleBias                                    AlphaScaleBias;                                             // 0x0088   (0x0008)  
	FInputAlphaBoolBlend                               AlphaBoolBlend;                                             // 0x0090   (0x0048)  
	FName                                              AlphaCurveName;                                             // 0x00D8   (0x0008)  
	FInputScaleBiasClamp                               AlphaScaleBiasClamp;                                        // 0x00E0   (0x0030)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0110   (0x0004)  MISSED
	EAnimAlphaInputType                                AlphaInputType;                                             // 0x0114   (0x0001)  
	bool                                               bAlphaBoolEnabled;                                          // 0x0115   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x0116   (0x0002)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_RotationOffsetBlendSpaceGraph
/// Size: 0x00A8 (0x000068 - 0x000110)
struct FAnimNode_RotationOffsetBlendSpaceGraph : FAnimNode_BlendSpaceGraphBase
{ 
	FPoseLink                                          BasePose;                                                   // 0x0068   (0x0010)  
	int32_t                                            LODThreshold;                                               // 0x0078   (0x0004)  
	float                                              alpha;                                                      // 0x007C   (0x0004)  
	FInputScaleBias                                    AlphaScaleBias;                                             // 0x0080   (0x0008)  
	FInputAlphaBoolBlend                               AlphaBoolBlend;                                             // 0x0088   (0x0048)  
	FName                                              AlphaCurveName;                                             // 0x00D0   (0x0008)  
	FInputScaleBiasClamp                               AlphaScaleBiasClamp;                                        // 0x00D8   (0x0030)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0108   (0x0004)  MISSED
	EAnimAlphaInputType                                AlphaInputType;                                             // 0x010C   (0x0001)  
	bool                                               bAlphaBoolEnabled;                                          // 0x010D   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x010E   (0x0002)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_SequenceEvaluatorBase
/// Size: 0x0008 (0x000038 - 0x000040)
struct FAnimNode_SequenceEvaluatorBase : FAnimNode_AssetPlayerBase
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0038   (0x0008)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_SequenceEvaluator
/// Size: 0x0000 (0x000040 - 0x000040)
struct FAnimNode_SequenceEvaluator : FAnimNode_SequenceEvaluatorBase
{ 
};

/// Struct /Script/AnimGraphRuntime.AnimNode_SequenceEvaluator_Standalone
/// Size: 0x0028 (0x000040 - 0x000068)
struct FAnimNode_SequenceEvaluator_Standalone : FAnimNode_SequenceEvaluatorBase
{ 
	FName                                              GroupName;                                                  // 0x0040   (0x0008)  
	TEnumAsByte<EAnimGroupRole>                        GroupRole;                                                  // 0x0048   (0x0001)  
	EAnimSyncMethod                                    Method;                                                     // 0x0049   (0x0001)  
	bool                                               bIgnoreForRelevancyTest;                                    // 0x004A   (0x0001)  
	unsigned char                                      UnknownData00_5[0x5];                                       // 0x004B   (0x0005)  MISSED
	UAnimSequenceBase*                                 Sequence;                                                   // 0x0050   (0x0008)  
	float                                              ExplicitTime;                                               // 0x0058   (0x0004)  
	bool                                               bShouldLoop;                                                // 0x005C   (0x0001)  
	bool                                               bTeleportToExplicitTime;                                    // 0x005D   (0x0001)  
	TEnumAsByte<ESequenceEvalReinit>                   ReinitializationBehavior;                                   // 0x005E   (0x0001)  
	unsigned char                                      UnknownData01_5[0x1];                                       // 0x005F   (0x0001)  MISSED
	float                                              StartPosition;                                              // 0x0060   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0064   (0x0004)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_Slot
/// Size: 0x0038 (0x000010 - 0x000048)
struct FAnimNode_Slot : FAnimNode_Base
{ 
	FPoseLink                                          Source;                                                     // 0x0010   (0x0010)  
	FName                                              SlotName;                                                   // 0x0020   (0x0008)  
	bool                                               bAlwaysUpdateSourcePose;                                    // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1F];                                      // 0x0029   (0x001F)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_Sync
/// Size: 0x0020 (0x000010 - 0x000030)
struct FAnimNode_Sync : FAnimNode_Base
{ 
	FPoseLink                                          Source;                                                     // 0x0010   (0x0010)  
	FName                                              GroupName;                                                  // 0x0020   (0x0008)  
	TEnumAsByte<EAnimGroupRole>                        GroupRole;                                                  // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0029   (0x0007)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_TwoWayBlend
/// Size: 0x00B8 (0x000010 - 0x0000C8)
struct FAnimNode_TwoWayBlend : FAnimNode_Base
{ 
	FPoseLink                                          A;                                                          // 0x0010   (0x0010)  
	FPoseLink                                          B;                                                          // 0x0020   (0x0010)  
	EAnimAlphaInputType                                AlphaInputType;                                             // 0x0030   (0x0001)  
	bool                                               bAlphaBoolEnabled : 1;                                      // 0x0031:0 (0x0001)  
	unsigned char                                      UnknownBit00 : 1;                                           // 0x0031:1 (0x0001)  MISSED
	unsigned char                                      UnknownBit01 : 1;                                           // 0x0031:2 (0x0001)  MISSED
	bool                                               bResetChildOnActivation : 1;                                // 0x0031:3 (0x0001)  
	unsigned char                                      UnknownData02_4[0x2];                                       // 0x0032   (0x0002)  MISSED
	float                                              alpha;                                                      // 0x0034   (0x0004)  
	FInputScaleBias                                    AlphaScaleBias;                                             // 0x0038   (0x0008)  
	FInputAlphaBoolBlend                               AlphaBoolBlend;                                             // 0x0040   (0x0048)  
	FName                                              AlphaCurveName;                                             // 0x0088   (0x0008)  
	FInputScaleBiasClamp                               AlphaScaleBiasClamp;                                        // 0x0090   (0x0030)  
	unsigned char                                      UnknownData03_6[0x8];                                       // 0x00C0   (0x0008)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimSequencerInstanceProxy
/// Size: 0x0460 (0x000880 - 0x000CE0)
struct FAnimSequencerInstanceProxy : FAnimInstanceProxy
{ 
	unsigned char                                      UnknownData00_1[0x460];                                     // 0x0880   (0x0460)  MISSED
};

/// Struct /Script/AnimGraphRuntime.BlendSpacePlayerReference
/// Size: 0x0000 (0x000010 - 0x000010)
struct FBlendSpacePlayerReference : FAnimNodeReference
{ 
};

/// Struct /Script/AnimGraphRuntime.AnimPhysConstraintSetup
/// Size: 0x0088 (0x000000 - 0x000088)
struct FAnimPhysConstraintSetup
{ 
	AnimPhysLinearConstraintType                       LinearXLimitType;                                           // 0x0000   (0x0001)  
	AnimPhysLinearConstraintType                       LinearYLimitType;                                           // 0x0001   (0x0001)  
	AnimPhysLinearConstraintType                       LinearZLimitType;                                           // 0x0002   (0x0001)  
	unsigned char                                      UnknownData00_5[0x5];                                       // 0x0003   (0x0005)  MISSED
	FVector                                            LinearAxesMin;                                              // 0x0008   (0x0018)  
	FVector                                            LinearAxesMax;                                              // 0x0020   (0x0018)  
	AnimPhysAngularConstraintType                      AngularConstraintType;                                      // 0x0038   (0x0001)  
	AnimPhysTwistAxis                                  TwistAxis;                                                  // 0x0039   (0x0001)  
	AnimPhysTwistAxis                                  AngularTargetAxis;                                          // 0x003A   (0x0001)  
	unsigned char                                      UnknownData01_5[0x1];                                       // 0x003B   (0x0001)  MISSED
	float                                              ConeAngle;                                                  // 0x003C   (0x0004)  
	FVector                                            AngularLimitsMin;                                           // 0x0040   (0x0018)  
	FVector                                            AngularLimitsMax;                                           // 0x0058   (0x0018)  
	FVector                                            AngularTarget;                                              // 0x0070   (0x0018)  
};

/// Struct /Script/AnimGraphRuntime.AnimPhysPlanarLimit
/// Size: 0x0070 (0x000000 - 0x000070)
struct FAnimPhysPlanarLimit
{ 
	FBoneReference                                     DrivingBone;                                                // 0x0000   (0x0010)  
	FTransform                                         PlaneTransform;                                             // 0x0010   (0x0060)  
};

/// Struct /Script/AnimGraphRuntime.AnimPhysSphericalLimit
/// Size: 0x0030 (0x000000 - 0x000030)
struct FAnimPhysSphericalLimit
{ 
	FBoneReference                                     DrivingBone;                                                // 0x0000   (0x0010)  
	FVector                                            SphereLocalOffset;                                          // 0x0010   (0x0018)  
	float                                              LimitRadius;                                                // 0x0028   (0x0004)  
	ESphericalLimitType                                LimitType;                                                  // 0x002C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x002D   (0x0003)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimPhysBodyDefinition
/// Size: 0x00D0 (0x000000 - 0x0000D0)
struct FAnimPhysBodyDefinition
{ 
	FBoneReference                                     BoundBone;                                                  // 0x0000   (0x0010)  
	FVector                                            BoxExtents;                                                 // 0x0010   (0x0018)  
	FVector                                            LocalJointOffset;                                           // 0x0028   (0x0018)  
	FAnimPhysConstraintSetup                           ConstraintSetup;                                            // 0x0040   (0x0088)  
	AnimPhysCollisionType                              CollisionType;                                              // 0x00C8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00C9   (0x0003)  MISSED
	float                                              SphereCollisionRadius;                                      // 0x00CC   (0x0004)  
};

/// Struct /Script/AnimGraphRuntime.AnimNode_AnimDynamics
/// Size: 0x0458 (0x0000C8 - 0x000520)
struct FAnimNode_AnimDynamics : FAnimNode_SkeletalControlBase
{ 
	float                                              LinearDampingOverride;                                      // 0x00C8   (0x0004)  
	float                                              AngularDampingOverride;                                     // 0x00CC   (0x0004)  
	unsigned char                                      UnknownData00_5[0xC0];                                      // 0x00D0   (0x00C0)  MISSED
	FBoneReference                                     RelativeSpaceBone;                                          // 0x0190   (0x0010)  
	FBoneReference                                     BoundBone;                                                  // 0x01A0   (0x0010)  
	FBoneReference                                     ChainEnd;                                                   // 0x01B0   (0x0010)  
	TArray<FAnimPhysBodyDefinition>                    PhysicsBodyDefinitions;                                     // 0x01C0   (0x0010)  
	float                                              GravityScale;                                               // 0x01D0   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x01D4   (0x0004)  MISSED
	FVector                                            GravityOverride;                                            // 0x01D8   (0x0018)  
	float                                              LinearSpringConstant;                                       // 0x01F0   (0x0004)  
	float                                              AngularSpringConstant;                                      // 0x01F4   (0x0004)  
	float                                              WindScale;                                                  // 0x01F8   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x01FC   (0x0004)  MISSED
	FVector                                            ComponentLinearAccScale;                                    // 0x0200   (0x0018)  
	FVector                                            ComponentLinearVelScale;                                    // 0x0218   (0x0018)  
	FVector                                            ComponentAppliedLinearAccClamp;                             // 0x0230   (0x0018)  
	float                                              AngularBiasOverride;                                        // 0x0248   (0x0004)  
	int32_t                                            NumSolverIterationsPreUpdate;                               // 0x024C   (0x0004)  
	int32_t                                            NumSolverIterationsPostUpdate;                              // 0x0250   (0x0004)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x0254   (0x0004)  MISSED
	TArray<FAnimPhysSphericalLimit>                    SphericalLimits;                                            // 0x0258   (0x0010)  
	FVector                                            ExternalForce;                                              // 0x0268   (0x0018)  
	TArray<FAnimPhysPlanarLimit>                       PlanarLimits;                                               // 0x0280   (0x0010)  
	AnimPhysSimSpaceType                               SimulationSpace;                                            // 0x0290   (0x0001)  
	unsigned char                                      UnknownData04_5[0x2];                                       // 0x0291   (0x0002)  MISSED
	bool                                               bUseSphericalLimits : 1;                                    // 0x0293:0 (0x0001)  
	bool                                               bUsePlanarLimit : 1;                                        // 0x0293:1 (0x0001)  
	bool                                               bDoUpdate : 1;                                              // 0x0293:2 (0x0001)  
	bool                                               bDoEval : 1;                                                // 0x0293:3 (0x0001)  
	bool                                               bOverrideLinearDamping : 1;                                 // 0x0293:4 (0x0001)  
	bool                                               bOverrideAngularBias : 1;                                   // 0x0293:5 (0x0001)  
	bool                                               bOverrideAngularDamping : 1;                                // 0x0293:6 (0x0001)  
	bool                                               bEnableWind : 1;                                            // 0x0293:7 (0x0001)  
	unsigned char                                      UnknownBit05 : 1;                                           // 0x0294:0 (0x0001)  MISSED
	bool                                               bUseGravityOverride : 1;                                    // 0x0294:1 (0x0001)  
	bool                                               bGravityOverrideInSimSpace : 1;                             // 0x0294:2 (0x0001)  
	bool                                               bLinearSpring : 1;                                          // 0x0294:3 (0x0001)  
	bool                                               bAngularSpring : 1;                                         // 0x0294:4 (0x0001)  
	bool                                               bChain : 1;                                                 // 0x0294:5 (0x0001)  
	unsigned char                                      UnknownData06_4[0xB];                                       // 0x0295   (0x000B)  MISSED
	FRotationRetargetingInfo                           RetargetingSettings;                                        // 0x02A0   (0x01A0)  
	unsigned char                                      UnknownData07_6[0xE0];                                      // 0x0440   (0x00E0)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AngularRangeLimit
/// Size: 0x0040 (0x000000 - 0x000040)
struct FAngularRangeLimit
{ 
	FVector                                            LimitMin;                                                   // 0x0000   (0x0018)  
	FVector                                            LimitMax;                                                   // 0x0018   (0x0018)  
	FBoneReference                                     bone;                                                       // 0x0030   (0x0010)  
};

/// Struct /Script/AnimGraphRuntime.AnimNode_ApplyLimits
/// Size: 0x0020 (0x0000C8 - 0x0000E8)
struct FAnimNode_ApplyLimits : FAnimNode_SkeletalControlBase
{ 
	TArray<FAngularRangeLimit>                         AngularRangeLimits;                                         // 0x00C8   (0x0010)  
	TArray<FVector>                                    AngularOffsets;                                             // 0x00D8   (0x0010)  
};

/// Struct /Script/AnimGraphRuntime.AnimNode_BoneDrivenController
/// Size: 0x0060 (0x0000C8 - 0x000128)
struct FAnimNode_BoneDrivenController : FAnimNode_SkeletalControlBase
{ 
	FBoneReference                                     SourceBone;                                                 // 0x00C8   (0x0010)  
	UCurveFloat*                                       DrivingCurve;                                               // 0x00D8   (0x0008)  
	float                                              Multiplier;                                                 // 0x00E0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00E4   (0x0004)  MISSED
	double                                             RangeMin;                                                   // 0x00E8   (0x0008)  
	double                                             RangeMax;                                                   // 0x00F0   (0x0008)  
	double                                             RemappedMin;                                                // 0x00F8   (0x0008)  
	double                                             RemappedMax;                                                // 0x0100   (0x0008)  
	FName                                              ParameterName;                                              // 0x0108   (0x0008)  
	FBoneReference                                     TargetBone;                                                 // 0x0110   (0x0010)  
	EDrivenDestinationMode                             DestinationMode;                                            // 0x0120   (0x0001)  
	EDrivenBoneModificationMode                        ModificationMode;                                           // 0x0121   (0x0001)  
	TEnumAsByte<EComponentType>                        SourceComponent;                                            // 0x0122   (0x0001)  
	bool                                               bUseRange : 1;                                              // 0x0123:0 (0x0001)  
	bool                                               bAffectTargetTranslationX : 1;                              // 0x0123:1 (0x0001)  
	bool                                               bAffectTargetTranslationY : 1;                              // 0x0123:2 (0x0001)  
	bool                                               bAffectTargetTranslationZ : 1;                              // 0x0123:3 (0x0001)  
	bool                                               bAffectTargetRotationX : 1;                                 // 0x0123:4 (0x0001)  
	bool                                               bAffectTargetRotationY : 1;                                 // 0x0123:5 (0x0001)  
	bool                                               bAffectTargetRotationZ : 1;                                 // 0x0123:6 (0x0001)  
	bool                                               bAffectTargetScaleX : 1;                                    // 0x0123:7 (0x0001)  
	bool                                               bAffectTargetScaleY : 1;                                    // 0x0124:0 (0x0001)  
	bool                                               bAffectTargetScaleZ : 1;                                    // 0x0124:1 (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0125   (0x0003)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_CCDIK
/// Size: 0x00F8 (0x0000C8 - 0x0001C0)
struct FAnimNode_CCDIK : FAnimNode_SkeletalControlBase
{ 
	FVector                                            EffectorLocation;                                           // 0x00C8   (0x0018)  
	TEnumAsByte<EBoneControlSpace>                     EffectorLocationSpace;                                      // 0x00E0   (0x0001)  
	unsigned char                                      UnknownData00_5[0xF];                                       // 0x00E1   (0x000F)  MISSED
	FBoneSocketTarget                                  EffectorTarget;                                             // 0x00F0   (0x0090)  
	FBoneReference                                     TipBone;                                                    // 0x0180   (0x0010)  
	FBoneReference                                     RootBone;                                                   // 0x0190   (0x0010)  
	float                                              Precision;                                                  // 0x01A0   (0x0004)  
	int32_t                                            MaxIterations;                                              // 0x01A4   (0x0004)  
	bool                                               bStartFromTail;                                             // 0x01A8   (0x0001)  
	bool                                               bEnableRotationLimit;                                       // 0x01A9   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x01AA   (0x0006)  MISSED
	TArray<float>                                      RotationLimitPerJoints;                                     // 0x01B0   (0x0010)  
};

/// Struct /Script/AnimGraphRuntime.Constraint
/// Size: 0x001C (0x000000 - 0x00001C)
struct FConstraint
{ 
	FBoneReference                                     TargetBone;                                                 // 0x0000   (0x0010)  
	EConstraintOffsetOption                            OffsetOption;                                               // 0x0010   (0x0001)  
	ETransformConstraintType                           TransformType;                                              // 0x0011   (0x0001)  
	FFilterOptionPerAxis                               PerAxis;                                                    // 0x0012   (0x0003)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0015   (0x0007)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_Constraint
/// Size: 0x0040 (0x0000C8 - 0x000108)
struct FAnimNode_Constraint : FAnimNode_SkeletalControlBase
{ 
	FBoneReference                                     BoneToModify;                                               // 0x00C8   (0x0010)  
	TArray<FConstraint>                                ConstraintSetup;                                            // 0x00D8   (0x0010)  
	TArray<float>                                      ConstraintWeights;                                          // 0x00E8   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x00F8   (0x0010)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_CopyBone
/// Size: 0x0028 (0x0000C8 - 0x0000F0)
struct FAnimNode_CopyBone : FAnimNode_SkeletalControlBase
{ 
	FBoneReference                                     SourceBone;                                                 // 0x00C8   (0x0010)  
	FBoneReference                                     TargetBone;                                                 // 0x00D8   (0x0010)  
	bool                                               bCopyTranslation;                                           // 0x00E8   (0x0001)  
	bool                                               bCopyRotation;                                              // 0x00E9   (0x0001)  
	bool                                               bCopyScale;                                                 // 0x00EA   (0x0001)  
	TEnumAsByte<EBoneControlSpace>                     ControlSpace;                                               // 0x00EB   (0x0001)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00EC   (0x0004)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_CopyBoneDelta
/// Size: 0x0030 (0x0000C8 - 0x0000F8)
struct FAnimNode_CopyBoneDelta : FAnimNode_SkeletalControlBase
{ 
	FBoneReference                                     SourceBone;                                                 // 0x00C8   (0x0010)  
	FBoneReference                                     TargetBone;                                                 // 0x00D8   (0x0010)  
	bool                                               bCopyTranslation;                                           // 0x00E8   (0x0001)  
	bool                                               bCopyRotation;                                              // 0x00E9   (0x0001)  
	bool                                               bCopyScale;                                                 // 0x00EA   (0x0001)  
	CopyBoneDeltaMode                                  CopyMode;                                                   // 0x00EB   (0x0001)  
	float                                              TranslationMultiplier;                                      // 0x00EC   (0x0004)  
	float                                              RotationMultiplier;                                         // 0x00F0   (0x0004)  
	float                                              ScaleMultiplier;                                            // 0x00F4   (0x0004)  
};

/// Struct /Script/AnimGraphRuntime.AnimNode_Fabrik
/// Size: 0x0128 (0x0000C8 - 0x0001F0)
struct FAnimNode_Fabrik : FAnimNode_SkeletalControlBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x00C8   (0x0008)  MISSED
	FTransform                                         EffectorTransform;                                          // 0x00D0   (0x0060)  
	FBoneSocketTarget                                  EffectorTarget;                                             // 0x0130   (0x0090)  
	FBoneReference                                     TipBone;                                                    // 0x01C0   (0x0010)  
	FBoneReference                                     RootBone;                                                   // 0x01D0   (0x0010)  
	float                                              Precision;                                                  // 0x01E0   (0x0004)  
	int32_t                                            MaxIterations;                                              // 0x01E4   (0x0004)  
	TEnumAsByte<EBoneControlSpace>                     EffectorTransformSpace;                                     // 0x01E8   (0x0001)  
	TEnumAsByte<EBoneRotationSource>                   EffectorRotationSource;                                     // 0x01E9   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x01EA   (0x0006)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_HandIKRetargeting
/// Size: 0x0058 (0x0000C8 - 0x000120)
struct FAnimNode_HandIKRetargeting : FAnimNode_SkeletalControlBase
{ 
	FBoneReference                                     RightHandFK;                                                // 0x00C8   (0x0010)  
	FBoneReference                                     LeftHandFK;                                                 // 0x00D8   (0x0010)  
	FBoneReference                                     RightHandIK;                                                // 0x00E8   (0x0010)  
	FBoneReference                                     LeftHandIK;                                                 // 0x00F8   (0x0010)  
	TArray<FBoneReference>                             IKBonesToMove;                                              // 0x0108   (0x0010)  
	float                                              HandFKWeight;                                               // 0x0118   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x011C   (0x0004)  MISSED
};

/// Struct /Script/AnimGraphRuntime.IKChainLink
/// Size: 0x0070 (0x000000 - 0x000070)
struct FIKChainLink
{ 
	unsigned char                                      UnknownData00_1[0x70];                                      // 0x0000   (0x0070)  MISSED
};

/// Struct /Script/AnimGraphRuntime.IKChain
/// Size: 0x0050 (0x000000 - 0x000050)
struct FIKChain
{ 
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x0000   (0x0050)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimLegIKDefinition
/// Size: 0x002C (0x000000 - 0x00002C)
struct FAnimLegIKDefinition
{ 
	FBoneReference                                     IKFootBone;                                                 // 0x0000   (0x0010)  
	FBoneReference                                     FKFootBone;                                                 // 0x0010   (0x0010)  
	int32_t                                            NumBonesInLimb;                                             // 0x0020   (0x0004)  
	float                                              MinRotationAngle;                                           // 0x0024   (0x0004)  
	TEnumAsByte<EAxis>                                 FootBoneForwardAxis;                                        // 0x0028   (0x0001)  
	TEnumAsByte<EAxis>                                 HingeRotationAxis;                                          // 0x0029   (0x0001)  
	bool                                               bEnableRotationLimit;                                       // 0x002A   (0x0001)  
	bool                                               bEnableKneeTwistCorrection;                                 // 0x002B   (0x0001)  
};

/// Struct /Script/AnimGraphRuntime.AnimLegIKData
/// Size: 0x00E0 (0x000000 - 0x0000E0)
struct FAnimLegIKData
{ 
	unsigned char                                      UnknownData00_1[0xE0];                                      // 0x0000   (0x00E0)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_LegIK
/// Size: 0x0030 (0x0000C8 - 0x0000F8)
struct FAnimNode_LegIK : FAnimNode_SkeletalControlBase
{ 
	float                                              ReachPrecision;                                             // 0x00C8   (0x0004)  
	int32_t                                            MaxIterations;                                              // 0x00CC   (0x0004)  
	TArray<FAnimLegIKDefinition>                       LegsDefinition;                                             // 0x00D0   (0x0010)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x00E0   (0x0018)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_LookAt
/// Size: 0x0188 (0x0000C8 - 0x000250)
struct FAnimNode_LookAt : FAnimNode_SkeletalControlBase
{ 
	FBoneReference                                     BoneToModify;                                               // 0x00C8   (0x0010)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x00D8   (0x0008)  MISSED
	FBoneSocketTarget                                  LookAtTarget;                                               // 0x00E0   (0x0090)  
	FVector                                            LookAtLocation;                                             // 0x0170   (0x0018)  
	FAxis                                              LookAt_Axis;                                                // 0x0188   (0x0020)  
	bool                                               bUseLookUpAxis;                                             // 0x01A8   (0x0001)  
	TEnumAsByte<EInterpolationBlend>                   InterpolationType;                                          // 0x01A9   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x01AA   (0x0006)  MISSED
	FAxis                                              LookUp_Axis;                                                // 0x01B0   (0x0020)  
	float                                              LookAtClamp;                                                // 0x01D0   (0x0004)  
	float                                              InterpolationTime;                                          // 0x01D4   (0x0004)  
	float                                              InterpolationTriggerThreashold;                             // 0x01D8   (0x0004)  
	unsigned char                                      UnknownData02_6[0x74];                                      // 0x01DC   (0x0074)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_ObserveBone
/// Size: 0x0060 (0x0000C8 - 0x000128)
struct FAnimNode_ObserveBone : FAnimNode_SkeletalControlBase
{ 
	FBoneReference                                     BoneToObserve;                                              // 0x00C8   (0x0010)  
	TEnumAsByte<EBoneControlSpace>                     DisplaySpace;                                               // 0x00D8   (0x0001)  
	bool                                               bRelativeToRefPose;                                         // 0x00D9   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x00DA   (0x0006)  MISSED
	FVector                                            Translation;                                                // 0x00E0   (0x0018)  
	FRotator                                           Rotation;                                                   // 0x00F8   (0x0018)  
	FVector                                            Scale;                                                      // 0x0110   (0x0018)  
};

/// Struct /Script/AnimGraphRuntime.AnimNode_ResetRoot
/// Size: 0x0010 (0x0000C8 - 0x0000D8)
struct FAnimNode_ResetRoot : FAnimNode_SkeletalControlBase
{ 
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x00C8   (0x0010)  MISSED
};

/// Struct /Script/AnimGraphRuntime.SimSpaceSettings
/// Size: 0x0060 (0x000000 - 0x000060)
struct FSimSpaceSettings
{ 
	float                                              WorldAlpha;                                                 // 0x0000   (0x0004)  
	float                                              VelocityScaleZ;                                             // 0x0004   (0x0004)  
	float                                              MaxLinearVelocity;                                          // 0x0008   (0x0004)  
	float                                              MaxAngularVelocity;                                         // 0x000C   (0x0004)  
	float                                              MaxLinearAcceleration;                                      // 0x0010   (0x0004)  
	float                                              MaxAngularAcceleration;                                     // 0x0014   (0x0004)  
	FVector                                            ExternalLinearDragV;                                        // 0x0018   (0x0018)  
	FVector                                            ExternalLinearVelocity;                                     // 0x0030   (0x0018)  
	FVector                                            ExternalAngularVelocity;                                    // 0x0048   (0x0018)  
};

/// Struct /Script/AnimGraphRuntime.AnimNode_RigidBody
/// Size: 0x08D8 (0x0000C8 - 0x0009A0)
struct FAnimNode_RigidBody : FAnimNode_SkeletalControlBase
{ 
	UPhysicsAsset*                                     OverridePhysicsAsset;                                       // 0x00C8   (0x0008)  
	unsigned char                                      UnknownData00_5[0x128];                                     // 0x00D0   (0x0128)  MISSED
	FVector                                            OverrideWorldGravity;                                       // 0x01F8   (0x0018)  
	FVector                                            ExternalForce;                                              // 0x0210   (0x0018)  
	FVector                                            ComponentLinearAccScale;                                    // 0x0228   (0x0018)  
	FVector                                            ComponentLinearVelScale;                                    // 0x0240   (0x0018)  
	FVector                                            ComponentAppliedLinearAccClamp;                             // 0x0258   (0x0018)  
	FSimSpaceSettings                                  SimSpaceSettings;                                           // 0x0270   (0x0060)  
	float                                              CachedBoundsScale;                                          // 0x02D0   (0x0004)  
	FBoneReference                                     BaseBoneRef;                                                // 0x02D4   (0x0010)  
	TEnumAsByte<ECollisionChannel>                     OverlapChannel;                                             // 0x02E4   (0x0001)  
	ESimulationSpace                                   SimulationSpace;                                            // 0x02E5   (0x0001)  
	bool                                               bForceDisableCollisionBetweenConstraintBodies;              // 0x02E6   (0x0001)  
	bool                                               bUseExternalClothCollision;                                 // 0x02E7   (0x0001)  
	unsigned char                                      UnknownData01_5[0x1];                                       // 0x02E8   (0x0001)  MISSED
	bool                                               bEnableWorldGeometry : 1;                                   // 0x02E9:0 (0x0001)  
	bool                                               bOverrideWorldGravity : 1;                                  // 0x02E9:1 (0x0001)  
	bool                                               bTransferBoneVelocities : 1;                                // 0x02E9:2 (0x0001)  
	bool                                               bFreezeIncomingPoseOnStart : 1;                             // 0x02E9:3 (0x0001)  
	bool                                               bClampLinearTranslationLimitToRefPose : 1;                  // 0x02E9:4 (0x0001)  
	unsigned char                                      UnknownData02_4[0x2];                                       // 0x02EA   (0x0002)  MISSED
	float                                              WorldSpaceMinimumScale;                                     // 0x02EC   (0x0004)  
	float                                              EvaluationResetTime;                                        // 0x02F0   (0x0004)  
	unsigned char                                      UnknownData03_5[0x1];                                       // 0x02F4   (0x0001)  MISSED
	ESimulationTiming                                  SimulationTiming;                                           // 0x02F5   (0x0001)  
	unsigned char                                      UnknownData04_6[0x6AA];                                     // 0x02F6   (0x06AA)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_ScaleChainLength
/// Size: 0x0078 (0x000010 - 0x000088)
struct FAnimNode_ScaleChainLength : FAnimNode_Base
{ 
	FPoseLink                                          InputPose;                                                  // 0x0010   (0x0010)  
	float                                              DefaultChainLength;                                         // 0x0020   (0x0004)  
	FBoneReference                                     ChainStartBone;                                             // 0x0024   (0x0010)  
	FBoneReference                                     ChainEndBone;                                               // 0x0034   (0x0010)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0044   (0x0004)  MISSED
	FVector                                            TargetLocation;                                             // 0x0048   (0x0018)  
	float                                              alpha;                                                      // 0x0060   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0064   (0x0004)  MISSED
	FInputScaleBias                                    AlphaScaleBias;                                             // 0x0068   (0x0008)  
	EScaleChainInitialLength                           ChainInitialLength;                                         // 0x0070   (0x0001)  
	unsigned char                                      UnknownData02_6[0x17];                                      // 0x0071   (0x0017)  MISSED
};

/// Struct /Script/AnimGraphRuntime.SplineIKCachedBoneData
/// Size: 0x0014 (0x000000 - 0x000014)
struct FSplineIKCachedBoneData
{ 
	FBoneReference                                     bone;                                                       // 0x0000   (0x0010)  
	int32_t                                            RefSkeletonIndex;                                           // 0x0010   (0x0004)  
};

/// Struct /Script/AnimGraphRuntime.AnimNode_SplineIK
/// Size: 0x01A8 (0x0000C8 - 0x000270)
struct FAnimNode_SplineIK : FAnimNode_SkeletalControlBase
{ 
	FBoneReference                                     StartBone;                                                  // 0x00C8   (0x0010)  
	FBoneReference                                     EndBone;                                                    // 0x00D8   (0x0010)  
	ESplineBoneAxis                                    BoneAxis;                                                   // 0x00E8   (0x0001)  
	bool                                               bAutoCalculateSpline;                                       // 0x00E9   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x00EA   (0x0002)  MISSED
	int32_t                                            PointCount;                                                 // 0x00EC   (0x0004)  
	TArray<FTransform>                                 ControlPoints;                                              // 0x00F0   (0x0010)  
	float                                              Roll;                                                       // 0x0100   (0x0004)  
	float                                              TwistStart;                                                 // 0x0104   (0x0004)  
	float                                              TwistEnd;                                                   // 0x0108   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x010C   (0x0004)  MISSED
	FAlphaBlend                                        TwistBlend;                                                 // 0x0110   (0x0030)  
	float                                              Stretch;                                                    // 0x0140   (0x0004)  
	float                                              Offset;                                                     // 0x0144   (0x0004)  
	unsigned char                                      UnknownData02_6[0x128];                                     // 0x0148   (0x0128)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_SpringBone
/// Size: 0x00A0 (0x0000C8 - 0x000168)
struct FAnimNode_SpringBone : FAnimNode_SkeletalControlBase
{ 
	FBoneReference                                     SpringBone;                                                 // 0x00C8   (0x0010)  
	double                                             MaxDisplacement;                                            // 0x00D8   (0x0008)  
	double                                             SpringStiffness;                                            // 0x00E0   (0x0008)  
	double                                             SpringDamping;                                              // 0x00E8   (0x0008)  
	double                                             ErrorResetThresh;                                           // 0x00F0   (0x0008)  
	unsigned char                                      UnknownData00_5[0x6C];                                      // 0x00F8   (0x006C)  MISSED
	bool                                               bLimitDisplacement : 1;                                     // 0x0164:0 (0x0001)  
	bool                                               bTranslateX : 1;                                            // 0x0164:1 (0x0001)  
	bool                                               bTranslateY : 1;                                            // 0x0164:2 (0x0001)  
	bool                                               bTranslateZ : 1;                                            // 0x0164:3 (0x0001)  
	bool                                               bRotateX : 1;                                               // 0x0164:4 (0x0001)  
	bool                                               bRotateY : 1;                                               // 0x0164:5 (0x0001)  
	bool                                               bRotateZ : 1;                                               // 0x0164:6 (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0165   (0x0003)  MISSED
};

/// Struct /Script/AnimGraphRuntime.RotationLimit
/// Size: 0x0030 (0x000000 - 0x000030)
struct FRotationLimit
{ 
	FVector                                            LimitMin;                                                   // 0x0000   (0x0018)  
	FVector                                            LimitMax;                                                   // 0x0018   (0x0018)  
};

/// Struct /Script/AnimGraphRuntime.AnimNode_Trail
/// Size: 0x01D8 (0x0000C8 - 0x0002A0)
struct FAnimNode_Trail : FAnimNode_SkeletalControlBase
{ 
	unsigned char                                      UnknownData00_2[0x68];                                      // 0x00C8   (0x0068)  MISSED
	FBoneReference                                     TrailBone;                                                  // 0x0130   (0x0010)  
	int32_t                                            ChainLength;                                                // 0x0140   (0x0004)  
	TEnumAsByte<EAxis>                                 ChainBoneAxis;                                              // 0x0144   (0x0001)  
	bool                                               bInvertChainBoneAxis : 1;                                   // 0x0145:0 (0x0001)  
	bool                                               bLimitStretch : 1;                                          // 0x0145:1 (0x0001)  
	bool                                               bLimitRotation : 1;                                         // 0x0145:2 (0x0001)  
	bool                                               bUsePlanarLimit : 1;                                        // 0x0145:3 (0x0001)  
	bool                                               bActorSpaceFakeVel : 1;                                     // 0x0145:4 (0x0001)  
	bool                                               bReorientParentToChild : 1;                                 // 0x0145:5 (0x0001)  
	unsigned char                                      UnknownData01_4[0x2];                                       // 0x0146   (0x0002)  MISSED
	float                                              MaxDeltaTime;                                               // 0x0148   (0x0004)  
	float                                              RelaxationSpeedScale;                                       // 0x014C   (0x0004)  
	FRuntimeFloatCurve                                 TrailRelaxationSpeed;                                       // 0x0150   (0x0088)  
	FInputScaleBiasClamp                               RelaxationSpeedScaleInputProcessor;                         // 0x01D8   (0x0030)  
	TArray<FRotationLimit>                             RotationLimits;                                             // 0x0208   (0x0010)  
	TArray<FVector>                                    RotationOffsets;                                            // 0x0218   (0x0010)  
	TArray<FAnimPhysPlanarLimit>                       PlanarLimits;                                               // 0x0228   (0x0010)  
	float                                              StretchLimit;                                               // 0x0238   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x023C   (0x0004)  MISSED
	FVector                                            FakeVelocity;                                               // 0x0240   (0x0018)  
	FBoneReference                                     BaseJoint;                                                  // 0x0258   (0x0010)  
	float                                              LastBoneRotationAnimAlphaBlend;                             // 0x0268   (0x0004)  
	unsigned char                                      UnknownData03_6[0x34];                                      // 0x026C   (0x0034)  MISSED
};

/// Struct /Script/AnimGraphRuntime.ReferenceBoneFrame
/// Size: 0x0030 (0x000000 - 0x000030)
struct FReferenceBoneFrame
{ 
	FBoneReference                                     bone;                                                       // 0x0000   (0x0010)  
	FAxis                                              Axis;                                                       // 0x0010   (0x0020)  
};

/// Struct /Script/AnimGraphRuntime.AnimNode_TwistCorrectiveNode
/// Size: 0x00A0 (0x0000C8 - 0x000168)
struct FAnimNode_TwistCorrectiveNode : FAnimNode_SkeletalControlBase
{ 
	FReferenceBoneFrame                                BaseFrame;                                                  // 0x00C8   (0x0030)  
	FReferenceBoneFrame                                TwistFrame;                                                 // 0x00F8   (0x0030)  
	FAxis                                              TwistPlaneNormalAxis;                                       // 0x0128   (0x0020)  
	float                                              RangeMax;                                                   // 0x0148   (0x0004)  
	float                                              RemappedMin;                                                // 0x014C   (0x0004)  
	float                                              RemappedMax;                                                // 0x0150   (0x0004)  
	FAnimCurveParam                                    Curve;                                                      // 0x0154   (0x000C)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0160   (0x0008)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_TwoBoneIK
/// Size: 0x01B8 (0x0000C8 - 0x000280)
struct FAnimNode_TwoBoneIK : FAnimNode_SkeletalControlBase
{ 
	FBoneReference                                     IKBone;                                                     // 0x00C8   (0x0010)  
	double                                             StartStretchRatio;                                          // 0x00D8   (0x0008)  
	double                                             MaxStretchScale;                                            // 0x00E0   (0x0008)  
	FVector                                            EffectorLocation;                                           // 0x00E8   (0x0018)  
	unsigned char                                      UnknownData00_5[0x10];                                      // 0x0100   (0x0010)  MISSED
	FBoneSocketTarget                                  EffectorTarget;                                             // 0x0110   (0x0090)  
	FVector                                            JointTargetLocation;                                        // 0x01A0   (0x0018)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x01B8   (0x0008)  MISSED
	FBoneSocketTarget                                  JointTarget;                                                // 0x01C0   (0x0090)  
	FAxis                                              TwistAxis;                                                  // 0x0250   (0x0020)  
	TEnumAsByte<EBoneControlSpace>                     EffectorLocationSpace;                                      // 0x0270   (0x0001)  
	TEnumAsByte<EBoneControlSpace>                     JointTargetLocationSpace;                                   // 0x0271   (0x0001)  
	bool                                               bAllowStretching : 1;                                       // 0x0272:0 (0x0001)  
	bool                                               bTakeRotationFromEffectorSpace : 1;                         // 0x0272:1 (0x0001)  
	bool                                               bMaintainEffectorRelRot : 1;                                // 0x0272:2 (0x0001)  
	bool                                               bAllowTwist : 1;                                            // 0x0272:3 (0x0001)  
	unsigned char                                      UnknownData02_6[0xD];                                       // 0x0273   (0x000D)  MISSED
};

/// Struct /Script/AnimGraphRuntime.IKFootPelvisPullDownSolver
/// Size: 0x0080 (0x000000 - 0x000080)
struct FIKFootPelvisPullDownSolver
{ 
	FVectorRK4SpringInterpolator                       PelvisAdjustmentInterp;                                     // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_5[0x58];                                      // 0x0008   (0x0058)  MISSED
	double                                             PelvisAdjustmentInterpAlpha;                                // 0x0060   (0x0008)  
	double                                             PelvisAdjustmentMaxDistance;                                // 0x0068   (0x0008)  
	double                                             PelvisAdjustmentErrorTolerance;                             // 0x0070   (0x0008)  
	int32_t                                            PelvisAdjustmentMaxIter;                                    // 0x0078   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x007C   (0x0004)  MISSED
};

/// Struct /Script/AnimGraphRuntime.WarpingVectorValue
/// Size: 0x0020 (0x000000 - 0x000020)
struct FWarpingVectorValue
{ 
	EWarpingVectorMode                                 Mode;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	FVector                                            Value;                                                      // 0x0008   (0x0018)  
};

/// Struct /Script/AnimGraphRuntime.LayeredBoneBlendReference
/// Size: 0x0000 (0x000010 - 0x000010)
struct FLayeredBoneBlendReference : FAnimNodeReference
{ 
};

/// Struct /Script/AnimGraphRuntime.LinkedAnimGraphReference
/// Size: 0x0000 (0x000010 - 0x000010)
struct FLinkedAnimGraphReference : FAnimNodeReference
{ 
};

/// Struct /Script/AnimGraphRuntime.RBFEntry
/// Size: 0x0010 (0x000000 - 0x000010)
struct FRBFEntry
{ 
	TArray<float>                                      Values;                                                     // 0x0000   (0x0010)  
};

/// Struct /Script/AnimGraphRuntime.RBFTarget
/// Size: 0x0090 (0x000010 - 0x0000A0)
struct FRBFTarget : FRBFEntry
{ 
	float                                              ScaleFactor;                                                // 0x0010   (0x0004)  
	bool                                               bApplyCustomCurve;                                          // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0015   (0x0003)  MISSED
	FRichCurve                                         CustomCurve;                                                // 0x0018   (0x0080)  
	ERBFDistanceMethod                                 DistanceMethod;                                             // 0x0098   (0x0001)  
	ERBFFunctionType                                   FunctionType;                                               // 0x0099   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x009A   (0x0006)  MISSED
};

/// Struct /Script/AnimGraphRuntime.SequenceEvaluatorReference
/// Size: 0x0000 (0x000010 - 0x000010)
struct FSequenceEvaluatorReference : FAnimNodeReference
{ 
};

/// Struct /Script/AnimGraphRuntime.SequencePlayerReference
/// Size: 0x0000 (0x000010 - 0x000010)
struct FSequencePlayerReference : FAnimNodeReference
{ 
};

/// Struct /Script/AnimGraphRuntime.SkeletalControlReference
/// Size: 0x0000 (0x000010 - 0x000010)
struct FSkeletalControlReference : FAnimNodeReference
{ 
};

/// Struct /Script/AnimGraphRuntime.AnimNode_StateResult
/// Size: 0x0000 (0x000020 - 0x000020)
struct FAnimNode_StateResult : FAnimNode_Root
{ 
};

/// Class /Script/AnimGraphRuntime.BlendSpaceLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UBlendSpaceLibrary : public UBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/AnimGraphRuntime.AnimationStateMachineLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UAnimationStateMachineLibrary : public UBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/AnimGraphRuntime.AnimExecutionContextLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UAnimExecutionContextLibrary : public UBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/AnimGraphRuntime.AnimNotify_PlayMontageNotify
/// Size: 0x0008 (0x000038 - 0x000040)
class UAnimNotify_PlayMontageNotify : public UAnimNotify : UAnimNotify
{ 
public:
	FName                                              NotifyName;                                                 // 0x0038   (0x0008)  
};

/// Class /Script/AnimGraphRuntime.AnimNotify_PlayMontageNotifyWindow
/// Size: 0x0008 (0x000030 - 0x000038)
class UAnimNotify_PlayMontageNotifyWindow : public UAnimNotifyState : UAnimNotifyState
{ 
public:
	FName                                              NotifyName;                                                 // 0x0030   (0x0008)  
};

/// Class /Script/AnimGraphRuntime.AnimSequencerInstance
/// Size: 0x0000 (0x000350 - 0x000350)
class UAnimSequencerInstance : public UAnimInstance : UAnimInstance
{ 
public:
};

/// Class /Script/AnimGraphRuntime.BlendSpacePlayerLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UBlendSpacePlayerLibrary : public UBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/AnimGraphRuntime.KismetAnimationLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UKismetAnimationLibrary : public UBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/AnimGraphRuntime.LayeredBoneBlendLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class ULayeredBoneBlendLibrary : public UBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/AnimGraphRuntime.LinkedAnimGraphLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class ULinkedAnimGraphLibrary : public UBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/AnimGraphRuntime.PlayMontageCallbackProxy
/// Size: 0x0080 (0x000028 - 0x0000A8)
class UPlayMontageCallbackProxy : public UObject : UObject
{ 
public:
	FMulticastInlineDelegate                           OnCompleted;                                                // 0x0028   (0x0010)  
	FMulticastInlineDelegate                           OnBlendOut;                                                 // 0x0038   (0x0010)  
	FMulticastInlineDelegate                           OnInterrupted;                                              // 0x0048   (0x0010)  
	FMulticastInlineDelegate                           OnNotifyBegin;                                              // 0x0058   (0x0010)  
	FMulticastInlineDelegate                           OnNotifyEnd;                                                // 0x0068   (0x0010)  
	unsigned char                                      UnknownData00_6[0x30];                                      // 0x0078   (0x0030)  MISSED


	/// Functions
	// Function /Script/AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyEndReceived
	void OnNotifyEndReceived(FName NotifyName, FBranchingPointNotifyPayload& BranchingPointNotifyPayload);                   // [0x37ce260] Final|Native|Protected|HasOutParms 
	// Function /Script/AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyBeginReceived
	void OnNotifyBeginReceived(FName NotifyName, FBranchingPointNotifyPayload& BranchingPointNotifyPayload);                 // [0x37ce150] Final|Native|Protected|HasOutParms 
	// Function /Script/AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageEnded
	void OnMontageEnded(UAnimMontage* Montage, bool bInterrupted);                                                           // [0x37ce060] Final|Native|Protected 
	// Function /Script/AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageBlendingOut
	void OnMontageBlendingOut(UAnimMontage* Montage, bool bInterrupted);                                                     // [0x37cdf60] Final|Native|Protected 
	// Function /Script/AnimGraphRuntime.PlayMontageCallbackProxy.CreateProxyObjectForPlayMontage
	UPlayMontageCallbackProxy* CreateProxyObjectForPlayMontage(USkeletalMeshComponent* InSkeletalMeshComponent, UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, FName StartingSection); // [0x37ca420] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/AnimGraphRuntime.SequenceEvaluatorLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class USequenceEvaluatorLibrary : public UBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/AnimGraphRuntime.SequencePlayerLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class USequencePlayerLibrary : public UBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/AnimGraphRuntime.SequencerAnimationSupport
/// Size: 0x0000 (0x000028 - 0x000028)
class USequencerAnimationSupport : public UInterface : UInterface
{ 
public:
};

/// Class /Script/AnimGraphRuntime.SkeletalControlLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class USkeletalControlLibrary : public UBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{ 
public:
};

/// Enum /Script/AnimGraphRuntime.EBoneModificationMode
/// Size: 0x04
enum EBoneModificationMode : uint8_t
{
	BMM_Ignore0                                                                      = 0,
	BMM_Replace1                                                                     = 1,
	BMM_Additive2                                                                    = 2,
	BMM_MAX3                                                                         = 3
};

/// Enum /Script/AnimGraphRuntime.ERefPoseType
/// Size: 0x03
enum ERefPoseType : uint8_t
{
	EIT_LocalSpace0                                                                  = 0,
	EIT_Additive1                                                                    = 1,
	EIT_MAX2                                                                         = 2
};

/// Enum /Script/AnimGraphRuntime.EEasingFuncType
/// Size: 0x16
enum EEasingFuncType : uint8_t
{
	EEasingFuncType__Linear0                                                         = 0,
	EEasingFuncType__Sinusoidal1                                                     = 1,
	EEasingFuncType__Cubic2                                                          = 2,
	EEasingFuncType__QuadraticInOut3                                                 = 3,
	EEasingFuncType__CubicInOut4                                                     = 4,
	EEasingFuncType__HermiteCubic5                                                   = 5,
	EEasingFuncType__QuarticInOut6                                                   = 6,
	EEasingFuncType__QuinticInOut7                                                   = 7,
	EEasingFuncType__CircularIn8                                                     = 8,
	EEasingFuncType__CircularOut9                                                    = 9,
	EEasingFuncType__CircularInOut10                                                 = 10,
	EEasingFuncType__ExpIn11                                                         = 11,
	EEasingFuncType__ExpOut12                                                        = 12,
	EEasingFuncType__ExpInOut13                                                      = 13,
	EEasingFuncType__CustomCurve14                                                   = 14,
	EEasingFuncType__EEasingFuncType_MAX15                                           = 15
};

/// Enum /Script/AnimGraphRuntime.ERotationComponent
/// Size: 0x07
enum ERotationComponent : uint8_t
{
	ERotationComponent__EulerX0                                                      = 0,
	ERotationComponent__EulerY1                                                      = 1,
	ERotationComponent__EulerZ2                                                      = 2,
	ERotationComponent__QuaternionAngle3                                             = 3,
	ERotationComponent__SwingAngle4                                                  = 4,
	ERotationComponent__TwistAngle5                                                  = 5,
	ERotationComponent__ERotationComponent_MAX6                                      = 6
};

/// Enum /Script/AnimGraphRuntime.EBlendListTransitionType
/// Size: 0x03
enum EBlendListTransitionType : uint8_t
{
	EBlendListTransitionType__StandardBlend0                                         = 0,
	EBlendListTransitionType__Inertialization1                                       = 1,
	EBlendListTransitionType__EBlendListTransitionType_MAX2                          = 2
};

/// Enum /Script/AnimGraphRuntime.EAnimFunctionCallSite
/// Size: 0x13
enum EAnimFunctionCallSite : uint8_t
{
	EAnimFunctionCallSite__OnInitialize0                                             = 0,
	EAnimFunctionCallSite__OnUpdate1                                                 = 1,
	EAnimFunctionCallSite__OnBecomeRelevant2                                         = 2,
	EAnimFunctionCallSite__OnEvaluate3                                               = 3,
	EAnimFunctionCallSite__OnInitializePostRecursion4                                = 4,
	EAnimFunctionCallSite__OnUpdatePostRecursion5                                    = 5,
	EAnimFunctionCallSite__OnBecomeRelevantPostRecursion6                            = 6,
	EAnimFunctionCallSite__OnEvaluatePostRecursion7                                  = 7,
	EAnimFunctionCallSite__OnStartedBlendingOut8                                     = 8,
	EAnimFunctionCallSite__OnStartedBlendingIn9                                      = 9,
	EAnimFunctionCallSite__OnFinishedBlendingOut10                                   = 10,
	EAnimFunctionCallSite__OnFinishedBlendingIn11                                    = 11,
	EAnimFunctionCallSite__EAnimFunctionCallSite_MAX12                               = 12
};

/// Enum /Script/AnimGraphRuntime.ELayeredBoneBlendMode
/// Size: 0x03
enum ELayeredBoneBlendMode : uint8_t
{
	ELayeredBoneBlendMode__BranchFilter0                                             = 0,
	ELayeredBoneBlendMode__BlendMask1                                                = 1,
	ELayeredBoneBlendMode__ELayeredBoneBlendMode_MAX2                                = 2
};

/// Enum /Script/AnimGraphRuntime.EModifyCurveApplyMode
/// Size: 0x06
enum EModifyCurveApplyMode : uint8_t
{
	EModifyCurveApplyMode__Add0                                                      = 0,
	EModifyCurveApplyMode__Scale1                                                    = 1,
	EModifyCurveApplyMode__Blend2                                                    = 2,
	EModifyCurveApplyMode__WeightedMovingAverage3                                    = 3,
	EModifyCurveApplyMode__RemapCurve4                                               = 4,
	EModifyCurveApplyMode__EModifyCurveApplyMode_MAX5                                = 5
};

/// Enum /Script/AnimGraphRuntime.EPoseDriverType
/// Size: 0x04
enum EPoseDriverType : uint8_t
{
	EPoseDriverType__SwingAndTwist0                                                  = 0,
	EPoseDriverType__SwingOnly1                                                      = 1,
	EPoseDriverType__Translation2                                                    = 2,
	EPoseDriverType__EPoseDriverType_MAX3                                            = 3
};

/// Enum /Script/AnimGraphRuntime.EPoseDriverSource
/// Size: 0x03
enum EPoseDriverSource : uint8_t
{
	EPoseDriverSource__Rotation0                                                     = 0,
	EPoseDriverSource__Translation1                                                  = 1,
	EPoseDriverSource__EPoseDriverSource_MAX2                                        = 2
};

/// Enum /Script/AnimGraphRuntime.EPoseDriverOutput
/// Size: 0x03
enum EPoseDriverOutput : uint8_t
{
	EPoseDriverOutput__DrivePoses0                                                   = 0,
	EPoseDriverOutput__DriveCurves1                                                  = 1,
	EPoseDriverOutput__EPoseDriverOutput_MAX2                                        = 2
};

/// Enum /Script/AnimGraphRuntime.ESnapshotSourceMode
/// Size: 0x03
enum ESnapshotSourceMode : uint8_t
{
	ESnapshotSourceMode__NamedSnapshot0                                              = 0,
	ESnapshotSourceMode__SnapshotPin1                                                = 1,
	ESnapshotSourceMode__ESnapshotSourceMode_MAX2                                    = 2
};

/// Enum /Script/AnimGraphRuntime.ESequenceEvalReinit
/// Size: 0x04
enum ESequenceEvalReinit : uint8_t
{
	ESequenceEvalReinit__NoReset0                                                    = 0,
	ESequenceEvalReinit__StartPosition1                                              = 1,
	ESequenceEvalReinit__ExplicitTime2                                               = 2,
	ESequenceEvalReinit__ESequenceEvalReinit_MAX3                                    = 3
};

/// Enum /Script/AnimGraphRuntime.ESwapRootBone
/// Size: 0x04
enum ESwapRootBone : uint8_t
{
	ESwapRootBone__SwapRootBone_Component0                                           = 0,
	ESwapRootBone__SwapRootBone_Actor1                                               = 1,
	ESwapRootBone__SwapRootBone_None2                                                = 2,
	ESwapRootBone__SwapRootBone_MAX3                                                 = 3
};

/// Enum /Script/AnimGraphRuntime.AnimPhysAngularConstraintType
/// Size: 0x03
enum AnimPhysAngularConstraintType : uint8_t
{
	AnimPhysAngularConstraintType__Angular0                                          = 0,
	AnimPhysAngularConstraintType__Cone1                                             = 1,
	AnimPhysAngularConstraintType__AnimPhysAngularConstraintType_MAX2                = 2
};

/// Enum /Script/AnimGraphRuntime.AnimPhysLinearConstraintType
/// Size: 0x03
enum AnimPhysLinearConstraintType : uint8_t
{
	AnimPhysLinearConstraintType__Free0                                              = 0,
	AnimPhysLinearConstraintType__Limited1                                           = 1,
	AnimPhysLinearConstraintType__AnimPhysLinearConstraintType_MAX2                  = 2
};

/// Enum /Script/AnimGraphRuntime.AnimPhysSimSpaceType
/// Size: 0x06
enum AnimPhysSimSpaceType : uint8_t
{
	AnimPhysSimSpaceType__Component0                                                 = 0,
	AnimPhysSimSpaceType__Actor1                                                     = 1,
	AnimPhysSimSpaceType__World2                                                     = 2,
	AnimPhysSimSpaceType__RootRelative3                                              = 3,
	AnimPhysSimSpaceType__BoneRelative4                                              = 4,
	AnimPhysSimSpaceType__AnimPhysSimSpaceType_MAX5                                  = 5
};

/// Enum /Script/AnimGraphRuntime.ESphericalLimitType
/// Size: 0x03
enum ESphericalLimitType : uint8_t
{
	ESphericalLimitType__Inner0                                                      = 0,
	ESphericalLimitType__Outer1                                                      = 1,
	ESphericalLimitType__ESphericalLimitType_MAX2                                    = 2
};

/// Enum /Script/AnimGraphRuntime.EDrivenBoneModificationMode
/// Size: 0x04
enum EDrivenBoneModificationMode : uint8_t
{
	EDrivenBoneModificationMode__AddToInput0                                         = 0,
	EDrivenBoneModificationMode__ReplaceComponent1                                   = 1,
	EDrivenBoneModificationMode__AddToRefPose2                                       = 2,
	EDrivenBoneModificationMode__EDrivenBoneModificationMode_MAX3                    = 3
};

/// Enum /Script/AnimGraphRuntime.EDrivenDestinationMode
/// Size: 0x04
enum EDrivenDestinationMode : uint8_t
{
	EDrivenDestinationMode__Bone0                                                    = 0,
	EDrivenDestinationMode__MorphTarget1                                             = 1,
	EDrivenDestinationMode__MaterialParameter2                                       = 2,
	EDrivenDestinationMode__EDrivenDestinationMode_MAX3                              = 3
};

/// Enum /Script/AnimGraphRuntime.EConstraintOffsetOption
/// Size: 0x03
enum EConstraintOffsetOption : uint8_t
{
	EConstraintOffsetOption__None0                                                   = 0,
	EConstraintOffsetOption__Offset_RefPose1                                         = 1,
	EConstraintOffsetOption__EConstraintOffsetOption_MAX2                            = 2
};

/// Enum /Script/AnimGraphRuntime.CopyBoneDeltaMode
/// Size: 0x03
enum CopyBoneDeltaMode : uint8_t
{
	CopyBoneDeltaMode__Accumulate0                                                   = 0,
	CopyBoneDeltaMode__Copy1                                                         = 1,
	CopyBoneDeltaMode__CopyBoneDeltaMode_MAX2                                        = 2
};

/// Enum /Script/AnimGraphRuntime.EInterpolationBlend
/// Size: 0x08
enum EInterpolationBlend : uint8_t
{
	EInterpolationBlend__Linear0                                                     = 0,
	EInterpolationBlend__Cubic1                                                      = 1,
	EInterpolationBlend__Sinusoidal2                                                 = 2,
	EInterpolationBlend__EaseInOutExponent23                                         = 3,
	EInterpolationBlend__EaseInOutExponent34                                         = 4,
	EInterpolationBlend__EaseInOutExponent45                                         = 5,
	EInterpolationBlend__EaseInOutExponent56                                         = 6,
	EInterpolationBlend__MAX7                                                        = 7
};

/// Enum /Script/AnimGraphRuntime.ESimulationSpace
/// Size: 0x04
enum ESimulationSpace : uint8_t
{
	ESimulationSpace__ComponentSpace0                                                = 0,
	ESimulationSpace__WorldSpace1                                                    = 1,
	ESimulationSpace__BaseBoneSpace2                                                 = 2,
	ESimulationSpace__ESimulationSpace_MAX3                                          = 3
};

/// Enum /Script/AnimGraphRuntime.ESimulationTiming
/// Size: 0x04
enum ESimulationTiming : uint8_t
{
	ESimulationTiming__Default0                                                      = 0,
	ESimulationTiming__Synchronous1                                                  = 1,
	ESimulationTiming__Deferred2                                                     = 2,
	ESimulationTiming__ESimulationTiming_MAX3                                        = 3
};

/// Enum /Script/AnimGraphRuntime.EScaleChainInitialLength
/// Size: 0x04
enum EScaleChainInitialLength : uint8_t
{
	EScaleChainInitialLength__FixedDefaultLengthValue0                               = 0,
	EScaleChainInitialLength__Distance1                                              = 1,
	EScaleChainInitialLength__ChainLength2                                           = 2,
	EScaleChainInitialLength__EScaleChainInitialLength_MAX3                          = 3
};

/// Enum /Script/AnimGraphRuntime.ESplineBoneAxis
/// Size: 0x05
enum ESplineBoneAxis : uint8_t
{
	ESplineBoneAxis__None0                                                           = 0,
	ESplineBoneAxis__X1                                                              = 1,
	ESplineBoneAxis__Y2                                                              = 2,
	ESplineBoneAxis__Z3                                                              = 3,
	ESplineBoneAxis__ESplineBoneAxis_MAX4                                            = 4
};

/// Enum /Script/AnimGraphRuntime.EWarpingEvaluationMode
/// Size: 0x03
enum EWarpingEvaluationMode : uint8_t
{
	EWarpingEvaluationMode__Manual0                                                  = 0,
	EWarpingEvaluationMode__Graph1                                                   = 1,
	EWarpingEvaluationMode__EWarpingEvaluationMode_MAX2                              = 2
};

/// Enum /Script/AnimGraphRuntime.EWarpingVectorMode
/// Size: 0x05
enum EWarpingVectorMode : uint8_t
{
	EWarpingVectorMode__ComponentSpaceVector0                                        = 0,
	EWarpingVectorMode__ActorSpaceVector1                                            = 1,
	EWarpingVectorMode__WorldSpaceVector2                                            = 2,
	EWarpingVectorMode__IKFootRootLocalSpaceVector3                                  = 3,
	EWarpingVectorMode__EWarpingVectorMode_MAX4                                      = 4
};

/// Enum /Script/AnimGraphRuntime.ERBFSolverType
/// Size: 0x03
enum ERBFSolverType : uint8_t
{
	ERBFSolverType__Additive0                                                        = 0,
	ERBFSolverType__Interpolative1                                                   = 1,
	ERBFSolverType__ERBFSolverType_MAX2                                              = 2
};

/// Enum /Script/AnimGraphRuntime.ERBFFunctionType
/// Size: 0x07
enum ERBFFunctionType : uint8_t
{
	ERBFFunctionType__Gaussian0                                                      = 0,
	ERBFFunctionType__Exponential1                                                   = 1,
	ERBFFunctionType__Linear2                                                        = 2,
	ERBFFunctionType__Cubic3                                                         = 3,
	ERBFFunctionType__Quintic4                                                       = 4,
	ERBFFunctionType__DefaultFunction5                                               = 5,
	ERBFFunctionType__ERBFFunctionType_MAX6                                          = 6
};

/// Enum /Script/AnimGraphRuntime.ERBFDistanceMethod
/// Size: 0x06
enum ERBFDistanceMethod : uint8_t
{
	ERBFDistanceMethod__Euclidean0                                                   = 0,
	ERBFDistanceMethod__Quaternion1                                                  = 1,
	ERBFDistanceMethod__SwingAngle2                                                  = 2,
	ERBFDistanceMethod__TwistAngle3                                                  = 3,
	ERBFDistanceMethod__DefaultMethod4                                               = 4,
	ERBFDistanceMethod__ERBFDistanceMethod_MAX5                                      = 5
};

/// Enum /Script/AnimGraphRuntime.ERBFNormalizeMethod
/// Size: 0x05
enum ERBFNormalizeMethod : uint8_t
{
	ERBFNormalizeMethod__OnlyNormalizeAboveOne0                                      = 0,
	ERBFNormalizeMethod__AlwaysNormalize1                                            = 1,
	ERBFNormalizeMethod__NormalizeWithinMedian2                                      = 2,
	ERBFNormalizeMethod__NoNormalization3                                            = 3,
	ERBFNormalizeMethod__ERBFNormalizeMethod_MAX4                                    = 4
};

