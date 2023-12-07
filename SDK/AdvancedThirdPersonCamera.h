
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package AdvancedThirdPersonCamera.

/// Struct /Script/AdvancedThirdPersonCamera.ATPCCameraMode
/// Size: 0x0348 (0x000000 - 0x000348)
struct FATPCCameraMode
{ 
	bool                                               bEnableLocationSettings;                                    // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	FATPCLocationSettings                              LocationSettings;                                           // 0x0008   (0x00D8)  
	bool                                               bEnableRotationSettings;                                    // 0x00E0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x00E1   (0x0007)  MISSED
	FATPCRotationSettings                              RotationSettings;                                           // 0x00E8   (0x0120)  
	bool                                               bEnableFOVSettings;                                         // 0x0208   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0209   (0x0007)  MISSED
	FATPCFOVSettings                                   FOVSettings;                                                // 0x0210   (0x0030)  
	bool                                               bEnableFadeSettings;                                        // 0x0240   (0x0001)  
	unsigned char                                      UnknownData03_5[0x7];                                       // 0x0241   (0x0007)  MISSED
	FATPCFadeSettings                                  FadeSettings;                                               // 0x0248   (0x0030)  
	bool                                               bEnableFollowTerrainSettings;                               // 0x0278   (0x0001)  
	unsigned char                                      UnknownData04_5[0x7];                                       // 0x0279   (0x0007)  MISSED
	FATPCFollowTerrainSettings                         FollowTerrainSettings;                                      // 0x0280   (0x0048)  
	bool                                               bEnableCameraShakesSettings;                                // 0x02C8   (0x0001)  
	unsigned char                                      UnknownData05_5[0x7];                                       // 0x02C9   (0x0007)  MISSED
	FATPCCameraShakesSettings                          CameraShakesSettings;                                       // 0x02D0   (0x0018)  
	FATPCLockOnTargetSettings                          LockOnTargetSettings;                                       // 0x02E8   (0x0060)  
};

/// Struct /Script/AdvancedThirdPersonCamera.ATPCLockOnTargetSettings
/// Size: 0x0060 (0x000000 - 0x000060)
struct FATPCLockOnTargetSettings
{ 
	bool                                               bResetTargetOnChangeCameraMode;                             // 0x0000   (0x0001)  
	bool                                               RotateCameraByYaw;                                          // 0x0001   (0x0001)  
	bool                                               RotateCameraByPitch;                                        // 0x0002   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0003   (0x0001)  MISSED
	FATPCInterploationSpeed                            CameraRotationInterpolation;                                // 0x0004   (0x0014)  
	bool                                               bResetInterpolationSpeedAfterChangeTarget;                  // 0x0018   (0x0001)  
	bool                                               bClampByCameraModeRotationLimits;                           // 0x0019   (0x0001)  
	bool                                               bUseMaxLockDistance;                                        // 0x001A   (0x0001)  
	bool                                               bResetTargetOnReachMaxDistance;                             // 0x001B   (0x0001)  
	float                                              MaxLockDistance;                                            // 0x001C   (0x0004)  
	bool                                               bUseCheckTargetVisibility;                                  // 0x0020   (0x0001)  
	bool                                               bResetLockOnLostVisibleTarget;                              // 0x0021   (0x0001)  
	TEnumAsByte<ECollisionChannel>                     CheckVisibilityTraceChannel;                                // 0x0022   (0x0001)  
	bool                                               bHardLockOnTarget;                                          // 0x0023   (0x0001)  
	bool                                               bPauseLockAfterPlayerInput;                                 // 0x0024   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0025   (0x0003)  MISSED
	float                                              PauseLockAfterPlayerInputTime;                              // 0x0028   (0x0004)  
	bool                                               bResetTargetAfterPlayerInput;                               // 0x002C   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x002D   (0x0003)  MISSED
	FRotator                                           RequiredPlayerInputForResetTarget;                          // 0x0030   (0x0018)  
	float                                              ResetAccumulatedPlayerInputForResetTargetDelay;             // 0x0048   (0x0004)  
	bool                                               bUseDesiredConeRotation;                                    // 0x004C   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x004D   (0x0003)  MISSED
	float                                              DeisredConeRotationYaw;                                     // 0x0050   (0x0004)  
	float                                              CameraRotationSpeed_OLD;                                    // 0x0054   (0x0004)  
	float                                              AdditionalSmoothRotationSpeed_OLD;                          // 0x0058   (0x0004)  
	unsigned char                                      UnknownData04_6[0x4];                                       // 0x005C   (0x0004)  MISSED
};

/// Struct /Script/AdvancedThirdPersonCamera.ATPCInterploationSpeed
/// Size: 0x0014 (0x000000 - 0x000014)
struct FATPCInterploationSpeed
{ 
	unsigned char                                      UnknownData00_2[0x4];                                       // 0x0000   (0x0004)  MISSED
	float                                              InterpSpeed;                                                // 0x0004   (0x0004)  
	EATPCInterpolationType                             InterpType;                                                 // 0x0008   (0x0001)  
	bool                                               bUseInterpSpeedToInterpolation;                             // 0x0009   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x000A   (0x0002)  MISSED
	float                                              InterpSpeedToInterpolation;                                 // 0x000C   (0x0004)  
	float                                              ResetInterpSpeedTolerance;                                  // 0x0010   (0x0004)  
};

