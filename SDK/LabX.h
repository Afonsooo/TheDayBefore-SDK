
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package LabX.

/// Struct /Game/LabX/Blueprints/PlayerRagdoll.PlayerRagdoll_C.AnimBlueprintGeneratedConstantData
/// Size: 0x00CF (0x000001 - 0x0000D0)
struct FAnimBlueprintGeneratedConstantData : FAnimBlueprintConstantData
{ 
	unsigned char                                      UnknownData00_2[0x3];                                       // 0x0001   (0x0003)  MISSED
	FName                                              __NameProperty;                                             // 0x0004   (0x0008)  
	FName                                              __NameProperty;                                             // 0x000C   (0x0008)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0014   (0x0004)  MISSED
	FAnimNodeFunctionRef                               __StructProperty;                                           // 0x0018   (0x0020)  
	FAnimSubsystem_PropertyAccess                      AnimBlueprintExtension_PropertyAccess;                      // 0x0038   (0x0080)  
	FAnimSubsystem_Base                                AnimBlueprintExtension_Base;                                // 0x00B8   (0x0018)  
};

/// Class /Game/LabX/Blueprints/PlayerRagdoll.PlayerRagdoll_C
/// Size: 0x0148 (0x000350 - 0x000498)
class UPlayerRagdoll_C : public UAnimInstance : UAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0350   (0x0008)  
	FAnimSubsystemInstance                             AnimBlueprintExtension_PropertyAccess;                      // 0x0358   (0x0008)  
	FAnimSubsystemInstance                             AnimBlueprintExtension_Base;                                // 0x0360   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x0368   (0x0020)  
	FAnimNode_PoseSnapshot                             AnimGraphNode_PoseSnapshot;                                 // 0x0388   (0x0090)  
	USkeletalMeshComponent*                            SourceMesh;                                                 // 0x0418   (0x0008)  
	bool                                               Physic;                                                     // 0x0420   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0421   (0x0007)  MISSED
	FPoseSnapshot                                      Snapshot;                                                   // 0x0428   (0x0038)  
	FPoseSnapshot                                      SurvPlayerlastSnapshot;                                     // 0x0460   (0x0038)  


	/// Functions
	// Function /Game/LabX/Blueprints/PlayerRagdoll.PlayerRagdoll_C.AnimGraph
	void AnimGraph(FPoseLink& AnimGraph);                                                                                    // [0x2407bf0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/LabX/Blueprints/PlayerRagdoll.PlayerRagdoll_C.Start
	void Start(FPoseSnapshot SurvPlayerlastSnapshot);                                                                        // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/LabX/Blueprints/PlayerRagdoll.PlayerRagdoll_C.ExecuteUbergraph_PlayerRagdoll
	void ExecuteUbergraph_PlayerRagdoll(int32_t EntryPoint);                                                                 // [0x2407bf0] Final|HasDefaults    
};

