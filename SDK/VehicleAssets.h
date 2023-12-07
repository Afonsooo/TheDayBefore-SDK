
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package VehicleAssets.

/// Struct /VehicleSystemPlugin/VehicleAssets/Config/HitchNetworkData.HitchNetworkData
/// Size: 0x000C (0x000000 - 0x00000C)
struct FHitchNetworkData
{ 
	UVehicle_Hitch_C*                                  HitchedTo_2_073E5F324B041656C0C28A9C7F39CF24;               // 0x0000   (0x0008)  
	float                                              AnimationLength_5_39BF52A541D405D418EB1EA09A7F8D3E;         // 0x0008   (0x0004)  
};

/// Struct /VehicleSystemPlugin/VehicleAssets/Config/LightConfig.LightConfig
/// Size: 0x000C (0x000000 - 0x00000C)
struct FLightConfig
{ 
	FName                                              WhenGroupActive_6_8FAB6FC54D99595E9D1A26A30E21A155;         // 0x0000   (0x0008)  
	float                                              SetIntensity_7_E0C89CB64F614A90A417339F4E35D5E2;            // 0x0008   (0x0004)  
};

/// Struct /VehicleSystemPlugin/VehicleAssets/Config/SurfaceEffectConfig.SurfaceEffectConfig
/// Size: 0x0018 (0x000000 - 0x000018)
struct FSurfaceEffectConfig
{ 
	TEnumAsByte<EPhysicalSurface>                      Surface_5_7BB8627C42DE787CCED5EBA66957B609;                 // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	USoundBase*                                        SkidSound_10_325C271B4B0E1AF52BFE588CB0AA1C98;              // 0x0008   (0x0008)  
	UParticleSystem*                                   SkidParticle_7_42D352E74D524EB323E9E78A9A9F6329;            // 0x0010   (0x0008)  
};

/// Struct /VehicleSystemPlugin/VehicleAssets/Config/SpeedUnit.SpeedUnit
/// Size: 0x0030 (0x000000 - 0x000030)
struct FSpeedUnit
{ 
	TEnumAsByte<SpeedUnits>                            Index_14_1DB21482406D1076E96F90B0D07A804F;                  // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	FText                                              Abbreviation_4_59910DEE40F9D4B55DEB99A8EC15982B;            // 0x0008   (0x0018)  
	double                                             FromCm_15_9B54283E41D024D1F31615B18F094757;                 // 0x0020   (0x0008)  
	double                                             ToCm_18_AC487B3549C4602F8051A7BEFD1ECEAB;                   // 0x0028   (0x0008)  
};

/// Class /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_LightController.Vehicle_LightController_C
/// Size: 0x0030 (0x0002A0 - 0x0002D0)
class UVehicle_LightController_C : public UVehicleComponent : UVehicleComponent
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02A0   (0x0008)  
	TArray<ULightComponent*>                           LightSources;                                               // 0x02A8   (0x0010)  
	TArray<FLightConfig>                               Relations;                                                  // 0x02B8   (0x0010)  
	double                                             Intensity;                                                  // 0x02C8   (0x0008)  


	/// Functions
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_LightController.Vehicle_LightController_C.HasActiveLights
	void HasActiveLights(bool& Active);                                                                                      // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_LightController.Vehicle_LightController_C.GetIntensity
	void GetIntensity(double& Intensity);                                                                                    // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_LightController.Vehicle_LightController_C.Illuminate
	void Illuminate(double Intensity);                                                                                       // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_LightController.Vehicle_LightController_C.Init
	void Init();                                                                                                             // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_LightController.Vehicle_LightController_C.ExecuteUbergraph_Vehicle_LightController
	void ExecuteUbergraph_Vehicle_LightController(int32_t EntryPoint);                                                       // [0x2407bf0] Final|HasDefaults    
};

