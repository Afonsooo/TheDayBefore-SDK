
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package Agones.

/// Struct /Script/Agones.AgonesError
/// Size: 0x0010 (0x000000 - 0x000010)
struct FAgonesError
{ 
	FString                                            ErrorMessage;                                               // 0x0000   (0x0010)  
};

/// Struct /Script/Agones.EmptyResponse
/// Size: 0x0001 (0x000000 - 0x000001)
struct FEmptyResponse
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/Agones.GameServerResponse
/// Size: 0x0138 (0x000000 - 0x000138)
struct FGameServerResponse
{ 
	FStatus                                            Status;                                                     // 0x0000   (0x0030)  
	FObjectMeta                                        ObjectMeta;                                                 // 0x0030   (0x00F8)  
	FSpec                                              Spec;                                                       // 0x0128   (0x0010)  
};

/// Struct /Script/Agones.Spec
/// Size: 0x0010 (0x000000 - 0x000010)
struct FSpec
{ 
	FHealth                                            Health;                                                     // 0x0000   (0x0010)  
};

/// Struct /Script/Agones.Health
/// Size: 0x0010 (0x000000 - 0x000010)
struct FHealth
{ 
	bool                                               bDisabled;                                                  // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            PeriodSeconds;                                              // 0x0004   (0x0004)  
	int32_t                                            FailureThreshold;                                           // 0x0008   (0x0004)  
	int32_t                                            InitialDelaySeconds;                                        // 0x000C   (0x0004)  
};

/// Struct /Script/Agones.ObjectMeta
/// Size: 0x00F8 (0x000000 - 0x0000F8)
struct FObjectMeta
{ 
	FString                                            Name;                                                       // 0x0000   (0x0010)  
	FString                                            Namespace;                                                  // 0x0010   (0x0010)  
	FString                                            Uid;                                                        // 0x0020   (0x0010)  
	FString                                            ResourceVersion;                                            // 0x0030   (0x0010)  
	int64_t                                            Generation;                                                 // 0x0040   (0x0008)  
	int64_t                                            CreationTimestamp;                                          // 0x0048   (0x0008)  
	int64_t                                            DeletionTimestamp;                                          // 0x0050   (0x0008)  
	TMap<FString, FString>                             Annotations;                                                // 0x0058   (0x0050)  
	TMap<FString, FString>                             Labels;                                                     // 0x00A8   (0x0050)  
};

/// Struct /Script/Agones.Status
/// Size: 0x0030 (0x000000 - 0x000030)
struct FStatus
{ 
	FString                                            State;                                                      // 0x0000   (0x0010)  
	FString                                            Address;                                                    // 0x0010   (0x0010)  
	TArray<FPort>                                      Ports;                                                      // 0x0020   (0x0010)  
};

/// Struct /Script/Agones.Port
/// Size: 0x0018 (0x000000 - 0x000018)
struct FPort
{ 
	FString                                            Name;                                                       // 0x0000   (0x0010)  
	int32_t                                            Port;                                                       // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/Agones.ConnectedPlayersResponse
/// Size: 0x0010 (0x000000 - 0x000010)
struct FConnectedPlayersResponse
{ 
	TArray<FString>                                    ConnectedPlayers;                                           // 0x0000   (0x0010)  
};

/// Struct /Script/Agones.CountResponse
/// Size: 0x0008 (0x000000 - 0x000008)
struct FCountResponse
{ 
	int64_t                                            Count;                                                      // 0x0000   (0x0008)  
};

/// Struct /Script/Agones.ConnectedResponse
/// Size: 0x0001 (0x000000 - 0x000001)
struct FConnectedResponse
{ 
	bool                                               bConnected;                                                 // 0x0000   (0x0001)  
};

/// Struct /Script/Agones.DisconnectResponse
/// Size: 0x0001 (0x000000 - 0x000001)
struct FDisconnectResponse
{ 
	bool                                               bDisconnected;                                              // 0x0000   (0x0001)  
};

/// Struct /Script/Agones.KeyValuePair
/// Size: 0x0020 (0x000000 - 0x000020)
struct FKeyValuePair
{ 
	FString                                            Key;                                                        // 0x0000   (0x0010)  
	FString                                            Value;                                                      // 0x0010   (0x0010)  
};

/// Struct /Script/Agones.Duration
/// Size: 0x0008 (0x000000 - 0x000008)
struct FDuration
{ 
	int64_t                                            Seconds;                                                    // 0x0000   (0x0008)  
};

/// Struct /Script/Agones.AgonesPlayer
/// Size: 0x0010 (0x000000 - 0x000010)
struct FAgonesPlayer
{ 
	FString                                            PlayerID;                                                   // 0x0000   (0x0010)  
};

/// Struct /Script/Agones.PlayerCapacity
/// Size: 0x0008 (0x000000 - 0x000008)
struct FPlayerCapacity
{ 
	int64_t                                            Count;                                                      // 0x0000   (0x0008)  
};

/// Class /Script/Agones.AgonesComponent
/// Size: 0x0070 (0x0000A0 - 0x000110)
class UAgonesComponent : public UActorComponent : UActorComponent
{ 
public:
	FString                                            HttpPort;                                                   // 0x00A0   (0x0010)  
	float                                              HealthRateSeconds;                                          // 0x00B0   (0x0004)  
	bool                                               bDisableAutoConnect;                                        // 0x00B4   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00B5   (0x0003)  MISSED
	FMulticastInlineDelegate                           ConnectedDelegate;                                          // 0x00B8   (0x0010)  
	unsigned char                                      UnknownData01_6[0x48];                                      // 0x00C8   (0x0048)  MISSED