/// Struct /Script/AdvancedThirdPersonCamera.ATPCCameraShakesSettings
/// Size: 0x0018 (0x000000 - 0x000018)
struct FATPCCameraShakesSettings
{ 
	UClass*                                            EnterToModeCameraShake;                                     // 0x0000   (0x0008)  
	UClass*                                            RegularCameraShake;                                         // 0x0008   (0x0008)  
	bool                                               bNeedStopAllCameraShakeOnEnterToCameraMode;                 // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/AdvancedThirdPersonCamera.ATPCFollowTerrainSettings
/// Size: 0x0048 (0x000000 - 0x000048)
struct FATPCFollowTerrainSettings
{ 
	UCurveVector*                                      SocketOffsetCurve;                                          // 0x0000   (0x0008)  
	FATPCInterploationSpeed                            SocketOffsetInterpolation;                                  // 0x0008   (0x0014)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x001C   (0x0004)  MISSED
	UCurveFloat*                                       PitchRotationCurve;                                         // 0x0020   (0x0008)  
	FATPCInterploationSpeed                            PitchRotationInterpolation;                                 // 0x0028   (0x0014)  
	float                                              ChangePitchRotationDelay;                                   // 0x003C   (0x0004)  
	float                                              SocketOffsetInterpSpeed_OLD;                                // 0x0040   (0x0004)  
	float                                              AngleRotationInterpSpeed_OLD;                               // 0x0044   (0x0004)  
};

/// Struct /Script/AdvancedThirdPersonCamera.ATPCFadeSettings
/// Size: 0x0030 (0x000000 - 0x000030)
struct FATPCFadeSettings
{ 
	float                                              FadeInTime;                                                 // 0x0000   (0x0004)  
	float                                              FadeOutTime;                                                // 0x0004   (0x0004)  
	float                                              MaterialFadeMinValue;                                       // 0x0008   (0x0004)  
	float                                              MaterialFadeMaxValue;                                       // 0x000C   (0x0004)  
	TArray<FName>                                      MaterialFadeParamNames;                                     // 0x0010   (0x0010)  
	TEnumAsByte<ECollisionChannel>                     FadeChannel;                                                // 0x0020   (0x0001)  
	bool                                               bFadeSelfIfCollision;                                       // 0x0021   (0x0001)  
	bool                                               bUseCustomFadeOutTimeForSelfFade;                           // 0x0022   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0023   (0x0001)  MISSED
	float                                              SelfFadeCustomFadeOutTime;                                  // 0x0024   (0x0004)  
	float                                              SelfFadeCheckRadius;                                        // 0x0028   (0x0004)  
	bool                                               bSelfFadeAttachedActors;                                    // 0x002C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x002D   (0x0003)  MISSED
};

/// Struct /Script/AdvancedThirdPersonCamera.ATPCFOVSettings
/// Size: 0x0030 (0x000000 - 0x000030)
struct FATPCFOVSettings
{ 
	float                                              CameraFOV;                                                  // 0x0000   (0x0004)  
	FATPCInterploationSpeed                            FOVInterpolation;                                           // 0x0004   (0x0014)  
	UCurveFloat*                                       PitchRotationFOVModifier;                                   // 0x0018   (0x0008)  
	UCurveFloat*                                       MovementSpeedFOVModifier;                                   // 0x0020   (0x0008)  
	bool                                               ChangeFOVWhenCineCamera;                                    // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0029   (0x0003)  MISSED
	float                                              InterpolationSpeed_OLD;                                     // 0x002C   (0x0004)  
};

/// Struct /Script/AdvancedThirdPersonCamera.ATPCRotationSettings
/// Size: 0x0120 (0x000000 - 0x000120)
struct FATPCRotationSettings
{ 
	float                                              ViewPitchMin;                                               // 0x0000   (0x0004)  
	float                                              ViewPitchMax;                                               // 0x0004   (0x0004)  
	float                                              ViewYawMin;                                                 // 0x0008   (0x0004)  
	float                                              ViewYawMax;                                                 // 0x000C   (0x0004)  
	FATPCInterploationSpeed                            ViewInterpolation;                                          // 0x0010   (0x0014)  
	bool                                               bEnableRotationOffset;                                      // 0x0024   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0025   (0x0003)  MISSED
	FATPCRotationOffsetSettings                        RotationOffsetSettings;                                     // 0x0028   (0x002C)  
	bool                                               bEnableRoofCollisionCheckSettings;                          // 0x0054   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0055   (0x0003)  MISSED
	FATPCRoofCollisionCheckSettings                    RoofCollisionCheckSettings;                                 // 0x0058   (0x0098)  
	bool                                               bEnableViewRotationToActorRotation;                         // 0x00F0   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x00F1   (0x0003)  MISSED
	FATPCViewRotationToActorRotationSettings           ViewRotationToActorRotationSettings;                        // 0x00F4   (0x0024)  
	bool                                               bUsePawnControlRotation;                                    // 0x0118   (0x0001)  
	bool                                               bInheritPitch;                                              // 0x0119   (0x0001)  
	bool                                               bInheritYaw;                                                // 0x011A   (0x0001)  
	bool                                               bInheritRoll;                                               // 0x011B   (0x0001)  
	float                                              ViewInterpolationSpeed_OLD;                                 // 0x011C   (0x0004)  
};

/// Struct /Script/AdvancedThirdPersonCamera.ATPCViewRotationToActorRotationSettings
/// Size: 0x0024 (0x000000 - 0x000024)
struct FATPCViewRotationToActorRotationSettings
{ 
	float                                              MaxDeltaForChange;                                          // 0x0000   (0x0004)  
	float                                              StartChangeDelay;                                           // 0x0004   (0x0004)  
	FATPCInterploationSpeed                            RotationInterpolation;                                      // 0x0008   (0x0014)  
	float                                              ChangeRotationSpeed_OLD;                                    // 0x001C   (0x0004)  
	float                                              ChangeRotationSpeedInterpSpeed_OLD;                         // 0x0020   (0x0004)  
};

/// Struct /Script/AdvancedThirdPersonCamera.ATPCRoofCollisionCheckSettings
/// Size: 0x0098 (0x000000 - 0x000098)
struct FATPCRoofCollisionCheckSettings
{ 
	TArray<TEnumAsByte>                                TraceObjectTypes;                                           // 0x0000   (0x0010)  
	FVector                                            EyesBoxTraceHalfSize;                                       // 0x0010   (0x0018)  
	float                                              RoofTraceAngleFirst;                                        // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x002C   (0x0004)  MISSED
	FVector                                            RoofBoxTraceHalfSizeFirst;                                  // 0x0030   (0x0018)  
	float                                              RoofTraceAngleSecond;                                       // 0x0048   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x004C   (0x0004)  MISSED
	FVector                                            RoofBoxTraceHalfSizeSecond;                                 // 0x0050   (0x0018)  
	FATPCRotationOffsetSettings                        RotationOffsetSettings;                                     // 0x0068   (0x002C)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0094   (0x0004)  MISSED
};

/// Struct /Script/AdvancedThirdPersonCamera.ATPCRotationOffsetSettings
/// Size: 0x002C (0x000000 - 0x00002C)
struct FATPCRotationOffsetSettings
{ 
	float                                              StartOffsetDelay;                                           // 0x0000   (0x0004)  
	FATPCInterploationSpeed                            RotationInterpolation;                                      // 0x0004   (0x0014)  
	float                                              PitchOffset;                                                // 0x0018   (0x0004)  
	bool                                               bActivateOnlyIfMovement;                                    // 0x001C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x001D   (0x0003)  MISSED
	float                                              MinMovementSpeedForActivate;                                // 0x0020   (0x0004)  
	float                                              ChangeRotationSpeed_OLD;                                    // 0x0024   (0x0004)  
	EATPCInterpolationType                             InterpolationType_OLD;                                      // 0x0028   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0029   (0x0003)  MISSED
};

/// Struct /Script/AdvancedThirdPersonCamera.ATPCLocationSettings
/// Size: 0x00D8 (0x000000 - 0x0000D8)
struct FATPCLocationSettings
{ 
	bool                                               bEnableCameraLocationLag;                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	FATPCCameraLocationLagSettings                     CameraLocationLagSettings;                                  // 0x0004   (0x0014)  
	bool                                               bEnableCameraRotationLag;                                   // 0x0018   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0019   (0x0003)  MISSED
	FATPCCameraRotationLagSettings                     CameraRotationLagSettings;                                  // 0x001C   (0x000C)  
	bool                                               bDoCollisionTest;                                           // 0x0028   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0029   (0x0003)  MISSED
	float                                              ProbeSize;                                                  // 0x002C   (0x0004)  
	TEnumAsByte<ECollisionChannel>                     ProbeChannel;                                               // 0x0030   (0x0001)  
	bool                                               bDoMovementCollisionTest;                                   // 0x0031   (0x0001)  
	unsigned char                                      UnknownData03_5[0x2];                                       // 0x0032   (0x0002)  MISSED
	float                                              MovementCollisionTestDuration;                              // 0x0034   (0x0004)  
	float                                              MovementCollisionTestMinLocationDelta;                      // 0x0038   (0x0004)  
	TEnumAsByte<ECollisionChannel>                     MovementCollisionTestCollisionChannel;                      // 0x003C   (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x003D   (0x0003)  MISSED
	float                                              MinCameraDistance;                                          // 0x0040   (0x0004)  
	float                                              MaxCameraDistance;                                          // 0x0044   (0x0004)  
	bool                                               bSetDistanceToDefaultOnChangeCameraMode;                    // 0x0048   (0x0001)  
	unsigned char                                      UnknownData05_5[0x3];                                       // 0x0049   (0x0003)  MISSED
	float                                              DefaultCameraDistance;                                      // 0x004C   (0x0004)  
	bool                                               bCacheDistanceForCurrentCameraMode;                         // 0x0050   (0x0001)  
	unsigned char                                      UnknownData06_5[0x3];                                       // 0x0051   (0x0003)  MISSED
	FATPCInterploationSpeed                            ZoomInterpolation;                                          // 0x0054   (0x0014)  
	float                                              ZoomDistance;                                               // 0x0068   (0x0004)  
	unsigned char                                      UnknownData07_5[0x4];                                       // 0x006C   (0x0004)  MISSED
	UCurveVector*                                      SocketOffsetCurve;                                          // 0x0070   (0x0008)  
	FATPCInterploationSpeed                            SocketOffsetInterpolation;                                  // 0x0078   (0x0014)  
	unsigned char                                      UnknownData08_5[0x4];                                       // 0x008C   (0x0004)  MISSED
	FVector                                            TargetOffset;                                               // 0x0090   (0x0018)  
	FATPCInterploationSpeed                            TargetOffsetInterpolation;                                  // 0x00A8   (0x0014)  
	unsigned char                                      UnknownData09_5[0x4];                                       // 0x00BC   (0x0004)  MISSED
	UCurveFloat*                                       PitchDistanceCurve;                                         // 0x00C0   (0x0008)  
	EATPCInterpolationType                             ZoomInterpolationType_OLD;                                  // 0x00C8   (0x0001)  
	unsigned char                                      UnknownData10_5[0x3];                                       // 0x00C9   (0x0003)  MISSED
	float                                              ZoomSpeed_OLD;                                              // 0x00CC   (0x0004)  
	float                                              SocketOffsetInterpSpeed_OLD;                                // 0x00D0   (0x0004)  
	float                                              TargetOffsetInterpSpeed_OLD;                                // 0x00D4   (0x0004)  
};

/// Struct /Script/AdvancedThirdPersonCamera.ATPCCameraRotationLagSettings
/// Size: 0x000C (0x000000 - 0x00000C)
struct FATPCCameraRotationLagSettings
{ 
	float                                              CameraLagSpeed;                                             // 0x0000   (0x0004)  
	bool                                               bUseCameraLagSubstepping;                                   // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0005   (0x0003)  MISSED
	float                                              CameraLagMaxTimeStep;                                       // 0x0008   (0x0004)  
};

/// Struct /Script/AdvancedThirdPersonCamera.ATPCCameraLocationLagSettings
/// Size: 0x0014 (0x000000 - 0x000014)
struct FATPCCameraLocationLagSettings
{ 
	bool                                               bEnableCameraLagForXY;                                      // 0x0000   (0x0001)  
	bool                                               bEnableCameraLagForZ;                                       // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0002   (0x0002)  MISSED
	float                                              CameraLagSpeed;                                             // 0x0004   (0x0004)  
	float                                              CameraLagMaxDistance;                                       // 0x0008   (0x0004)  
	bool                                               bDrawDebugLagMarkers;                                       // 0x000C   (0x0001)  
	bool                                               bUseCameraLagSubstepping;                                   // 0x000D   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x000E   (0x0002)  MISSED
	float                                              CameraLagMaxTimeStep;                                       // 0x0010   (0x0004)  
};

/// Struct /Script/AdvancedThirdPersonCamera.ATPCCameraDebugRules
/// Size: 0x0007 (0x000000 - 0x000007)
struct FATPCCameraDebugRules
{ 
	bool                                               bPrintErrorsToScreen;                                       // 0x0000   (0x0001)  
	bool                                               bEnableLocationObjectDebug;                                 // 0x0001   (0x0001)  
	bool                                               bEnableRoofCollisionCheckDebug;                             // 0x0002   (0x0001)  
	bool                                               bEnableDrawFadeShapeDebug;                                  // 0x0003   (0x0001)  
	bool                                               bFollowTerrainEnableDebug;                                  // 0x0004   (0x0001)  
	bool                                               bEnableLockOnTargetDebug;                                   // 0x0005   (0x0001)  
	bool                                               bLockOnTargetShowTargetDebug;                               // 0x0006   (0x0001)  
};

/// Class /Script/AdvancedThirdPersonCamera.ATPCArrowDebugActor
/// Size: 0x0018 (0x000290 - 0x0002A8)
class AATPCArrowDebugActor : public AActor : AActor
{ 
public:
	USceneComponent*                                   SceneRootcomponent;                                         // 0x0290   (0x0008)  
	UArrowComponent*                                   ArrowComponent;                                             // 0x0298   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x02A0   (0x0008)  MISSED


