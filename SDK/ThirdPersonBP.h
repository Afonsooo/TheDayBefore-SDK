
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package ThirdPersonBP.

/// Class /Game/ThirdPersonBP/Blueprints/BPI_GameMode.BPI_GameMode_C
/// Size: 0x0000 (0x000028 - 0x000028)
class UBPI_GameMode_C : public UInterface : UInterface
{ 
public:
};

/// Class /Game/ThirdPersonBP/Blueprints/TDB_GameMode.TDB_GameMode_C
/// Size: 0x0524 (0x0003E0 - 0x000904)
class ATDB_GameMode_C : public ASurvivalGameMode : ASurvivalGameMode
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x03E0   (0x0008)  
	UAgonesComponent*                                  Agones;                                                     // 0x03E8   (0x0008)  
	UPlayerSceneLoader_C*                              PlayerSceneLoader;                                          // 0x03F0   (0x0008)  
	USceneComponent*                                   DefaultSceneRoot;                                           // 0x03F8   (0x0008)  
	int32_t                                            UniqueId;                                                   // 0x0400   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0404   (0x0004)  MISSED
	FMulticastInlineDelegate                           OnLevelLoaded;                                              // 0x0408   (0x0010)  
	TArray<AActor*>                                    SpawnedPlayers;                                             // 0x0418   (0x0010)  
	TArray<ABP_RB_Vehicle_C*>                          SpawnedVehicles;                                            // 0x0428   (0x0010)  
	int32_t                                            NewPlayerIndex;                                             // 0x0438   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x043C   (0x0004)  MISSED
	AAISpawnManager_C*                                 AISpawnManager;                                             // 0x0440   (0x0008)  
	int32_t                                            PlayersCount;                                               // 0x0448   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x044C   (0x0004)  MISSED
	FTimerHandle                                       ShutdownServerHandle;                                       // 0x0450   (0x0008)  
	double                                             ShutdownTimer;                                              // 0x0458   (0x0008)  
	UObject*                                           UpdatePlayerJSONRequest;                                    // 0x0460   (0x0008)  
	bool                                               SyncPlayerPosition;                                         // 0x0468   (0x0001)  
	unsigned char                                      UnknownData03_5[0x7];                                       // 0x0469   (0x0007)  MISSED
	TMap<FString, ASurvPC_C*>                          PlayfabPlayers;                                             // 0x0470   (0x0050)  
	TArray<bool>                                       CheckRenderedPawns;                                         // 0x04C0   (0x0010)  
	FString                                            Key_Playfab;                                                // 0x04D0   (0x0010)  
	TMap<FString, ASurvivalPlayer_C*>                  LeftCharacters;                                             // 0x04E0   (0x0050)  
	TArray<APlayerDeadBodyRepl_C*>                     SpawnedDeadBodies;                                          // 0x0530   (0x0010)  
	int32_t                                            DeadBodyLimit;                                              // 0x0540   (0x0004)  
	unsigned char                                      UnknownData04_5[0x4];                                       // 0x0544   (0x0004)  MISSED
	TArray<ASurvPC_C*>                                 PlayerControllers;                                          // 0x0548   (0x0010)  
	TMap<int32_t, FPlayerStatesArray>                  Squads;                                                     // 0x0558   (0x0050)  
	int32_t                                            LastSquadIndex;                                             // 0x05A8   (0x0004)  
	unsigned char                                      UnknownData05_5[0x4];                                       // 0x05AC   (0x0004)  MISSED
	TArray<FName>                                      ItemsFoodAll;                                               // 0x05B0   (0x0010)  
	TArray<FName>                                      ItemsAid;                                                   // 0x05C0   (0x0010)  
	TArray<FName>                                      ItemsWeapon;                                                // 0x05D0   (0x0010)  
	TArray<FName>                                      ItemsAmmo;                                                  // 0x05E0   (0x0010)  
	TArray<FName>                                      ItemsArmor;                                                 // 0x05F0   (0x0010)  
	TArray<FName>                                      ItemsClothes;                                               // 0x0600   (0x0010)  
	TArray<FName>                                      ItemsTradeCraft;                                            // 0x0610   (0x0010)  
	TArray<FName>                                      ItemsBackpack;                                              // 0x0620   (0x0010)  
	TArray<FName>                                      ItemsOther;                                                 // 0x0630   (0x0010)  
	TArray<FName>                                      ItemsAttachments;                                           // 0x0640   (0x0010)  
	AZombieManager_C*                                  ZombieManager;                                              // 0x0650   (0x0008)  
	ADeerManager_C*                                    DeerManager;                                                // 0x0658   (0x0008)  
	FTimerHandle                                       ZombieManagerTimer;                                         // 0x0660   (0x0008)  
	FTimerHandle                                       DeerManagerTimer;                                           // 0x0668   (0x0008)  
	float                                              ZombieManagerCheckFrequency;                                // 0x0670   (0x0004)  
	float                                              DeerManagerCheckFrequency;                                  // 0x0674   (0x0004)  
	ASkyCreatorController_C*                           SkyCreatorController;                                       // 0x0678   (0x0008)  
	float                                              SkyCreatorControllerCheckFrequency;                         // 0x0680   (0x0004)  
	unsigned char                                      UnknownData06_5[0x4];                                       // 0x0684   (0x0004)  MISSED
	FTimerHandle                                       SkyCreatorControllerTimer;                                  // 0x0688   (0x0008)  
	TMap<FString, FTransform>                          PlayerPosition;                                             // 0x0690   (0x0050)  
	FMulticastInlineDelegate                           SavePlayerPosition;                                         // 0x06E0   (0x0010)  
	TArray<FString>                                    SavePlayerLocation;                                         // 0x06F0   (0x0010)  
	bool                                               ServerIsAllocated;                                          // 0x0700   (0x0001)  
	unsigned char                                      UnknownData07_5[0x3];                                       // 0x0701   (0x0003)  MISSED
	int32_t                                            WaitingForPlayers;                                          // 0x0704   (0x0004)  
	int32_t                                            ServerRuntime;                                              // 0x0708   (0x0004)  
	unsigned char                                      UnknownData08_5[0x4];                                       // 0x070C   (0x0004)  MISSED
	UDatabaseReference*                                ServerInfoRef;                                              // 0x0710   (0x0008)  
	FString                                            SeverUniqueID;                                              // 0x0718   (0x0010)  
	bool                                               InitInfo;                                                   // 0x0728   (0x0001)  
	unsigned char                                      UnknownData09_5[0x7];                                       // 0x0729   (0x0007)  MISSED
	FGameServerResponse                                Response;                                                   // 0x0730   (0x0138)  
	FString                                            PrevTimeTag;                                                // 0x0868   (0x0010)  
	FString                                            Region;                                                     // 0x0878   (0x0010)  
	TArray<FString>                                    ServerNames;                                                // 0x0888   (0x0010)  
	FMulticastInlineDelegate                           LogoutDis;                                                  // 0x0898   (0x0010)  
	FMulticastInlineDelegate                           SuvivalPlayerOnLogOut;                                      // 0x08A8   (0x0010)  
	bool                                               NotReady;                                                   // 0x08B8   (0x0001)  
	unsigned char                                      UnknownData10_5[0x3];                                       // 0x08B9   (0x0003)  MISSED
	int32_t                                            OldServerIndex;                                             // 0x08BC   (0x0004)  
	FString                                            Game_Version;                                               // 0x08C0   (0x0010)  
	bool                                               ServerIsClosing;                                            // 0x08D0   (0x0001)  
	unsigned char                                      UnknownData11_5[0x3];                                       // 0x08D1   (0x0003)  MISSED
	int32_t                                            CurrentBuild;                                               // 0x08D4   (0x0004)  
	FMulticastInlineDelegate                           OnSurvCreated;                                              // 0x08D8   (0x0010)  
	TArray<int32_t>                                    StagesTimeUntillServerShutdown;                             // 0x08E8   (0x0010)  
	int32_t                                            ServerLifeInMinutes;                                        // 0x08F8   (0x0004)  
	bool                                               SetForUpdate;                                               // 0x08FC   (0x0001)  
	unsigned char                                      UnknownData12_5[0x3];                                       // 0x08FD   (0x0003)  MISSED
	int32_t                                            SetForUpdateTimer;                                          // 0x0900   (0x0004)  


	/// Functions
	// Function /Game/ThirdPersonBP/Blueprints/TDB_GameMode.TDB_GameMode_C.GetPlayerStartForEnterBunker
	void GetPlayerStartForEnterBunker(AActor*& Start);                                                                       // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/ThirdPersonBP/Blueprints/TDB_GameMode.TDB_GameMode_C.GetPlayerStartsWithTag
	void GetPlayerStartsWithTag(FString Tag, TArray<AActor*>& Starts);                                                       // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/ThirdPersonBP/Blueprints/TDB_GameMode.TDB_GameMode_C.GetBunkerPlayerStart
	void GetBunkerPlayerStart(AActor*& Start);                                                                               // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/ThirdPersonBP/Blueprints/TDB_GameMode.TDB_GameMode_C.IsPawnRendered?
	void IsPawnRendered?(AActor* Pawn, bool& Rendered?);                                                                     // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/ThirdPersonBP/Blueprints/TDB_GameMode.TDB_GameMode_C.GetAISpawnerManager
	void GetAISpawnerManager(AAISpawnManager_C*& AISpawnerManager);                                                          // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/ThirdPersonBP/Blueprints/TDB_GameMode.TDB_GameMode_C.GetPlayers
	void GetPlayers(TArray<AActor*>& Players);                                                                               // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/ThirdPersonBP/Blueprints/TDB_GameMode.TDB_GameMode_C.IsInWater
	void IsInWater(bool& InWater);                                                                                           // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/ThirdPersonBP/Blueprints/TDB_GameMode.TDB_GameMode_C.IsPlayer
	void IsPlayer(bool& IsPlayer);                                                                                           // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/ThirdPersonBP/Blueprints/TDB_GameMode.TDB_GameMode_C.SetEnableSmoothSync
	void SetEnableSmoothSync(bool NewEnable, bool& Success);                                                                 // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/ThirdPersonBP/Blueprints/TDB_GameMode.TDB_GameMode_C.PlayerItemCountByName
	void PlayerItemCountByName(FString ItemName, int32_t& Count);                                                            // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/ThirdPersonBP/Blueprints/TDB_GameMode.TDB_GameMode_C.PlayerGetMesh
	void PlayerGetMesh(USkeletalMeshComponent*& Mesh);                                                                       // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/ThirdPersonBP/Blueprints/TDB_GameMode.TDB_GameMode_C.PlayerAddItem
	void PlayerAddItem(FFItemInfo ItemInfo, UWBP_AttachmentCell_C* ActiveCell, bool& Added);                                 // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/ThirdPersonBP/Blueprints/TDB_GameMode.TDB_GameMode_C.GetPathToDatabase
	void GetPathToDatabase(UFirestoreDocumentReference*& Document);                                                          // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/ThirdPersonBP/Blueprints/TDB_GameMode.TDB_GameMode_C.Get Server Address
	FString Get Server Address();                                                                                            // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/ThirdPersonBP/Blueprints/TDB_GameMode.TDB_GameMode_C.CalculateMinutesFrom2022
	int32_t CalculateMinutesFrom2022();                                                                                      // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/ThirdPersonBP/Blueprints/TDB_GameMode.TDB_GameMode_C.SurvOnLogOut
	void SurvOnLogOut(ASurvivalPlayer_C* SurvivalPlayer, ASurvPC_C* PlayerController, FDelegateProperty& Delegate);          // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/ThirdPersonBP/Blueprints/TDB_GameMode.TDB_GameMode_C.GetTimeTag
	FString GetTimeTag();                                                                                                    // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/ThirdPersonBP/Blueprints/TDB_GameMode.TDB_GameMode_C.StringMapToFirebase
	void StringMapToFirebase(TMap<FString, FString> StringMap, TArray<FFirestoreFieldValue>& Keys, TArray<FFirestoreFieldValue>& Values); // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/ThirdPersonBP/Blueprints/TDB_GameMode.TDB_GameMode_C.PortsToFirebase
	void PortsToFirebase(FStatus& Status, TArray<FFirebaseVariant>& Result1);                                                // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/ThirdPersonBP/Blueprints/TDB_GameMode.TDB_GameMode_C.Location Annulment
	void Location Annulment(FString& Login, UBPC_SharpSync_C* SharpSync);                                                    // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/ThirdPersonBP/Blueprints/TDB_GameMode.TDB_GameMode_C.PlayerLocationSaveCalcs
	void PlayerLocationSaveCalcs(FString& Login, FTransform& InTransform, FString& SaveLocString);                           // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/ThirdPersonBP/Blueprints/TDB_GameMode.TDB_GameMode_C.GetSkyCreatorController
	ASkyCreatorController_C* GetSkyCreatorController();                                                                      // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/ThirdPersonBP/Blueprints/TDB_GameMode.TDB_GameMode_C.TryToGetSkyCreatorController
	void TryToGetSkyCreatorController();                                                                                     // [0x2407bf0] Private|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/ThirdPersonBP/Blueprints/TDB_GameMode.TDB_GameMode_C.InitializeSkyCreatorController
	void InitializeSkyCreatorController();                                                                                   // [0x2407bf0] Private|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/ThirdPersonBP/Blueprints/TDB_GameMode.TDB_GameMode_C.GetAmountOfPlayerControllers
	int32_t GetAmountOfPlayerControllers();                                                                                  // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/ThirdPersonBP/Blueprints/TDB_GameMode.TDB_GameMode_C.InitalizeAIManagers
	void InitalizeAIManagers();                                                                                              // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/ThirdPersonBP/Blueprints/TDB_GameMode.TDB_GameMode_C.TryToGetDeerManager
	void TryToGetDeerManager();                                                                                              // [0x2407bf0] Private|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/ThirdPersonBP/Blueprints/TDB_GameMode.TDB_GameMode_C.TryToGetZombieManager
	void TryToGetZombieManager();                                                                                            // [0x2407bf0] Private|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/ThirdPersonBP/Blueprints/TDB_GameMode.TDB_GameMode_C.InitializeDeerManager
	void InitializeDeerManager();                                                                                            // [0x2407bf0] Private|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/ThirdPersonBP/Blueprints/TDB_GameMode.TDB_GameMode_C.InitializeZombieManager
	void InitializeZombieManager();                                                                                          // [0x2407bf0] Private|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/ThirdPersonBP/Blueprints/TDB_GameMode.TDB_GameMode_C.GetDeerManager
	ADeerManager_C* GetDeerManager();                                                                                        // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/ThirdPersonBP/Blueprints/TDB_GameMode.TDB_GameMode_C.GetZombieManager
	void GetZombieManager(AZombieManager_C*& ZombieManager);                                                                 // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/ThirdPersonBP/Blueprints/TDB_GameMode.TDB_GameMode_C.GenerateNewSquad
	void GenerateNewSquad(int32_t& SquadId);                                                                                 // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/ThirdPersonBP/Blueprints/TDB_GameMode.TDB_GameMode_C.AddDeadBody
	void AddDeadBody(APlayerDeadBodyRepl_C*& NewItem);                                                                       // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/ThirdPersonBP/Blueprints/TDB_GameMode.TDB_GameMode_C.GetStartForBunker
	FVector GetStartForBunker(AActor*& Start);                                                                               // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/ThirdPersonBP/Blueprints/TDB_GameMode.TDB_GameMode_C.ChoosePlayerStart
	AActor* ChoosePlayerStart(AController* Player);                                                                          // [0x2407bf0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/ThirdPersonBP/Blueprints/TDB_GameMode.TDB_GameMode_C.IsPlayfabServer
	void IsPlayfabServer(bool& Isit);                                                                                        // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/ThirdPersonBP/Blueprints/TDB_GameMode.TDB_GameMode_C.CreateJSONRequest
	void CreateJSONRequest(FVector Position, UTDBJsonObject*& Result);                                                       // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/ThirdPersonBP/Blueprints/TDB_GameMode.TDB_GameMode_C.GetPlayfabUser
	void GetPlayfabUser(FString PlayFabID, ASurvPC_C*& Player, bool& IsFound);                                               // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/ThirdPersonBP/Blueprints/TDB_GameMode.TDB_GameMode_C.RemovePlayfabPlayer
	void RemovePlayfabPlayer(FString PlayFabID);                                                                             // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/ThirdPersonBP/Blueprints/TDB_GameMode.TDB_GameMode_C.AddPlayfabPlayer
	void AddPlayfabPlayer(FString PlayFabID, ASurvPC_C* Player);                                                             // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/ThirdPersonBP/Blueprints/TDB_GameMode.TDB_GameMode_C.SendUserPosition
	void SendUserPosition(ASurvPC_C* Controller);                                                                            // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/ThirdPersonBP/Blueprints/TDB_GameMode.TDB_GameMode_C.SurvGetUID
	void SurvGetUID(int32_t& ID);                                                                                            // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/ThirdPersonBP/Blueprints/TDB_GameMode.TDB_GameMode_C.OnError_D82503DB478C02CA43AEA58E8C70D2B7
	void OnError_D82503DB478C02CA43AEA58E8C70D2B7(EFirestoreError Error);                                                    // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/ThirdPersonBP/Blueprints/TDB_GameMode.TDB_GameMode_C.OnSet_D82503DB478C02CA43AEA58E8C70D2B7
	void OnSet_D82503DB478C02CA43AEA58E8C70D2B7(EFirestoreError Error);                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/ThirdPersonBP/Blueprints/TDB_GameMode.TDB_GameMode_C.OnError_9204BF104BA4CCE3A0B742AAC30BA0B9
	void OnError_9204BF104BA4CCE3A0B742AAC30BA0B9(EFirestoreError Error);                                                    // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/ThirdPersonBP/Blueprints/TDB_GameMode.TDB_GameMode_C.OnSet_9204BF104BA4CCE3A0B742AAC30BA0B9
	void OnSet_9204BF104BA4CCE3A0B742AAC30BA0B9(EFirestoreError Error);                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/ThirdPersonBP/Blueprints/TDB_GameMode.TDB_GameMode_C.OnError_F35B75124B28FE9959EEBAB1B9CD0823
	void OnError_F35B75124B28FE9959EEBAB1B9CD0823(EFirestoreError Error);                                                    // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/ThirdPersonBP/Blueprints/TDB_GameMode.TDB_GameMode_C.OnSet_F35B75124B28FE9959EEBAB1B9CD0823
	void OnSet_F35B75124B28FE9959EEBAB1B9CD0823(EFirestoreError Error);                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/ThirdPersonBP/Blueprints/TDB_GameMode.TDB_GameMode_C.OnError_145607E64257323E3B9D599EE0F1D293
	void OnError_145607E64257323E3B9D599EE0F1D293(EFirestoreError Error);                                                    // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/ThirdPersonBP/Blueprints/TDB_GameMode.TDB_GameMode_C.OnDeleted_145607E64257323E3B9D599EE0F1D293
	void OnDeleted_145607E64257323E3B9D599EE0F1D293(EFirestoreError Error);                                                  // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/ThirdPersonBP/Blueprints/TDB_GameMode.TDB_GameMode_C.OnError_B3B5E7C14DD4AC3AF25370A28DF5B98E
	void OnError_B3B5E7C14DD4AC3AF25370A28DF5B98E(EFirestoreError Error, TArray<FFirestoreDocumentSnapshot>& DocumentSnapshots, TArray<UFirestoreDocumentChange*>& DocumentChanges); // [0x2407bf0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/ThirdPersonBP/Blueprints/TDB_GameMode.TDB_GameMode_C.OnGot_B3B5E7C14DD4AC3AF25370A28DF5B98E
	void OnGot_B3B5E7C14DD4AC3AF25370A28DF5B98E(EFirestoreError Error, TArray<FFirestoreDocumentSnapshot>& DocumentSnapshots, TArray<UFirestoreDocumentChange*>& DocumentChanges); // [0x2407bf0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/ThirdPersonBP/Blueprints/TDB_GameMode.TDB_GameMode_C.OnError_8D1F79814CFFA6672E5EA5B480BC3815
	void OnError_8D1F79814CFFA6672E5EA5B480BC3815(EFirestoreError Error);                                                    // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/ThirdPersonBP/Blueprints/TDB_GameMode.TDB_GameMode_C.OnDeleted_8D1F79814CFFA6672E5EA5B480BC3815
	void OnDeleted_8D1F79814CFFA6672E5EA5B480BC3815(EFirestoreError Error);                                                  // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/ThirdPersonBP/Blueprints/TDB_GameMode.TDB_GameMode_C.OnError_B854DC7448C47C1BB59262B419CEBD52
	void OnError_B854DC7448C47C1BB59262B419CEBD52(EFirestoreError Error);                                                    // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/ThirdPersonBP/Blueprints/TDB_GameMode.TDB_GameMode_C.OnDeleted_B854DC7448C47C1BB59262B419CEBD52
	void OnDeleted_B854DC7448C47C1BB59262B419CEBD52(EFirestoreError Error);                                                  // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/ThirdPersonBP/Blueprints/TDB_GameMode.TDB_GameMode_C.OnError_B81202C247B2E1DA3F224A9FB89F485B
	void OnError_B81202C247B2E1DA3F224A9FB89F485B(EFirestoreError Error, FFirestoreDocumentSnapshot& DocumentSnapshot);      // [0x2407bf0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/ThirdPersonBP/Blueprints/TDB_GameMode.TDB_GameMode_C.OnGot_B81202C247B2E1DA3F224A9FB89F485B
	void OnGot_B81202C247B2E1DA3F224A9FB89F485B(EFirestoreError Error, FFirestoreDocumentSnapshot& DocumentSnapshot);        // [0x2407bf0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/ThirdPersonBP/Blueprints/TDB_GameMode.TDB_GameMode_C.Craft
	void Craft(APawn* Player);                                                                                               // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/ThirdPersonBP/Blueprints/TDB_GameMode.TDB_GameMode_C.HeatUpBonfire
	void HeatUpBonfire(APawn* Player);                                                                                       // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/ThirdPersonBP/Blueprints/TDB_GameMode.TDB_GameMode_C.CallLootAnim
	void CallLootAnim(double LootingHeight, bool LootPointOpened);                                                           // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/ThirdPersonBP/Blueprints/TDB_GameMode.TDB_GameMode_C.OpenLootRPC
	void OpenLootRPC(ALootPoint_C* LootPoint);                                                                               // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/ThirdPersonBP/Blueprints/TDB_GameMode.TDB_GameMode_C.ShowSimpleUIText
	void ShowSimpleUIText(FString String);                                                                                   // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/ThirdPersonBP/Blueprints/TDB_GameMode.TDB_GameMode_C.OpenDoorRPC
	void OpenDoorRPC(ABP_Door_C* Door, bool IsOpen);                                                                         // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/ThirdPersonBP/Blueprints/TDB_GameMode.TDB_GameMode_C.PlayerCanisterAction
	void PlayerCanisterAction(bool Attach, ABP_Canister_C* Canister);                                                        // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/ThirdPersonBP/Blueprints/TDB_GameMode.TDB_GameMode_C.CampPlaceBegin
	void CampPlaceBegin();                                                                                                   // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/ThirdPersonBP/Blueprints/TDB_GameMode.TDB_GameMode_C.CampPlaceEnd
	void CampPlaceEnd();                                                                                                     // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/ThirdPersonBP/Blueprints/TDB_GameMode.TDB_GameMode_C.CampBuildInstant
	void CampBuildInstant();                                                                                                 // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/ThirdPersonBP/Blueprints/TDB_GameMode.TDB_GameMode_C.Interact
	void Interact(bool NewParam);                                                                                            // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/ThirdPersonBP/Blueprints/TDB_GameMode.TDB_GameMode_C.SetPlayerCollisionInCar
	void SetPlayerCollisionInCar(bool NewEnable);                                                                            // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/ThirdPersonBP/Blueprints/TDB_GameMode.TDB_GameMode_C.GI_TileLoaded
	void GI_TileLoaded(FName TileName);                                                                                      // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/ThirdPersonBP/Blueprints/TDB_GameMode.TDB_GameMode_C.GI_TileUnloaded
	void GI_TileUnloaded(FName TileName);                                                                                    // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/ThirdPersonBP/Blueprints/TDB_GameMode.TDB_GameMode_C.ServerLoadScene
	void ServerLoadScene(AActor* PlayerLoad, FName LevelName);                                                               // [0x2407bf0] Net|NetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/ThirdPersonBP/Blueprints/TDB_GameMode.TDB_GameMode_C.K2_PostLogin
	void K2_PostLogin(APlayerController* NewPlayer);                                                                         // [0x2407bf0] Event|Public|BlueprintEvent 
	// Function /Game/ThirdPersonBP/Blueprints/TDB_GameMode.TDB_GameMode_C.ReceiveBeginPlay
	void ReceiveBeginPlay();                                                                                                 // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/ThirdPersonBP/Blueprints/TDB_GameMode.TDB_GameMode_C.RegisterPlayerOld
	void RegisterPlayerOld(AActor* Player);                                                                                  // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/ThirdPersonBP/Blueprints/TDB_GameMode.TDB_GameMode_C.RegisterAISpawnerManager
	void RegisterAISpawnerManager(AAISpawnManager_C* AISpawnManager);                                                        // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/ThirdPersonBP/Blueprints/TDB_GameMode.TDB_GameMode_C.ConfirmPlayerJoined
	void ConfirmPlayerJoined(FString PlayFabPlayerID, ASurvPC_C* Controller);                                                // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/ThirdPersonBP/Blueprints/TDB_GameMode.TDB_GameMode_C.UnregisterPlayerOld
	void UnregisterPlayerOld(ASurvivalPlayer_C* Player);                                                                     // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/ThirdPersonBP/Blueprints/TDB_GameMode.TDB_GameMode_C.OnLeftCharacterDestroyed
	void OnLeftCharacterDestroyed(AActor* DestroyedActor);                                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/ThirdPersonBP/Blueprints/TDB_GameMode.TDB_GameMode_C.LootGeneratedTypeArrayItems
	void LootGeneratedTypeArrayItems();                                                                                      // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/ThirdPersonBP/Blueprints/TDB_GameMode.TDB_GameMode_C.OnKickPlayer
	void OnKickPlayer(int32_t pPID, FString pReason);                                                                        // [0x2407bf0] Event|Public|BlueprintEvent 
	// Function /Game/ThirdPersonBP/Blueprints/TDB_GameMode.TDB_GameMode_C.SavePlayerPosGM
	void SavePlayerPosGM(ASurvPC_C* SurvPC);                                                                                 // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/ThirdPersonBP/Blueprints/TDB_GameMode.TDB_GameMode_C.ServLoginLocation
	void ServLoginLocation(ASurvPC_C* SurvPC);                                                                               // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/ThirdPersonBP/Blueprints/TDB_GameMode.TDB_GameMode_C.OnLogoutCustom
	void OnLogoutCustom(UObject* ExitingController);                                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/ThirdPersonBP/Blueprints/TDB_GameMode.TDB_GameMode_C.AgonesRoutine
	void AgonesRoutine();                                                                                                    // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/ThirdPersonBP/Blueprints/TDB_GameMode.TDB_GameMode_C.AgonesResponseSuccess
	void AgonesResponseSuccess(FEmptyResponse& Response);                                                                    // [0x2407bf0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/ThirdPersonBP/Blueprints/TDB_GameMode.TDB_GameMode_C.AgonesResponseError
	void AgonesResponseError(FAgonesError& Error);                                                                           // [0x2407bf0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/ThirdPersonBP/Blueprints/TDB_GameMode.TDB_GameMode_C.CheckAllocatedServer
	void CheckAllocatedServer();                                                                                             // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/ThirdPersonBP/Blueprints/TDB_GameMode.TDB_GameMode_C.CheckServerRuntime
	void CheckServerRuntime();                                                                                               // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/ThirdPersonBP/Blueprints/TDB_GameMode.TDB_GameMode_C.GameServerInfoSuccess
	void GameServerInfoSuccess(FGameServerResponse& Response);                                                               // [0x2407bf0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/ThirdPersonBP/Blueprints/TDB_GameMode.TDB_GameMode_C.SendServerInfo
	void SendServerInfo();                                                                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/ThirdPersonBP/Blueprints/TDB_GameMode.TDB_GameMode_C.AgonesAllocateSuccess
	void AgonesAllocateSuccess(FEmptyResponse& Response);                                                                    // [0x2407bf0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/ThirdPersonBP/Blueprints/TDB_GameMode.TDB_GameMode_C.ServerInfoError
	void ServerInfoError(FAgonesError& Error);                                                                               // [0x2407bf0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/ThirdPersonBP/Blueprints/TDB_GameMode.TDB_GameMode_C.UpdateState
	void UpdateState();                                                                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/ThirdPersonBP/Blueprints/TDB_GameMode.TDB_GameMode_C.SetServerTimer
	void SetServerTimer();                                                                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/ThirdPersonBP/Blueprints/TDB_GameMode.TDB_GameMode_C.ReceiveEndPlay
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);                                                          // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/ThirdPersonBP/Blueprints/TDB_GameMode.TDB_GameMode_C.ReceiveTick
	void ReceiveTick(float DeltaSeconds);                                                                                    // [0x2407bf0] Event|Public|BlueprintEvent 
	// Function /Game/ThirdPersonBP/Blueprints/TDB_GameMode.TDB_GameMode_C.K2_OnLogout
	void K2_OnLogout(AController* ExitingController);                                                                        // [0x2407bf0] Event|Public|BlueprintEvent 
	// Function /Game/ThirdPersonBP/Blueprints/TDB_GameMode.TDB_GameMode_C.GetOldServers
	void GetOldServers();                                                                                                    // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/ThirdPersonBP/Blueprints/TDB_GameMode.TDB_GameMode_C.UpdatePlayerCount
	void UpdatePlayerCount();                                                                                                // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/ThirdPersonBP/Blueprints/TDB_GameMode.TDB_GameMode_C.UpdateServerTime
	void UpdateServerTime();                                                                                                 // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/ThirdPersonBP/Blueprints/TDB_GameMode.TDB_GameMode_C.OnCheckOwnershipResult
	void OnCheckOwnershipResult(bool Ownsapp, FString Message, int32_t PID, int64_t SteamID);                                // [0x2407bf0] Event|Public|BlueprintEvent 
	// Function /Game/ThirdPersonBP/Blueprints/TDB_GameMode.TDB_GameMode_C.GetCurrentActiveVesrion
	void GetCurrentActiveVesrion();                                                                                          // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/ThirdPersonBP/Blueprints/TDB_GameMode.TDB_GameMode_C.ExecuteUbergraph_TDB_GameMode
	void ExecuteUbergraph_TDB_GameMode(int32_t EntryPoint);                                                                  // [0x2407bf0] Final|HasDefaults    
	// Function /Game/ThirdPersonBP/Blueprints/TDB_GameMode.TDB_GameMode_C.OnSurvCreated__DelegateSignature
	void OnSurvCreated__DelegateSignature(FString SteamID, ASurvivalPlayer_V2_C* survRef);                                   // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/ThirdPersonBP/Blueprints/TDB_GameMode.TDB_GameMode_C.SuvivalPlayerOnLogOut__DelegateSignature
	void SuvivalPlayerOnLogOut__DelegateSignature(ASurvivalPlayer_C* SurvivalPlayer);                                        // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/ThirdPersonBP/Blueprints/TDB_GameMode.TDB_GameMode_C.LogoutDis__DelegateSignature
	void LogoutDis__DelegateSignature();                                                                                     // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/ThirdPersonBP/Blueprints/TDB_GameMode.TDB_GameMode_C.SavePlayerPosition__DelegateSignature
	void SavePlayerPosition__DelegateSignature(TArray<FString>& SaveLocation);                                               // [0x2407bf0] Public|Delegate|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/ThirdPersonBP/Blueprints/TDB_GameMode.TDB_GameMode_C.OnLevelLoaded__DelegateSignature
	void OnLevelLoaded__DelegateSignature();                                                                                 // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

