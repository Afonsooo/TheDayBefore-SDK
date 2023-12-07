
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package Animalia.

/// Struct /Game/Animalia/RedDeer/RedDeer_M/F_DeerProperties.F_DeerProperties
/// Size: 0x00E0 (0x000000 - 0x0000E0)
struct FF_DeerProperties
{ 
	TWeakObjectPtr<USkeletalMesh*>                     SkeletalMesh_5_78CE6758443DCDBA9923F1A4D68C3F04;            // 0x0000   (0x0030)  
	TWeakObjectPtr<UAnimMontage*>                      HeadAdditiveAnimMontage_15_991BBA68474BAB83EA28568715881BB7; // 0x0030   (0x0030)  
	TWeakObjectPtr<UAnimMontage*>                      ChestAdditiveAnimMontage_10_05F511E846E1D139E926A18DD9FC1976; // 0x0060   (0x0030)  
	TWeakObjectPtr<UAnimMontage*>                      PelvisAdditiveAnimMontage_13_EA748E0348E6D2F62ABFBC857398208F; // 0x0090   (0x0030)  
	double                                             AdditiveDamageAnimMontagePlayRate_4_8A4392374720BA638B799E96E30826E5; // 0x00C0   (0x0008)  
	FVector                                            Scale_18_136468D0498311BE1F3660BBEDC1DAA3;                  // 0x00C8   (0x0018)  
};

/// Struct /Game/Animalia/RedDeer/RedDeer_M/Blueprints/F_MontagePartName.F_MontagePartName
/// Size: 0x000C (0x000000 - 0x00000C)
struct FF_MontagePartName
{ 
	TEnumAsByte<E_AdditiveDamage>                      Part_3_3682AE404D0ECE59DDA1369A9AAB6EFF;                    // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	FName                                              MontageSectionName_5_232255B341850599421A93847AC9720A;      // 0x0004   (0x0008)  
};

/// Struct /Game/Animalia/RedDeer/RedDeer_M/Blueprints/Animation/AnimBP_DeerM.AnimBP_DeerM_C.AnimBlueprintGeneratedConstantData
/// Size: 0x018F (0x000001 - 0x000190)
struct FAnimBlueprintGeneratedConstantData : FAnimBlueprintConstantData
{ 
	unsigned char                                      UnknownData00_2[0x7];                                       // 0x0001   (0x0007)  MISSED
	TArray<float>                                      __ArrayProperty;                                            // 0x0008   (0x0010)  
	FName                                              __NameProperty;                                             // 0x0018   (0x0008)  
	int32_t                                            __IntProperty;                                              // 0x0020   (0x0004)  
	FName                                              __NameProperty;                                             // 0x0024   (0x0008)  
	int32_t                                            __IntProperty;                                              // 0x002C   (0x0004)  
	FName                                              __NameProperty;                                             // 0x0030   (0x0008)  
	int32_t                                            __IntProperty;                                              // 0x0038   (0x0004)  
	FName                                              __NameProperty;                                             // 0x003C   (0x0008)  
	int32_t                                            __IntProperty;                                              // 0x0044   (0x0004)  
	UBlendProfile*                                     __BlendProfile;                                             // 0x0048   (0x0008)  
	UCurveFloat*                                       __CurveFloat;                                               // 0x0050   (0x0008)  
	EAlphaBlendOption                                  __EnumProperty;                                             // 0x0058   (0x0001)  
	EBlendListTransitionType                           __EnumProperty;                                             // 0x0059   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x005A   (0x0006)  MISSED
	TArray<float>                                      __ArrayProperty;                                            // 0x0060   (0x0010)  
	FInputScaleBiasClampConstants                      __StructProperty;                                           // 0x0070   (0x002C)  
	FName                                              __NameProperty;                                             // 0x009C   (0x0008)  
	int32_t                                            __IntProperty;                                              // 0x00A4   (0x0004)  
	float                                              __FloatProperty;                                            // 0x00A8   (0x0004)  
	bool                                               __BoolProperty;                                             // 0x00AC   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x00AD   (0x0003)  MISSED
	float                                              __FloatProperty;                                            // 0x00B0   (0x0004)  
	bool                                               __BoolProperty;                                             // 0x00B4   (0x0001)  
	EAnimSyncMethod                                    __EnumProperty;                                             // 0x00B5   (0x0001)  
	TEnumAsByte<EAnimGroupRole>                        __ByteProperty;                                             // 0x00B6   (0x0001)  
	unsigned char                                      UnknownData03_5[0x1];                                       // 0x00B7   (0x0001)  MISSED
	FName                                              __NameProperty;                                             // 0x00B8   (0x0008)  
	int32_t                                            __IntProperty;                                              // 0x00C0   (0x0004)  
	FName                                              __NameProperty;                                             // 0x00C4   (0x0008)  
	FName                                              __NameProperty;                                             // 0x00CC   (0x0008)  
	unsigned char                                      UnknownData04_5[0x4];                                       // 0x00D4   (0x0004)  MISSED
	FAnimNodeFunctionRef                               __StructProperty;                                           // 0x00D8   (0x0020)  
	FAnimSubsystem_PropertyAccess                      AnimBlueprintExtension_PropertyAccess;                      // 0x00F8   (0x0080)  
	FAnimSubsystem_Base                                AnimBlueprintExtension_Base;                                // 0x0178   (0x0018)  
};

/// Struct /Game/Animalia/RedDeer/RedDeer_M/Blueprints/Animation/AnimBP_DeerM.AnimBP_DeerM_C.AnimBlueprintGeneratedMutableData
/// Size: 0x0013 (0x000001 - 0x000014)
struct FAnimBlueprintGeneratedMutableData : FAnimBlueprintMutableData
{ 
	bool                                               __BoolProperty;                                             // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0002   (0x0002)  MISSED
	int32_t                                            __IntProperty;                                              // 0x0004   (0x0004)  
	int32_t                                            __IntProperty;                                              // 0x0008   (0x0004)  
	float                                              __FloatProperty;                                            // 0x000C   (0x0004)  
	float                                              __FloatProperty;                                            // 0x0010   (0x0004)  
};

