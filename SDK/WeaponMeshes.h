
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package WeaponMeshes.

/// Class /Game/WeaponMeshes/GPS/Widgets/WBP_MapLegend.WBP_MapLegend_C
/// Size: 0x0038 (0x000280 - 0x0002B8)
class UWBP_MapLegend_C : public UUserWidget : UUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0280   (0x0008)  
	UImage*                                            Image;                                                      // 0x0288   (0x0008)  
	UTextBlock*                                        TextBlock;                                                  // 0x0290   (0x0008)  
	FText                                              Text;                                                       // 0x0298   (0x0018)  
	UTexture2D*                                        Texture;                                                    // 0x02B0   (0x0008)  


	/// Functions
	// Function /Game/WeaponMeshes/GPS/Widgets/WBP_MapLegend.WBP_MapLegend_C.PreConstruct
	void PreConstruct(bool IsDesignTime);                                                                                    // [0x2407bf0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/WeaponMeshes/GPS/Widgets/WBP_MapLegend.WBP_MapLegend_C.ExecuteUbergraph_WBP_MapLegend
	void ExecuteUbergraph_WBP_MapLegend(int32_t EntryPoint);                                                                 // [0x2407bf0] Final                
};

/// Class /Game/WeaponMeshes/GPS/Widgets/WBP_MapLegendList.WBP_MapLegendList_C
/// Size: 0x0038 (0x000280 - 0x0002B8)
class UWBP_MapLegendList_C : public UUserWidget : UUserWidget
{ 
public:
	UWBP_MapLegend_C*                                  WBP_MapLegend;                                              // 0x0280   (0x0008)  
	UWBP_MapLegend_C*                                  WBP_MapLegend;                                              // 0x0288   (0x0008)  
	UWBP_MapLegend_C*                                  WBP_MapLegend;                                              // 0x0290   (0x0008)  
	UWBP_MapLegend_C*                                  WBP_MapLegend;                                              // 0x0298   (0x0008)  
	UWBP_MapLegend_C*                                  WBP_MapLegend;                                              // 0x02A0   (0x0008)  
	UWBP_MapLegend_C*                                  WBP_MapLegend;                                              // 0x02A8   (0x0008)  
	UWidgetSwitcher*                                   WidgetSwitcher;                                             // 0x02B0   (0x0008)  
};

/// Class /Game/WeaponMeshes/GPS/Widgets/WDG_MapIconQuest.WDG_MapIconQuest_C
/// Size: 0x00B8 (0x000280 - 0x000338)
class UWDG_MapIconQuest_C : public UUserWidget : UUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0280   (0x0008)  
	UTextBlock*                                        Desc;                                                       // 0x0288   (0x0008)  
	UImage*                                            Icon;                                                       // 0x0290   (0x0008)  
	UImage*                                            Image;                                                      // 0x0298   (0x0008)  
	UTextBlock*                                        NamePOI;                                                    // 0x02A0   (0x0008)  
	AActor*                                            WorldActor;                                                 // 0x02A8   (0x0008)  
	UCanvasPanelSlot*                                  CanvasPanelSlotQuest;                                       // 0x02B0   (0x0008)  
	double                                             DefaultShiftX;                                              // 0x02B8   (0x0008)  
	double                                             DefaultShiftY;                                              // 0x02C0   (0x0008)  
	double                                             CurPosX;                                                    // 0x02C8   (0x0008)  
	double                                             CurPosY;                                                    // 0x02D0   (0x0008)  
	UTexture2D*                                        Texture;                                                    // 0x02D8   (0x0008)  
	FVector2D                                          Size;                                                       // 0x02E0   (0x0010)  
	double                                             WorldXOfMapCenter;                                          // 0x02F0   (0x0008)  
	double                                             WorldYOfMapCenter;                                          // 0x02F8   (0x0008)  
	double                                             WorldXScale;                                                // 0x0300   (0x0008)  
	double                                             WorldYScale;                                                // 0x0308   (0x0008)  
	double                                             Return_Value_X;                                             // 0x0310   (0x0008)  
	double                                             QuestX;                                                     // 0x0318   (0x0008)  
	double                                             QuestY;                                                     // 0x0320   (0x0008)  
	double                                             ActualYPos;                                                 // 0x0328   (0x0008)  
	double                                             ActualQuestYPos;                                            // 0x0330   (0x0008)  


	/// Functions
	// Function /Game/WeaponMeshes/GPS/Widgets/WDG_MapIconQuest.WDG_MapIconQuest_C.DestractY
	void DestractY(double Zoom);                                                                                             // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/GPS/Widgets/WDG_MapIconQuest.WDG_MapIconQuest_C.DestractX
	void DestractX(double Zoom);                                                                                             // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/GPS/Widgets/WDG_MapIconQuest.WDG_MapIconQuest_C.SetIconPosition
	void SetIconPosition(double A, double Zoom, FVector2D MapSize);                                                          // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/GPS/Widgets/WDG_MapIconQuest.WDG_MapIconQuest_C.InitIcon
	void InitIcon(UTexture2D* Texture, AActor* WorldActor, FVector2D Name, FText NameQuest, FText DescQuest);                // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/GPS/Widgets/WDG_MapIconQuest.WDG_MapIconQuest_C.ExecuteUbergraph_WDG_MapIconQuest
	void ExecuteUbergraph_WDG_MapIconQuest(int32_t EntryPoint);                                                              // [0x2407bf0] Final|HasDefaults    
};

/// Class /Game/WeaponMeshes/GPS/Widgets/WDG_MapIcon.WDG_MapIcon_C
/// Size: 0x0080 (0x000280 - 0x000300)
class UWDG_MapIcon_C : public UUserWidget : UUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0280   (0x0008)  
	UTextBlock*                                        Desc;                                                       // 0x0288   (0x0008)  
	UImage*                                            Icon;                                                       // 0x0290   (0x0008)  
	UImage*                                            Image;                                                      // 0x0298   (0x0008)  
	UTextBlock*                                        NamePOI;                                                    // 0x02A0   (0x0008)  
	AActor*                                            WorldActor;                                                 // 0x02A8   (0x0008)  
	UCanvasPanelSlot*                                  CanvasPanelSlot;                                            // 0x02B0   (0x0008)  
	double                                             DefaultShiftX;                                              // 0x02B8   (0x0008)  
	double                                             DefaultShiftY;                                              // 0x02C0   (0x0008)  
	double                                             CurPosX;                                                    // 0x02C8   (0x0008)  
	double                                             CurPosY;                                                    // 0x02D0   (0x0008)  
	double                                             WorldXOfMapCenter;                                          // 0x02D8   (0x0008)  
	double                                             WorldYOfMapCenter;                                          // 0x02E0   (0x0008)  
	double                                             WorldXScale;                                                // 0x02E8   (0x0008)  
	double                                             WorldYScale;                                                // 0x02F0   (0x0008)  
	double                                             ActualYPos;                                                 // 0x02F8   (0x0008)  


	/// Functions
	// Function /Game/WeaponMeshes/GPS/Widgets/WDG_MapIcon.WDG_MapIcon_C.SetIconRotation
	void SetIconRotation(double angle);                                                                                      // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/GPS/Widgets/WDG_MapIcon.WDG_MapIcon_C.DestractY
	void DestractY(double Zoom);                                                                                             // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/GPS/Widgets/WDG_MapIcon.WDG_MapIcon_C.DestractX
	void DestractX(double Zoom);                                                                                             // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/GPS/Widgets/WDG_MapIcon.WDG_MapIcon_C.TestMapShift
	void TestMapShift(double ShiftX, double ShiftY);                                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/GPS/Widgets/WDG_MapIcon.WDG_MapIcon_C.InitIcon
	void InitIcon(UTexture2D* Texture, AActor* WorldActor, FText Name, FText Description);                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/GPS/Widgets/WDG_MapIcon.WDG_MapIcon_C.SetIconPosition
	void SetIconPosition(double A, double Zoom, FVector2D MapSize);                                                          // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/GPS/Widgets/WDG_MapIcon.WDG_MapIcon_C.ExecuteUbergraph_WDG_MapIcon
	void ExecuteUbergraph_WDG_MapIcon(int32_t EntryPoint);                                                                   // [0x2407bf0] Final|HasDefaults    
};

