
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package Survival.

/// Struct /Script/Survival.BreathStateMachineStruct
/// Size: 0x0009 (0x000000 - 0x000009)
struct FBreathStateMachineStruct
{ 
	bool                                               Death;                                                      // 0x0000   (0x0001)  
	bool                                               TakingDamage;                                               // 0x0001   (0x0001)  
	bool                                               Jump;                                                       // 0x0002   (0x0001)  
	bool                                               Sprint;                                                     // 0x0003   (0x0001)  
	bool                                               StaminaRestoring;                                           // 0x0004   (0x0001)  
	bool                                               Jog;                                                        // 0x0005   (0x0001)  
	bool                                               Thirst;                                                     // 0x0006   (0x0001)  
	bool                                               LOWHP;                                                      // 0x0007   (0x0001)  
	bool                                               Bleeding;                                                   // 0x0008   (0x0001)  
};

/// Struct /Script/Survival.BreathStateChangedStruct
/// Size: 0x0014 (0x000000 - 0x000014)
struct FBreathStateChangedStruct
{ 
	FBreathStateMachineStruct                          NewState;                                                   // 0x0000   (0x0009)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0009   (0x0003)  MISSED
	float                                              CurrentStamina;                                             // 0x000C   (0x0004)  
	bool                                               DamagedChest;                                               // 0x0010   (0x0001)  
	bool                                               DamagedBelly;                                               // 0x0011   (0x0001)  
	bool                                               Painkiller;                                                 // 0x0012   (0x0001)  
	unsigned char                                      UnknownData01_6[0x1];                                       // 0x0013   (0x0001)  MISSED
};

/// Struct /Script/Survival.S_NegativeEffects
/// Size: 0x0040 (0x000008 - 0x000048)
struct FS_NegativeEffects : FTableRowBase
{ 
	TArray<float>                                      Health;                                                     // 0x0008   (0x0010)  
	TArray<float>                                      Chance;                                                     // 0x0018   (0x0010)  
	TArray<float>                                      WithArmorChance;                                            // 0x0028   (0x0010)  
	TArray<FName>                                      Bones;                                                      // 0x0038   (0x0010)  
};

/// Struct /Script/Survival.Gib
/// Size: 0x0078 (0x000000 - 0x000078)
struct FGib
{ 
	TArray<TWeakObjectPtr>                             GibsMeshs;                                                  // 0x0000   (0x0010)  
	TArray<FVector>                                    EllipsoidSizes;                                             // 0x0010   (0x0010)  
	FFloatRange                                        EllipsoidSizeX;                                             // 0x0020   (0x0010)  
	FFloatRange                                        EllipsoidSizeY;                                             // 0x0030   (0x0010)  
	FFloatRange                                        EllipsoidSizeZ;                                             // 0x0040   (0x0010)  
	FVector                                            HitLocationOffset;                                          // 0x0050   (0x0018)  
	FName                                              SocketName;                                                 // 0x0068   (0x0008)  
	bool                                               bHideBones : 1;                                             // 0x0070:0 (0x0001)  
	bool                                               bHideChildBones : 1;                                        // 0x0070:1 (0x0001)  
	bool                                               bUseRandomEllipsoids : 1;                                   // 0x0070:2 (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0071   (0x0007)  MISSED
};

/// Struct /Script/Survival.SItemChanceCountBalance
/// Size: 0x0008 (0x000000 - 0x000008)
struct FSItemChanceCountBalance
{ 
	float                                              Chance;                                                     // 0x0000   (0x0004)  
	int32_t                                            Count;                                                      // 0x0004   (0x0004)  
};

/// Struct /Script/Survival.SItemTypeBalance
/// Size: 0x0018 (0x000000 - 0x000018)
struct FSItemTypeBalance
{ 
	EItemType                                          ItemType;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	TArray<FSItemChanceCountBalance>                   CountBalance;                                               // 0x0008   (0x0010)  
};

/// Struct /Script/Survival.AnimalPath
/// Size: 0x0020 (0x000000 - 0x000020)
struct FAnimalPath
{ 
	TArray<FVector>                                    Path;                                                       // 0x0000   (0x0010)  
	TArray<FVector>                                    PredictPath;                                                // 0x0010   (0x0010)  
};

/// Struct /Script/Survival.AnimalSteps
/// Size: 0x0010 (0x000000 - 0x000010)
struct FAnimalSteps
{ 
	TArray<AActor*>                                    StepObjects;                                                // 0x0000   (0x0010)  
};

/// Struct /Script/Survival.DisplayDeviceAndSupportedResolutions
/// Size: 0x0030 (0x000000 - 0x000030)
struct FDisplayDeviceAndSupportedResolutions
{ 
	int32_t                                            DeviceNumber;                                               // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	FString                                            DeviceName;                                                 // 0x0008   (0x0010)  
	TArray<FIntPoint>                                  SupportedResolutions;                                       // 0x0018   (0x0010)  
	bool                                               IsPrimary;                                                  // 0x0028   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0029   (0x0007)  MISSED
};

/// Struct /Script/Survival.WepAnimInfo
/// Size: 0x0240 (0x000000 - 0x000240)
struct FWepAnimInfo
{ 
	TWeakObjectPtr<UAnimSequence*>                     StandIdleAim;                                               // 0x0000   (0x0030)  
	TWeakObjectPtr<UAnimSequence*>                     CrouchIdleAim;                                              // 0x0030   (0x0030)  
	TWeakObjectPtr<UAnimSequence*>                     CrouchWalkAim;                                              // 0x0060   (0x0030)  
	TWeakObjectPtr<UAnimSequence*>                     StandIdle;                                                  // 0x0090   (0x0030)  
	TWeakObjectPtr<UAnimSequence*>                     CrouchIdle;                                                 // 0x00C0   (0x0030)  
	TWeakObjectPtr<UAnimSequence*>                     StandJogPose;                                               // 0x00F0   (0x0030)  
	TWeakObjectPtr<UAnimSequence*>                     CrouchWalkPose;                                             // 0x0120   (0x0030)  
	TWeakObjectPtr<UAnimSequence*>                     SprintPose;                                                 // 0x0150   (0x0030)  
	TWeakObjectPtr<UAnimSequence*>                     HipFireStand;                                               // 0x0180   (0x0030)  
	TWeakObjectPtr<UAnimSequence*>                     HipFireCrouch;                                              // 0x01B0   (0x0030)  
	TWeakObjectPtr<UAimOffsetBlendSpace*>              WepAimOffset;                                               // 0x01E0   (0x0030)  
	TWeakObjectPtr<UAimOffsetBlendSpace*>              HipFireAimOffset;                                           // 0x0210   (0x0030)  
};

/// Struct /Script/Survival.WepPhasedReload
/// Size: 0x0090 (0x000000 - 0x000090)
struct FWepPhasedReload
{ 
	TWeakObjectPtr<UAnimMontage*>                      Begin;                                                      // 0x0000   (0x0030)  
	TWeakObjectPtr<UAnimMontage*>                      Cycle;                                                      // 0x0030   (0x0030)  
	TWeakObjectPtr<UAnimMontage*>                      End;                                                        // 0x0060   (0x0030)  
};

/// Class /Script/Survival.AdditionalEditorFunctions
/// Size: 0x0000 (0x000028 - 0x000028)
class UAdditionalEditorFunctions : public UBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/Survival.AIControllerTeam
/// Size: 0x0008 (0x0003B8 - 0x0003C0)
class AAIControllerTeam : public AAIController : AAIController
{ 
public:
	FGenericTeamId                                     TeamID;                                                     // 0x03B8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x03B9   (0x0007)  MISSED


	/// Functions
	// Function /Script/Survival.AIControllerTeam.SetCrowdSimulationState
	void SetCrowdSimulationState(UCrowdFollowingComponent* CrowdFollowingComponent);                                         // [0x20eee90] Final|Native|Public|BlueprintCallable 
	// Function /Script/Survival.AIControllerTeam.GetActorPerceptionViewpoint
	void GetActorPerceptionViewpoint(FVector& out_Location, FRotator& out_Rotation);                                         // [0x2407bf0] Event|Public|HasOutParms|HasDefaults|BlueprintEvent|Const 
};

/// Class /Script/Survival.AIMoveComp
/// Size: 0x0010 (0x0000A0 - 0x0000B0)
class UAIMoveComp : public UActorComponent : UActorComponent
{ 
public:
	bool                                               bCPPIsStopping;                                             // 0x00A0   (0x0001)  
	bool                                               bCPPVelocityFromAnimation;                                  // 0x00A1   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x00A2   (0x0002)  MISSED
	float                                              CPPAnimationAngle;                                          // 0x00A4   (0x0004)  
	EMovementType                                      CPPMovementType;                                            // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x00A9   (0x0007)  MISSED