	/// Functions
	// Function /Script/Agones.AgonesComponent.WatchGameServer
	void WatchGameServer(FDelegateProperty WatchDelegate);                                                                   // [0x171a110] Final|Native|Public|BlueprintCallable 
	// Function /Script/Agones.AgonesComponent.Shutdown
	void Shutdown(FDelegateProperty SuccessDelegate, FDelegateProperty ErrorDelegate);                                       // [0x1719ef0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Agones.AgonesComponent.SetPlayerCapacity
	void SetPlayerCapacity(int64_t Count, FDelegateProperty SuccessDelegate, FDelegateProperty ErrorDelegate);               // [0x1719dc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Agones.AgonesComponent.SetLabel
	void SetLabel(FString Key, FString Value, FDelegateProperty SuccessDelegate, FDelegateProperty ErrorDelegate);           // [0x1719c20] Final|Native|Public|BlueprintCallable 
	// Function /Script/Agones.AgonesComponent.SetAnnotation
	void SetAnnotation(FString Key, FString Value, FDelegateProperty SuccessDelegate, FDelegateProperty ErrorDelegate);      // [0x1719a80] Final|Native|Public|BlueprintCallable 
	// Function /Script/Agones.AgonesComponent.Reserve
	void Reserve(int64_t Seconds, FDelegateProperty SuccessDelegate, FDelegateProperty ErrorDelegate);                       // [0x1719950] Final|Native|Public|BlueprintCallable 
	// Function /Script/Agones.AgonesComponent.Ready
	void Ready(FDelegateProperty SuccessDelegate, FDelegateProperty ErrorDelegate);                                          // [0x1719860] Final|Native|Public|BlueprintCallable 
	// Function /Script/Agones.AgonesComponent.PlayerDisconnect
	void PlayerDisconnect(FString PlayerID, FDelegateProperty SuccessDelegate, FDelegateProperty ErrorDelegate);             // [0x17196c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Agones.AgonesComponent.PlayerConnect
	void PlayerConnect(FString PlayerID, FDelegateProperty SuccessDelegate, FDelegateProperty ErrorDelegate);                // [0x1719520] Final|Native|Public|BlueprintCallable 
	// Function /Script/Agones.AgonesComponent.IsPlayerConnected
	void IsPlayerConnected(FString PlayerID, FDelegateProperty SuccessDelegate, FDelegateProperty ErrorDelegate);            // [0x1719380] Final|Native|Public|BlueprintCallable 
	// Function /Script/Agones.AgonesComponent.HealthPing
	void HealthPing(float RateSeconds);                                                                                      // [0x1719300] Final|Native|Public|BlueprintCallable 
	// Function /Script/Agones.AgonesComponent.Health
	void Health(FDelegateProperty SuccessDelegate, FDelegateProperty ErrorDelegate);                                         // [0x1719210] Final|Native|Public|BlueprintCallable 
	// Function /Script/Agones.AgonesComponent.GetPlayerCount
	void GetPlayerCount(FDelegateProperty SuccessDelegate, FDelegateProperty ErrorDelegate);                                 // [0x1719000] Final|Native|Public|BlueprintCallable 
	// Function /Script/Agones.AgonesComponent.GetPlayerCapacity
	void GetPlayerCapacity(FDelegateProperty SuccessDelegate, FDelegateProperty ErrorDelegate);                              // [0x1718df0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Agones.AgonesComponent.GetConnectedPlayers
	void GetConnectedPlayers(FDelegateProperty SuccessDelegate, FDelegateProperty ErrorDelegate);                            // [0x1718be0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Agones.AgonesComponent.GameServer
	void GameServer(FDelegateProperty SuccessDelegate, FDelegateProperty ErrorDelegate);                                     // [0x1718af0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Agones.AgonesComponent.ConnectSuccess
	void ConnectSuccess(FGameServerResponse GameServerResponse);                                                             // [0x17187e0] Final|Native|Private 
	// Function /Script/Agones.AgonesComponent.Connect
	void Connect();                                                                                                          // [0x17187c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Agones.AgonesComponent.Allocate
	void Allocate(FDelegateProperty SuccessDelegate, FDelegateProperty ErrorDelegate);                                       // [0x17185a0] Final|Native|Public|BlueprintCallable 
};

