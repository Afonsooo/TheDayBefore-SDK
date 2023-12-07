
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package FPS_Weapon_Bundle.

/// Class /Game/FPS_Weapon_Bundle/Weapons/Meshes/Blueprints/BP_BaseAttachment.BP_BaseAttachment_C
/// Size: 0x0068 (0x000290 - 0x0002F8)
class ABP_BaseAttachment_C : public AActor : AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0290   (0x0008)  
	UStaticMeshComponentWithItsOwnFOV*                 StaticMeshWithOwnFOV;                                       // 0x0298   (0x0008)  
	UStaticMeshComponent*                              MainSM;                                                     // 0x02A0   (0x0008)  
	USceneComponent*                                   DefaultSceneRoot;                                           // 0x02A8   (0x0008)  
	ASurvivalPlayer_C*                                 CharRef;                                                    // 0x02B0   (0x0008)  
	AWeaponPlaceholder_C*                              WeaponPH;                                                   // 0x02B8   (0x0008)  
	bool                                               bForIconManufacturer_;                                      // 0x02C0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x02C1   (0x0003)  MISSED
	FName                                              IdName;                                                     // 0x02C4   (0x0008)  
	TEnumAsByte<E_TypesOfModes>                        TypeOfMode;                                                 // 0x02CC   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x02CD   (0x0003)  MISSED
	FVector                                            Offset;                                                     // 0x02D0   (0x0018)  
	TArray<FName>                                      IgnoredAttachments;                                         // 0x02E8   (0x0010)  


	/// Functions
	// Function /Game/FPS_Weapon_Bundle/Weapons/Meshes/Blueprints/BP_BaseAttachment.BP_BaseAttachment_C.SpecificBeginPlayDueToWeapon
	void SpecificBeginPlayDueToWeapon();                                                                                     // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/FPS_Weapon_Bundle/Weapons/Meshes/Blueprints/BP_BaseAttachment.BP_BaseAttachment_C.ReceiveBeginPlay
	void ReceiveBeginPlay();                                                                                                 // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/FPS_Weapon_Bundle/Weapons/Meshes/Blueprints/BP_BaseAttachment.BP_BaseAttachment_C.OnDestroyedEvent
	void OnDestroyedEvent(AActor* DestroyedActor);                                                                           // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/FPS_Weapon_Bundle/Weapons/Meshes/Blueprints/BP_BaseAttachment.BP_BaseAttachment_C.InitializeOnEquip
	void InitializeOnEquip();                                                                                                // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/FPS_Weapon_Bundle/Weapons/Meshes/Blueprints/BP_BaseAttachment.BP_BaseAttachment_C.OnWeaponChanged
	void OnWeaponChanged();                                                                                                  // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/FPS_Weapon_Bundle/Weapons/Meshes/Blueprints/BP_BaseAttachment.BP_BaseAttachment_C.InitOffsets
	void InitOffsets();                                                                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/FPS_Weapon_Bundle/Weapons/Meshes/Blueprints/BP_BaseAttachment.BP_BaseAttachment_C.InitOffsetsServer
	void InitOffsetsServer();                                                                                                // [0x2407bf0] Net|NetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/FPS_Weapon_Bundle/Weapons/Meshes/Blueprints/BP_BaseAttachment.BP_BaseAttachment_C.InitOffsetsMulti
	void InitOffsetsMulti();                                                                                                 // [0x2407bf0] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/FPS_Weapon_Bundle/Weapons/Meshes/Blueprints/BP_BaseAttachment.BP_BaseAttachment_C.ExecuteUbergraph_BP_BaseAttachment
	void ExecuteUbergraph_BP_BaseAttachment(int32_t EntryPoint);                                                             // [0x2407bf0] Final                
};

