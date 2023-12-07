
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package SurvivalPlayer_Test.

/// Class /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C
/// Size: 0x0ED7 (0x003739 - 0x004610)
class ASurvivalPlayer_Test_C : public ASurvivalPlayer_C : ASurvivalPlayer_C
{ 
public:
	unsigned char                                      UnknownData00_2[0x7];                                       // 0x3739   (0x0007)  MISSED
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x3740   (0x0008)  
	USphereComponent*                                  PlayerNameSphereCollision;                                  // 0x3748   (0x0008)  
	UWorldPartitionStreamingSourceComponent*           WorldPartitionStreamingSource;                              // 0x3750   (0x0008)  
	UWidgetComponent*                                  Widget;                                                     // 0x3758   (0x0008)  
	URectLightComponent*                               RectLight1;                                                 // 0x3760   (0x0008)  
	URectLightComponent*                               RectLight;                                                  // 0x3768   (0x0008)  
	UPhysicalAnimationComponent*                       PhysicalAnimation;                                          // 0x3770   (0x0008)  
	float                                              DashTimeline_1_FE9E97E949BE73FA711B769C9DF5A2C8;            // 0x3778   (0x0004)  
	TEnumAsByte<ETimelineDirection>                    DashTimeline__Direction_FE9E97E949BE73FA711B769C9DF5A2C8;   // 0x377C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x377D   (0x0003)  MISSED
	UTimelineComponent*                                DashTimeline;                                               // 0x3780   (0x0008)  
	float                                              ClimbWindowTimeline_BlendIn_4C2FA5F54A06EDE9B9DA88937C86BEEB; // 0x3788   (0x0004)  
	TEnumAsByte<ETimelineDirection>                    ClimbWindowTimeline__Direction_4C2FA5F54A06EDE9B9DA88937C86BEEB; // 0x378C   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x378D   (0x0003)  MISSED
	UTimelineComponent*                                ClimbWindowTimeline;                                        // 0x3790   (0x0008)  
	TEnumAsByte<ETimelineDirection>                    AfterClimbInputCheck__Direction_C14A8A8E4E36D6E64552009468A3566B; // 0x3798   (0x0001)  
	unsigned char                                      UnknownData03_5[0x7];                                       // 0x3799   (0x0007)  MISSED
	UTimelineComponent*                                AfterClimbInputCheck;                                       // 0x37A0   (0x0008)  
	float                                              ClimbTimeline_BlendIn_5030B9EB4532DAF17BB4EDA84CE3E866;     // 0x37A8   (0x0004)  
	TEnumAsByte<ETimelineDirection>                    ClimbTimeline__Direction_5030B9EB4532DAF17BB4EDA84CE3E866;  // 0x37AC   (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x37AD   (0x0003)  MISSED
	UTimelineComponent*                                ClimbTimeline;                                              // 0x37B0   (0x0008)  
	bool                                               BlockDetectFence;                                           // 0x37B8   (0x0001)  
	unsigned char                                      UnknownData05_5[0x7];                                       // 0x37B9   (0x0007)  MISSED
	FClimbParams                                       ClimbParams;                                                // 0x37C0   (0x00A8)  
	unsigned char                                      UnknownData06_5[0x8];                                       // 0x3868   (0x0008)  MISSED
	FComponentAndTransform                             ClimbLedgeLS;                                               // 0x3870   (0x00C0)  
	FTransform                                         ClimbTarget;                                                // 0x3930   (0x0060)  
	FTransform                                         ClimbActualStartOffset;                                     // 0x3990   (0x0060)  
	FTransform                                         ClimbAnimatedStartOffset;                                   // 0x39F0   (0x0060)  
	FTransform                                         MantleActualStartOffset;                                    // 0x3A50   (0x0060)  
	bool                                               Climbing;                                                   // 0x3AB0   (0x0001)  
	unsigned char                                      UnknownData07_5[0x3];                                       // 0x3AB1   (0x0003)  MISSED
	int32_t                                            NewVar_0;                                                   // 0x3AB4   (0x0004)  
	unsigned char                                      UnknownData08_5[0x8];                                       // 0x3AB8   (0x0008)  MISSED
	FTransform                                         ClimbStartTransform;                                        // 0x3AC0   (0x0060)  
	bool                                               ClimbIn;                                                    // 0x3B20   (0x0001)  
	bool                                               ClimbingWindow;                                             // 0x3B21   (0x0001)  
	unsigned char                                      UnknownData09_5[0x6];                                       // 0x3B22   (0x0006)  MISSED
	FVector                                            WindowLoc;                                                  // 0x3B28   (0x0018)  
	double                                             WindowHeight;                                               // 0x3B40   (0x0008)  
	double                                             DistanceToWindow;                                           // 0x3B48   (0x0008)  
	FRotator                                           WindowRot;                                                  // 0x3B50   (0x0018)  
	FVector                                            WindowClimbAdditionalOffset;                                // 0x3B68   (0x0018)  
	FS_WindowClimb                                     WindowClimbAssset;                                          // 0x3B80   (0x0038)  
	bool                                               FirstStart;                                                 // 0x3BB8   (0x0001)  
	unsigned char                                      UnknownData10_5[0x7];                                       // 0x3BB9   (0x0007)  MISSED
	ALP_ForTestsWeapons_C*                             CheatLP;                                                    // 0x3BC0   (0x0008)  
	FEquipmentData                                     PantsInfo;                                                  // 0x3BC8   (0x0180)  
	FEquipmentData                                     HelmetInfo;                                                 // 0x3D48   (0x0180)  
	FEquipmentData                                     BackpackInfo;                                               // 0x3EC8   (0x0180)  
	FEquipmentData                                     ArmorInfo;                                                  // 0x4048   (0x0180)  
	FEquipmentData                                     JacketInfo;                                                 // 0x41C8   (0x0180)  
	bool                                               LetSnow;                                                    // 0x4348   (0x0001)  
	unsigned char                                      UnknownData11_5[0x7];                                       // 0x4349   (0x0007)  MISSED
	FTimerHandle                                       DashCancelTimer;                                            // 0x4350   (0x0008)  
	double                                             In_Strength_Multiplyer;                                     // 0x4358   (0x0008)  
	UW_PerksForTest_C*                                 PerkWindow;                                                 // 0x4360   (0x0008)  
	FFMODEventInstance                                 GrassSound;                                                 // 0x4368   (0x0008)  
	bool                                               LootPointInFocus;                                           // 0x4370   (0x0001)  
	unsigned char                                      UnknownData12_5[0x7];                                       // 0x4371   (0x0007)  MISSED
	FString                                            InsideCustomRoomId;                                         // 0x4378   (0x0010)  
	FString                                            Phase;                                                      // 0x4388   (0x0010)  
	FString                                            PlayerID;                                                   // 0x4398   (0x0010)  
	TArray<APS_TDB_C*>                                 Prev_Squad;                                                 // 0x43A8   (0x0010)  
	FVector                                            DEBUGTeleportLocation;                                      // 0x43B8   (0x0018)  
	FVector                                            ServerPosition;                                             // 0x43D0   (0x0018)  
	AActor*                                            CheatCars;                                                  // 0x43E8   (0x0008)  
	double                                             2stTierCap;                                                 // 0x43F0   (0x0008)  
	double                                             1stTierCap;                                                 // 0x43F8   (0x0008)  
	int32_t                                            LootCount;                                                  // 0x4400   (0x0004)  
	bool                                               InPlayerHouse;                                              // 0x4404   (0x0001)  
	unsigned char                                      UnknownData13_5[0x3];                                       // 0x4405   (0x0003)  MISSED
	TArray<APlayerRoomBP_C*>                           MyPlayerRoomArray;                                          // 0x4408   (0x0010)  
	AAVS_VehicleMaster_C*                              Car_Ref;                                                    // 0x4418   (0x0008)  
	TArray<ABP_PlayerSpawnPoint_C*>                    Regions;                                                    // 0x4420   (0x0010)  
	FTimerHandle                                       TelepTimer;                                                 // 0x4430   (0x0008)  
	bool                                               Enter;                                                      // 0x4438   (0x0001)  
	unsigned char                                      UnknownData14_5[0x7];                                       // 0x4439   (0x0007)  MISSED
	ASurvivalPlayer_V2_C*                              Char;                                                       // 0x4440   (0x0008)  
	ASurvivalPlayer_V2_C*                              SurvivalPlayer;                                             // 0x4448   (0x0008)  
	ASurvivalPlayer_V2_C*                              RoomOwner;                                                  // 0x4450   (0x0008)  
	bool                                               As_Guest;                                                   // 0x4458   (0x0001)  
	unsigned char                                      UnknownData15_5[0x7];                                       // 0x4459   (0x0007)  MISSED
	APlayerRoomBP_C*                                   Room_Ref;                                                   // 0x4460   (0x0008)  
	bool                                               IsLoading;                                                  // 0x4468   (0x0001)  
	unsigned char                                      UnknownData16_5[0x7];                                       // 0x4469   (0x0007)  MISSED
	FString                                            Last_House_Name;                                            // 0x4470   (0x0010)  
	FMulticastInlineDelegate                           ChatPreviewBeginOverlap;                                    // 0x4480   (0x0010)  
	FMulticastInlineDelegate                           ChatPreviewEndOverlap;                                      // 0x4490   (0x0010)  
	AActor*                                            TelepCarRef;                                                // 0x44A0   (0x0008)  
	ASurvPC_C*                                         Interacting_PC;                                             // 0x44A8   (0x0008)  
	FMulticastInlineDelegate                           OnRoomEnteredDisp;                                          // 0x44B0   (0x0010)  
	ATDB_GameMode_C*                                   As_TDB_Game_Mode;                                           // 0x44C0   (0x0008)  
	TArray<ABP_PlayerSpawnPoint_C*>                    SPTier1;                                                    // 0x44C8   (0x0010)  
	TArray<ABP_PlayerSpawnPoint_C*>                    SPTier2;                                                    // 0x44D8   (0x0010)  
	TArray<ABP_PlayerSpawnPoint_C*>                    SPTier3;                                                    // 0x44E8   (0x0010)  
	TArray<ABP_PlayerSpawnPoint_C*>                    SPTier4;                                                    // 0x44F8   (0x0010)  
	TMap<ABP_PlayerSpawnPoint_C*, int32_t>             SPPlayer;                                                   // 0x4508   (0x0050)  
	TArray<ABP_PlayerSpawnPoint_C*>                    RandomRegions;                                              // 0x4558   (0x0010)  
	bool                                               ToHub_;                                                     // 0x4568   (0x0001)  
	bool                                               PartyTeleport;                                              // 0x4569   (0x0001)  
	unsigned char                                      UnknownData17_5[0x6];                                       // 0x456A   (0x0006)  MISSED
	ABP_PlayerSpawnPoint_C*                            PickedSpawnPoint;                                           // 0x4570   (0x0008)  
	FString                                            CurrentAliases;                                             // 0x4578   (0x0010)  
	FFMODEventInstance                                 EscapeSound;                                                // 0x4588   (0x0008)  
	FString                                            DebugFGearString;                                           // 0x4590   (0x0010)  
	bool                                               EnablePhasePrint;                                           // 0x45A0   (0x0001)  
	bool                                               With_Car;                                                   // 0x45A1   (0x0001)  
	unsigned char                                      UnknownData18_5[0x6];                                       // 0x45A2   (0x0006)  MISSED
	UWidgetComponent*                                  PlayerNameWidgetComponent;                                  // 0x45A8   (0x0008)  
	UWBP_PlayerName3DWidget_C*                         PlayerNameWidget;                                           // 0x45B0   (0x0008)  
	FString                                            PhaseZapas;                                                 // 0x45B8   (0x0010)  
	bool                                               FullyLoaded;                                                // 0x45C8   (0x0001)  
	bool                                               No_Backpack_Teleporter;                                     // 0x45C9   (0x0001)  
	bool                                               Is_Without_Backpack;                                        // 0x45CA   (0x0001)  
	bool                                               ExitGPS;                                                    // 0x45CB   (0x0001)  
	unsigned char                                      UnknownData19_5[0x4];                                       // 0x45CC   (0x0004)  MISSED
	APlayerRoomBP_C*                                   PlayerRoomRef;                                              // 0x45D0   (0x0008)  
	TArray<ASurvivalPlayer_V2_C*>                      NameShowPlayers;                                            // 0x45D8   (0x0010)  
	bool                                               PlayerNameInBunker;                                         // 0x45E8   (0x0001)  
	unsigned char                                      UnknownData20_5[0x7];                                       // 0x45E9   (0x0007)  MISSED
	double                                             PlayerNameBunkerRadius;                                     // 0x45F0   (0x0008)  
	double                                             PlayerNameCityRadius;                                       // 0x45F8   (0x0008)  
	FMulticastInlineDelegate                           OnEvaquated;                                                // 0x4600   (0x0010)  


