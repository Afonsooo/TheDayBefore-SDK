
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package CameraAssets.

/// Class /Game/CameraAssets/CameraAssets/GPSViewScript.GPSViewScript_C
/// Size: 0x0008 (0x000040 - 0x000048)
class UGPSViewScript_C : public UATPCCameraModeScript : UATPCCameraModeScript
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0040   (0x0008)  


	/// Functions
	// Function /Game/CameraAssets/CameraAssets/GPSViewScript.GPSViewScript_C.K2_OnEnterCameraMode
	void K2_OnEnterCameraMode(UATPCCameraComponent* Camera);                                                                 // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/CameraAssets/CameraAssets/GPSViewScript.GPSViewScript_C.K2_OnExitCameraMode
	void K2_OnExitCameraMode(UATPCCameraComponent* Camera);                                                                  // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/CameraAssets/CameraAssets/GPSViewScript.GPSViewScript_C.ExecuteUbergraph_GPSViewScript
	void ExecuteUbergraph_GPSViewScript(int32_t EntryPoint);                                                                 // [0x2407bf0] Final                
};

/// Class /Game/CameraAssets/CameraAssets/InterpSpeedsResetScript.InterpSpeedsResetScript_C
/// Size: 0x0008 (0x000040 - 0x000048)
class UInterpSpeedsResetScript_C : public UATPCCameraModeScript : UATPCCameraModeScript
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0040   (0x0008)  


	/// Functions
	// Function /Game/CameraAssets/CameraAssets/InterpSpeedsResetScript.InterpSpeedsResetScript_C.K2_OnEnterCameraMode
	void K2_OnEnterCameraMode(UATPCCameraComponent* Camera);                                                                 // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/CameraAssets/CameraAssets/InterpSpeedsResetScript.InterpSpeedsResetScript_C.K2_OnExitCameraMode
	void K2_OnExitCameraMode(UATPCCameraComponent* Camera);                                                                  // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/CameraAssets/CameraAssets/InterpSpeedsResetScript.InterpSpeedsResetScript_C.ExecuteUbergraph_InterpSpeedsResetScript
	void ExecuteUbergraph_InterpSpeedsResetScript(int32_t EntryPoint);                                                       // [0x2407bf0] Final                
};

/// Class /Game/CameraAssets/SurvivalLevelSequenceActor.SurvivalLevelSequenceActor_C
/// Size: 0x0008 (0x000308 - 0x000310)
class ASurvivalLevelSequenceActor_C : public ALevelSequenceActor : ALevelSequenceActor
{ 
public:
	UPostProcessComponent*                             PostProcess;                                                // 0x0308   (0x0008)  
};

/// Class /Game/CameraAssets/GameplayCameraShakes/IdleShake.IdleShake_C
/// Size: 0x0008 (0x0000F0 - 0x0000F8)
class UIdleShake_C : public UCameraShakeBase : UCameraShakeBase
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x00F0   (0x0008)  


	/// Functions
	// Function /Game/CameraAssets/GameplayCameraShakes/IdleShake.IdleShake_C.Update Settings Rot Oscillation
	void Update Settings Rot Oscillation();                                                                                  // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/CameraAssets/GameplayCameraShakes/IdleShake.IdleShake_C.ReceivePlayShake
	void ReceivePlayShake(float Scale);                                                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/CameraAssets/GameplayCameraShakes/IdleShake.IdleShake_C.ExecuteUbergraph_IdleShake
	void ExecuteUbergraph_IdleShake(int32_t EntryPoint);                                                                     // [0x2407bf0] Final                
};

/// Class /Game/CameraAssets/GameplayCameraShakes/BP_LethalDamageCameraShake.BP_LethalDamageCameraShake_C
/// Size: 0x0000 (0x0000F8 - 0x0000F8)
class UBP_LethalDamageCameraShake_C : public UIdleShake_C : UIdleShake_C
{ 
public:
};

/// Class /Game/CameraAssets/CinematicCameraShakes/Big_amplitude_camshake.Big_amplitude_camshake_C
/// Size: 0x0008 (0x0000F8 - 0x000100)
class UBig_amplitude_camshake_C : public UIdleShake_C : UIdleShake_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x00F8   (0x0008)  


	/// Functions
	// Function /Game/CameraAssets/CinematicCameraShakes/Big_amplitude_camshake.Big_amplitude_camshake_C.ReceivePlayShake
	void ReceivePlayShake(float Scale);                                                                                      // [0x2407bf0] BlueprintEvent       
	// Function /Game/CameraAssets/CinematicCameraShakes/Big_amplitude_camshake.Big_amplitude_camshake_C.ExecuteUbergraph_Big_amplitude_camshake
	void ExecuteUbergraph_Big_amplitude_camshake(int32_t EntryPoint);                                                        // [0x2407bf0] Final                
};