/// Class /Game/WeaponMeshes/GPS/Widgets/WDG_Map.WDG_Map_C
/// Size: 0x00D0 (0x000280 - 0x000350)
class UWDG_Map_C : public UUserWidget : UUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0280   (0x0008)  
	UImage*                                            Map;                                                        // 0x0288   (0x0008)  
	UCanvasPanel*                                      MapsCanvas;                                                 // 0x0290   (0x0008)  
	UScrollBox*                                        ScrollBoxHorizontal;                                        // 0x0298   (0x0008)  
	UScrollBox*                                        ScrollBoxVertical;                                          // 0x02A0   (0x0008)  
	double                                             ZoomFactor;                                                 // 0x02A8   (0x0008)  
	double                                             DefaultMapSize;                                             // 0x02B0   (0x0008)  
	TArray<UWDG_MapIcon_C*>                            Slots;                                                      // 0x02B8   (0x0010)  
	double                                             X;                                                          // 0x02C8   (0x0008)  
	double                                             Y;                                                          // 0x02D0   (0x0008)  
	ASurvivalPlayer_C*                                 CharRef;                                                    // 0x02D8   (0x0008)  
	TArray<UTexture2D*>                                IconsSquad;                                                 // 0x02E0   (0x0010)  
	ASurvivalPlayer_V2_C*                              SurfRef;                                                    // 0x02F0   (0x0008)  
	TArray<UWDG_MapIconQuest_C*>                       SlotsQuest;                                                 // 0x02F8   (0x0010)  
	bool                                               ScrollUp;                                                   // 0x0308   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0309   (0x0007)  MISSED
	double                                             ZoomMin;                                                    // 0x0310   (0x0008)  
	double                                             ZoomMax;                                                    // 0x0318   (0x0008)  
	bool                                               EbaniyCostil;                                               // 0x0320   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0321   (0x0007)  MISSED
	ASurvPC_C*                                         As_Surv_PC;                                                 // 0x0328   (0x0008)  
	UWBP_GPSQuestDetails_C*                            GpsQuestDetails;                                            // 0x0330   (0x0008)  
	UWBP_GPSMain_C*                                    SWITCH;                                                     // 0x0338   (0x0008)  
	FVector2D                                          MapSize;                                                    // 0x0340   (0x0010)  


	/// Functions
	// Function /Game/WeaponMeshes/GPS/Widgets/WDG_Map.WDG_Map_C.SetIndex
	void SetIndex(double& Index);                                                                                            // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/GPS/Widgets/WDG_Map.WDG_Map_C.GetTime
	FText GetTime();                                                                                                         // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/WeaponMeshes/GPS/Widgets/WDG_Map.WDG_Map_C.HorizontalA
	void HorizontalA();                                                                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/GPS/Widgets/WDG_Map.WDG_Map_C.HorizontalD
	void HorizontalD();                                                                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/GPS/Widgets/WDG_Map.WDG_Map_C.Tick
	void Tick(FGeometry MyGeometry, float InDeltaTime);                                                                      // [0x2407bf0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/WeaponMeshes/GPS/Widgets/WDG_Map.WDG_Map_C.AddIcon
	void AddIcon(UWDG_MapIcon_C* Content, FVector2D A, FVector2D InSize, float angle);                                       // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/GPS/Widgets/WDG_Map.WDG_Map_C.Zoom
	void Zoom(bool In/Out);                                                                                                  // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/GPS/Widgets/WDG_Map.WDG_Map_C.Destruct
	void Destruct();                                                                                                         // [0x2407bf0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/WeaponMeshes/GPS/Widgets/WDG_Map.WDG_Map_C.InpAxisEvt_VerticalWS_K2Node_InputAxisEvent
	void InpAxisEvt_VerticalWS_K2Node_InputAxisEvent(float AxisValue);                                                       // [0x2407bf0] BlueprintEvent       
	// Function /Game/WeaponMeshes/GPS/Widgets/WDG_Map.WDG_Map_C.InpAxisEvt_HorizontalAD_K2Node_InputAxisEvent
	void InpAxisEvt_HorizontalAD_K2Node_InputAxisEvent(float AxisValue);                                                     // [0x2407bf0] BlueprintEvent       
	// Function /Game/WeaponMeshes/GPS/Widgets/WDG_Map.WDG_Map_C.ZoomEvent
	void ZoomEvent(bool In/Out);                                                                                             // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/GPS/Widgets/WDG_Map.WDG_Map_C.Construct
	void Construct();                                                                                                        // [0x2407bf0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/WeaponMeshes/GPS/Widgets/WDG_Map.WDG_Map_C.UpdateIconPosition
	void UpdateIconPosition(FVector2D Position);                                                                             // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/GPS/Widgets/WDG_Map.WDG_Map_C.AddIconQuest
	void AddIconQuest(UWDG_MapIconQuest_C* Content, FVector2D A, FVector2D InSize, float angle);                             // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/GPS/Widgets/WDG_Map.WDG_Map_C.ForceUpdIcons
	void ForceUpdIcons();                                                                                                    // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/GPS/Widgets/WDG_Map.WDG_Map_C.RefreshAllIcons
	void RefreshAllIcons(bool QuestOnly);                                                                                    // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/GPS/Widgets/WDG_Map.WDG_Map_C.SetCoordCity
	void SetCoordCity();                                                                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/GPS/Widgets/WDG_Map.WDG_Map_C.TrackQuest
	void TrackQuest(double X, double Y);                                                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/GPS/Widgets/WDG_Map.WDG_Map_C.TrackQuestEvent
	void TrackQuestEvent(bool Track);                                                                                        // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/GPS/Widgets/WDG_Map.WDG_Map_C.VerticalS
	void VerticalS();                                                                                                        // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/GPS/Widgets/WDG_Map.WDG_Map_C.VerticalW
	void VerticalW();                                                                                                        // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/GPS/Widgets/WDG_Map.WDG_Map_C.ForceUpdateIcons
	void ForceUpdateIcons(bool QuestOnly);                                                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/GPS/Widgets/WDG_Map.WDG_Map_C.ExecuteUbergraph_WDG_Map
	void ExecuteUbergraph_WDG_Map(int32_t EntryPoint);                                                                       // [0x2407bf0] Final|HasDefaults    
};