	/// Functions
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.AnotherPlayerLeaveSquad
	void AnotherPlayerLeaveSquad(APS_TDB_C* LeavePS);                                                                        // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.CheckNamesTickAlternative
	void CheckNamesTickAlternative();                                                                                        // [0x2407bf0] Private|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.SquadIdChanges
	void SquadIdChanges();                                                                                                   // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.RemoveNamePlayers
	void RemoveNamePlayers();                                                                                                // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.CheckNamesTick
	void CheckNamesTick();                                                                                                   // [0x2407bf0] Private|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.Set User Name In Widget
	void Set User Name In Widget(FString UserName);                                                                          // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.GetNameWidgetComponent
	void GetNameWidgetComponent(UWidgetComponent*& PlayerNameComponent, UWBP_PlayerName3DWidget_C*& PlayerNameWidget);       // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.OnRep_Phase
	void OnRep_Phase();                                                                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.SetVisiblePlayerName
	void SetVisiblePlayerName(bool Show);                                                                                    // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.InitNameWidget
	void InitNameWidget();                                                                                                   // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.Phase Print Func
	void Phase Print Func();                                                                                                 // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.Init House Box
	void Init House Box();                                                                                                   // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.Pick Point Func
	void Pick Point Func(TArray<ABP_PlayerSpawnPoint_C*>& RandomRegions, bool ToHub?, bool WithCar);                         // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.HidePlayer
	void HidePlayer(bool PlayerHided);                                                                                       // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.OnRep_IsLoading
	void OnRep_IsLoading();                                                                                                  // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.TeleportingLogic
	void TeleportingLogic();                                                                                                 // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.LootSpeedTrain
	void LootSpeedTrain(bool& Passed);                                                                                       // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.SetEquipTier
	void SetEquipTier();                                                                                                     // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.ProjectileOptimization
	void ProjectileOptimization();                                                                                           // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.RenderMarker
	void RenderMarker();                                                                                                     // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.SetAnimInstClassForServer
	void SetAnimInstClassForServer();                                                                                        // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.ClimbPlayRate
	void ClimbPlayRate(double& PlayRate);                                                                                    // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.CHeckHouseBox
	void CHeckHouseBox();                                                                                                    // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.CreateMatArray
	void CreateMatArray(UMeshComponent* self2, FMaterialArray& MatArray1);                                                   // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.SetWeaponAmmoCount
	void SetWeaponAmmoCount(int32_t CurrentAmmo, int32_t MaxAmmo);                                                           // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.SetWeaponAmmoVisibility
	void SetWeaponAmmoVisibility(bool Visible);                                                                              // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.CalculateBSh
	void CalculateBSh();                                                                                                     // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.FindEquippableMesh
	void FindEquippableMesh(USkinnedMeshComponent* Target, FEquipmentData& Out Row);                                         // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.FindEquipMeshes
	void FindEquipMeshes();                                                                                                  // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.GetDamage
	void GetDamage(FName BoneName);                                                                                          // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.SetBlizzard
	void SetBlizzard(bool IsBlizzard);                                                                                       // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.SetStaminaUse
	void SetStaminaUse(bool StaminaUse);                                                                                     // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.SetStatCutscene
	void SetStatCutscene(TEnumAsByte<StatType> Key, double Value);                                                           // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.GetWindowClimbAsset
	void GetWindowClimbAsset(double Height, FS_WindowClimb& WindowClimbAsset);                                               // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.ClimbWindowUpdate
	void ClimbWindowUpdate(double BlendIn, bool& Break);                                                                     // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.ClimbWindowStart
	void ClimbWindowStart(FVector WindowLoc, FVector ImpactNormal, double Height);                                           // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.WindowClimbCheck
	void WindowClimbCheck(bool& CanWindowClimb);                                                                             // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.SetClimbCamera
	void SetClimbCamera(TEnumAsByte<ClimbType> ClimbType, bool In, double Height);                                           // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.GetTraceParams
	void GetTraceParams(FVector& TraceOrigin, double& TraceRadius, TEnumAsByte<ETraceTypeQuery>& NewParam1);                 // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.GetPivotTarget
	FTransform GetPivotTarget();                                                                                             // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.ClimbUpdate
	void ClimbUpdate(double BlendIn, bool& Break);                                                                           // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.GetClimbAsset
	void GetClimbAsset(TEnumAsByte<ClimbType> ClimbType, bool In, bool Move, double Height, FClimbAsset& Value);             // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.ClimbStart
	void ClimbStart(double ClimbHeight, FComponentAndTransform ClimbLedgeWS, TEnumAsByte<ClimbType> ClimbType, bool In, double Width, bool Move, FTransform ClimbStartTransform, double PlayRate); // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.CapsuleHasRoomCheck
	void CapsuleHasRoomCheck(UCapsuleComponent* Capsule, FVector TargetLocation, double HeightOffset, double RadiusOffset, bool& HasRoom); // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.GetCapsuleBaseLocation
	FVector GetCapsuleBaseLocation(double ZOffset);                                                                          // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.ClimbCheck
	void ClimbCheck(bool& CanClimb/Vault);                                                                                   // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.ToggleCutsceneCamera
	void ToggleCutsceneCamera();                                                                                             // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.SnowMaskControl
	void SnowMaskControl();                                                                                                  // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.DashTimeline__FinishedFunc
	void DashTimeline__FinishedFunc();                                                                                       // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.DashTimeline__UpdateFunc
	void DashTimeline__UpdateFunc();                                                                                         // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.ClimbWindowTimeline__FinishedFunc
	void ClimbWindowTimeline__FinishedFunc();                                                                                // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.ClimbWindowTimeline__UpdateFunc
	void ClimbWindowTimeline__UpdateFunc();                                                                                  // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.AfterClimbInputCheck__FinishedFunc
	void AfterClimbInputCheck__FinishedFunc();                                                                               // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.AfterClimbInputCheck__UpdateFunc
	void AfterClimbInputCheck__UpdateFunc();                                                                                 // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.ClimbTimeline__FinishedFunc
	void ClimbTimeline__FinishedFunc();                                                                                      // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.ClimbTimeline__UpdateFunc
	void ClimbTimeline__UpdateFunc();                                                                                        // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.InpActEvt_Ctrl_F_K2Node_InputKeyEvent
	void InpActEvt_Ctrl_F_K2Node_InputKeyEvent(FKey Key);                                                                    // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.ServerChangeWorldOffset
	void ServerChangeWorldOffset();                                                                                          // [0x2407bf0] Net|NetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.ServerKnockOutDoor
	void ServerKnockOutDoor(ABP_Door_C* Door);                                                                               // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.ReceiveDestroyed
	void ReceiveDestroyed();                                                                                                 // [0x2407bf0] Event|Public|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.OnCraftProcessStarted
	void OnCraftProcessStarted();                                                                                            // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.OnCraftProcessEnded
	void OnCraftProcessEnded();                                                                                              // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.OnCraftWindowOpened
	void OnCraftWindowOpened();                                                                                              // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.OnCraftWIndowClosed
	void OnCraftWIndowClosed();                                                                                              // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.SetCraftStateServ
	void SetCraftStateServ(TEnumAsByte<CraftState> CraftState);                                                              // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.ReceiveTick
	void ReceiveTick(float DeltaSeconds);                                                                                    // [0x2407bf0] Event|Public|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.CheckForClimb
	void CheckForClimb();                                                                                                    // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.SpawnCheatChest
	void SpawnCheatChest(FVector Spawn Transform Location);                                                                  // [0x2407bf0] Net|NetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.ReceiveBeginPlay
	void ReceiveBeginPlay();                                                                                                 // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.SetSnowMask
	void SetSnowMask();                                                                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.EnableSnowMask
	void EnableSnowMask(bool LetSnow);                                                                                       // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.DashCancel
	void DashCancel();                                                                                                       // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.SetWeaponType
	void SetWeaponType(TEnumAsByte<BPE_Weapon_Type> WeaponType);                                                             // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.K2_OnMovementModeChanged
	void K2_OnMovementModeChanged(TEnumAsByte<EMovementMode> PrevMovementMode, TEnumAsByte<EMovementMode> NewMovementMode, char PrevCustomMode, char NewCustomMode); // [0x2407bf0] Event|Public|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.ManualBeginPlay
	void ManualBeginPlay();                                                                                                  // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.PossesTestChar
	void PossesTestChar();                                                                                                   // [0x2407bf0] Net|NetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.OnStandRotation
	void OnStandRotation();                                                                                                  // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.ThrowGrande
	void ThrowGrande();                                                                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.SetCraftState
	void SetCraftState(TEnumAsByte<CraftState> State);                                                                       // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.SetStance
	void SetStance(TEnumAsByte<StanceState> NewStance);                                                                      // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.SpawnWorkbench
	void SpawnWorkbench(FVector Location);                                                                                   // [0x2407bf0] Net|NetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.SurvGrassSound
	void SurvGrassSound(UFMODEvent* Sound, float SoundDelay);                                                                // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.ServerTest
	void ServerTest();                                                                                                       // [0x2407bf0] Net|NetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.RoomServer
	void RoomServer(bool Enter, ASurvivalPlayer_V2_C* Char, bool AsGuest, ASurvivalPlayer_V2_C* Owner, FString RoomName);    // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.EnterRoom
	void EnterRoom(bool Enter, ASurvivalPlayer_V2_C* Char, bool AsGuest, ASurvivalPlayer_V2_C* Owner, FString RoomName);     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.CreateItemInCustomRoomServer
	void CreateItemInCustomRoomServer(TWeakObjectPtr<UClass*> Class, FTransform Transform, bool Change, bool Destroy, int32_t ItemId, FName DT_RowName, FBuildingInfo_Struct Info); // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.LightRotation
	void LightRotation(double Yaw, double Pitch);                                                                            // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.LootPointResetServerDEBUG
	void LootPointResetServerDEBUG();                                                                                        // [0x2407bf0] Net|NetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.MultiQEXplode
	void MultiQEXplode();                                                                                                    // [0x2407bf0] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.ClimbWindowStartMulti
	void ClimbWindowStartMulti(FVector WindowLoc, FVector ImpactNormal, double Height);                                      // [0x2407bf0] Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.ClimbWindowStartServ
	void ClimbWindowStartServ(FVector WindowLoc, FVector ImpactNormal, double Height);                                       // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.DEBUGTeleportServer
	void DEBUGTeleportServer(FVector Location, bool Force);                                                                  // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.DEBUGTeleportMulti
	void DEBUGTeleportMulti(FVector Location, bool Force);                                                                   // [0x2407bf0] Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.DEBUGNextTime
	void DEBUGNextTime();                                                                                                    // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.ServerLocationSync
	void ServerLocationSync();                                                                                               // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.MultiLocationSync
	void MultiLocationSync(FVector Location);                                                                                // [0x2407bf0] Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.HouseEnter
	void HouseEnter();                                                                                                       // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.HouseExit
	void HouseExit();                                                                                                        // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.SpawnDodgeServ
	void SpawnDodgeServ(int32_t Index);                                                                                      // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.DestroyCarServ
	void DestroyCarServ();                                                                                                   // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.SpawnCar
	void SpawnCar(int32_t Index);                                                                                            // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.SelfDamage
	void SelfDamage();                                                                                                       // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.DEBUGTimlapseMode
	void DEBUGTimlapseMode();                                                                                                // [0x2407bf0] Net|NetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.CStat
	void CStat(FString Stat type, double Amount);                                                                            // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.Immortal
	void Immortal();                                                                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.Teleporting
	void Teleporting(double Timer, AAVS_VehicleMaster_C* CarRef, TArray<ABP_PlayerSpawnPoint_C*>& Regions, bool bIsWithoutBackpack, bool NoBackpackTeleporter, bool NightWarning, bool DayWarning); // [0x2407bf0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.StartTeleporting
	void StartTeleporting();                                                                                                 // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.CancelTeleport
	void CancelTeleport();                                                                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.RoomEnteredServ
	void RoomEnteredServ(APlayerRoomBP_C* Room, ASurvivalPlayer_V2_C* Char, ASurvivalPlayer_V2_C* Owner, bool As Guest);     // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.RoomEnteredMulti
	void RoomEnteredMulti(APlayerRoomBP_C* Room, ASurvivalPlayer_V2_C* Char, ASurvivalPlayer_V2_C* Owner, bool As Guest);    // [0x2407bf0] Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.ClimbStartMulti
	void ClimbStartMulti(double ClimbHeight, FComponentAndTransform ClimbLedgeWS, TEnumAsByte<ClimbType> ClimbType, bool In, double Width, bool Move, FTransform ClimbStartTransform, double PlayRate); // [0x2407bf0] Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.ReInitHouse
	void ReInitHouse(FString HouseName);                                                                                     // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.ClimbStartServ
	void ClimbStartServ(double ClimbHeight, FComponentAndTransform ClimbLedgeWS, TEnumAsByte<ClimbType> ClimbType, bool In, double Width, bool Move, FTransform ClimbStartTransform, double PlayRate); // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.RoomMulti
	void RoomMulti(APlayerRoomBP_C* RoomRef, bool Enter, ASurvivalPlayer_V2_C* Char, bool AsGuest, ASurvivalPlayer_V2_C* Owner); // [0x2407bf0] Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.Set3DWidgetPlayerName
	void Set3DWidgetPlayerName(AActor* Ref);                                                                                 // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.SetPlayerIsLoading
	void SetPlayerIsLoading(bool True?);                                                                                     // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.DestroyVehicle
	void DestroyVehicle(AAVS_VehicleMaster_C* CarRef);                                                                       // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.SpawnCarAndEnter
	void SpawnCarAndEnter(UClass* CarRef, FTransform Trans, bool OnlyEnter);                                                 // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.SpawnCarAndEnterServ
	void SpawnCarAndEnterServ(UClass* CarRef, FTransform Trans);                                                             // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.GiveCarRefToSquad
	void GiveCarRefToSquad(AActor* CarRef);                                                                                  // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.ShowFadeIn
	void ShowFadeIn(bool Showed);                                                                                            // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.TpStart
	void TpStart();                                                                                                          // [0x2407bf0] Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.EnterCarOnTeleport
	void EnterCarOnTeleport();                                                                                               // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.KnockedDown
	void KnockedDown(APawn* Killer);                                                                                         // [0x2407bf0] Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.TeleportingOwning
	void TeleportingOwning(double Timer, AAVS_VehicleMaster_C* CarRef, TArray<ABP_PlayerSpawnPoint_C*>& Regions, bool bIsWithoutBackpack, bool NoBackpackTeleporter, bool NightWarning, bool DayWarning); // [0x2407bf0] Net|NetReliableHasOutParms|NetClient|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.LocalAcceptInviteToHome
	void LocalAcceptInviteToHome();                                                                                          // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.ServAcceptInviteToHome
	void ServAcceptInviteToHome();                                                                                           // [0x2407bf0] Net|NetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.CantMovePrint
	void CantMovePrint();                                                                                                    // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.PickSpawnPointLocal
	void PickSpawnPointLocal(TArray<ABP_PlayerSpawnPoint_C*>& SP Array, bool ToHub, bool WithCar);                           // [0x2407bf0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.PickSpawnPointServ
	void PickSpawnPointServ(TArray<ABP_PlayerSpawnPoint_C*>& SP Array, bool ToHub, bool WithCar);                            // [0x2407bf0] Net|NetReliableNetServer|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.StartTelepServ
	void StartTelepServ();                                                                                                   // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.StartTelepLocal
	void StartTelepLocal();                                                                                                  // [0x2407bf0] Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.CustomRoomCollision
	void CustomRoomCollision(APlayerRoomBP_C* RoomRef);                                                                      // [0x2407bf0] Net|NetClient|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.CheckHB
	void CheckHB();                                                                                                          // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.SetCurrentAliases_Serv
	void SetCurrentAliases_Serv(FString CurrentAliases);                                                                     // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.OnHideDeathScreen
	void OnHideDeathScreen(TEnumAsByte<WE_NewDeathScreenState> NewScreenState);                                              // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.DebugFGear
	void DebugFGear();                                                                                                       // [0x2407bf0] Net|NetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.ReceiveDebugFGear
	void ReceiveDebugFGear(FString DebugMessage);                                                                            // [0x2407bf0] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.LocationAnnul
	void LocationAnnul();                                                                                                    // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.InpAxisEvt_InclineAxis_K2Node_InputAxisEvent
	void InpAxisEvt_InclineAxis_K2Node_InputAxisEvent(float AxisValue);                                                      // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.CancelTelepOwning
	void CancelTelepOwning();                                                                                                // [0x2407bf0] Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.SPANCR
	void SPANCR();                                                                                                           // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.BndEvt__SurvivalPlayer_Test_PlayerNameSphereCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	void BndEvt__SurvivalPlayer_Test_PlayerNameSphereCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x2407bf0] HasOutParms|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.BndEvt__SurvivalPlayer_Test_PlayerNameSphereCollision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	void BndEvt__SurvivalPlayer_Test_PlayerNameSphereCollision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.SpawnLightBox
	void SpawnLightBox(FVector Spawn Transform Location);                                                                    // [0x2407bf0] Net|NetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.InvokeDamageServ
	void InvokeDamageServ(AActor* DamageCauser, AActor* DamageTarget);                                                       // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.RoomInsides
	void RoomInsides(APlayerRoomBP_C* Room, FPlayerRoomItemsStructure Info);                                                 // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.CreateItemCustomRoomMulti
	void CreateItemCustomRoomMulti(FName RowName, bool Change, bool Remove, FTransform Transform, FBuildingInfo_Struct InputPin, int32_t ID, APlayerRoomBP_C* RoomRef, TWeakObjectPtr<UClass*> Class); // [0x2407bf0] Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.OnStartTeleporting
	void OnStartTeleporting();                                                                                               // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.ExitSwitcher
	void ExitSwitcher(bool On?);                                                                                             // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.ExitSwitcherServer
	void ExitSwitcherServer(bool On?);                                                                                       // [0x2407bf0] Net|NetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.MakeCarMissing
	void MakeCarMissing(FString CarName, bool Bought);                                                                       // [0x2407bf0] Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.StartTelepFromCar
	void StartTelepFromCar(AAVS_VehicleMaster_C* Car, TArray<ABP_PlayerSpawnPoint_C*>& Regions);                             // [0x2407bf0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.StartTelepFromCarOwn
	void StartTelepFromCarOwn(AAVS_VehicleMaster_C* Car Ref, TArray<ABP_PlayerSpawnPoint_C*>& Regions);                      // [0x2407bf0] Net|NetReliableHasOutParms|NetClient|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.MultiDeathRagdoll
	void MultiDeathRagdoll(double HitAngle, FVector HitLocation, FName BoneName);                                            // [0x2407bf0] Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.ReceiveEndPlay
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);                                                          // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.InvokeDamage
	void InvokeDamage(AActor* DamageCauser, AActor* DamageTarget);                                                           // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.InitLocalPlayer
	void InitLocalPlayer();                                                                                                  // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.ItemDropRequest
	void ItemDropRequest(UJSI_Slot_C* ItemRef, FFItemInfo ItemInfo, int32_t Count, UJSIContainer_C* Container);              // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.OnEvaquatedServ
	void OnEvaquatedServ();                                                                                                  // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.MakeCarMissingServ
	void MakeCarMissingServ(FString& Car, bool Condition);                                                                   // [0x2407bf0] Net|NetReliableNetServer|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.RunFadelocal
	void RunFadelocal();                                                                                                     // [0x2407bf0] Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.SpawnCheatBox
	void SpawnCheatBox(int32_t Type);                                                                                        // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.ExecuteUbergraph_SurvivalPlayer_Test
	void ExecuteUbergraph_SurvivalPlayer_Test(int32_t EntryPoint);                                                           // [0x2407bf0] Final|HasDefaults    
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.OnEvaquated__DelegateSignature
	void OnEvaquated__DelegateSignature();                                                                                   // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.OnRoomEnteredDisp__DelegateSignature
	void OnRoomEnteredDisp__DelegateSignature();                                                                             // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.ChatPreviewEndOverlap__DelegateSignature
	void ChatPreviewEndOverlap__DelegateSignature(AActor* Other Actor Ref);                                                  // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Test.SurvivalPlayer_Test_C.ChatPreviewBeginOverlap__DelegateSignature
	void ChatPreviewBeginOverlap__DelegateSignature(AActor* Other Actor Ref);                                                // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