/// Class /Game/LabX/Blueprints/PlayerDeadBodyV2.PlayerDeadBodyV2_C
/// Size: 0x011D (0x000290 - 0x0003AD)
class APlayerDeadBodyV2_C : public AActor : AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0290   (0x0008)  
	USphereComponent*                                  WaterDetectionSphere;                                       // 0x0298   (0x0008)  
	USkeletalMeshComponent*                            SkeletalMesh;                                               // 0x02A0   (0x0008)  
	USkeletalMeshComponent*                            beard;                                                      // 0x02A8   (0x0008)  
	USkeletalMeshComponent*                            HelmetSlot;                                                 // 0x02B0   (0x0008)  
	USkeletalMeshComponent*                            ArmorSlot;                                                  // 0x02B8   (0x0008)  
	USkeletalMeshComponent*                            PantsSlot;                                                  // 0x02C0   (0x0008)  
	USkeletalMeshComponent*                            BackpackSlot;                                               // 0x02C8   (0x0008)  
	USkeletalMeshComponent*                            OuterwearSlot;                                              // 0x02D0   (0x0008)  
	USkeletalMeshComponent*                            Hair1;                                                      // 0x02D8   (0x0008)  
	USkeletalMeshComponent*                            Hair2;                                                      // 0x02E0   (0x0008)  
	double                                             DefaultLifeTime;                                            // 0x02E8   (0x0008)  
	FName                                              BoneName__Pelvis_;                                          // 0x02F0   (0x0008)  
	ALootPoint_C*                                      LootPoint;                                                  // 0x02F8   (0x0008)  
	FName                                              ProfileName;                                                // 0x0300   (0x0008)  
	TMap<TEnumAsByte, double>                          Impulses;                                                   // 0x0308   (0x0050)  
	FTimerHandle                                       DestroyBodyTimerHamdle;                                     // 0x0358   (0x0008)  
	APawn*                                             Player;                                                     // 0x0360   (0x0008)  
	ASurvivalPlayer_C*                                 SurvivalOwner;                                              // 0x0368   (0x0008)  
	FTimerHandle                                       PhysicsCorrectionTimer;                                     // 0x0370   (0x0008)  
	FVector                                            RagdollVelocity;                                            // 0x0378   (0x0018)  
	TEnumAsByte<EDeadBodyState>                        CurrentState;                                               // 0x0390   (0x0001)  
	TEnumAsByte<EDeadBodyEnvType>                      CurrentEnvType;                                             // 0x0391   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0392   (0x0002)  MISSED
	FName                                              BoneName__Spine_1_;                                         // 0x0394   (0x0008)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x039C   (0x0004)  MISSED
	double                                             WaterZ;                                                     // 0x03A0   (0x0008)  
	int32_t                                            WaterBoneActiveCount;                                       // 0x03A8   (0x0004)  
	bool                                               Female;                                                     // 0x03AC   (0x0001)  


	/// Functions
	// Function /Game/LabX/Blueprints/PlayerDeadBodyV2.PlayerDeadBodyV2_C.BodyWaterForce
	void BodyWaterForce(FName InSocketName, double Force);                                                                   // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/LabX/Blueprints/PlayerDeadBodyV2.PlayerDeadBodyV2_C.ApplyWaterFloatForce
	void ApplyWaterFloatForce();                                                                                             // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/LabX/Blueprints/PlayerDeadBodyV2.PlayerDeadBodyV2_C.SetCurrentEnvType
	void SetCurrentEnvType(TEnumAsByte<EDeadBodyEnvType> NewEnvType);                                                        // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/LabX/Blueprints/PlayerDeadBodyV2.PlayerDeadBodyV2_C.SetCurrentState
	void SetCurrentState(TEnumAsByte<EDeadBodyState> NewState);                                                              // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/LabX/Blueprints/PlayerDeadBodyV2.PlayerDeadBodyV2_C.PhysicsCorrection
	void PhysicsCorrection();                                                                                                // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/LabX/Blueprints/PlayerDeadBodyV2.PlayerDeadBodyV2_C.LimitPhysicsVelocity
	void LimitPhysicsVelocity(FVector Velocity, FVector& ResultVelocity);                                                    // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/LabX/Blueprints/PlayerDeadBodyV2.PlayerDeadBodyV2_C.ApplyPhysics
	void ApplyPhysics(FVector HitVector, FVector OnDeathVelocity, FName HitBoneName, APawn* Killer, bool RadialDamage);      // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/LabX/Blueprints/PlayerDeadBodyV2.PlayerDeadBodyV2_C.Enable SMTicks
	void Enable SMTicks(bool Enable);                                                                                        // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/LabX/Blueprints/PlayerDeadBodyV2.PlayerDeadBodyV2_C.OnToggleDeadBodyTimer
	void OnToggleDeadBodyTimer(bool NewState);                                                                               // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/LabX/Blueprints/PlayerDeadBodyV2.PlayerDeadBodyV2_C.DestroyBody
	void DestroyBody();                                                                                                      // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/LabX/Blueprints/PlayerDeadBodyV2.PlayerDeadBodyV2_C.GetImpulse
	void GetImpulse(APawn* Killer, double& Impulse);                                                                         // [0x2407bf0] Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/LabX/Blueprints/PlayerDeadBodyV2.PlayerDeadBodyV2_C.GetBoneName (Pelvis)
	void GetBoneName (Pelvis)(FName& BoneName);                                                                              // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/LabX/Blueprints/PlayerDeadBodyV2.PlayerDeadBodyV2_C.TakeOffClothes
	void TakeOffClothes(FName Name);                                                                                         // [0x2407bf0] Protected|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/LabX/Blueprints/PlayerDeadBodyV2.PlayerDeadBodyV2_C.CreateDropBox
	void CreateDropBox(APawn* Player);                                                                                       // [0x2407bf0] Protected|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/LabX/Blueprints/PlayerDeadBodyV2.PlayerDeadBodyV2_C.Create Loot
	void Create Loot(TArray<FDropItemEntry>& DroppedItems, APawn* Player, int32_t B);                                        // [0x2407bf0] Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/LabX/Blueprints/PlayerDeadBodyV2.PlayerDeadBodyV2_C.Die
	void Die(TArray<FDropItemEntry>& DroppedItems, FVector HitVector, FVector OnDeathVelocity, FName HitBoneName, APawn* Player, APawn* Killer, bool RadialDamage, bool Animed); // [0x2407bf0] Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/LabX/Blueprints/PlayerDeadBodyV2.PlayerDeadBodyV2_C.CopySkeletals
	void CopySkeletals(TArray<USkeletalMeshComponent*>& TargetSkeletal, TArray<USkeletalMeshComponent*>& NewSkeletal);       // [0x2407bf0] Private|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/LabX/Blueprints/PlayerDeadBodyV2.PlayerDeadBodyV2_C.CopySkeletal
	void CopySkeletal(USkeletalMeshComponent* TargetSkeletal, USkeletalMeshComponent* NewSkeletal);                          // [0x2407bf0] Private|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/LabX/Blueprints/PlayerDeadBodyV2.PlayerDeadBodyV2_C.Phase Shift
	void Phase Shift(AActor* Player);                                                                                        // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/LabX/Blueprints/PlayerDeadBodyV2.PlayerDeadBodyV2_C.CopyMaterials
	void CopyMaterials(USkeletalMeshComponent* TargetMesh, USkeletalMesh* NewMesh);                                          // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/LabX/Blueprints/PlayerDeadBodyV2.PlayerDeadBodyV2_C.UpdateMeshView
	void UpdateMeshView(USkeletalMeshComponent* EquipmentSlot, USkeletalMesh* NewMesh, UMaterial* NewMaterial);              // [0x2407bf0] Protected|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/LabX/Blueprints/PlayerDeadBodyV2.PlayerDeadBodyV2_C.CopyMeshes
	void CopyMeshes(APawn* Player);                                                                                          // [0x2407bf0] Protected|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/LabX/Blueprints/PlayerDeadBodyV2.PlayerDeadBodyV2_C.UserConstructionScript
	void UserConstructionScript();                                                                                           // [0x2407bf0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/LabX/Blueprints/PlayerDeadBodyV2.PlayerDeadBodyV2_C.ActivateDeadBody
	void ActivateDeadBody(TArray<FDropItemEntry>& DroppedItems, FVector HitVector, FVector OnDeathVelocity, FName HitBoneName, APawn* Player, APawn* Killer, bool RadialDamage, bool Animed); // [0x2407bf0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/LabX/Blueprints/PlayerDeadBodyV2.PlayerDeadBodyV2_C.DelayedPhysics
	void DelayedPhysics(FVector HitVector, FVector OnDeathVelocity, FName HitBoneName, APawn* Killer, bool RadialDamage, bool Animed); // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/LabX/Blueprints/PlayerDeadBodyV2.PlayerDeadBodyV2_C.TakeOffClothesMulti
	void TakeOffClothesMulti(FName Name);                                                                                    // [0x2407bf0] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/LabX/Blueprints/PlayerDeadBodyV2.PlayerDeadBodyV2_C.OnStateChanged
	void OnStateChanged();                                                                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/LabX/Blueprints/PlayerDeadBodyV2.PlayerDeadBodyV2_C.OnEnvTypeChanged
	void OnEnvTypeChanged();                                                                                                 // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/LabX/Blueprints/PlayerDeadBodyV2.PlayerDeadBodyV2_C.BndEvt__PlayerDeadBodyV2_WaterDetectionSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	void BndEvt__PlayerDeadBodyV2_WaterDetectionSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x2407bf0] HasOutParms|BlueprintEvent 
	// Function /Game/LabX/Blueprints/PlayerDeadBodyV2.PlayerDeadBodyV2_C.BndEvt__PlayerDeadBodyV2_WaterDetectionSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	void BndEvt__PlayerDeadBodyV2_WaterDetectionSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // [0x2407bf0] BlueprintEvent       
	// Function /Game/LabX/Blueprints/PlayerDeadBodyV2.PlayerDeadBodyV2_C.ReceiveDestroyed
	void ReceiveDestroyed();                                                                                                 // [0x2407bf0] Event|Public|BlueprintEvent 
	// Function /Game/LabX/Blueprints/PlayerDeadBodyV2.PlayerDeadBodyV2_C.ReceiveBeginPlay
	void ReceiveBeginPlay();                                                                                                 // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/LabX/Blueprints/PlayerDeadBodyV2.PlayerDeadBodyV2_C.ReceiveTick
	void ReceiveTick(float DeltaSeconds);                                                                                    // [0x2407bf0] Event|Public|BlueprintEvent 
	// Function /Game/LabX/Blueprints/PlayerDeadBodyV2.PlayerDeadBodyV2_C.ExecuteUbergraph_PlayerDeadBodyV2
	void ExecuteUbergraph_PlayerDeadBodyV2(int32_t EntryPoint);                                                              // [0x2407bf0] Final|HasDefaults    
};