	/// Functions
	// Function /Script/AdvancedThirdPersonCamera.ATPCArrowDebugActor.PickActor
	void PickActor(AActor* Actor);                                                                                           // [0xbdd1e0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AdvancedThirdPersonCamera.ATPCCameraBaseObject
/// Size: 0x0008 (0x000028 - 0x000030)
class UATPCCameraBaseObject : public UObject : UObject
{ 
public:
	UATPCCameraComponent*                              OwningCamera;                                               // 0x0028   (0x0008)  


	/// Functions
	// Function /Script/AdvancedThirdPersonCamera.ATPCCameraBaseObject.Validate
	void Validate(bool bWithInterpolation);                                                                                  // [0xbddaa0] Native|Public|BlueprintCallable 
	// Function /Script/AdvancedThirdPersonCamera.ATPCCameraBaseObject.K2_Validate
	void K2_Validate(bool bWithInterpolation);                                                                               // [0x2407bf0] Event|Public|BlueprintEvent 
	// Function /Script/AdvancedThirdPersonCamera.ATPCCameraBaseObject.K2_Tick
	void K2_Tick(float DeltaSeconds);                                                                                        // [0x2407bf0] Event|Public|BlueprintEvent 
	// Function /Script/AdvancedThirdPersonCamera.ATPCCameraBaseObject.K2_OnExitCameraMode
	void K2_OnExitCameraMode();                                                                                              // [0x2407bf0] Event|Public|BlueprintEvent 
	// Function /Script/AdvancedThirdPersonCamera.ATPCCameraBaseObject.K2_OnEnterCameraMode
	void K2_OnEnterCameraMode(bool bWithInterpolation);                                                                      // [0x2407bf0] Event|Public|BlueprintEvent 
	// Function /Script/AdvancedThirdPersonCamera.ATPCCameraBaseObject.GetPlayerController
	APlayerController* GetPlayerController();                                                                                // [0xbdced0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AdvancedThirdPersonCamera.ATPCCameraBaseObject.GetPlayerCameraManager
	APlayerCameraManager* GetPlayerCameraManager();                                                                          // [0xbdce70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AdvancedThirdPersonCamera.ATPCCameraBaseObject.GetOwningPawn
	APawn* GetOwningPawn();                                                                                                  // [0xbdce10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AdvancedThirdPersonCamera.ATPCCameraBaseObject.GetOwningCamera
	UATPCCameraComponent* GetOwningCamera();                                                                                 // [0xbdcde0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AdvancedThirdPersonCamera.ATPCCameraBaseObject.GetOwningActor
	AActor* GetOwningActor();                                                                                                // [0xbdcdb0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AdvancedThirdPersonCamera.ATPCCameraComponent
/// Size: 0x0460 (0x0002A0 - 0x000700)
class UATPCCameraComponent : public USceneComponent : USceneComponent
{ 
public:
	FMulticastInlineDelegate                           OnCameraModeChangedDelegate;                                // 0x02A0   (0x0010)  
	FATPCCameraDebugRules                              DebugRules;                                                 // 0x02B0   (0x0007)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x02B7   (0x0001)  MISSED
	FGameplayTag                                       DefaultCameraModeTag;                                       // 0x02B8   (0x0008)  
	TArray<UATPCCameraModeDataAsset*>                  CameraModesAssets;                                          // 0x02C0   (0x0010)  
	TMap<FGameplayTag, UATPCCameraModeDataAsset*>      SortedCameraModes;                                          // 0x02D0   (0x0050)  
	UATPCCameraModeDataAsset*                          CustomCameraMode;                                           // 0x0320   (0x0008)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0328   (0x0008)  MISSED
	UClass*                                            LocationObjectClass;                                        // 0x0330   (0x0008)  
	UClass*                                            FOVObjectClass;                                             // 0x0338   (0x0008)  
	UClass*                                            FadingObjectClass;                                          // 0x0340   (0x0008)  
	UClass*                                            FollowTerrainObjectClass;                                   // 0x0348   (0x0008)  
	UClass*                                            CameraShakesObjectClass;                                    // 0x0350   (0x0008)  
	UClass*                                            LockOnTargetObjectClass;                                    // 0x0358   (0x0008)  
	UATPCCameraLocationObject*                         LocationObject;                                             // 0x0360   (0x0008)  
	UATPCCameraFOVObject*                              FOVObject;                                                  // 0x0368   (0x0008)  
	UATPCCameraFadingObject*                           FadingObject;                                               // 0x0370   (0x0008)  
	UATPCCameraFollowTerrainObject*                    FollowTerrainObject;                                        // 0x0378   (0x0008)  
	UATPCCameraShakesObject*                           CameraShakesObject;                                         // 0x0380   (0x0008)  
	UATPCCameraLockOnTargetObject*                     LockOnTargetObject;                                         // 0x0388   (0x0008)  
	TArray<UATPCCameraBaseObject*>                     CameraObjList;                                              // 0x0390   (0x0010)  
	unsigned char                                      UnknownData02_5[0x8];                                       // 0x03A0   (0x0008)  MISSED
	UATPCCameraModeDataAsset*                          EmptyCameraMode;                                            // 0x03A8   (0x0008)  
	FATPCCameraMode                                    CameraModeDEV;                                              // 0x03B0   (0x0348)  
	unsigned char                                      UnknownData03_6[0x8];                                       // 0x06F8   (0x0008)  MISSED


