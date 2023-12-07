
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package Explosives_Pack.

/// Struct /Game/Explosives_Pack/FGrenadeInfo.FGrenadeInfo
/// Size: 0x0348 (0x000000 - 0x000348)
struct FFGrenadeInfo
{ 
	FName                                              Name_2_E67996B944E4ACF83D0C36883A9D8436;                    // 0x0000   (0x0008)  
	double                                             BaseDamage_13_5AA01C6743B9169B1EDC6786E29702B6;             // 0x0008   (0x0008)  
	double                                             MinimumDamage_14_1B860B6C47F4DFE91B9F6DA0A7DABD6A;          // 0x0010   (0x0008)  
	double                                             DamageInnerRadius_15_4926E858465DBE822A839F82D4863C7E;      // 0x0018   (0x0008)  
	double                                             DamageOuterRadius_27_13623A0E4A43D12BEC8E679D24BC573E;      // 0x0020   (0x0008)  
	double                                             DamageFallof_16_9A18E5BD4B508730C092F6BBD3646090;           // 0x0028   (0x0008)  
	double                                             Radius_17_C9A5118D4F1B774580B4EE8C2C5F33A8;                 // 0x0030   (0x0008)  
	double                                             FinalRadiusMolotov_43_D9C9F799441F29678E9E5ABDE59AC2F7;     // 0x0038   (0x0008)  
	double                                             DistanceThrowStanding_86_ED02A47C482052016B227499FA029A3D;  // 0x0040   (0x0008)  
	double                                             DistanceFastThrowStanding_84_242BE54B47C84B8E1F5B3FA72D8AB224; // 0x0048   (0x0008)  
	TWeakObjectPtr<UClass*>                            ExplosiveClass_150_A32770DD4D62BE7F975771B5F62D8C29;        // 0x0050   (0x0030)  
	TWeakObjectPtr<UClass*>                            ExplosionClass_151_F8DFDA7E44561F5B92C56CADCCA02C49;        // 0x0080   (0x0030)  
	double                                             LifaSpan_30_C2818B40459379274C7D5C9FC169CD56;               // 0x00B0   (0x0008)  
	double                                             AddRadiusPerSecondMolotov_45_BDF693284FE1032AFAF1B28274A3A629; // 0x00B8   (0x0008)  
	double                                             DamagepersecondMolotov_37_B7EA95EF488ECE9C04B258BFF4D7B31A; // 0x00C0   (0x0008)  
	double                                             TimesecondMolotov_38_2B4237EE487DE4E8F2365096EAA5BA98;      // 0x00C8   (0x0008)  
	double                                             RadiusWaterExplosion_73_0D1941D3415E8C68B2E5B59480D5EB97;   // 0x00D0   (0x0008)  
	TWeakObjectPtr<UFMODEvent*>                        FModSound_Get_141_E0F8A0B04B77843653B6909C8425E249;         // 0x00D8   (0x0030)  
	TWeakObjectPtr<UFMODEvent*>                        FModSound_Throw_142_924FA946477131531089D5855F75B1EB;       // 0x0108   (0x0030)  
	TWeakObjectPtr<UAnimMontage*>                      PrepareMontage_143_C89F64574D93C4574BF96CA93A1CFA39;        // 0x0138   (0x0030)  
	TWeakObjectPtr<UAnimMontage*>                      LoopMontage_144_889995BF44C2DDB8CDE8BC8BB202E2D7;           // 0x0168   (0x0030)  
	TWeakObjectPtr<UAnimMontage*>                      ThrowMontage_145_F4B18EFF40C540175A0B6A9FB08EA2F2;          // 0x0198   (0x0030)  
	TWeakObjectPtr<UAnimMontage*>                      EquipMontage_146_1214FFEC4189214BA63A958ED1820148;          // 0x01C8   (0x0030)  
	TWeakObjectPtr<UAnimMontage*>                      EquipReadyMontage_147_5AD0E15146161D64BA5FFF83773838C0;     // 0x01F8   (0x0030)  
	TWeakObjectPtr<UAnimMontage*>                      UnequipMontage_148_6DD94C2342464915D1AF95A423946A74;        // 0x0228   (0x0030)  
	TWeakObjectPtr<UAnimMontage*>                      UnequipReadyMontage_149_50F6CDCC4032D62C8DC9CD8445C7FECB;   // 0x0258   (0x0030)  
	TWeakObjectPtr<UClass*>                            GrenadeShake_152_C9FBC4DC44C9C486EC967E88C9E4E938;          // 0x0288   (0x0030)  
	double                                             GrenadeShakeLongScale_106_CA7E835B4438370B78464AAED41DF80D; // 0x02B8   (0x0008)  
	double                                             GrenadeShakeMiddleScale_107_D763FDBD4E92E4C159B0489DCF0E6743; // 0x02C0   (0x0008)  
	double                                             GrenadeShakeNearScale_108_D5772CA4454D28E79F31A29464E57AB8; // 0x02C8   (0x0008)  
	double                                             DistanceGrenadeShakeLong_132_C0CF41274245076C1807DEADDF7F0072; // 0x02D0   (0x0008)  
	double                                             DistanceGrenadeShakeMiddle_133_6ABA89944FB369C563CEBAAE2113F98F; // 0x02D8   (0x0008)  
	double                                             DistanceGrenadeShakeNear_134_1074FC39471300C19A120BA9F08E05E3; // 0x02E0   (0x0008)  
	double                                             DistanceFlashOnCameraLong_122_5263B3D7466743FB034B0F8974FAF764; // 0x02E8   (0x0008)  
	double                                             DistanceFlashOnCameraMiddle_123_F0E90AD84DAA29B7923B5B914566101B; // 0x02F0   (0x0008)  
	double                                             DistanceFlashOnCameraNear_124_0590871544C71EFFFF81468B4D76FF6E; // 0x02F8   (0x0008)  
	double                                             DistanceFlashOffCamera_128_CECDA0E94C49D9CC7F42538C66DC2C7A; // 0x0300   (0x0008)  
	double                                             ContusionDistance_131_075F948540A36742884BEC99C941A640;     // 0x0308   (0x0008)  
	TWeakObjectPtr<UClass*>                            FakeGrenade_153_69ED57AB42D886623B11D89B695C9E1F;           // 0x0310   (0x0030)  
	FName                                              ShortName_140_0C49672249E4ABE6617582BCD46F065D;             // 0x0340   (0x0008)  
};

/// Class /Game/Explosives_Pack/UIW_FlashGrenade.UIW_FlashGrenade_C
/// Size: 0x0050 (0x000280 - 0x0002D0)
class UUIW_FlashGrenade_C : public UUserWidget : UUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0280   (0x0008)  
	UWidgetAnimation*                                  Flash3500;                                                  // 0x0288   (0x0008)  
	UWidgetAnimation*                                  NewFlashOffCamera;                                          // 0x0290   (0x0008)  
	UWidgetAnimation*                                  Flash2500;                                                  // 0x0298   (0x0008)  
	UWidgetAnimation*                                  Flash1500;                                                  // 0x02A0   (0x0008)  
	UWidgetAnimation*                                  Flash;                                                      // 0x02A8   (0x0008)  
	UImage*                                            FlashEffect;                                                // 0x02B0   (0x0008)  
	UImage*                                            Image;                                                      // 0x02B8   (0x0008)  
	UImage*                                            Image;                                                      // 0x02C0   (0x0008)  
	UImage*                                            Image;                                                      // 0x02C8   (0x0008)  


	/// Functions
	// Function /Game/Explosives_Pack/UIW_FlashGrenade.UIW_FlashGrenade_C.GetBrush
	FSlateBrush GetBrush();                                                                                                  // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Explosives_Pack/UIW_FlashGrenade.UIW_FlashGrenade_C.Construct
	void Construct();                                                                                                        // [0x2407bf0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/Explosives_Pack/UIW_FlashGrenade.UIW_FlashGrenade_C.OnAnimationFinished
	void OnAnimationFinished(UWidgetAnimation* Animation);                                                                   // [0x2407bf0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Game/Explosives_Pack/UIW_FlashGrenade.UIW_FlashGrenade_C.ExecuteUbergraph_UIW_FlashGrenade
	void ExecuteUbergraph_UIW_FlashGrenade(int32_t EntryPoint);                                                              // [0x2407bf0] Final                
};