	/// Functions
	// Function /Script/Survival.AIMoveComp.SetCPPVelocityValue
	void SetCPPVelocityValue(float NewValue);                                                                                // [0x20eee10] Final|Native|Public|BlueprintCallable 
	// Function /Script/Survival.AIMoveComp.SetCPPVelocityFromAnimation
	void SetCPPVelocityFromAnimation(bool NewValue);                                                                         // [0x20eed80] Final|Native|Public|BlueprintCallable 
	// Function /Script/Survival.AIMoveComp.SetCPPMovementType
	void SetCPPMovementType(EMovementType NewValue);                                                                         // [0x20eed00] Final|Native|Public|BlueprintCallable 
	// Function /Script/Survival.AIMoveComp.SetCPPIsStopping
	void SetCPPIsStopping(bool NewValue);                                                                                    // [0x20eec70] Final|Native|Public|BlueprintCallable 
	// Function /Script/Survival.AIMoveComp.SetCPPAnimationAngle
	void SetCPPAnimationAngle(float NewValue);                                                                               // [0x20eebf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Survival.AIMoveComp.OnRep_CPPMovementType
	void OnRep_CPPMovementType();                                                                                            // [0x20eeab0] Final|Native|Private 
	// Function /Script/Survival.AIMoveComp.GetCPPVelocityValue
	float GetCPPVelocityValue();                                                                                             // [0x20ee2b0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Survival.AIMoveComp.GetCPPVelocityFromAnimation
	bool GetCPPVelocityFromAnimation();                                                                                      // [0x20ee290] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Survival.AIMoveComp.GetCPPMovementType
	EMovementType GetCPPMovementType();                                                                                      // [0x20ee270] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Survival.AIMoveComp.GetCPPIsStopping
	bool GetCPPIsStopping();                                                                                                 // [0x20ee250] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Survival.AIMoveComp.GetCPPAnimationAngle
	float GetCPPAnimationAngle();                                                                                            // [0x20ee230] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Survival.AIMoveComp.CPPMovementTypeRepNotify
	void CPPMovementTypeRepNotify();                                                                                         // [0x20ee070] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/Survival.AIParentPawn
/// Size: 0x0018 (0x000318 - 0x000330)
class AAIParentPawn : public APawn : APawn
{ 
public:
	UPawnMovementComponent*                            MovementComponent;                                          // 0x0318   (0x0008)  
	USkeletalMeshComponent*                            MeshComponent;                                              // 0x0320   (0x0008)  
	UCapsuleComponent*                                 CollisionComponent;                                         // 0x0328   (0x0008)  
};

/// Class /Script/Survival.AnimationURO
/// Size: 0x0020 (0x0000A0 - 0x0000C0)
class UAnimationURO : public UActorComponent : UActorComponent
{ 
public:
	bool                                               InterpolateSkipFramesURO;                                   // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00A1   (0x0003)  MISSED
	int32_t                                            maxEvalRateForInterpolationURO;                             // 0x00A4   (0x0004)  
	int32_t                                            baseNonRenderedUpdateRateURO;                               // 0x00A8   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x00AC   (0x0004)  MISSED
	TArray<int32_t>                                    skipFrameRateLOD;                                           // 0x00B0   (0x0010)  
};

/// Class /Script/Survival.BaseChaosVehiclePawn
/// Size: 0x0008 (0x000328 - 0x000330)
class ABaseChaosVehiclePawn : public AWheeledVehiclePawn : AWheeledVehiclePawn
{ 
public:
	USkeletalMeshComponent*                            VehicleModel;                                               // 0x0328   (0x0008)  
};

/// Class /Script/Survival.BFL_Loop
/// Size: 0x0000 (0x000028 - 0x000028)
class UBFL_Loop : public UBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/Survival.BP_AnimUROComponent
/// Size: 0x0010 (0x0000A0 - 0x0000B0)
class UBP_AnimUROComponent : public UActorComponent : UActorComponent
{ 
public:
	TArray<int32_t>                                    m_pLOD_FrameRate;                                           // 0x00A0   (0x0010)  


	/// Functions
	// Function /Script/Survival.BP_AnimUROComponent.SetMeshURO
	void SetMeshURO(USkinnedMeshComponent* meshToURO);                                                                       // [0x20eeff0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Survival.BP_AnimUROComponent.SetMeshCustomURO
	void SetMeshCustomURO(USkinnedMeshComponent* meshToURO, int32_t uroLevel);                                               // [0x20eef20] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/Survival.BP_TDBNavModifierVolume
/// Size: 0x0000 (0x0002F0 - 0x0002F0)
class ABP_TDBNavModifierVolume : public ANavModifierVolume : ANavModifierVolume
{ 
public:
};

/// Class /Script/Survival.BreathSystemReplication
/// Size: 0x0018 (0x0000A0 - 0x0000B8)
class UBreathSystemReplication : public UActorComponent : UActorComponent
{ 
public:
	FBreathStateChangedStruct                          BreathStateRep;                                             // 0x00A0   (0x0014)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00B4   (0x0004)  MISSED


	/// Functions
	// Function /Script/Survival.BreathSystemReplication.OnStateChanged
	void OnStateChanged();                                                                                                   // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Script/Survival.BreathSystemReplication.OnRep_BreathStateRep
	void OnRep_BreathStateRep();                                                                                             // [0x20eea90] Final|Native|Protected 
};

/// Class /Script/Survival.CarWithZombie
/// Size: 0x0000 (0x000290 - 0x000290)
class ACarWithZombie : public AActor : AActor
{ 
public:
};

/// Class /Script/Survival.RnnrSetVar
/// Size: 0x0000 (0x000028 - 0x000028)
class URnnrSetVar : public UObject : UObject
{ 
public:
};

/// Class /Script/Survival.CharacterHeadStim
/// Size: 0x0180 (0x000630 - 0x0007B0)
class ACharacterHeadStim : public ACharacter : ACharacter
{ 
public:
	unsigned char                                      UnknownData00_2[0x48];                                      // 0x0630   (0x0048)  MISSED
	FName                                              LookAtLocationSocketName;                                   // 0x0678   (0x0008)  
	unsigned char                                      UnknownData01_5[0x20];                                      // 0x0680   (0x0020)  MISSED
	FRotator                                           CharacterRotation;                                          // 0x06A0   (0x0018)  
	bool                                               Cinematic;                                                  // 0x06B8   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x06B9   (0x0007)  MISSED
	FVector2D                                          MoveInput;                                                  // 0x06C0   (0x0010)  
	bool                                               HasMovementInput;                                           // 0x06D0   (0x0001)  
	unsigned char                                      UnknownData03_5[0x7];                                       // 0x06D1   (0x0007)  MISSED
	double                                             Direction;                                                  // 0x06D8   (0x0008)  
	bool                                               IsMoving;                                                   // 0x06E0   (0x0001)  
	unsigned char                                      UnknownData04_5[0x7];                                       // 0x06E1   (0x0007)  MISSED
	FRotator                                           LastVelocityRotation;                                       // 0x06E8   (0x0018)  
	FRotator                                           LookingRotation;                                            // 0x0700   (0x0018)  
	bool                                               bLookingRotationChanged;                                    // 0x0718   (0x0001)  
	unsigned char                                      UnknownData05_5[0x7];                                       // 0x0719   (0x0007)  MISSED
	double                                             PrevAimYaw;                                                 // 0x0720   (0x0008)  
	double                                             AimYawRate;                                                 // 0x0728   (0x0008)  
	double                                             Pitch;                                                      // 0x0730   (0x0008)  
	double                                             AimYawDelta;                                                // 0x0738   (0x0008)  
	double                                             Yaw;                                                        // 0x0740   (0x0008)  
	FVector                                            TPPCrouchWepOffset;                                         // 0x0748   (0x0018)  
	FRotator                                           LastMovementInputRotation;                                  // 0x0760   (0x0018)  
	double                                             MoveInputVelocityDiff;                                      // 0x0778   (0x0008)  
	double                                             InputVelocityDot;                                           // 0x0780   (0x0008)  
	FRotator                                           PrevLookingRotation;                                        // 0x0788   (0x0018)  
	UDataTable*                                        NegativeEffectDataTable;                                    // 0x07A0   (0x0008)  
	float                                              UpdateScreenSizeRate;                                       // 0x07A8   (0x0004)  
	float                                              PlayerScreenSize;                                           // 0x07AC   (0x0004)  


