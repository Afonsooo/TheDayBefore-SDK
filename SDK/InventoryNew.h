
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package InventoryNew.

/// Struct /Game/InventoryNew/S_Item.S_Item
/// Size: 0x0090 (0x000000 - 0x000090)
struct FS_Item
{ 
	FName                                              ItemID_2_3354D4B349662F28138C2B860CBFEC7A;                  // 0x0000   (0x0008)  
	EItemType                                          ItemType_37_48EBD9FF46EE3B76DFD01B920C322940;               // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0009   (0x0007)  MISSED
	TArray<FEffectContructor>                          Effects_8_8A9CB89A4CABDC38DA660A8D31431946;                 // 0x0010   (0x0010)  
	int32_t                                            SizeX_14_2ED1155346EAE18A57FE1F982B6A0999;                  // 0x0020   (0x0004)  
	int32_t                                            SizeY_13_712469094E57F819B2E50CA4C6C90CF2;                  // 0x0024   (0x0004)  
	int32_t                                            MaxStack_19_682FCDCB4A39944E5F933790C7E8E7C7;               // 0x0028   (0x0004)  
	bool                                               IsUsable_28_D820291D4B1BF3DCCFD78AAA5178AC16;               // 0x002C   (0x0001)  
	bool                                               IsEquipable_29_49541037484B56B0F64A3980781CB927;            // 0x002D   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x002E   (0x0002)  MISSED
	TWeakObjectPtr<UPaperSprite*>                      Icon_39_B543B9644F6931A12C3EFE88A4E95B24;                   // 0x0030   (0x0030)  
	TWeakObjectPtr<UStaticMesh*>                       Mesh_40_54D4CCE04E9FD087217CAD9CBF7C3F98;                   // 0x0060   (0x0030)  
};