/// Class /Game/Explosives_Pack/Fake_Grenade.Fake_Grenade_C
/// Size: 0x0058 (0x000290 - 0x0002E8)
class AFake_Grenade_C : public AActor : AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0290   (0x0008)  
	UStaticMeshComponent*                              StaticMesh;                                                 // 0x0298   (0x0008)  
	USceneComponent*                                   Scene;                                                      // 0x02A0   (0x0008)  
	UStaticMeshComponent*                              StaticMeshLeverFake;                                        // 0x02A8   (0x0008)  
	FVector                                            Impulse;                                                    // 0x02B0   (0x0018)  
	FVector                                            Torque;                                                     // 0x02C8   (0x0018)  
	UAnimSequence*                                     HandPose;                                                   // 0x02E0   (0x0008)  


	/// Functions
	// Function /Game/Explosives_Pack/Fake_Grenade.Fake_Grenade_C.ReceiveBeginPlay
	void ReceiveBeginPlay();                                                                                                 // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/Explosives_Pack/Fake_Grenade.Fake_Grenade_C.ImpulseFakeGrenadeServer
	void ImpulseFakeGrenadeServer();                                                                                         // [0x2407bf0] Net|NetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/Explosives_Pack/Fake_Grenade.Fake_Grenade_C.ImpulseFakeGrenadeMulti
	void ImpulseFakeGrenadeMulti();                                                                                          // [0x2407bf0] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/Explosives_Pack/Fake_Grenade.Fake_Grenade_C.ExecuteUbergraph_Fake_Grenade
	void ExecuteUbergraph_Fake_Grenade(int32_t EntryPoint);                                                                  // [0x2407bf0] Final                
};

/// Class /Game/Explosives_Pack/Fake_Smoke.Fake_Smoke_C
/// Size: 0x0000 (0x0002E8 - 0x0002E8)
class AFake_Smoke_C : public AFake_Grenade_C : AFake_Grenade_C
{ 
public:
};

/// Class /Game/Explosives_Pack/Fake_Molotov.Fake_Molotov_C
/// Size: 0x0000 (0x0002E8 - 0x0002E8)
class AFake_Molotov_C : public AFake_Grenade_C : AFake_Grenade_C
{ 
public:
};

/// Class /Game/Explosives_Pack/Fake_Flash.Fake_Flash_C
/// Size: 0x0000 (0x0002E8 - 0x0002E8)
class AFake_Flash_C : public AFake_Grenade_C : AFake_Grenade_C
{ 
public:
};

/// Class /Game/Explosives_Pack/Fake_F1.Fake_F1_C
/// Size: 0x0000 (0x0002E8 - 0x0002E8)
class AFake_F1_C : public AFake_Grenade_C : AFake_Grenade_C
{ 
public:
};

/// Class /Game/Explosives_Pack/Fake_CraftSmoke.Fake_CraftSmoke_C
/// Size: 0x0000 (0x0002E8 - 0x0002E8)
class AFake_CraftSmoke_C : public AFake_Grenade_C : AFake_Grenade_C
{ 
public:
};

/// Class /Game/Explosives_Pack/Fake_CraftMolotov.Fake_CraftMolotov_C
/// Size: 0x0000 (0x0002E8 - 0x0002E8)
class AFake_CraftMolotov_C : public AFake_Grenade_C : AFake_Grenade_C
{ 
public:
};

/// Class /Game/Explosives_Pack/Fake_CraftFlash.Fake_CraftFlash_C
/// Size: 0x0000 (0x0002E8 - 0x0002E8)
class AFake_CraftFlash_C : public AFake_Grenade_C : AFake_Grenade_C
{ 
public:
};