/// Class /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_Hitch.Vehicle_Hitch_C
/// Size: 0x01A0 (0x0002A0 - 0x000440)
class UVehicle_Hitch_C : public UVehicleComponent : UVehicleComponent
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02A0   (0x0008)  
	TEnumAsByte<HitchTypes>                            Type;                                                       // 0x02A8   (0x0001)  
	bool                                               Initialized;                                                // 0x02A9   (0x0001)  
	bool                                               isHitched;                                                  // 0x02AA   (0x0001)  
	unsigned char                                      UnknownData00_5[0x5];                                       // 0x02AB   (0x0005)  MISSED
	TArray<FName>                                      ConnectTypes;                                               // 0x02B0   (0x0010)  
	double                                             X_RotationLimit;                                            // 0x02C0   (0x0008)  
	double                                             Y_RotationLimit;                                            // 0x02C8   (0x0008)  
	double                                             Z_RotationLimit;                                            // 0x02D0   (0x0008)  
	FTimerHandle                                       HitchAnimationTimer;                                        // 0x02D8   (0x0008)  
	double                                             AnimationLength;                                            // 0x02E0   (0x0008)  
	UVehicleConstraint*                                HitchConstraint;                                            // 0x02E8   (0x0008)  
	UPhysicsHandleComponent*                           HitchHandle;                                                // 0x02F0   (0x0008)  
	AAVS_Vehicle_C*                                    ParentVehicle;                                              // 0x02F8   (0x0008)  
	UVehicle_Hitch_C*                                  TowHitch;                                                   // 0x0300   (0x0008)  
	UVehicle_Hitch_C*                                  TrailerHitch;                                               // 0x0308   (0x0008)  
	FTransform                                         HitchFrame1;                                                // 0x0310   (0x0060)  
	FTransform                                         HitchFrame2;                                                // 0x0370   (0x0060)  
	FVector                                            AnimateFrom;                                                // 0x03D0   (0x0018)  
	FVector                                            AnimateTo;                                                  // 0x03E8   (0x0018)  
	FMulticastInlineDelegate                           Hitched;                                                    // 0x0400   (0x0010)  
	FMulticastInlineDelegate                           Unhitched;                                                  // 0x0410   (0x0010)  
	FHitchNetworkData                                  HitchNetworkData;                                           // 0x0420   (0x0010)  
	FMulticastInlineDelegate                           HitchedToDestroyed;                                         // 0x0430   (0x0010)  


	/// Functions
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_Hitch.Vehicle_Hitch_C.WakeIfValid
	void WakeIfValid();                                                                                                      // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_Hitch.Vehicle_Hitch_C.SetTowHitch
	void SetTowHitch(UVehicle_Hitch_C* TowHitch);                                                                            // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_Hitch.Vehicle_Hitch_C.GetHitchedTo
	void GetHitchedTo(UVehicle_Hitch_C*& HitchedTo);                                                                         // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_Hitch.Vehicle_Hitch_C.ApplyHitchFromNetwork
	void ApplyHitchFromNetwork();                                                                                            // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_Hitch.Vehicle_Hitch_C.OnRep_HitchNetwork
	void OnRep_HitchNetwork();                                                                                               // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_Hitch.Vehicle_Hitch_C.CheckCompatibility
	void CheckCompatibility(UVehicle_Hitch_C* To, bool& isCompatible);                                                       // [0x2407bf0] Private|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_Hitch.Vehicle_Hitch_C.GetOwningVehicle
	void GetOwningVehicle(AAVS_Vehicle_C*& Vehicle);                                                                         // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_Hitch.Vehicle_Hitch_C.GetHitchedTrailer
	void GetHitchedTrailer(AAVS_Vehicle_C*& Trailer);                                                                        // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_Hitch.Vehicle_Hitch_C.GetHitchedVehicle
	void GetHitchedVehicle(AAVS_Vehicle_C*& Vehicle);                                                                        // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_Hitch.Vehicle_Hitch_C.GetVehicleMesh
	void GetVehicleMesh(UMeshComponent*& Mesh);                                                                              // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_Hitch.Vehicle_Hitch_C.Unhitch
	void Unhitch();                                                                                                          // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_Hitch.Vehicle_Hitch_C.Hitch
	void Hitch(UVehicle_Hitch_C* To, double AnimationLength);                                                                // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_Hitch.Vehicle_Hitch_C.UpdateIsHitched
	void UpdateIsHitched(UVehicle_Hitch_C* TowHitch, UVehicle_Hitch_C* TrailerHitch);                                        // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_Hitch.Vehicle_Hitch_C.ApplyHitchConstraint
	void ApplyHitchConstraint(UVehicle_Hitch_C* TowHitch, UVehicle_Hitch_C* TrailerHitch);                                   // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_Hitch.Vehicle_Hitch_C.CreateConstraintFrames
	void CreateConstraintFrames();                                                                                           // [0x2407bf0] Private|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_Hitch.Vehicle_Hitch_C.CreateHitchConstraint
	void CreateHitchConstraint();                                                                                            // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_Hitch.Vehicle_Hitch_C.InitHitch
	void InitHitch();                                                                                                        // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_Hitch.Vehicle_Hitch_C.HitchToOverlapped
	void HitchToOverlapped(double AnimationLength);                                                                          // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_Hitch.Vehicle_Hitch_C.SetIsHitched
	void SetIsHitched(bool isHitched);                                                                                       // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_Hitch.Vehicle_Hitch_C.GetIsHitched
	void GetIsHitched(bool& isHitched);                                                                                      // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_Hitch.Vehicle_Hitch_C.ReceiveTick
	void ReceiveTick(float DeltaSeconds);                                                                                    // [0x2407bf0] Event|Public|BlueprintEvent 
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_Hitch.Vehicle_Hitch_C.StartHitchAnimation
	void StartHitchAnimation(double AnimationLength);                                                                        // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_Hitch.Vehicle_Hitch_C.HitchAnimationFinished
	void HitchAnimationFinished();                                                                                           // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_Hitch.Vehicle_Hitch_C.StopHitchAnimation
	void StopHitchAnimation();                                                                                               // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_Hitch.Vehicle_Hitch_C.ReceiveBeginPlay
	void ReceiveBeginPlay();                                                                                                 // [0x2407bf0] Event|Public|BlueprintEvent 
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_Hitch.Vehicle_Hitch_C.HitchConstraintBroken
	void HitchConstraintBroken(int32_t ConstraintIndex);                                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_Hitch.Vehicle_Hitch_C.RPC_Server_HitchData
	void RPC_Server_HitchData(FHitchNetworkData HitchNetworkData);                                                           // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_Hitch.Vehicle_Hitch_C.ReceiveEndPlay
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);                                                          // [0x2407bf0] Event|Public|BlueprintEvent 
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_Hitch.Vehicle_Hitch_C.HitchedToDestroyed_Event
	void HitchedToDestroyed_Event();                                                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_Hitch.Vehicle_Hitch_C.ExecuteUbergraph_Vehicle_Hitch
	void ExecuteUbergraph_Vehicle_Hitch(int32_t EntryPoint);                                                                 // [0x2407bf0] Final|HasDefaults    
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_Hitch.Vehicle_Hitch_C.HitchedToDestroyed__DelegateSignature
	void HitchedToDestroyed__DelegateSignature();                                                                            // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_Hitch.Vehicle_Hitch_C.Unhitched__DelegateSignature
	void Unhitched__DelegateSignature();                                                                                     // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_Hitch.Vehicle_Hitch_C.Hitched__DelegateSignature
	void Hitched__DelegateSignature(UVehicle_Hitch_C* TowHitch, UVehicle_Hitch_C* TrailerHitch);                             // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_ExhaustController.Vehicle_ExhaustController_C