/// Class /Game/Animalia/RedDeer/RedDeer_M/Blueprints/Behaviour/BTT_RunFromDanger.BTT_RunFromDanger_C
/// Size: 0x0078 (0x0000A8 - 0x000120)
class UBTT_RunFromDanger_C : public UBTTask_BlueprintBase : UBTTask_BlueprintBase
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x00A8   (0x0008)  
	UAIMovementComponent_C*                            AIMC;                                                       // 0x00B0   (0x0008)  
	FBlackboardKeySelector                             RunAwayLocationKey;                                         // 0x00B8   (0x0028)  
	FBlackboardKeySelector                             RunAwayKey;                                                 // 0x00E0   (0x0028)  
	UFMODAudioComponent*                               Deer_Roar_Sound;                                            // 0x0108   (0x0008)  
	AAIController*                                     OwnerController;                                            // 0x0110   (0x0008)  
	ABP_DeerV2_C*                                      DeerV2;                                                     // 0x0118   (0x0008)  


	/// Functions
	// Function /Game/Animalia/RedDeer/RedDeer_M/Blueprints/Behaviour/BTT_RunFromDanger.BTT_RunFromDanger_C.ReceiveExecuteAI
	void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);                                            // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/Animalia/RedDeer/RedDeer_M/Blueprints/Behaviour/BTT_RunFromDanger.BTT_RunFromDanger_C.FinishRunning
	void FinishRunning();                                                                                                    // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Animalia/RedDeer/RedDeer_M/Blueprints/Behaviour/BTT_RunFromDanger.BTT_RunFromDanger_C.ReinitializePath
	void ReinitializePath(TEnumAsByte<E_DeerState> FromState);                                                               // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Animalia/RedDeer/RedDeer_M/Blueprints/Behaviour/BTT_RunFromDanger.BTT_RunFromDanger_C.ExecuteUbergraph_BTT_RunFromDanger
	void ExecuteUbergraph_BTT_RunFromDanger(int32_t EntryPoint);                                                             // [0x2407bf0] Final                
};

/// Class /Game/Animalia/RedDeer/RedDeer_M/Blueprints/Behaviour/BTT_Roam.BTT_Roam_C
/// Size: 0x0061 (0x0000A8 - 0x000109)
class UBTT_Roam_C : public UBTTask_BlueprintBase : UBTTask_BlueprintBase
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x00A8   (0x0008)  
	UAIMovementComponent_C*                            AIMC;                                                       // 0x00B0   (0x0008)  
	FBlackboardKeySelector                             RoamingKey;                                                 // 0x00B8   (0x0028)  
	AAIController*                                     OwnerController;                                            // 0x00E0   (0x0008)  
	FVector                                            Random_Location;                                            // 0x00E8   (0x0018)  
	ABP_DeerV2_C*                                      DeerV2;                                                     // 0x0100   (0x0008)  
	EMovementType                                      CPPMovementType;                                            // 0x0108   (0x0001)  


	/// Functions
	// Function /Game/Animalia/RedDeer/RedDeer_M/Blueprints/Behaviour/BTT_Roam.BTT_Roam_C.OnGetScared
	void OnGetScared(TEnumAsByte<E_DeerState> FromState);                                                                    // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Animalia/RedDeer/RedDeer_M/Blueprints/Behaviour/BTT_Roam.BTT_Roam_C.FinishRunning
	void FinishRunning();                                                                                                    // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Animalia/RedDeer/RedDeer_M/Blueprints/Behaviour/BTT_Roam.BTT_Roam_C.ReceiveExecuteAI
	void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);                                            // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/Animalia/RedDeer/RedDeer_M/Blueprints/Behaviour/BTT_Roam.BTT_Roam_C.ExecuteUbergraph_BTT_Roam
	void ExecuteUbergraph_BTT_Roam(int32_t EntryPoint);                                                                      // [0x2407bf0] Final                
};

/// Class /Game/Animalia/RedDeer/RedDeer_M/Blueprints/Behaviour/BTT_ReturnHome.BTT_ReturnHome_C
/// Size: 0x004C (0x0000A8 - 0x0000F4)
class UBTT_ReturnHome_C : public UBTTask_BlueprintBase : UBTTask_BlueprintBase
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x00A8   (0x0008)  
	AAIController*                                     OwnerController;                                            // 0x00B0   (0x0008)  
	ABP_DeerV2_C*                                      DeerV2;                                                     // 0x00B8   (0x0008)  
	UAIMovementComponent_C*                            AIMC;                                                       // 0x00C0   (0x0008)  
	FBlackboardKeySelector                             HomeLocationKey;                                            // 0x00C8   (0x0028)  
	float                                              Radius;                                                     // 0x00F0   (0x0004)  


	/// Functions
	// Function /Game/Animalia/RedDeer/RedDeer_M/Blueprints/Behaviour/BTT_ReturnHome.BTT_ReturnHome_C.FinishRunning
	void FinishRunning();                                                                                                    // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Animalia/RedDeer/RedDeer_M/Blueprints/Behaviour/BTT_ReturnHome.BTT_ReturnHome_C.OnGetScared
	void OnGetScared(TEnumAsByte<E_DeerState> FromState);                                                                    // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Animalia/RedDeer/RedDeer_M/Blueprints/Behaviour/BTT_ReturnHome.BTT_ReturnHome_C.ReceiveExecuteAI
	void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);                                            // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/Animalia/RedDeer/RedDeer_M/Blueprints/Behaviour/BTT_ReturnHome.BTT_ReturnHome_C.ExecuteUbergraph_BTT_ReturnHome
	void ExecuteUbergraph_BTT_ReturnHome(int32_t EntryPoint);                                                                // [0x2407bf0] Final                
};

/// Class /Game/Animalia/RedDeer/RedDeer_M/Blueprints/Behaviour/BTT_RandomDeerBehaviour.BTT_RandomDeerBehaviour_C
/// Size: 0x0010 (0x0000A8 - 0x0000B8)
class UBTT_RandomDeerBehaviour_C : public UBTTask_BlueprintBase : UBTTask_BlueprintBase
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x00A8   (0x0008)  
	ABP_DeerV2_C*                                      DeerV2;                                                     // 0x00B0   (0x0008)  


	/// Functions
	// Function /Game/Animalia/RedDeer/RedDeer_M/Blueprints/Behaviour/BTT_RandomDeerBehaviour.BTT_RandomDeerBehaviour_C.BehaviourFinished
	void BehaviourFinished(TEnumAsByte<E_DeerState> FromState);                                                              // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animalia/RedDeer/RedDeer_M/Blueprints/Behaviour/BTT_RandomDeerBehaviour.BTT_RandomDeerBehaviour_C.ReceiveExecuteAI
	void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);                                            // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/Animalia/RedDeer/RedDeer_M/Blueprints/Behaviour/BTT_RandomDeerBehaviour.BTT_RandomDeerBehaviour_C.ReceiveAbort
	void ReceiveAbort(AActor* OwnerActor);                                                                                   // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/Animalia/RedDeer/RedDeer_M/Blueprints/Behaviour/BTT_RandomDeerBehaviour.BTT_RandomDeerBehaviour_C.ExecuteUbergraph_BTT_RandomDeerBehaviour
	void ExecuteUbergraph_BTT_RandomDeerBehaviour(int32_t EntryPoint);                                                       // [0x2407bf0] Final                
};