/// Class /Game/Explosives_Pack/Explosive_Item_InHand.Explosive_Item_InHand_C
/// Size: 0x01E1 (0x000290 - 0x000471)
class AExplosive_Item_InHand_C : public AActor : AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0290   (0x0008)  
	UProjectileMovementComponent*                      ProjectileMovement;                                         // 0x0298   (0x0008)  
	UStaticMeshComponent*                              StaticMesh;                                                 // 0x02A0   (0x0008)  
	UStaticMeshComponent*                              StaticMeshLever;                                            // 0x02A8   (0x0008)  
	UClass*                                            Explosion;                                                  // 0x02B0   (0x0008)  
	double                                             Time;                                                       // 0x02B8   (0x0008)  
	UFMODEvent*                                        EventSoundThrow;                                            // 0x02C0   (0x0008)  
	UFMODEvent*                                        EventSoundHit;                                              // 0x02C8   (0x0008)  
	bool                                               OneHit;                                                     // 0x02D0   (0x0001)  
	bool                                               F1;                                                         // 0x02D1   (0x0001)  
	bool                                               InWater;                                                    // 0x02D2   (0x0001)  
	unsigned char                                      UnknownData00_5[0x5];                                       // 0x02D3   (0x0005)  MISSED
	UClass*                                            ExplosionWater;                                             // 0x02D8   (0x0008)  
	FTransform                                         Spawn_Transform_Water;                                      // 0x02E0   (0x0060)  
	FVector                                            LocationOverlapWater;                                       // 0x0340   (0x0018)  
	UClass*                                            DecalExplosion;                                             // 0x0358   (0x0008)  
	bool                                               FindStaticObject;                                           // 0x0360   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0361   (0x0007)  MISSED
	TArray<TEnumAsByte>                                Object_Types;                                               // 0x0368   (0x0010)  
	double                                             TraceDecal;                                                 // 0x0378   (0x0008)  
	double                                             MinusTraceDecal;                                            // 0x0380   (0x0008)  
	AActor*                                            Decal;                                                      // 0x0388   (0x0008)  
	FActorLayer                                        Layer;                                                      // 0x0390   (0x0008)  
	unsigned char                                      UnknownData02_5[0x8];                                       // 0x0398   (0x0008)  MISSED
	FTransform                                         Relative_Transform;                                         // 0x03A0   (0x0060)  
	bool                                               LeverDestroy;                                               // 0x0400   (0x0001)  
	unsigned char                                      UnknownData03_5[0x7];                                       // 0x0401   (0x0007)  MISSED
	FMulticastInlineDelegate                           ED_Detonate;                                                // 0x0408   (0x0010)  
	FVector                                            ClientLocation;                                             // 0x0418   (0x0018)  
	bool                                               TrueExplosion;                                              // 0x0430   (0x0001)  
	unsigned char                                      UnknownData04_5[0x7];                                       // 0x0431   (0x0007)  MISSED
	FVector                                            NewVar;                                                     // 0x0438   (0x0018)  
	bool                                               isSMoke;                                                    // 0x0450   (0x0001)  
	unsigned char                                      UnknownData05_5[0x7];                                       // 0x0451   (0x0007)  MISSED
	double                                             RotationAngle;                                              // 0x0458   (0x0008)  
	bool                                               Rotate;                                                     // 0x0460   (0x0001)  
	unsigned char                                      UnknownData06_5[0x7];                                       // 0x0461   (0x0007)  MISSED
	double                                             SpeedGrenade;                                               // 0x0468   (0x0008)  
	bool                                               WithoutTimer;                                               // 0x0470   (0x0001)  


	/// Functions
	// Function /Game/Explosives_Pack/Explosive_Item_InHand.Explosive_Item_InHand_C.ScaleDecal
	void ScaleDecal(AActor* Decal);                                                                                          // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Explosives_Pack/Explosive_Item_InHand.Explosive_Item_InHand_C.CreateDecalLocation
	void CreateDecalLocation(FVector Start, AActor*& Decal);                                                                 // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Explosives_Pack/Explosive_Item_InHand.Explosive_Item_InHand_C.UserConstructionScript
	void UserConstructionScript();                                                                                           // [0x2407bf0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Explosives_Pack/Explosive_Item_InHand.Explosive_Item_InHand_C.ReceiveBeginPlay
	void ReceiveBeginPlay();                                                                                                 // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/Explosives_Pack/Explosive_Item_InHand.Explosive_Item_InHand_C.Detonate
	void Detonate();                                                                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Explosives_Pack/Explosive_Item_InHand.Explosive_Item_InHand_C.BndEvt__Explosive_Item_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
	void BndEvt__Explosive_Item_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult& hit); // [0x2407bf0] HasOutParms|BlueprintEvent 
	// Function /Game/Explosives_Pack/Explosive_Item_InHand.Explosive_Item_InHand_C.GrenadeThrowBeforeHand
	void GrenadeThrowBeforeHand(bool IsActivate, double NewTime);                                                            // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Explosives_Pack/Explosive_Item_InHand.Explosive_Item_InHand_C.CollisionThrow
	void CollisionThrow();                                                                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Explosives_Pack/Explosive_Item_InHand.Explosive_Item_InHand_C.DestroyLevers
	void DestroyLevers();                                                                                                    // [0x2407bf0] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/Explosives_Pack/Explosive_Item_InHand.Explosive_Item_InHand_C.ReceiveTick
	void ReceiveTick(float DeltaSeconds);                                                                                    // [0x2407bf0] Event|Public|BlueprintEvent 
	// Function /Game/Explosives_Pack/Explosive_Item_InHand.Explosive_Item_InHand_C.ExplosionServer
	void ExplosionServer(FVector Spawn Transform Location, UClass* Class, AActor* Target, FTransform SpawnTransform, FVector VelocityGrenade); // [0x2407bf0] Net|NetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/Explosives_Pack/Explosive_Item_InHand.Explosive_Item_InHand_C.ExplosionWaterServer
	void ExplosionWaterServer(UClass* Class, FVector Spawn Transform Location, FRotator Spawn Transform Rotation);           // [0x2407bf0] Net|NetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/Explosives_Pack/Explosive_Item_InHand.Explosive_Item_InHand_C.DestroyEvent
	void DestroyEvent();                                                                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Explosives_Pack/Explosive_Item_InHand.Explosive_Item_InHand_C.DestroySmoke
	void DestroySmoke(AActor* DestroyedActor);                                                                               // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Explosives_Pack/Explosive_Item_InHand.Explosive_Item_InHand_C.ExplosionDecal_Multicast
	void ExplosionDecal_Multicast();                                                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Explosives_Pack/Explosive_Item_InHand.Explosive_Item_InHand_C.Multicast_SimulatePhysics
	void Multicast_SimulatePhysics();                                                                                        // [0x2407bf0] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/Explosives_Pack/Explosive_Item_InHand.Explosive_Item_InHand_C.DetonateWithoutTimer
	void DetonateWithoutTimer(double Timer);                                                                                 // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Explosives_Pack/Explosive_Item_InHand.Explosive_Item_InHand_C.ExecuteUbergraph_Explosive_Item_InHand
	void ExecuteUbergraph_Explosive_Item_InHand(int32_t EntryPoint);                                                         // [0x2407bf0] Final|HasDefaults    
	// Function /Game/Explosives_Pack/Explosive_Item_InHand.Explosive_Item_InHand_C.ED_Detonate__DelegateSignature
	void ED_Detonate__DelegateSignature(FVector Location);                                                                   // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Explosives_Pack/BP_MeleeDamageType.BP_MeleeDamageType_C
/// Size: 0x0000 (0x000040 - 0x000040)
class UBP_MeleeDamageType_C : public UDamageType : UDamageType
{ 
public:
};

/// Class /Game/Explosives_Pack/BP_ProcDecalExplosionFLASH.BP_ProcDecalExplosionFLASH_C
/// Size: 0x0000 (0x000370 - 0x000370)
class ABP_ProcDecalExplosionFLASH_C : public ABasicDecals_BP_C : ABasicDecals_BP_C
{ 
public:
};

/// Class /Game/Explosives_Pack/BP_ProcDecalExplosionMolotov.BP_ProcDecalExplosionMolotov_C
/// Size: 0x0009 (0x000370 - 0x000379)
class ABP_ProcDecalExplosionMolotov_C : public ABasicDecals_BP_C : ABasicDecals_BP_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0370   (0x0008)  
	bool                                               Condition;                                                  // 0x0378   (0x0001)  


	/// Functions
	// Function /Game/Explosives_Pack/BP_ProcDecalExplosionMolotov.BP_ProcDecalExplosionMolotov_C.ReceiveBeginPlay
	void ReceiveBeginPlay();                                                                                                 // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/Explosives_Pack/BP_ProcDecalExplosionMolotov.BP_ProcDecalExplosionMolotov_C.ExecuteUbergraph_BP_ProcDecalExplosionMolotov
	void ExecuteUbergraph_BP_ProcDecalExplosionMolotov(int32_t EntryPoint);                                                  // [0x2407bf0] Final                
};

/// Class /Game/Explosives_Pack/BP_ProcDecalExplosionLandScape.BP_ProcDecalExplosionLandScape_C
/// Size: 0x0009 (0x000370 - 0x000379)
class ABP_ProcDecalExplosionLandScape_C : public ABasicDecals_BP_C : ABasicDecals_BP_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0370   (0x0008)  
	bool                                               Condition;                                                  // 0x0378   (0x0001)  


	/// Functions
	// Function /Game/Explosives_Pack/BP_ProcDecalExplosionLandScape.BP_ProcDecalExplosionLandScape_C.ReceiveBeginPlay
	void ReceiveBeginPlay();                                                                                                 // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/Explosives_Pack/BP_ProcDecalExplosionLandScape.BP_ProcDecalExplosionLandScape_C.ExecuteUbergraph_BP_ProcDecalExplosionLandScape
	void ExecuteUbergraph_BP_ProcDecalExplosionLandScape(int32_t EntryPoint);                                                // [0x2407bf0] Final                
};