/// Size: 0x0018 (0x0002A0 - 0x0002B8)
class UVehicle_ExhaustController_C : public UVehicleComponent : UVehicleComponent
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02A0   (0x0008)  
	TArray<UParticleSystemComponent*>                  Exhausts;                                                   // 0x02A8   (0x0010)  


	/// Functions
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_ExhaustController.Vehicle_ExhaustController_C.ReceiveBeginPlay
	void ReceiveBeginPlay();                                                                                                 // [0x2407bf0] Event|Public|BlueprintEvent 
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_ExhaustController.Vehicle_ExhaustController_C.UpdateExhaustSmoke
	void UpdateExhaustSmoke(double RPM, double Throttle, bool Active);                                                       // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_ExhaustController.Vehicle_ExhaustController_C.Construct
	void Construct();                                                                                                        // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_ExhaustController.Vehicle_ExhaustController_C.ExecuteUbergraph_Vehicle_ExhaustController
	void ExecuteUbergraph_Vehicle_ExhaustController(int32_t EntryPoint);                                                     // [0x2407bf0] Final|HasDefaults    
};

/// Class /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_EngineAudio.Vehicle_EngineAudio_C
/// Size: 0x0051 (0x0002A0 - 0x0002F1)
class UVehicle_EngineAudio_C : public UVehicleComponent : UVehicleComponent
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02A0   (0x0008)  
	AAVS_Vehicle_C*                                    Owner;                                                      // 0x02A8   (0x0008)  
	UAudioComponent*                                   EngineAudio;                                                // 0x02B0   (0x0008)  
	USoundBase*                                        EngineStartSound;                                           // 0x02B8   (0x0008)  
	USoundCue*                                         EngineSound;                                                // 0x02C0   (0x0008)  
	bool                                               Initialized;                                                // 0x02C8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x02C9   (0x0007)  MISSED
	double                                             HighRPM;                                                    // 0x02D0   (0x0008)  
	UAudioComponent*                                   EngineStartAudio;                                           // 0x02D8   (0x0008)  
	FTimerHandle                                       StartTimerTemp;                                             // 0x02E0   (0x0008)  
	USoundAttenuation*                                 Engine_Attentuation;                                        // 0x02E8   (0x0008)  
	bool                                               EngineRunning;                                              // 0x02F0   (0x0001)  


	/// Functions
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_EngineAudio.Vehicle_EngineAudio_C.SetEngineRunning
	void SetEngineRunning(bool EngineRunning);                                                                               // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_EngineAudio.Vehicle_EngineAudio_C.ReceiveBeginPlay
	void ReceiveBeginPlay();                                                                                                 // [0x2407bf0] Event|Public|BlueprintEvent 
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_EngineAudio.Vehicle_EngineAudio_C.ReceiveTick
	void ReceiveTick(float DeltaSeconds);                                                                                    // [0x2407bf0] Event|Public|BlueprintEvent 
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_EngineAudio.Vehicle_EngineAudio_C.StopSound
	void StopSound();                                                                                                        // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_EngineAudio.Vehicle_EngineAudio_C.PlaybackFade
	void PlaybackFade(USoundWave* PlayingSoundWave, float PlaybackPercent);                                                  // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_EngineAudio.Vehicle_EngineAudio_C.ClearStartTimer
	void ClearStartTimer();                                                                                                  // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_EngineAudio.Vehicle_EngineAudio_C.PlayIgnition
	void PlayIgnition();                                                                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_EngineAudio.Vehicle_EngineAudio_C.ChangePassiveState
	void ChangePassiveState(bool NewPassive);                                                                                // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_EngineAudio.Vehicle_EngineAudio_C.ExecuteUbergraph_Vehicle_EngineAudio
	void ExecuteUbergraph_Vehicle_EngineAudio(int32_t EntryPoint);                                                           // [0x2407bf0] Final|HasDefaults    
};

/// Class /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_CenterOfMass.Vehicle_CenterOfMass_C
/// Size: 0x0000 (0x0002A0 - 0x0002A0)
class UVehicle_CenterOfMass_C : public UVehicleComponent : UVehicleComponent
{ 
public:
};