	/// Functions
	// Function /Script/Survival.CharacterHeadStim.ScreenSizeTimerElapsed
	void ScreenSizeTimerElapsed();                                                                                           // [0x20eead0] Final|Native|Private 
	// Function /Script/Survival.CharacterHeadStim.OnSignificance
	void OnSignificance(SignificanceLevel& OldSignificance, SignificanceLevel& Significance, bool bFinal);                   // [0x2407bf0] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/Survival.CharacterHeadStim.OnRep_HasMovementInput
	void OnRep_HasMovementInput();                                                                                           // [0x15da620] Final|Native|Public|BlueprintCallable 
	// Function /Script/Survival.CharacterHeadStim.NegativeEffectCalculate
	TArray<UNegativeEffectType> NegativeEffectCalculate(UNegativeEffectDamageType _negativeEffectDamageType, float _health, FName _boneName, float _bleedChanceMultiplier, bool _armor); // [0x20ee870] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Survival.CharacterHeadStim.MainLineTrace
	FHitResult MainLineTrace(float Distance, bool Debug);                                                                    // [0x20ee4d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Survival.CharacterHeadStim.GetLookAtLocation
	FVector GetLookAtLocation();                                                                                             // [0x20ee2d0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Survival.CharacterHeadStim.CalculateVariablesCPP
	void CalculateVariablesCPP(float _DeltaTime);                                                                            // [0x20ee090] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/Survival.CustomATPCFadingObject
/// Size: 0x0000 (0x0000E0 - 0x0000E0)
class UCustomATPCFadingObject : public UATPCCameraFadingObject : UATPCCameraFadingObject
{ 
public:
};

/// Class /Script/Survival.CustomLevelStreamer
/// Size: 0x0000 (0x000290 - 0x000290)
class ACustomLevelStreamer : public AActor : AActor
{ 
public:
};

/// Class /Script/Survival.EnvQueryTest_IsOccupiedByZombie
/// Size: 0x0030 (0x0001F8 - 0x000228)
class UEnvQueryTest_IsOccupiedByZombie : public UEnvQueryTest : UEnvQueryTest
{ 
public:
	float                                              AddZCoordinate;                                             // 0x01F8   (0x0004)  
	bool                                               DrawLine;                                                   // 0x01FC   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x01FD   (0x0003)  MISSED
	FColor                                             LineColor;                                                  // 0x0200   (0x0004)  
	float                                              LineLifeTime;                                               // 0x0204   (0x0004)  
	float                                              LineThickness;                                              // 0x0208   (0x0004)  
	bool                                               DrawSphere;                                                 // 0x020C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x020D   (0x0003)  MISSED
	float                                              SphereRadius;                                               // 0x0210   (0x0004)  
	int32_t                                            SphereSegments;                                             // 0x0214   (0x0004)  
	FColor                                             SphereColor;                                                // 0x0218   (0x0004)  
	float                                              SphereLifeTime;                                             // 0x021C   (0x0004)  
	float                                              SphereThickness;                                            // 0x0220   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0224   (0x0004)  MISSED
};

/// Class /Script/Survival.FL_SteamHelper
/// Size: 0x0000 (0x000028 - 0x000028)
class UFL_SteamHelper : public UBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/Survival.FPSProjectile
/// Size: 0x0010 (0x000290 - 0x0002A0)
class AFPSProjectile : public AActor : AActor
{ 
public:
	USphereComponent*                                  CollisionComponent;                                         // 0x0290   (0x0008)  
	UProjectileMovementComponent*                      ProjectileMovementComponent;                                // 0x0298   (0x0008)  
};

/// Class /Script/Survival.GameHUD
/// Size: 0x0000 (0x000380 - 0x000380)
class AGameHUD : public AHUD : AHUD
{ 
public:
};

/// Class /Script/Survival.GoreComponent
/// Size: 0x0090 (0x0000A0 - 0x000130)
class UGoreComponent : public UActorComponent : UActorComponent
{ 
public:
	float                                              HitTolerance;                                               // 0x00A0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00A4   (0x0004)  MISSED
	FString                                            HitLocationName;                                            // 0x00A8   (0x0010)  
	FString                                            EllipsoidName;                                              // 0x00B8   (0x0010)  
	TMap<FName, FGib>                                  Gibs;                                                       // 0x00C8   (0x0050)  
	USkeletalMeshComponent*                            OwnerMesh;                                                  // 0x0118   (0x0008)  
	char                                               HitLocationCount;                                           // 0x0120   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0121   (0x0007)  MISSED
	UMaterialInstanceDynamic*                          OwnerMaterial;                                              // 0x0128   (0x0008)  


	/// Functions
	// Function /Script/Survival.GoreComponent.TransformHitLocationToSkeletonRelative
	FVector TransformHitLocationToSkeletonRelative(FVector& HitLocation, USkeletalMeshComponent* Mesh, FName& BoneName);     // [0x20ef3e0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Survival.GoreComponent.SetOwnerMesh
	void SetOwnerMesh(USkeletalMeshComponent* Mesh);                                                                         // [0x20ef080] Final|Native|Public|BlueprintCallable 
	// Function /Script/Survival.GoreComponent.DestroyLimb
	void DestroyLimb(FName& BoneName, FVector& HitLocation);                                                                 // [0x20ee140] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Survival.GoreComponent.CriticalDamaged
	bool CriticalDamaged();                                                                                                  // [0x20ee110] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/Survival.HelicopterPatrol
/// Size: 0x0000 (0x000290 - 0x000290)
class AHelicopterPatrol : public AActor : AActor
{ 
public:
};

/// Class /Script/Survival.SignificanceInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class USignificanceInterface : public UInterface : UInterface
{ 
public:
};

/// Class /Script/Survival.LevelLoadDetector
/// Size: 0x0030 (0x000290 - 0x0002C0)
class ALevelLoadDetector : public AActor : AActor
{ 
public:
	TArray<ULevelStreaming*>                           Levels;                                                     // 0x0290   (0x0010)  
	FMulticastInlineDelegate                           OnStreamedLevelLoaded;                                      // 0x02A0   (0x0010)  
	FMulticastInlineDelegate                           OnStreamedLevelUnloaded;                                    // 0x02B0   (0x0010)  


	/// Functions
	// Function /Script/Survival.LevelLoadDetector.OnLevelStreamed
	void OnLevelStreamed();                                                                                                  // [0x20f30b0] Native|Protected|BlueprintCallable 
};

/// Class /Script/Survival.LootGeneratorDataAsset
/// Size: 0x0020 (0x000030 - 0x000050)
class ULootGeneratorDataAsset : public UDataAsset : UDataAsset
{ 
public:
	int32_t                                            MinItems;                                                   // 0x0030   (0x0004)  
	int32_t                                            MaxItems;                                                   // 0x0034   (0x0004)  
	TArray<FSItemTypeBalance>                          ItemTypeBalance;                                            // 0x0038   (0x0010)  
	UDataTable*                                        DataTable;                                                  // 0x0048   (0x0008)  
};

/// Class /Script/Survival.MainContainerBox
/// Size: 0x0000 (0x000290 - 0x000290)
class AMainContainerBox : public AActor : AActor
{ 
public:
};

/// Class /Script/Survival.MyWorldSettings
/// Size: 0x0000 (0x0004B8 - 0x0004B8)
class AMyWorldSettings : public AWorldSettings : AWorldSettings
{ 
public:
};

/// Class /Script/Survival.PathToAnimal
/// Size: 0x0000 (0x000028 - 0x000028)
class UPathToAnimal : public UBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/Survival.ProjectileBullet
/// Size: 0x0088 (0x000290 - 0x000318)
class AProjectileBullet : public AActor : AActor
{ 
public:
	UCurveFloat*                                       DragCoefficient;                                            // 0x0290   (0x0008)  
	unsigned char                                      UnknownData00_5[0x10];                                      // 0x0298   (0x0010)  MISSED
	USphereComponent*                                  Sphere;                                                     // 0x02A8   (0x0008)  
	UProjectileMovementComponent*                      ProjectileMovement;                                         // 0x02B0   (0x0008)  
	UNiagaraComponent*                                 NiagaraParticleTrail;                                       // 0x02B8   (0x0008)  
	float                                              InitialSpeed;                                               // 0x02C0   (0x0004)  
	float                                              finalSpeed;                                                 // 0x02C4   (0x0004)  
	float                                              Mass;                                                       // 0x02C8   (0x0004)  
	float                                              bulletArea;                                                 // 0x02CC   (0x0004)  
	float                                              AirDensity;                                                 // 0x02D0   (0x0004)  
	float                                              projectileVelocity;                                         // 0x02D4   (0x0004)  
	FVector                                            lastPosition;                                               // 0x02D8   (0x0018)  
	FVector                                            SpawnLocation;                                              // 0x02F0   (0x0018)  
	bool                                               ShowTrace;                                                  // 0x0308   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0309   (0x0007)  MISSED
	UNiagaraSystem*                                    NiagaraSystem;                                              // 0x0310   (0x0008)  


	/// Functions
	// Function /Script/Survival.ProjectileBullet.ProjectileOnceTime
	float ProjectileOnceTime();                                                                                              // [0x20f31a0] Final|Native|Protected 
	// Function /Script/Survival.ProjectileBullet.OnProjectileOnce
	void OnProjectileOnce();                                                                                                 // [0x20f30f0] Final|Native|Protected 
	// Function /Script/Survival.ProjectileBullet.OnProjectileCalculate
	void OnProjectileCalculate();                                                                                            // [0x20f30d0] Final|Native|Protected 
	// Function /Script/Survival.ProjectileBullet.InitBulletParam
	void InitBulletParam(float fMass, float fTrueCaliber);                                                                   // [0x20f2eb0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/Survival.ProjectileBullet.InitBullet
	void InitBullet(float bulletSpeedMultiplier, float bulletSlowCoef, float bulletSpeed, float bulletSpeedFinal);           // [0x20f2d50] Final|Native|Protected|BlueprintCallable 
	// Function /Script/Survival.ProjectileBullet.CalcVelocity
	FVector CalcVelocity();                                                                                                  // [0x20f23a0] Final|Native|Protected|HasDefaults 
};

/// Class /Script/Survival.ProjectileReplicatedActor
/// Size: 0x0008 (0x000290 - 0x000298)
class AProjectileReplicatedActor : public AActor : AActor
{ 
public:
	UProjectileMovementComponent*                      ProjectileMovement;                                         // 0x0290   (0x0008)  
};

/// Class /Script/Survival.RBVehicle
/// Size: 0x0018 (0x000318 - 0x000330)
class ARBVehicle : public APawn : APawn
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0318   (0x0010)  MISSED
	USkeletalMeshComponent*                            Mesh;                                                       // 0x0328   (0x0008)  