/// Class /Game/LabX/Blueprints/PlayerDeadBody.PlayerDeadBody_C
/// Size: 0x00F0 (0x0007A8 - 0x000898)
class APlayerDeadBody_C : public ALootPoint_C : ALootPoint_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x07A8   (0x0008)  
	USceneComponent*                                   Scene;                                                      // 0x07B0   (0x0008)  
	USkeletalMeshComponent*                            BackpackSlot;                                               // 0x07B8   (0x0008)  
	USkeletalMeshComponent*                            PantsSlot;                                                  // 0x07C0   (0x0008)  
	USkeletalMeshComponent*                            OuterwearSlot;                                              // 0x07C8   (0x0008)  
	USkeletalMeshComponent*                            ArmorSlot;                                                  // 0x07D0   (0x0008)  
	USkeletalMeshComponent*                            HelmetSlot;                                                 // 0x07D8   (0x0008)  
	USkeletalMeshComponent*                            Hair2;                                                      // 0x07E0   (0x0008)  
	USkeletalMeshComponent*                            Hair1;                                                      // 0x07E8   (0x0008)  
	USkeletalMeshComponent*                            SkeletalMesh;                                               // 0x07F0   (0x0008)  
	float                                              BlendPhysic_Blend_45835B93403A712F3527068E5BEE67FF;         // 0x07F8   (0x0004)  
	TEnumAsByte<ETimelineDirection>                    BlendPhysic__Direction_45835B93403A712F3527068E5BEE67FF;    // 0x07FC   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x07FD   (0x0003)  MISSED
	UTimelineComponent*                                BlendPhysic;                                                // 0x0800   (0x0008)  
	FName                                              PelvisBoneName;                                             // 0x0808   (0x0008)  
	int32_t                                            Opa;                                                        // 0x0810   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0814   (0x0004)  MISSED
	FVector                                            Impulse;                                                    // 0x0818   (0x0018)  
	FName                                              Bone_Name;                                                  // 0x0830   (0x0008)  
	FVector                                            Location;                                                   // 0x0838   (0x0018)  
	FPoseSnapshot                                      SnapPose;                                                   // 0x0850   (0x0038)  
	bool                                               StartPhysic;                                                // 0x0888   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0889   (0x0007)  MISSED
	UCurveFloat*                                       CurveBlend;                                                 // 0x0890   (0x0008)  


	/// Functions
	// Function /Game/LabX/Blueprints/PlayerDeadBody.PlayerDeadBody_C.UpdateMeshView
	void UpdateMeshView(USkeletalMeshComponent* EquipmentSlot, USkeletalMesh* NewMesh, UMaterial* NewMaterial);              // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/LabX/Blueprints/PlayerDeadBody.PlayerDeadBody_C.Take Off Clothes
	void Take Off Clothes(FName Name);                                                                                       // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/LabX/Blueprints/PlayerDeadBody.PlayerDeadBody_C.UserConstructionScript
	void UserConstructionScript();                                                                                           // [0x2407bf0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/LabX/Blueprints/PlayerDeadBody.PlayerDeadBody_C.BlendPhysic__FinishedFunc
	void BlendPhysic__FinishedFunc();                                                                                        // [0x2407bf0] BlueprintEvent       
	// Function /Game/LabX/Blueprints/PlayerDeadBody.PlayerDeadBody_C.BlendPhysic__UpdateFunc
	void BlendPhysic__UpdateFunc();                                                                                          // [0x2407bf0] BlueprintEvent       
	// Function /Game/LabX/Blueprints/PlayerDeadBody.PlayerDeadBody_C.DisableRagdoll
	void DisableRagdoll();                                                                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/LabX/Blueprints/PlayerDeadBody.PlayerDeadBody_C.CustomEvent
	void CustomEvent(FName NewParam);                                                                                        // [0x2407bf0] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/LabX/Blueprints/PlayerDeadBody.PlayerDeadBody_C.StartBlendPhysics
	void StartBlendPhysics();                                                                                                // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/LabX/Blueprints/PlayerDeadBody.PlayerDeadBody_C.ActivateDeadBody
	void ActivateDeadBody();                                                                                                 // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/LabX/Blueprints/PlayerDeadBody.PlayerDeadBody_C.DamageImpulseMulti
	void DamageImpulseMulti(FVector Direction, FVector Location, FName BoneName);                                            // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/LabX/Blueprints/PlayerDeadBody.PlayerDeadBody_C.AddImpulse
	void AddImpulse(FVector Impulse, FVector Location, FName BoneName);                                                      // [0x2407bf0] Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/LabX/Blueprints/PlayerDeadBody.PlayerDeadBody_C.EnableRagdoll
	void EnableRagdoll();                                                                                                    // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/LabX/Blueprints/PlayerDeadBody.PlayerDeadBody_C.ApplyPhysic
	void ApplyPhysic(bool isBlend);                                                                                          // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/LabX/Blueprints/PlayerDeadBody.PlayerDeadBody_C.ExecuteUbergraph_PlayerDeadBody
	void ExecuteUbergraph_PlayerDeadBody(int32_t EntryPoint);                                                                // [0x2407bf0] Final                
};