/// Class /Game/WeaponMeshes/GPS/Widgets/WBP_GPSMain.WBP_GPSMain_C
/// Size: 0x0048 (0x000280 - 0x0002C8)
class UWBP_GPSMain_C : public UUserWidget : UUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0280   (0x0008)  
	UTextBlock*                                        TextBlock;                                                  // 0x0288   (0x0008)  
	UWBP_GPSJournal_C*                                 WBP_GPSJournal;                                             // 0x0290   (0x0008)  
	UWBP_MapLegendList_C*                              WBP_MapLegendList;                                          // 0x0298   (0x0008)  
	UWDG_Map_C*                                        WDG_Map;                                                    // 0x02A0   (0x0008)  
	UWidgetSwitcher*                                   WidgetSwitcher;                                             // 0x02A8   (0x0008)  
	int32_t                                            Page_Index;                                                 // 0x02B0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x02B4   (0x0004)  MISSED
	ASurvivalPlayer_C*                                 CharRef;                                                    // 0x02B8   (0x0008)  
	UUIW_PlayerMain_C*                                 PlayerMainHUD;                                              // 0x02C0   (0x0008)  


	/// Functions
	// Function /Game/WeaponMeshes/GPS/Widgets/WBP_GPSMain.WBP_GPSMain_C.SetHintText
	void SetHintText();                                                                                                      // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/GPS/Widgets/WBP_GPSMain.WBP_GPSMain_C.GetCurrentPage
	int32_t GetCurrentPage();                                                                                                // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/WeaponMeshes/GPS/Widgets/WBP_GPSMain.WBP_GPSMain_C.OnInitialized
	void OnInitialized();                                                                                                    // [0x2407bf0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/WeaponMeshes/GPS/Widgets/WBP_GPSMain.WBP_GPSMain_C.SetPage
	void SetPage(int32_t PageIndex);                                                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/GPS/Widgets/WBP_GPSMain.WBP_GPSMain_C.ExecuteUbergraph_WBP_GPSMain
	void ExecuteUbergraph_WBP_GPSMain(int32_t EntryPoint);                                                                   // [0x2407bf0] Final|HasDefaults    
};

/// Class /Game/WeaponMeshes/Kompass/BP_CompassFP.BP_CompassFP_C
/// Size: 0x0068 (0x000290 - 0x0002F8)
class ABP_CompassFP_C : public AActor : AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0290   (0x0008)  
	UStaticMeshComponent*                              Kompass_strelka1;                                           // 0x0298   (0x0008)  
	UStaticMeshComponent*                              Kompass_strelka2;                                           // 0x02A0   (0x0008)  
	USkeletalMeshComponent*                            Compas;                                                     // 0x02A8   (0x0008)  
	ASurvivalPlayer_C*                                 survRef;                                                    // 0x02B0   (0x0008)  
	ABP_TeleportToRegion_C*                            HubRef;                                                     // 0x02B8   (0x0008)  
	ABP_DoorTeleport_C*                                StreetDoorRef;                                              // 0x02C0   (0x0008)  
	UMaterialInstanceDynamic*                          CompassMat;                                                 // 0x02C8   (0x0008)  
	UMaterialInstanceDynamic*                          Strelka1;                                                   // 0x02D0   (0x0008)  
	UMaterialInstanceDynamic*                          Strelka2;                                                   // 0x02D8   (0x0008)  
	FVector                                            North;                                                      // 0x02E0   (0x0018)  


	/// Functions
	// Function /Game/WeaponMeshes/Kompass/BP_CompassFP.BP_CompassFP_C.ReceiveBeginPlay
	void ReceiveBeginPlay();                                                                                                 // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/WeaponMeshes/Kompass/BP_CompassFP.BP_CompassFP_C.ReceiveTick
	void ReceiveTick(float DeltaSeconds);                                                                                    // [0x2407bf0] Event|Public|BlueprintEvent 
	// Function /Game/WeaponMeshes/Kompass/BP_CompassFP.BP_CompassFP_C.ReceiveEndPlay
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);                                                          // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/WeaponMeshes/Kompass/BP_CompassFP.BP_CompassFP_C.ExecuteUbergraph_BP_CompassFP
	void ExecuteUbergraph_BP_CompassFP(int32_t EntryPoint);                                                                  // [0x2407bf0] Final|HasDefaults    
};