/// Class /Game/Animalia/RedDeer/RedDeer_M/Blueprints/Animation/AnimBP_DeerM.AnimBP_DeerM_C
/// Size: 0x1710 (0x000350 - 0x001A60)
class UAnimBP_DeerM_C : public UAnimInstance : UAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0350   (0x0008)  
	FAnimBlueprintGeneratedMutableData                 __AnimBlueprintMutables;                                    // 0x0358   (0x0014)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x036C   (0x0004)  MISSED
	FAnimSubsystemInstance                             AnimBlueprintExtension_PropertyAccess;                      // 0x0370   (0x0008)  
	FAnimSubsystemInstance                             AnimBlueprintExtension_Base;                                // 0x0378   (0x0008)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x0380   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x03A8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x03D0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x03F8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x0420   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x0448   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x0470   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x0498   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x04C0   (0x0028)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x04E8   (0x0048)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x0530   (0x0048)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x0578   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x05C0   (0x0020)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x05E0   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x0628   (0x0020)  
	FAnimNode_BlendListByInt                           AnimGraphNode_BlendListByInt;                               // 0x0648   (0x0048)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x0690   (0x0048)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x06D8   (0x0048)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x0720   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x0768   (0x0020)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x0788   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x07D0   (0x0020)  
	FAnimNode_BlendListByInt                           AnimGraphNode_BlendListByInt;                               // 0x07F0   (0x0048)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x0838   (0x0048)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x0880   (0x0048)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x08C8   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x0910   (0x0020)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x0930   (0x0070)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x09A0   (0x0020)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x09C0   (0x00C8)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x0A88   (0x0020)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0x0AA8   (0x0048)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0x0AF0   (0x0048)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0x0B38   (0x0048)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0x0B80   (0x0048)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0BC8   (0x0008)  MISSED
	FAnimNode_LookAt                                   AnimGraphNode_LookAt;                                       // 0x0BD0   (0x0250)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0x0E20   (0x0020)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x0E40   (0x0128)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x0F68   (0x0128)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x1090   (0x0128)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x11B8   (0x0128)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x12E0   (0x0128)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace;                        // 0x1408   (0x0020)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0x1428   (0x0020)  
	unsigned char                                      UnknownData02_5[0x8];                                       // 0x1448   (0x0008)  MISSED
	FAnimNode_LookAt                                   AnimGraphNode_LookAt;                                       // 0x1450   (0x0250)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace;                        // 0x16A0   (0x0020)  
	TEnumAsByte<E_DeerState>                           K2Node_PropertyAccess;                                      // 0x16C0   (0x0001)  
	TEnumAsByte<E_DeerState>                           K2Node_PropertyAccess;                                      // 0x16C1   (0x0001)  
	TEnumAsByte<E_DeerState>                           K2Node_PropertyAccess;                                      // 0x16C2   (0x0001)  
	TEnumAsByte<E_DeerState>                           K2Node_PropertyAccess;                                      // 0x16C3   (0x0001)  
	TEnumAsByte<E_DeerState>                           K2Node_PropertyAccess;                                      // 0x16C4   (0x0001)  
	TEnumAsByte<E_DeerState>                           K2Node_PropertyAccess;                                      // 0x16C5   (0x0001)  
	TEnumAsByte<E_DeerState>                           K2Node_PropertyAccess;                                      // 0x16C6   (0x0001)  
	unsigned char                                      UnknownData03_5[0x1];                                       // 0x16C7   (0x0001)  MISSED
	double                                             K2Node_PropertyAccess;                                      // 0x16C8   (0x0008)  
	float                                              K2Node_PropertyAccess;                                      // 0x16D0   (0x0004)  
	unsigned char                                      UnknownData04_5[0x4];                                       // 0x16D4   (0x0004)  MISSED
	double                                             SurfaceTypeParam;                                           // 0x16D8   (0x0008)  
	int32_t                                            RandomRestIdle;                                             // 0x16E0   (0x0004)  
	int32_t                                            RandomEatingIdle;                                           // 0x16E4   (0x0004)  
	bool                                               RandomDeath;                                                // 0x16E8   (0x0001)  
	unsigned char                                      UnknownData05_5[0x7];                                       // 0x16E9   (0x0007)  MISSED
	UAIMovementComponent_C*                            AIMC;                                                       // 0x16F0   (0x0008)  
	double                                             VelocityValue;                                              // 0x16F8   (0x0008)  
	double                                             Interp;                                                     // 0x1700   (0x0008)  
	double                                             Lean;                                                       // 0x1708   (0x0008)  
	double                                             Target;                                                     // 0x1710   (0x0008)  
	FRotator                                           CharacterRotation;                                          // 0x1718   (0x0018)  
	FRotator                                           CharacterRotationLastFrame;                                 // 0x1730   (0x0018)  
	double                                             DeerLookingAlpha;                                           // 0x1748   (0x0008)  
	ABP_DeerV2_C*                                      DeerV2;                                                     // 0x1750   (0x0008)  
	bool                                               bIsFalling;                                                 // 0x1758   (0x0001)  
	unsigned char                                      UnknownData06_5[0x7];                                       // 0x1759   (0x0007)  MISSED
	FHitResult                                         CenterBodyTrace;                                            // 0x1760   (0x00E8)  
	FHitResult                                         FrontBodyTrace;                                             // 0x1848   (0x00E8)  
	FHitResult                                         BackBodyTraceHit;                                           // 0x1930   (0x00E8)  
	float                                              CapsuleRadius;                                              // 0x1A18   (0x0004)  
	float                                              CapsuleHalfHeight;                                          // 0x1A1C   (0x0004)  
	double                                             RootCorrection;                                             // 0x1A20   (0x0008)  
	double                                             BodyAngle;                                                  // 0x1A28   (0x0008)  
	bool                                               bShowTraces;                                                // 0x1A30   (0x0001)  
	unsigned char                                      UnknownData07_5[0x7];                                       // 0x1A31   (0x0007)  MISSED
	double                                             BackCenterDelta;                                            // 0x1A38   (0x0008)  
	FVector                                            LookAtLocation;                                             // 0x1A40   (0x0018)  
	float                                              LookAtAlpha;                                                // 0x1A58   (0x0004)  
	float                                              BodyToFloorTickTime;                                        // 0x1A5C   (0x0004)  


	/// Functions
	// Function /Game/Animalia/RedDeer/RedDeer_M/Blueprints/Animation/AnimBP_DeerM.AnimBP_DeerM_C.AnimGraph
	void AnimGraph(FPoseLink& AnimGraph);                                                                                    // [0x2407bf0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animalia/RedDeer/RedDeer_M/Blueprints/Animation/AnimBP_DeerM.AnimBP_DeerM_C.TimerFuncBodyToFloor
	void TimerFuncBodyToFloor();                                                                                             // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animalia/RedDeer/RedDeer_M/Blueprints/Animation/AnimBP_DeerM.AnimBP_DeerM_C.CalculateBodyToFloor
	void CalculateBodyToFloor();                                                                                             // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animalia/RedDeer/RedDeer_M/Blueprints/Animation/AnimBP_DeerM.AnimBP_DeerM_C.CalculateCenterBodyTrace
	bool CalculateCenterBodyTrace(FHitResult& OutHit);                                                                       // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animalia/RedDeer/RedDeer_M/Blueprints/Animation/AnimBP_DeerM.AnimBP_DeerM_C.CalculateFrontBodyTrace
	bool CalculateFrontBodyTrace(FHitResult& OutHit);                                                                        // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animalia/RedDeer/RedDeer_M/Blueprints/Animation/AnimBP_DeerM.AnimBP_DeerM_C.CalculateBackBodyTrace
	bool CalculateBackBodyTrace(FHitResult& OutHit);                                                                         // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animalia/RedDeer/RedDeer_M/Blueprints/Animation/AnimBP_DeerM.AnimBP_DeerM_C.CalculateLeaning
	void CalculateLeaning(double DeltaTime);                                                                                 // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animalia/RedDeer/RedDeer_M/Blueprints/Animation/AnimBP_DeerM.AnimBP_DeerM_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_DeerM_AnimGraphNode_TransitionResult_9FD6F1EC44F74430BE0C82B87DE9F2C5
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_DeerM_AnimGraphNode_TransitionResult_9FD6F1EC44F74430BE0C82B87DE9F2C5(); // [0x2407bf0] BlueprintEvent       
	// Function /Game/Animalia/RedDeer/RedDeer_M/Blueprints/Animation/AnimBP_DeerM.AnimBP_DeerM_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_DeerM_AnimGraphNode_TransitionResult_A292EDEE452DC5A5DB9996BAE94B70C3
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_DeerM_AnimGraphNode_TransitionResult_A292EDEE452DC5A5DB9996BAE94B70C3(); // [0x2407bf0] BlueprintEvent       
	// Function /Game/Animalia/RedDeer/RedDeer_M/Blueprints/Animation/AnimBP_DeerM.AnimBP_DeerM_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_DeerM_AnimGraphNode_LookAt_562E2CA640B85298031A5DB19DDBCCE9
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_DeerM_AnimGraphNode_LookAt_562E2CA640B85298031A5DB19DDBCCE9();   // [0x2407bf0] BlueprintEvent       
	// Function /Game/Animalia/RedDeer/RedDeer_M/Blueprints/Animation/AnimBP_DeerM.AnimBP_DeerM_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_DeerM_AnimGraphNode_ModifyBone_E31CC5FA44BE4AF717302A820D0855E3
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_DeerM_AnimGraphNode_ModifyBone_E31CC5FA44BE4AF717302A820D0855E3(); // [0x2407bf0] BlueprintEvent       
	// Function /Game/Animalia/RedDeer/RedDeer_M/Blueprints/Animation/AnimBP_DeerM.AnimBP_DeerM_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_DeerM_AnimGraphNode_LookAt_300612154DB615B1C4413BB56F05FBD7
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_DeerM_AnimGraphNode_LookAt_300612154DB615B1C4413BB56F05FBD7();   // [0x2407bf0] BlueprintEvent       
	// Function /Game/Animalia/RedDeer/RedDeer_M/Blueprints/Animation/AnimBP_DeerM.AnimBP_DeerM_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_DeerM_AnimGraphNode_TransitionResult_06E58D25418C7E0C029BC798DD4CA000
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_DeerM_AnimGraphNode_TransitionResult_06E58D25418C7E0C029BC798DD4CA000(); // [0x2407bf0] BlueprintEvent       
	// Function /Game/Animalia/RedDeer/RedDeer_M/Blueprints/Animation/AnimBP_DeerM.AnimBP_DeerM_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_DeerM_AnimGraphNode_TransitionResult_F02B2EE54311C2DC6C454D97C2962E12
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_DeerM_AnimGraphNode_TransitionResult_F02B2EE54311C2DC6C454D97C2962E12(); // [0x2407bf0] BlueprintEvent       
	// Function /Game/Animalia/RedDeer/RedDeer_M/Blueprints/Animation/AnimBP_DeerM.AnimBP_DeerM_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_DeerM_AnimGraphNode_TransitionResult_27772173443043D8637CCCBE92838DBB
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_DeerM_AnimGraphNode_TransitionResult_27772173443043D8637CCCBE92838DBB(); // [0x2407bf0] BlueprintEvent       
	// Function /Game/Animalia/RedDeer/RedDeer_M/Blueprints/Animation/AnimBP_DeerM.AnimBP_DeerM_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_DeerM_AnimGraphNode_TransitionResult_40C2E67E4EF8B5D98E56C88E79988B61
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_DeerM_AnimGraphNode_TransitionResult_40C2E67E4EF8B5D98E56C88E79988B61(); // [0x2407bf0] BlueprintEvent       
	// Function /Game/Animalia/RedDeer/RedDeer_M/Blueprints/Animation/AnimBP_DeerM.AnimBP_DeerM_C.AnimNotify_deer_walk
	void AnimNotify_deer_walk();                                                                                             // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Animalia/RedDeer/RedDeer_M/Blueprints/Animation/AnimBP_DeerM.AnimBP_DeerM_C.AnimNotify_deer_run
	void AnimNotify_deer_run();                                                                                              // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Animalia/RedDeer/RedDeer_M/Blueprints/Animation/AnimBP_DeerM.AnimBP_DeerM_C.AnimNotify_EnteredIdle
	void AnimNotify_EnteredIdle();                                                                                           // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Animalia/RedDeer/RedDeer_M/Blueprints/Animation/AnimBP_DeerM.AnimBP_DeerM_C.BlueprintUpdateAnimation
	void BlueprintUpdateAnimation(float DeltaTimeX);                                                                         // [0x2407bf0] Event|Public|BlueprintEvent 
	// Function /Game/Animalia/RedDeer/RedDeer_M/Blueprints/Animation/AnimBP_DeerM.AnimBP_DeerM_C.BlueprintInitializeAnimation
	void BlueprintInitializeAnimation();                                                                                     // [0x2407bf0] Event|Public|BlueprintEvent 
	// Function /Game/Animalia/RedDeer/RedDeer_M/Blueprints/Animation/AnimBP_DeerM.AnimBP_DeerM_C.AnimNotify_EnteringResting
	void AnimNotify_EnteringResting();                                                                                       // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Animalia/RedDeer/RedDeer_M/Blueprints/Animation/AnimBP_DeerM.AnimBP_DeerM_C.AnimNotify_EnteringEating
	void AnimNotify_EnteringEating();                                                                                        // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Animalia/RedDeer/RedDeer_M/Blueprints/Animation/AnimBP_DeerM.AnimBP_DeerM_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_DeerM_AnimGraphNode_TransitionResult_8912BD004D85E56271E4979292C683B0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_DeerM_AnimGraphNode_TransitionResult_8912BD004D85E56271E4979292C683B0(); // [0x2407bf0] BlueprintEvent       
	// Function /Game/Animalia/RedDeer/RedDeer_M/Blueprints/Animation/AnimBP_DeerM.AnimBP_DeerM_C.ExecuteUbergraph_AnimBP_DeerM
	void ExecuteUbergraph_AnimBP_DeerM(int32_t EntryPoint);                                                                  // [0x2407bf0] Final|HasDefaults    
};