	/// Functions
	// Function /Script/Survival.RBVehicle.UpdateLastMove
	void UpdateLastMove(float DeltaTime);                                                                                    // [0x20f3a10] Native|Event|Public|BlueprintEvent 
	// Function /Script/Survival.RBVehicle.PhysicsTick
	void PhysicsTick(float SubstepDeltaTime);                                                                                // [0x20f3110] Native|Event|Public|BlueprintEvent 
};

/// Class /Script/Survival.SmoothSync
/// Size: 0x02C0 (0x0000A0 - 0x000360)
class USmoothSync : public UActorComponent : UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x58];                                      // 0x00A0   (0x0058)  MISSED
	float                                              interpolationBackTime;                                      // 0x00F8   (0x0004)  
	ExtrapolationMode                                  ExtrapolationMode;                                          // 0x00FC   (0x0001)  
	bool                                               useExtrapolationTimeLimit;                                  // 0x00FD   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x00FE   (0x0002)  MISSED
	float                                              extrapolationTimeLimit;                                     // 0x0100   (0x0004)  
	bool                                               useExtrapolationDistanceLimit;                              // 0x0104   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0105   (0x0003)  MISSED
	float                                              extrapolationDistanceLimit;                                 // 0x0108   (0x0004)  
	float                                              sendPositionThreshold;                                      // 0x010C   (0x0004)  
	float                                              sendRotationThreshold;                                      // 0x0110   (0x0004)  
	float                                              sendScaleThreshold;                                         // 0x0114   (0x0004)  
	float                                              sendVelocityThreshold;                                      // 0x0118   (0x0004)  
	float                                              sendAngularVelocityThreshold;                               // 0x011C   (0x0004)  
	float                                              receivedPositionThreshold;                                  // 0x0120   (0x0004)  
	float                                              receivedRotationThreshold;                                  // 0x0124   (0x0004)  
	float                                              positionSnapThreshold;                                      // 0x0128   (0x0004)  
	float                                              rotationSnapThreshold;                                      // 0x012C   (0x0004)  
	float                                              scaleSnapThreshold;                                         // 0x0130   (0x0004)  
	float                                              timeSmoothing;                                              // 0x0134   (0x0004)  
	float                                              positionLerpSpeed;                                          // 0x0138   (0x0004)  
	float                                              rotationLerpSpeed;                                          // 0x013C   (0x0004)  
	float                                              scaleLerpSpeed;                                             // 0x0140   (0x0004)  
	SyncMode                                           syncPosition;                                               // 0x0144   (0x0001)  
	SyncMode                                           SyncRotation;                                               // 0x0145   (0x0001)  
	SyncMode                                           syncScale;                                                  // 0x0146   (0x0001)  
	SyncMode                                           syncVelocity;                                               // 0x0147   (0x0001)  
	SyncMode                                           syncAngularVelocity;                                        // 0x0148   (0x0001)  
	bool                                               syncMovementMode;                                           // 0x0149   (0x0001)  
	bool                                               isPositionCompressed;                                       // 0x014A   (0x0001)  
	bool                                               isRotationCompressed;                                       // 0x014B   (0x0001)  
	bool                                               isScaleCompressed;                                          // 0x014C   (0x0001)  
	bool                                               isVelocityCompressed;                                       // 0x014D   (0x0001)  
	bool                                               isAngularVelocityCompressed;                                // 0x014E   (0x0001)  
	unsigned char                                      UnknownData03_5[0x1];                                       // 0x014F   (0x0001)  MISSED
	float                                              sendRate;                                                   // 0x0150   (0x0004)  
	bool                                               isUsingOriginRebasing;                                      // 0x0154   (0x0001)  
	bool                                               alwaysSendOrigin;                                           // 0x0155   (0x0001)  
	bool                                               syncOwnershipChange;                                        // 0x0156   (0x0001)  
	unsigned char                                      UnknownData04_5[0x91];                                      // 0x0157   (0x0091)  MISSED
	USceneComponent*                                   realComponentToSync;                                        // 0x01E8   (0x0008)  
	unsigned char                                      UnknownData05_5[0x18];                                      // 0x01F0   (0x0018)  MISSED
	float                                              InterpolationTime;                                          // 0x0208   (0x0004)  
	unsigned char                                      UnknownData06_5[0x134];                                     // 0x020C   (0x0134)  MISSED
	float                                              atRestPositionThreshold;                                    // 0x0340   (0x0004)  
	float                                              atRestRotationThreshold;                                    // 0x0344   (0x0004)  
	unsigned char                                      UnknownData07_5[0xC];                                       // 0x0348   (0x000C)  MISSED
	bool                                               stopGetState;                                               // 0x0354   (0x0001)  
	unsigned char                                      UnknownData08_6[0xB];                                       // 0x0355   (0x000B)  MISSED


	/// Functions
	// Function /Script/Survival.SmoothSync.teleport
	void teleport();                                                                                                         // [0x20f3c80] Final|Native|Public|BlueprintCallable 
	// Function /Script/Survival.SmoothSync.SmoothSyncTeleportServerToClients
	void SmoothSyncTeleportServerToClients(FVector3f Position, FVector3f Rotation, FVector3f Scale, float tempOwnerTime);    // [0x20f3790] Net|NetReliableNative|Event|NetMulticast|Public|HasDefaults|NetValidate 
	// Function /Script/Survival.SmoothSync.SmoothSyncTeleportClientToServer
	void SmoothSyncTeleportClientToServer(FVector3f Position, FVector3f Rotation, FVector3f Scale, float tempOwnerTime);     // [0x20f35a0] Net|NetReliableNative|Event|Public|NetServer|HasDefaults|NetValidate 
	// Function /Script/Survival.SmoothSync.SmoothSyncEnableServerToClients
	void SmoothSyncEnableServerToClients(bool Enable);                                                                       // [0x20f34e0] Net|Native|Event|NetMulticast|Public|NetValidate 
	// Function /Script/Survival.SmoothSync.SmoothSyncEnableClientToServer
	void SmoothSyncEnableClientToServer(bool Enable);                                                                        // [0x20f3420] Net|Native|Event|Public|NetServer|NetValidate 
	// Function /Script/Survival.SmoothSync.setSceneComponentToSync
	void setSceneComponentToSync(USceneComponent* theComponent);                                                             // [0x20f3bf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Survival.SmoothSync.ServerSendsTransformToEveryone
	void ServerSendsTransformToEveryone(TArray<char> Value);                                                                 // [0x20f31d0] Net|Native|Event|NetMulticast|Public|NetValidate 
	// Function /Script/Survival.SmoothSync.forceStateSendNextFrame
	void forceStateSendNextFrame();                                                                                          // [0x20f3bd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Survival.SmoothSync.enableSmoothSync
	void enableSmoothSync(bool Enable);                                                                                      // [0x20f3b40] Final|Native|Public|BlueprintCallable 
	// Function /Script/Survival.SmoothSync.ClientSendsTransformToServer
	void ClientSendsTransformToServer(TArray<char> Value);                                                                   // [0x20f26b0] Net|Native|Event|Public|NetServer|NetValidate 
	// Function /Script/Survival.SmoothSync.clearBuffer
	void clearBuffer();                                                                                                      // [0x20f3b20] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/Survival.StaticMeshComponentWithItsOwnFOV
/// Size: 0x0010 (0x000620 - 0x000630)
class UStaticMeshComponentWithItsOwnFOV : public UStaticMeshComponent : UStaticMeshComponent
{ 
public:
	float                                              DesiredHorizontalFov;                                       // 0x0620   (0x0004)  
	float                                              WeaponFOV;                                                  // 0x0624   (0x0004)  
	bool                                               UseOwnFOV;                                                  // 0x0628   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0629   (0x0007)  MISSED
};

/// Class /Script/Survival.SurvCameraFOVObject
/// Size: 0x0030 (0x000030 - 0x000060)
class USurvCameraFOVObject : public UATPCCameraFOVObject : UATPCCameraFOVObject
{ 
public:
	bool                                               IsOverride;                                                 // 0x0030   (0x0001)  
	bool                                               HandledCineCamera;                                          // 0x0031   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0032   (0x0002)  MISSED
	float                                              ReloadingAddingFOV;                                         // 0x0034   (0x0004)  
	FATPCInterploationSpeed                            ReloadingFOVInterpolation;                                  // 0x0038   (0x0014)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x004C   (0x0004)  MISSED
	UCurveFloat*                                       ReloadingFOVModifier;                                       // 0x0050   (0x0008)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0058   (0x0008)  MISSED


	/// Functions
	// Function /Script/Survival.SurvCameraFOVObject.SwitchReloadingFOV
	void SwitchReloadingFOV(bool isReloadingFOV);                                                                            // [0x20f3980] Final|Native|Public|BlueprintCallable 
	// Function /Script/Survival.SurvCameraFOVObject.CameraReset
	void CameraReset();                                                                                                      // [0x20f2670] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/Survival.SurvCameraLocationObject
/// Size: 0x00E0 (0x0003E0 - 0x0004C0)
class USurvCameraLocationObject : public UATPCCameraLocationObject : UATPCCameraLocationObject
{ 
public:
	FATPCInterploationSpeed                            AimingSocketOffset;                                         // 0x03D8   (0x0014)  
	float                                              AimingLerpInterpolateSpeed;                                 // 0x03EC   (0x0004)  
	unsigned char                                      UnknownData00_5[0x17];                                      // 0x03F0   (0x0017)  MISSED
	bool                                               bIsAiming;                                                  // 0x0407   (0x0001)  
	unsigned char                                      UnknownData01_6[0xB8];                                      // 0x0408   (0x00B8)  MISSED