/// Class /Game/InventoryNew/BP_QuestItemOld.BP_QuestItemOld_C
/// Size: 0x0018 (0x000290 - 0x0002A8)
class ABP_QuestItemOld_C : public AActor : AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0290   (0x0008)  
	UStaticMeshComponent*                              StaticMesh;                                                 // 0x0298   (0x0008)  
	UPickupComponent_C*                                PickupComponent;                                            // 0x02A0   (0x0008)  


	/// Functions
	// Function /Game/InventoryNew/BP_QuestItemOld.BP_QuestItemOld_C.IsLocked?
	void IsLocked?(bool& Result);                                                                                            // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/InventoryNew/BP_QuestItemOld.BP_QuestItemOld_C.GetActorType
	void GetActorType(TEnumAsByte<E_ActorType>& ActorType);                                                                  // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/InventoryNew/BP_QuestItemOld.BP_QuestItemOld_C.OnFocused
	void OnFocused(APawn* Player, AActor* HighlightActor, UActorComponent* HighlightActorComponent, TEnumAsByte<E_InteractType>& InteractType, double& LateTime); // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/InventoryNew/BP_QuestItemOld.BP_QuestItemOld_C.OnLoaded_A2789CAD4B7C1935C54F7F855D187AD0
	void OnLoaded_A2789CAD4B7C1935C54F7F855D187AD0(UObject* Loaded);                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/InventoryNew/BP_QuestItemOld.BP_QuestItemOld_C.OnInteract
	void OnInteract(APawn* Player);                                                                                          // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/InventoryNew/BP_QuestItemOld.BP_QuestItemOld_C.OnInteract2
	void OnInteract2(APawn* Player);                                                                                         // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/InventoryNew/BP_QuestItemOld.BP_QuestItemOld_C.OnInteract3
	void OnInteract3(APawn* Player);                                                                                         // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/InventoryNew/BP_QuestItemOld.BP_QuestItemOld_C.OnInteractVehicle
	void OnInteractVehicle(APawn* Player, int32_t SitIndex, bool SkipAnimation);                                             // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/InventoryNew/BP_QuestItemOld.BP_QuestItemOld_C.OnSeen
	void OnSeen(APawn* Player);                                                                                              // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/InventoryNew/BP_QuestItemOld.BP_QuestItemOld_C.OnBeginInteract
	void OnBeginInteract(APawn* Player);                                                                                     // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/InventoryNew/BP_QuestItemOld.BP_QuestItemOld_C.OnStopInteract
	void OnStopInteract(APawn* Player);                                                                                      // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/InventoryNew/BP_QuestItemOld.BP_QuestItemOld_C.OnLostFocus
	void OnLostFocus(APawn* Player);                                                                                         // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/InventoryNew/BP_QuestItemOld.BP_QuestItemOld_C.Run Lockpicking
	void Run Lockpicking();                                                                                                  // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/InventoryNew/BP_QuestItemOld.BP_QuestItemOld_C.OnSquadCheckComplete
	void OnSquadCheckComplete();                                                                                             // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/InventoryNew/BP_QuestItemOld.BP_QuestItemOld_C.Set3DWidgetVisibility
	void Set3DWidgetVisibility(bool Visible);                                                                                // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/InventoryNew/BP_QuestItemOld.BP_QuestItemOld_C.SetTutorial3DWidgetVisibility
	void SetTutorial3DWidgetVisibility(bool Visible);                                                                        // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/InventoryNew/BP_QuestItemOld.BP_QuestItemOld_C.DestroyInteractable
	void DestroyInteractable();                                                                                              // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/InventoryNew/BP_QuestItemOld.BP_QuestItemOld_C.ReceiveBeginPlay
	void ReceiveBeginPlay();                                                                                                 // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/InventoryNew/BP_QuestItemOld.BP_QuestItemOld_C.SetItem
	void SetItem();                                                                                                          // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/InventoryNew/BP_QuestItemOld.BP_QuestItemOld_C.AddMark
	void AddMark();                                                                                                          // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/InventoryNew/BP_QuestItemOld.BP_QuestItemOld_C.OnLocalInteract
	void OnLocalInteract(APawn* Player);                                                                                     // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/InventoryNew/BP_QuestItemOld.BP_QuestItemOld_C.CreateItem
	void CreateItem(FName Item ID);                                                                                          // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/InventoryNew/BP_QuestItemOld.BP_QuestItemOld_C.ExecuteUbergraph_BP_QuestItemOld
	void ExecuteUbergraph_BP_QuestItemOld(int32_t EntryPoint);                                                               // [0x2407bf0] Final|HasDefaults    
};

/// Class /Game/InventoryNew/O_InventoryItem.O_InventoryItem_C
/// Size: 0x0011 (0x000028 - 0x000039)
class UO_InventoryItem_C : public UObject : UObject
{ 
public:
	int32_t                                            PosX;                                                       // 0x0028   (0x0004)  
	int32_t                                            PosY;                                                       // 0x002C   (0x0004)  
	UInventoryComponent_C*                             OwningInventory;                                            // 0x0030   (0x0008)  
	bool                                               Equipped;                                                   // 0x0038   (0x0001)  


	/// Functions
	// Function /Game/InventoryNew/O_InventoryItem.O_InventoryItem_C.IsInSlot
	void IsInSlot(int32_t X, int32_t Y, bool& InSlot);                                                                       // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/InventoryNew/O_InventoryItem.O_InventoryItem_C.GetSize
	void GetSize(int32_t& X, int32_t& Y);                                                                                    // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/InventoryNew/O_InventoryItem.O_InventoryItem_C.ItemAddedToInventory
	void ItemAddedToInventory(UInventoryComponent_C* Inventory, int32_t X, int32_t Y);                                       // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/InventoryNew/O_InventoryItem.O_InventoryItem_C.SetCount
	void SetCount(int32_t Count);                                                                                            // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/InventoryNew/O_InventoryItem.O_InventoryItem_C.GetDurability
	void GetDurability();                                                                                                    // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/InventoryNew/O_InventoryItem.O_InventoryItem_C.GetCount
	void GetCount(int32_t& Count);                                                                                           // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
};