/// Class /VehicleSystemPlugin/VehicleAssets/HUD/VehicleStat.VehicleStat_C
/// Size: 0x0050 (0x000280 - 0x0002D0)
class UVehicleStat_C : public UUserWidget : UUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0280   (0x0008)  
	UTextBlock*                                        StatInfo;                                                   // 0x0288   (0x0008)  
	UTextBlock*                                        StatName;                                                   // 0x0290   (0x0008)  
	bool                                               MainStat;                                                   // 0x0298   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0299   (0x0007)  MISSED
	FText                                              Stat_Name;                                                  // 0x02A0   (0x0018)  
	FText                                              Stat_Info;                                                  // 0x02B8   (0x0018)  


	/// Functions
	// Function /VehicleSystemPlugin/VehicleAssets/HUD/VehicleStat.VehicleStat_C.PreConstruct
	void PreConstruct(bool IsDesignTime);                                                                                    // [0x2407bf0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /VehicleSystemPlugin/VehicleAssets/HUD/VehicleStat.VehicleStat_C.SetInfo
	void SetInfo(FText InText);                                                                                              // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/VehicleAssets/HUD/VehicleStat.VehicleStat_C.ExecuteUbergraph_VehicleStat
	void ExecuteUbergraph_VehicleStat(int32_t EntryPoint);                                                                   // [0x2407bf0] Final|HasDefaults    
};