/// Class /Game/CameraAssets/GameplayCameraShakes/GrenadeFlashShake.GrenadeFlashShake_C
/// Size: 0x0000 (0x0000F8 - 0x0000F8)
class UGrenadeFlashShake_C : public UIdleShake_C : UIdleShake_C
{ 
public:
};

/// Class /Game/CameraAssets/GameplayCameraShakes/WaterSprintShake.WaterSprintShake_C
/// Size: 0x0000 (0x0000F8 - 0x0000F8)
class UWaterSprintShake_C : public UIdleShake_C : UIdleShake_C
{ 
public:
};

/// Class /Game/CameraAssets/GameplayCameraShakes/WalkingShake.WalkingShake_C
/// Size: 0x0008 (0x0000F8 - 0x000100)
class UWalkingShake_C : public UIdleShake_C : UIdleShake_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x00F8   (0x0008)  


	/// Functions
	// Function /Game/CameraAssets/GameplayCameraShakes/WalkingShake.WalkingShake_C.ReceivePlayShake
	void ReceivePlayShake(float Scale);                                                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/CameraAssets/GameplayCameraShakes/WalkingShake.WalkingShake_C.ExecuteUbergraph_WalkingShake
	void ExecuteUbergraph_WalkingShake(int32_t EntryPoint);                                                                  // [0x2407bf0] Final                
};

/// Class /Game/CameraAssets/GameplayCameraShakes/ShopShake.ShopShake_C
/// Size: 0x0008 (0x0000F8 - 0x000100)
class UShopShake_C : public UIdleShake_C : UIdleShake_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x00F8   (0x0008)  


	/// Functions
	// Function /Game/CameraAssets/GameplayCameraShakes/ShopShake.ShopShake_C.ReceivePlayShake
	void ReceivePlayShake(float Scale);                                                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/CameraAssets/GameplayCameraShakes/ShopShake.ShopShake_C.ExecuteUbergraph_ShopShake
	void ExecuteUbergraph_ShopShake(int32_t EntryPoint);                                                                     // [0x2407bf0] Final                
};

/// Class /Game/CameraAssets/GameplayCameraShakes/GrenadeMolotovShake.GrenadeMolotovShake_C
/// Size: 0x0000 (0x0000F8 - 0x0000F8)
class UGrenadeMolotovShake_C : public UIdleShake_C : UIdleShake_C
{ 
public:
};

/// Class /Game/CameraAssets/GameplayCameraShakes/GrenadeF1ShakeNears.GrenadeF1ShakeNears_C
/// Size: 0x0000 (0x0000F8 - 0x0000F8)
class UGrenadeF1ShakeNears_C : public UIdleShake_C : UIdleShake_C
{ 
public:
};

/// Class /Game/CameraAssets/GameplayCameraShakes/GrenadeF1ShakeMiddle.GrenadeF1ShakeMiddle_C
/// Size: 0x0000 (0x0000F8 - 0x0000F8)
class UGrenadeF1ShakeMiddle_C : public UIdleShake_C : UIdleShake_C
{ 
public:
};

/// Class /Game/CameraAssets/GameplayCameraShakes/GrenadeF1ShakeDefault.GrenadeF1ShakeDefault_C
/// Size: 0x0008 (0x0000F8 - 0x000100)
class UGrenadeF1ShakeDefault_C : public UIdleShake_C : UIdleShake_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x00F8   (0x0008)  


	/// Functions
	// Function /Game/CameraAssets/GameplayCameraShakes/GrenadeF1ShakeDefault.GrenadeF1ShakeDefault_C.Update Settings Rot Oscillation
	void Update Settings Rot Oscillation();                                                                                  // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/CameraAssets/GameplayCameraShakes/GrenadeF1ShakeDefault.GrenadeF1ShakeDefault_C.ExecuteUbergraph_GrenadeF1ShakeDefault
	void ExecuteUbergraph_GrenadeF1ShakeDefault(int32_t EntryPoint);                                                         // [0x2407bf0] Final                
};