/// Class /Game/InventoryNew/BP_Binoculars.BP_Binoculars_C
/// Size: 0x0018 (0x000290 - 0x0002A8)
class ABP_Binoculars_C : public AActor : AActor
{ 
public:
	UStaticMeshComponent*                              StaticMesh;                                                 // 0x0290   (0x0008)  
	USceneComponent*                                   SceneRoot;                                                  // 0x0298   (0x0008)  
	ABP_LinearMotionBlurCage_C*                        MB_Cage;                                                    // 0x02A0   (0x0008)  
};

/// Class /Game/InventoryNew/O_ItemState.O_ItemState_C
/// Size: 0x00A5 (0x000028 - 0x0000CD)
class UO_ItemState_C : public UObject : UObject
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0028   (0x0008)  
	FS_Item                                            Item;                                                       // 0x0030   (0x0090)  
	int32_t                                            Count;                                                      // 0x00C0   (0x0004)  
	int32_t                                            CurrentDurability;                                          // 0x00C4   (0x0004)  
	int32_t                                            WeaponAmmoCount;                                            // 0x00C8   (0x0004)  
	bool                                               ItemInited;                                                 // 0x00CC   (0x0001)  


	/// Functions
	// Function /Game/InventoryNew/O_ItemState.O_ItemState_C.CopyItem
	void CopyItem(AActor* Owner, UO_ItemState_C*& CopiedItem);                                                               // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/InventoryNew/O_ItemState.O_ItemState_C.GetSize
	void GetSize(int32_t& SizeX, int32_t& SizeY);                                                                            // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/InventoryNew/O_ItemState.O_ItemState_C.Init
	void Init();                                                                                                             // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/InventoryNew/O_ItemState.O_ItemState_C.ExecuteUbergraph_O_ItemState
	void ExecuteUbergraph_O_ItemState(int32_t EntryPoint);                                                                   // [0x2407bf0] Final                
};

/// Class /Game/InventoryNew/InventoryComponent.InventoryComponent_C
/// Size: 0x0008 (0x0000A0 - 0x0000A8)
class UInventoryComponent_C : public UActorComponent : UActorComponent
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x00A0   (0x0008)  


	/// Functions
	// Function /Game/InventoryNew/InventoryComponent.InventoryComponent_C.ReceiveBeginPlay
	void ReceiveBeginPlay();                                                                                                 // [0x2407bf0] Event|Public|BlueprintEvent 
	// Function /Game/InventoryNew/InventoryComponent.InventoryComponent_C.ExecuteUbergraph_InventoryComponent
	void ExecuteUbergraph_InventoryComponent(int32_t EntryPoint);                                                            // [0x2407bf0] Final                
};