/// Class /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_Wheel.Vehicle_Wheel_C
/// Size: 0x0160 (0x0004E0 - 0x000640)
class UVehicle_Wheel_C : public UVehicleWheelBase : UVehicleWheelBase
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x04E0   (0x0008)  
	bool                                               Constructed;                                                // 0x04E8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x04E9   (0x0007)  MISSED
	AAVS_Vehicle_C*                                    Vehicle;                                                    // 0x04F0   (0x0008)  
	UPrimitiveComponent*                               ParentPrim;                                                 // 0x04F8   (0x0008)  
	UVehicleConstraint*                                SpringConstraint;                                           // 0x0500   (0x0008)  
	UVehicleConstraint*                                TurnConstraint;                                             // 0x0508   (0x0008)  
	UPhysicalMaterial*                                 physicsMaterial;                                            // 0x0510   (0x0008)  
	bool                                               OverrideWeight;                                             // 0x0518   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0519   (0x0007)  MISSED
	double                                             OverrideWeightKg;                                           // 0x0520   (0x0008)  
	UStaticMeshComponent*                              WheelController;                                            // 0x0528   (0x0008)  
	UStaticMeshComponent*                              ProjectedMesh;                                              // 0x0530   (0x0008)  
	unsigned char                                      UnknownData02_5[0x8];                                       // 0x0538   (0x0008)  MISSED
	FTransform                                         SpawnRelTransform;                                          // 0x0540   (0x0060)  
	double                                             Skid;                                                       // 0x05A0   (0x0008)  
	double                                             DesiredSkid;                                                // 0x05A8   (0x0008)  
	UAudioComponent*                                   SkidAudio;                                                  // 0x05B0   (0x0008)  
	double                                             RotationSpeed;                                              // 0x05B8   (0x0008)  
	bool                                               isBrakeLocked;                                              // 0x05C0   (0x0001)  
	unsigned char                                      UnknownData03_5[0x7];                                       // 0x05C1   (0x0007)  MISSED
	UParticleSystemComponent*                          ActiveSkidParticle;                                         // 0x05C8   (0x0008)  
	double                                             SkidEffectSpeed;                                            // 0x05D0   (0x0008)  
	bool                                               SkidSounds;                                                 // 0x05D8   (0x0001)  
	unsigned char                                      UnknownData04_5[0x7];                                       // 0x05D9   (0x0007)  MISSED
	USoundBase*                                        SkidSound;                                                  // 0x05E0   (0x0008)  
	bool                                               OverrideVehicleTorque;                                      // 0x05E8   (0x0001)  
	bool                                               SkidParticles;                                              // 0x05E9   (0x0001)  
	unsigned char                                      UnknownData05_5[0x6];                                       // 0x05EA   (0x0006)  MISSED
	UParticleSystem*                                   SkidParticle;                                               // 0x05F0   (0x0008)  
	double                                             SkidParticleHeightOffset;                                   // 0x05F8   (0x0008)  
	TArray<FSurfaceEffectConfig>                       SurfaceEffects;                                             // 0x0600   (0x0010)  
	TEnumAsByte<EPhysicalSurface>                      LastSurfaceHit;                                             // 0x0610   (0x0001)  
	unsigned char                                      UnknownData06_5[0x7];                                       // 0x0611   (0x0007)  MISSED
	USoundBase*                                        ActiveSkidSound;                                            // 0x0618   (0x0008)  
	UParticleSystem*                                   ActiveSkidParticleTemplate;                                 // 0x0620   (0x0008)  
	double                                             WheelTorque;                                                // 0x0628   (0x0008)  
	bool                                               CollideWhenDetached;                                        // 0x0630   (0x0001)  
	bool                                               PassiveState;                                               // 0x0631   (0x0001)  
	unsigned char                                      UnknownData07_5[0x6];                                       // 0x0632   (0x0006)  MISSED
	UVehicleConstraint*                                BoneConstraint;                                             // 0x0638   (0x0008)  


	/// Functions
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_Wheel.Vehicle_Wheel_C.SetWheelMode
	void SetWheelMode(EWheelMode NewMode);                                                                                   // [0x2407bf0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_Wheel.Vehicle_Wheel_C.SetSuspensionPreview
	void SetSuspensionPreview(bool Preview);                                                                                 // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_Wheel.Vehicle_Wheel_C.GetSuspensionPreview
	void GetSuspensionPreview(bool& EditorPreview);                                                                          // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_Wheel.Vehicle_Wheel_C.GetRollingResistance
	void GetRollingResistance(double& RollingResistance);                                                                    // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_Wheel.Vehicle_Wheel_C.GetWheelRadius
	void GetWheelRadius(double& BrakePressure);                                                                              // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_Wheel.Vehicle_Wheel_C.SetSpringDownforce
	void SetSpringDownforce(float SpringDownforce);                                                                          // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_Wheel.Vehicle_Wheel_C.SetSpringDamping
	void SetSpringDamping(float SpringDamping);                                                                              // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_Wheel.Vehicle_Wheel_C.SetSpringStrength
	void SetSpringStrength(float SpringStrength);                                                                            // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_Wheel.Vehicle_Wheel_C.SetSpringLength
	void SetSpringLength(float SpringLength);                                                                                // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_Wheel.Vehicle_Wheel_C.SetSuspensionSettings
	void SetSuspensionSettings(float Spring Length, float Spring Strength, float Spring Damping);                            // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_Wheel.Vehicle_Wheel_C.GetSpringLength
	void GetSpringLength(double& SpringLength);                                                                              // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_Wheel.Vehicle_Wheel_C.GetInvertTorque
	void GetInvertTorque(bool& isInvertedTorque);                                                                            // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_Wheel.Vehicle_Wheel_C.GetBrakePressure
	void GetBrakePressure(double& BrakePressure);                                                                            // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_Wheel.Vehicle_Wheel_C.GetIsDrivingWheel
	void GetIsDrivingWheel(bool& IsDrivingWheel);                                                                            // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_Wheel.Vehicle_Wheel_C.GetSuspensionSettings
	void GetSuspensionSettings(float& SpringLength, float& SpringStrength, float& SpringDamping, double& PhysicsDownforce);  // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_Wheel.Vehicle_Wheel_C.GetIsHandbrakeWheel
	void GetIsHandbrakeWheel(bool& IsHandbrakeWheel);                                                                        // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_Wheel.Vehicle_Wheel_C.BreakAttachment
	void BreakAttachment();                                                                                                  // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_Wheel.Vehicle_Wheel_C.UpdateRotationConstraint
	void UpdateRotationConstraint();                                                                                         // [0x2407bf0] Private|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_Wheel.Vehicle_Wheel_C.UpdateSpringConstraint
	void UpdateSpringConstraint();                                                                                           // [0x2407bf0] Private|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_Wheel.Vehicle_Wheel_C.CreateWheelController
	void CreateWheelController();                                                                                            // [0x2407bf0] Private|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_Wheel.Vehicle_Wheel_C.DestroyPhysConstraints
	void DestroyPhysConstraints();                                                                                           // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_Wheel.Vehicle_Wheel_C.CreatePhysConstraints
	void CreatePhysConstraints();                                                                                            // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_Wheel.Vehicle_Wheel_C.ConfigurePhysConstraints
	void ConfigurePhysConstraints();                                                                                         // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_Wheel.Vehicle_Wheel_C.StopSkidEffects
	void StopSkidEffects();                                                                                                  // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_Wheel.Vehicle_Wheel_C.UpdateSteering
	void UpdateSteering(double NewSteering);                                                                                 // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_Wheel.Vehicle_Wheel_C.SetChassisCollisions
	void SetChassisCollisions(bool Collision);                                                                               // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_Wheel.Vehicle_Wheel_C.UpdateWheelMeshProperties
	void UpdateWheelMeshProperties();                                                                                        // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_Wheel.Vehicle_Wheel_C.GetWheelTorque
	void GetWheelTorque(double& WheelTorque);                                                                                // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_Wheel.Vehicle_Wheel_C.SwapVisibleMesh
	void SwapVisibleMesh(bool UseProjected);                                                                                 // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_Wheel.Vehicle_Wheel_C.SetWheelPosition
	void SetWheelPosition(FVector NewLocation, FRotator NewRotation);                                                        // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_Wheel.Vehicle_Wheel_C.SetProjectedMesh
	void SetProjectedMesh(UStaticMeshComponent* ProjectedMesh);                                                              // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_Wheel.Vehicle_Wheel_C.GetProjectedMesh
	void GetProjectedMesh(UPrimitiveComponent*& ProjectedMesh);                                                              // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_Wheel.Vehicle_Wheel_C.CleanupForDestroy
	void CleanupForDestroy();                                                                                                // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_Wheel.Vehicle_Wheel_C.GetConstraints
	void GetConstraints(UVehicleConstraint*& TurnConstraint, UVehicleConstraint*& SpringConstraint);                         // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_Wheel.Vehicle_Wheel_C.GetLastTouch
	void GetLastTouch(FHitResult& LastTouch);                                                                                // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_Wheel.Vehicle_Wheel_C.TouchSurfaceChange
	void TouchSurfaceChange();                                                                                               // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_Wheel.Vehicle_Wheel_C.GetEffectsForSurface
	void GetEffectsForSurface(TEnumAsByte<EPhysicalSurface> Surface, USoundBase*& SkidSound, UParticleSystem*& SkidParticle); // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_Wheel.Vehicle_Wheel_C.ClearActiveParticle
	void ClearActiveParticle();                                                                                              // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_Wheel.Vehicle_Wheel_C.SetVehicleTorque
	void SetVehicleTorque(double TargetSpeed, double Torque, bool Reverse);                                                  // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_Wheel.Vehicle_Wheel_C.SetWheelTorque
	void SetWheelTorque(bool OverrideVehicle, double TargetSpeed, double Torque, bool Reverse);                              // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_Wheel.Vehicle_Wheel_C.CleanupSkidParticle
	void CleanupSkidParticle();                                                                                              // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_Wheel.Vehicle_Wheel_C.InitSkidParticles
	void InitSkidParticles();                                                                                                // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_Wheel.Vehicle_Wheel_C.InitSkidSounds
	void InitSkidSounds();                                                                                                   // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_Wheel.Vehicle_Wheel_C.UpdateSkidEffects
	void UpdateSkidEffects();                                                                                                // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_Wheel.Vehicle_Wheel_C.SetIsDrivingWheel
	void SetIsDrivingWheel(bool IsDrivingWheel);                                                                             // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_Wheel.Vehicle_Wheel_C.SetDriveMotor
	void SetDriveMotor(bool EnableMotor);                                                                                    // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_Wheel.Vehicle_Wheel_C.GetIsBrakeLocked
	void GetIsBrakeLocked(bool& isBrakeLocked);                                                                              // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_Wheel.Vehicle_Wheel_C.SetIsBrakeLocked
	void SetIsBrakeLocked(bool isBrakeLocked);                                                                               // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_Wheel.Vehicle_Wheel_C.GetIsLocked
	void GetIsLocked(bool& IsLocked);                                                                                        // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_Wheel.Vehicle_Wheel_C.ResetPosition
	void ResetPosition();                                                                                                    // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_Wheel.Vehicle_Wheel_C.ResetSteering
	void ResetSteering();                                                                                                    // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_Wheel.Vehicle_Wheel_C.ChangeStaticMesh
	void ChangeStaticMesh(UStaticMesh* NewMesh);                                                                             // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_Wheel.Vehicle_Wheel_C.UpdateRotationSpeed
	void UpdateRotationSpeed();                                                                                              // [0x2407bf0] Private|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_Wheel.Vehicle_Wheel_C.GetWheelController
	void GetWheelController(UPrimitiveComponent*& ControllerMesh);                                                           // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_Wheel.Vehicle_Wheel_C.UpdateSkid
	void UpdateSkid();                                                                                                       // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_Wheel.Vehicle_Wheel_C.GetRotationSpeed
	void GetRotationSpeed(double& RotationSpeed);                                                                            // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_Wheel.Vehicle_Wheel_C.DebugWarningOrError
	void DebugWarningOrError(FString Message, bool Error?);                                                                  // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_Wheel.Vehicle_Wheel_C.Detach
	void Detach();                                                                                                           // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_Wheel.Vehicle_Wheel_C.Attach
	void Attach(bool ResetPosition, bool Force);                                                                             // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_Wheel.Vehicle_Wheel_C.SetPhysics
	void SetPhysics(bool Simulate?);                                                                                         // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_Wheel.Vehicle_Wheel_C.LockWheel
	void LockWheel(bool Lock);                                                                                               // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_Wheel.Vehicle_Wheel_C.UpdateWheel
	void UpdateWheel();                                                                                                      // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_Wheel.Vehicle_Wheel_C.GetWheelMesh
	void GetWheelMesh(UPrimitiveComponent*& WheelMesh);                                                                      // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_Wheel.Vehicle_Wheel_C.CalculateSkidAmount
	void CalculateSkidAmount();                                                                                              // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_Wheel.Vehicle_Wheel_C.CalculateSkidDirection
	void CalculateSkidDirection(FVector Velocity, FRotator WheelForward, FRotator& MarkDirection);                           // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_Wheel.Vehicle_Wheel_C.InitBonePhysics
	void InitBonePhysics();                                                                                                  // [0x2407bf0] Private|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_Wheel.Vehicle_Wheel_C.InitializeWheel
	void InitializeWheel(AAVS_Vehicle_C* Owner);                                                                             // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_Wheel.Vehicle_Wheel_C.Construct
	void Construct();                                                                                                        // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_Wheel.Vehicle_Wheel_C.UpdateConstraints
	void UpdateConstraints();                                                                                                // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_Wheel.Vehicle_Wheel_C.ChangePassiveState
	void ChangePassiveState(bool NewPassive);                                                                                // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_Wheel.Vehicle_Wheel_C.ReceiveEndPlay
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);                                                          // [0x2407bf0] Event|Public|BlueprintEvent 
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_Wheel.Vehicle_Wheel_C.ReceiveTick
	void ReceiveTick(float DeltaSeconds);                                                                                    // [0x2407bf0] Event|Public|BlueprintEvent 
	// Function /VehicleSystemPlugin/VehicleAssets/Components/Vehicle_Wheel.Vehicle_Wheel_C.ExecuteUbergraph_Vehicle_Wheel
	void ExecuteUbergraph_Vehicle_Wheel(int32_t EntryPoint);                                                                 // [0x2407bf0] Final                
};