/// Class /Game/CameraAssets/GameplayCameraShakes/BulletDamageShake.BulletDamageShake_C
/// Size: 0x0000 (0x0000F8 - 0x0000F8)
class UBulletDamageShake_C : public UIdleShake_C : UIdleShake_C
{ 
public:
};

/// Class /Game/CameraAssets/GameplayCameraShakes/AimWalkShakeFPP.AimWalkShakeFPP_C
/// Size: 0x0008 (0x0000F8 - 0x000100)
class UAimWalkShakeFPP_C : public UIdleShake_C : UIdleShake_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x00F8   (0x0008)  


	/// Functions
	// Function /Game/CameraAssets/GameplayCameraShakes/AimWalkShakeFPP.AimWalkShakeFPP_C.ReceivePlayShake
	void ReceivePlayShake(float Scale);                                                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/CameraAssets/GameplayCameraShakes/AimWalkShakeFPP.AimWalkShakeFPP_C.ExecuteUbergraph_AimWalkShakeFPP
	void ExecuteUbergraph_AimWalkShakeFPP(int32_t EntryPoint);                                                               // [0x2407bf0] Final                
};

/// Class /Game/CameraAssets/GameplayCameraShakes/AimWalkNegEffTPPShake.AimWalkNegEffTPPShake_C
/// Size: 0x0008 (0x0000F8 - 0x000100)
class UAimWalkNegEffTPPShake_C : public UIdleShake_C : UIdleShake_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x00F8   (0x0008)  


	/// Functions
	// Function /Game/CameraAssets/GameplayCameraShakes/AimWalkNegEffTPPShake.AimWalkNegEffTPPShake_C.ReceivePlayShake
	void ReceivePlayShake(float Scale);                                                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/CameraAssets/GameplayCameraShakes/AimWalkNegEffTPPShake.AimWalkNegEffTPPShake_C.ExecuteUbergraph_AimWalkNegEffTPPShake
	void ExecuteUbergraph_AimWalkNegEffTPPShake(int32_t EntryPoint);                                                         // [0x2407bf0] Final                
};

/// Class /Game/CameraAssets/GameplayCameraShakes/AimWalkNegEffShake.AimWalkNegEffShake_C
/// Size: 0x0008 (0x0000F8 - 0x000100)
class UAimWalkNegEffShake_C : public UIdleShake_C : UIdleShake_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x00F8   (0x0008)  


	/// Functions
	// Function /Game/CameraAssets/GameplayCameraShakes/AimWalkNegEffShake.AimWalkNegEffShake_C.ReceivePlayShake
	void ReceivePlayShake(float Scale);                                                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/CameraAssets/GameplayCameraShakes/AimWalkNegEffShake.AimWalkNegEffShake_C.ExecuteUbergraph_AimWalkNegEffShake
	void ExecuteUbergraph_AimWalkNegEffShake(int32_t EntryPoint);                                                            // [0x2407bf0] Final                
};

/// Class /Game/CameraAssets/GameplayCameraShakes/AimScopeWalkShake.AimScopeWalkShake_C
/// Size: 0x0008 (0x0000F8 - 0x000100)
class UAimScopeWalkShake_C : public UIdleShake_C : UIdleShake_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x00F8   (0x0008)  


	/// Functions
	// Function /Game/CameraAssets/GameplayCameraShakes/AimScopeWalkShake.AimScopeWalkShake_C.ReceivePlayShake
	void ReceivePlayShake(float Scale);                                                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/CameraAssets/GameplayCameraShakes/AimScopeWalkShake.AimScopeWalkShake_C.ExecuteUbergraph_AimScopeWalkShake
	void ExecuteUbergraph_AimScopeWalkShake(int32_t EntryPoint);                                                             // [0x2407bf0] Final                
};

/// Class /Game/CameraAssets/GameplayCameraShakes/AimIdleShakeFPP.AimIdleShakeFPP_C
/// Size: 0x0008 (0x0000F8 - 0x000100)
class UAimIdleShakeFPP_C : public UIdleShake_C : UIdleShake_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x00F8   (0x0008)  


	/// Functions
	// Function /Game/CameraAssets/GameplayCameraShakes/AimIdleShakeFPP.AimIdleShakeFPP_C.ReceivePlayShake
	void ReceivePlayShake(float Scale);                                                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/CameraAssets/GameplayCameraShakes/AimIdleShakeFPP.AimIdleShakeFPP_C.ExecuteUbergraph_AimIdleShakeFPP
	void ExecuteUbergraph_AimIdleShakeFPP(int32_t EntryPoint);                                                               // [0x2407bf0] Final                
};

