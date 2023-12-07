
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package SurvivalPlayer_V2.

/// Class /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C
/// Size: 0x07C1 (0x004610 - 0x004DD1)
class ASurvivalPlayer_V2_C : public ASurvivalPlayer_Test_C : ASurvivalPlayer_Test_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x4610   (0x0008)  
	UNiagaraComponent*                                 FlowmapBrush_NPC;                                           // 0x4618   (0x0008)  
	UBPC_Taunt_C*                                      BPC_Taunt;                                                  // 0x4620   (0x0008)  
	UNiagaraComponent*                                 NS_CH_Ambient;                                              // 0x4628   (0x0008)  
	UNiagaraComponent*                                 NS_CH_Garbage;                                              // 0x4630   (0x0008)  
	UNiagaraComponent*                                 NS_CH_Leaves;                                               // 0x4638   (0x0008)  
	UIconComponent_C*                                  IconComponent;                                              // 0x4640   (0x0008)  
	UAnimationURO*                                     AnimationURO;                                               // 0x4648   (0x0008)  
	UBPC_TickIntervalController_C*                     BPC_TickIntervalController;                                 // 0x4650   (0x0008)  
	UChildActorComponent*                              MotionBlur;                                                 // 0x4658   (0x0008)  
	UPlayerCutsceneComponent_C*                        PlayerCutsceneComponent;                                    // 0x4660   (0x0008)  
	USceneComponent*                                   WP_Check_Source;                                            // 0x4668   (0x0008)  
	USphereComponent*                                  SphereProjectileNear;                                       // 0x4670   (0x0008)  
	float                                              MB_AimTimeline_Strength_9F3BD84C47A467CB33BF269C179C850E;   // 0x4678   (0x0004)  
	TEnumAsByte<ETimelineDirection>                    MB_AimTimeline__Direction_9F3BD84C47A467CB33BF269C179C850E; // 0x467C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x467D   (0x0003)  MISSED
	UTimelineComponent*                                MB_AimTimeline;                                             // 0x4680   (0x0008)  
	float                                              PhysicBlendIdle_NewTrack_0_76D8F57447EA41D946F93F9F627BA0A0; // 0x4688   (0x0004)  
	TEnumAsByte<ETimelineDirection>                    PhysicBlendIdle__Direction_76D8F57447EA41D946F93F9F627BA0A0; // 0x468C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x468D   (0x0003)  MISSED
	UTimelineComponent*                                PhysicBlendIdle;                                            // 0x4690   (0x0008)  
	double                                             Strength_Multiplyer;                                        // 0x4698   (0x0008)  
	bool                                               LocalHas_Movement_Input;                                    // 0x46A0   (0x0001)  
	TEnumAsByte<MovementType>                          lOCALmOVEMENTtYPE;                                          // 0x46A1   (0x0001)  
	unsigned char                                      UnknownData02_5[0x6];                                       // 0x46A2   (0x0006)  MISSED
	ABP_TrajectorySpline_C*                            Trajectory;                                                 // 0x46A8   (0x0008)  
	UMaterialInterface*                                Skin_Material;                                              // 0x46B0   (0x0008)  
	TWeakObjectPtr<UClass*>                            Throw_Weapon;                                               // 0x46B8   (0x0030)  
	FString                                            Throw_weapon_name;                                          // 0x46E8   (0x0010)  
	bool                                               BreathHolded;                                               // 0x46F8   (0x0001)  
	unsigned char                                      UnknownData03_5[0x7];                                       // 0x46F9   (0x0007)  MISSED
	double                                             BreathHoldValue;                                            // 0x4700   (0x0008)  
	FTimerHandle                                       BreathActiveTimer;                                          // 0x4708   (0x0008)  
	UMaterialInterface*                                LastHairMaterial;                                           // 0x4710   (0x0008)  
	FFMODEventInstance                                 NewVar_City_Ambient;                                        // 0x4718   (0x0008)  
	FFMODEventInstance                                 City_Reverb;                                                // 0x4720   (0x0008)  
	UClass*                                            ExplosiveItem;                                              // 0x4728   (0x0008)  
	bool                                               GrenadeRSpawn;                                              // 0x4730   (0x0001)  
	unsigned char                                      UnknownData04_5[0x7];                                       // 0x4731   (0x0007)  MISSED
	FTimerHandle                                       TimeGrenadeInHand;                                          // 0x4738   (0x0008)  
	ESpawnActorCollisionHandlingMethod                 Collision_Handling_Override;                                // 0x4740   (0x0001)  
	unsigned char                                      UnknownData05_5[0x7];                                       // 0x4741   (0x0007)  MISSED
	FTimerHandle                                       TimeHandleDrawTrajectory;                                   // 0x4748   (0x0008)  
	bool                                               ActivateGrenadeWithTrajectory;                              // 0x4750   (0x0001)  
	unsigned char                                      UnknownData06_5[0x7];                                       // 0x4751   (0x0007)  MISSED
	UAnimMontage*                                      Montage_to_Play;                                            // 0x4758   (0x0008)  
	double                                             TimePressedLeftMouse;                                       // 0x4760   (0x0008)  
	bool                                               TimePressed;                                                // 0x4768   (0x0001)  
	bool                                               DelayThrow;                                                 // 0x4769   (0x0001)  
	unsigned char                                      UnknownData07_5[0x6];                                       // 0x476A   (0x0006)  MISSED
	double                                             DelayGrenade;                                               // 0x4770   (0x0008)  
	bool                                               InterruptedThrowAnim;                                       // 0x4778   (0x0001)  
	bool                                               GrenadeKeyDown;                                             // 0x4779   (0x0001)  
	bool                                               FastThrowGrenade;                                           // 0x477A   (0x0001)  
	unsigned char                                      UnknownData08_5[0x5];                                       // 0x477B   (0x0005)  MISSED
	UClass*                                            FakeGrenade;                                                // 0x4780   (0x0008)  
	FFGrenadeInfo                                      ThrowableInfo;                                              // 0x4788   (0x0348)  
	TEnumAsByte<Enum_PlayerState>                      CurrentState;                                               // 0x4AD0   (0x0001)  
	TEnumAsByte<Enum_PlayerState>                      Initial_Player_State;                                       // 0x4AD1   (0x0001)  
	unsigned char                                      UnknownData09_5[0x6];                                       // 0x4AD2   (0x0006)  MISSED
	USurviveAnimator1_Sound_C*                         Anim_Ref;                                                   // 0x4AD8   (0x0008)  
	bool                                               Do_Debug_;                                                  // 0x4AE0   (0x0001)  
	unsigned char                                      UnknownData10_5[0x7];                                       // 0x4AE1   (0x0007)  MISSED
	double                                             Player_Elevation;                                           // 0x4AE8   (0x0008)  
	double                                             MinVertigoElevation;                                        // 0x4AF0   (0x0008)  
	bool                                               IsVertigo_;                                                 // 0x4AF8   (0x0001)  
	bool                                               ExperementingVertigo;                                       // 0x4AF9   (0x0001)  
	unsigned char                                      UnknownData11_5[0x6];                                       // 0x4AFA   (0x0006)  MISSED
	FVector                                            VertigoEndTrace_Z_only_;                                    // 0x4B00   (0x0018)  
	TEnumAsByte<EDrawDebugTrace>                       VertigoLineTrace_Debug_;                                    // 0x4B18   (0x0001)  
	bool                                               EdgeFrontForward;                                           // 0x4B19   (0x0001)  
	bool                                               EdgeLeft;                                                   // 0x4B1A   (0x0001)  
	bool                                               EdgeBack;                                                   // 0x4B1B   (0x0001)  
	bool                                               EdgeRight;                                                  // 0x4B1C   (0x0001)  
	unsigned char                                      UnknownData12_5[0x3];                                       // 0x4B1D   (0x0003)  MISSED
	double                                             Player_Evalation;                                           // 0x4B20   (0x0008)  
	double                                             MinVertigoEvaltion;                                         // 0x4B28   (0x0008)  
	double                                             MaxVertigo;                                                 // 0x4B30   (0x0008)  
	UFMODAudioComponent*                               FMODBreathingDefault;                                       // 0x4B38   (0x0008)  
	UFMODAudioComponent*                               FMODHealthBreathing;                                        // 0x4B40   (0x0008)  
	UFMODAudioComponent*                               FMODStaminaLow;                                             // 0x4B48   (0x0008)  
	UFMODAudioComponent*                               FMODNearProjectile;                                         // 0x4B50   (0x0008)  
	UFMODAudioComponent*                               FMODVertigo;                                                // 0x4B58   (0x0008)  
	UFMODAudioComponent*                               FMODBreathingCrouch;                                        // 0x4B60   (0x0008)  
	UFMODEvent*                                        FModEventBreathingCrouch;                                   // 0x4B68   (0x0008)  
	UFMODEvent*                                        FModEventBreathingStamina;                                  // 0x4B70   (0x0008)  
	UFMODEvent*                                        FModEventBreathingHealth;                                   // 0x4B78   (0x0008)  
	UFMODEvent*                                        FModEventDefaultBreathing;                                  // 0x4B80   (0x0008)  
	UFMODEvent*                                        FModEventNearProjectile;                                    // 0x4B88   (0x0008)  
	UFMODAudioComponent*                               FMODBreathingAim;                                           // 0x4B90   (0x0008)  
	UFMODEvent*                                        FModEventBreathingAim;                                      // 0x4B98   (0x0008)  
	UFMODEvent*                                        FModEventBreathingVertigo;                                  // 0x4BA0   (0x0008)  
	double                                             CurrentPlayerFOV;                                           // 0x4BA8   (0x0008)  
	double                                             FOVAimGrenade;                                              // 0x4BB0   (0x0008)  
	bool                                               LeverDestroy;                                               // 0x4BB8   (0x0001)  
	unsigned char                                      UnknownData13_5[0x7];                                       // 0x4BB9   (0x0007)  MISSED
	UClass*                                            Explosion;                                                  // 0x4BC0   (0x0008)  
	AExplosive_Item_C*                                 As_Explosive_Item;                                          // 0x4BC8   (0x0008)  
	double                                             WeaponAngleToWall;                                          // 0x4BD0   (0x0008)  
	bool                                               BlockingHit;                                                // 0x4BD8   (0x0001)  
	unsigned char                                      UnknownData14_5[0x7];                                       // 0x4BD9   (0x0007)  MISSED
	FFMODEventInstance                                 Ambient_Hub;                                                // 0x4BE0   (0x0008)  
	bool                                               SpawnInHub;                                                 // 0x4BE8   (0x0001)  
	unsigned char                                      UnknownData15_5[0x7];                                       // 0x4BE9   (0x0007)  MISSED
	ABP_LinearMotionBlurCage_C*                        BP_LinearMotionBlurCage;                                    // 0x4BF0   (0x0008)  
	bool                                               AimGrenadePressed;                                          // 0x4BF8   (0x0001)  
	unsigned char                                      UnknownData16_5[0x3];                                       // 0x4BF9   (0x0003)  MISSED
	FGameplayTag                                       RememberStandingCameraMode;                                 // 0x4BFC   (0x0008)  
	unsigned char                                      UnknownData17_5[0x4];                                       // 0x4C04   (0x0004)  MISSED
	ABP_ScopeBase_C*                                   RememberScope;                                              // 0x4C08   (0x0008)  
	bool                                               NeedToDelete_RememberScoping;                               // 0x4C10   (0x0001)  
	unsigned char                                      UnknownData18_5[0x7];                                       // 0x4C11   (0x0007)  MISSED
	FFMODEventInstance                                 City_Abandoned;                                             // 0x4C18   (0x0008)  
	float                                              Gravity_Scale_Default;                                      // 0x4C20   (0x0004)  
	bool                                               GrenadeLMB;                                                 // 0x4C24   (0x0001)  
	bool                                               GrenadeRMB;                                                 // 0x4C25   (0x0001)  
	bool                                               BlockGrenade;                                               // 0x4C26   (0x0001)  
	unsigned char                                      UnknownData19_5[0x1];                                       // 0x4C27   (0x0001)  MISSED
	int32_t                                            PowerThrowGrenade;                                          // 0x4C28   (0x0004)  
	unsigned char                                      UnknownData20_5[0x4];                                       // 0x4C2C   (0x0004)  MISSED
	double                                             TimePressedRightMouse;                                      // 0x4C30   (0x0008)  
	FMulticastInlineDelegate                           OnInputActionWeaponSlot5;                                   // 0x4C38   (0x0010)  
	FTimerHandle                                       TimerExplosive;                                             // 0x4C48   (0x0008)  
	bool                                               RingOut;                                                    // 0x4C50   (0x0001)  
	bool                                               isLeftTilt;                                                 // 0x4C51   (0x0001)  
	unsigned char                                      UnknownData21_5[0x6];                                       // 0x4C52   (0x0006)  MISSED
	FVector                                            DefaultLeftTilt;                                            // 0x4C58   (0x0018)  
	FVector                                            LeftTilt;                                                   // 0x4C70   (0x0018)  
	FVector                                            RightTilt;                                                  // 0x4C88   (0x0018)  
	UATPCCameraLocationObjectV2_C*                     ATPCLocObject;                                              // 0x4CA0   (0x0008)  
	bool                                               PlayerInCutscene;                                           // 0x4CA8   (0x0001)  
	unsigned char                                      UnknownData22_5[0x7];                                       // 0x4CA9   (0x0007)  MISSED
	double                                             HipFireAlpha;                                               // 0x4CB0   (0x0008)  
	bool                                               InHipFire;                                                  // 0x4CB8   (0x0001)  
	unsigned char                                      UnknownData23_5[0x7];                                       // 0x4CB9   (0x0007)  MISSED
	FRotator                                           RotOnHipFire;                                               // 0x4CC0   (0x0018)  
	FVector                                            TargetTilt;                                                 // 0x4CD8   (0x0018)  
	double                                             TiltInterpSpeed;                                            // 0x4CF0   (0x0008)  
	FVector                                            CurrentTilt;                                                // 0x4CF8   (0x0018)  
	FRotator                                           GPSOrigRot;                                                 // 0x4D10   (0x0018)  
	FVector                                            GPSLocOffset;                                               // 0x4D28   (0x0018)  
	bool                                               InitialCutscene;                                            // 0x4D40   (0x0001)  
	unsigned char                                      UnknownData24_5[0x7];                                       // 0x4D41   (0x0007)  MISSED
	double                                             Char_Yaw;                                                   // 0x4D48   (0x0008)  
	FVector                                            PrevLocation;                                               // 0x4D50   (0x0018)  
	TSet<FString>                                      Komnata_Stages;                                             // 0x4D68   (0x0050)  
	FTimerHandle                                       MeleeTimer;                                                 // 0x4DB8   (0x0008)  
	float                                              MeleeCooldown;                                              // 0x4DC0   (0x0004)  
	unsigned char                                      UnknownData25_5[0x4];                                       // 0x4DC4   (0x0004)  MISSED
	AChairParent_C*                                    As_Chair_Parent;                                            // 0x4DC8   (0x0008)  
	bool                                               IsInCraftStation;                                           // 0x4DD0   (0x0001)  


	/// Functions
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.GetMapIconData
	void GetMapIconData(FVector& Location, UTexture2D*& Icon, FVector2D& IconSize, double& RotationYaw, AActor*& WorldActor, FText& Name, FText& Description); // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.Update Overlapping House Box
	bool Update Overlapping House Box();                                                                                     // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.OnRep_As Chair Parent
	void OnRep_As Chair Parent();                                                                                            // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.Register Melee Damage
	void Register Melee Damage();                                                                                            // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.Melee Allowed
	bool Melee Allowed();                                                                                                    // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.Select Melee Anim
	UAnimMontage* Select Melee Anim();                                                                                       // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.OptimizeComponents
	void OptimizeComponents();                                                                                               // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.Incline
	void Incline();                                                                                                          // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.WP_GetAimCamera
	void WP_GetAimCamera(UCameraComponent*& Camera);                                                                         // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.Zombie Was Killed
	void Zombie Was Killed(AZombie_C*& KilledZombie);                                                                        // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.CheckGrenade
	void CheckGrenade(TWeakObjectPtr<UClass*> GrenadeType, int32_t Power, UClass* GrenadeTypeOut1, TWeakObjectPtr<UClass*>& GrenadeTypeOutSoft); // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.CheckBlackSkin
	void CheckBlackSkin();                                                                                                   // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.PlayerPersonalization
	void PlayerPersonalization();                                                                                            // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.Change Material Param Color
	void Change Material Param Color(TArray<USkeletalMeshComponent*>& Array, FName ParameterName, FLinearColor Value);       // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.DirectionalLightSwitch
	void DirectionalLightSwitch(FString LightName);                                                                          // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.CanThrowGrenade
	bool CanThrowGrenade();                                                                                                  // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.CheckBlendshapes
	void CheckBlendshapes();                                                                                                 // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.OnRep_Throw weapon
	void OnRep_Throw weapon();                                                                                               // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.CheckBreathingAim
	void CheckBreathingAim();                                                                                                // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.CheckBreathingCrouch
	void CheckBreathingCrouch();                                                                                             // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.CheckBreathingVertigo
	void CheckBreathingVertigo();                                                                                            // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.CheckBreathingHealth
	void CheckBreathingHealth();                                                                                             // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.CheckBreathingStamina
	void CheckBreathingStamina();                                                                                            // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.ScoreTypeGrenade
	void ScoreTypeGrenade(char& ScoreGrenade);                                                                               // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.SpawnFakeGrenade
	void SpawnFakeGrenade(UClass* GrenadeFake, AActor* Target);                                                              // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.CheckSpeedFastThrow
	void CheckSpeedFastThrow(int32_t Power);                                                                                 // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.CheckSpeedThrow
	void CheckSpeedThrow(int32_t Power);                                                                                     // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.GrenadeDelay
	void GrenadeDelay();                                                                                                     // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.HasGrenade
	void HasGrenade(bool& Has);                                                                                              // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.ActivateEquippedGrenadeInHand
	void ActivateEquippedGrenadeInHand(TWeakObjectPtr<UClass*> Class);                                                       // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.ChangeGrenadeWeapon
	void ChangeGrenadeWeapon(FString& GrenadeWeaponName, TWeakObjectPtr<UClass*>& ThrowWeapon);                              // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.HideHairUnderHelmet
	void HideHairUnderHelmet(bool Hide);                                                                                     // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.Throw Equipped Grenade
	void Throw Equipped Grenade(FVector Impulse, FTransform SpawnTransform, TWeakObjectPtr<UClass*> Class, double TimeGrenadeIn Hand, bool TimerActivate, bool DestroyLevers, int32_t Power); // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.SpawnTrajectory
	FTimerHandle SpawnTrajectory(FDelegateProperty Delegate);                                                                // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.LaunchGrenade
	void LaunchGrenade(FVector LaunchVelocity, FTransform& InTransform);                                                     // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.SetAnimInstClassForServer
	void SetAnimInstClassForServer();                                                                                        // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.SetAiming
	void SetAiming(bool isAim, bool FPS, bool NotReplicate);                                                                 // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.SetSkeletalCloth
	void SetSkeletalCloth(USkinnedMeshComponent* SkeletalMesh, TWeakObjectPtr<USkeletalMesh*> NewMesh);                      // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.SelectSkinMaterial
	void SelectSkinMaterial();                                                                                               // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.UserConstructionScript
	void UserConstructionScript();                                                                                           // [0x2407bf0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.MB_AimTimeline__FinishedFunc
	void MB_AimTimeline__FinishedFunc();                                                                                     // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.MB_AimTimeline__UpdateFunc
	void MB_AimTimeline__UpdateFunc();                                                                                       // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.PhysicBlendIdle__FinishedFunc
	void PhysicBlendIdle__FinishedFunc();                                                                                    // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.PhysicBlendIdle__UpdateFunc
	void PhysicBlendIdle__UpdateFunc();                                                                                      // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.OnNotifyEnd_E9C8ADBA45339B324A1D5587B37FE9FF
	void OnNotifyEnd_E9C8ADBA45339B324A1D5587B37FE9FF(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.OnNotifyBegin_E9C8ADBA45339B324A1D5587B37FE9FF
	void OnNotifyBegin_E9C8ADBA45339B324A1D5587B37FE9FF(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.OnInterrupted_E9C8ADBA45339B324A1D5587B37FE9FF
	void OnInterrupted_E9C8ADBA45339B324A1D5587B37FE9FF(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.OnBlendOut_E9C8ADBA45339B324A1D5587B37FE9FF
	void OnBlendOut_E9C8ADBA45339B324A1D5587B37FE9FF(FName NotifyName);                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.OnCompleted_E9C8ADBA45339B324A1D5587B37FE9FF
	void OnCompleted_E9C8ADBA45339B324A1D5587B37FE9FF(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.OnNotifyEnd_1669EBB84AC1B94C5912A58629E5AA97
	void OnNotifyEnd_1669EBB84AC1B94C5912A58629E5AA97(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.OnNotifyBegin_1669EBB84AC1B94C5912A58629E5AA97
	void OnNotifyBegin_1669EBB84AC1B94C5912A58629E5AA97(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.OnInterrupted_1669EBB84AC1B94C5912A58629E5AA97
	void OnInterrupted_1669EBB84AC1B94C5912A58629E5AA97(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.OnBlendOut_1669EBB84AC1B94C5912A58629E5AA97
	void OnBlendOut_1669EBB84AC1B94C5912A58629E5AA97(FName NotifyName);                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.OnCompleted_1669EBB84AC1B94C5912A58629E5AA97
	void OnCompleted_1669EBB84AC1B94C5912A58629E5AA97(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.InpActEvt_AimGrenade_K2Node_InputActionEvent
	void InpActEvt_AimGrenade_K2Node_InputActionEvent(FKey Key);                                                             // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.InpActEvt_AimGrenade_K2Node_InputActionEvent
	void InpActEvt_AimGrenade_K2Node_InputActionEvent(FKey Key);                                                             // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.InpActEvt_WeaponSlot5_K2Node_InputActionEvent
	void InpActEvt_WeaponSlot5_K2Node_InputActionEvent(FKey Key);                                                            // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.OnNotifyEnd_E2592D914BA5B2B1DFAA76849084B433
	void OnNotifyEnd_E2592D914BA5B2B1DFAA76849084B433(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.OnNotifyBegin_E2592D914BA5B2B1DFAA76849084B433
	void OnNotifyBegin_E2592D914BA5B2B1DFAA76849084B433(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.OnInterrupted_E2592D914BA5B2B1DFAA76849084B433
	void OnInterrupted_E2592D914BA5B2B1DFAA76849084B433(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.OnBlendOut_E2592D914BA5B2B1DFAA76849084B433
	void OnBlendOut_E2592D914BA5B2B1DFAA76849084B433(FName NotifyName);                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.OnCompleted_E2592D914BA5B2B1DFAA76849084B433
	void OnCompleted_E2592D914BA5B2B1DFAA76849084B433(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.OnNotifyEnd_656C0E4D428A7045BFE53F85725725BD
	void OnNotifyEnd_656C0E4D428A7045BFE53F85725725BD(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.OnNotifyBegin_656C0E4D428A7045BFE53F85725725BD
	void OnNotifyBegin_656C0E4D428A7045BFE53F85725725BD(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.OnInterrupted_656C0E4D428A7045BFE53F85725725BD
	void OnInterrupted_656C0E4D428A7045BFE53F85725725BD(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.OnBlendOut_656C0E4D428A7045BFE53F85725725BD
	void OnBlendOut_656C0E4D428A7045BFE53F85725725BD(FName NotifyName);                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.OnCompleted_656C0E4D428A7045BFE53F85725725BD
	void OnCompleted_656C0E4D428A7045BFE53F85725725BD(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.OnNotifyEnd_675B9AAA4F60EF91AD36C191E4A47DF2
	void OnNotifyEnd_675B9AAA4F60EF91AD36C191E4A47DF2(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.OnNotifyBegin_675B9AAA4F60EF91AD36C191E4A47DF2
	void OnNotifyBegin_675B9AAA4F60EF91AD36C191E4A47DF2(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.OnInterrupted_675B9AAA4F60EF91AD36C191E4A47DF2
	void OnInterrupted_675B9AAA4F60EF91AD36C191E4A47DF2(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.OnBlendOut_675B9AAA4F60EF91AD36C191E4A47DF2
	void OnBlendOut_675B9AAA4F60EF91AD36C191E4A47DF2(FName NotifyName);                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.OnCompleted_675B9AAA4F60EF91AD36C191E4A47DF2
	void OnCompleted_675B9AAA4F60EF91AD36C191E4A47DF2(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.InpActEvt_R_K2Node_InputKeyEvent
	void InpActEvt_R_K2Node_InputKeyEvent(FKey Key);                                                                         // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.OnNotifyEnd_33C67341434F3CB91CA39A8F029F3A4C
	void OnNotifyEnd_33C67341434F3CB91CA39A8F029F3A4C(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.OnNotifyBegin_33C67341434F3CB91CA39A8F029F3A4C
	void OnNotifyBegin_33C67341434F3CB91CA39A8F029F3A4C(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.OnInterrupted_33C67341434F3CB91CA39A8F029F3A4C
	void OnInterrupted_33C67341434F3CB91CA39A8F029F3A4C(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.OnBlendOut_33C67341434F3CB91CA39A8F029F3A4C
	void OnBlendOut_33C67341434F3CB91CA39A8F029F3A4C(FName NotifyName);                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.OnCompleted_33C67341434F3CB91CA39A8F029F3A4C
	void OnCompleted_33C67341434F3CB91CA39A8F029F3A4C(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.OnNotifyEnd_8DF1166C4911BA8C088AFAA5F2BCCA70
	void OnNotifyEnd_8DF1166C4911BA8C088AFAA5F2BCCA70(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.OnNotifyBegin_8DF1166C4911BA8C088AFAA5F2BCCA70
	void OnNotifyBegin_8DF1166C4911BA8C088AFAA5F2BCCA70(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.OnInterrupted_8DF1166C4911BA8C088AFAA5F2BCCA70
	void OnInterrupted_8DF1166C4911BA8C088AFAA5F2BCCA70(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.OnBlendOut_8DF1166C4911BA8C088AFAA5F2BCCA70
	void OnBlendOut_8DF1166C4911BA8C088AFAA5F2BCCA70(FName NotifyName);                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.OnCompleted_8DF1166C4911BA8C088AFAA5F2BCCA70
	void OnCompleted_8DF1166C4911BA8C088AFAA5F2BCCA70(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.OnNotifyEnd_8E6CCF18441D865B51ED2EB5C2966332
	void OnNotifyEnd_8E6CCF18441D865B51ED2EB5C2966332(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.OnNotifyBegin_8E6CCF18441D865B51ED2EB5C2966332
	void OnNotifyBegin_8E6CCF18441D865B51ED2EB5C2966332(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.OnInterrupted_8E6CCF18441D865B51ED2EB5C2966332
	void OnInterrupted_8E6CCF18441D865B51ED2EB5C2966332(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.OnBlendOut_8E6CCF18441D865B51ED2EB5C2966332
	void OnBlendOut_8E6CCF18441D865B51ED2EB5C2966332(FName NotifyName);                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.OnCompleted_8E6CCF18441D865B51ED2EB5C2966332
	void OnCompleted_8E6CCF18441D865B51ED2EB5C2966332(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.OnNotifyEnd_65893BD6430BE4F65A2F4CACCA44AF05
	void OnNotifyEnd_65893BD6430BE4F65A2F4CACCA44AF05(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.OnNotifyBegin_65893BD6430BE4F65A2F4CACCA44AF05
	void OnNotifyBegin_65893BD6430BE4F65A2F4CACCA44AF05(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.OnInterrupted_65893BD6430BE4F65A2F4CACCA44AF05
	void OnInterrupted_65893BD6430BE4F65A2F4CACCA44AF05(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.OnBlendOut_65893BD6430BE4F65A2F4CACCA44AF05
	void OnBlendOut_65893BD6430BE4F65A2F4CACCA44AF05(FName NotifyName);                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.OnCompleted_65893BD6430BE4F65A2F4CACCA44AF05
	void OnCompleted_65893BD6430BE4F65A2F4CACCA44AF05(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.OnLoaded_47F51BD74828EE2EFD69F8A8FC71A473
	void OnLoaded_47F51BD74828EE2EFD69F8A8FC71A473(UObject* Loaded);                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.OnLoaded_425B03D44FA2BFF24289B3B238542A45
	void OnLoaded_425B03D44FA2BFF24289B3B238542A45(UObject* Loaded);                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.OnLoaded_8A68070B435D0E0BF597D8A571E40D2C
	void OnLoaded_8A68070B435D0E0BF597D8A571E40D2C(UObject* Loaded);                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.OnLoaded_F25D68804776B4FF53DB44ABD31E2B2F
	void OnLoaded_F25D68804776B4FF53DB44ABD31E2B2F(UObject* Loaded);                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.OnLoaded_8E4976244743D1493EBFE487E981899F
	void OnLoaded_8E4976244743D1493EBFE487E981899F(UObject* Loaded);                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.OnLoaded_BE668B2A446983FF67E8FE94E91D9969
	void OnLoaded_BE668B2A446983FF67E8FE94E91D9969(UObject* Loaded);                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.OnLoaded_D78FD1D54DDDD45FF568D1B13D1E2F2E
	void OnLoaded_D78FD1D54DDDD45FF568D1B13D1E2F2E(UObject* Loaded);                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.OnLoaded_823A6EE14AB3086EF869EFB09215CBEA
	void OnLoaded_823A6EE14AB3086EF869EFB09215CBEA(UObject* Loaded);                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.OnLoaded_781A12FE42B264CEC81795AFA669B632
	void OnLoaded_781A12FE42B264CEC81795AFA669B632(UObject* Loaded);                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.OnLoaded_6850128E42CC1EF1A78BEB9A2DA3F79D
	void OnLoaded_6850128E42CC1EF1A78BEB9A2DA3F79D(UObject* Loaded);                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.OnLoaded_1EDA011740E46022603AA282A7671A6C
	void OnLoaded_1EDA011740E46022603AA282A7671A6C(UObject* Loaded);                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.OnNotifyEnd_6066947F49F379D3D0B8DC9F7EFC6D60
	void OnNotifyEnd_6066947F49F379D3D0B8DC9F7EFC6D60(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.OnNotifyBegin_6066947F49F379D3D0B8DC9F7EFC6D60
	void OnNotifyBegin_6066947F49F379D3D0B8DC9F7EFC6D60(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.OnInterrupted_6066947F49F379D3D0B8DC9F7EFC6D60
	void OnInterrupted_6066947F49F379D3D0B8DC9F7EFC6D60(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.OnBlendOut_6066947F49F379D3D0B8DC9F7EFC6D60
	void OnBlendOut_6066947F49F379D3D0B8DC9F7EFC6D60(FName NotifyName);                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.OnCompleted_6066947F49F379D3D0B8DC9F7EFC6D60
	void OnCompleted_6066947F49F379D3D0B8DC9F7EFC6D60(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.InpActEvt_Jump_K2Node_InputActionEvent
	void InpActEvt_Jump_K2Node_InputActionEvent(FKey Key);                                                                   // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.InpActEvt_Sprint_K2Node_InputActionEvent
	void InpActEvt_Sprint_K2Node_InputActionEvent(FKey Key);                                                                 // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.InpActEvt_Sprint_K2Node_InputActionEvent
	void InpActEvt_Sprint_K2Node_InputActionEvent(FKey Key);                                                                 // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.AnimGetGrenade(Multicast)
	void AnimGetGrenade(Multicast)(UClass* GrenadeFake, bool EquipNew);                                                      // [0x2407bf0] Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.AnimGetGrenade_Server
	void AnimGetGrenade_Server(UClass* NewParam, bool EquipNew);                                                             // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.CallThrowableEquipAnim
	void CallThrowableEquipAnim(UClass* ThrowableFakeClass, bool EquipNew);                                                  // [0x2407bf0] Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.grenadedrop
	void grenadedrop(FString WeaponName);                                                                                    // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.GrenadeAdd
	void GrenadeAdd(FString WeaponName);                                                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.ActivateGrenade(Multicast)
	void ActivateGrenade(Multicast)(TWeakObjectPtr<UClass*> Class);                                                          // [0x2407bf0] Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.BreathingVertigo
	void BreathingVertigo();                                                                                                 // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.NearStopEvent
	void NearStopEvent();                                                                                                    // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.NearProjectileEvent
	void NearProjectileEvent();                                                                                              // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.ThrowEquippedGrenadeMulti
	void ThrowEquippedGrenadeMulti(FVector Impulse, FTransform SpawnTransform, double TimeGrenadeIn Hand, bool TimerActivate, bool DestroyLevers, TWeakObjectPtr<UClass*> Class, int32_t Power); // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.WP_LineTrace
	void WP_LineTrace();                                                                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.AnimThrowLoop(Multicast)
	void AnimThrowLoop(Multicast)();                                                                                         // [0x2407bf0] Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.AnimThrowLoopServer
	void AnimThrowLoopServer();                                                                                              // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.Ressurect
	void Ressurect(FVector Pos, FRotator rot, TEnumAsByte<WE_NewDeathScreenState> RessurectPlace);                           // [0x2407bf0] Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.ResetGrenadeInput
	void ResetGrenadeInput();                                                                                                // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.ManuallyThrowGrenade
	void ManuallyThrowGrenade();                                                                                             // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.SetWallOffsetAngle_Server
	void SetWallOffsetAngle_Server(bool BlockingHit, double WeaponAngleToWall);                                              // [0x2407bf0] Net|NetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.LaunchCuscene
	void LaunchCuscene();                                                                                                    // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.ActivateGrenadeTimer
	void ActivateGrenadeTimer();                                                                                             // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.InputBlockTimer
	void InputBlockTimer();                                                                                                  // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.DestroyGrenade_OnDeath
	void DestroyGrenade_OnDeath();                                                                                           // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.GrenadeInput
	void GrenadeInput(bool Pressed);                                                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.AnimThrowOutroServer
	void AnimThrowOutroServer();                                                                                             // [0x2407bf0] Net|NetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.AnimThrowIntroServer
	void AnimThrowIntroServer();                                                                                             // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.InitLocalPlayer
	void InitLocalPlayer();                                                                                                  // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.AnimThrowOutro(Multicast)
	void AnimThrowOutro(Multicast)();                                                                                        // [0x2407bf0] Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.AnimThrowIntro(Multicast)
	void AnimThrowIntro(Multicast)();                                                                                        // [0x2407bf0] Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.Timer Activate Grenade Server
	void Timer Activate Grenade Server();                                                                                    // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.Activate Grenade Server
	void Activate Grenade Server(TWeakObjectPtr<UClass*> Class);                                                             // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.OwningClientZombieWasKilled
	void OwningClientZombieWasKilled(AZombie_C*& KilledZombie);                                                              // [0x2407bf0] Net|NetReliableHasOutParms|NetClient|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.WP_Aiming
	void WP_Aiming(bool Aim);                                                                                                // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.ResetTimer
	void ResetTimer();                                                                                                       // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.StartTimerBeforeExplosive
	void StartTimerBeforeExplosive();                                                                                        // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.ResetTimerExplosive
	void ResetTimerExplosive();                                                                                              // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.Change Grenade Client
	void Change Grenade Client();                                                                                            // [0x2407bf0] Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.Change Grenade Server
	void Change Grenade Server(FString Name Grenade, TWeakObjectPtr<UClass*> Throw Weapon);                                  // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.Throw grenade server
	void Throw grenade server(FVector Impulse, FTransform Spawn transform, double Time Grenade Handle in Hand, bool TimerActivate, bool DestroyLevers, int32_t Power); // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.ServerSetPlayerInCutscene
	void ServerSetPlayerInCutscene(bool NewValue);                                                                           // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.BarTips
	void BarTips();                                                                                                          // [0x2407bf0] Net|NetClient|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.ReceiveBeginPlay
	void ReceiveBeginPlay();                                                                                                 // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.SetCameraElevator
	void SetCameraElevator();                                                                                                // [0x2407bf0] Net|NetClient|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.Set Player Location
	void Set Player Location();                                                                                              // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.DrawTrajectory
	void DrawTrajectory();                                                                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.EquipGPS
	void EquipGPS(bool Equip);                                                                                               // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.CalculateVariables
	void CalculateVariables();                                                                                               // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.MakePresenceNoise
	void MakePresenceNoise();                                                                                                // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.SetSprint
	void SetSprint(bool SprintActive);                                                                                       // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.ReceiveTick
	void ReceiveTick(float DeltaSeconds);                                                                                    // [0x2407bf0] Event|Public|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.Greedisgood
	void Greedisgood();                                                                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.SetStance
	void SetStance(TEnumAsByte<StanceState> NewStance);                                                                      // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.MeleeHitCooldown
	void MeleeHitCooldown();                                                                                                 // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.BndEvt__SurvivalPlayer_V2_CapsuleComponent_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature
	void BndEvt__SurvivalPlayer_V2_CapsuleComponent_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult& hit); // [0x2407bf0] HasOutParms|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.BndEvt__SurvivalPlayer_V2_CapsuleComponent_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
	void BndEvt__SurvivalPlayer_V2_CapsuleComponent_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x2407bf0] HasOutParms|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.BndEvt__SurvivalPlayer_V2_CapsuleComponent_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
	void BndEvt__SurvivalPlayer_V2_CapsuleComponent_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.MeleeHitMontage_Serv
	void MeleeHitMontage_Serv(UAnimMontage* MontageToPlay);                                                                  // [0x2407bf0] Net|NetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.MeleeHitMontage_Multi
	void MeleeHitMontage_Multi(UAnimMontage* MontageToPlay);                                                                 // [0x2407bf0] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.MeleeDamageRegister
	void MeleeDamageRegister();                                                                                              // [0x2407bf0] Net|NetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.GetPlayerLocationMPC
	void GetPlayerLocationMPC();                                                                                             // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.SitOnChairServer
	void SitOnChairServer(AActor* Hightlight, bool Sit);                                                                     // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.ServerCraftStation
	void ServerCraftStation(bool IsInCraftStation);                                                                          // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.BlockBreathhold
	void BlockBreathhold();                                                                                                  // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.BreathHoldingTimer
	void BreathHoldingTimer();                                                                                               // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.FullyLoad
	void FullyLoad();                                                                                                        // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.ExecuteUbergraph_SurvivalPlayer_V2
	void ExecuteUbergraph_SurvivalPlayer_V2(int32_t EntryPoint);                                                             // [0x2407bf0] Final|HasDefaults    
	// Function /Game/SurvivalPlayer_V2.SurvivalPlayer_V2_C.OnInputActionWeaponSlot5__DelegateSignature
	void OnInputActionWeaponSlot5__DelegateSignature(FFGrenadeInfo GrenadeInfo, bool ToggleWidget);                          // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

