
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package VFX.

/// Struct /Game/VFX/Grenades/FlashbangVFX/Projectile/Settings/SFlashbangSettings.SFlashbangSettings
/// Size: 0x0044 (0x000000 - 0x000044)
struct FSFlashbangSettings
{ 
	float                                              InitialSpeed_13_6909645A4B5B549F6946F2BCD73FC85B;           // 0x0000   (0x0004)  
	float                                              FuseDuration_14_EC2D44F745249B67EFC93B8B22BC35F6;           // 0x0004   (0x0004)  
	float                                              LightDuration_15_CD0403874149FBB84A4B97AD615B3CC8;          // 0x0008   (0x0004)  
	float                                              MinimumSfxVelocity_16_033753D84F984A235A5402B72084D499;     // 0x000C   (0x0004)  
	float                                              CameraShakeRadius_17_F7CA7C1148D31686253159AA7FB2EFD3;      // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0014   (0x0004)  MISSED
	FVector2D                                          MaterialHorizontalOffset_18_6BA5372644EE622D9CF236A845AAE76B; // 0x0018   (0x0010)  
	FVector2D                                          MaterialVerticalOffset_19_CF7DE826449A3FC167D41C88087A962C; // 0x0028   (0x0010)  
	float                                              ScorchMarkSize_20_632D44FF4CA85D97BA2559BC65595FD9;         // 0x0038   (0x0004)  
	float                                              ScorchMarkFadeDuration_21_255286EA4760ADC36C8E659F44AD9630; // 0x003C   (0x0004)  
	float                                              ExplosionRadius_22_B90748C3405DD43449782BB6E00E70EF;        // 0x0040   (0x0004)  
};

/// Struct /Game/VFX/Grenades/FlashbangVFX/Projectile/Settings/SFlashInstance.SFlashInstance
/// Size: 0x0019 (0x000000 - 0x000019)
struct FSFlashInstance
{ 
	float                                              Distance_10_7F0728D54C663E4D0561D1BEA6AAFCFE;               // 0x0000   (0x0004)  
	float                                              Angle_9_B5302DEA47596C570F9B97A165537135;                   // 0x0004   (0x0004)  
	FVector2D                                          Screenposition_8_20C098BE4A4F22D2ECACAF826C611C26;          // 0x0008   (0x0010)  
	bool                                               bISBehindPlayer_7_A372F1E84D24EB568CC93380D16288B3;         // 0x0018   (0x0001)  
};