/// Class /Game/CameraAssets/GameplayCameraShakes/AimIdleNegEffTPPShake.AimIdleNegEffTPPShake_C
/// Size: 0x0008 (0x0000F8 - 0x000100)
class UAimIdleNegEffTPPShake_C : public UIdleShake_C : UIdleShake_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x00F8   (0x0008)  


	/// Functions
	// Function /Game/CameraAssets/GameplayCameraShakes/AimIdleNegEffTPPShake.AimIdleNegEffTPPShake_C.ReceivePlayShake
	void ReceivePlayShake(float Scale);                                                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/CameraAssets/GameplayCameraShakes/AimIdleNegEffTPPShake.AimIdleNegEffTPPShake_C.ExecuteUbergraph_AimIdleNegEffTPPShake
	void ExecuteUbergraph_AimIdleNegEffTPPShake(int32_t EntryPoint);                                                         // [0x2407bf0] Final                
};

/// Class /Game/CameraAssets/GameplayCameraShakes/AimIdleNegEffShake.AimIdleNegEffShake_C
/// Size: 0x0008 (0x0000F8 - 0x000100)
class UAimIdleNegEffShake_C : public UIdleShake_C : UIdleShake_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x00F8   (0x0008)  


	/// Functions
	// Function /Game/CameraAssets/GameplayCameraShakes/AimIdleNegEffShake.AimIdleNegEffShake_C.ReceivePlayShake
	void ReceivePlayShake(float Scale);                                                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/CameraAssets/GameplayCameraShakes/AimIdleNegEffShake.AimIdleNegEffShake_C.ExecuteUbergraph_AimIdleNegEffShake
	void ExecuteUbergraph_AimIdleNegEffShake(int32_t EntryPoint);                                                            // [0x2407bf0] Final                
};

/// Class /Game/CameraAssets/GameplayCameraShakes/AimActionShake.AimActionShake_C
/// Size: 0x0000 (0x0000F8 - 0x0000F8)
class UAimActionShake_C : public UIdleShake_C : UIdleShake_C
{ 
public:
};

/// Class /Game/CameraAssets/GameplayCameraShakes/LandingShake.LandingShake_C
/// Size: 0x0000 (0x0000F8 - 0x0000F8)
class ULandingShake_C : public UIdleShake_C : UIdleShake_C
{ 
public:
};

/// Class /Game/CameraAssets/GameplayCameraShakes/CS_VehicleHitEnvironment.CS_VehicleHitEnvironment_C
/// Size: 0x0008 (0x0000F8 - 0x000100)
class UCS_VehicleHitEnvironment_C : public UIdleShake_C : UIdleShake_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x00F8   (0x0008)  


	/// Functions
	// Function /Game/CameraAssets/GameplayCameraShakes/CS_VehicleHitEnvironment.CS_VehicleHitEnvironment_C.ReceivePlayShake
	void ReceivePlayShake(float Scale);                                                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/CameraAssets/GameplayCameraShakes/CS_VehicleHitEnvironment.CS_VehicleHitEnvironment_C.ExecuteUbergraph_CS_VehicleHitEnvironment
	void ExecuteUbergraph_CS_VehicleHitEnvironment(int32_t EntryPoint);                                                      // [0x2407bf0] Final                
};

/// Class /Game/CameraAssets/GameplayCameraShakes/CS_VehicleHitDestructible.CS_VehicleHitDestructible_C
/// Size: 0x0008 (0x0000F8 - 0x000100)
class UCS_VehicleHitDestructible_C : public UIdleShake_C : UIdleShake_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x00F8   (0x0008)  


	/// Functions
	// Function /Game/CameraAssets/GameplayCameraShakes/CS_VehicleHitDestructible.CS_VehicleHitDestructible_C.ReceivePlayShake
	void ReceivePlayShake(float Scale);                                                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/CameraAssets/GameplayCameraShakes/CS_VehicleHitDestructible.CS_VehicleHitDestructible_C.ExecuteUbergraph_CS_VehicleHitDestructible
	void ExecuteUbergraph_CS_VehicleHitDestructible(int32_t EntryPoint);                                                     // [0x2407bf0] Final                
};

/// Class /Game/CameraAssets/CinematicCameraShakes/HandCamShake_Cinematic_walk.HandCamShake_Cinematic_walk_C
/// Size: 0x0000 (0x0000F8 - 0x0000F8)
class UHandCamShake_Cinematic_walk_C : public UIdleShake_C : UIdleShake_C
{ 
public:
};