/// Class /Game/FPS_Weapon_Bundle/Weapons/Meshes/Blueprints/Sights/BP_ScopeBase.BP_ScopeBase_C
/// Size: 0x03B9 (0x0002F8 - 0x0006B1)
class ABP_ScopeBase_C : public ABP_BaseAttachment_C : ABP_BaseAttachment_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02F8   (0x0008)  
	USceneComponent*                                   ScopeCenter;                                                // 0x0300   (0x0008)  
	float                                              LerpFOV_NewTrack_0_1F4E6E1D4E5F761AD2D58D9FA47B0099;        // 0x0308   (0x0004)  
	TEnumAsByte<ETimelineDirection>                    LerpFOV__Direction_1F4E6E1D4E5F761AD2D58D9FA47B0099;        // 0x030C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x030D   (0x0003)  MISSED
	UTimelineComponent*                                LerpFOV;                                                    // 0x0310   (0x0008)  
	USceneComponent*                                   ParentSceneComponent;                                       // 0x0318   (0x0008)  
	bool                                               WasInAimFPS;                                                // 0x0320   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0321   (0x0007)  MISSED
	double                                             FOV;                                                        // 0x0328   (0x0008)  
	double                                             ScopeOffsetFromCamera;                                      // 0x0330   (0x0008)  
	double                                             PistolScopeOffsetFromCamera;                                // 0x0338   (0x0008)  
	double                                             DefaultFOV;                                                 // 0x0340   (0x0008)  
	FGameplayTag                                       CameraMode;                                                 // 0x0348   (0x0008)  
	FGameplayTag                                       DefaultCameraMode;                                          // 0x0350   (0x0008)  
	FATPCCameraMode                                    ManualCameraMode;                                           // 0x0358   (0x0348)  
	FGameplayTag                                       CameraMode_Crouch;                                          // 0x06A0   (0x0008)  
	double                                             ScopeTextureRadius;                                         // 0x06A8   (0x0008)  
	bool                                               isScopeBlur;                                                // 0x06B0   (0x0001)  


	/// Functions
	// Function /Game/FPS_Weapon_Bundle/Weapons/Meshes/Blueprints/Sights/BP_ScopeBase.BP_ScopeBase_C.PlaceholderOffsetEquip
	void PlaceholderOffsetEquip();                                                                                           // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/FPS_Weapon_Bundle/Weapons/Meshes/Blueprints/Sights/BP_ScopeBase.BP_ScopeBase_C.PlaceholderOffset
	void PlaceholderOffset();                                                                                                // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/FPS_Weapon_Bundle/Weapons/Meshes/Blueprints/Sights/BP_ScopeBase.BP_ScopeBase_C.SpecificBeginPlayDueToWeapon
	void SpecificBeginPlayDueToWeapon();                                                                                     // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/FPS_Weapon_Bundle/Weapons/Meshes/Blueprints/Sights/BP_ScopeBase.BP_ScopeBase_C.StopAim
	void StopAim();                                                                                                          // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/FPS_Weapon_Bundle/Weapons/Meshes/Blueprints/Sights/BP_ScopeBase.BP_ScopeBase_C.Aim
	void Aim();                                                                                                              // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/FPS_Weapon_Bundle/Weapons/Meshes/Blueprints/Sights/BP_ScopeBase.BP_ScopeBase_C.LerpFOV__FinishedFunc
	void LerpFOV__FinishedFunc();                                                                                            // [0x2407bf0] BlueprintEvent       
	// Function /Game/FPS_Weapon_Bundle/Weapons/Meshes/Blueprints/Sights/BP_ScopeBase.BP_ScopeBase_C.LerpFOV__UpdateFunc
	void LerpFOV__UpdateFunc();                                                                                              // [0x2407bf0] BlueprintEvent       
	// Function /Game/FPS_Weapon_Bundle/Weapons/Meshes/Blueprints/Sights/BP_ScopeBase.BP_ScopeBase_C.InitializeOnEquip
	void InitializeOnEquip();                                                                                                // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/FPS_Weapon_Bundle/Weapons/Meshes/Blueprints/Sights/BP_ScopeBase.BP_ScopeBase_C.OnWeaponChanged
	void OnWeaponChanged();                                                                                                  // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/FPS_Weapon_Bundle/Weapons/Meshes/Blueprints/Sights/BP_ScopeBase.BP_ScopeBase_C.ReceiveBeginPlay
	void ReceiveBeginPlay();                                                                                                 // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/FPS_Weapon_Bundle/Weapons/Meshes/Blueprints/Sights/BP_ScopeBase.BP_ScopeBase_C.OnAim
	void OnAim(bool Aim, bool FPP);                                                                                          // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/FPS_Weapon_Bundle/Weapons/Meshes/Blueprints/Sights/BP_ScopeBase.BP_ScopeBase_C.Custom_AddScopeEffect
	void Custom_AddScopeEffect();                                                                                            // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/FPS_Weapon_Bundle/Weapons/Meshes/Blueprints/Sights/BP_ScopeBase.BP_ScopeBase_C.Custom_RemoveScopeEffect
	void Custom_RemoveScopeEffect();                                                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/FPS_Weapon_Bundle/Weapons/Meshes/Blueprints/Sights/BP_ScopeBase.BP_ScopeBase_C.ReceiveTick
	void ReceiveTick(float DeltaSeconds);                                                                                    // [0x2407bf0] Event|Public|BlueprintEvent 
	// Function /Game/FPS_Weapon_Bundle/Weapons/Meshes/Blueprints/Sights/BP_ScopeBase.BP_ScopeBase_C.ExecuteUbergraph_BP_ScopeBase
	void ExecuteUbergraph_BP_ScopeBase(int32_t EntryPoint);                                                                  // [0x2407bf0] Final                
};