/// Class /Game/Animalia/RedDeer/RedDeer_M/Blueprints/AIC_Deer.AIC_Deer_C
/// Size: 0x0090 (0x0003B8 - 0x000448)
class AAIC_Deer_C : public AAIController : AAIController
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x03B8   (0x0008)  
	UAIPerceptionComponent*                            AIPerception;                                               // 0x03C0   (0x0008)  
	UPawnSensingComponent*                             PawnSensing;                                                // 0x03C8   (0x0008)  
	AActor*                                            StartSensedActor;                                           // 0x03D0   (0x0008)  
	FName                                              RunAwayKey;                                                 // 0x03D8   (0x0008)  
	FName                                              RunAwayLocationKey;                                         // 0x03E0   (0x0008)  
	bool                                               Waiting;                                                    // 0x03E8   (0x0001)  
	bool                                               ActivatedAI;                                                // 0x03E9   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x03EA   (0x0006)  MISSED
	FTimerHandle                                       SenseLimitTimer;                                            // 0x03F0   (0x0008)  
	bool                                               SensesAreBlocked;                                           // 0x03F8   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x03F9   (0x0007)  MISSED
	ABP_DeerV2_C*                                      DeerV2;                                                     // 0x0400   (0x0008)  
	FName                                              HomeLocationKey;                                            // 0x0408   (0x0008)  
	bool                                               DisabledAI;                                                 // 0x0410   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0411   (0x0007)  MISSED
	FTimerHandle                                       ClearLookAtActorTimer;                                      // 0x0418   (0x0008)  
	double                                             AllSoundsScareDistance;                                     // 0x0420   (0x0008)  
	double                                             TrueHearDistance;                                           // 0x0428   (0x0008)  
	bool                                               bFearZombie;                                                // 0x0430   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0431   (0x0003)  MISSED
	float                                              Run_Away_Radius_After_Distance;                             // 0x0434   (0x0004)  
	bool                                               bIsAnyPlayerNear;                                           // 0x0438   (0x0001)  
	unsigned char                                      UnknownData04_5[0x7];                                       // 0x0439   (0x0007)  MISSED
	FTimerHandle                                       PlayerIsNearTimer;                                          // 0x0440   (0x0008)  


	/// Functions
	// Function /Game/Animalia/RedDeer/RedDeer_M/Blueprints/AIC_Deer.AIC_Deer_C.SetNoPlayersNear
	void SetNoPlayersNear();                                                                                                 // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animalia/RedDeer/RedDeer_M/Blueprints/AIC_Deer.AIC_Deer_C.OptimizationAdjustTicks
	void OptimizationAdjustTicks(bool IsPlayerNear);                                                                         // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animalia/RedDeer/RedDeer_M/Blueprints/AIC_Deer.AIC_Deer_C.CheckIsOptimizationHearing
	void CheckIsOptimizationHearing(AActor* Actor, FAIStimulus& AIStimulus);                                                 // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animalia/RedDeer/RedDeer_M/Blueprints/AIC_Deer.AIC_Deer_C.IsReachableLocation
	void IsReachableLocation(FVector Target Location, bool& IsReachable);                                                    // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Animalia/RedDeer/RedDeer_M/Blueprints/AIC_Deer.AIC_Deer_C.CanLookAtCharacter
	void CanLookAtCharacter(FAIStimulus& Stimulus, AActor* ActorHeared, bool& Result);                                       // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Animalia/RedDeer/RedDeer_M/Blueprints/AIC_Deer.AIC_Deer_C.IsDangerHeared
	void IsDangerHeared(FAIStimulus& Stimulus, bool& IsDangerHeared);                                                        // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Animalia/RedDeer/RedDeer_M/Blueprints/AIC_Deer.AIC_Deer_C.SetHomeLocationArea
	void SetHomeLocationArea(FVector HomeLocation);                                                                          // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animalia/RedDeer/RedDeer_M/Blueprints/AIC_Deer.AIC_Deer_C.EnableAI
	void EnableAI(bool Enable, FVector HomeLocation);                                                                        // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animalia/RedDeer/RedDeer_M/Blueprints/AIC_Deer.AIC_Deer_C.CanPerceptionHappen
	void CanPerceptionHappen(AActor* SensedActor, bool& Yes);                                                                // [0x2407bf0] Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Animalia/RedDeer/RedDeer_M/Blueprints/AIC_Deer.AIC_Deer_C.OnSenseHappened
	void OnSenseHappened(AActor* SensedActor);                                                                               // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animalia/RedDeer/RedDeer_M/Blueprints/AIC_Deer.AIC_Deer_C.ValidateOnStartSense
	void ValidateOnStartSense(AActor* SensedActor, bool& Continue);                                                          // [0x2407bf0] Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animalia/RedDeer/RedDeer_M/Blueprints/AIC_Deer.AIC_Deer_C.RefreshSense
	void RefreshSense();                                                                                                     // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animalia/RedDeer/RedDeer_M/Blueprints/AIC_Deer.AIC_Deer_C.GenerateRunAwayLocation
	void GenerateRunAwayLocation(AActor* SensedActor, float RadiusAfterDistance, FVector& RunAwayLocation, bool& IsReachable); // [0x2407bf0] Private|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animalia/RedDeer/RedDeer_M/Blueprints/AIC_Deer.AIC_Deer_C.ReceiveBeginPlay
	void ReceiveBeginPlay();                                                                                                 // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/Animalia/RedDeer/RedDeer_M/Blueprints/AIC_Deer.AIC_Deer_C.BndEvt__AIC_Deer_PawnSensing_K2Node_ComponentBoundEvent_1_SeePawnDelegate__DelegateSignature
	void BndEvt__AIC_Deer_PawnSensing_K2Node_ComponentBoundEvent_1_SeePawnDelegate__DelegateSignature(APawn* Pawn);          // [0x2407bf0] BlueprintEvent       
	// Function /Game/Animalia/RedDeer/RedDeer_M/Blueprints/AIC_Deer.AIC_Deer_C.OnAnySense
	void OnAnySense();                                                                                                       // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Animalia/RedDeer/RedDeer_M/Blueprints/AIC_Deer.AIC_Deer_C.BndEvt__AIC_Deer_AIPerception_K2Node_ComponentBoundEvent_5_ActorPerceptionUpdatedDelegate__DelegateSignature
	void BndEvt__AIC_Deer_AIPerception_K2Node_ComponentBoundEvent_5_ActorPerceptionUpdatedDelegate__DelegateSignature(AActor* Actor, FAIStimulus Stimulus); // [0x2407bf0] BlueprintEvent       
	// Function /Game/Animalia/RedDeer/RedDeer_M/Blueprints/AIC_Deer.AIC_Deer_C.BndEvt__AIC_Deer_PawnSensing_K2Node_ComponentBoundEvent_0_HearNoiseDelegate__DelegateSignature
	void BndEvt__AIC_Deer_PawnSensing_K2Node_ComponentBoundEvent_0_HearNoiseDelegate__DelegateSignature(APawn* Instigator, FVector& Location, float Volume); // [0x2407bf0] HasOutParms|BlueprintEvent 
	// Function /Game/Animalia/RedDeer/RedDeer_M/Blueprints/AIC_Deer.AIC_Deer_C.ClearLookAtActor
	void ClearLookAtActor();                                                                                                 // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Animalia/RedDeer/RedDeer_M/Blueprints/AIC_Deer.AIC_Deer_C.ExecuteUbergraph_AIC_Deer
	void ExecuteUbergraph_AIC_Deer(int32_t EntryPoint);                                                                      // [0x2407bf0] Final|HasDefaults    
};