/// Class /Game/Explosives_Pack/BP_ProcDecalExplosion.BP_ProcDecalExplosion_C
/// Size: 0x0009 (0x000370 - 0x000379)
class ABP_ProcDecalExplosion_C : public ABasicDecals_BP_C : ABasicDecals_BP_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0370   (0x0008)  
	bool                                               Condition;                                                  // 0x0378   (0x0001)  


	/// Functions
	// Function /Game/Explosives_Pack/BP_ProcDecalExplosion.BP_ProcDecalExplosion_C.ReceiveBeginPlay
	void ReceiveBeginPlay();                                                                                                 // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/Explosives_Pack/BP_ProcDecalExplosion.BP_ProcDecalExplosion_C.ExecuteUbergraph_BP_ProcDecalExplosion
	void ExecuteUbergraph_BP_ProcDecalExplosion(int32_t EntryPoint);                                                         // [0x2407bf0] Final                
};

/// Class /Game/Explosives_Pack/BP_WaterGrenadeOverlap.BP_WaterGrenadeOverlap_C
/// Size: 0x0008 (0x000290 - 0x000298)
class ABP_WaterGrenadeOverlap_C : public AActor : AActor
{ 
public:
	UParticleSystemComponent*                          ParticleSystem;                                             // 0x0290   (0x0008)  
};

/// Class /Game/Explosives_Pack/ExplosionWater.ExplosionWater_C
/// Size: 0x0010 (0x000290 - 0x0002A0)
class AExplosionWater_C : public AActor : AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0290   (0x0008)  
	UParticleSystemComponent*                          ParticleSystem;                                             // 0x0298   (0x0008)  


	/// Functions
	// Function /Game/Explosives_Pack/ExplosionWater.ExplosionWater_C.ReceiveBeginPlay
	void ReceiveBeginPlay();                                                                                                 // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/Explosives_Pack/ExplosionWater.ExplosionWater_C.ExecuteUbergraph_ExplosionWater
	void ExecuteUbergraph_ExplosionWater(int32_t EntryPoint);                                                                // [0x2407bf0] Final                
};

/// Class /Game/Explosives_Pack/Explosion.Explosion_C
/// Size: 0x0030 (0x000290 - 0x0002C0)
class AExplosion_C : public AActor : AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0290   (0x0008)  
	URadialForceComponent*                             RadialForce;                                                // 0x0298   (0x0008)  
	UParticleSystemComponent*                          ParticleSystem;                                             // 0x02A0   (0x0008)  
	UBoxComponent*                                     Box;                                                        // 0x02A8   (0x0008)  
	UFMODEvent*                                        Fmod_Explosion;                                             // 0x02B0   (0x0008)  
	FName                                              Row_Name;                                                   // 0x02B8   (0x0008)  


	/// Functions
	// Function /Game/Explosives_Pack/Explosion.Explosion_C.WallCheckGrenadeOnCameraFarPlayer
	void WallCheckGrenadeOnCameraFarPlayer(FVector Start, FVector End, double Radius, ASurvivalPlayer_C*& AsSurvival Player); // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Explosives_Pack/Explosion.Explosion_C.WallCheckGrenadeOnCamera
	void WallCheckGrenadeOnCamera(FVector Start, FVector End, double Radius, ASurvivalPlayer_C*& AsSurvival Player);         // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Explosives_Pack/Explosion.Explosion_C.WallCheckGrenade
	void WallCheckGrenade(FVector Start, FVector End, double Radius, ASurvivalPlayer_C*& AsSurvival Player);                 // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Explosives_Pack/Explosion.Explosion_C.ReceiveBeginPlay
	void ReceiveBeginPlay();                                                                                                 // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/Explosives_Pack/Explosion.Explosion_C.ExecuteUbergraph_Explosion
	void ExecuteUbergraph_Explosion(int32_t EntryPoint);                                                                     // [0x2407bf0] Final|HasDefaults    
};