/// Class /Game/VFX/PP_Effects.PP_Effects_C
/// Size: 0x0BB0 (0x000290 - 0x000E40)
class APP_Effects_C : public AActor : AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0290   (0x0008)  
	USceneComponent*                                   DefaultSceneRoot;                                           // 0x0298   (0x0008)  
	float                                              SwitcherTimeline_Alpha_4415ACF84CFC89961F41D1BD505576A3;    // 0x02A0   (0x0004)  
	TEnumAsByte<ETimelineDirection>                    SwitcherTimeline__Direction_4415ACF84CFC89961F41D1BD505576A3; // 0x02A4   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x02A5   (0x0003)  MISSED
	UTimelineComponent*                                SwitcherTimeline;                                           // 0x02A8   (0x0008)  
	UMaterialInstanceDynamic*                          Food_PP;                                                    // 0x02B0   (0x0008)  
	APostProcessVolume*                                PPVolume;                                                   // 0x02B8   (0x0008)  
	ASurvivalPlayer_C*                                 SurvivorOwner;                                              // 0x02C0   (0x0008)  
	UBPC_PlayerStatsComponent_C*                       BPC_PlayerStatsComponent;                                   // 0x02C8   (0x0008)  
	UMaterialInstanceDynamic*                          FoodVenPP;                                                  // 0x02D0   (0x0008)  
	UMaterialInstanceDynamic*                          DeathDesPP;                                                 // 0x02D8   (0x0008)  
	UMaterialInstanceDynamic*                          DeathBlurPP;                                                // 0x02E0   (0x0008)  
	UMaterialInstanceDynamic*                          ScopePP;                                                    // 0x02E8   (0x0008)  
	FTimerHandle                                       ScopeEffectOnTimer;                                         // 0x02F0   (0x0008)  
	FTimerHandle                                       ScopeEffectOffTimer;                                        // 0x02F8   (0x0008)  
	double                                             ScopeEffectFrequency;                                       // 0x0300   (0x0008)  
	FName                                              ScopeEffectMaskPosX;                                        // 0x0308   (0x0008)  
	FName                                              ScopeEffectMaskPosY;                                        // 0x0310   (0x0008)  
	FName                                              ScopeEffectRadius;                                          // 0x0318   (0x0008)  
	UMaterialInstanceDynamic*                          BleedingPP;                                                 // 0x0320   (0x0008)  
	UMaterialInstanceDynamic*                          HitEffectPP;                                                // 0x0328   (0x0008)  
	FTimerHandle                                       HitEffectTimer;                                             // 0x0330   (0x0008)  
	double                                             HitEffectFrequency;                                         // 0x0338   (0x0008)  
	double                                             HealthModifier;                                             // 0x0340   (0x0008)  
	double                                             HealthModifierUpperBound;                                   // 0x0348   (0x0008)  
	UCurveFloat*                                       HitEffectBloodCurve;                                        // 0x0350   (0x0008)  
	double                                             HitEffectBloodDuration;                                     // 0x0358   (0x0008)  
	UMaterialInstanceDynamic*                          DirtPP;                                                     // 0x0360   (0x0008)  
	UMaterialInstanceDynamic*                          ShortRangeBlood_PP;                                         // 0x0368   (0x0008)  
	UCurveFloat*                                       BloodEffectCurveShow1;                                      // 0x0370   (0x0008)  
	UCurveFloat*                                       BloodEffectCurveShow2;                                      // 0x0378   (0x0008)  
	float                                              FirstBloodEffectTime;                                       // 0x0380   (0x0004)  
	float                                              SecondBloodEffectTime;                                      // 0x0384   (0x0004)  
	float                                              ThirdBloodEffectTime;                                       // 0x0388   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x038C   (0x0004)  MISSED
	double                                             ZombieCloseEffectFrequency;                                 // 0x0390   (0x0008)  
	float                                              BloodEffectDuration;                                        // 0x0398   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x039C   (0x0004)  MISSED
	FTimerHandle                                       BloodEffectFirstTimer;                                      // 0x03A0   (0x0008)  
	FTimerHandle                                       BloodEffectSecondTimer;                                     // 0x03A8   (0x0008)  
	FTimerHandle                                       BloodEffectThirdTimer;                                      // 0x03B0   (0x0008)  
	bool                                               FirstBloodEffectIsActive;                                   // 0x03B8   (0x0001)  
	bool                                               SecondBloodEffectIsActive;                                  // 0x03B9   (0x0001)  
	bool                                               ThirdBloodEffectIsActive;                                   // 0x03BA   (0x0001)  
	bool                                               FirstDirtEffectIsActive;                                    // 0x03BB   (0x0001)  
	bool                                               SecondDirtEffectIsActive;                                   // 0x03BC   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x03BD   (0x0003)  MISSED
	double                                             DirtEffectFrequency;                                        // 0x03C0   (0x0008)  
	float                                              DirtEffectDuration;                                         // 0x03C8   (0x0004)  
	float                                              FirstDirtEffectTime;                                        // 0x03CC   (0x0004)  
	float                                              SecondDirtEffectTime;                                       // 0x03D0   (0x0004)  
	unsigned char                                      UnknownData04_5[0x4];                                       // 0x03D4   (0x0004)  MISSED
	FTimerHandle                                       DirtEffectFirstTimer;                                       // 0x03D8   (0x0008)  
	FTimerHandle                                       DirtEffectSecondTimer;                                      // 0x03E0   (0x0008)  
	UCurveFloat*                                       DirtEffectCruveShow1;                                       // 0x03E8   (0x0008)  
	UCurveFloat*                                       DirtEffectCruveShow2;                                       // 0x03F0   (0x0008)  
	UCurveFloat*                                       DirtEffectCruveShow3;                                       // 0x03F8   (0x0008)  
	UCurveFloat*                                       BleedingEffectCurve;                                        // 0x0400   (0x0008)  
	UCurveFloat*                                       BleedingVignetteCurve;                                      // 0x0408   (0x0008)  
	bool                                               BleedingEffectActive;                                       // 0x0410   (0x0001)  
	unsigned char                                      UnknownData05_5[0x7];                                       // 0x0411   (0x0007)  MISSED
	FTimerHandle                                       BleedingEffectTimer;                                        // 0x0418   (0x0008)  
	FTimerHandle                                       BleedingEffectProgressTimer;                                // 0x0420   (0x0008)  
	FTimerHandle                                       DisableBleedingEffectTimer;                                 // 0x0428   (0x0008)  
	FTimerHandle                                       BleedingVingetteTimer;                                      // 0x0430   (0x0008)  
	TArray<FName>                                      AvailableBleedingEffectParameters;                          // 0x0438   (0x0010)  
	TArray<FName>                                      StartupBleedingEffectParameters;                            // 0x0448   (0x0010)  
	FName                                              CurrentBleedingEffectParameter;                             // 0x0458   (0x0008)  
	FName                                              VignetteParameterName;                                      // 0x0460   (0x0008)  
	double                                             BleedingEffectTime;                                         // 0x0468   (0x0008)  
	double                                             BleedingEffectDuration;                                     // 0x0470   (0x0008)  
	float                                              BleedingEffectTickRate;                                     // 0x0478   (0x0004)  
	unsigned char                                      UnknownData06_5[0x4];                                       // 0x047C   (0x0004)  MISSED
	double                                             BleedingEffectOnStopValue;                                  // 0x0480   (0x0008)  
	double                                             BleedingVignetteDuration;                                   // 0x0488   (0x0008)  
	double                                             BleedingVignetteTime;                                       // 0x0490   (0x0008)  
	double                                             VignetteOnStopValue;                                        // 0x0498   (0x0008)  
	TMap<FName, double>                                HitEffectBloodParameterTimeMap;                             // 0x04A0   (0x0050)  
	bool                                               HitEffectBloodActive;                                       // 0x04F0   (0x0001)  
	unsigned char                                      UnknownData07_5[0x7];                                       // 0x04F1   (0x0007)  MISSED
	UCurveFloat*                                       HitEffectBlurCurve;                                         // 0x04F8   (0x0008)  
	FName                                              HitEffectBlurParameterName;                                 // 0x0500   (0x0008)  
	double                                             HitEffectBlurDuration;                                      // 0x0508   (0x0008)  
	double                                             HitEffectBlurTime;                                          // 0x0510   (0x0008)  
	bool                                               HitEffectBlurActive;                                        // 0x0518   (0x0001)  
	unsigned char                                      UnknownData08_5[0x7];                                       // 0x0519   (0x0007)  MISSED
	UCurveFloat*                                       HitEffectDesaturationCurve;                                 // 0x0520   (0x0008)  
	FName                                              HitEffectDesaturationParameterName;                         // 0x0528   (0x0008)  
	double                                             HitEffectDesaturationDuration;                              // 0x0530   (0x0008)  
	double                                             HitEffectDesaturationTime;                                  // 0x0538   (0x0008)  
	bool                                               HitEffectDesaturationActive;                                // 0x0540   (0x0001)  
	unsigned char                                      UnknownData09_5[0x7];                                       // 0x0541   (0x0007)  MISSED
	UCurveFloat*                                       HitEffectVignetteCurve;                                     // 0x0548   (0x0008)  
	FName                                              HitEffectVignetteParameterName;                             // 0x0550   (0x0008)  
	double                                             HitEffectVignetteDuration;                                  // 0x0558   (0x0008)  
	double                                             HitEffectVignetteTime;                                      // 0x0560   (0x0008)  
	bool                                               HitEffectVignetteActive;                                    // 0x0568   (0x0001)  
	unsigned char                                      UnknownData10_5[0x7];                                       // 0x0569   (0x0007)  MISSED
	FTimerHandle                                       HitEffectStopTimer;                                         // 0x0570   (0x0008)  
	TMap<FName, double>                                HitEffectBloodParameterValueMap;                            // 0x0578   (0x0050)  
	double                                             HitEffectBlurStopValue;                                     // 0x05C8   (0x0008)  
	double                                             HitEffectDesaturationStopValue;                             // 0x05D0   (0x0008)  
	double                                             HitEffectVignetteStopValue;                                 // 0x05D8   (0x0008)  
	double                                             HitEffectFastStopSlowModifier;                              // 0x05E0   (0x0008)  
	bool                                               HitEffectFastStopInProgress;                                // 0x05E8   (0x0001)  
	unsigned char                                      UnknownData11_5[0x7];                                       // 0x05E9   (0x0007)  MISSED
	FTimerHandle                                       FoodEffectOnTimer;                                          // 0x05F0   (0x0008)  
	FTimerHandle                                       FoodEffectOffTimer;                                         // 0x05F8   (0x0008)  
	double                                             FoodEffectFrequency;                                        // 0x0600   (0x0008)  
	bool                                               FoodEffectActive;                                           // 0x0608   (0x0001)  
	unsigned char                                      UnknownData12_5[0x3];                                       // 0x0609   (0x0003)  MISSED
	FName                                              FoodEffectDesaturationParameterName;                        // 0x060C   (0x0008)  
	FName                                              FoodEffectVingetteParameterName;                            // 0x0614   (0x0008)  
	unsigned char                                      UnknownData13_5[0x4];                                       // 0x061C   (0x0004)  MISSED
	double                                             FoodLevel;                                                  // 0x0620   (0x0008)  
	bool                                               ScopeEffectActive;                                          // 0x0628   (0x0001)  
	unsigned char                                      UnknownData14_5[0x7];                                       // 0x0629   (0x0007)  MISSED
	double                                             ScopeEffectValue;                                           // 0x0630   (0x0008)  
	double                                             ScopeEffectSpeedModifier;                                   // 0x0638   (0x0008)  
	double                                             ScopeEffectMaxValue;                                        // 0x0640   (0x0008)  
	double                                             EffectValue;                                                // 0x0648   (0x0008)  
	double                                             TargetEffectValue;                                          // 0x0650   (0x0008)  
	double                                             FoodEffectLowerBound;                                       // 0x0658   (0x0008)  
	double                                             FoodEffectUpperBound;                                       // 0x0660   (0x0008)  
	UCurveFloat*                                       DeathEffectCurve;                                           // 0x0668   (0x0008)  
	FTimerHandle                                       DeathEffectTimer;                                           // 0x0670   (0x0008)  
	double                                             DeathEffectFrequency;                                       // 0x0678   (0x0008)  
	double                                             DeathEffectDuration;                                        // 0x0680   (0x0008)  
	double                                             DeathEffectTime;                                            // 0x0688   (0x0008)  
	FName                                              DeathEffectDesaturationParameterName;                       // 0x0690   (0x0008)  
	FName                                              DeathEffectBlurParameterName;                               // 0x0698   (0x0008)  
	UCameraComponent*                                  Camera;                                                     // 0x06A0   (0x0008)  
	unsigned char                                      UnknownData15_5[0x8];                                       // 0x06A8   (0x0008)  MISSED
	FPostProcessSettings                               DefaultPPVSettings;                                         // 0x06B0   (0x06E0)  
	TArray<FWeightedBlendable>                         Effects;                                                    // 0x0D90   (0x0010)  
	double                                             FoodHungerLevel;                                            // 0x0DA0   (0x0008)  
	double                                             FoodThirstLevel;                                            // 0x0DA8   (0x0008)  
	UMaterialInstanceDynamic*                          LensDistortionPP;                                           // 0x0DB0   (0x0008)  
	float                                              BleedingEffectCallbackFrequency;                            // 0x0DB8   (0x0004)  
	bool                                               CriticalBleedingIsActive;                                   // 0x0DBC   (0x0001)  
	bool                                               BodyCriticalEffectIsActive;                                 // 0x0DBD   (0x0001)  
	unsigned char                                      UnknownData16_5[0x2];                                       // 0x0DBE   (0x0002)  MISSED
	UPlayerCutsceneComponent_C*                        CutsceneComponent;                                          // 0x0DC0   (0x0008)  
	UCameraComponent*                                  SurvivorCamera;                                             // 0x0DC8   (0x0008)  
	double                                             HitModifier;                                                // 0x0DD0   (0x0008)  
	UCurveFloat*                                       HitEffectShortVignetteCurve;                                // 0x0DD8   (0x0008)  
	double                                             HitEffectShortVignetteDuration;                             // 0x0DE0   (0x0008)  
	UMaterialInstanceDynamic*                          HPStatusPP;                                                 // 0x0DE8   (0x0008)  
	UMaterialInstanceDynamic*                          FastHitPP;                                                  // 0x0DF0   (0x0008)  
	double                                             FastHitEffectTime;                                          // 0x0DF8   (0x0008)  
	UMaterialInstanceDynamic*                          Abberation;                                                 // 0x0E00   (0x0008)  
	FTimerHandle                                       AbberTimer;                                                 // 0x0E08   (0x0008)  
	double                                             AbberTimeGlobal;                                            // 0x0E10   (0x0008)  
	double                                             HPTarget;                                                   // 0x0E18   (0x0008)  
	FTimerHandle                                       HPTimerVar;                                                 // 0x0E20   (0x0008)  
	bool                                               NewVar;                                                     // 0x0E28   (0x0001)  
	unsigned char                                      UnknownData17_5[0x7];                                       // 0x0E29   (0x0007)  MISSED
	TArray<FTimerHandle>                               TimersArray;                                                // 0x0E30   (0x0010)  


	/// Functions
	// Function /Game/VFX/PP_Effects.PP_Effects_C.ClearAllEffects
	void ClearAllEffects();                                                                                                  // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/VFX/PP_Effects.PP_Effects_C.HPProgress
	void HPProgress();                                                                                                       // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/VFX/PP_Effects.PP_Effects_C.AbberationStop
	void AbberationStop();                                                                                                   // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/VFX/PP_Effects.PP_Effects_C.AbberationPregress
	void AbberationPregress();                                                                                               // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/VFX/PP_Effects.PP_Effects_C.AbberationStart
	void AbberationStart();                                                                                                  // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/VFX/PP_Effects.PP_Effects_C.Fast Hit Effect Progress
	void Fast Hit Effect Progress();                                                                                         // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/VFX/PP_Effects.PP_Effects_C.HPChange
	void HPChange();                                                                                                         // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/VFX/PP_Effects.PP_Effects_C.OnEndCutscene
	void OnEndCutscene();                                                                                                    // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/VFX/PP_Effects.PP_Effects_C.OnStartCutscene
	void OnStartCutscene();                                                                                                  // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/VFX/PP_Effects.PP_Effects_C.Enable Body Critical Hit Effect
	void Enable Body Critical Hit Effect(bool Enable);                                                                       // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/VFX/PP_Effects.PP_Effects_C.Depth Of Field Blur
	void Depth Of Field Blur();                                                                                              // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/VFX/PP_Effects.PP_Effects_C.FoodEffectStartIncrease
	void FoodEffectStartIncrease(double TargetValue);                                                                        // [0x2407bf0] Private|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/VFX/PP_Effects.PP_Effects_C.ResetDeathEffect
	void ResetDeathEffect();                                                                                                 // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/VFX/PP_Effects.PP_Effects_C.FoodEffectDecreasing
	void FoodEffectDecreasing();                                                                                             // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/VFX/PP_Effects.PP_Effects_C.ApplyEffects
	void ApplyEffects();                                                                                                     // [0x2407bf0] Private|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/VFX/PP_Effects.PP_Effects_C.FoodEffectStartDecrease
	void FoodEffectStartDecrease(double TargetValue, bool Death);                                                            // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/VFX/PP_Effects.PP_Effects_C.Apply Death Effect
	void Apply Death Effect();                                                                                               // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/VFX/PP_Effects.PP_Effects_C.Death Effect Progress
	void Death Effect Progress();                                                                                            // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/VFX/PP_Effects.PP_Effects_C.FoodEffectInceasing
	void FoodEffectInceasing();                                                                                              // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/VFX/PP_Effects.PP_Effects_C.OnHungerTick
	void OnHungerTick(double HungerLevel, double CriticalHungerLevel);                                                       // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/VFX/PP_Effects.PP_Effects_C.OnThirstTick
	void OnThirstTick(double ThirstLevel, double CriticalThirstLevel);                                                       // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/VFX/PP_Effects.PP_Effects_C.ScopeEffectOffProgress
	void ScopeEffectOffProgress();                                                                                           // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/VFX/PP_Effects.PP_Effects_C.ScopeEffectOnProgress
	void ScopeEffectOnProgress();                                                                                            // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/VFX/PP_Effects.PP_Effects_C.OnAiming
	void OnAiming(bool Aim);                                                                                                 // [0x2407bf0] Private|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/VFX/PP_Effects.PP_Effects_C.SetNewCamera
	void SetNewCamera(UCameraComponent* New Camera);                                                                         // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/VFX/PP_Effects.PP_Effects_C.HitEffectFastStopDesaturationProgress
	void HitEffectFastStopDesaturationProgress();                                                                            // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/VFX/PP_Effects.PP_Effects_C.HitEffectFastStopVignetteProgress
	void HitEffectFastStopVignetteProgress();                                                                                // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/VFX/PP_Effects.PP_Effects_C.HitEffectFastStopBlurProgress
	void HitEffectFastStopBlurProgress();                                                                                    // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/VFX/PP_Effects.PP_Effects_C.HitEffectFastStopBloodProgress
	void HitEffectFastStopBloodProgress();                                                                                   // [0x2407bf0] Private|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/VFX/PP_Effects.PP_Effects_C.HitEffectFastStopProgress
	void HitEffectFastStopProgress();                                                                                        // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/VFX/PP_Effects.PP_Effects_C.HitEffectFastStop
	void HitEffectFastStop();                                                                                                // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/VFX/PP_Effects.PP_Effects_C.HitEffectIsActive
	bool HitEffectIsActive();                                                                                                // [0x2407bf0] Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/VFX/PP_Effects.PP_Effects_C.HitEffectDesaturationProgress
	void HitEffectDesaturationProgress();                                                                                    // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/VFX/PP_Effects.PP_Effects_C.HitEffectVignetteProgress
	void HitEffectVignetteProgress();                                                                                        // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/VFX/PP_Effects.PP_Effects_C.HitEffectBloodProgress
	void HitEffectBloodProgress();                                                                                           // [0x2407bf0] Private|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/VFX/PP_Effects.PP_Effects_C.HitEffectBlurProgress
	void HitEffectBlurProgress();                                                                                            // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/VFX/PP_Effects.PP_Effects_C.HitEffectProgress
	void HitEffectProgress();                                                                                                // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/VFX/PP_Effects.PP_Effects_C.HitEffect
	void HitEffect(double angle);                                                                                            // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/VFX/PP_Effects.PP_Effects_C.HitEffectOff
	void HitEffectOff();                                                                                                     // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/VFX/PP_Effects.PP_Effects_C.CalculateHealthModifier
	void CalculateHealthModifier();                                                                                          // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/VFX/PP_Effects.PP_Effects_C.GetParameterByAngle
	FName GetParameterByAngle(double angle);                                                                                 // [0x2407bf0] Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/VFX/PP_Effects.PP_Effects_C.SetupBleedingVignetteEffect
	void SetupBleedingVignetteEffect();                                                                                      // [0x2407bf0] Private|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/VFX/PP_Effects.PP_Effects_C.VignetteBleedingEffect
	void VignetteBleedingEffect();                                                                                           // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/VFX/PP_Effects.PP_Effects_C.DisableBleedingEffectProcess
	void DisableBleedingEffectProcess();                                                                                     // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/VFX/PP_Effects.PP_Effects_C.DisableBleedingEffect
	void DisableBleedingEffect();                                                                                            // [0x2407bf0] Private|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/VFX/PP_Effects.PP_Effects_C.GetBleedingEffectParameterName
	void GetBleedingEffectParameterName(FName& ParameterName);                                                               // [0x2407bf0] Private|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/VFX/PP_Effects.PP_Effects_C.BleedingEffect
	void BleedingEffect();                                                                                                   // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/VFX/PP_Effects.PP_Effects_C.BleedingEffectCallback
	void BleedingEffectCallback();                                                                                           // [0x2407bf0] Private|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/VFX/PP_Effects.PP_Effects_C.EnableBleedingEffect
	void EnableBleedingEffect();                                                                                             // [0x2407bf0] Private|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/VFX/PP_Effects.PP_Effects_C.Enable Critical Bleeding Effect
	void Enable Critical Bleeding Effect(bool Enable);                                                                       // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/VFX/PP_Effects.PP_Effects_C.BleedingEffectEnabled
	void BleedingEffectEnabled(bool Enabled);                                                                                // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/VFX/PP_Effects.PP_Effects_C.SecondDirtEffectSetup
	void SecondDirtEffectSetup();                                                                                            // [0x2407bf0] Private|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/VFX/PP_Effects.PP_Effects_C.FirstDirtEffectSetup
	void FirstDirtEffectSetup();                                                                                             // [0x2407bf0] Private|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/VFX/PP_Effects.PP_Effects_C.DirtSecondEffect
	void DirtSecondEffect();                                                                                                 // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/VFX/PP_Effects.PP_Effects_C.DirtFirstEffect
	void DirtFirstEffect();                                                                                                  // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/VFX/PP_Effects.PP_Effects_C.ApplyDirtyEffect
	void ApplyDirtyEffect();                                                                                                 // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/VFX/PP_Effects.PP_Effects_C.ApplyZombieCloseBloodEffect
	void ApplyZombieCloseBloodEffect();                                                                                      // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/VFX/PP_Effects.PP_Effects_C.ThirdBloodEffectSetup
	void ThirdBloodEffectSetup();                                                                                            // [0x2407bf0] Private|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/VFX/PP_Effects.PP_Effects_C.SecondBloodEffectSetup
	void SecondBloodEffectSetup();                                                                                           // [0x2407bf0] Private|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/VFX/PP_Effects.PP_Effects_C.FirstBloodEffectSetup
	void FirstBloodEffectSetup();                                                                                            // [0x2407bf0] Private|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/VFX/PP_Effects.PP_Effects_C.BloodSecondEffect
	void BloodSecondEffect();                                                                                                // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/VFX/PP_Effects.PP_Effects_C.BloodThirdEffect
	void BloodThirdEffect();                                                                                                 // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/VFX/PP_Effects.PP_Effects_C.BloodFirstEffect
	void BloodFirstEffect();                                                                                                 // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/VFX/PP_Effects.PP_Effects_C.GetWeightPP
	void GetWeightPP(UMaterialInstance* Material, float& Weight);                                                            // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/VFX/PP_Effects.PP_Effects_C.GetCriticalBleedingIsActive
	void GetCriticalBleedingIsActive(bool& CriticalBleedingIsActive);                                                        // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/VFX/PP_Effects.PP_Effects_C.SetWeightPP
	void SetWeightPP(UMaterialInstance* Material, double Weight);                                                            // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/VFX/PP_Effects.PP_Effects_C.Initialize
	void Initialize();                                                                                                       // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/VFX/PP_Effects.PP_Effects_C.Initialize Effects
	void Initialize Effects();                                                                                               // [0x2407bf0] Private|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/VFX/PP_Effects.PP_Effects_C.SwitcherTimeline__FinishedFunc
	void SwitcherTimeline__FinishedFunc();                                                                                   // [0x2407bf0] BlueprintEvent       
	// Function /Game/VFX/PP_Effects.PP_Effects_C.SwitcherTimeline__UpdateFunc
	void SwitcherTimeline__UpdateFunc();                                                                                     // [0x2407bf0] BlueprintEvent       
	// Function /Game/VFX/PP_Effects.PP_Effects_C.ReceiveBeginPlay
	void ReceiveBeginPlay();                                                                                                 // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/VFX/PP_Effects.PP_Effects_C.testobcih
	void testobcih();                                                                                                        // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/VFX/PP_Effects.PP_Effects_C.PP_Switcher
	void PP_Switcher(bool Off?);                                                                                             // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/VFX/PP_Effects.PP_Effects_C.ExecuteUbergraph_PP_Effects
	void ExecuteUbergraph_PP_Effects(int32_t EntryPoint);                                                                    // [0x2407bf0] Final|HasDefaults    
};

