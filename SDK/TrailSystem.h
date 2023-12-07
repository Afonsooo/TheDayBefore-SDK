
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package TrailSystem.

/// Class /Game/TrailSystem/Blueprints/BP_TrailsManager.BP_TrailsManager_C
/// Size: 0x011A (0x000290 - 0x0003AA)
class ABP_TrailsManager_C : public AActor : AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0290   (0x0008)  
	USceneComponent*                                   DefaultSceneRoot;                                           // 0x0298   (0x0008)  
	TArray<FVector2D>                                  TrailsLocation;                                             // 0x02A0   (0x0010)  
	TArray<double>                                     TrailsRadius;                                               // 0x02B0   (0x0010)  
	TArray<double>                                     TrailsHardness;                                             // 0x02C0   (0x0010)  
	TArray<double>                                     TrailsDepth;                                                // 0x02D0   (0x0010)  
	UTextureRenderTarget2D*                            HistoryRenderTarget;                                        // 0x02E0   (0x0008)  
	double                                             MaxDistance;                                                // 0x02E8   (0x0008)  
	UTextureRenderTarget2D*                            CurrentRenderTarget;                                        // 0x02F0   (0x0008)  
	UTextureRenderTarget2D*                            TrailsRenderTarget;                                         // 0x02F8   (0x0008)  
	UMaterial*                                         TrailDrawer;                                                // 0x0300   (0x0008)  
	UMaterial*                                         HistoryMerge;                                               // 0x0308   (0x0008)  
	UMaterial*                                         HistoryCopy;                                                // 0x0310   (0x0008)  
	UMaterialInstanceDynamic*                          TrailDrawerInstance;                                        // 0x0318   (0x0008)  
	UMaterialInstanceDynamic*                          HistoryMergeInstance;                                       // 0x0320   (0x0008)  
	UMaterialInstanceDynamic*                          HistoryCopyInstance;                                        // 0x0328   (0x0008)  
	FVector                                            HistoryLocation;                                            // 0x0330   (0x0018)  
	double                                             TrailsAttenuation;                                          // 0x0348   (0x0008)  
	FVector                                            CurrentLocationRaw;                                         // 0x0350   (0x0018)  
	FVector                                            CurrentLocation;                                            // 0x0368   (0x0018)  
	double                                             LocationCalcHelper;                                         // 0x0380   (0x0008)  
	bool                                               IsLocationCalculated;                                       // 0x0388   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0389   (0x0007)  MISSED
	double                                             SideFade;                                                   // 0x0390   (0x0008)  
	double                                             TEST_RadiusMulti;                                           // 0x0398   (0x0008)  
	double                                             TEST_DepthMulti;                                            // 0x03A0   (0x0008)  
	bool                                               OverrideWithAttachParentLocation;                           // 0x03A8   (0x0001)  
	bool                                               Main;                                                       // 0x03A9   (0x0001)  


	/// Functions
	// Function /Game/TrailSystem/Blueprints/BP_TrailsManager.BP_TrailsManager_C.Initialize
	void Initialize();                                                                                                       // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/TrailSystem/Blueprints/BP_TrailsManager.BP_TrailsManager_C.VisualizeTrailComponents
	void VisualizeTrailComponents(AActor* Actor);                                                                            // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/TrailSystem/Blueprints/BP_TrailsManager.BP_TrailsManager_C.CalculateLocation
	void CalculateLocation();                                                                                                // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/TrailSystem/Blueprints/BP_TrailsManager.BP_TrailsManager_C.RenderTrails
	void RenderTrails();                                                                                                     // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/TrailSystem/Blueprints/BP_TrailsManager.BP_TrailsManager_C.RegisterTrail
	void RegisterTrail(FVector Location, double Radius, double Depth, double Hardness);                                      // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/TrailSystem/Blueprints/BP_TrailsManager.BP_TrailsManager_C.ReceiveEndPlay
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);                                                          // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/TrailSystem/Blueprints/BP_TrailsManager.BP_TrailsManager_C.ReceiveTick
	void ReceiveTick(float DeltaSeconds);                                                                                    // [0x2407bf0] Event|Public|BlueprintEvent 
	// Function /Game/TrailSystem/Blueprints/BP_TrailsManager.BP_TrailsManager_C.ReceiveBeginPlay
	void ReceiveBeginPlay();                                                                                                 // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/TrailSystem/Blueprints/BP_TrailsManager.BP_TrailsManager_C.ExecuteUbergraph_BP_TrailsManager
	void ExecuteUbergraph_BP_TrailsManager(int32_t EntryPoint);                                                              // [0x2407bf0] Final|HasDefaults    
};

/// Class /Game/TrailSystem/Blueprints/BP_TrailComponent.BP_TrailComponent_C
/// Size: 0x0098 (0x0002A0 - 0x000338)
class UBP_TrailComponent_C : public USceneComponent : USceneComponent
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02A0   (0x0008)  
	ABP_TrailsManager_C*                               TrailManagerInstance;                                       // 0x02A8   (0x0008)  
	double                                             Hardness;                                                   // 0x02B0   (0x0008)  
	FName                                              ReceivingActorsTag;                                         // 0x02B8   (0x0008)  
	double                                             CalculatedRadius;                                           // 0x02C0   (0x0008)  
	FVector                                            OnlyRadiusV3;                                               // 0x02C8   (0x0018)  
	FVector                                            CurLocation;                                                // 0x02E0   (0x0018)  
	bool                                               ParticleDelay;                                              // 0x02F8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x02F9   (0x0007)  MISSED
	FVector                                            Velocity;                                                   // 0x0300   (0x0018)  
	bool                                               SpawnEmitters;                                              // 0x0318   (0x0001)  
	bool                                               SpawnTick;                                                  // 0x0319   (0x0001)  
	bool                                               IsWorking;                                                  // 0x031A   (0x0001)  
	bool                                               UpdateAnyway;                                               // 0x031B   (0x0001)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x031C   (0x0004)  MISSED
	double                                             FarDelayValue;                                              // 0x0320   (0x0008)  
	bool                                               IsDebug;                                                    // 0x0328   (0x0001)  
	bool                                               FootInWater;                                                // 0x0329   (0x0001)  
	bool                                               TickEnabled;                                                // 0x032A   (0x0001)  
	bool                                               SkipStartDelay;                                             // 0x032B   (0x0001)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x032C   (0x0004)  MISSED
	double                                             RadiusCalcValue;                                            // 0x0330   (0x0008)  


	/// Functions
	// Function /Game/TrailSystem/Blueprints/BP_TrailComponent.BP_TrailComponent_C.ParticleCalculation
	void ParticleCalculation(int32_t ParticleType, bool& Continue);                                                          // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/TrailSystem/Blueprints/BP_TrailComponent.BP_TrailComponent_C.ReceiveBeginPlay
	void ReceiveBeginPlay();                                                                                                 // [0x2407bf0] Event|Public|BlueprintEvent 
	// Function /Game/TrailSystem/Blueprints/BP_TrailComponent.BP_TrailComponent_C.ReceiveTick
	void ReceiveTick(float DeltaSeconds);                                                                                    // [0x2407bf0] Event|Public|BlueprintEvent 
	// Function /Game/TrailSystem/Blueprints/BP_TrailComponent.BP_TrailComponent_C.ExecuteUbergraph_BP_TrailComponent
	void ExecuteUbergraph_BP_TrailComponent(int32_t EntryPoint);                                                             // [0x2407bf0] Final                
};