/// Class /Game/FPS_Weapon_Bundle/Weapons/Meshes/Blueprints/Sights/Scopes/BP_SniperScope.BP_SniperScope_C
/// Size: 0x0087 (0x0006B1 - 0x000738)
class ABP_SniperScope_C : public ABP_ScopeBase_C : ABP_ScopeBase_C
{ 
public:
	unsigned char                                      UnknownData00_2[0x7];                                       // 0x06B1   (0x0007)  MISSED
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x06B8   (0x0008)  
	UStaticMeshComponent*                              FP_Vortex_Spitfire_3X_Vortex_Spitfire_3x_Edging;            // 0x06C0   (0x0008)  
	USceneComponent*                                   ScopeRoot;                                                  // 0x06C8   (0x0008)  
	UStaticMeshComponent*                              Scope_Object015;                                            // 0x06D0   (0x0008)  
	UStaticMeshComponent*                              Scope_Linza_low;                                            // 0x06D8   (0x0008)  
	float                                              RecoilTimeline_Float_250B6A0445F41301FD28848CA1C0D871;      // 0x06E0   (0x0004)  
	TEnumAsByte<ETimelineDirection>                    RecoilTimeline__Direction_250B6A0445F41301FD28848CA1C0D871; // 0x06E4   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x06E5   (0x0003)  MISSED
	UTimelineComponent*                                RecoilTimeline;                                             // 0x06E8   (0x0008)  
	bool                                               InAim;                                                      // 0x06F0   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x06F1   (0x0007)  MISSED
	double                                             Aperture__F_stop_;                                          // 0x06F8   (0x0008)  
	double                                             Maximum_Aperture__Min_F_stop_;                              // 0x0700   (0x0008)  
	double                                             Focal_Distance;                                             // 0x0708   (0x0008)  
	double                                             Depth_Blur_Km_For_50_;                                      // 0x0710   (0x0008)  
	double                                             Depth_Blur_Radius;                                          // 0x0718   (0x0008)  
	FMulticastInlineDelegate                           OnRecoil;                                                   // 0x0720   (0x0010)  
	UCurveFloat*                                       Curve;                                                      // 0x0730   (0x0008)  