	/// Functions
	// Function /Script/Survival.SurvCameraLocationObject.SetSocketAdditionalOffset
	void SetSocketAdditionalOffset(FVector offsetVector, float bInterpSpeed);                                                // [0x20f3320] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Survival.SurvCameraLocationObject.GetCurrentSocketVector
	UCurveVector* GetCurrentSocketVector();                                                                                  // [0x20f2bf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Survival.SurvCameraLocationObject.CustomLerp
	void CustomLerp(FVector startSocketVector, float LerpLenght, bool customLerpOffset, TEnumAsByte<EEasingFunc> LerpType, float BlendExp, int32_t steps, bool X, bool Y, bool Z); // [0x20f2770] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Survival.SurvCameraLocationObject.CameraSpeedReset
	void CameraSpeedReset();                                                                                                 // [0x20f2690] Final|Native|Public|BlueprintCallable 
	// Function /Script/Survival.SurvCameraLocationObject.CameraOverrideTickBlock
	void CameraOverrideTickBlock(bool bBlock);                                                                               // [0x20f25e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Survival.SurvCameraLocationObject.CameraOverrideTarget
	void CameraOverrideTarget(FVector offsetVector, bool bReset);                                                            // [0x20f24f0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Survival.SurvCameraLocationObject.CameraOverrideSocket
	void CameraOverrideSocket(FVector offsetVector, bool bReset);                                                            // [0x20f2400] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Survival.SurvCameraLocationObject.CameraChange
	void CameraChange();                                                                                                     // [0x20f23e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Survival.SurvCameraLocationObject.AimingLerp
	void AimingLerp();                                                                                                       // [0x20f2380] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/Survival.SurvivalATPCCameraComponent
/// Size: 0x0000 (0x000700 - 0x000700)
class USurvivalATPCCameraComponent : public UATPCCameraComponent : UATPCCameraComponent
{ 
public:
};

/// Class /Script/Survival.SurvivalGameInstance
/// Size: 0x0028 (0x0001F0 - 0x000218)
class USurvivalGameInstance : public UBE_GameInstance : UBE_GameInstance
{ 
public:
	UUserWidget*                                       WidgetObject;                                               // 0x01F0   (0x0008)  
	UClass*                                            LoadingScreenWidgetClass;                                   // 0x01F8   (0x0008)  
	bool                                               bIsLoadingScreenShown;                                      // 0x0200   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0201   (0x0007)  MISSED
	FString                                            SteamSessionTicket;                                         // 0x0208   (0x0010)  


	/// Functions
	// Function /Script/Survival.SurvivalGameInstance.UpdateSteamSessionTicket
	FString UpdateSteamSessionTicket();                                                                                      // [0x20f3aa0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Survival.SurvivalGameInstance.ShowLoadingScreen
	void ShowLoadingScreen();                                                                                                // [0x20f3400] Final|Native|Public|BlueprintCallable 
	// Function /Script/Survival.SurvivalGameInstance.SetBatchMode
	void SetBatchMode(int32_t batchMode);                                                                                    // [0x20f3290] Final|Native|Public|BlueprintCallable 
	// Function /Script/Survival.SurvivalGameInstance.HideLoadingScreen
	void HideLoadingScreen();                                                                                                // [0x20f2d30] Final|Native|Public|BlueprintCallable 
	// Function /Script/Survival.SurvivalGameInstance.GetShadersRemaining
	int64_t GetShadersRemaining();                                                                                           // [0x20f2d00] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Survival.SurvivalGameInstance.GetGPUNVidia
	bool GetGPUNVidia();                                                                                                     // [0x20f2cd0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Survival.SurvivalGameInstance.GetGPUBrandName
	FString GetGPUBrandName();                                                                                               // [0x20f2c50] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Survival.SurvivalGameInstance.GetGPUAMD
	bool GetGPUAMD();                                                                                                        // [0x20f2c20] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Survival.SurvivalGameInstance.FadeScreen
	void FadeScreen(float Duration, bool bToFade, FLinearColor ToColor);                                                     // [0x20f2a50] Final|Native|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/Survival.SurvivalGameMode
/// Size: 0x0058 (0x000388 - 0x0003E0)
class ASurvivalGameMode : public ABE_GameMode : ABE_GameMode
{ 
public:
	unsigned char                                      UnknownData00_1[0x58];                                      // 0x0388   (0x0058)  MISSED
};

/// Class /Script/Survival.SurvivalGameUserSettings
/// Size: 0x0070 (0x000148 - 0x0001B8)
class USurvivalGameUserSettings : public UGameUserSettings : UGameUserSettings
{ 
public:
	float                                              MasterVolume;                                               // 0x0148   (0x0004)  
	float                                              EffectsVolume;                                              // 0x014C   (0x0004)  
	float                                              DialogVolume;                                               // 0x0150   (0x0004)  
	float                                              MusicVolume;                                                // 0x0154   (0x0004)  
	float                                              VoiceChatVolume;                                            // 0x0158   (0x0004)  
	float                                              MouseSensitivity;                                           // 0x015C   (0x0004)  
	int32_t                                            UserRenderingAPI;                                           // 0x0160   (0x0004)  
	int32_t                                            MonitorIndex;                                               // 0x0164   (0x0004)  
	bool                                               bUseThreadedRenderer;                                       // 0x0168   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0169   (0x0007)  MISSED
	FString                                            TextCulture;                                                // 0x0170   (0x0010)  
	FString                                            VoiceCulture;                                               // 0x0180   (0x0010)  
	bool                                               VoiceLinesEnabled;                                          // 0x0190   (0x0001)  
	bool                                               TextChatEnabled;                                            // 0x0191   (0x0001)  
	bool                                               VoiceChatEnabled;                                           // 0x0192   (0x0001)  
	bool                                               AllowGameData;                                              // 0x0193   (0x0001)  
	bool                                               MouseInverse;                                               // 0x0194   (0x0001)  
	bool                                               RayTracing;                                                 // 0x0195   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x0196   (0x0002)  MISSED
	int32_t                                            GlobalIllumination;                                         // 0x0198   (0x0004)  
	int32_t                                            reflection;                                                 // 0x019C   (0x0004)  
	int32_t                                            DLSS;                                                       // 0x01A0   (0x0004)  
	int32_t                                            NIS;                                                        // 0x01A4   (0x0004)  
	int32_t                                            ReflexMode;                                                 // 0x01A8   (0x0004)  
	bool                                               FrameGeneration;                                            // 0x01AC   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x01AD   (0x0003)  MISSED
	int32_t                                            FSR2;                                                       // 0x01B0   (0x0004)  
	int32_t                                            CustomShadowQuality;                                        // 0x01B4   (0x0004)  