	/// Functions
	// Function /Script/AdvancedThirdPersonCamera.ATPCCameraComponent.ZoomOut
	void ZoomOut();                                                                                                          // [0xbddbe0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AdvancedThirdPersonCamera.ATPCCameraComponent.ZoomIn
	void ZoomIn();                                                                                                           // [0xbddbc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AdvancedThirdPersonCamera.ATPCCameraComponent.ValidateComponents
	void ValidateComponents(bool bWithInterpolation);                                                                        // [0xbddb30] Native|Public|BlueprintCallable 
	// Function /Script/AdvancedThirdPersonCamera.ATPCCameraComponent.SetCustomCameraMode
	void SetCustomCameraMode(UATPCCameraModeDataAsset* CameraMode, bool bWithInterpolation);                                 // [0xbdd7b0] Native|Public|BlueprintCallable 
	// Function /Script/AdvancedThirdPersonCamera.ATPCCameraComponent.SetCameraMode
	void SetCameraMode(FGameplayTag CameraModeTag, bool bWithInterpolation, bool bForceSet);                                 // [0xbdd690] Native|Public|BlueprintCallable 
	// Function /Script/AdvancedThirdPersonCamera.ATPCCameraComponent.SetCameraDistance
	void SetCameraDistance(float NewDistance, bool bInterpolate);                                                            // [0xbdd4d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AdvancedThirdPersonCamera.ATPCCameraComponent.ResetCustomCameraMode
	void ResetCustomCameraMode(bool bWithInterpolation);                                                                     // [0xbdd420] Final|Native|Public|BlueprintCallable 
	// Function /Script/AdvancedThirdPersonCamera.ATPCCameraComponent.RemoveCameraMode
	void RemoveCameraMode(FGameplayTag CameraModeName);                                                                      // [0xbdd270] Final|Native|Public|BlueprintCallable 
	// Function /Script/AdvancedThirdPersonCamera.ATPCCameraComponent.OnCameraModeChangedDelegate__DelegateSignature
	void OnCameraModeChangedDelegate__DelegateSignature();                                                                   // [0x2407bf0] MulticastDelegate|Public|Delegate 
	// Function /Script/AdvancedThirdPersonCamera.ATPCCameraComponent.IsSetCustomCameraMode
	bool IsSetCustomCameraMode();                                                                                            // [0xbdd1b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AdvancedThirdPersonCamera.ATPCCameraComponent.IsCineCameraActive
	bool IsCineCameraActive();                                                                                               // [0xbdd150] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AdvancedThirdPersonCamera.ATPCCameraComponent.HasCameraMode
	bool HasCameraMode(FGameplayTag CameraModeName);                                                                         // [0xbdd0b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AdvancedThirdPersonCamera.ATPCCameraComponent.GetPlayerController
	APlayerController* GetPlayerController();                                                                                // [0xbdcf00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AdvancedThirdPersonCamera.ATPCCameraComponent.GetPlayerCameraManager
	APlayerCameraManager* GetPlayerCameraManager();                                                                          // [0xbdcea0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AdvancedThirdPersonCamera.ATPCCameraComponent.GetOwningPawn
	APawn* GetOwningPawn();                                                                                                  // [0xbdce40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AdvancedThirdPersonCamera.ATPCCameraComponent.GetInitialCameraModeTag
	FGameplayTag GetInitialCameraModeTag();                                                                                  // [0xbdcd30] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/AdvancedThirdPersonCamera.ATPCCameraComponent.GetDesiredCameraModeTag
	FGameplayTag GetDesiredCameraModeTag();                                                                                  // [0xbdcca0] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/AdvancedThirdPersonCamera.ATPCCameraComponent.GetCurrentCameraModeTag
	FGameplayTag GetCurrentCameraModeTag();                                                                                  // [0xbdcc30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AdvancedThirdPersonCamera.ATPCCameraComponent.GetCurrentCameraMode
	UATPCCameraModeDataAsset* GetCurrentCameraMode();                                                                        // [0xbdcc00] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AdvancedThirdPersonCamera.ATPCCameraComponent.GetCameraShakesObject
	UATPCCameraShakesObject* GetCameraShakesObject();                                                                        // [0xbdcbb0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AdvancedThirdPersonCamera.ATPCCameraComponent.GetCameraRotation
	FRotator GetCameraRotation();                                                                                            // [0xbdcb30] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AdvancedThirdPersonCamera.ATPCCameraComponent.GetCameraModeTagFromOverlapCameraVolume
	FGameplayTag GetCameraModeTagFromOverlapCameraVolume();                                                                  // [0xbdcaf0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AdvancedThirdPersonCamera.ATPCCameraComponent.GetCameraMode
	UATPCCameraModeDataAsset* GetCameraMode(FGameplayTag CameraModeName);                                                    // [0xbdca50] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AdvancedThirdPersonCamera.ATPCCameraComponent.GetCameraLockOnTargetObject
	UATPCCameraLockOnTargetObject* GetCameraLockOnTargetObject();                                                            // [0xbdca30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AdvancedThirdPersonCamera.ATPCCameraComponent.GetCameraLocationObject
	UATPCCameraLocationObject* GetCameraLocationObject();                                                                    // [0xbdca10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AdvancedThirdPersonCamera.ATPCCameraComponent.GetCameraLocation
	FVector GetCameraLocation();                                                                                             // [0xbdc990] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AdvancedThirdPersonCamera.ATPCCameraComponent.GetCameraFOVObject
	UATPCCameraFOVObject* GetCameraFOVObject();                                                                              // [0xbdc930] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AdvancedThirdPersonCamera.ATPCCameraComponent.GetCameraFollowTerrainObject
	UATPCCameraFollowTerrainObject* GetCameraFollowTerrainObject();                                                          // [0xbdc970] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AdvancedThirdPersonCamera.ATPCCameraComponent.GetCameraFadingObject
	UATPCCameraFadingObject* GetCameraFadingObject();                                                                        // [0xbdc950] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AdvancedThirdPersonCamera.ATPCCameraComponent.GetCameraDistance
	float GetCameraDistance();                                                                                               // [0xbdc8d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AdvancedThirdPersonCamera.ATPCCameraComponent.FindOverlapCameraVolume
	AATPCCameraVolume* FindOverlapCameraVolume();                                                                            // [0xbdc850] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AdvancedThirdPersonCamera.ATPCCameraComponent.ClearAllCameraModes
	void ClearAllCameraModes();                                                                                              // [0xbdc7f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AdvancedThirdPersonCamera.ATPCCameraComponent.CanSetCameraMode
	bool CanSetCameraMode(FGameplayTag CameraModeTag);                                                                       // [0xbdc750] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/AdvancedThirdPersonCamera.ATPCCameraComponent.AddCameraMode
	void AddCameraMode(UATPCCameraModeDataAsset* CameraMode);                                                                // [0xbdc380] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AdvancedThirdPersonCamera.ATPCCameraFadingObject
/// Size: 0x00B0 (0x000030 - 0x0000E0)
class UATPCCameraFadingObject : public UATPCCameraBaseObject : UATPCCameraBaseObject
{ 
public:
	unsigned char                                      UnknownData00_1[0xB0];                                      // 0x0030   (0x00B0)  MISSED
};

/// Class /Script/AdvancedThirdPersonCamera.ATPCCameraFollowTerrainObject
/// Size: 0x0060 (0x000030 - 0x000090)
class UATPCCameraFollowTerrainObject : public UATPCCameraBaseObject : UATPCCameraBaseObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x60];                                      // 0x0030   (0x0060)  MISSED
};

/// Class /Script/AdvancedThirdPersonCamera.ATPCCameraFOVObject
/// Size: 0x0000 (0x000030 - 0x000030)
class UATPCCameraFOVObject : public UATPCCameraBaseObject : UATPCCameraBaseObject
{ 
public:
};

/// Class /Script/AdvancedThirdPersonCamera.ATPCCameraLocationObject
/// Size: 0x03B0 (0x000030 - 0x0003E0)
class UATPCCameraLocationObject : public UATPCCameraBaseObject : UATPCCameraBaseObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x3B0];                                     // 0x0030   (0x03B0)  MISSED
};

