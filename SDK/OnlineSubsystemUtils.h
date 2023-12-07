
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package OnlineSubsystemUtils.

/// Struct /Script/OnlineSubsystemUtils.BlueprintSessionResult
/// Size: 0x0120 (0x000000 - 0x000120)
struct FBlueprintSessionResult
{ 
	unsigned char                                      UnknownData00_1[0x120];                                     // 0x0000   (0x0120)  MISSED
};

/// Struct /Script/OnlineSubsystemUtils.OnlineProxyStoreOffer
/// Size: 0x0110 (0x000000 - 0x000110)
struct FOnlineProxyStoreOffer
{ 
	FString                                            OfferId;                                                    // 0x0000   (0x0010)  
	FText                                              Title;                                                      // 0x0010   (0x0018)  
	FText                                              Description;                                                // 0x0028   (0x0018)  
	FText                                              LongDescription;                                            // 0x0040   (0x0018)  
	FText                                              RegularPriceText;                                           // 0x0058   (0x0018)  
	int32_t                                            RegularPrice;                                               // 0x0070   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0074   (0x0004)  MISSED
	FText                                              PriceText;                                                  // 0x0078   (0x0018)  
	int32_t                                            NumericPrice;                                               // 0x0090   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0094   (0x0004)  MISSED
	FString                                            CurrencyCode;                                               // 0x0098   (0x0010)  
	FDateTime                                          ReleaseDate;                                                // 0x00A8   (0x0008)  
	FDateTime                                          ExpirationDate;                                             // 0x00B0   (0x0008)  
	EOnlineProxyStoreOfferDiscountType                 DiscountType;                                               // 0x00B8   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x00B9   (0x0007)  MISSED
	TMap<FString, FString>                             DynamicFields;                                              // 0x00C0   (0x0050)  
};

/// Struct /Script/OnlineSubsystemUtils.InAppPurchaseRestoreInfo2
/// Size: 0x0030 (0x000000 - 0x000030)
struct FInAppPurchaseRestoreInfo2
{ 
	FString                                            ItemName;                                                   // 0x0000   (0x0010)  
	FString                                            ItemId;                                                     // 0x0010   (0x0010)  
	FString                                            ValidationInfo;                                             // 0x0020   (0x0010)  
};

/// Struct /Script/OnlineSubsystemUtils.InAppPurchaseReceiptInfo2
/// Size: 0x0030 (0x000000 - 0x000030)
struct FInAppPurchaseReceiptInfo2
{ 
	FString                                            ItemName;                                                   // 0x0000   (0x0010)  
	FString                                            ItemId;                                                     // 0x0010   (0x0010)  
	FString                                            ValidationInfo;                                             // 0x0020   (0x0010)  
};

/// Struct /Script/OnlineSubsystemUtils.PlayerReservation
/// Size: 0x0058 (0x000000 - 0x000058)
struct FPlayerReservation
{ 
	FUniqueNetIdRepl                                   UniqueId;                                                   // 0x0000   (0x0030)  
	FString                                            ValidationStr;                                              // 0x0030   (0x0010)  
	FString                                            platform;                                                   // 0x0040   (0x0010)  
	bool                                               bAllowCrossplay;                                            // 0x0050   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0051   (0x0003)  MISSED
	float                                              ElapsedTime;                                                // 0x0054   (0x0004)  
};

/// Struct /Script/OnlineSubsystemUtils.InAppPurchaseProductRequest2
/// Size: 0x0018 (0x000000 - 0x000018)
struct FInAppPurchaseProductRequest2
{ 
	FString                                            ProductIdentifier;                                          // 0x0000   (0x0010)  
	bool                                               bIsConsumable;                                              // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/OnlineSubsystemUtils.InAppPurchaseProductInfo2
/// Size: 0x00F8 (0x000000 - 0x0000F8)
struct FInAppPurchaseProductInfo2
{ 
	FString                                            Identifier;                                                 // 0x0000   (0x0010)  
	FString                                            TransactionIdentifier;                                      // 0x0010   (0x0010)  
	FString                                            DisplayName;                                                // 0x0020   (0x0010)  
	FString                                            DisplayDescription;                                         // 0x0030   (0x0010)  
	FString                                            DisplayPrice;                                               // 0x0040   (0x0010)  
	float                                              RawPrice;                                                   // 0x0050   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0054   (0x0004)  MISSED
	FString                                            CurrencyCode;                                               // 0x0058   (0x0010)  
	FString                                            CurrencySymbol;                                             // 0x0068   (0x0010)  
	FString                                            DecimalSeparator;                                           // 0x0078   (0x0010)  
	FString                                            GroupingSeparator;                                          // 0x0088   (0x0010)  
	FString                                            ReceiptData;                                                // 0x0098   (0x0010)  
	TMap<FString, FString>                             DynamicFields;                                              // 0x00A8   (0x0050)  
};

/// Struct /Script/OnlineSubsystemUtils.PIELoginSettingsInternal
/// Size: 0x0040 (0x000000 - 0x000040)
struct FPIELoginSettingsInternal
{ 
	FString                                            ID;                                                         // 0x0000   (0x0010)  
	FString                                            Token;                                                      // 0x0010   (0x0010)  
	FString                                            Type;                                                       // 0x0020   (0x0010)  
	TArray<char>                                       TokenBytes;                                                 // 0x0030   (0x0010)  
};

/// Struct /Script/OnlineSubsystemUtils.PartyReservation
/// Size: 0x0058 (0x000000 - 0x000058)
struct FPartyReservation
{ 
	int32_t                                            TeamNum;                                                    // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	FUniqueNetIdRepl                                   PartyLeader;                                                // 0x0008   (0x0030)  
	TArray<FPlayerReservation>                         PartyMembers;                                               // 0x0038   (0x0010)  
	TArray<FPlayerReservation>                         RemovedPartyMembers;                                        // 0x0048   (0x0010)  
};

/// Struct /Script/OnlineSubsystemUtils.PartyBeaconCrossplayPlatformMapping
/// Size: 0x0020 (0x000000 - 0x000020)
struct FPartyBeaconCrossplayPlatformMapping
{ 
	FString                                            PlatformName;                                               // 0x0000   (0x0010)  
	FString                                            PlatformType;                                               // 0x0010   (0x0010)  
};

/// Struct /Script/OnlineSubsystemUtils.SpectatorReservation
/// Size: 0x0088 (0x000000 - 0x000088)
struct FSpectatorReservation
{ 
	FUniqueNetIdRepl                                   SpectatorId;                                                // 0x0000   (0x0030)  
	FPlayerReservation                                 Spectator;                                                  // 0x0030   (0x0058)  
};

/// Class /Script/OnlineSubsystemUtils.VoipListenerSynthComponent
/// Size: 0x0060 (0x000790 - 0x0007F0)
class UVoipListenerSynthComponent : public USynthComponent : USynthComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x60];                                      // 0x0790   (0x0060)  MISSED
};