	/// Functions
	// Function /Script/Survival.SurvivalGameUserSettings.ShowWindowBorder
	void ShowWindowBorder();                                                                                                 // [0x20f8d40] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Survival.SurvivalGameUserSettings.SetVoiceLinesEnabled
	void SetVoiceLinesEnabled(bool Enabled);                                                                                 // [0x20f8cb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Survival.SurvivalGameUserSettings.SetVoiceCulture
	void SetVoiceCulture(FString Culture);                                                                                   // [0x20f8bc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Survival.SurvivalGameUserSettings.SetVoiceChatVolume
	void SetVoiceChatVolume(float Volume);                                                                                   // [0x20f8b40] Final|Native|Public|BlueprintCallable 
	// Function /Script/Survival.SurvivalGameUserSettings.SetVoiceChatEnabled
	void SetVoiceChatEnabled(bool Enabled);                                                                                  // [0x20f8ab0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Survival.SurvivalGameUserSettings.SetUseThreadedRenderer
	void SetUseThreadedRenderer(bool bAllowed);                                                                              // [0x20f8a20] Final|Native|Public|BlueprintCallable 
	// Function /Script/Survival.SurvivalGameUserSettings.SetTextCulture
	void SetTextCulture(FString Culture);                                                                                    // [0x20f8930] Final|Native|Public|BlueprintCallable 
	// Function /Script/Survival.SurvivalGameUserSettings.SetTextChatEnabled
	void SetTextChatEnabled(bool Enabled);                                                                                   // [0x20f88a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Survival.SurvivalGameUserSettings.SetReflexMode
	void SetReflexMode(int32_t Index);                                                                                       // [0x20f85e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Survival.SurvivalGameUserSettings.SetReflection
	void SetReflection(int32_t Index);                                                                                       // [0x20f8550] Final|Native|Public|BlueprintCallable 
	// Function /Script/Survival.SurvivalGameUserSettings.SetRayTracing
	void SetRayTracing(bool Enabled);                                                                                        // [0x20f84c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Survival.SurvivalGameUserSettings.SetNIS
	void SetNIS(int32_t Index);                                                                                              // [0x20f8070] Final|Native|Public|BlueprintCallable 
	// Function /Script/Survival.SurvivalGameUserSettings.SetMusicVolume
	void SetMusicVolume(float Volume);                                                                                       // [0x20f7ff0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Survival.SurvivalGameUserSettings.SetMouseSensitivity
	void SetMouseSensitivity(float Sensitivity);                                                                             // [0x20f7f70] Final|Native|Public|BlueprintCallable 
	// Function /Script/Survival.SurvivalGameUserSettings.SetMouseInverse
	void SetMouseInverse(bool Inverse);                                                                                      // [0x20f7ee0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Survival.SurvivalGameUserSettings.SetMonitorIndex
	void SetMonitorIndex(int32_t Index);                                                                                     // [0x20f7e50] Final|Native|Public|BlueprintCallable 
	// Function /Script/Survival.SurvivalGameUserSettings.SetMasterVolume
	void SetMasterVolume(float Volume);                                                                                      // [0x20f7dd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Survival.SurvivalGameUserSettings.SetGraphicsAPI
	void SetGraphicsAPI(ESurvivalRHI API);                                                                                   // [0x20f7d50] Final|Native|Public|BlueprintCallable 
	// Function /Script/Survival.SurvivalGameUserSettings.SetGlobalIllumination
	void SetGlobalIllumination(int32_t Index);                                                                               // [0x20f7cc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Survival.SurvivalGameUserSettings.SetFSR2
	void SetFSR2(int32_t Index);                                                                                             // [0x20f7a20] Final|Native|Public|BlueprintCallable 
	// Function /Script/Survival.SurvivalGameUserSettings.SetFrameGeneration
	void SetFrameGeneration(bool Enabled);                                                                                   // [0x20f7c30] Final|Native|Public|BlueprintCallable 
	// Function /Script/Survival.SurvivalGameUserSettings.SetEffectsVolume
	void SetEffectsVolume(float Volume);                                                                                     // [0x20f79a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Survival.SurvivalGameUserSettings.SetDLSS
	void SetDLSS(int32_t Index);                                                                                             // [0x20f7890] Final|Native|Public|BlueprintCallable 
	// Function /Script/Survival.SurvivalGameUserSettings.SetDialogVolume
	void SetDialogVolume(float Volume);                                                                                      // [0x20f7920] Final|Native|Public|BlueprintCallable 
	// Function /Script/Survival.SurvivalGameUserSettings.SetCustomShadowQuality
	void SetCustomShadowQuality(int32_t Index);                                                                              // [0x20f7800] Final|Native|Public|BlueprintCallable 
	// Function /Script/Survival.SurvivalGameUserSettings.SetAllowGameData
	void SetAllowGameData(bool allow);                                                                                       // [0x20f7490] Final|Native|Public|BlueprintCallable 
	// Function /Script/Survival.SurvivalGameUserSettings.IsThreadedRenderer
	bool IsThreadedRenderer();                                                                                               // [0x20f6f90] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Survival.SurvivalGameUserSettings.HideWindowBorder
	void HideWindowBorder();                                                                                                 // [0x20f6f70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Survival.SurvivalGameUserSettings.GetVoiceLinesEnabled
	bool GetVoiceLinesEnabled();                                                                                             // [0x20f6d70] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Survival.SurvivalGameUserSettings.GetVoiceCulture
	FString GetVoiceCulture();                                                                                               // [0x20f6cf0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Survival.SurvivalGameUserSettings.GetVoiceChatVolume
	float GetVoiceChatVolume();                                                                                              // [0x20f6cc0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Survival.SurvivalGameUserSettings.GetVoiceChatEnabled
	bool GetVoiceChatEnabled();                                                                                              // [0x20f6c90] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Survival.SurvivalGameUserSettings.GetUserRenderingAPI
	int32_t GetUserRenderingAPI();                                                                                           // [0x20f6c60] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Survival.SurvivalGameUserSettings.GetTextCulture
	FString GetTextCulture();                                                                                                // [0x20f6be0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Survival.SurvivalGameUserSettings.GetTextChatEnabled
	bool GetTextChatEnabled();                                                                                               // [0x20f6bb0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Survival.SurvivalGameUserSettings.GetReflexMode
	int32_t GetReflexMode();                                                                                                 // [0x20f69a0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Survival.SurvivalGameUserSettings.GetReflection
	int32_t GetReflection();                                                                                                 // [0x20f6970] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Survival.SurvivalGameUserSettings.GetRayTracing
	bool GetRayTracing();                                                                                                    // [0x20f6940] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Survival.SurvivalGameUserSettings.GetNIS
	int32_t GetNIS();                                                                                                        // [0x20f65d0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Survival.SurvivalGameUserSettings.GetMusicVolume
	float GetMusicVolume();                                                                                                  // [0x20f65a0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Survival.SurvivalGameUserSettings.GetMouseSensitivity
	float GetMouseSensitivity();                                                                                             // [0x20f6570] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Survival.SurvivalGameUserSettings.GetMouseInverse
	bool GetMouseInverse();                                                                                                  // [0x20f6540] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Survival.SurvivalGameUserSettings.GetMonitorIndex
	int32_t GetMonitorIndex();                                                                                               // [0x20f6510] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Survival.SurvivalGameUserSettings.GetMasterVolume
	float GetMasterVolume();                                                                                                 // [0x20f64e0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Survival.SurvivalGameUserSettings.GetGlobalIllumination
	int32_t GetGlobalIllumination();                                                                                         // [0x20f64b0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Survival.SurvivalGameUserSettings.GetFSR2
	int32_t GetFSR2();                                                                                                       // [0x20f6320] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Survival.SurvivalGameUserSettings.GetFrameGeneration
	bool GetFrameGeneration();                                                                                               // [0x20f6480] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Survival.SurvivalGameUserSettings.GetEffectsVolume
	float GetEffectsVolume();                                                                                                // [0x20f6120] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Survival.SurvivalGameUserSettings.GetDLSS
	int32_t GetDLSS();                                                                                                       // [0x20f60c0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Survival.SurvivalGameUserSettings.GetDialogVolume
	float GetDialogVolume();                                                                                                 // [0x20f60f0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Survival.SurvivalGameUserSettings.GetCustomShadowQuality
	int32_t GetCustomShadowQuality();                                                                                        // [0x20f6090] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Survival.SurvivalGameUserSettings.GetAllowGameData
	bool GetAllowGameData();                                                                                                 // [0x20f5dd0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Survival.SurvivalGameUserSettings.ApplyThreadedRenderer
	void ApplyThreadedRenderer();                                                                                            // [0x20f5b30] Native|Public|BlueprintCallable 
	// Function /Script/Survival.SurvivalGameUserSettings.ApplyFullscreenMode
	void ApplyFullscreenMode(bool bCheckForCommandLineOverrides);                                                            // [0x20f5aa0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/Survival.SurvivalGameViewportClient
/// Size: 0x0020 (0x0003B0 - 0x0003D0)
class USurvivalGameViewportClient : public UGameViewportClient : UGameViewportClient
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x03B0   (0x0020)  MISSED
};

/// Class /Script/Survival.SurvivalPlayerController
/// Size: 0x0010 (0x000868 - 0x000878)
class ASurvivalPlayerController : public ABE_PlayerController : ABE_PlayerController
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0868   (0x0008)  MISSED
	bool                                               ClientLeftTheGame;                                          // 0x0870   (0x0001)  
	FGenericTeamId                                     TeamID;                                                     // 0x0871   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x0872   (0x0006)  MISSED


	/// Functions
	// Function /Script/Survival.SurvivalPlayerController.Rotate
	void Rotate(float RotationX, float RotationY, float RotationZ);                                                          // [0x20f7370] Final|Exec|Native|Public|BlueprintCallable 
	// Function /Script/Survival.SurvivalPlayerController.HandleClientWasKicked
	void HandleClientWasKicked(FText& KickReason);                                                                           // [0x2407bf0] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/Survival.SurvivalPlayerController.GoTo
	void GoTo(float LocationX, float LocationY, float LocationZ);                                                            // [0x20f6da0] Final|Exec|Native|Public|BlueprintCallable 
	// Function /Script/Survival.SurvivalPlayerController.GetFGearSendrate
	float GetFGearSendrate();                                                                                                // [0x20f62f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Survival.SurvivalPlayerController.GetEngineConfigFloatValue
	float GetEngineConfigFloatValue(FName ConfigSection, FName ConfigKey);                                                   // [0x20f6220] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Survival.SurvivalPlayerController.GetEngineConfigBoolValue
	bool GetEngineConfigBoolValue(FName ConfigSection, FName ConfigKey);                                                     // [0x20f6150] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Survival.SurvivalPlayerController.ClientWasKickedCustom
	void ClientWasKickedCustom(FText KickReason);                                                                            // [0x20f5b50] Net|NetReliableNative|Event|Public|NetClient 
};

/// Class /Script/Survival.SurvivalStatSystem
/// Size: 0x0090 (0x000030 - 0x0000C0)
class USurvivalStatSystem : public UGameInstanceSubsystem : UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x90];                                      // 0x0030   (0x0090)  MISSED
};

/// Class /Script/Survival.TDBJsonObject
/// Size: 0x0010 (0x000028 - 0x000038)
class UTDBJsonObject : public UObject : UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED
};

/// Class /Script/Survival.TDBJsonValue
/// Size: 0x0010 (0x000028 - 0x000038)
class UTDBJsonValue : public UObject : UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED
};

/// Class /Script/Survival.TDB_CustomSkyLight
/// Size: 0x0000 (0x000290 - 0x000290)
class ATDB_CustomSkyLight : public AActor : AActor
{ 
public:
};