/// Class /Script/AdvancedThirdPersonCamera.ATPCCameraLockOnTargetObject
/// Size: 0x0060 (0x000030 - 0x000090)
class UATPCCameraLockOnTargetObject : public UATPCCameraBaseObject : UATPCCameraBaseObject
{ 
public:
	FMulticastInlineDelegate                           OnTargetChangeDelegate;                                     // 0x0030   (0x0010)  
	unsigned char                                      UnknownData00_5[0x30];                                      // 0x0040   (0x0030)  MISSED
	AATPCArrowDebugActor*                              TargetDebugActor;                                           // 0x0070   (0x0008)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x0078   (0x0018)  MISSED


	/// Functions
	// Function /Script/AdvancedThirdPersonCamera.ATPCCameraLockOnTargetObject.SetTargetActor
	bool SetTargetActor(AActor* NewTargetActor);                                                                             // [0xbdd970] Native|Public|BlueprintCallable 
	// Function /Script/AdvancedThirdPersonCamera.ATPCCameraLockOnTargetObject.OnTargetChangeDelegate__DelegateSignature
	void OnTargetChangeDelegate__DelegateSignature(AActor* NewTarget, EATPCChangeTargetReason ChangeTargetReason);           // [0x2407bf0] MulticastDelegate|Public|Delegate 
	// Function /Script/AdvancedThirdPersonCamera.ATPCCameraLockOnTargetObject.GetTargetActor
	AActor* GetTargetActor();                                                                                                // [0xbdcfa0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AdvancedThirdPersonCamera.ATPCCameraModeDataAsset
/// Size: 0x0360 (0x000030 - 0x000390)
class UATPCCameraModeDataAsset : public UDataAsset : UDataAsset
{ 
public:
	FGameplayTag                                       CameraModeTag;                                              // 0x0030   (0x0008)  
	FATPCCameraMode                                    CameraModeSettings;                                         // 0x0038   (0x0348)  
	TArray<UATPCCameraModeScript*>                     CameraModeScripts;                                          // 0x0380   (0x0010)  
};

/// Class /Script/AdvancedThirdPersonCamera.ATPCCameraModeScript
/// Size: 0x0018 (0x000028 - 0x000040)
class UATPCCameraModeScript : public UObject : UObject
{ 
public:
	UATPCCameraComponent*                              OwningCamera;                                               // 0x0028   (0x0008)  
	bool                                               bEnableTick;                                                // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0031   (0x0003)  MISSED
	EATPCCameraModeScriptTickGroup                     TickGroup;                                                  // 0x0034   (0x0004)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0038   (0x0008)  MISSED