	/// Functions
	// Function /Game/FPS_Weapon_Bundle/Weapons/Meshes/Blueprints/Sights/Scopes/BP_SniperScope.BP_SniperScope_C.ClearChild
	void ClearChild();                                                                                                       // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/FPS_Weapon_Bundle/Weapons/Meshes/Blueprints/Sights/Scopes/BP_SniperScope.BP_SniperScope_C.RecoilTimeline__FinishedFunc
	void RecoilTimeline__FinishedFunc();                                                                                     // [0x2407bf0] BlueprintEvent       
	// Function /Game/FPS_Weapon_Bundle/Weapons/Meshes/Blueprints/Sights/Scopes/BP_SniperScope.BP_SniperScope_C.RecoilTimeline__UpdateFunc
	void RecoilTimeline__UpdateFunc();                                                                                       // [0x2407bf0] BlueprintEvent       
	// Function /Game/FPS_Weapon_Bundle/Weapons/Meshes/Blueprints/Sights/Scopes/BP_SniperScope.BP_SniperScope_C.ReceiveBeginPlay
	void ReceiveBeginPlay();                                                                                                 // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/FPS_Weapon_Bundle/Weapons/Meshes/Blueprints/Sights/Scopes/BP_SniperScope.BP_SniperScope_C.Aim
	void Aim();                                                                                                              // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/FPS_Weapon_Bundle/Weapons/Meshes/Blueprints/Sights/Scopes/BP_SniperScope.BP_SniperScope_C.StopAim
	void StopAim();                                                                                                          // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/FPS_Weapon_Bundle/Weapons/Meshes/Blueprints/Sights/Scopes/BP_SniperScope.BP_SniperScope_C.InitializeOnEquip
	void InitializeOnEquip();                                                                                                // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/FPS_Weapon_Bundle/Weapons/Meshes/Blueprints/Sights/Scopes/BP_SniperScope.BP_SniperScope_C.Recoil
	void Recoil();                                                                                                           // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/FPS_Weapon_Bundle/Weapons/Meshes/Blueprints/Sights/Scopes/BP_SniperScope.BP_SniperScope_C.ExecuteUbergraph_BP_SniperScope
	void ExecuteUbergraph_BP_SniperScope(int32_t EntryPoint);                                                                // [0x2407bf0] Final                
	// Function /Game/FPS_Weapon_Bundle/Weapons/Meshes/Blueprints/Sights/Scopes/BP_SniperScope.BP_SniperScope_C.OnRecoil__DelegateSignature
	void OnRecoil__DelegateSignature();                                                                                      // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/FPS_Weapon_Bundle/Weapons/Meshes/Blueprints/Sights/BP_CollimatorScope.BP_CollimatorScope_C
/// Size: 0x0027 (0x0006B1 - 0x0006D8)
class ABP_CollimatorScope_C : public ABP_ScopeBase_C : ABP_ScopeBase_C
{ 
public:
	unsigned char                                      UnknownData00_2[0x7];                                       // 0x06B1   (0x0007)  MISSED
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x06B8   (0x0008)  
	USceneComponent*                                   CollimatorCenter;                                           // 0x06C0   (0x0008)  
	UStaticMeshComponentWithItsOwnFOV*                 StaticMeshComponentWithItsOwnFOV;                           // 0x06C8   (0x0008)  
	USceneComponent*                                   ScopeRoot;                                                  // 0x06D0   (0x0008)  


	/// Functions
	// Function /Game/FPS_Weapon_Bundle/Weapons/Meshes/Blueprints/Sights/BP_CollimatorScope.BP_CollimatorScope_C.Aim
	void Aim();                                                                                                              // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/FPS_Weapon_Bundle/Weapons/Meshes/Blueprints/Sights/BP_CollimatorScope.BP_CollimatorScope_C.StopAim
	void StopAim();                                                                                                          // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/FPS_Weapon_Bundle/Weapons/Meshes/Blueprints/Sights/BP_CollimatorScope.BP_CollimatorScope_C.InitializeOnEquip
	void InitializeOnEquip();                                                                                                // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/FPS_Weapon_Bundle/Weapons/Meshes/Blueprints/Sights/BP_CollimatorScope.BP_CollimatorScope_C.ExecuteUbergraph_BP_CollimatorScope
	void ExecuteUbergraph_BP_CollimatorScope(int32_t EntryPoint);                                                            // [0x2407bf0] Final                
};

