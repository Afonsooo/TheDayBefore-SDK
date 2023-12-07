
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package Materials.

/// Class /Game/Materials/Masters/Foliage_Interactive/BP_Interface/Foliage_Interaction_BPI.Foliage_Interaction_BPI_C
/// Size: 0x0000 (0x000028 - 0x000028)
class UFoliage_Interaction_BPI_C : public UInterface : UInterface
{ 
public:
};

/// Class /Game/Materials/New_NV_WaterMaterial/BP_New_NV_Water.BP_New_NV_Water_C
/// Size: 0x01A0 (0x000290 - 0x000430)
class ABP_New_NV_Water_C : public AActor : AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0290   (0x0008)  
	UStaticMeshComponent*                              Plane;                                                      // 0x0298   (0x0008)  
	UStaticMeshComponent*                              WaterSurface;                                               // 0x02A0   (0x0008)  
	UStaticMeshComponent*                              WaterVolume;                                                // 0x02A8   (0x0008)  
	USceneComponent*                                   DefaultSceneRoot;                                           // 0x02B0   (0x0008)  
	UMaterial*                                         Water_Material;                                             // 0x02B8   (0x0008)  
	UMaterialInstanceDynamic*                          Water_Material_Instance;                                    // 0x02C0   (0x0008)  
	bool                                               RefreshMaterial;                                            // 0x02C8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x02C9   (0x0007)  MISSED
	double                                             Water_Scale_X;                                              // 0x02D0   (0x0008)  
	double                                             Water_Scale_Y;                                              // 0x02D8   (0x0008)  
	double                                             Base_Opacity;                                               // 0x02E0   (0x0008)  
	double                                             Minimum_Shore_Opacity;                                      // 0x02E8   (0x0008)  
	double                                             Water_Scale_Z;                                              // 0x02F0   (0x0008)  
	double                                             UV_Tiling;                                                  // 0x02F8   (0x0008)  
	double                                             Water_Fog_Height;                                           // 0x0300   (0x0008)  
	FLinearColor                                       Base_Color;                                                 // 0x0308   (0x0010)  
	FLinearColor                                       Deep_Color;                                                 // 0x0318   (0x0010)  
	FLinearColor                                       Shallow_Color;                                              // 0x0328   (0x0010)  
	double                                             Water_Fog_Density;                                          // 0x0338   (0x0008)  
	double                                             Wave_Speed;                                                 // 0x0340   (0x0008)  
	double                                             Roughness;                                                  // 0x0348   (0x0008)  
	double                                             Depth_Power;                                                // 0x0350   (0x0008)  
	ADirectionalLight*                                 Sun;                                                        // 0x0358   (0x0008)  
	AWindDirectionalSource*                            WindActor;                                                  // 0x0360   (0x0008)  
	double                                             SunHeight;                                                  // 0x0368   (0x0008)  
	UCurveLinearColor*                                 WaterColorCurve;                                            // 0x0370   (0x0008)  
	UParticleSystem*                                   WaterFoamFX;                                                // 0x0378   (0x0008)  
	UParticleSystem*                                   WaterRippleFX;                                              // 0x0380   (0x0008)  
	UMaterial*                                         RippleMaterial;                                             // 0x0388   (0x0008)  
	UMaterialInstanceDynamic*                          Mat_Ripple_Inst;                                            // 0x0390   (0x0008)  
	USoundCue*                                         InteractionSound;                                           // 0x0398   (0x0008)  
	bool                                               allowIdleEffect;                                            // 0x03A0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x03A1   (0x0007)  MISSED
	double                                             idleEffectIntervall;                                        // 0x03A8   (0x0008)  
	UParticleSystem*                                   WaterFoamFX_Idle;                                           // 0x03B0   (0x0008)  
	UParticleSystem*                                   WaterRippleFX_Idle;                                         // 0x03B8   (0x0008)  
	UMaterialInstanceDynamic*                          Mat_Ripple_Idle_Inst;                                       // 0x03C0   (0x0008)  
	USoundCue*                                         IdleActorSound;                                             // 0x03C8   (0x0008)  
	UMaterial*                                         IdleRippleMaterial;                                         // 0x03D0   (0x0008)  
	TArray<UStaticMesh*>                               SurfaceMeshes;                                              // 0x03D8   (0x0010)  
	TArray<UStaticMesh*>                               VolumeMeshes;                                               // 0x03E8   (0x0010)  
	TEnumAsByte<E_Shapes>                              Shape;                                                      // 0x03F8   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x03F9   (0x0007)  MISSED
	FTimerHandle                                       IdleCheckTimer;                                             // 0x0400   (0x0008)  
	FTimerHandle                                       UpdateTimer;                                                // 0x0408   (0x0008)  
	double                                             RefreshGenerateTime;                                        // 0x0410   (0x0008)  
	bool                                               IsWorking;                                                  // 0x0418   (0x0001)  
	unsigned char                                      UnknownData03_5[0x7];                                       // 0x0419   (0x0007)  MISSED
	FFMODEventInstance                                 WaterSFX;                                                   // 0x0420   (0x0008)  
	FFMODEventInstance                                 WaterSFX;                                                   // 0x0428   (0x0008)  


	/// Functions
	// Function /Game/Materials/New_NV_WaterMaterial/BP_New_NV_Water.BP_New_NV_Water_C.Setup Shape
	void Setup Shape();                                                                                                      // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Materials/New_NV_WaterMaterial/BP_New_NV_Water.BP_New_NV_Water_C.Initial Water Creation
	void Initial Water Creation();                                                                                           // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Materials/New_NV_WaterMaterial/BP_New_NV_Water.BP_New_NV_Water_C.UserConstructionScript
	void UserConstructionScript();                                                                                           // [0x2407bf0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Materials/New_NV_WaterMaterial/BP_New_NV_Water.BP_New_NV_Water_C.Generate Effects (Actors)
	void Generate Effects (Actors)(FVector Location, double Velocity, double Modifier);                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Materials/New_NV_WaterMaterial/BP_New_NV_Water.BP_New_NV_Water_C.Update Water Surface
	void Update Water Surface();                                                                                             // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Materials/New_NV_WaterMaterial/BP_New_NV_Water.BP_New_NV_Water_C.BndEvt__WaterVolume_K2Node_ComponentBoundEvent_17_ComponentBeginOverlapSignature__DelegateSignature
	void BndEvt__WaterVolume_K2Node_ComponentBoundEvent_17_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x2407bf0] HasOutParms|BlueprintEvent 
	// Function /Game/Materials/New_NV_WaterMaterial/BP_New_NV_Water.BP_New_NV_Water_C.CheckForIdleActors
	void CheckForIdleActors();                                                                                               // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Materials/New_NV_WaterMaterial/BP_New_NV_Water.BP_New_NV_Water_C.StartIdleCheck
	void StartIdleCheck();                                                                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Materials/New_NV_WaterMaterial/BP_New_NV_Water.BP_New_NV_Water_C.ReceiveBeginPlay
	void ReceiveBeginPlay();                                                                                                 // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/Materials/New_NV_WaterMaterial/BP_New_NV_Water.BP_New_NV_Water_C.Show Idle Effects (Actors)
	void Show Idle Effects (Actors)(FVector Location);                                                                       // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Materials/New_NV_WaterMaterial/BP_New_NV_Water.BP_New_NV_Water_C.BndEvt__WaterVolume_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature
	void BndEvt__WaterVolume_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // [0x2407bf0] BlueprintEvent       
	// Function /Game/Materials/New_NV_WaterMaterial/BP_New_NV_Water.BP_New_NV_Water_C.ReceiveEndPlay
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);                                                          // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/Materials/New_NV_WaterMaterial/BP_New_NV_Water.BP_New_NV_Water_C.ExecuteUbergraph_BP_New_NV_Water
	void ExecuteUbergraph_BP_New_NV_Water(int32_t EntryPoint);                                                               // [0x2407bf0] Final|HasDefaults    
};