/// Class /Game/VFX/Blood/Shake_Hit_PP_Right_Zombie.Shake_Hit_PP_Right_Zombie_C
/// Size: 0x0000 (0x0000F0 - 0x0000F0)
class UShake_Hit_PP_Right_Zombie_C : public UDefaultCameraShakeBase : UDefaultCameraShakeBase
{ 
public:
};

/// Class /Game/VFX/Blood/Shake_Hit_PP_Right.Shake_Hit_PP_Right_C
/// Size: 0x0000 (0x0000F0 - 0x0000F0)
class UShake_Hit_PP_Right_C : public UDefaultCameraShakeBase : UDefaultCameraShakeBase
{ 
public:
};

/// Class /Game/VFX/Blood/Shake_Hit_PP_Left_Zombie.Shake_Hit_PP_Left_Zombie_C
/// Size: 0x0000 (0x0000F0 - 0x0000F0)
class UShake_Hit_PP_Left_Zombie_C : public UDefaultCameraShakeBase : UDefaultCameraShakeBase
{ 
public:
};

/// Class /Game/VFX/Blood/Shake_Hit_PP_Left.Shake_Hit_PP_Left_C
/// Size: 0x0000 (0x0000F0 - 0x0000F0)
class UShake_Hit_PP_Left_C : public UDefaultCameraShakeBase : UDefaultCameraShakeBase
{ 
public:
};