/// Class /Game/Explosives_Pack/Explosion_Molotov.Explosion_Molotov_C
/// Size: 0x0168 (0x0002C0 - 0x000428)
class AExplosion_Molotov_C : public AExplosion_C : AExplosion_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	USphereComponent*                                  Sphere;                                                     // 0x02C8   (0x0008)  
	UPointLightComponent*                              PointLightFloor;                                            // 0x02D0   (0x0008)  
	UPointLightComponent*                              PointLightWall;                                             // 0x02D8   (0x0008)  
	UNiagaraComponent*                                 Niagara_Wall;                                               // 0x02E0   (0x0008)  
	UNiagaraComponent*                                 Niagara_Floor;                                              // 0x02E8   (0x0008)  
	UNiagaraComponent*                                 Niagara_AfterWall;                                          // 0x02F0   (0x0008)  
	FLinearColor                                       Timeline_1_NewTrack_1_2E82E29644AC2CD7FF1739B00A7ABCEA;     // 0x02F8   (0x0010)  
	float                                              Timeline_1_NewTrack_0_2E82E29644AC2CD7FF1739B00A7ABCEA;     // 0x0308   (0x0004)  
	TEnumAsByte<ETimelineDirection>                    Timeline_1__Direction_2E82E29644AC2CD7FF1739B00A7ABCEA;     // 0x030C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x030D   (0x0003)  MISSED
	UTimelineComponent*                                Timeline;                                                   // 0x0310   (0x0008)  
	FLinearColor                                       Timeline_0_NewTrack_1_B836F8DE45015D1A9FBE209662F00863;     // 0x0318   (0x0010)  
	float                                              Timeline_0_NewTrack_0_B836F8DE45015D1A9FBE209662F00863;     // 0x0328   (0x0004)  
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_B836F8DE45015D1A9FBE209662F00863;     // 0x032C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x032D   (0x0003)  MISSED
	UTimelineComponent*                                Timeline;                                                   // 0x0330   (0x0008)  
	double                                             Damage;                                                     // 0x0338   (0x0008)  
	double                                             TimeDamage;                                                 // 0x0340   (0x0008)  
	bool                                               EndOverlapMolotov;                                          // 0x0348   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0349   (0x0007)  MISSED
	FTimerHandle                                       Timer_End_Overlap;                                          // 0x0350   (0x0008)  
	bool                                               IsFire;                                                     // 0x0358   (0x0001)  
	bool                                               IsEndFire;                                                  // 0x0359   (0x0001)  
	unsigned char                                      UnknownData03_5[0x6];                                       // 0x035A   (0x0006)  MISSED
	UClass*                                            DecalBeforeMolotov;                                         // 0x0360   (0x0008)  
	bool                                               FindStaticObject;                                           // 0x0368   (0x0001)  
	unsigned char                                      UnknownData04_5[0x7];                                       // 0x0369   (0x0007)  MISSED
	TArray<FHitResult>                                 StaticObjects;                                              // 0x0370   (0x0010)  
	FTransform                                         Spawn_transform;                                            // 0x0380   (0x0060)  
	double                                             Point_Light_Delay;                                          // 0x03E0   (0x0008)  
	TArray<TEnumAsByte>                                Object_Types;                                               // 0x03E8   (0x0010)  
	UClass*                                            DecalExplosion;                                             // 0x03F8   (0x0008)  
	AActor*                                            Decal;                                                      // 0x0400   (0x0008)  
	FTimerHandle                                       CheckTimer;                                                 // 0x0408   (0x0008)  
	FVector                                            Normal_Decal;                                               // 0x0410   (0x0018)  


	/// Functions
	// Function /Game/Explosives_Pack/Explosion_Molotov.Explosion_Molotov_C.CreateDecal
	void CreateDecal();                                                                                                      // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Explosives_Pack/Explosion_Molotov.Explosion_Molotov_C.ScaleDecal
	void ScaleDecal(AActor* Decal);                                                                                          // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Explosives_Pack/Explosion_Molotov.Explosion_Molotov_C.DecalMolotov
	void DecalMolotov(double Radius);                                                                                        // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Explosives_Pack/Explosion_Molotov.Explosion_Molotov_C.Timeline_0__FinishedFunc
	void Timeline_0__FinishedFunc();                                                                                         // [0x2407bf0] BlueprintEvent       
	// Function /Game/Explosives_Pack/Explosion_Molotov.Explosion_Molotov_C.Timeline_0__UpdateFunc
	void Timeline_0__UpdateFunc();                                                                                           // [0x2407bf0] BlueprintEvent       
	// Function /Game/Explosives_Pack/Explosion_Molotov.Explosion_Molotov_C.Timeline_1__FinishedFunc
	void Timeline_1__FinishedFunc();                                                                                         // [0x2407bf0] BlueprintEvent       
	// Function /Game/Explosives_Pack/Explosion_Molotov.Explosion_Molotov_C.Timeline_1__UpdateFunc
	void Timeline_1__UpdateFunc();                                                                                           // [0x2407bf0] BlueprintEvent       
	// Function /Game/Explosives_Pack/Explosion_Molotov.Explosion_Molotov_C.ReceiveBeginPlay
	void ReceiveBeginPlay();                                                                                                 // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/Explosives_Pack/Explosion_Molotov.Explosion_Molotov_C.MolotovDamagePerSecondEnd
	void MolotovDamagePerSecondEnd();                                                                                        // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Explosives_Pack/Explosion_Molotov.Explosion_Molotov_C.EventEndMolotovOverlap
	void EventEndMolotovOverlap(ASurvivalPlayer_C* Player, double Damage, FVector Origin, double Radius, double TimeDamage); // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Explosives_Pack/Explosion_Molotov.Explosion_Molotov_C.BndEvt__Explosion_Molotov_Sphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
	void BndEvt__Explosion_Molotov_Sphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x2407bf0] HasOutParms|BlueprintEvent 
	// Function /Game/Explosives_Pack/Explosion_Molotov.Explosion_Molotov_C.BndEvt__Explosion_Molotov_Sphere_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
	void BndEvt__Explosion_Molotov_Sphere_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // [0x2407bf0] BlueprintEvent       
	// Function /Game/Explosives_Pack/Explosion_Molotov.Explosion_Molotov_C.RadialDamageMolotov
	void RadialDamageMolotov();                                                                                              // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Explosives_Pack/Explosion_Molotov.Explosion_Molotov_C.ReceiveDestroyed
	void ReceiveDestroyed();                                                                                                 // [0x2407bf0] Event|Public|BlueprintEvent 
	// Function /Game/Explosives_Pack/Explosion_Molotov.Explosion_Molotov_C.DecalMolotovPerSecond
	void DecalMolotovPerSecond(TArray<FHitResult>& Objects);                                                                 // [0x2407bf0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Explosives_Pack/Explosion_Molotov.Explosion_Molotov_C.AddDecalEvent
	void AddDecalEvent();                                                                                                    // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Explosives_Pack/Explosion_Molotov.Explosion_Molotov_C.StartMolotov
	void StartMolotov(bool HasSurface, FVector Normal_decal);                                                                // [0x2407bf0] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/Explosives_Pack/Explosion_Molotov.Explosion_Molotov_C.ActivateMolotovAfterWall
	void ActivateMolotovAfterWall();                                                                                         // [0x2407bf0] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/Explosives_Pack/Explosion_Molotov.Explosion_Molotov_C.CheckSurface
	void CheckSurface();                                                                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Explosives_Pack/Explosion_Molotov.Explosion_Molotov_C.SpawnDecalMolotov
	void SpawnDecalMolotov();                                                                                                // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Explosives_Pack/Explosion_Molotov.Explosion_Molotov_C.ExecuteUbergraph_Explosion_Molotov
	void ExecuteUbergraph_Explosion_Molotov(int32_t EntryPoint);                                                             // [0x2407bf0] Final|HasDefaults    
};

/// Class /Game/Explosives_Pack/Explosion_Flash.Explosion_Flash_C
/// Size: 0x00B8 (0x0002C0 - 0x000378)
class AExplosion_Flash_C : public AExplosion_C : AExplosion_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	UPointLightComponent*                              Light;                                                      // 0x02C8   (0x0008)  
	APostProcessVolume*                                PP_Vol;                                                     // 0x02D0   (0x0008)  
	double                                             FullFlashDuration;                                          // 0x02D8   (0x0008)  
	double                                             FadeInterval;                                               // 0x02E0   (0x0008)  
	double                                             FlashFadeSpeed;                                             // 0x02E8   (0x0008)  
	double                                             FlashIntensity;                                             // 0x02F0   (0x0008)  
	double                                             AfterimageIntensity;                                        // 0x02F8   (0x0008)  
	double                                             RingingVolume;                                              // 0x0300   (0x0008)  
	double                                             RingingFadeSpeed;                                           // 0x0308   (0x0008)  
	UAudioComponent*                                   Ringing;                                                    // 0x0310   (0x0008)  
	UMaterialInstanceDynamic*                          PP_Flashbang_Dynamic;                                       // 0x0318   (0x0008)  
	FSFlashbangSettings                                Settings;                                                   // 0x0320   (0x0048)  
	ASurvivalPlayer_C*                                 As_Survival_Player;                                         // 0x0368   (0x0008)  
	UClass*                                            Decal;                                                      // 0x0370   (0x0008)  


	/// Functions
	// Function /Game/Explosives_Pack/Explosion_Flash.Explosion_Flash_C.CalculateInstanceValues
	void CalculateInstanceValues(UCameraComponent* Camera, FSFlashInstance& Instance);                                       // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Explosives_Pack/Explosion_Flash.Explosion_Flash_C.CheckForBlocked
	void CheckForBlocked(UCameraComponent* Camera, bool& bBlocked);                                                          // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Explosives_Pack/Explosion_Flash.Explosion_Flash_C.DetonateFlashbangOnServer
	void DetonateFlashbangOnServer();                                                                                        // [0x2407bf0] Net|NetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/Explosives_Pack/Explosion_Flash.Explosion_Flash_C.DetonateFlashbangOnClient
	void DetonateFlashbangOnClient();                                                                                        // [0x2407bf0] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/Explosives_Pack/Explosion_Flash.Explosion_Flash_C.ReceiveBeginPlay
	void ReceiveBeginPlay();                                                                                                 // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/Explosives_Pack/Explosion_Flash.Explosion_Flash_C.ExecuteUbergraph_Explosion_Flash
	void ExecuteUbergraph_Explosion_Flash(int32_t EntryPoint);                                                               // [0x2407bf0] Final                
};