/// Class /VehicleSystemPlugin/VehicleAssets/HUD/VehicleSetup_HUD.VehicleSetup_HUD_C
/// Size: 0x0158 (0x000280 - 0x0003D8)
class UVehicleSetup_HUD_C : public UUserWidget : UUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0280   (0x0008)  
	UVehicleStat_C*                                    AccelerationSpeed;                                          // 0x0288   (0x0008)  
	UVehicleStat_C*                                    AirSpeed;                                                   // 0x0290   (0x0008)  
	UVehicleStat_C*                                    AngularDrag;                                                // 0x0298   (0x0008)  
	UVehicleStat_C*                                    AVS_Version;                                                // 0x02A0   (0x0008)  
	UVehicleStat_C*                                    Brake;                                                      // 0x02A8   (0x0008)  
	UCheckBox*                                         CheckBox_AutoGears;                                         // 0x02B0   (0x0008)  
	UCheckBox*                                         Checkbox_SuspensionPreview;                                 // 0x02B8   (0x0008)  
	UVehicleStat_C*                                    CurrentGear;                                                // 0x02C0   (0x0008)  
	UBorder*                                           Debug_Panel;                                                // 0x02C8   (0x0008)  
	UVehicleStat_C*                                    DownShift;                                                  // 0x02D0   (0x0008)  
	UVehicleStat_C*                                    EngineStatus;                                               // 0x02D8   (0x0008)  
	UTextBlock*                                        GameFPS;                                                    // 0x02E0   (0x0008)  
	UVehicleStat_C*                                    HandbrakeInput;                                             // 0x02E8   (0x0008)  
	UVehicleStat_C*                                    LinearDrag;                                                 // 0x02F0   (0x0008)  
	UTextBlock*                                        PhysicsFPS;                                                 // 0x02F8   (0x0008)  
	UVehicleStat_C*                                    PhysicsState;                                               // 0x0300   (0x0008)  
	UVehicleStat_C*                                    RPM;                                                        // 0x0308   (0x0008)  
	UVehicleStat_C*                                    ShifterPos;                                                 // 0x0310   (0x0008)  
	UVehicleStat_C*                                    Slip;                                                       // 0x0318   (0x0008)  
	USpinBox*                                          SpringDownforceValue;                                       // 0x0320   (0x0008)  
	USpinBox*                                          SpringStrengthValue;                                        // 0x0328   (0x0008)  
	UVehicleStat_C*                                    Steering;                                                   // 0x0330   (0x0008)  
	UVehicleStat_C*                                    SteeringInput;                                              // 0x0338   (0x0008)  
	USpinBox*                                          SuspensionDampingValue;                                     // 0x0340   (0x0008)  
	USpinBox*                                          SuspensionLengthValue;                                      // 0x0348   (0x0008)  
	UVehicleStat_C*                                    TargetSpeed;                                                // 0x0350   (0x0008)  
	UVehicleStat_C*                                    Throttle;                                                   // 0x0358   (0x0008)  
	USpinBox*                                          TimescaleValue;                                             // 0x0360   (0x0008)  
	UButton*                                           ToggleCollisionVisible;                                     // 0x0368   (0x0008)  
	UVehicleStat_C*                                    Torque;                                                     // 0x0370   (0x0008)  
	UButton*                                           Un_Roll_Button;                                             // 0x0378   (0x0008)  
	UVehicleStat_C*                                    Unreal_Version;                                             // 0x0380   (0x0008)  
	UVehicleStat_C*                                    UpShift;                                                    // 0x0388   (0x0008)  
	UVehicleStat_C*                                    VehicleMass;                                                // 0x0390   (0x0008)  
	UTextBlock*                                        VehicleName;                                                // 0x0398   (0x0008)  
	UVehicleStat_C*                                    WheelCount;                                                 // 0x03A0   (0x0008)  
	UVehicleStat_C*                                    WheelSpeed;                                                 // 0x03A8   (0x0008)  
	AAVS_Vehicle_C*                                    PlayerVehicle;                                              // 0x03B0   (0x0008)  
	TArray<UVehicle_Wheel_C*>                          ConstrainedWheels;                                          // 0x03B8   (0x0010)  
	FString                                            SpeedUnitAbbreviation;                                      // 0x03C8   (0x0010)  


	/// Functions
	// Function /VehicleSystemPlugin/VehicleAssets/HUD/VehicleSetup_HUD.VehicleSetup_HUD_C.UpdateVersions
	void UpdateVersions();                                                                                                   // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/VehicleAssets/HUD/VehicleSetup_HUD.VehicleSetup_HUD_C.onPlayerPawnChange
	void onPlayerPawnChange();                                                                                               // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/VehicleAssets/HUD/VehicleSetup_HUD.VehicleSetup_HUD_C.UpdateHudInputs
	void UpdateHudInputs();                                                                                                  // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/VehicleAssets/HUD/VehicleSetup_HUD.VehicleSetup_HUD_C.UpdateVehicleReference
	void UpdateVehicleReference();                                                                                           // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/VehicleAssets/HUD/VehicleSetup_HUD.VehicleSetup_HUD_C.BndEvt__ToggleCollisionVisible_K2Node_ComponentBoundEvent_56_OnButtonClickedEvent__DelegateSignature
	void BndEvt__ToggleCollisionVisible_K2Node_ComponentBoundEvent_56_OnButtonClickedEvent__DelegateSignature();             // [0x2407bf0] BlueprintEvent       
	// Function /VehicleSystemPlugin/VehicleAssets/HUD/VehicleSetup_HUD.VehicleSetup_HUD_C.BndEvt__CheckBox_AutoGears_K2Node_ComponentBoundEvent_74_OnCheckBoxComponentStateChanged__DelegateSignature
	void BndEvt__CheckBox_AutoGears_K2Node_ComponentBoundEvent_74_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked); // [0x2407bf0] BlueprintEvent       
	// Function /VehicleSystemPlugin/VehicleAssets/HUD/VehicleSetup_HUD.VehicleSetup_HUD_C.BndEvt__SuspensionStrengthValue_K2Node_ComponentBoundEvent_112_OnSpinBoxValueCommittedEvent__DelegateSignature
	void BndEvt__SuspensionStrengthValue_K2Node_ComponentBoundEvent_112_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit> CommitMethod); // [0x2407bf0] BlueprintEvent       
	// Function /VehicleSystemPlugin/VehicleAssets/HUD/VehicleSetup_HUD.VehicleSetup_HUD_C.BndEvt__SuspensionLengthValue_K2Node_ComponentBoundEvent_127_OnSpinBoxValueCommittedEvent__DelegateSignature
	void BndEvt__SuspensionLengthValue_K2Node_ComponentBoundEvent_127_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit> CommitMethod); // [0x2407bf0] BlueprintEvent       
	// Function /VehicleSystemPlugin/VehicleAssets/HUD/VehicleSetup_HUD.VehicleSetup_HUD_C.BndEvt__SuspensionDampingValue_K2Node_ComponentBoundEvent_143_OnSpinBoxValueCommittedEvent__DelegateSignature
	void BndEvt__SuspensionDampingValue_K2Node_ComponentBoundEvent_143_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit> CommitMethod); // [0x2407bf0] BlueprintEvent       
	// Function /VehicleSystemPlugin/VehicleAssets/HUD/VehicleSetup_HUD.VehicleSetup_HUD_C.BndEvt__TimescaleValue_K2Node_ComponentBoundEvent_28_OnSpinBoxValueCommittedEvent__DelegateSignature
	void BndEvt__TimescaleValue_K2Node_ComponentBoundEvent_28_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit> CommitMethod); // [0x2407bf0] BlueprintEvent       
	// Function /VehicleSystemPlugin/VehicleAssets/HUD/VehicleSetup_HUD.VehicleSetup_HUD_C.BndEvt__SuspensionStrength2Value_K2Node_ComponentBoundEvent_95_OnSpinBoxValueCommittedEvent__DelegateSignature
	void BndEvt__SuspensionStrength2Value_K2Node_ComponentBoundEvent_95_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit> CommitMethod); // [0x2407bf0] BlueprintEvent       
	// Function /VehicleSystemPlugin/VehicleAssets/HUD/VehicleSetup_HUD.VehicleSetup_HUD_C.BndEvt__Un-Roll_Button_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature
	void BndEvt__Un-Roll_Button_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature();                     // [0x2407bf0] BlueprintEvent       
	// Function /VehicleSystemPlugin/VehicleAssets/HUD/VehicleSetup_HUD.VehicleSetup_HUD_C.Construct
	void Construct();                                                                                                        // [0x2407bf0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /VehicleSystemPlugin/VehicleAssets/HUD/VehicleSetup_HUD.VehicleSetup_HUD_C.HUD Tick
	void HUD Tick();                                                                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/VehicleAssets/HUD/VehicleSetup_HUD.VehicleSetup_HUD_C.BndEvt__VehicleSetup_HUD_Checkbox_SuspensionPreview_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
	void BndEvt__VehicleSetup_HUD_Checkbox_SuspensionPreview_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked); // [0x2407bf0] BlueprintEvent       
	// Function /VehicleSystemPlugin/VehicleAssets/HUD/VehicleSetup_HUD.VehicleSetup_HUD_C.ExecuteUbergraph_VehicleSetup_HUD
	void ExecuteUbergraph_VehicleSetup_HUD(int32_t EntryPoint);                                                              // [0x2407bf0] Final|HasDefaults    
};