/// Class /Game/InventoryNew/A_Item.A_Item_C
/// Size: 0x02C3 (0x000290 - 0x000553)
class AA_Item_C : public AActor : AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0290   (0x0008)  
	USmoothSync*                                       SmoothSync;                                                 // 0x0298   (0x0008)  
	UStaticMeshComponent*                              StaticMesh;                                                 // 0x02A0   (0x0008)  
	UChildActorComponent*                              WeaponPlaceholder;                                          // 0x02A8   (0x0008)  
	UHighlightMesh_C*                                  HighlightMesh;                                              // 0x02B0   (0x0008)  
	UPickupComponent_C*                                PickupComponent;                                            // 0x02B8   (0x0008)  
	UO_ItemState_C*                                    ItemState;                                                  // 0x02C0   (0x0008)  
	FString                                            Name;                                                       // 0x02C8   (0x0010)  
	int32_t                                            Count;                                                      // 0x02D8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x02DC   (0x0004)  MISSED
	UInventoryComponent_C*                             OwningInventory;                                            // 0x02E0   (0x0008)  
	TArray<USceneComponent*>                           Components;                                                 // 0x02E8   (0x0010)  
	TArray<FContainerPickupsInfo>                      MPContainerData;                                            // 0x02F8   (0x0010)  
	TArray<FContainerPickupsInfo>                      MPContainerItem;                                            // 0x0308   (0x0010)  
	FTimerHandle                                       Timer;                                                      // 0x0318   (0x0008)  
	double                                             TimeToSelfDestroyOnServer;                                  // 0x0320   (0x0008)  
	AWeaponPlaceholder_C*                              WeaponPl;                                                   // 0x0328   (0x0008)  
	FFItemInfo                                         ItemInfo;                                                   // 0x0330   (0x0220)  
	bool                                               PrevLineTraceResult;                                        // 0x0550   (0x0001)  
	bool                                               InteractingAnimation;                                       // 0x0551   (0x0001)  
	bool                                               IsWeaponItem;                                               // 0x0552   (0x0001)  


	/// Functions
	// Function /Game/InventoryNew/A_Item.A_Item_C.HasTag
	void HasTag(FString Tag, bool& HasTag);                                                                                  // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/InventoryNew/A_Item.A_Item_C.IsLocked?
	void IsLocked?(bool& Result);                                                                                            // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/InventoryNew/A_Item.A_Item_C.GetActorType
	void GetActorType(TEnumAsByte<E_ActorType>& ActorType);                                                                  // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/InventoryNew/A_Item.A_Item_C.OnFocused
	void OnFocused(APawn* Player, AActor* HighlightActor, UActorComponent* HighlightActorComponent, TEnumAsByte<E_InteractType>& InteractType, double& LateTime); // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/InventoryNew/A_Item.A_Item_C.OnRep_ItemInfo
	void OnRep_ItemInfo();                                                                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/InventoryNew/A_Item.A_Item_C.ValidateWeapon
	void ValidateWeapon(bool& Result);                                                                                       // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/InventoryNew/A_Item.A_Item_C.OnRep_WeaponPl
	void OnRep_WeaponPl();                                                                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/InventoryNew/A_Item.A_Item_C.IsSomethingOnA Way
	bool IsSomethingOnA Way();                                                                                               // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/InventoryNew/A_Item.A_Item_C.SetAttachments
	void SetAttachments(AWeaponPlaceholder_C* WeaponPlaceholder, FFItemInfo& FItemInfo);                                     // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/InventoryNew/A_Item.A_Item_C.UserConstructionScript
	void UserConstructionScript();                                                                                           // [0x2407bf0] Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/InventoryNew/A_Item.A_Item_C.OnLoaded_0BB85B6D489E01394E6284BCBF05E250
	void OnLoaded_0BB85B6D489E01394E6284BCBF05E250(UObject* Loaded);                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/InventoryNew/A_Item.A_Item_C.OnLoaded_8D47720B4D54BD33208329A6A1DDDCE5
	void OnLoaded_8D47720B4D54BD33208329A6A1DDDCE5(UObject* Loaded);                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/InventoryNew/A_Item.A_Item_C.StartHighlight
	void StartHighlight();                                                                                                   // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/InventoryNew/A_Item.A_Item_C.EndHighlight
	void EndHighlight();                                                                                                     // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/InventoryNew/A_Item.A_Item_C.OnInteract2
	void OnInteract2(APawn* Player);                                                                                         // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/InventoryNew/A_Item.A_Item_C.OnInteract3
	void OnInteract3(APawn* Player);                                                                                         // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/InventoryNew/A_Item.A_Item_C.OnLocalInteract
	void OnLocalInteract(APawn* Player);                                                                                     // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/InventoryNew/A_Item.A_Item_C.OnInteractVehicle
	void OnInteractVehicle(APawn* Player, int32_t SitIndex, bool SkipAnimation);                                             // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/InventoryNew/A_Item.A_Item_C.OnSeen
	void OnSeen(APawn* Player);                                                                                              // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/InventoryNew/A_Item.A_Item_C.OnLostFocus
	void OnLostFocus(APawn* Player);                                                                                         // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/InventoryNew/A_Item.A_Item_C.Run Lockpicking
	void Run Lockpicking();                                                                                                  // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/InventoryNew/A_Item.A_Item_C.OnSquadCheckComplete
	void OnSquadCheckComplete();                                                                                             // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/InventoryNew/A_Item.A_Item_C.Set3DWidgetVisibility
	void Set3DWidgetVisibility(bool Visible);                                                                                // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/InventoryNew/A_Item.A_Item_C.SetTutorial3DWidgetVisibility
	void SetTutorial3DWidgetVisibility(bool Visible);                                                                        // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/InventoryNew/A_Item.A_Item_C.DestroyInteractable
	void DestroyInteractable();                                                                                              // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/InventoryNew/A_Item.A_Item_C.ReceiveBeginPlay
	void ReceiveBeginPlay();                                                                                                 // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/InventoryNew/A_Item.A_Item_C.ValidateItem
	void ValidateItem();                                                                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/InventoryNew/A_Item.A_Item_C.OnInteract
	void OnInteract(APawn* Player);                                                                                          // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/InventoryNew/A_Item.A_Item_C.StartTimer
	void StartTimer();                                                                                                       // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/InventoryNew/A_Item.A_Item_C.SetTimer
	void SetTimer();                                                                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/InventoryNew/A_Item.A_Item_C.OnBeginInteract
	void OnBeginInteract(APawn* Player);                                                                                     // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/InventoryNew/A_Item.A_Item_C.OnStopInteract
	void OnStopInteract(APawn* Player);                                                                                      // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/InventoryNew/A_Item.A_Item_C.InitWeaponPlaceholder
	void InitWeaponPlaceholder(FFItemInfo FItemInfo, AWeaponPlaceholder_C* WraponPlaceholder);                               // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/InventoryNew/A_Item.A_Item_C.BndEvt__A_Item_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentSleepSignature__DelegateSignature
	void BndEvt__A_Item_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentSleepSignature__DelegateSignature(UPrimitiveComponent* SleepingComponent, FName BoneName); // [0x2407bf0] BlueprintEvent       
	// Function /Game/InventoryNew/A_Item.A_Item_C.AddPickupTag
	void AddPickupTag();                                                                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/InventoryNew/A_Item.A_Item_C.UpdateItemInfo_Serv
	void UpdateItemInfo_Serv(FFItemInfo ItemInfo);                                                                           // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/InventoryNew/A_Item.A_Item_C.RemoveProcessingTag
	void RemoveProcessingTag();                                                                                              // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/InventoryNew/A_Item.A_Item_C.AddProcessingTag
	void AddProcessingTag();                                                                                                 // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/InventoryNew/A_Item.A_Item_C.ExecuteUbergraph_A_Item
	void ExecuteUbergraph_A_Item(int32_t EntryPoint);                                                                        // [0x2407bf0] Final|HasDefaults    
};