/// Class /Game/Explosives_Pack/Explosion_CraftSmoke.Explosion_CraftSmoke_C
/// Size: 0x0040 (0x0002C0 - 0x000300)
class AExplosion_CraftSmoke_C : public AExplosion_C : AExplosion_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	UPointLightComponent*                              PointLight;                                                 // 0x02C8   (0x0008)  
	USphereComponent*                                  Sphere;                                                     // 0x02D0   (0x0008)  
	UNiagaraComponent*                                 Niagara;                                                    // 0x02D8   (0x0008)  
	FLinearColor                                       Timeline_0_NewTrack_1_0FC318CA46C6F8396D331090F1A84669;     // 0x02E0   (0x0010)  
	float                                              Timeline_0_NewTrack_0_0FC318CA46C6F8396D331090F1A84669;     // 0x02F0   (0x0004)  
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_0FC318CA46C6F8396D331090F1A84669;     // 0x02F4   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x02F5   (0x0003)  MISSED
	UTimelineComponent*                                Timeline;                                                   // 0x02F8   (0x0008)  


	/// Functions
	// Function /Game/Explosives_Pack/Explosion_CraftSmoke.Explosion_CraftSmoke_C.Timeline_0__FinishedFunc
	void Timeline_0__FinishedFunc();                                                                                         // [0x2407bf0] BlueprintEvent       
	// Function /Game/Explosives_Pack/Explosion_CraftSmoke.Explosion_CraftSmoke_C.Timeline_0__UpdateFunc
	void Timeline_0__UpdateFunc();                                                                                           // [0x2407bf0] BlueprintEvent       
	// Function /Game/Explosives_Pack/Explosion_CraftSmoke.Explosion_CraftSmoke_C.ReceiveBeginPlay
	void ReceiveBeginPlay();                                                                                                 // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/Explosives_Pack/Explosion_CraftSmoke.Explosion_CraftSmoke_C.BndEvt__Explosion_Smoke_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	void BndEvt__Explosion_Smoke_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x2407bf0] HasOutParms|BlueprintEvent 
	// Function /Game/Explosives_Pack/Explosion_CraftSmoke.Explosion_CraftSmoke_C.ExecuteUbergraph_Explosion_CraftSmoke
	void ExecuteUbergraph_Explosion_CraftSmoke(int32_t EntryPoint);                                                          // [0x2407bf0] Final|HasDefaults    
};

/// Class /Game/Explosives_Pack/Explosion_CraftMolotov.Explosion_CraftMolotov_C
/// Size: 0x0118 (0x0002C0 - 0x0003D8)
class AExplosion_CraftMolotov_C : public AExplosion_C : AExplosion_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	UPointLightComponent*                              PointLight;                                                 // 0x02C8   (0x0008)  
	UNiagaraComponent*                                 Niagara;                                                    // 0x02D0   (0x0008)  
	USphereComponent*                                  Sphere;                                                     // 0x02D8   (0x0008)  
	FLinearColor                                       Timeline_0_NewTrack_1_6301BAA7438A565FDC9E4980FDA1CEB4;     // 0x02E0   (0x0010)  
	float                                              Timeline_0_NewTrack_0_6301BAA7438A565FDC9E4980FDA1CEB4;     // 0x02F0   (0x0004)  
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_6301BAA7438A565FDC9E4980FDA1CEB4;     // 0x02F4   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x02F5   (0x0003)  MISSED
	UTimelineComponent*                                Timeline;                                                   // 0x02F8   (0x0008)  
	double                                             Damage;                                                     // 0x0300   (0x0008)  
	double                                             TimeDamage;                                                 // 0x0308   (0x0008)  
	bool                                               EndOverlapMolotov;                                          // 0x0310   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0311   (0x0007)  MISSED
	FTimerHandle                                       Timer_End_Overlap;                                          // 0x0318   (0x0008)  
	bool                                               IsFire;                                                     // 0x0320   (0x0001)  
	bool                                               IsEndFire;                                                  // 0x0321   (0x0001)  
	unsigned char                                      UnknownData02_5[0x6];                                       // 0x0322   (0x0006)  MISSED
	UClass*                                            DecalBeforeMolotov;                                         // 0x0328   (0x0008)  
	bool                                               FindStaticObject;                                           // 0x0330   (0x0001)  
	unsigned char                                      UnknownData03_5[0x7];                                       // 0x0331   (0x0007)  MISSED
	TArray<FHitResult>                                 StaticObjects;                                              // 0x0338   (0x0010)  
	unsigned char                                      UnknownData04_5[0x8];                                       // 0x0348   (0x0008)  MISSED
	FTransform                                         Spawn_transform;                                            // 0x0350   (0x0060)  
	double                                             Point_Light_Delay;                                          // 0x03B0   (0x0008)  
	TArray<TEnumAsByte>                                Object_Types;                                               // 0x03B8   (0x0010)  
	UClass*                                            DecalExplosion;                                             // 0x03C8   (0x0008)  
	AActor*                                            Decal;                                                      // 0x03D0   (0x0008)  


	/// Functions
	// Function /Game/Explosives_Pack/Explosion_CraftMolotov.Explosion_CraftMolotov_C.CreateDecal
	void CreateDecal();                                                                                                      // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Explosives_Pack/Explosion_CraftMolotov.Explosion_CraftMolotov_C.ScaleDecal
	void ScaleDecal(AActor* Decal);                                                                                          // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Explosives_Pack/Explosion_CraftMolotov.Explosion_CraftMolotov_C.DecalMolotov
	void DecalMolotov(double Radius);                                                                                        // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Explosives_Pack/Explosion_CraftMolotov.Explosion_CraftMolotov_C.Timeline_0__FinishedFunc
	void Timeline_0__FinishedFunc();                                                                                         // [0x2407bf0] BlueprintEvent       
	// Function /Game/Explosives_Pack/Explosion_CraftMolotov.Explosion_CraftMolotov_C.Timeline_0__UpdateFunc
	void Timeline_0__UpdateFunc();                                                                                           // [0x2407bf0] BlueprintEvent       
	// Function /Game/Explosives_Pack/Explosion_CraftMolotov.Explosion_CraftMolotov_C.RadialDamageMolotov
	void RadialDamageMolotov();                                                                                              // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Explosives_Pack/Explosion_CraftMolotov.Explosion_CraftMolotov_C.ReceiveDestroyed
	void ReceiveDestroyed();                                                                                                 // [0x2407bf0] Event|Public|BlueprintEvent 
	// Function /Game/Explosives_Pack/Explosion_CraftMolotov.Explosion_CraftMolotov_C.DecalMolotovPerSecond
	void DecalMolotovPerSecond(TArray<FHitResult>& Objects);                                                                 // [0x2407bf0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Explosives_Pack/Explosion_CraftMolotov.Explosion_CraftMolotov_C.AddDecalEvent
	void AddDecalEvent();                                                                                                    // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Explosives_Pack/Explosion_CraftMolotov.Explosion_CraftMolotov_C.BndEvt__Explosion_Molotov_Sphere_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
	void BndEvt__Explosion_Molotov_Sphere_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // [0x2407bf0] BlueprintEvent       
	// Function /Game/Explosives_Pack/Explosion_CraftMolotov.Explosion_CraftMolotov_C.BndEvt__Explosion_Molotov_Sphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
	void BndEvt__Explosion_Molotov_Sphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x2407bf0] HasOutParms|BlueprintEvent 
	// Function /Game/Explosives_Pack/Explosion_CraftMolotov.Explosion_CraftMolotov_C.EventEndMolotovOverlap
	void EventEndMolotovOverlap(ASurvivalPlayer_C* Player, double Damage, FVector Origin, double Radius, double TimeDamage); // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Explosives_Pack/Explosion_CraftMolotov.Explosion_CraftMolotov_C.MolotovDamagePerSecondEnd
	void MolotovDamagePerSecondEnd();                                                                                        // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Explosives_Pack/Explosion_CraftMolotov.Explosion_CraftMolotov_C.ReceiveBeginPlay
	void ReceiveBeginPlay();                                                                                                 // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/Explosives_Pack/Explosion_CraftMolotov.Explosion_CraftMolotov_C.ExecuteUbergraph_Explosion_CraftMolotov
	void ExecuteUbergraph_Explosion_CraftMolotov(int32_t EntryPoint);                                                        // [0x2407bf0] Final|HasDefaults    
};