/// Class /Script/Survival.TDB_Deer
/// Size: 0x0000 (0x000630 - 0x000630)
class ATDB_Deer : public ACharacter : ACharacter
{ 
public:
};

/// Class /Script/Survival.TDB_LevelInspectorSubsystem
/// Size: 0x0000 (0x000030 - 0x000030)
class UTDB_LevelInspectorSubsystem : public UGameInstanceSubsystem : UGameInstanceSubsystem
{ 
public:
};

/// Class /Script/Survival.TDB_LittleZombie
/// Size: 0x0000 (0x000630 - 0x000630)
class ATDB_LittleZombie : public ACharacter : ACharacter
{ 
public:
};

/// Class /Script/Survival.TDB_Weapon
/// Size: 0x0000 (0x000290 - 0x000290)
class ATDB_Weapon : public AActor : AActor
{ 
public:
};

/// Class /Script/Survival.TDB_WeaponPlaceHolder
/// Size: 0x0000 (0x000290 - 0x000290)
class ATDB_WeaponPlaceHolder : public AActor : AActor
{ 
public:
};

/// Class /Script/Survival.SettingsWidgetBase
/// Size: 0x0008 (0x000280 - 0x000288)
class USettingsWidgetBase : public UUserWidget : UUserWidget
{ 
public:
	UUserWidget*                                       PreviousMenuLink;                                           // 0x0280   (0x0008)  


	/// Functions
	// Function /Script/Survival.SettingsWidgetBase.OpenSubmenu
	void OpenSubmenu(USettingsWidgetBase* WidgetToShow, int32_t ZOrder, bool focused);                                       // [0x20fe220] Final|Native|Public|BlueprintCallable 
	// Function /Script/Survival.SettingsWidgetBase.GetSurvivalUserSettings
	USurvivalGameUserSettings* GetSurvivalUserSettings();                                                                    // [0x20fe000] Final|Native|Public|BlueprintCallable 
	// Function /Script/Survival.SettingsWidgetBase.CloseSubmenu
	void CloseSubmenu(bool focused);                                                                                         // [0x20fd690] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/Survival.ControlsSettingsWidget
/// Size: 0x0000 (0x000288 - 0x000288)
class UControlsSettingsWidget : public USettingsWidgetBase : USettingsWidgetBase
{ 
public:
};

/// Class /Script/Survival.ControlValue
/// Size: 0x0000 (0x000288 - 0x000288)
class UControlValue : public USettingsWidgetBase : USettingsWidgetBase
{ 
public:
};

/// Class /Script/Survival.GammaWidget
/// Size: 0x0000 (0x000288 - 0x000288)
class UGammaWidget : public USettingsWidgetBase : USettingsWidgetBase
{ 
public:
};

/// Class /Script/Survival.UtilitiesLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UUtilitiesLibrary : public UBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/Survival.VideoSettingsWidget
/// Size: 0x0000 (0x000288 - 0x000288)
class UVideoSettingsWidget : public USettingsWidgetBase : USettingsWidgetBase
{ 
public:
};

/// Class /Script/Survival.Weapon
/// Size: 0x0000 (0x000290 - 0x000290)
class AWeapon : public AActor : AActor
{ 
public:
};

/// Class /Script/Survival.WeaponAnimAsset
/// Size: 0x05D0 (0x000030 - 0x000600)
class UWeaponAnimAsset : public UDataAsset : UDataAsset
{ 
public:
	FWepAnimInfo                                       Poses;                                                      // 0x0030   (0x0240)  
	TWeakObjectPtr<UAnimMontage*>                      Reload;                                                     // 0x0270   (0x0030)  
	TWeakObjectPtr<UAnimMontage*>                      EquipRight;                                                 // 0x02A0   (0x0030)  
	TWeakObjectPtr<UAnimMontage*>                      EquipLeft;                                                  // 0x02D0   (0x0030)  
	TWeakObjectPtr<UAnimMontage*>                      UnequipRight;                                               // 0x0300   (0x0030)  
	TWeakObjectPtr<UAnimMontage*>                      UnequipLeft;                                                // 0x0330   (0x0030)  
	TWeakObjectPtr<UAnimMontage*>                      CrouchEquipRight;                                           // 0x0360   (0x0030)  
	TWeakObjectPtr<UAnimMontage*>                      CrouchEquipLeft;                                            // 0x0390   (0x0030)  
	TWeakObjectPtr<UAnimMontage*>                      CrouchUnequipRight;                                         // 0x03C0   (0x0030)  
	TWeakObjectPtr<UAnimMontage*>                      CrouchUnequipLeft;                                          // 0x03F0   (0x0030)  
	TWeakObjectPtr<UAnimMontage*>                      ReadyEquipRight;                                            // 0x0420   (0x0030)  
	TWeakObjectPtr<UAnimMontage*>                      ReadyEquipLeft;                                             // 0x0450   (0x0030)  
	TWeakObjectPtr<UAnimMontage*>                      ReadyUnequipRight;                                          // 0x0480   (0x0030)  
	TWeakObjectPtr<UAnimMontage*>                      ReadyUnequipLeft;                                           // 0x04B0   (0x0030)  
	TWeakObjectPtr<UAnimMontage*>                      AimFire;                                                    // 0x04E0   (0x0030)  
	TWeakObjectPtr<UAnimMontage*>                      HipFire;                                                    // 0x0510   (0x0030)  
	TWeakObjectPtr<UAnimMontage*>                      CrouchHipFire;                                              // 0x0540   (0x0030)  
	FWepPhasedReload                                   IdlePhasedReload;                                           // 0x0570   (0x0090)  
};

/// Class /Script/Survival.WeaponIndependetFOVSkMeshComp
/// Size: 0x0010 (0x000FD0 - 0x000FE0)
class UWeaponIndependetFOVSkMeshComp : public USkeletalMeshComponent : USkeletalMeshComponent
{ 
public:
	float                                              DesiredHorizontalFov;                                       // 0x0FD0   (0x0004)  
	float                                              WeaponFOV;                                                  // 0x0FD4   (0x0004)  
	bool                                               UseOwnFOV;                                                  // 0x0FD8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0FD9   (0x0007)  MISSED
};

/// Class /Script/Survival.ZombieAnimInstance
/// Size: 0x0000 (0x000350 - 0x000350)
class UZombieAnimInstance : public UAnimInstance : UAnimInstance
{ 
public:
};

/// Class /Script/Survival.ZombieCharacter
/// Size: 0x0010 (0x000630 - 0x000640)
class AZombieCharacter : public ACharacter : ACharacter
{ 
public:
	FMulticastInlineDelegate                           OnSetTargetActorCPP;                                        // 0x0628   (0x0010)  
	EZombieAnimType                                    ZombieAnimType;                                             // 0x0638   (0x0001)  
	bool                                               bAgressive;                                                 // 0x0639   (0x0001)  
	bool                                               bDamaged;                                                   // 0x063A   (0x0001)  
	EZombieType                                        CPPZombieType;                                              // 0x063B   (0x0001)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x063C   (0x0004)  MISSED


	/// Functions
	// Function /Script/Survival.ZombieCharacter.SetZombieAnimType
	void SetZombieAnimType(EZombieAnimType NewZombieAnimType);                                                               // [0x20fee70] Final|Native|Public|BlueprintCallable 
	// Function /Script/Survival.ZombieCharacter.SetDamaged
	void SetDamaged(bool NewValue);                                                                                          // [0x20fecc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Survival.ZombieCharacter.SetCPPZombieType
	void SetCPPZombieType(EZombieType NewValue);                                                                             // [0x20fec40] Final|Native|Public|BlueprintCallable 
	// Function /Script/Survival.ZombieCharacter.SetBackToIdle
	void SetBackToIdle(bool NewValue);                                                                                       // [0x20feb20] Final|Native|Public|BlueprintCallable 
	// Function /Script/Survival.ZombieCharacter.SetAgressive
	void SetAgressive(bool NewValue);                                                                                        // [0x20fe8b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Survival.ZombieCharacter.GetZombieAnimType
	EZombieAnimType GetZombieAnimType();                                                                                     // [0x20fe0e0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Survival.ZombieCharacter.GetDamaged
	bool GetDamaged();                                                                                                       // [0x20fddd0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Survival.ZombieCharacter.GetCPPZombieType
	EZombieType GetCPPZombieType();                                                                                          // [0x20fdd10] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Survival.ZombieCharacter.GetBackToIdle
	bool GetBackToIdle();                                                                                                    // [0x20fdcd0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Survival.ZombieCharacter.GetAgressive
	bool GetAgressive();                                                                                                     // [0x20fdc90] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/Survival.ZombiePawn
/// Size: 0x0048 (0x000318 - 0x000360)
class AZombiePawn : public APawn : APawn
{ 
public:
	FMulticastInlineDelegate                           OnSetTargetActorParent;                                     // 0x0318   (0x0010)  
	UPawnMovementComponent*                            MovementComponent;                                          // 0x0328   (0x0008)  
	USkeletalMeshComponent*                            Mesh;                                                       // 0x0330   (0x0008)  
	USkeletalMeshComponent*                            Head;                                                       // 0x0338   (0x0008)  
	USkeletalMeshComponent*                            Body;                                                       // 0x0340   (0x0008)  
	USkeletalMeshComponent*                            Feet;                                                       // 0x0348   (0x0008)  
	UCapsuleComponent*                                 CapsuleComponent;                                           // 0x0350   (0x0008)  
	EZombieAnimType                                    ZombieAnimType;                                             // 0x0358   (0x0001)  
	bool                                               bAgressive;                                                 // 0x0359   (0x0001)  
	bool                                               bDamaged;                                                   // 0x035A   (0x0001)  
	EZombieType                                        ZombieType;                                                 // 0x035B   (0x0001)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x035C   (0x0004)  MISSED