/// Class /Game/VFX/Enviroment_VFX/Falling_Leaves/BP_Falling_Leavess.BP_Falling_Leavess_C
/// Size: 0x0050 (0x000290 - 0x0002E0)
class ABP_Falling_Leavess_C : public AActor : AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0290   (0x0008)  
	UNiagaraComponent*                                 Niagara;                                                    // 0x0298   (0x0008)  
	USceneComponent*                                   DefaultSceneRoot;                                           // 0x02A0   (0x0008)  
	FLinearColor                                       Color;                                                      // 0x02A8   (0x0010)  
	double                                             Min_Size;                                                   // 0x02B8   (0x0008)  
	double                                             Max_Size;                                                   // 0x02C0   (0x0008)  
	double                                             Min_Spawn_Rate;                                             // 0x02C8   (0x0008)  
	double                                             Max_Spawn_rate;                                             // 0x02D0   (0x0008)  
	double                                             lifetime;                                                   // 0x02D8   (0x0008)  


	/// Functions
	// Function /Game/VFX/Enviroment_VFX/Falling_Leaves/BP_Falling_Leavess.BP_Falling_Leavess_C.ReceiveBeginPlay
	void ReceiveBeginPlay();                                                                                                 // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/VFX/Enviroment_VFX/Falling_Leaves/BP_Falling_Leavess.BP_Falling_Leavess_C.ExecuteUbergraph_BP_Falling_Leavess
	void ExecuteUbergraph_BP_Falling_Leavess(int32_t EntryPoint);                                                            // [0x2407bf0] Final                
};