/// Class /Game/Explosives_Pack/Explosion_CraftFlash.Explosion_CraftFlash_C
/// Size: 0x0008 (0x0002C0 - 0x0002C8)
class AExplosion_CraftFlash_C : public AExplosion_C : AExplosion_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  


	/// Functions
	// Function /Game/Explosives_Pack/Explosion_CraftFlash.Explosion_CraftFlash_C.ReceiveBeginPlay
	void ReceiveBeginPlay();                                                                                                 // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/Explosives_Pack/Explosion_CraftFlash.Explosion_CraftFlash_C.ExecuteUbergraph_Explosion_CraftFlash
	void ExecuteUbergraph_Explosion_CraftFlash(int32_t EntryPoint);                                                          // [0x2407bf0] Final                
};

/// Class /Game/Explosives_Pack/Explosion_CraftF1.Explosion_CraftF1_C
/// Size: 0x0038 (0x0002C0 - 0x0002F8)
class AExplosion_CraftF1_C : public AExplosion_C : AExplosion_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	UNiagaraComponent*                                 NS_F1;                                                      // 0x02C8   (0x0008)  
	TArray<TEnumAsByte>                                Object_Types;                                               // 0x02D0   (0x0010)  
	TArray<FHitResult>                                 Out_Hits;                                                   // 0x02E0   (0x0010)  
	APawn*                                             PawnTrace;                                                  // 0x02F0   (0x0008)  


	/// Functions
	// Function /Game/Explosives_Pack/Explosion_CraftF1.Explosion_CraftF1_C.ReceiveBeginPlay
	void ReceiveBeginPlay();                                                                                                 // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/Explosives_Pack/Explosion_CraftF1.Explosion_CraftF1_C.ExecuteUbergraph_Explosion_CraftF1
	void ExecuteUbergraph_Explosion_CraftF1(int32_t EntryPoint);                                                             // [0x2407bf0] Final|HasDefaults    
};

/// Class /Game/Explosives_Pack/Explosion_Smoke.Explosion_Smoke_C
/// Size: 0x0118 (0x0002C0 - 0x0003D8)
class AExplosion_Smoke_C : public AExplosion_C : AExplosion_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	UNiagaraComponent*                                 NS_Smoke;                                                   // 0x02C8   (0x0008)  
	UNiagaraComponent*                                 NS_FLASH;                                                   // 0x02D0   (0x0008)  
	FLinearColor                                       Timeline_0_NewTrack_1_E10221814454721168EBD09271FBEEED;     // 0x02D8   (0x0010)  
	float                                              Timeline_0_NewTrack_0_E10221814454721168EBD09271FBEEED;     // 0x02E8   (0x0004)  
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_E10221814454721168EBD09271FBEEED;     // 0x02EC   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x02ED   (0x0003)  MISSED
	UTimelineComponent*                                Timeline;                                                   // 0x02F0   (0x0008)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x02F8   (0x0008)  MISSED
	FTransform                                         TransformGrenade;                                           // 0x0300   (0x0060)  
	FTransform                                         SmokeTransform;                                             // 0x0360   (0x0060)  
	FVector                                            VelocityGrenade;                                            // 0x03C0   (0x0018)  


	/// Functions
	// Function /Game/Explosives_Pack/Explosion_Smoke.Explosion_Smoke_C.Timeline_0__FinishedFunc
	void Timeline_0__FinishedFunc();                                                                                         // [0x2407bf0] BlueprintEvent       
	// Function /Game/Explosives_Pack/Explosion_Smoke.Explosion_Smoke_C.Timeline_0__UpdateFunc
	void Timeline_0__UpdateFunc();                                                                                           // [0x2407bf0] BlueprintEvent       
	// Function /Game/Explosives_Pack/Explosion_Smoke.Explosion_Smoke_C.ReceiveBeginPlay
	void ReceiveBeginPlay();                                                                                                 // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/Explosives_Pack/Explosion_Smoke.Explosion_Smoke_C.ReceiveDestroyed
	void ReceiveDestroyed();                                                                                                 // [0x2407bf0] Event|Public|BlueprintEvent 
	// Function /Game/Explosives_Pack/Explosion_Smoke.Explosion_Smoke_C.ExecuteUbergraph_Explosion_Smoke
	void ExecuteUbergraph_Explosion_Smoke(int32_t EntryPoint);                                                               // [0x2407bf0] Final|HasDefaults    
};