	/// Functions
	// Function /Script/AdvancedThirdPersonCamera.ATPCCameraModeScript.K2_Tick
	void K2_Tick(UATPCCameraComponent* Camera, float DeltaSeconds);                                                          // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Script/AdvancedThirdPersonCamera.ATPCCameraModeScript.K2_OnExitCameraMode
	void K2_OnExitCameraMode(UATPCCameraComponent* Camera);                                                                  // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Script/AdvancedThirdPersonCamera.ATPCCameraModeScript.K2_OnEnterCameraMode
	void K2_OnEnterCameraMode(UATPCCameraComponent* Camera);                                                                 // [0x2407bf0] Event|Protected|BlueprintEvent 
};

/// Class /Script/AdvancedThirdPersonCamera.ATPCCameraModeScript_ChangeMovementSpeed
/// Size: 0x0010 (0x000040 - 0x000050)
class UATPCCameraModeScript_ChangeMovementSpeed : public UATPCCameraModeScript : UATPCCameraModeScript
{ 
public:
	float                                              NewMaxMovementSpeed;                                        // 0x0040   (0x0004)  
	bool                                               bRestoreOldMovementSpeedOnExitCameraMode;                   // 0x0044   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0045   (0x0003)  MISSED
	float                                              OldMaxMovementSpeed;                                        // 0x0048   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Class /Script/AdvancedThirdPersonCamera.ATPCCameraModeScript_PawnUseControllerRotation
/// Size: 0x0008 (0x000040 - 0x000048)
class UATPCCameraModeScript_PawnUseControllerRotation : public UATPCCameraModeScript : UATPCCameraModeScript
{ 
public:
	bool                                               OrientRotationToMovement;                                   // 0x0040   (0x0001)  
	bool                                               UseControllerDesiredRotation;                               // 0x0041   (0x0001)  
	bool                                               bRestoreOldValuesOnExitCameraMode;                          // 0x0042   (0x0001)  
	bool                                               OldOrientRotationToMovement;                                // 0x0043   (0x0001)  
	bool                                               OldUseControllerDesiredRotation;                            // 0x0044   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0045   (0x0003)  MISSED
};

/// Class /Script/AdvancedThirdPersonCamera.ATPCCameraModeScript_RotateActorToTarget
/// Size: 0x0008 (0x000040 - 0x000048)
class UATPCCameraModeScript_RotateActorToTarget : public UATPCCameraModeScript : UATPCCameraModeScript
{ 
public:
	float                                              RotationSpeed;                                              // 0x0040   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0044   (0x0004)  MISSED
};

/// Class /Script/AdvancedThirdPersonCamera.ATPCCameraShakesObject
/// Size: 0x0010 (0x000030 - 0x000040)
class UATPCCameraShakesObject : public UATPCCameraBaseObject : UATPCCameraBaseObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0030   (0x0010)  MISSED
};

/// Class /Script/AdvancedThirdPersonCamera.ATPCCameraVolume
/// Size: 0x0020 (0x0002C8 - 0x0002E8)
class AATPCCameraVolume : public AVolume : AVolume
{ 
public:
	FGameplayTag                                       CameraModeTag;                                              // 0x02C8   (0x0008)  
	bool                                               bChangeCameraModeWithInterp;                                // 0x02D0   (0x0001)  
	bool                                               bCheckFilterActorClassWithCamera;                           // 0x02D1   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x02D2   (0x0006)  MISSED
	TArray<UClass*>                                    FilterActorClassesWithCamera;                               // 0x02D8   (0x0010)  