	/// Functions
	// Function /Script/Survival.ZombiePawn.SetZombieType
	void SetZombieType(EZombieType NewValue);                                                                                // [0x20fef70] Final|Native|Public|BlueprintCallable 
	// Function /Script/Survival.ZombiePawn.SetZombieAnimType
	void SetZombieAnimType(EZombieAnimType NewZombieAnimType);                                                               // [0x20feef0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Survival.ZombiePawn.SetDamaged
	void SetDamaged(bool NewValue);                                                                                          // [0x20fed50] Final|Native|Public|BlueprintCallable 
	// Function /Script/Survival.ZombiePawn.SetBackToIdle
	void SetBackToIdle(bool NewValue);                                                                                       // [0x20febb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Survival.ZombiePawn.SetAgressive
	void SetAgressive(bool NewValue);                                                                                        // [0x20fe940] Final|Native|Public|BlueprintCallable 
	// Function /Script/Survival.ZombiePawn.GetZombieType
	EZombieType GetZombieType();                                                                                             // [0x20fe120] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Survival.ZombiePawn.GetZombieAnimType
	EZombieAnimType GetZombieAnimType();                                                                                     // [0x20fe100] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Survival.ZombiePawn.GetDamaged
	bool GetDamaged();                                                                                                       // [0x20fddf0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Survival.ZombiePawn.GetBackToIdle
	bool GetBackToIdle();                                                                                                    // [0x20fdcf0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Survival.ZombiePawn.GetAgressive
	bool GetAgressive();                                                                                                     // [0x20fdcb0] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Enum /Script/Survival.EMovementType
/// Size: 0x07
enum EMovementType : uint8_t
{
	EMovementType__EMT_SNEAK0                                                        = 0,
	EMovementType__EMT_WALKSLOW1                                                     = 1,
	EMovementType__EMT_WALK2                                                         = 2,
	EMovementType__EMT_TROT3                                                         = 3,
	EMovementType__EMT_RUN4                                                          = 4,
	EMovementType__EMT_SPRINT5                                                       = 5,
	EMovementType__EMT_MAX6                                                          = 6
};

/// Enum /Script/Survival.UNegativeEffectDamageType
/// Size: 0x05
enum UNegativeEffectDamageType : uint8_t
{
	UNegativeEffectDamageType__None0                                                 = 0,
	UNegativeEffectDamageType__Bullet1                                               = 1,
	UNegativeEffectDamageType__Grenade2                                              = 2,
	UNegativeEffectDamageType__Zombie3                                               = 3,
	UNegativeEffectDamageType__UNegativeEffectDamageType_MAX4                        = 4
};

/// Enum /Script/Survival.UNegativeEffectType
/// Size: 0x09
enum UNegativeEffectType : uint8_t
{
	UNegativeEffectType__None0                                                       = 0,
	UNegativeEffectType__Bleeding1                                                   = 1,
	UNegativeEffectType__HeavyBleeding2                                              = 2,
	UNegativeEffectType__Chest3                                                      = 3,
	UNegativeEffectType__Stomach4                                                    = 4,
	UNegativeEffectType__Arm5                                                        = 5,
	UNegativeEffectType__Overweight6                                                 = 6,
	UNegativeEffectType__Count7                                                      = 7,
	UNegativeEffectType__UNegativeEffectType_MAX8                                    = 8
};

/// Enum /Script/Survival.EUIType
/// Size: 0x11
enum EUIType : uint8_t
{
	EUIType__None0                                                                   = 0,
	EUIType__Gameplay1                                                               = 1,
	EUIType__Inventory2                                                              = 2,
	EUIType__Loot3                                                                   = 3,
	EUIType__Craft4                                                                  = 4,
	EUIType__Workbench5                                                              = 5,
	EUIType__Trade6                                                                  = 6,
	EUIType__Vehicle7                                                                = 7,
	EUIType__Pause8                                                                  = 8,
	EUIType__DeathScreen9                                                            = 9,
	EUIType__EUIType_MAX10                                                           = 10
};

/// Enum /Script/Survival.SignificanceLevel
/// Size: 0x06
enum SignificanceLevel : uint8_t
{
	SignificanceLevel__Lowest0                                                       = 0,
	SignificanceLevel__Low1                                                          = 1,
	SignificanceLevel__Medium2                                                       = 2,
	SignificanceLevel__High3                                                         = 3,
	SignificanceLevel__Highest4                                                      = 4,
	SignificanceLevel__SignificanceLevel_MAX5                                        = 5
};

/// Enum /Script/Survival.EItemType
/// Size: 0x18
enum EItemType : uint8_t
{
	EItemType__None0                                                                 = 0,
	EItemType__Weapon1                                                               = 1,
	EItemType__Equipment2                                                            = 2,
	EItemType__Backpack3                                                             = 3,
	EItemType__Aid4                                                                  = 4,
	EItemType__Ammo5                                                                 = 5,
	EItemType__Food6                                                                 = 6,
	EItemType__Gasoline7                                                             = 7,
	EItemType__RepairParts8                                                          = 8,
	EItemType__CarParts9                                                             = 9,
	EItemType__WeaponModifier10                                                      = 10,
	EItemType__Drink11                                                               = 11,
	EItemType__Other12                                                               = 12,
	EItemType__Scrap13                                                               = 13,
	EItemType__Pistol14                                                              = 14,
	EItemType__Rifle15                                                               = 15,
	EItemType__Shotgun16                                                             = 16,
	EItemType__EItemType_MAX17                                                       = 17
};

/// Enum /Script/Survival.SyncMode
/// Size: 0x09
enum SyncMode : uint8_t
{
	SyncMode__XYZ0                                                                   = 0,
	SyncMode__XY1                                                                    = 1,
	SyncMode__XZ2                                                                    = 2,
	SyncMode__YZ3                                                                    = 3,
	SyncMode__X4                                                                     = 4,
	SyncMode__Y5                                                                     = 5,
	SyncMode__Z6                                                                     = 6,
	SyncMode__NONE7                                                                  = 7,
	SyncMode__SyncMode_MAX8                                                          = 8
};

/// Enum /Script/Survival.ExtrapolationMode
/// Size: 0x04
enum ExtrapolationMode : uint8_t
{
	ExtrapolationMode__UNLIMITED0                                                    = 0,
	ExtrapolationMode__LIMITED1                                                      = 1,
	ExtrapolationMode__NONE2                                                         = 2,
	ExtrapolationMode__ExtrapolationMode_MAX3                                        = 3
};

/// Enum /Script/Survival.RestState
/// Size: 0x04
enum RestState : uint8_t
{
	RestState__AT_REST0                                                              = 0,
	RestState__JUST_STARTED_MOVING1                                                  = 1,
	RestState__MOVING2                                                               = 2,
	RestState__RestState_MAX3                                                        = 3
};

/// Enum /Script/Survival.ESurvivalRHI
/// Size: 0x03
enum ESurvivalRHI : uint8_t
{
	ESurvivalRHI__D3D110                                                             = 0,
	ESurvivalRHI__D3D121                                                             = 1,
	ESurvivalRHI__ESurvivalRHI_MAX2                                                  = 2
};

/// Enum /Script/Survival.EPFJson
/// Size: 0x08
enum EPFJson : uint8_t
{
	EPFJson__None0                                                                   = 0,
	EPFJson__Null1                                                                   = 1,
	EPFJson__String2                                                                 = 2,
	EPFJson__Number3                                                                 = 3,
	EPFJson__Boolean4                                                                = 4,
	EPFJson__Array5                                                                  = 5,
	EPFJson__Object6                                                                 = 6,
	EPFJson__EPFJson_MAX7                                                            = 7
};

/// Enum /Script/Survival.EZombieAnimType
/// Size: 0x07
enum EZombieAnimType : uint8_t
{
	EZombieAnimType__EZAT_DEFAULT0                                                   = 0,
	EZombieAnimType__EZAT_LYING1                                                     = 1,
	EZombieAnimType__EZAT_FIRSTSITTING2                                              = 2,
	EZombieAnimType__EZAT_SECONDSITTING3                                             = 3,
	EZombieAnimType__EZAT_CAR4                                                       = 4,
	EZombieAnimType__EZAT_SLEEPING5                                                  = 5,
	EZombieAnimType__EZAT_MAX6                                                       = 6
};

/// Enum /Script/Survival.EZombieType
/// Size: 0x08
enum EZombieType : uint8_t
{
	EZombieType__EZT_RANDOM0                                                         = 0,
	EZombieType__EZT_DAY1                                                            = 1,
	EZombieType__EZT_NIGHT2                                                          = 2,
	EZombieType__EZT_SWAT3                                                           = 3,
	EZombieType__EZT_WITCH4                                                          = 4,
	EZombieType__EZT_SOLDIER5                                                        = 5,
	EZombieType__EZT_CLOWN6                                                          = 6,
	EZombieType__EZT_MAX7                                                            = 7
};