/// Class /Game/InventoryNew/BPC_Binoculars.BPC_Binoculars_C
/// Size: 0x0064 (0x0000A0 - 0x000104)
class UBPC_Binoculars_C : public UActorComponent : UActorComponent
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x00A0   (0x0008)  
	bool                                               bIsLookThroughBinoculars;                                   // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x00A9   (0x0007)  MISSED
	ASurvivalPlayer_C*                                 CharRef;                                                    // 0x00B0   (0x0008)  
	double                                             Aperture__F_stop_;                                          // 0x00B8   (0x0008)  
	double                                             Maximum_Aperture__Min_F_stop_;                              // 0x00C0   (0x0008)  
	double                                             Focal_Distance;                                             // 0x00C8   (0x0008)  
	double                                             Depth_Blur_Km_For_50_;                                      // 0x00D0   (0x0008)  
	double                                             Depth_Blur_Radius;                                          // 0x00D8   (0x0008)  
	ABP_Binoculars_C*                                  BP_Binoculars;                                              // 0x00E0   (0x0008)  
	double                                             CameraFOV;                                                  // 0x00E8   (0x0008)  
	FMulticastInlineDelegate                           OnLookThroughBinocularsChanged;                             // 0x00F0   (0x0010)  
	float                                              UsualCameraFOV;                                             // 0x0100   (0x0004)  


	/// Functions
	// Function /Game/InventoryNew/BPC_Binoculars.BPC_Binoculars_C.HideBinocularInGame
	void HideBinocularInGame(bool bIsHidden);                                                                                // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/InventoryNew/BPC_Binoculars.BPC_Binoculars_C.RemoveBinoculars
	void RemoveBinoculars();                                                                                                 // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/InventoryNew/BPC_Binoculars.BPC_Binoculars_C.SpawnBinoculars
	void SpawnBinoculars();                                                                                                  // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/InventoryNew/BPC_Binoculars.BPC_Binoculars_C.OnRep_bIsLookThroughBinoculars
	void OnRep_bIsLookThroughBinoculars();                                                                                   // [0x2407bf0] HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/InventoryNew/BPC_Binoculars.BPC_Binoculars_C.InpActEvt_ZoomIn_K2Node_InputActionEvent
	void InpActEvt_ZoomIn_K2Node_InputActionEvent(FKey Key);                                                                 // [0x2407bf0] BlueprintEvent       
	// Function /Game/InventoryNew/BPC_Binoculars.BPC_Binoculars_C.InpActEvt_ZoomOut_K2Node_InputActionEvent
	void InpActEvt_ZoomOut_K2Node_InputActionEvent(FKey Key);                                                                // [0x2407bf0] BlueprintEvent       
	// Function /Game/InventoryNew/BPC_Binoculars.BPC_Binoculars_C.OnNotifyEnd_AE5C42014C2633295DD80685A1D16528
	void OnNotifyEnd_AE5C42014C2633295DD80685A1D16528(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/InventoryNew/BPC_Binoculars.BPC_Binoculars_C.OnNotifyBegin_AE5C42014C2633295DD80685A1D16528
	void OnNotifyBegin_AE5C42014C2633295DD80685A1D16528(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/InventoryNew/BPC_Binoculars.BPC_Binoculars_C.OnInterrupted_AE5C42014C2633295DD80685A1D16528
	void OnInterrupted_AE5C42014C2633295DD80685A1D16528(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/InventoryNew/BPC_Binoculars.BPC_Binoculars_C.OnBlendOut_AE5C42014C2633295DD80685A1D16528
	void OnBlendOut_AE5C42014C2633295DD80685A1D16528(FName NotifyName);                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/InventoryNew/BPC_Binoculars.BPC_Binoculars_C.OnCompleted_AE5C42014C2633295DD80685A1D16528
	void OnCompleted_AE5C42014C2633295DD80685A1D16528(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/InventoryNew/BPC_Binoculars.BPC_Binoculars_C.OnNotifyEnd_2CFB31634500C45E62F961970FE3B055
	void OnNotifyEnd_2CFB31634500C45E62F961970FE3B055(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/InventoryNew/BPC_Binoculars.BPC_Binoculars_C.OnNotifyBegin_2CFB31634500C45E62F961970FE3B055
	void OnNotifyBegin_2CFB31634500C45E62F961970FE3B055(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/InventoryNew/BPC_Binoculars.BPC_Binoculars_C.OnInterrupted_2CFB31634500C45E62F961970FE3B055
	void OnInterrupted_2CFB31634500C45E62F961970FE3B055(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/InventoryNew/BPC_Binoculars.BPC_Binoculars_C.OnBlendOut_2CFB31634500C45E62F961970FE3B055
	void OnBlendOut_2CFB31634500C45E62F961970FE3B055(FName NotifyName);                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/InventoryNew/BPC_Binoculars.BPC_Binoculars_C.OnCompleted_2CFB31634500C45E62F961970FE3B055
	void OnCompleted_2CFB31634500C45E62F961970FE3B055(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/InventoryNew/BPC_Binoculars.BPC_Binoculars_C.OnNotifyEnd_848C5EAA4C1F4E4B87C1F1AA7EEF4709
	void OnNotifyEnd_848C5EAA4C1F4E4B87C1F1AA7EEF4709(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/InventoryNew/BPC_Binoculars.BPC_Binoculars_C.OnNotifyBegin_848C5EAA4C1F4E4B87C1F1AA7EEF4709
	void OnNotifyBegin_848C5EAA4C1F4E4B87C1F1AA7EEF4709(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/InventoryNew/BPC_Binoculars.BPC_Binoculars_C.OnInterrupted_848C5EAA4C1F4E4B87C1F1AA7EEF4709
	void OnInterrupted_848C5EAA4C1F4E4B87C1F1AA7EEF4709(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/InventoryNew/BPC_Binoculars.BPC_Binoculars_C.OnBlendOut_848C5EAA4C1F4E4B87C1F1AA7EEF4709
	void OnBlendOut_848C5EAA4C1F4E4B87C1F1AA7EEF4709(FName NotifyName);                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/InventoryNew/BPC_Binoculars.BPC_Binoculars_C.OnCompleted_848C5EAA4C1F4E4B87C1F1AA7EEF4709
	void OnCompleted_848C5EAA4C1F4E4B87C1F1AA7EEF4709(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/InventoryNew/BPC_Binoculars.BPC_Binoculars_C.OnLoaded_00B5C9554485E7C9F93346A57A73B03B
	void OnLoaded_00B5C9554485E7C9F93346A57A73B03B(UObject* Loaded);                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/InventoryNew/BPC_Binoculars.BPC_Binoculars_C.OnLoaded_5E3F9A4049E086018906CA98F305BE56
	void OnLoaded_5E3F9A4049E086018906CA98F305BE56(UObject* Loaded);                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/InventoryNew/BPC_Binoculars.BPC_Binoculars_C.OnLoaded_5F22B6EA4499029B1F2ADFB52BBF83A7
	void OnLoaded_5F22B6EA4499029B1F2ADFB52BBF83A7(UObject* Loaded);                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/InventoryNew/BPC_Binoculars.BPC_Binoculars_C.SetLocalPlayerParamsEquip
	void SetLocalPlayerParamsEquip();                                                                                        // [0x2407bf0] Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent 
	// Function /Game/InventoryNew/BPC_Binoculars.BPC_Binoculars_C.SetLocalPlayerParamsUnequip
	void SetLocalPlayerParamsUnequip();                                                                                      // [0x2407bf0] Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent 
	// Function /Game/InventoryNew/BPC_Binoculars.BPC_Binoculars_C.ReceiveBeginPlay
	void ReceiveBeginPlay();                                                                                                 // [0x2407bf0] Event|Public|BlueprintEvent 
	// Function /Game/InventoryNew/BPC_Binoculars.BPC_Binoculars_C.PlayUnequipAnimEvent
	void PlayUnequipAnimEvent();                                                                                             // [0x2407bf0] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/InventoryNew/BPC_Binoculars.BPC_Binoculars_C.ResetFOV
	void ResetFOV();                                                                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/InventoryNew/BPC_Binoculars.BPC_Binoculars_C.OffStateEquipSurv
	void OffStateEquipSurv();                                                                                                // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/InventoryNew/BPC_Binoculars.BPC_Binoculars_C.SetCameraAndFOV
	void SetCameraAndFOV();                                                                                                  // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/InventoryNew/BPC_Binoculars.BPC_Binoculars_C.PlayAnimEquipEvent
	void PlayAnimEquipEvent();                                                                                               // [0x2407bf0] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/InventoryNew/BPC_Binoculars.BPC_Binoculars_C.SetUsualCameraFOV
	void SetUsualCameraFOV();                                                                                                // [0x2407bf0] Net|NetClient|BlueprintCallable|BlueprintEvent 
	// Function /Game/InventoryNew/BPC_Binoculars.BPC_Binoculars_C.ShowBinocularHintClient
	void ShowBinocularHintClient(bool Show);                                                                                 // [0x2407bf0] Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent 
	// Function /Game/InventoryNew/BPC_Binoculars.BPC_Binoculars_C.ExecuteUbergraph_BPC_Binoculars
	void ExecuteUbergraph_BPC_Binoculars(int32_t EntryPoint);                                                                // [0x2407bf0] Final|HasDefaults    
	// Function /Game/InventoryNew/BPC_Binoculars.BPC_Binoculars_C.OnLookThroughBinocularsChanged__DelegateSignature
	void OnLookThroughBinocularsChanged__DelegateSignature();                                                                // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