	/// Functions
	// Function /Script/AdvancedThirdPersonCamera.ATPCCameraVolume.OnVolumeEndOverlap
	void OnVolumeEndOverlap(AActor* OverlappedActor, AActor* OtherActor);                                                    // [0xbe3dd0] Final|Native|Protected 
	// Function /Script/AdvancedThirdPersonCamera.ATPCCameraVolume.OnVolumeBeginOverlap
	void OnVolumeBeginOverlap(AActor* OverlappedActor, AActor* OtherActor);                                                  // [0xbe3d00] Final|Native|Protected 
};

/// Class /Script/AdvancedThirdPersonCamera.ATPCFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UATPCFunctionLibrary : public UBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/AdvancedThirdPersonCamera.ATPCLockOnTargetLocationComponent
/// Size: 0x0000 (0x0002A0 - 0x0002A0)
class UATPCLockOnTargetLocationComponent : public USceneComponent : USceneComponent
{ 
public:
};

/// Enum /Script/AdvancedThirdPersonCamera.EATPCInterpolationType
/// Size: 0x03
enum EATPCInterpolationType : uint8_t
{
	EATPCInterpolationType__SmoothInterpolation0                                     = 0,
	EATPCInterpolationType__ConstInterpolation1                                      = 1,
	EATPCInterpolationType__EATPCInterpolationType_MAX2                              = 2
};

/// Enum /Script/AdvancedThirdPersonCamera.EATPCChangeTargetReason
/// Size: 0x06
enum EATPCChangeTargetReason : uint8_t
{
	EATPCChangeTargetReason__SetNew0                                                 = 0,
	EATPCChangeTargetReason__LostByExitCameraMode1                                   = 1,
	EATPCChangeTargetReason__LostByDistance2                                         = 2,
	EATPCChangeTargetReason__LostByVisible3                                          = 3,
	EATPCChangeTargetReason__LostByPlayerInput4                                      = 4,
	EATPCChangeTargetReason__EATPCChangeTargetReason_MAX5                            = 5
};

/// Enum /Script/AdvancedThirdPersonCamera.EATPCCameraModeScriptTickGroup
/// Size: 0x03
enum EATPCCameraModeScriptTickGroup : uint8_t
{
	EATPCCameraModeScriptTickGroup__PreCameraObjectTick0                             = 0,
	EATPCCameraModeScriptTickGroup__PostCameraObjectTick1                            = 1,
	EATPCCameraModeScriptTickGroup__EATPCCameraModeScriptTickGroup_MAX2              = 2
};