/// Class /Game/LabX/Blueprints/PlayerDeadBodyRepl.PlayerDeadBodyRepl_C
/// Size: 0x0088 (0x000898 - 0x000920)
class APlayerDeadBodyRepl_C : public APlayerDeadBody_C : APlayerDeadBody_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0898   (0x0008)  
	UStaticMeshComponent*                              LootBag;                                                    // 0x08A0   (0x0008)  
	ASurvivalPlayer_C*                                 Player;                                                     // 0x08A8   (0x0008)  
	TArray<FDefaultItemInfo>                           ItemsToSpawn;                                               // 0x08B0   (0x0010)  
	AActor*                                            PawnLoot;                                                   // 0x08C0   (0x0008)  
	TArray<FDropItemEntry>                             DropItems;                                                  // 0x08C8   (0x0010)  
	USkeletalMesh*                                     Armor;                                                      // 0x08D8   (0x0008)  
	USkeletalMesh*                                     Outerwear;                                                  // 0x08E0   (0x0008)  
	USkeletalMesh*                                     Pants;                                                      // 0x08E8   (0x0008)  
	USkeletalMesh*                                     Face;                                                       // 0x08F0   (0x0008)  
	USkeletalMesh*                                     Skelet;                                                     // 0x08F8   (0x0008)  
	UMaterialInterface*                                Skin_Material;                                              // 0x0900   (0x0008)  
	bool                                               ImpulseAdded;                                               // 0x0908   (0x0001)  
	bool                                               IsFreezed;                                                  // 0x0909   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x090A   (0x0006)  MISSED
	double                                             HitAngle;                                                   // 0x0910   (0x0008)  
	USkeletalMesh*                                     Backpack;                                                   // 0x0918   (0x0008)  


	/// Functions
	// Function /Game/LabX/Blueprints/PlayerDeadBodyRepl.PlayerDeadBodyRepl_C.FreezeRagdoll
	void FreezeRagdoll();                                                                                                    // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/LabX/Blueprints/PlayerDeadBodyRepl.PlayerDeadBodyRepl_C.OnFocused
	void OnFocused(APawn* Player, AActor* HighlightActor, UActorComponent* HighlightActorComponent, TEnumAsByte<E_InteractType>& InteractType, double& LateTime); // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/LabX/Blueprints/PlayerDeadBodyRepl.PlayerDeadBodyRepl_C.OnSurrender
	void OnSurrender();                                                                                                      // [0x2407bf0] Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/LabX/Blueprints/PlayerDeadBodyRepl.PlayerDeadBodyRepl_C.ReceiveTick
	void ReceiveTick(float DeltaSeconds);                                                                                    // [0x2407bf0] Event|Public|BlueprintEvent 
	// Function /Game/LabX/Blueprints/PlayerDeadBodyRepl.PlayerDeadBodyRepl_C.ApplyMeshes
	void ApplyMeshes(ASurvivalPlayer_C* InputPin);                                                                           // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/LabX/Blueprints/PlayerDeadBodyRepl.PlayerDeadBodyRepl_C.OnBeginInteract
	void OnBeginInteract(APawn* Player);                                                                                     // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/LabX/Blueprints/PlayerDeadBodyRepl.PlayerDeadBodyRepl_C.DisableRagdoll
	void DisableRagdoll();                                                                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/LabX/Blueprints/PlayerDeadBodyRepl.PlayerDeadBodyRepl_C.CreateLootPawn
	void CreateLootPawn();                                                                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/LabX/Blueprints/PlayerDeadBodyRepl.PlayerDeadBodyRepl_C.ActivateDeadBody
	void ActivateDeadBody();                                                                                                 // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/LabX/Blueprints/PlayerDeadBodyRepl.PlayerDeadBodyRepl_C.ReceiveBeginPlay
	void ReceiveBeginPlay();                                                                                                 // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/LabX/Blueprints/PlayerDeadBodyRepl.PlayerDeadBodyRepl_C.AddDeathRagdol
	void AddDeathRagdol(FVector Location, FName BoneName, FVector Direction);                                                // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/LabX/Blueprints/PlayerDeadBodyRepl.PlayerDeadBodyRepl_C.ShowBody
	void ShowBody(ASurvivalPlayer_C* Player, TArray<FDropItemEntry>& itemDrop);                                              // [0x2407bf0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/LabX/Blueprints/PlayerDeadBodyRepl.PlayerDeadBodyRepl_C.HideBody
	void HideBody();                                                                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/LabX/Blueprints/PlayerDeadBodyRepl.PlayerDeadBodyRepl_C.ExecuteUbergraph_PlayerDeadBodyRepl
	void ExecuteUbergraph_PlayerDeadBodyRepl(int32_t EntryPoint);                                                            // [0x2407bf0] Final|HasDefaults    
};

/// Enum /Game/LabX/Blueprints/EDeadBodyState.EDeadBodyState
/// Size: 0x04
enum EDeadBodyState : uint8_t
{
	EDeadBodyState__NewEnumerator00                                                  = 0,
	EDeadBodyState__NewEnumerator11                                                  = 1,
	EDeadBodyState__NewEnumerator22                                                  = 2,
	EDeadBodyState__EDeadBodyState_MAX3                                              = 3
};

/// Enum /Game/LabX/Blueprints/EDeadBodyEnvType.EDeadBodyEnvType
/// Size: 0x03
enum EDeadBodyEnvType : uint8_t
{
	EDeadBodyEnvType__NewEnumerator00                                                = 0,
	EDeadBodyEnvType__NewEnumerator11                                                = 1,
	EDeadBodyEnvType__EDeadBodyEnvType_MAX2                                          = 2
};