/// Class /Script/OnlineSubsystemUtils.AchievementBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UAchievementBlueprintLibrary : public UBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/OnlineSubsystemUtils.AchievementQueryCallbackProxy
/// Size: 0x0038 (0x000030 - 0x000068)
class UAchievementQueryCallbackProxy : public UOnlineBlueprintCallProxyBase : UOnlineBlueprintCallProxyBase
{ 
public:
	FMulticastInlineDelegate                           OnSuccess;                                                  // 0x0030   (0x0010)  
	FMulticastInlineDelegate                           OnFailure;                                                  // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0050   (0x0018)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievements
	UAchievementQueryCallbackProxy* CacheAchievements(UObject* WorldContextObject, APlayerController* PlayerController);     // [0xc52f10] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievementDescriptions
	UAchievementQueryCallbackProxy* CacheAchievementDescriptions(UObject* WorldContextObject, APlayerController* PlayerController); // [0xc52e20] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.AchievementWriteCallbackProxy
/// Size: 0x0050 (0x000030 - 0x000080)
class UAchievementWriteCallbackProxy : public UOnlineBlueprintCallProxyBase : UOnlineBlueprintCallProxyBase
{ 
public:
	FMulticastInlineDelegate                           OnSuccess;                                                  // 0x0030   (0x0010)  
	FMulticastInlineDelegate                           OnFailure;                                                  // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0x30];                                      // 0x0050   (0x0030)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.AchievementWriteCallbackProxy.WriteAchievementProgress
	UAchievementWriteCallbackProxy* WriteAchievementProgress(UObject* WorldContextObject, APlayerController* PlayerController, FName AchievementName, float Progress, int32_t UserTag); // [0xc57da0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.ConnectionCallbackProxy
/// Size: 0x0048 (0x000030 - 0x000078)
class UConnectionCallbackProxy : public UOnlineBlueprintCallProxyBase : UOnlineBlueprintCallProxyBase
{ 
public:
	FMulticastInlineDelegate                           OnSuccess;                                                  // 0x0030   (0x0010)  
	FMulticastInlineDelegate                           OnFailure;                                                  // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x0050   (0x0028)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.ConnectionCallbackProxy.ConnectToService
	UConnectionCallbackProxy* ConnectToService(UObject* WorldContextObject, APlayerController* PlayerController);            // [0xc531d0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.CreateSessionCallbackProxy
/// Size: 0x0068 (0x000030 - 0x000098)
class UCreateSessionCallbackProxy : public UOnlineBlueprintCallProxyBase : UOnlineBlueprintCallProxyBase
{ 
public:
	FMulticastInlineDelegate                           OnSuccess;                                                  // 0x0030   (0x0010)  
	FMulticastInlineDelegate                           OnFailure;                                                  // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0x48];                                      // 0x0050   (0x0048)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.CreateSessionCallbackProxy.CreateSession
	UCreateSessionCallbackProxy* CreateSession(UObject* WorldContextObject, APlayerController* PlayerController, int32_t PublicConnections, bool bUseLAN); // [0xc55800] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.DestroySessionCallbackProxy
/// Size: 0x0048 (0x000030 - 0x000078)
class UDestroySessionCallbackProxy : public UOnlineBlueprintCallProxyBase : UOnlineBlueprintCallProxyBase
{ 
public:
	FMulticastInlineDelegate                           OnSuccess;                                                  // 0x0030   (0x0010)  
	FMulticastInlineDelegate                           OnFailure;                                                  // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x0050   (0x0028)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.DestroySessionCallbackProxy.DestroySession
	UDestroySessionCallbackProxy* DestroySession(UObject* WorldContextObject, APlayerController* PlayerController);          // [0xc55a00] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.EndMatchCallbackProxy
/// Size: 0x0050 (0x000030 - 0x000080)
class UEndMatchCallbackProxy : public UOnlineBlueprintCallProxyBase : UOnlineBlueprintCallProxyBase
{ 
public:
	FMulticastInlineDelegate                           OnSuccess;                                                  // 0x0030   (0x0010)  
	FMulticastInlineDelegate                           OnFailure;                                                  // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0x30];                                      // 0x0050   (0x0030)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.EndMatchCallbackProxy.EndMatch
	UEndMatchCallbackProxy* EndMatch(UObject* WorldContextObject, APlayerController* PlayerController, TScriptInterface<Class> MatchActor, FString MatchID, TEnumAsByte<EMPMatchOutcome> LocalPlayerOutcome, TEnumAsByte<EMPMatchOutcome> OtherPlayersOutcome); // [0xc55b60] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.EndTurnCallbackProxy
/// Size: 0x0048 (0x000030 - 0x000078)
class UEndTurnCallbackProxy : public UOnlineBlueprintCallProxyBase : UOnlineBlueprintCallProxyBase
{ 
public:
	FMulticastInlineDelegate                           OnSuccess;                                                  // 0x0030   (0x0010)  
	FMulticastInlineDelegate                           OnFailure;                                                  // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x0050   (0x0028)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.EndTurnCallbackProxy.EndTurn
	UEndTurnCallbackProxy* EndTurn(UObject* WorldContextObject, APlayerController* PlayerController, FString MatchID, TScriptInterface<Class> TurnBasedMatchInterface); // [0xc55e70] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.FindSessionsCallbackProxy
/// Size: 0x0060 (0x000030 - 0x000090)
class UFindSessionsCallbackProxy : public UOnlineBlueprintCallProxyBase : UOnlineBlueprintCallProxyBase
{ 
public:
	FMulticastInlineDelegate                           OnSuccess;                                                  // 0x0030   (0x0010)  
	FMulticastInlineDelegate                           OnFailure;                                                  // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0x40];                                      // 0x0050   (0x0040)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.FindSessionsCallbackProxy.GetServerName
	FString GetServerName(FBlueprintSessionResult& Result);                                                                  // [0xc56d70] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemUtils.FindSessionsCallbackProxy.GetPingInMs
	int32_t GetPingInMs(FBlueprintSessionResult& Result);                                                                    // [0xc56ca0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemUtils.FindSessionsCallbackProxy.GetMaxPlayers
	int32_t GetMaxPlayers(FBlueprintSessionResult& Result);                                                                  // [0xc56bd0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemUtils.FindSessionsCallbackProxy.GetCurrentPlayers
	int32_t GetCurrentPlayers(FBlueprintSessionResult& Result);                                                              // [0xc56b00] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemUtils.FindSessionsCallbackProxy.FindSessions
	UFindSessionsCallbackProxy* FindSessions(UObject* WorldContextObject, APlayerController* PlayerController, int32_t MaxResults, bool bUseLAN); // [0xc560f0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy
/// Size: 0x0058 (0x000030 - 0x000088)
class UFindTurnBasedMatchCallbackProxy : public UOnlineBlueprintCallProxyBase : UOnlineBlueprintCallProxyBase
{ 
public:
	FMulticastInlineDelegate                           OnSuccess;                                                  // 0x0030   (0x0010)  
	FMulticastInlineDelegate                           OnFailure;                                                  // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0x38];                                      // 0x0050   (0x0038)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy.FindTurnBasedMatch
	UFindTurnBasedMatchCallbackProxy* FindTurnBasedMatch(UObject* WorldContextObject, APlayerController* PlayerController, TScriptInterface<Class> MatchActor, int32_t MinPlayers, int32_t MaxPlayers, int32_t PlayerGroup, bool ShowExistingMatches); // [0xc562f0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.InAppPurchaseCallbackProxy2
/// Size: 0x0080 (0x000028 - 0x0000A8)
class UInAppPurchaseCallbackProxy2 : public UObject : UObject
{ 
public:
	FMulticastInlineDelegate                           OnSuccess;                                                  // 0x0028   (0x0010)  
	FMulticastInlineDelegate                           OnFailure;                                                  // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_6[0x60];                                      // 0x0048   (0x0060)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchaseUnprocessedPurchases
	UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchaseUnprocessedPurchases(APlayerController* PlayerController); // [0xc54cb0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchaseQueryOwned
	UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchaseQueryOwned(APlayerController* PlayerController);          // [0xc54250] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchase
	UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchase(APlayerController* PlayerController, FInAppPurchaseProductRequest2& ProductRequest); // [0xc536f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy2
/// Size: 0x0040 (0x000028 - 0x000068)
class UInAppPurchaseQueryCallbackProxy2 : public UObject : UObject
{ 
public:
	FMulticastInlineDelegate                           OnSuccess;                                                  // 0x0028   (0x0010)  
	FMulticastInlineDelegate                           OnFailure;                                                  // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0048   (0x0020)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy2.CreateProxyObjectForInAppPurchaseQuery
	UInAppPurchaseQueryCallbackProxy2* CreateProxyObjectForInAppPurchaseQuery(APlayerController* PlayerController, TArray<FString>& ProductIdentifiers); // [0xc53d60] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy2
/// Size: 0x0088 (0x000028 - 0x0000B0)
class UInAppPurchaseRestoreCallbackProxy2 : public UObject : UObject
{ 
public:
	FMulticastInlineDelegate                           OnSuccess;                                                  // 0x0028   (0x0010)  
	FMulticastInlineDelegate                           OnFailure;                                                  // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_6[0x68];                                      // 0x0048   (0x0068)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy2.CreateProxyObjectForInAppPurchaseRestore
	UInAppPurchaseRestoreCallbackProxy2* CreateProxyObjectForInAppPurchaseRestore(TArray<FInAppPurchaseProductRequest2>& ConsumableProductFlags, APlayerController* PlayerController); // [0xc546f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.IpConnection
/// Size: 0x0090 (0x001DB8 - 0x001E48)
class UIpConnection : public UNetConnection : UNetConnection
{ 
public:
	unsigned char                                      UnknownData00_2[0x74];                                      // 0x1DB8   (0x0074)  MISSED
	float                                              SocketErrorDisconnectDelay;                                 // 0x1E2C   (0x0004)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x1E30   (0x0018)  MISSED
};

/// Class /Script/OnlineSubsystemUtils.IpNetDriver
/// Size: 0x00B0 (0x0007A8 - 0x000858)
class UIpNetDriver : public UNetDriver : UNetDriver
{ 
public:
	bool                                               LogPortUnreach : 1;                                         // 0x07A8:0 (0x0001)  
	bool                                               AllowPlayerPortUnreach : 1;                                 // 0x07A8:1 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x07A9   (0x0003)  MISSED
	uint32_t                                           MaxPortCountToTry;                                          // 0x07AC   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x07B0   (0x0004)  MISSED
	uint32_t                                           ServerDesiredSocketReceiveBufferBytes;                      // 0x07B4   (0x0004)  
	uint32_t                                           ServerDesiredSocketSendBufferBytes;                         // 0x07B8   (0x0004)  
	uint32_t                                           ClientDesiredSocketReceiveBufferBytes;                      // 0x07BC   (0x0004)  
	uint32_t                                           ClientDesiredSocketSendBufferBytes;                         // 0x07C0   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x07C4   (0x0004)  MISSED
	double                                             MaxSecondsInReceive;                                        // 0x07C8   (0x0008)  
	int32_t                                            NbPacketsBetweenReceiveTimeTest;                            // 0x07D0   (0x0004)  
	float                                              ResolutionConnectionTimeout;                                // 0x07D4   (0x0004)  
	unsigned char                                      UnknownData03_6[0x80];                                      // 0x07D8   (0x0080)  MISSED
};

/// Class /Script/OnlineSubsystemUtils.JoinSessionCallbackProxy
/// Size: 0x0168 (0x000030 - 0x000198)
class UJoinSessionCallbackProxy : public UOnlineBlueprintCallProxyBase : UOnlineBlueprintCallProxyBase
{ 
public:
	FMulticastInlineDelegate                           OnSuccess;                                                  // 0x0030   (0x0010)  
	FMulticastInlineDelegate                           OnFailure;                                                  // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0x148];                                     // 0x0050   (0x0148)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.JoinSessionCallbackProxy.JoinSession
	UJoinSessionCallbackProxy* JoinSession(UObject* WorldContextObject, APlayerController* PlayerController, FBlueprintSessionResult& SearchResult); // [0xc56eb0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.LeaderboardBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class ULeaderboardBlueprintLibrary : public UBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/OnlineSubsystemUtils.LeaderboardFlushCallbackProxy
/// Size: 0x0040 (0x000028 - 0x000068)
class ULeaderboardFlushCallbackProxy : public UObject : UObject
{ 
public:
	FMulticastInlineDelegate                           OnSuccess;                                                  // 0x0028   (0x0010)  
	FMulticastInlineDelegate                           OnFailure;                                                  // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0048   (0x0020)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.LeaderboardFlushCallbackProxy.CreateProxyObjectForFlush
	ULeaderboardFlushCallbackProxy* CreateProxyObjectForFlush(APlayerController* PlayerController, FName SessionName);       // [0xc53330] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.LeaderboardQueryCallbackProxy
/// Size: 0x0070 (0x000028 - 0x000098)
class ULeaderboardQueryCallbackProxy : public UObject : UObject
{ 
public:
	FMulticastInlineDelegate                           OnSuccess;                                                  // 0x0028   (0x0010)  
	FMulticastInlineDelegate                           OnFailure;                                                  // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_6[0x50];                                      // 0x0048   (0x0050)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.LeaderboardQueryCallbackProxy.CreateProxyObjectForIntQuery
	ULeaderboardQueryCallbackProxy* CreateProxyObjectForIntQuery(APlayerController* PlayerController, FName StatName);       // [0xc55180] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.LogoutCallbackProxy
/// Size: 0x0038 (0x000030 - 0x000068)
class ULogoutCallbackProxy : public UBlueprintAsyncActionBase : UBlueprintAsyncActionBase
{ 
public:
	FMulticastInlineDelegate                           OnSuccess;                                                  // 0x0030   (0x0010)  
	FMulticastInlineDelegate                           OnFailure;                                                  // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0050   (0x0018)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.LogoutCallbackProxy.Logout
	ULogoutCallbackProxy* Logout(UObject* WorldContextObject, APlayerController* PlayerController);                          // [0xc570a0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.OnlineBeacon
/// Size: 0x0030 (0x000290 - 0x0002C0)
class AOnlineBeacon : public AActor : AActor
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0290   (0x0008)  MISSED
	float                                              BeaconConnectionInitialTimeout;                             // 0x0298   (0x0004)  
	float                                              BeaconConnectionTimeout;                                    // 0x029C   (0x0004)  
	UNetDriver*                                        NetDriver;                                                  // 0x02A0   (0x0008)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x02A8   (0x0018)  MISSED
};

/// Class /Script/OnlineSubsystemUtils.OnlineBeaconClient
/// Size: 0x0060 (0x0002C0 - 0x000320)
class AOnlineBeaconClient : public AOnlineBeacon : AOnlineBeacon
{ 
public:
	AOnlineBeaconHostObject*                           BeaconOwner;                                                // 0x02C0   (0x0008)  
	UNetConnection*                                    BeaconConnection;                                           // 0x02C8   (0x0008)  
	EBeaconConnectionState                             ConnectionState;                                            // 0x02D0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x4F];                                      // 0x02D1   (0x004F)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.OnlineBeaconClient.ClientOnConnected
	void ClientOnConnected();                                                                                                // [0xc53080] Final|Net|NetReliableNative|Event|Private|NetClient 
};

/// Class /Script/OnlineSubsystemUtils.OnlineBeaconHost
/// Size: 0x0110 (0x0002C0 - 0x0003D0)
class AOnlineBeaconHost : public AOnlineBeacon : AOnlineBeacon
{ 
public:
	int32_t                                            ListenPort;                                                 // 0x02C0   (0x0004)  
	bool                                               bAuthRequired;                                              // 0x02C4   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x02C5   (0x0003)  MISSED
	uint32_t                                           MaxAuthTokenSize;                                           // 0x02C8   (0x0004)  
	unsigned char                                      UnknownData01_5[0x54];                                      // 0x02CC   (0x0054)  MISSED
	TArray<AOnlineBeaconClient*>                       ClientActors;                                               // 0x0320   (0x0010)  
	unsigned char                                      UnknownData02_6[0xA0];                                      // 0x0330   (0x00A0)  MISSED
};

/// Class /Script/OnlineSubsystemUtils.OnlineBeaconHostObject
/// Size: 0x0028 (0x000290 - 0x0002B8)
class AOnlineBeaconHostObject : public AActor : AActor
{ 
public:
	FString                                            BeaconTypeName;                                             // 0x0290   (0x0010)  
	UClass*                                            ClientBeaconActorClass;                                     // 0x02A0   (0x0008)  
	TArray<AOnlineBeaconClient*>                       ClientActors;                                               // 0x02A8   (0x0010)  
};

/// Class /Script/OnlineSubsystemUtils.OnlineEngineInterfaceImpl
/// Size: 0x0160 (0x000028 - 0x000188)
class UOnlineEngineInterfaceImpl : public UOnlineEngineInterface : UOnlineEngineInterface
{ 
public:
	TMap<FName, FName>                                 MappedUniqueNetIdTypes;                                     // 0x0028   (0x0050)  
	TArray<FName>                                      CompatibleUniqueNetIdTypes;                                 // 0x0078   (0x0010)  
	FName                                              VoiceSubsystemNameOverride;                                 // 0x0088   (0x0008)  
	unsigned char                                      UnknownData00_6[0xF8];                                      // 0x0090   (0x00F8)  MISSED
};

/// Class /Script/OnlineSubsystemUtils.OnlinePIESettings
/// Size: 0x0018 (0x000038 - 0x000050)
class UOnlinePIESettings : public UDeveloperSettings : UDeveloperSettings
{ 
public:
	bool                                               bOnlinePIEEnabled;                                          // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0039   (0x0007)  MISSED
	TArray<FPIELoginSettingsInternal>                  Logins;                                                     // 0x0040   (0x0010)  
};

/// Class /Script/OnlineSubsystemUtils.OnlineServicesEngineInterfaceImpl
/// Size: 0x0000 (0x000028 - 0x000028)
class UOnlineServicesEngineInterfaceImpl : public UOnlineEngineInterface : UOnlineEngineInterface
{ 
public:
};

/// Class /Script/OnlineSubsystemUtils.OnlineSessionClient
/// Size: 0x01B8 (0x000028 - 0x0001E0)
class UOnlineSessionClient : public UOnlineSession : UOnlineSession
{ 
public:
	unsigned char                                      UnknownData00_2[0x1B0];                                     // 0x0028   (0x01B0)  MISSED
	bool                                               bIsFromInvite;                                              // 0x01D8   (0x0001)  
	bool                                               bHandlingDisconnect;                                        // 0x01D9   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x01DA   (0x0006)  MISSED
};

/// Class /Script/OnlineSubsystemUtils.PartyBeaconClient
/// Size: 0x00C8 (0x000320 - 0x0003E8)
class APartyBeaconClient : public AOnlineBeaconClient : AOnlineBeaconClient
{ 
public:
	unsigned char                                      UnknownData00_2[0x30];                                      // 0x0320   (0x0030)  MISSED
	FString                                            DestSessionId;                                              // 0x0350   (0x0010)  
	FPartyReservation                                  PendingReservation;                                         // 0x0360   (0x0058)  
	EClientRequestType                                 RequestType;                                                // 0x03B8   (0x0001)  
	bool                                               bPendingReservationSent;                                    // 0x03B9   (0x0001)  
	bool                                               bCancelReservation;                                         // 0x03BA   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2D];                                      // 0x03BB   (0x002D)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.PartyBeaconClient.ServerUpdateReservationRequest
	void ServerUpdateReservationRequest(FString SessionId, FPartyReservation ReservationUpdate);                             // [0xc57b10] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/OnlineSubsystemUtils.PartyBeaconClient.ServerReservationRequest
	void ServerReservationRequest(FString SessionId, FPartyReservation Reservation);                                         // [0xc57880] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/OnlineSubsystemUtils.PartyBeaconClient.ServerRemoveMemberFromReservationRequest
	void ServerRemoveMemberFromReservationRequest(FString SessionId, FPartyReservation ReservationUpdate);                   // [0xc575f0] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/OnlineSubsystemUtils.PartyBeaconClient.ServerCancelReservationRequest
	void ServerCancelReservationRequest(FUniqueNetIdRepl PartyLeader);                                                       // [0xc57490] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/OnlineSubsystemUtils.PartyBeaconClient.ServerAddOrUpdateReservationRequest
	void ServerAddOrUpdateReservationRequest(FString SessionId, FPartyReservation Reservation);                              // [0xc57200] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationUpdates
	void ClientSendReservationUpdates(int32_t NumRemainingReservations);                                                     // [0xc53140] Net|NetReliableNative|Event|Public|NetClient 
	// Function /Script/OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationFull
	void ClientSendReservationFull();                                                                                        // [0xc53120] Net|NetReliableNative|Event|Public|NetClient 
	// Function /Script/OnlineSubsystemUtils.PartyBeaconClient.ClientReservationResponse
	void ClientReservationResponse(TEnumAsByte<EPartyReservationResult> ReservationResponse);                                // [0xc530a0] Net|NetReliableNative|Event|Public|NetClient 
	// Function /Script/OnlineSubsystemUtils.PartyBeaconClient.ClientCancelReservationResponse
	void ClientCancelReservationResponse(TEnumAsByte<EPartyReservationResult> ReservationResponse);                          // [0xc53000] Net|NetReliableNative|Event|Public|NetClient 
};

/// Class /Script/OnlineSubsystemUtils.PartyBeaconHost
/// Size: 0x0078 (0x0002B8 - 0x000330)
class APartyBeaconHost : public AOnlineBeaconHostObject : AOnlineBeaconHostObject
{ 
public:
	UPartyBeaconState*                                 State;                                                      // 0x02B8   (0x0008)  
	unsigned char                                      UnknownData00_5[0x60];                                      // 0x02C0   (0x0060)  MISSED
	bool                                               bLogoutOnSessionTimeout;                                    // 0x0320   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0321   (0x0003)  MISSED
	float                                              SessionTimeoutSecs;                                         // 0x0324   (0x0004)  
	float                                              TravelSessionTimeoutSecs;                                   // 0x0328   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x032C   (0x0004)  MISSED
};

/// Class /Script/OnlineSubsystemUtils.PartyBeaconState
/// Size: 0x0078 (0x000028 - 0x0000A0)
class UPartyBeaconState : public UObject : UObject
{ 
public:
	FName                                              SessionName;                                                // 0x0028   (0x0008)  
	int32_t                                            NumConsumedReservations;                                    // 0x0030   (0x0004)  
	int32_t                                            MaxReservations;                                            // 0x0034   (0x0004)  
	int32_t                                            NumTeams;                                                   // 0x0038   (0x0004)  
	int32_t                                            NumPlayersPerTeam;                                          // 0x003C   (0x0004)  
	FName                                              TeamAssignmentMethod;                                       // 0x0040   (0x0008)  
	int32_t                                            ReservedHostTeamNum;                                        // 0x0048   (0x0004)  
	int32_t                                            ForceTeamNum;                                               // 0x004C   (0x0004)  
	bool                                               bRestrictCrossConsole;                                      // 0x0050   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0051   (0x0007)  MISSED
	TArray<FString>                                    PlatformCrossplayRestrictions;                              // 0x0058   (0x0010)  
	TArray<FPartyBeaconCrossplayPlatformMapping>       PlatformTypeMapping;                                        // 0x0068   (0x0010)  
	bool                                               bEnableRemovalRequests;                                     // 0x0078   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0079   (0x0007)  MISSED
	TArray<FPartyReservation>                          Reservations;                                               // 0x0080   (0x0010)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x0090   (0x0010)  MISSED
};

/// Class /Script/OnlineSubsystemUtils.QuitMatchCallbackProxy
/// Size: 0x0048 (0x000030 - 0x000078)
class UQuitMatchCallbackProxy : public UOnlineBlueprintCallProxyBase : UOnlineBlueprintCallProxyBase
{ 
public:
	FMulticastInlineDelegate                           OnSuccess;                                                  // 0x0030   (0x0010)  
	FMulticastInlineDelegate                           OnFailure;                                                  // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x0050   (0x0028)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.QuitMatchCallbackProxy.QuitMatch
	UQuitMatchCallbackProxy* QuitMatch(UObject* WorldContextObject, APlayerController* PlayerController, FString MatchID, TEnumAsByte<EMPMatchOutcome> Outcome, int32_t TurnTimeoutInSeconds); // [0xc6f190] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.ShowLoginUICallbackProxy
/// Size: 0x0030 (0x000030 - 0x000060)
class UShowLoginUICallbackProxy : public UBlueprintAsyncActionBase : UBlueprintAsyncActionBase
{ 
public:
	FMulticastInlineDelegate                           OnSuccess;                                                  // 0x0030   (0x0010)  
	FMulticastInlineDelegate                           OnFailure;                                                  // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0050   (0x0010)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.ShowLoginUICallbackProxy.ShowExternalLoginUI
	UShowLoginUICallbackProxy* ShowExternalLoginUI(UObject* WorldContextObject, APlayerController* InPlayerController);      // [0xc6f8d0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.SpectatorBeaconClient
/// Size: 0x00F8 (0x000320 - 0x000418)
class ASpectatorBeaconClient : public AOnlineBeaconClient : AOnlineBeaconClient
{ 
public:
	unsigned char                                      UnknownData00_2[0x30];                                      // 0x0320   (0x0030)  MISSED
	FString                                            DestSessionId;                                              // 0x0350   (0x0010)  
	FSpectatorReservation                              PendingReservation;                                         // 0x0360   (0x0088)  
	ESpectatorClientRequestType                        RequestType;                                                // 0x03E8   (0x0001)  
	bool                                               bPendingReservationSent;                                    // 0x03E9   (0x0001)  
	bool                                               bCancelReservation;                                         // 0x03EA   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2D];                                      // 0x03EB   (0x002D)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.SpectatorBeaconClient.ServerReservationRequest
	void ServerReservationRequest(FString SessionId, FSpectatorReservation Reservation);                                     // [0xc6f670] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/OnlineSubsystemUtils.SpectatorBeaconClient.ServerCancelReservationRequest
	void ServerCancelReservationRequest(FUniqueNetIdRepl Spectator);                                                         // [0xc57490] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/OnlineSubsystemUtils.SpectatorBeaconClient.ClientSendReservationUpdates
	void ClientSendReservationUpdates(int32_t NumRemainingReservations);                                                     // [0xc6eb60] Net|NetReliableNative|Event|Public|NetClient 
	// Function /Script/OnlineSubsystemUtils.SpectatorBeaconClient.ClientSendReservationFull
	void ClientSendReservationFull();                                                                                        // [0xc6eb40] Net|NetReliableNative|Event|Public|NetClient 
	// Function /Script/OnlineSubsystemUtils.SpectatorBeaconClient.ClientReservationResponse
	void ClientReservationResponse(TEnumAsByte<ESpectatorReservationResult> ReservationResponse);                            // [0xc6eac0] Net|NetReliableNative|Event|Public|NetClient 
	// Function /Script/OnlineSubsystemUtils.SpectatorBeaconClient.ClientCancelReservationResponse
	void ClientCancelReservationResponse(TEnumAsByte<ESpectatorReservationResult> ReservationResponse);                      // [0xc6ea20] Net|NetReliableNative|Event|Public|NetClient 
};

/// Class /Script/OnlineSubsystemUtils.SpectatorBeaconHost
/// Size: 0x0078 (0x0002B8 - 0x000330)
class ASpectatorBeaconHost : public AOnlineBeaconHostObject : AOnlineBeaconHostObject
{ 
public:
	USpectatorBeaconState*                             State;                                                      // 0x02B8   (0x0008)  
	unsigned char                                      UnknownData00_5[0x60];                                      // 0x02C0   (0x0060)  MISSED
	bool                                               bLogoutOnSessionTimeout;                                    // 0x0320   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0321   (0x0003)  MISSED
	float                                              SessionTimeoutSecs;                                         // 0x0324   (0x0004)  
	float                                              TravelSessionTimeoutSecs;                                   // 0x0328   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x032C   (0x0004)  MISSED
};

/// Class /Script/OnlineSubsystemUtils.SpectatorBeaconState
/// Size: 0x0038 (0x000028 - 0x000060)
class USpectatorBeaconState : public UObject : UObject
{ 
public:
	FName                                              SessionName;                                                // 0x0028   (0x0008)  
	int32_t                                            NumConsumedReservations;                                    // 0x0030   (0x0004)  
	int32_t                                            MaxReservations;                                            // 0x0034   (0x0004)  
	bool                                               bRestrictCrossConsole;                                      // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0039   (0x0007)  MISSED
	TArray<FSpectatorReservation>                      Reservations;                                               // 0x0040   (0x0010)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0050   (0x0010)  MISSED
};

/// Class /Script/OnlineSubsystemUtils.TestBeaconClient
/// Size: 0x0000 (0x000320 - 0x000320)
class ATestBeaconClient : public AOnlineBeaconClient : AOnlineBeaconClient
{ 
public:
};

/// Class /Script/OnlineSubsystemUtils.TestBeaconHost
/// Size: 0x0000 (0x0002B8 - 0x0002B8)
class ATestBeaconHost : public AOnlineBeaconHostObject : AOnlineBeaconHostObject
{ 
public:
};

/// Class /Script/OnlineSubsystemUtils.TurnBasedBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UTurnBasedBlueprintLibrary : public UBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{ 
public:
};

/// Enum /Script/OnlineSubsystemUtils.EOnlineProxyStoreOfferDiscountType
/// Size: 0x05
enum EOnlineProxyStoreOfferDiscountType : uint8_t
{
	EOnlineProxyStoreOfferDiscountType__NotOnSale0                                   = 0,
	EOnlineProxyStoreOfferDiscountType__Percentage1                                  = 1,
	EOnlineProxyStoreOfferDiscountType__DiscountAmount2                              = 2,
	EOnlineProxyStoreOfferDiscountType__PayAmount3                                   = 3,
	EOnlineProxyStoreOfferDiscountType__EOnlineProxyStoreOfferDiscountType_MAX4      = 4
};

/// Enum /Script/OnlineSubsystemUtils.EInAppPurchaseStatus
/// Size: 0x07
enum EInAppPurchaseStatus : uint8_t
{
	EInAppPurchaseStatus__Invalid0                                                   = 0,
	EInAppPurchaseStatus__Failed1                                                    = 1,
	EInAppPurchaseStatus__Deferred2                                                  = 2,
	EInAppPurchaseStatus__Canceled3                                                  = 3,
	EInAppPurchaseStatus__Purchased4                                                 = 4,
	EInAppPurchaseStatus__Restored5                                                  = 5,
	EInAppPurchaseStatus__EInAppPurchaseStatus_MAX6                                  = 6
};

/// Enum /Script/OnlineSubsystemUtils.EBeaconConnectionState
/// Size: 0x05
enum EBeaconConnectionState : uint8_t
{
	EBeaconConnectionState__Invalid0                                                 = 0,
	EBeaconConnectionState__Closed1                                                  = 1,
	EBeaconConnectionState__Pending2                                                 = 2,
	EBeaconConnectionState__Open3                                                    = 3,
	EBeaconConnectionState__EBeaconConnectionState_MAX4                              = 4
};

/// Enum /Script/OnlineSubsystemUtils.EClientRequestType
/// Size: 0x09
enum EClientRequestType : uint8_t
{
	EClientRequestType__NonePending0                                                 = 0,
	EClientRequestType__ExistingSessionReservation1                                  = 1,
	EClientRequestType__ReservationUpdate2                                           = 2,
	EClientRequestType__EmptyServerReservation3                                      = 3,
	EClientRequestType__Reconnect4                                                   = 4,
	EClientRequestType__Abandon5                                                     = 5,
	EClientRequestType__ReservationRemoveMembers6                                    = 6,
	EClientRequestType__AddOrUpdateReservation7                                      = 7,
	EClientRequestType__EClientRequestType_MAX8                                      = 8
};

/// Enum /Script/OnlineSubsystemUtils.EPartyReservationResult
/// Size: 0x17
enum EPartyReservationResult : uint8_t
{
	EPartyReservationResult__NoResult0                                               = 0,
	EPartyReservationResult__RequestPending1                                         = 1,
	EPartyReservationResult__GeneralError2                                           = 2,
	EPartyReservationResult__PartyLimitReached3                                      = 3,
	EPartyReservationResult__IncorrectPlayerCount4                                   = 4,
	EPartyReservationResult__RequestTimedOut5                                        = 5,
	EPartyReservationResult__ReservationDuplicate6                                   = 6,
	EPartyReservationResult__ReservationNotFound7                                    = 7,
	EPartyReservationResult__ReservationAccepted8                                    = 8,
	EPartyReservationResult__ReservationDenied9                                      = 9,
	EPartyReservationResult__ReservationDenied_CrossPlayRestriction10                = 10,
	EPartyReservationResult__ReservationDenied_Banned11                              = 11,
	EPartyReservationResult__ReservationRequestCanceled12                            = 12,
	EPartyReservationResult__ReservationInvalid13                                    = 13,
	EPartyReservationResult__BadSessionId14                                          = 14,
	EPartyReservationResult__ReservationDenied_ContainsExistingPlayers15             = 15,
	EPartyReservationResult__EPartyReservationResult_MAX16                           = 16
};

/// Enum /Script/OnlineSubsystemUtils.ESpectatorClientRequestType
/// Size: 0x07
enum ESpectatorClientRequestType : uint8_t
{
	ESpectatorClientRequestType__NonePending0                                        = 0,
	ESpectatorClientRequestType__ExistingSessionReservation1                         = 1,
	ESpectatorClientRequestType__ReservationUpdate2                                  = 2,
	ESpectatorClientRequestType__EmptyServerReservation3                             = 3,
	ESpectatorClientRequestType__Reconnect4                                          = 4,
	ESpectatorClientRequestType__Abandon5                                            = 5,
	ESpectatorClientRequestType__ESpectatorClientRequestType_MAX6                    = 6
};

/// Enum /Script/OnlineSubsystemUtils.ESpectatorReservationResult
/// Size: 0x17
enum ESpectatorReservationResult : uint8_t
{
	ESpectatorReservationResult__NoResult0                                           = 0,
	ESpectatorReservationResult__RequestPending1                                     = 1,
	ESpectatorReservationResult__GeneralError2                                       = 2,
	ESpectatorReservationResult__SpectatorLimitReached3                              = 3,
	ESpectatorReservationResult__IncorrectPlayerCount4                               = 4,
	ESpectatorReservationResult__RequestTimedOut5                                    = 5,
	ESpectatorReservationResult__ReservationDuplicate6                               = 6,
	ESpectatorReservationResult__ReservationNotFound7                                = 7,
	ESpectatorReservationResult__ReservationAccepted8                                = 8,
	ESpectatorReservationResult__ReservationDenied9                                  = 9,
	ESpectatorReservationResult__ReservationDenied_CrossPlayRestriction10            = 10,
	ESpectatorReservationResult__ReservationDenied_Banned11                          = 11,
	ESpectatorReservationResult__ReservationRequestCanceled12                        = 12,
	ESpectatorReservationResult__ReservationInvalid13                                = 13,
	ESpectatorReservationResult__BadSessionId14                                      = 14,
	ESpectatorReservationResult__ReservationDenied_ContainsExistingPlayers15         = 15,
	ESpectatorReservationResult__ESpectatorReservationResult_MAX16                   = 16
};