/// Class /VehicleSystemPlugin/VehicleAssets/VehicleMath.VehicleMath_C
/// Size: 0x0000 (0x000028 - 0x000028)
class UVehicleMath_C : public UBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{ 
public:
};

/// Enum /VehicleSystemPlugin/VehicleAssets/Config/HitchTypes.HitchTypes
/// Size: 0x03
enum HitchTypes : uint8_t
{
	HitchTypes__NewEnumerator00                                                      = 0,
	HitchTypes__NewEnumerator11                                                      = 1,
	HitchTypes__HitchTypes_MAX2                                                      = 2
};

/// Enum /VehicleSystemPlugin/VehicleAssets/Config/SpeedUnits.SpeedUnits
/// Size: 0x07
enum SpeedUnits : uint8_t
{
	SpeedUnits__NewEnumerator00                                                      = 0,
	SpeedUnits__NewEnumerator11                                                      = 1,
	SpeedUnits__NewEnumerator22                                                      = 2,
	SpeedUnits__NewEnumerator33                                                      = 3,
	SpeedUnits__NewEnumerator44                                                      = 4,
	SpeedUnits__NewEnumerator55                                                      = 5,
	SpeedUnits__SpeedUnits_MAX6                                                      = 6
};

/// Enum /VehicleSystemPlugin/VehicleAssets/ShifterPositions.ShifterPositions
/// Size: 0x05
enum ShifterPositions : uint8_t
{
	ShifterPositions__NewEnumerator00                                                = 0,
	ShifterPositions__NewEnumerator11                                                = 1,
	ShifterPositions__NewEnumerator22                                                = 2,
	ShifterPositions__NewEnumerator33                                                = 3,
	ShifterPositions__ShifterPositions_MAX4                                          = 4
};