/// Class /Game/Animalia/RedDeer/Blueprints/BP_DeerV2.BP_DeerV2_C
/// Size: 0x02F0 (0x000630 - 0x000920)
class ABP_DeerV2_C : public ATDB_Deer : ATDB_Deer
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0630   (0x0008)  
	UAIMovementComponent_C*                            AIMovementComponent;                                        // 0x0638   (0x0008)  
	bool                                               HeadAdditiveDamage;                                         // 0x0640   (0x0001)  
	bool                                               PelvisAdditiveDamage;                                       // 0x0641   (0x0001)  
	bool                                               ChestAdditiveDamage;                                        // 0x0642   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0643   (0x0001)  MISSED
	float                                              AdditiveDamageMontagePlayRate;                              // 0x0644   (0x0004)  
	FF_MontagePartName                                 MontagePartName;                                            // 0x0648   (0x000C)  
	FName                                              ResetAdditiveNotifyName;                                    // 0x0654   (0x0008)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x065C   (0x0004)  MISSED
	UAnimMontage*                                      PelvisAdditiveDamageMontage;                                // 0x0660   (0x0008)  
	UAnimMontage*                                      ChestAdditiveDamageMontage;                                 // 0x0668   (0x0008)  
	UAnimMontage*                                      HeadAdditiveDamageMontage;                                  // 0x0670   (0x0008)  
	FName                                              RoamingKey;                                                 // 0x0678   (0x0008)  
	TEnumAsByte<E_DeerState>                           PreviousState;                                              // 0x0680   (0x0001)  
	TEnumAsByte<E_DeerState>                           State;                                                      // 0x0681   (0x0001)  
	unsigned char                                      UnknownData02_5[0x6];                                       // 0x0682   (0x0006)  MISSED
	UFMODAudioComponent*                               RoarSound;                                                  // 0x0688   (0x0008)  
	UFMODAudioComponent*                               IdleSound;                                                  // 0x0690   (0x0008)  
	float                                              Health;                                                     // 0x0698   (0x0004)  
	float                                              MaxHealth;                                                  // 0x069C   (0x0004)  
	TArray<FName>                                      ChestBones;                                                 // 0x06A0   (0x0010)  
	TArray<FName>                                      PelvisBones;                                                // 0x06B0   (0x0010)  
	TArray<FName>                                      HeadBones;                                                  // 0x06C0   (0x0010)  
	double                                             LookAtYaw;                                                  // 0x06D0   (0x0008)  
	double                                             LookAtPitch;                                                // 0x06D8   (0x0008)  
	bool                                               bDeerLooking;                                               // 0x06E0   (0x0001)  
	unsigned char                                      UnknownData03_5[0x7];                                       // 0x06E1   (0x0007)  MISSED
	FTimerHandle                                       RandomBehaviorTimer;                                        // 0x06E8   (0x0008)  
	TArray<TEnumAsByte>                                AvailableStates;                                            // 0x06F0   (0x0010)  
	TArray<TEnumAsByte>                                StartupStates;                                              // 0x0700   (0x0010)  
	FString                                            AnimalsNavMeshName;                                         // 0x0710   (0x0010)  
	FTimerHandle                                       NavMeshGettingTimer;                                        // 0x0720   (0x0008)  
	ARecastNavMesh*                                    AnimalsNavData;                                             // 0x0728   (0x0008)  
	FMulticastInlineDelegate                           BehaviorFInished;                                           // 0x0730   (0x0010)  
	FMulticastInlineDelegate                           OnTurningFinished;                                          // 0x0740   (0x0010)  
	TEnumAsByte<E_DeerSpawnType>                       DeerType;                                                   // 0x0750   (0x0001)  
	unsigned char                                      UnknownData04_5[0x7];                                       // 0x0751   (0x0007)  MISSED
	FF_DeerProperties                                  DTRow;                                                      // 0x0758   (0x00E0)  
	FMulticastInlineDelegate                           OnDeerDied;                                                 // 0x0838   (0x0010)  
	bool                                               Activated;                                                  // 0x0848   (0x0001)  
	unsigned char                                      UnknownData05_5[0x7];                                       // 0x0849   (0x0007)  MISSED
	ADeerManager_C*                                    DeerManager;                                                // 0x0850   (0x0008)  
	int32_t                                            ManagerIndex;                                               // 0x0858   (0x0004)  
	unsigned char                                      UnknownData06_5[0x4];                                       // 0x085C   (0x0004)  MISSED
	AAIC_Deer_C*                                       DeerController;                                             // 0x0860   (0x0008)  
	UClass*                                            DeerMovementFilter;                                         // 0x0868   (0x0008)  
	TMap<EMovementType, FF_MovementSettings>           FemaleMovementSettingsCPP;                                  // 0x0870   (0x0050)  
	TMap<EMovementType, FF_MovementSettings>           MaleMovementSettingsCPP;                                    // 0x08C0   (0x0050)  
	AActor*                                            LookAtActor;                                                // 0x0910   (0x0008)  
	double                                             AnimBodyToFloorTime;                                        // 0x0918   (0x0008)  


	/// Functions
	// Function /Game/Animalia/RedDeer/Blueprints/BP_DeerV2.BP_DeerV2_C.KillDeer
	void KillDeer();                                                                                                         // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animalia/RedDeer/Blueprints/BP_DeerV2.BP_DeerV2_C.GetHomeLocation
	FVector GetHomeLocation();                                                                                               // [0x2407bf0] Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Animalia/RedDeer/Blueprints/BP_DeerV2.BP_DeerV2_C.ResetDeer
	void ResetDeer();                                                                                                        // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animalia/RedDeer/Blueprints/BP_DeerV2.BP_DeerV2_C.DeactivateMeshTick
	void DeactivateMeshTick();                                                                                               // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animalia/RedDeer/Blueprints/BP_DeerV2.BP_DeerV2_C.DeactivateDeer
	void DeactivateDeer();                                                                                                   // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animalia/RedDeer/Blueprints/BP_DeerV2.BP_DeerV2_C.ActivateDeer
	void ActivateDeer();                                                                                                     // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animalia/RedDeer/Blueprints/BP_DeerV2.BP_DeerV2_C.OnRep_State
	void OnRep_State();                                                                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Animalia/RedDeer/Blueprints/BP_DeerV2.BP_DeerV2_C.OnDamage
	void OnDamage(double Damage, FName BoneName, AActor*& DamageCauser);                                                     // [0x2407bf0] Private|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animalia/RedDeer/Blueprints/BP_DeerV2.BP_DeerV2_C.FindAnimalsNavData
	void FindAnimalsNavData();                                                                                               // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animalia/RedDeer/Blueprints/BP_DeerV2.BP_DeerV2_C.EndRandomBehavior
	void EndRandomBehavior();                                                                                                // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animalia/RedDeer/Blueprints/BP_DeerV2.BP_DeerV2_C.InterruptBehaviour
	void InterruptBehaviour();                                                                                               // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animalia/RedDeer/Blueprints/BP_DeerV2.BP_DeerV2_C.RandomBehaviour
	void RandomBehaviour(TEnumAsByte<E_DeerState>& State);                                                                   // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animalia/RedDeer/Blueprints/BP_DeerV2.BP_DeerV2_C.StopDeerLooking
	void StopDeerLooking();                                                                                                  // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animalia/RedDeer/Blueprints/BP_DeerV2.BP_DeerV2_C.StartDeerLooking
	void StartDeerLooking();                                                                                                 // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animalia/RedDeer/Blueprints/BP_DeerV2.BP_DeerV2_C.DeerLookAtRandomPoint
	void DeerLookAtRandomPoint();                                                                                            // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animalia/RedDeer/Blueprints/BP_DeerV2.BP_DeerV2_C.PlayAdditiveDamageMontage
	void PlayAdditiveDamageMontage(FName BoneName, AActor*& DamageCauser);                                                   // [0x2407bf0] Private|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animalia/RedDeer/Blueprints/BP_DeerV2.BP_DeerV2_C.CheckFreeAdditiveMontage
	bool CheckFreeAdditiveMontage();                                                                                         // [0x2407bf0] Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Animalia/RedDeer/Blueprints/BP_DeerV2.BP_DeerV2_C.Define Montage Section
	FF_MontagePartName Define Montage Section(FName BoneName, AActor*& DamageCauser);                                        // [0x2407bf0] Private|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animalia/RedDeer/Blueprints/BP_DeerV2.BP_DeerV2_C.RepRandomBehavior
	void RepRandomBehavior();                                                                                                // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animalia/RedDeer/Blueprints/BP_DeerV2.BP_DeerV2_C.RepDeath
	void RepDeath();                                                                                                         // [0x2407bf0] Private|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animalia/RedDeer/Blueprints/BP_DeerV2.BP_DeerV2_C.RepRunFromDanger
	void RepRunFromDanger();                                                                                                 // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animalia/RedDeer/Blueprints/BP_DeerV2.BP_DeerV2_C.OnDeath
	void OnDeath();                                                                                                          // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animalia/RedDeer/Blueprints/BP_DeerV2.BP_DeerV2_C.OnLoaded_B280F37E49F4965FBA4970944C652193
	void OnLoaded_B280F37E49F4965FBA4970944C652193(UObject* Loaded);                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Animalia/RedDeer/Blueprints/BP_DeerV2.BP_DeerV2_C.OnLoaded_AF3D7D9A41C6A21E0D5476BC03C45643
	void OnLoaded_AF3D7D9A41C6A21E0D5476BC03C45643(UObject* Loaded);                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Animalia/RedDeer/Blueprints/BP_DeerV2.BP_DeerV2_C.OnLoaded_D768AC47460525BFF068CDB17D27376E
	void OnLoaded_D768AC47460525BFF068CDB17D27376E(UObject* Loaded);                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Animalia/RedDeer/Blueprints/BP_DeerV2.BP_DeerV2_C.OnNotifyEnd_6E4413454C4A0DD39616FF8FC22A75DE
	void OnNotifyEnd_6E4413454C4A0DD39616FF8FC22A75DE(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Animalia/RedDeer/Blueprints/BP_DeerV2.BP_DeerV2_C.OnNotifyBegin_6E4413454C4A0DD39616FF8FC22A75DE
	void OnNotifyBegin_6E4413454C4A0DD39616FF8FC22A75DE(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Animalia/RedDeer/Blueprints/BP_DeerV2.BP_DeerV2_C.OnInterrupted_6E4413454C4A0DD39616FF8FC22A75DE
	void OnInterrupted_6E4413454C4A0DD39616FF8FC22A75DE(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Animalia/RedDeer/Blueprints/BP_DeerV2.BP_DeerV2_C.OnBlendOut_6E4413454C4A0DD39616FF8FC22A75DE
	void OnBlendOut_6E4413454C4A0DD39616FF8FC22A75DE(FName NotifyName);                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Animalia/RedDeer/Blueprints/BP_DeerV2.BP_DeerV2_C.OnCompleted_6E4413454C4A0DD39616FF8FC22A75DE
	void OnCompleted_6E4413454C4A0DD39616FF8FC22A75DE(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Animalia/RedDeer/Blueprints/BP_DeerV2.BP_DeerV2_C.OnNotifyEnd_8804BFE1468DB6F469056D809A2418A5
	void OnNotifyEnd_8804BFE1468DB6F469056D809A2418A5(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Animalia/RedDeer/Blueprints/BP_DeerV2.BP_DeerV2_C.OnNotifyBegin_8804BFE1468DB6F469056D809A2418A5
	void OnNotifyBegin_8804BFE1468DB6F469056D809A2418A5(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Animalia/RedDeer/Blueprints/BP_DeerV2.BP_DeerV2_C.OnInterrupted_8804BFE1468DB6F469056D809A2418A5
	void OnInterrupted_8804BFE1468DB6F469056D809A2418A5(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Animalia/RedDeer/Blueprints/BP_DeerV2.BP_DeerV2_C.OnBlendOut_8804BFE1468DB6F469056D809A2418A5
	void OnBlendOut_8804BFE1468DB6F469056D809A2418A5(FName NotifyName);                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Animalia/RedDeer/Blueprints/BP_DeerV2.BP_DeerV2_C.OnCompleted_8804BFE1468DB6F469056D809A2418A5
	void OnCompleted_8804BFE1468DB6F469056D809A2418A5(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Animalia/RedDeer/Blueprints/BP_DeerV2.BP_DeerV2_C.OnNotifyEnd_FF44C8724C5B458EF8013F85BCBC166B
	void OnNotifyEnd_FF44C8724C5B458EF8013F85BCBC166B(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Animalia/RedDeer/Blueprints/BP_DeerV2.BP_DeerV2_C.OnNotifyBegin_FF44C8724C5B458EF8013F85BCBC166B
	void OnNotifyBegin_FF44C8724C5B458EF8013F85BCBC166B(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Animalia/RedDeer/Blueprints/BP_DeerV2.BP_DeerV2_C.OnInterrupted_FF44C8724C5B458EF8013F85BCBC166B
	void OnInterrupted_FF44C8724C5B458EF8013F85BCBC166B(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Animalia/RedDeer/Blueprints/BP_DeerV2.BP_DeerV2_C.OnBlendOut_FF44C8724C5B458EF8013F85BCBC166B
	void OnBlendOut_FF44C8724C5B458EF8013F85BCBC166B(FName NotifyName);                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Animalia/RedDeer/Blueprints/BP_DeerV2.BP_DeerV2_C.OnCompleted_FF44C8724C5B458EF8013F85BCBC166B
	void OnCompleted_FF44C8724C5B458EF8013F85BCBC166B(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Animalia/RedDeer/Blueprints/BP_DeerV2.BP_DeerV2_C.OnNotifyEnd_1C3C155B4C6B38F96A41ECBBD6E9D663
	void OnNotifyEnd_1C3C155B4C6B38F96A41ECBBD6E9D663(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Animalia/RedDeer/Blueprints/BP_DeerV2.BP_DeerV2_C.OnNotifyBegin_1C3C155B4C6B38F96A41ECBBD6E9D663
	void OnNotifyBegin_1C3C155B4C6B38F96A41ECBBD6E9D663(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Animalia/RedDeer/Blueprints/BP_DeerV2.BP_DeerV2_C.OnInterrupted_1C3C155B4C6B38F96A41ECBBD6E9D663
	void OnInterrupted_1C3C155B4C6B38F96A41ECBBD6E9D663(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Animalia/RedDeer/Blueprints/BP_DeerV2.BP_DeerV2_C.OnBlendOut_1C3C155B4C6B38F96A41ECBBD6E9D663
	void OnBlendOut_1C3C155B4C6B38F96A41ECBBD6E9D663(FName NotifyName);                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Animalia/RedDeer/Blueprints/BP_DeerV2.BP_DeerV2_C.OnCompleted_1C3C155B4C6B38F96A41ECBBD6E9D663
	void OnCompleted_1C3C155B4C6B38F96A41ECBBD6E9D663(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Animalia/RedDeer/Blueprints/BP_DeerV2.BP_DeerV2_C.OnNotifyEnd_9EE847AC409D3517E06D5F9E107B80B5
	void OnNotifyEnd_9EE847AC409D3517E06D5F9E107B80B5(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Animalia/RedDeer/Blueprints/BP_DeerV2.BP_DeerV2_C.OnNotifyBegin_9EE847AC409D3517E06D5F9E107B80B5
	void OnNotifyBegin_9EE847AC409D3517E06D5F9E107B80B5(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Animalia/RedDeer/Blueprints/BP_DeerV2.BP_DeerV2_C.OnInterrupted_9EE847AC409D3517E06D5F9E107B80B5
	void OnInterrupted_9EE847AC409D3517E06D5F9E107B80B5(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Animalia/RedDeer/Blueprints/BP_DeerV2.BP_DeerV2_C.OnBlendOut_9EE847AC409D3517E06D5F9E107B80B5
	void OnBlendOut_9EE847AC409D3517E06D5F9E107B80B5(FName NotifyName);                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Animalia/RedDeer/Blueprints/BP_DeerV2.BP_DeerV2_C.OnCompleted_9EE847AC409D3517E06D5F9E107B80B5
	void OnCompleted_9EE847AC409D3517E06D5F9E107B80B5(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Animalia/RedDeer/Blueprints/BP_DeerV2.BP_DeerV2_C.OnLoaded_7D7526E749E577AF99E416BF2048C438
	void OnLoaded_7D7526E749E577AF99E416BF2048C438(UObject* Loaded);                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Animalia/RedDeer/Blueprints/BP_DeerV2.BP_DeerV2_C.ReceiveBeginPlay
	void ReceiveBeginPlay();                                                                                                 // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/Animalia/RedDeer/Blueprints/BP_DeerV2.BP_DeerV2_C.OnStartRoaming
	void OnStartRoaming();                                                                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Animalia/RedDeer/Blueprints/BP_DeerV2.BP_DeerV2_C.ReceivePointDamage
	void ReceivePointDamage(float Damage, UDamageType* DamageType, FVector HitLocation, FVector hitNormal, UPrimitiveComponent* HitComponent, FName BoneName, FVector ShotFromDirection, AController* InstigatedBy, AActor* DamageCauser, FHitResult& HitInfo); // [0x2407bf0] BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/Animalia/RedDeer/Blueprints/BP_DeerV2.BP_DeerV2_C.MulticastPlayAdditiveMontage
	void MulticastPlayAdditiveMontage(FF_MontagePartName MontagePartName);                                                   // [0x2407bf0] Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animalia/RedDeer/Blueprints/BP_DeerV2.BP_DeerV2_C.TurnRight_Server
	void TurnRight_Server();                                                                                                 // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animalia/RedDeer/Blueprints/BP_DeerV2.BP_DeerV2_C.TurnRight_Multicast
	void TurnRight_Multicast();                                                                                              // [0x2407bf0] Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animalia/RedDeer/Blueprints/BP_DeerV2.BP_DeerV2_C.TurnLeft_Server
	void TurnLeft_Server();                                                                                                  // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animalia/RedDeer/Blueprints/BP_DeerV2.BP_DeerV2_C.TurnLeft_Multicast
	void TurnLeft_Multicast();                                                                                               // [0x2407bf0] Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animalia/RedDeer/Blueprints/BP_DeerV2.BP_DeerV2_C.ServerInitializeDeer
	void ServerInitializeDeer(TEnumAsByte<E_DeerSpawnType> DeerType, int32_t ManagerIndex, FVector Location, FRotator Rotation); // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animalia/RedDeer/Blueprints/BP_DeerV2.BP_DeerV2_C.MulticastInitializeDeer
	void MulticastInitializeDeer();                                                                                          // [0x2407bf0] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animalia/RedDeer/Blueprints/BP_DeerV2.BP_DeerV2_C.ExecuteUbergraph_BP_DeerV2
	void ExecuteUbergraph_BP_DeerV2(int32_t EntryPoint);                                                                     // [0x2407bf0] Final|HasDefaults    
	// Function /Game/Animalia/RedDeer/Blueprints/BP_DeerV2.BP_DeerV2_C.OnDeerDied__DelegateSignature
	void OnDeerDied__DelegateSignature();                                                                                    // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animalia/RedDeer/Blueprints/BP_DeerV2.BP_DeerV2_C.OnTurningFinished__DelegateSignature
	void OnTurningFinished__DelegateSignature();                                                                             // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animalia/RedDeer/Blueprints/BP_DeerV2.BP_DeerV2_C.BehaviorFInished__DelegateSignature
	void BehaviorFInished__DelegateSignature(TEnumAsByte<E_DeerState> FromState);                                            // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Enum /Game/Animalia/RedDeer/RedDeer_M/Blueprints/E_DeerState.E_DeerState
/// Size: 0x07
enum E_DeerState : uint8_t
{
	E_DeerState__NewEnumerator00                                                     = 0,
	E_DeerState__NewEnumerator11                                                     = 1,
	E_DeerState__NewEnumerator22                                                     = 2,
	E_DeerState__NewEnumerator33                                                     = 3,
	E_DeerState__NewEnumerator54                                                     = 4,
	E_DeerState__NewEnumerator65                                                     = 5,
	E_DeerState__E_MAX6                                                              = 6
};

/// Enum /Game/Animalia/RedDeer/RedDeer_M/Blueprints/E_AdditiveDamage.E_AdditiveDamage
/// Size: 0x05
enum E_AdditiveDamage : uint8_t
{
	E_AdditiveDamage__NewEnumerator00                                                = 0,
	E_AdditiveDamage__NewEnumerator11                                                = 1,
	E_AdditiveDamage__NewEnumerator22                                                = 2,
	E_AdditiveDamage__NewEnumerator33                                                = 3,
	E_AdditiveDamage__E_MAX4                                                         = 4
};