/// Class /Game/CameraAssets/GameplayCameraShakes/SprintShake.SprintShake_C
/// Size: 0x0000 (0x0000F8 - 0x0000F8)
class USprintShake_C : public UIdleShake_C : UIdleShake_C
{ 
public:
};

/// Class /Game/CameraAssets/GameplayCameraShakes/JogShake.JogShake_C
/// Size: 0x0008 (0x0000F8 - 0x000100)
class UJogShake_C : public UIdleShake_C : UIdleShake_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x00F8   (0x0008)  


	/// Functions
	// Function /Game/CameraAssets/GameplayCameraShakes/JogShake.JogShake_C.ReceivePlayShake
	void ReceivePlayShake(float Scale);                                                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/CameraAssets/GameplayCameraShakes/JogShake.JogShake_C.ExecuteUbergraph_JogShake
	void ExecuteUbergraph_JogShake(int32_t EntryPoint);                                                                      // [0x2407bf0] Final                
};

/// Class /Game/CameraAssets/GameplayCameraShakes/CrouchWalkShake.CrouchWalkShake_C
/// Size: 0x0000 (0x0000F8 - 0x0000F8)
class UCrouchWalkShake_C : public UIdleShake_C : UIdleShake_C
{ 
public:
};

/// Class /Game/CameraAssets/GameplayCameraShakes/AimWalkShake.AimWalkShake_C
/// Size: 0x0008 (0x0000F8 - 0x000100)
class UAimWalkShake_C : public UIdleShake_C : UIdleShake_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x00F8   (0x0008)  


	/// Functions
	// Function /Game/CameraAssets/GameplayCameraShakes/AimWalkShake.AimWalkShake_C.ReceivePlayShake
	void ReceivePlayShake(float Scale);                                                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/CameraAssets/GameplayCameraShakes/AimWalkShake.AimWalkShake_C.ExecuteUbergraph_AimWalkShake
	void ExecuteUbergraph_AimWalkShake(int32_t EntryPoint);                                                                  // [0x2407bf0] Final                
};

/// Class /Game/CameraAssets/GameplayCameraShakes/AimIdleShake.AimIdleShake_C
/// Size: 0x0008 (0x0000F8 - 0x000100)
class UAimIdleShake_C : public UIdleShake_C : UIdleShake_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x00F8   (0x0008)  


	/// Functions
	// Function /Game/CameraAssets/GameplayCameraShakes/AimIdleShake.AimIdleShake_C.ReceivePlayShake
	void ReceivePlayShake(float Scale);                                                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/CameraAssets/GameplayCameraShakes/AimIdleShake.AimIdleShake_C.ExecuteUbergraph_AimIdleShake
	void ExecuteUbergraph_AimIdleShake(int32_t EntryPoint);                                                                  // [0x2407bf0] Final                
};

/// Class /Game/CameraAssets/GameplayCameraShakes/MeleeAttackShake.MeleeAttackShake_C
/// Size: 0x0000 (0x0000F8 - 0x0000F8)
class UMeleeAttackShake_C : public UIdleShake_C : UIdleShake_C
{ 
public:
};

/// Class /Game/CameraAssets/CinematicCameraShakes/HandCamShake_EASY_tr1.HandCamShake_EASY_tr1_C
/// Size: 0x0000 (0x0000F8 - 0x0000F8)
class UHandCamShake_EASY_tr1_C : public UIdleShake_C : UIdleShake_C
{ 
public:
};

/// Class /Game/CameraAssets/CinematicCameraShakes/Sauna_camshake_slow.Sauna_camshake_slow_C
/// Size: 0x0000 (0x0000F8 - 0x0000F8)
class USauna_camshake_slow_C : public UIdleShake_C : UIdleShake_C
{ 
public:
};

/// Class /Game/CameraAssets/CinematicCameraShakes/Sauna_camshake.Sauna_camshake_C
/// Size: 0x0000 (0x0000F8 - 0x0000F8)
class USauna_camshake_C : public UIdleShake_C : UIdleShake_C
{ 
public:
};

/// Class /Game/CameraAssets/GameplayCameraShakes/ZombieDamageShake.ZombieDamageShake_C
/// Size: 0x0000 (0x0000F8 - 0x0000F8)
class UZombieDamageShake_C : public UIdleShake_C : UIdleShake_C
{ 
public:
};