/// Class /Game/WeaponMeshes/Gym/BP_TrainingApp.BP_TrainingApp_C
/// Size: 0x00C0 (0x000290 - 0x000350)
class ABP_TrainingApp_C : public AActor : AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0290   (0x0008)  
	USceneComponent*                                   EndLocation;                                                // 0x0298   (0x0008)  
	UStaticMeshComponent*                              AttachedMesh;                                               // 0x02A0   (0x0008)  
	USceneComponent*                                   AttachPoint;                                                // 0x02A8   (0x0008)  
	UStaticMeshComponent*                              MainMesh;                                                   // 0x02B0   (0x0008)  
	USceneComponent*                                   StartLocation;                                              // 0x02B8   (0x0008)  
	UBoxComponent*                                     Box;                                                        // 0x02C0   (0x0008)  
	USceneComponent*                                   Scene;                                                      // 0x02C8   (0x0008)  
	USkeletalMeshComponent*                            SkeletalMesh;                                               // 0x02D0   (0x0008)  
	UAnimMontage*                                      DefaultAnim;                                                // 0x02D8   (0x0008)  
	UAnimMontage*                                      StartTrainApp;                                              // 0x02E0   (0x0008)  
	UAnimMontage*                                      TrainApp;                                                   // 0x02E8   (0x0008)  
	UAnimMontage*                                      EndTrainApp;                                                // 0x02F0   (0x0008)  
	bool                                               Zanyato;                                                    // 0x02F8   (0x0001)  
	bool                                               AttachedMesh_;                                              // 0x02F9   (0x0001)  
	bool                                               HasStartLoopEndTrainAnim;                                   // 0x02FA   (0x0001)  
	bool                                               On_Train;                                                   // 0x02FB   (0x0001)  
	bool                                               FocusOff_;                                                  // 0x02FC   (0x0001)  
	bool                                               Training_;                                                  // 0x02FD   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x02FE   (0x0002)  MISSED
	ULevelSequence*                                    Sequence;                                                   // 0x0300   (0x0008)  
	ASurvivalPlayer_V2_C*                              Player;                                                     // 0x0308   (0x0008)  
	FTimerHandle                                       refValidTimer;                                              // 0x0310   (0x0008)  
	UAnimMontage*                                      StartTrainAppF;                                             // 0x0318   (0x0008)  
	UAnimMontage*                                      TrainAppF;                                                  // 0x0320   (0x0008)  
	UAnimMontage*                                      EndTrainAppF;                                               // 0x0328   (0x0008)  
	TEnumAsByte<E_Training>                            TrainingType;                                               // 0x0330   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0331   (0x0007)  MISSED
	FText                                              Name;                                                       // 0x0338   (0x0018)  


	/// Functions
	// Function /Game/WeaponMeshes/Gym/BP_TrainingApp.BP_TrainingApp_C.OnFocused
	void OnFocused(APawn* Player, AActor* HighlightActor, UActorComponent* HighlightActorComponent, TEnumAsByte<E_InteractType>& InteractType, double& LateTime); // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Gym/BP_TrainingApp.BP_TrainingApp_C.GetActorType
	void GetActorType(TEnumAsByte<E_ActorType>& ActorType);                                                                  // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Gym/BP_TrainingApp.BP_TrainingApp_C.IsLocked?
	void IsLocked?(bool& Result);                                                                                            // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Gym/BP_TrainingApp.BP_TrainingApp_C.OnNotifyEnd_295298F149C7588379D51298EE1FCB1A
	void OnNotifyEnd_295298F149C7588379D51298EE1FCB1A(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Gym/BP_TrainingApp.BP_TrainingApp_C.OnNotifyBegin_295298F149C7588379D51298EE1FCB1A
	void OnNotifyBegin_295298F149C7588379D51298EE1FCB1A(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Gym/BP_TrainingApp.BP_TrainingApp_C.OnInterrupted_295298F149C7588379D51298EE1FCB1A
	void OnInterrupted_295298F149C7588379D51298EE1FCB1A(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Gym/BP_TrainingApp.BP_TrainingApp_C.OnBlendOut_295298F149C7588379D51298EE1FCB1A
	void OnBlendOut_295298F149C7588379D51298EE1FCB1A(FName NotifyName);                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Gym/BP_TrainingApp.BP_TrainingApp_C.OnCompleted_295298F149C7588379D51298EE1FCB1A
	void OnCompleted_295298F149C7588379D51298EE1FCB1A(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Gym/BP_TrainingApp.BP_TrainingApp_C.OnNotifyEnd_BDC3E19F42D0AFE4B96A3DBE1502AEC0
	void OnNotifyEnd_BDC3E19F42D0AFE4B96A3DBE1502AEC0(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Gym/BP_TrainingApp.BP_TrainingApp_C.OnNotifyBegin_BDC3E19F42D0AFE4B96A3DBE1502AEC0
	void OnNotifyBegin_BDC3E19F42D0AFE4B96A3DBE1502AEC0(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Gym/BP_TrainingApp.BP_TrainingApp_C.OnInterrupted_BDC3E19F42D0AFE4B96A3DBE1502AEC0
	void OnInterrupted_BDC3E19F42D0AFE4B96A3DBE1502AEC0(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Gym/BP_TrainingApp.BP_TrainingApp_C.OnBlendOut_BDC3E19F42D0AFE4B96A3DBE1502AEC0
	void OnBlendOut_BDC3E19F42D0AFE4B96A3DBE1502AEC0(FName NotifyName);                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Gym/BP_TrainingApp.BP_TrainingApp_C.OnCompleted_BDC3E19F42D0AFE4B96A3DBE1502AEC0
	void OnCompleted_BDC3E19F42D0AFE4B96A3DBE1502AEC0(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Gym/BP_TrainingApp.BP_TrainingApp_C.OnNotifyEnd_106E91D64A569AF70E9B5282685DF86C
	void OnNotifyEnd_106E91D64A569AF70E9B5282685DF86C(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Gym/BP_TrainingApp.BP_TrainingApp_C.OnNotifyBegin_106E91D64A569AF70E9B5282685DF86C
	void OnNotifyBegin_106E91D64A569AF70E9B5282685DF86C(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Gym/BP_TrainingApp.BP_TrainingApp_C.OnInterrupted_106E91D64A569AF70E9B5282685DF86C
	void OnInterrupted_106E91D64A569AF70E9B5282685DF86C(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Gym/BP_TrainingApp.BP_TrainingApp_C.OnBlendOut_106E91D64A569AF70E9B5282685DF86C
	void OnBlendOut_106E91D64A569AF70E9B5282685DF86C(FName NotifyName);                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Gym/BP_TrainingApp.BP_TrainingApp_C.OnCompleted_106E91D64A569AF70E9B5282685DF86C
	void OnCompleted_106E91D64A569AF70E9B5282685DF86C(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Gym/BP_TrainingApp.BP_TrainingApp_C.OnNotifyEnd_F0D45A1647D163C972B09CBF4E6C2646
	void OnNotifyEnd_F0D45A1647D163C972B09CBF4E6C2646(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Gym/BP_TrainingApp.BP_TrainingApp_C.OnNotifyBegin_F0D45A1647D163C972B09CBF4E6C2646
	void OnNotifyBegin_F0D45A1647D163C972B09CBF4E6C2646(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Gym/BP_TrainingApp.BP_TrainingApp_C.OnInterrupted_F0D45A1647D163C972B09CBF4E6C2646
	void OnInterrupted_F0D45A1647D163C972B09CBF4E6C2646(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Gym/BP_TrainingApp.BP_TrainingApp_C.OnBlendOut_F0D45A1647D163C972B09CBF4E6C2646
	void OnBlendOut_F0D45A1647D163C972B09CBF4E6C2646(FName NotifyName);                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Gym/BP_TrainingApp.BP_TrainingApp_C.OnCompleted_F0D45A1647D163C972B09CBF4E6C2646
	void OnCompleted_F0D45A1647D163C972B09CBF4E6C2646(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Gym/BP_TrainingApp.BP_TrainingApp_C.OnInteract
	void OnInteract(APawn* Player);                                                                                          // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Gym/BP_TrainingApp.BP_TrainingApp_C.OnInteract2
	void OnInteract2(APawn* Player);                                                                                         // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Gym/BP_TrainingApp.BP_TrainingApp_C.OnInteract3
	void OnInteract3(APawn* Player);                                                                                         // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Gym/BP_TrainingApp.BP_TrainingApp_C.OnInteractVehicle
	void OnInteractVehicle(APawn* Player, int32_t SitIndex, bool SkipAnimation);                                             // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Gym/BP_TrainingApp.BP_TrainingApp_C.OnSeen
	void OnSeen(APawn* Player);                                                                                              // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Gym/BP_TrainingApp.BP_TrainingApp_C.OnLostFocus
	void OnLostFocus(APawn* Player);                                                                                         // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Gym/BP_TrainingApp.BP_TrainingApp_C.Run Lockpicking
	void Run Lockpicking();                                                                                                  // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Gym/BP_TrainingApp.BP_TrainingApp_C.OnSquadCheckComplete
	void OnSquadCheckComplete();                                                                                             // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Gym/BP_TrainingApp.BP_TrainingApp_C.Set3DWidgetVisibility
	void Set3DWidgetVisibility(bool Visible);                                                                                // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Gym/BP_TrainingApp.BP_TrainingApp_C.SetTutorial3DWidgetVisibility
	void SetTutorial3DWidgetVisibility(bool Visible);                                                                        // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Gym/BP_TrainingApp.BP_TrainingApp_C.DestroyInteractable
	void DestroyInteractable();                                                                                              // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Gym/BP_TrainingApp.BP_TrainingApp_C.StartTrain
	void StartTrain(ASurvivalPlayer_C* Player, bool OnTrain);                                                                // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Gym/BP_TrainingApp.BP_TrainingApp_C.SitEventServer
	void SitEventServer(ASurvivalPlayer_C* Player, bool Sit);                                                                // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Gym/BP_TrainingApp.BP_TrainingApp_C.SitEventMulti
	void SitEventMulti(ASurvivalPlayer_C* Player, bool Sit);                                                                 // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Gym/BP_TrainingApp.BP_TrainingApp_C.NotifyEvent
	void NotifyEvent(FName Name, USkeletalMeshComponent* Mesh, ASurvivalPlayer_C* Player);                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Gym/BP_TrainingApp.BP_TrainingApp_C.OnBeginInteract
	void OnBeginInteract(APawn* Player);                                                                                     // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Gym/BP_TrainingApp.BP_TrainingApp_C.OnStopInteract
	void OnStopInteract(APawn* Player);                                                                                      // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Gym/BP_TrainingApp.BP_TrainingApp_C.Training
	void Training(bool Start?, ASurvivalPlayer_C* Player);                                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Gym/BP_TrainingApp.BP_TrainingApp_C.TrainingServer
	void TrainingServer(bool Start?);                                                                                        // [0x2407bf0] Net|NetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Gym/BP_TrainingApp.BP_TrainingApp_C.CollisionSwitcher
	void CollisionSwitcher(bool Off?);                                                                                       // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Gym/BP_TrainingApp.BP_TrainingApp_C.FadeInOut
	void FadeInOut();                                                                                                        // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Gym/BP_TrainingApp.BP_TrainingApp_C.OnLocalInteract
	void OnLocalInteract(APawn* Player);                                                                                     // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Gym/BP_TrainingApp.BP_TrainingApp_C.ReceiveTick
	void ReceiveTick(float DeltaSeconds);                                                                                    // [0x2407bf0] Event|Public|BlueprintEvent 
	// Function /Game/WeaponMeshes/Gym/BP_TrainingApp.BP_TrainingApp_C.ActorLocation
	void ActorLocation();                                                                                                    // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Gym/BP_TrainingApp.BP_TrainingApp_C.SurvChecker
	void SurvChecker();                                                                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Gym/BP_TrainingApp.BP_TrainingApp_C.ExecuteUbergraph_BP_TrainingApp
	void ExecuteUbergraph_BP_TrainingApp(int32_t EntryPoint);                                                                // [0x2407bf0] Final|HasDefaults    
};

/// Class /Game/WeaponMeshes/GPS/BP_GPS_FP.BP_GPS_FP_C
/// Size: 0x0030 (0x000290 - 0x0002C0)
class ABP_GPS_FP_C : public AActor : AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0290   (0x0008)  
	UWidgetComponent*                                  GPSWidget;                                                  // 0x0298   (0x0008)  
	USkeletalMeshComponent*                            Gps;                                                        // 0x02A0   (0x0008)  
	USceneComponent*                                   DefaultSceneRoot;                                           // 0x02A8   (0x0008)  
	UUserWidget*                                       WidgetRef;                                                  // 0x02B0   (0x0008)  
	UWBP_GPSMain_C*                                    As_WBP_GPSMain;                                             // 0x02B8   (0x0008)  


	/// Functions
	// Function /Game/WeaponMeshes/GPS/BP_GPS_FP.BP_GPS_FP_C.GetGPSWidget
	void GetGPSWidget(UWBP_GPSMain_C*& As WBP GPSMain);                                                                      // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/WeaponMeshes/GPS/BP_GPS_FP.BP_GPS_FP_C.ReceiveBeginPlay
	void ReceiveBeginPlay();                                                                                                 // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/WeaponMeshes/GPS/BP_GPS_FP.BP_GPS_FP_C.ExecuteUbergraph_BP_GPS_FP
	void ExecuteUbergraph_BP_GPS_FP(int32_t EntryPoint);                                                                     // [0x2407bf0] Final                
};

/// Class /Game/WeaponMeshes/Bar/A_Knife.A_Knife_C
/// Size: 0x0010 (0x000290 - 0x0002A0)
class AA_Knife_C : public AActor : AActor
{ 
public:
	UStaticMeshComponent*                              StaticMesh;                                                 // 0x0290   (0x0008)  
	USceneComponent*                                   DefaultSceneRoot;                                           // 0x0298   (0x0008)  
};

/// Class /Game/WeaponMeshes/Bar/A_Fork.A_Fork_C
/// Size: 0x0010 (0x000290 - 0x0002A0)
class AA_Fork_C : public AActor : AActor
{ 
public:
	UStaticMeshComponent*                              StaticMesh;                                                 // 0x0290   (0x0008)  
	USceneComponent*                                   DefaultSceneRoot;                                           // 0x0298   (0x0008)  
};

/// Class /Game/WeaponMeshes/Bar/A_Food.A_Food_C
/// Size: 0x0010 (0x000290 - 0x0002A0)
class AA_Food_C : public AActor : AActor
{ 
public:
	UStaticMeshComponent*                              StaticMesh;                                                 // 0x0290   (0x0008)  
	USceneComponent*                                   DefaultSceneRoot;                                           // 0x0298   (0x0008)  
};

/// Class /Game/WeaponMeshes/Bar/A_BarStojka.A_BarStojka_C
/// Size: 0x0028 (0x000290 - 0x0002B8)
class AA_BarStojka_C : public AActor : AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0290   (0x0008)  
	USceneComponent*                                   Scene;                                                      // 0x0298   (0x0008)  
	UStaticMeshComponent*                              StaticMesh;                                                 // 0x02A0   (0x0008)  
	USceneComponent*                                   DefaultSceneRoot;                                           // 0x02A8   (0x0008)  
	ASurvivalPlayer_C*                                 Player;                                                     // 0x02B0   (0x0008)  


	/// Functions
	// Function /Game/WeaponMeshes/Bar/A_BarStojka.A_BarStojka_C.OnFocused
	void OnFocused(APawn* Player, AActor* HighlightActor, UActorComponent* HighlightActorComponent, TEnumAsByte<E_InteractType>& InteractType, double& LateTime); // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Bar/A_BarStojka.A_BarStojka_C.GetActorType
	void GetActorType(TEnumAsByte<E_ActorType>& ActorType);                                                                  // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Bar/A_BarStojka.A_BarStojka_C.IsLocked?
	void IsLocked?(bool& Result);                                                                                            // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Bar/A_BarStojka.A_BarStojka_C.OnInteract
	void OnInteract(APawn* Player);                                                                                          // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Bar/A_BarStojka.A_BarStojka_C.OnInteract2
	void OnInteract2(APawn* Player);                                                                                         // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Bar/A_BarStojka.A_BarStojka_C.OnInteract3
	void OnInteract3(APawn* Player);                                                                                         // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Bar/A_BarStojka.A_BarStojka_C.OnLocalInteract
	void OnLocalInteract(APawn* Player);                                                                                     // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Bar/A_BarStojka.A_BarStojka_C.OnInteractVehicle
	void OnInteractVehicle(APawn* Player, int32_t SitIndex, bool SkipAnimation);                                             // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Bar/A_BarStojka.A_BarStojka_C.OnSeen
	void OnSeen(APawn* Player);                                                                                              // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Bar/A_BarStojka.A_BarStojka_C.OnBeginInteract
	void OnBeginInteract(APawn* Player);                                                                                     // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Bar/A_BarStojka.A_BarStojka_C.OnStopInteract
	void OnStopInteract(APawn* Player);                                                                                      // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Bar/A_BarStojka.A_BarStojka_C.OnLostFocus
	void OnLostFocus(APawn* Player);                                                                                         // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Bar/A_BarStojka.A_BarStojka_C.Run Lockpicking
	void Run Lockpicking();                                                                                                  // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Bar/A_BarStojka.A_BarStojka_C.OnSquadCheckComplete
	void OnSquadCheckComplete();                                                                                             // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Bar/A_BarStojka.A_BarStojka_C.Set3DWidgetVisibility
	void Set3DWidgetVisibility(bool Visible);                                                                                // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Bar/A_BarStojka.A_BarStojka_C.SetTutorial3DWidgetVisibility
	void SetTutorial3DWidgetVisibility(bool Visible);                                                                        // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Bar/A_BarStojka.A_BarStojka_C.DestroyInteractable
	void DestroyInteractable();                                                                                              // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Bar/A_BarStojka.A_BarStojka_C.SitEventServer
	void SitEventServer(ASurvivalPlayer_C* Player, bool Sit);                                                                // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Bar/A_BarStojka.A_BarStojka_C.SitEventMulti
	void SitEventMulti(ASurvivalPlayer_C* Player, bool Sit);                                                                 // [0x2407bf0] Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Bar/A_BarStojka.A_BarStojka_C.SitEvent
	void SitEvent(ASurvivalPlayer_C* Player, bool Sit);                                                                      // [0x2407bf0] Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Bar/A_BarStojka.A_BarStojka_C.ExecuteUbergraph_A_BarStojka
	void ExecuteUbergraph_A_BarStojka(int32_t EntryPoint);                                                                   // [0x2407bf0] Final                
};

/// Class /Game/WeaponMeshes/Bar/A_Alhocol.A_Alhocol_C
/// Size: 0x0020 (0x000290 - 0x0002B0)
class AA_Alhocol_C : public AActor : AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0290   (0x0008)  
	UStaticMeshComponent*                              StaticMesh;                                                 // 0x0298   (0x0008)  
	USceneComponent*                                   DefaultSceneRoot;                                           // 0x02A0   (0x0008)  
	UStaticMesh*                                       Bottle;                                                     // 0x02A8   (0x0008)  


	/// Functions
	// Function /Game/WeaponMeshes/Bar/A_Alhocol.A_Alhocol_C.ReceiveBeginPlay
	void ReceiveBeginPlay();                                                                                                 // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/WeaponMeshes/Bar/A_Alhocol.A_Alhocol_C.ExecuteUbergraph_A_Alhocol
	void ExecuteUbergraph_A_Alhocol(int32_t EntryPoint);                                                                     // [0x2407bf0] Final                
};

/// Class /Game/WeaponMeshes/Kompass/BP_Compass.BP_Compass_C
/// Size: 0x0050 (0x000290 - 0x0002E0)
class ABP_Compass_C : public AActor : AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0290   (0x0008)  
	UStaticMeshComponent*                              Kompass_strelka1;                                           // 0x0298   (0x0008)  
	UStaticMeshComponent*                              Kompass_strelka2;                                           // 0x02A0   (0x0008)  
	USkeletalMeshComponent*                            Compas;                                                     // 0x02A8   (0x0008)  
	ASurvivalPlayer_C*                                 survRef;                                                    // 0x02B0   (0x0008)  
	ABP_TeleportToRegion_C*                            HubRef;                                                     // 0x02B8   (0x0008)  
	ABP_DoorTeleport_C*                                StreetDoorRef;                                              // 0x02C0   (0x0008)  
	FVector                                            North;                                                      // 0x02C8   (0x0018)  


	/// Functions
	// Function /Game/WeaponMeshes/Kompass/BP_Compass.BP_Compass_C.ReceiveBeginPlay
	void ReceiveBeginPlay();                                                                                                 // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/WeaponMeshes/Kompass/BP_Compass.BP_Compass_C.ReceiveEndPlay
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);                                                          // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/WeaponMeshes/Kompass/BP_Compass.BP_Compass_C.ReceiveTick
	void ReceiveTick(float DeltaSeconds);                                                                                    // [0x2407bf0] Event|Public|BlueprintEvent 
	// Function /Game/WeaponMeshes/Kompass/BP_Compass.BP_Compass_C.ExecuteUbergraph_BP_Compass
	void ExecuteUbergraph_BP_Compass(int32_t EntryPoint);                                                                    // [0x2407bf0] Final                
};

/// Class /Game/WeaponMeshes/GPS/BP_GPS.BP_GPS_C
/// Size: 0x0008 (0x000290 - 0x000298)
class ABP_GPS_C : public AActor : AActor
{ 
public:
	USkeletalMeshComponent*                            Gps;                                                        // 0x0290   (0x0008)  
};

/// Class /Game/WeaponMeshes/Bar/BarParent.BarParent_C
/// Size: 0x0118 (0x000290 - 0x0003A8)
class ABarParent_C : public AActor : AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0290   (0x0008)  
	USceneComponent*                                   Start_Location4;                                            // 0x0298   (0x0008)  
	USceneComponent*                                   Start_Location3;                                            // 0x02A0   (0x0008)  
	USceneComponent*                                   Start_Location2;                                            // 0x02A8   (0x0008)  
	USceneComponent*                                   ExitDot;                                                    // 0x02B0   (0x0008)  
	UBoxComponent*                                     Box;                                                        // 0x02B8   (0x0008)  
	USceneComponent*                                   Start_Location1;                                            // 0x02C0   (0x0008)  
	UStaticMeshComponent*                              StaticMesh;                                                 // 0x02C8   (0x0008)  
	USceneComponent*                                   Scene;                                                      // 0x02D0   (0x0008)  
	UAnimMontage*                                      SitAnim;                                                    // 0x02D8   (0x0008)  
	UAnimMontage*                                      StartSit;                                                   // 0x02E0   (0x0008)  
	UAnimMontage*                                      EndSit;                                                     // 0x02E8   (0x0008)  
	TArray<FName>                                      Places;                                                     // 0x02F0   (0x0010)  
	TMap<FName, bool>                                  Place;                                                      // 0x0300   (0x0050)  
	UPlayerCutsceneComponent_C*                        CutsceneEnded;                                              // 0x0350   (0x0008)  
	ULevelSequence*                                    Sequence;                                                   // 0x0358   (0x0008)  
	bool                                               Sit;                                                        // 0x0360   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0361   (0x0007)  MISSED
	ASurvivalPlayer_C*                                 Player;                                                     // 0x0368   (0x0008)  
	ULevelSequence*                                    SequenceExit;                                               // 0x0370   (0x0008)  
	TArray<bool>                                       PlaceArray;                                                 // 0x0378   (0x0010)  
	int32_t                                            Index;                                                      // 0x0388   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x038C   (0x0004)  MISSED
	TArray<ASurvivalPlayer_C*>                         SitPlayers;                                                 // 0x0390   (0x0010)  
	UAnimMontage*                                      SitAnimFemale;                                              // 0x03A0   (0x0008)  


	/// Functions
	// Function /Game/WeaponMeshes/Bar/BarParent.BarParent_C.OnFocused
	void OnFocused(APawn* Player, AActor* HighlightActor, UActorComponent* HighlightActorComponent, TEnumAsByte<E_InteractType>& InteractType, double& LateTime); // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Bar/BarParent.BarParent_C.GetActorType
	void GetActorType(TEnumAsByte<E_ActorType>& ActorType);                                                                  // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Bar/BarParent.BarParent_C.IsLocked?
	void IsLocked?(bool& Result);                                                                                            // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Bar/BarParent.BarParent_C.OnExitBar
	void OnExitBar(int32_t PlaceIndex);                                                                                      // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Bar/BarParent.BarParent_C.FindEmptySlot
	void FindEmptySlot(USceneComponent*& Output, int32_t& Index);                                                            // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Bar/BarParent.BarParent_C.CheckPlaceByBool
	void CheckPlaceByBool(FName& StartPlace, FName& SitPlace);                                                               // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Bar/BarParent.BarParent_C.CheckPlace
	void CheckPlace(FName& StartPlace, FName& SitPlace);                                                                     // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Bar/BarParent.BarParent_C.OnNotifyEnd_B04013B842C91A74A0D4EB9ED97CBCD8
	void OnNotifyEnd_B04013B842C91A74A0D4EB9ED97CBCD8(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Bar/BarParent.BarParent_C.OnNotifyBegin_B04013B842C91A74A0D4EB9ED97CBCD8
	void OnNotifyBegin_B04013B842C91A74A0D4EB9ED97CBCD8(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Bar/BarParent.BarParent_C.OnInterrupted_B04013B842C91A74A0D4EB9ED97CBCD8
	void OnInterrupted_B04013B842C91A74A0D4EB9ED97CBCD8(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Bar/BarParent.BarParent_C.OnBlendOut_B04013B842C91A74A0D4EB9ED97CBCD8
	void OnBlendOut_B04013B842C91A74A0D4EB9ED97CBCD8(FName NotifyName);                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Bar/BarParent.BarParent_C.OnCompleted_B04013B842C91A74A0D4EB9ED97CBCD8
	void OnCompleted_B04013B842C91A74A0D4EB9ED97CBCD8(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Bar/BarParent.BarParent_C.SitEventServer
	void SitEventServer(ASurvivalPlayer_C* Player, bool Sit);                                                                // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Bar/BarParent.BarParent_C.DestroyInteractable
	void DestroyInteractable();                                                                                              // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Bar/BarParent.BarParent_C.SetTutorial3DWidgetVisibility
	void SetTutorial3DWidgetVisibility(bool Visible);                                                                        // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Bar/BarParent.BarParent_C.Set3DWidgetVisibility
	void Set3DWidgetVisibility(bool Visible);                                                                                // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Bar/BarParent.BarParent_C.OnSquadCheckComplete
	void OnSquadCheckComplete();                                                                                             // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Bar/BarParent.BarParent_C.Run Lockpicking
	void Run Lockpicking();                                                                                                  // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Bar/BarParent.BarParent_C.OnLostFocus
	void OnLostFocus(APawn* Player);                                                                                         // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Bar/BarParent.BarParent_C.OnStopInteract
	void OnStopInteract(APawn* Player);                                                                                      // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Bar/BarParent.BarParent_C.OnBeginInteract
	void OnBeginInteract(APawn* Player);                                                                                     // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Bar/BarParent.BarParent_C.OnSeen
	void OnSeen(APawn* Player);                                                                                              // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Bar/BarParent.BarParent_C.OnInteractVehicle
	void OnInteractVehicle(APawn* Player, int32_t SitIndex, bool SkipAnimation);                                             // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Bar/BarParent.BarParent_C.OnLocalInteract
	void OnLocalInteract(APawn* Player);                                                                                     // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Bar/BarParent.BarParent_C.OnInteract3
	void OnInteract3(APawn* Player);                                                                                         // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Bar/BarParent.BarParent_C.OnInteract2
	void OnInteract2(APawn* Player);                                                                                         // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Bar/BarParent.BarParent_C.OnInteract
	void OnInteract(APawn* Player);                                                                                          // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Bar/BarParent.BarParent_C.CutSceneExit
	void CutSceneExit(ASurvivalPlayer_C* Player);                                                                            // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Bar/BarParent.BarParent_C.CutsceneEnding
	void CutsceneEnding();                                                                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Bar/BarParent.BarParent_C.OnCutsceneStart
	void OnCutsceneStart(ASurvivalPlayer_C* Player);                                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Bar/BarParent.BarParent_C.ReceiveBeginPlay
	void ReceiveBeginPlay();                                                                                                 // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/WeaponMeshes/Bar/BarParent.BarParent_C.AddFoodPlaces
	void AddFoodPlaces();                                                                                                    // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Bar/BarParent.BarParent_C.SitEvent
	void SitEvent(ASurvivalPlayer_C* Player, bool Sit, int32_t Index);                                                       // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Bar/BarParent.BarParent_C.CollisionSwitcher
	void CollisionSwitcher(bool On?);                                                                                        // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Bar/BarParent.BarParent_C.SitEventMulti
	void SitEventMulti(ASurvivalPlayer_C* Player, bool Sit, int32_t Index);                                                  // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Bar/BarParent.BarParent_C.ExecuteUbergraph_BarParent
	void ExecuteUbergraph_BarParent(int32_t EntryPoint);                                                                     // [0x2407bf0] Final|HasDefaults    
};

/// Class /Game/WeaponMeshes/BP/BPI_WeaponAnimBP.BPI_WeaponAnimBP_C
/// Size: 0x0000 (0x000028 - 0x000028)
class UBPI_WeaponAnimBP_C : public UInterface : UInterface
{ 
public:
};

/// Class /Game/WeaponMeshes/GPS/Widgets/BPI_MapItem.BPI_MapItem_C
/// Size: 0x0000 (0x000028 - 0x000028)
class UBPI_MapItem_C : public UInterface : UInterface
{ 
public:
};

/// Class /Game/WeaponMeshes/GPS/Widgets/BPI_Map.BPI_Map_C
/// Size: 0x0000 (0x000028 - 0x000028)
class UBPI_Map_C : public UInterface : UInterface
{ 
public:
};

/// Class /Game/WeaponMeshes/Bar/ChairParent.ChairParent_C
/// Size: 0x0090 (0x000290 - 0x000320)
class AChairParent_C : public AActor : AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0290   (0x0008)  
	UArrowComponent*                                   Arrow;                                                      // 0x0298   (0x0008)  
	USceneComponent*                                   Scene1;                                                     // 0x02A0   (0x0008)  
	UStaticMeshComponent*                              StaticMesh1;                                                // 0x02A8   (0x0008)  
	UBoxComponent*                                     BoxZakaz;                                                   // 0x02B0   (0x0008)  
	USceneComponent*                                   ExitDot;                                                    // 0x02B8   (0x0008)  
	USceneComponent*                                   StartLocation;                                              // 0x02C0   (0x0008)  
	UStaticMeshComponent*                              StaticMesh;                                                 // 0x02C8   (0x0008)  
	USceneComponent*                                   Scene;                                                      // 0x02D0   (0x0008)  
	UBoxComponent*                                     Box;                                                        // 0x02D8   (0x0008)  
	UAnimMontage*                                      StartAnim;                                                  // 0x02E0   (0x0008)  
	UAnimMontage*                                      IdleAnim;                                                   // 0x02E8   (0x0008)  
	UAnimMontage*                                      EndAnim;                                                    // 0x02F0   (0x0008)  
	bool                                               Zanyato;                                                    // 0x02F8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x02F9   (0x0007)  MISSED
	UAnimMontage*                                      StartAnimFemale;                                            // 0x0300   (0x0008)  
	UAnimMontage*                                      IdleAnimFemale;                                             // 0x0308   (0x0008)  
	UAnimMontage*                                      EndAnimFemale;                                              // 0x0310   (0x0008)  
	ASurvivalPlayer_V2_C*                              As_Survival_Player_V2;                                      // 0x0318   (0x0008)  


	/// Functions
	// Function /Game/WeaponMeshes/Bar/ChairParent.ChairParent_C.OnFocused
	void OnFocused(APawn* Player, AActor* HighlightActor, UActorComponent* HighlightActorComponent, TEnumAsByte<E_InteractType>& InteractType, double& LateTime); // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Bar/ChairParent.ChairParent_C.GetActorType
	void GetActorType(TEnumAsByte<E_ActorType>& ActorType);                                                                  // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Bar/ChairParent.ChairParent_C.IsLocked?
	void IsLocked?(bool& Result);                                                                                            // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Bar/ChairParent.ChairParent_C.OnNotifyEnd_A0AD71D946455417EAAC7F94C6A4E463
	void OnNotifyEnd_A0AD71D946455417EAAC7F94C6A4E463(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Bar/ChairParent.ChairParent_C.OnNotifyBegin_A0AD71D946455417EAAC7F94C6A4E463
	void OnNotifyBegin_A0AD71D946455417EAAC7F94C6A4E463(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Bar/ChairParent.ChairParent_C.OnInterrupted_A0AD71D946455417EAAC7F94C6A4E463
	void OnInterrupted_A0AD71D946455417EAAC7F94C6A4E463(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Bar/ChairParent.ChairParent_C.OnBlendOut_A0AD71D946455417EAAC7F94C6A4E463
	void OnBlendOut_A0AD71D946455417EAAC7F94C6A4E463(FName NotifyName);                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Bar/ChairParent.ChairParent_C.OnCompleted_A0AD71D946455417EAAC7F94C6A4E463
	void OnCompleted_A0AD71D946455417EAAC7F94C6A4E463(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Bar/ChairParent.ChairParent_C.OnInteract
	void OnInteract(APawn* Player);                                                                                          // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Bar/ChairParent.ChairParent_C.OnInteract2
	void OnInteract2(APawn* Player);                                                                                         // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Bar/ChairParent.ChairParent_C.OnInteract3
	void OnInteract3(APawn* Player);                                                                                         // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Bar/ChairParent.ChairParent_C.OnLocalInteract
	void OnLocalInteract(APawn* Player);                                                                                     // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Bar/ChairParent.ChairParent_C.OnInteractVehicle
	void OnInteractVehicle(APawn* Player, int32_t SitIndex, bool SkipAnimation);                                             // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Bar/ChairParent.ChairParent_C.OnSeen
	void OnSeen(APawn* Player);                                                                                              // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Bar/ChairParent.ChairParent_C.OnBeginInteract
	void OnBeginInteract(APawn* Player);                                                                                     // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Bar/ChairParent.ChairParent_C.OnStopInteract
	void OnStopInteract(APawn* Player);                                                                                      // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Bar/ChairParent.ChairParent_C.OnLostFocus
	void OnLostFocus(APawn* Player);                                                                                         // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Bar/ChairParent.ChairParent_C.Run Lockpicking
	void Run Lockpicking();                                                                                                  // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Bar/ChairParent.ChairParent_C.OnSquadCheckComplete
	void OnSquadCheckComplete();                                                                                             // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Bar/ChairParent.ChairParent_C.Set3DWidgetVisibility
	void Set3DWidgetVisibility(bool Visible);                                                                                // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Bar/ChairParent.ChairParent_C.SetTutorial3DWidgetVisibility
	void SetTutorial3DWidgetVisibility(bool Visible);                                                                        // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Bar/ChairParent.ChairParent_C.DestroyInteractable
	void DestroyInteractable();                                                                                              // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Bar/ChairParent.ChairParent_C.StartChair
	void StartChair(ASurvivalPlayer_C* Player, bool OnTrain);                                                                // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Bar/ChairParent.ChairParent_C.SitEventServer
	void SitEventServer(ASurvivalPlayer_C* Player, bool Sit);                                                                // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Bar/ChairParent.ChairParent_C.SitEventMulti
	void SitEventMulti(ASurvivalPlayer_C* Player, bool Sit);                                                                 // [0x2407bf0] Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Bar/ChairParent.ChairParent_C.Leave
	void Leave();                                                                                                            // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Bar/ChairParent.ChairParent_C.ExecuteUbergraph_ChairParent
	void ExecuteUbergraph_ChairParent(int32_t EntryPoint);                                                                   // [0x2407bf0] Final|HasDefaults    
};

/// Class /Game/WeaponMeshes/Bar/BP_BarChair.BP_BarChair_C
/// Size: 0x0018 (0x000320 - 0x000338)
class ABP_BarChair_C : public AChairParent_C : AChairParent_C
{ 
public:
	UStaticMeshComponent*                              Cylinder;                                                   // 0x0320   (0x0008)  
	UArrowComponent*                                   Arrow;                                                      // 0x0328   (0x0008)  
	USceneComponent*                                   FoodPlace;                                                  // 0x0330   (0x0008)  
};

/// Class /Game/WeaponMeshes/Bar/BP_RoundedSofa.BP_RoundedSofa_C
/// Size: 0x00A0 (0x0003A8 - 0x000448)
class ABP_RoundedSofa_C : public ABarParent_C : ABarParent_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x03A8   (0x0008)  
	USceneComponent*                                   FoodPlace3;                                                 // 0x03B0   (0x0008)  
	USceneComponent*                                   FoodPlace4;                                                 // 0x03B8   (0x0008)  
	USceneComponent*                                   FoodPlace2;                                                 // 0x03C0   (0x0008)  
	USceneComponent*                                   Scene1;                                                     // 0x03C8   (0x0008)  
	USceneComponent*                                   FoodPlace1;                                                 // 0x03D0   (0x0008)  
	UBoxComponent*                                     BoxZakaz;                                                   // 0x03D8   (0x0008)  
	UStaticMeshComponent*                              Sphere3;                                                    // 0x03E0   (0x0008)  
	UStaticMeshComponent*                              Sphere2;                                                    // 0x03E8   (0x0008)  
	UStaticMeshComponent*                              Sphere1;                                                    // 0x03F0   (0x0008)  
	UStaticMeshComponent*                              Sphere;                                                     // 0x03F8   (0x0008)  
	UStaticMeshComponent*                              Table;                                                      // 0x0400   (0x0008)  
	UArrowComponent*                                   Arrow3;                                                     // 0x0408   (0x0008)  
	UArrowComponent*                                   Arrow2;                                                     // 0x0410   (0x0008)  
	UArrowComponent*                                   Arrow1;                                                     // 0x0418   (0x0008)  
	UArrowComponent*                                   Arrow;                                                      // 0x0420   (0x0008)  
	TArray<USceneComponent*>                           Array;                                                      // 0x0428   (0x0010)  
	TArray<ASurvivalPlayer_C*>                         Players;                                                    // 0x0438   (0x0010)  


	/// Functions
	// Function /Game/WeaponMeshes/Bar/BP_RoundedSofa.BP_RoundedSofa_C.OnFinishFood
	void OnFinishFood(int32_t Index);                                                                                        // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Bar/BP_RoundedSofa.BP_RoundedSofa_C.OccupateFoodPlace
	void OccupateFoodPlace(int32_t Index, ASurvivalPlayer_C* Target, USceneComponent*& Output);                              // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Bar/BP_RoundedSofa.BP_RoundedSofa_C.AddFoodPlaces
	void AddFoodPlaces();                                                                                                    // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Bar/BP_RoundedSofa.BP_RoundedSofa_C.SitEventMulti
	void SitEventMulti(ASurvivalPlayer_C* Player, bool Sit, int32_t Index);                                                  // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Bar/BP_RoundedSofa.BP_RoundedSofa_C.CollisionSwitcher
	void CollisionSwitcher(bool On?);                                                                                        // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/WeaponMeshes/Bar/BP_RoundedSofa.BP_RoundedSofa_C.ExecuteUbergraph_BP_RoundedSofa
	void ExecuteUbergraph_BP_RoundedSofa(int32_t EntryPoint);                                                                // [0x2407bf0] Final|HasDefaults    
};

/// Class /Game/WeaponMeshes/GPS/Widgets/IconComponent.IconComponent_C
/// Size: 0x0018 (0x0000A0 - 0x0000B8)
class UIconComponent_C : public UActorComponent : UActorComponent
{ 
public:
	UTexture2D*                                        Icon;                                                       // 0x00A0   (0x0008)  
	FVector2D                                          IconSize;                                                   // 0x00A8   (0x0010)  


	/// Functions
	// Function /Game/WeaponMeshes/GPS/Widgets/IconComponent.IconComponent_C.GetMapIconData
	void GetMapIconData(FVector& Location, UTexture2D*& Icon, FVector2D& IconSize, double& RotationYaw, AActor*& WorldActor, FText& Name, FText& Description); // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/WeaponMeshes/M4/BP_M4_main_menu.BP_M4_main_menu_C
/// Size: 0x0048 (0x000290 - 0x0002D8)
class ABP_M4_main_menu_C : public AActor : AActor
{ 
public:
	UStaticMeshComponent*                              BCM_Gunfighter_AR15_FDE;                                    // 0x0290   (0x0008)  
	UStaticMeshComponent*                              M4A1_PistolGrip;                                            // 0x0298   (0x0008)  
	UStaticMeshComponent*                              M4A1_Silencer;                                              // 0x02A0   (0x0008)  
	UStaticMeshComponent*                              M4A1_CarbonHandguard;                                       // 0x02A8   (0x0008)  
	UStaticMeshComponent*                              PMAG30;                                                     // 0x02B0   (0x0008)  
	UStaticMeshComponent*                              Front_Reflex_Sight_Down;                                    // 0x02B8   (0x0008)  
	UStaticMeshComponent*                              Sight_4X;                                                   // 0x02C0   (0x0008)  
	USkeletalMeshComponent*                            M4_SkeletalMesh;                                            // 0x02C8   (0x0008)  
	USceneComponent*                                   DefaultSceneRoot;                                           // 0x02D0   (0x0008)  
};

/// Enum /Game/WeaponMeshes/Gym/E_Training.E_Training
/// Size: 0x05
enum E_Training : uint8_t
{
	E_Training__NewEnumerator00                                                      = 0,
	E_Training__NewEnumerator11                                                      = 1,
	E_Training__NewEnumerator22                                                      = 2,
	E_Training__NewEnumerator33                                                      = 3,
	E_Training__E_MAX4                                                               = 4
};