/// Class /Game/Explosives_Pack/Explosive_Item.Explosive_Item_C
/// Size: 0x01E1 (0x000290 - 0x000471)
class AExplosive_Item_C : public AActor : AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0290   (0x0008)  
	UProjectileMovementComponent*                      ProjectileMovement;                                         // 0x0298   (0x0008)  
	UStaticMeshComponent*                              StaticMesh;                                                 // 0x02A0   (0x0008)  
	UStaticMeshComponent*                              StaticMeshLever;                                            // 0x02A8   (0x0008)  
	UClass*                                            Explosion;                                                  // 0x02B0   (0x0008)  
	double                                             Time;                                                       // 0x02B8   (0x0008)  
	UFMODEvent*                                        EventSoundThrow;                                            // 0x02C0   (0x0008)  
	UFMODEvent*                                        EventSoundHit;                                              // 0x02C8   (0x0008)  
	bool                                               OneHit;                                                     // 0x02D0   (0x0001)  
	bool                                               F1;                                                         // 0x02D1   (0x0001)  
	bool                                               InWater;                                                    // 0x02D2   (0x0001)  
	unsigned char                                      UnknownData00_5[0x5];                                       // 0x02D3   (0x0005)  MISSED
	UClass*                                            ExplosionWater;                                             // 0x02D8   (0x0008)  
	FTransform                                         Spawn_Transform_Water;                                      // 0x02E0   (0x0060)  
	FVector                                            LocationOverlapWater;                                       // 0x0340   (0x0018)  
	UClass*                                            DecalExplosion;                                             // 0x0358   (0x0008)  
	bool                                               FindStaticObject;                                           // 0x0360   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0361   (0x0007)  MISSED
	TArray<TEnumAsByte>                                Object_Types;                                               // 0x0368   (0x0010)  
	double                                             TraceDecal;                                                 // 0x0378   (0x0008)  
	double                                             MinusTraceDecal;                                            // 0x0380   (0x0008)  
	AActor*                                            Decal;                                                      // 0x0388   (0x0008)  
	FActorLayer                                        Layer;                                                      // 0x0390   (0x0008)  
	unsigned char                                      UnknownData02_5[0x8];                                       // 0x0398   (0x0008)  MISSED
	FTransform                                         Relative_Transform;                                         // 0x03A0   (0x0060)  
	bool                                               LeverDestroy;                                               // 0x0400   (0x0001)  
	unsigned char                                      UnknownData03_5[0x7];                                       // 0x0401   (0x0007)  MISSED
	FMulticastInlineDelegate                           ED_Detonate;                                                // 0x0408   (0x0010)  
	FVector                                            ClientLocation;                                             // 0x0418   (0x0018)  
	bool                                               TrueExplosion;                                              // 0x0430   (0x0001)  
	unsigned char                                      UnknownData04_5[0x7];                                       // 0x0431   (0x0007)  MISSED
	FVector                                            NewVar;                                                     // 0x0438   (0x0018)  
	bool                                               isSMoke;                                                    // 0x0450   (0x0001)  
	unsigned char                                      UnknownData05_5[0x7];                                       // 0x0451   (0x0007)  MISSED
	double                                             RotationAngle;                                              // 0x0458   (0x0008)  
	bool                                               Rotate;                                                     // 0x0460   (0x0001)  
	unsigned char                                      UnknownData06_5[0x7];                                       // 0x0461   (0x0007)  MISSED
	double                                             SpeedGrenade;                                               // 0x0468   (0x0008)  
	bool                                               WithoutTimer;                                               // 0x0470   (0x0001)  


	/// Functions
	// Function /Game/Explosives_Pack/Explosive_Item.Explosive_Item_C.ScaleDecal
	void ScaleDecal(AActor* Decal);                                                                                          // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Explosives_Pack/Explosive_Item.Explosive_Item_C.CreateDecalLocation
	void CreateDecalLocation(FVector Start, AActor*& Decal);                                                                 // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Explosives_Pack/Explosive_Item.Explosive_Item_C.UserConstructionScript
	void UserConstructionScript();                                                                                           // [0x2407bf0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Explosives_Pack/Explosive_Item.Explosive_Item_C.ReceiveBeginPlay
	void ReceiveBeginPlay();                                                                                                 // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/Explosives_Pack/Explosive_Item.Explosive_Item_C.Detonate
	void Detonate();                                                                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Explosives_Pack/Explosive_Item.Explosive_Item_C.BndEvt__Explosive_Item_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
	void BndEvt__Explosive_Item_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult& hit); // [0x2407bf0] HasOutParms|BlueprintEvent 
	// Function /Game/Explosives_Pack/Explosive_Item.Explosive_Item_C.GrenadeThrowBeforeHand
	void GrenadeThrowBeforeHand(bool IsActivate, double NewTime);                                                            // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Explosives_Pack/Explosive_Item.Explosive_Item_C.CollisionThrow
	void CollisionThrow();                                                                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Explosives_Pack/Explosive_Item.Explosive_Item_C.DestroyLevers
	void DestroyLevers();                                                                                                    // [0x2407bf0] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/Explosives_Pack/Explosive_Item.Explosive_Item_C.ReceiveTick
	void ReceiveTick(float DeltaSeconds);                                                                                    // [0x2407bf0] Event|Public|BlueprintEvent 
	// Function /Game/Explosives_Pack/Explosive_Item.Explosive_Item_C.ExplosionServer
	void ExplosionServer(FVector Spawn Transform Location, UClass* Class, AActor* Target, FTransform SpawnTransform, FVector VelocityGrenade); // [0x2407bf0] Net|NetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/Explosives_Pack/Explosive_Item.Explosive_Item_C.ExplosionWaterServer
	void ExplosionWaterServer(UClass* Class, FVector Spawn Transform Location, FRotator Spawn Transform Rotation);           // [0x2407bf0] Net|NetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/Explosives_Pack/Explosive_Item.Explosive_Item_C.DestroyEvent
	void DestroyEvent();                                                                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Explosives_Pack/Explosive_Item.Explosive_Item_C.DestroySmoke
	void DestroySmoke(AActor* DestroyedActor);                                                                               // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Explosives_Pack/Explosive_Item.Explosive_Item_C.ExplosionDecal_Multicast
	void ExplosionDecal_Multicast();                                                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Explosives_Pack/Explosive_Item.Explosive_Item_C.Multicast_SimulatePhysics
	void Multicast_SimulatePhysics();                                                                                        // [0x2407bf0] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/Explosives_Pack/Explosive_Item.Explosive_Item_C.DetonateWithoutTimer
	void DetonateWithoutTimer(double Timer);                                                                                 // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Explosives_Pack/Explosive_Item.Explosive_Item_C.ExecuteUbergraph_Explosive_Item
	void ExecuteUbergraph_Explosive_Item(int32_t EntryPoint);                                                                // [0x2407bf0] Final|HasDefaults    
	// Function /Game/Explosives_Pack/Explosive_Item.Explosive_Item_C.ED_Detonate__DelegateSignature
	void ED_Detonate__DelegateSignature(FVector Location);                                                                   // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Explosives_Pack/Explosive_F1.Explosive_F1_C
/// Size: 0x000F (0x000471 - 0x000480)
class AExplosive_F1_C : public AExplosive_Item_C : AExplosive_Item_C
{ 
public:
	unsigned char                                      UnknownData00_2[0x7];                                       // 0x0471   (0x0007)  MISSED
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0478   (0x0008)  


	/// Functions
	// Function /Game/Explosives_Pack/Explosive_F1.Explosive_F1_C.BndEvt__Explosive_Smoke_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
	void BndEvt__Explosive_Smoke_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult& hit); // [0x2407bf0] HasOutParms|BlueprintEvent 
	// Function /Game/Explosives_Pack/Explosive_F1.Explosive_F1_C.ExecuteUbergraph_Explosive_F1
	void ExecuteUbergraph_Explosive_F1(int32_t EntryPoint);                                                                  // [0x2407bf0] Final|HasDefaults    
};

/// Class /Game/Explosives_Pack/Explosion_F1.Explosion_F1_C
/// Size: 0x0060 (0x0002C0 - 0x000320)
class AExplosion_F1_C : public AExplosion_C : AExplosion_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	UNiagaraComponent*                                 NS_F1;                                                      // 0x02C8   (0x0008)  
	TArray<TEnumAsByte>                                Object_Types;                                               // 0x02D0   (0x0010)  
	TArray<FHitResult>                                 Out_Hits;                                                   // 0x02E0   (0x0010)  
	APawn*                                             PawnTrace;                                                  // 0x02F0   (0x0008)  
	TArray<AActor*>                                    Ignore_Actors;                                              // 0x02F8   (0x0010)  
	bool                                               FindActor;                                                  // 0x0308   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0309   (0x0007)  MISSED
	TArray<FHitResult>                                 OutHitsDirty;                                               // 0x0310   (0x0010)  


	/// Functions
	// Function /Game/Explosives_Pack/Explosion_F1.Explosion_F1_C.ReceiveBeginPlay
	void ReceiveBeginPlay();                                                                                                 // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/Explosives_Pack/Explosion_F1.Explosion_F1_C.StartRadialDamage
	void StartRadialDamage(float BaseDamage, float MinimumDamage, FVector& Origin, float DamageInnerRadius, float DamageOuterRadius, float DamageFalloff, float Radius, FVector End, FVector Start); // [0x2407bf0] Net|NetServer|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Explosives_Pack/Explosion_F1.Explosion_F1_C.ExplosionDirty
	void ExplosionDirty(double Radius, FVector End, FVector Start);                                                          // [0x2407bf0] Net|NetClient|BlueprintCallable|BlueprintEvent 
	// Function /Game/Explosives_Pack/Explosion_F1.Explosion_F1_C.ExecuteUbergraph_Explosion_F1
	void ExecuteUbergraph_Explosion_F1(int32_t EntryPoint);                                                                  // [0x2407bf0] Final|HasDefaults    
};

/// Class /Game/Explosives_Pack/BP_ExplosionWaterF1.BP_ExplosionWaterF1_C
/// Size: 0x0000 (0x0002A0 - 0x0002A0)
class ABP_ExplosionWaterF1_C : public AExplosionWater_C : AExplosionWater_C
{ 
public:
};

