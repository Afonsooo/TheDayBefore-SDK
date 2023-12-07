
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package ReplicationGraph.

/// Struct /Script/ReplicationGraph.ConnectionAlwaysRelevantNodePair
/// Size: 0x0010 (0x000000 - 0x000010)
struct FConnectionAlwaysRelevantNodePair
{ 
	UNetConnection*                                    NetConnection;                                              // 0x0000   (0x0008)  
	UReplicationGraphNode_AlwaysRelevant_ForConnection* Node;                                                      // 0x0008   (0x0008)  
};

/// Struct /Script/ReplicationGraph.AlwaysRelevantActorInfo
/// Size: 0x0018 (0x000000 - 0x000018)
struct FAlwaysRelevantActorInfo
{ 
	UNetConnection*                                    Connection;                                                 // 0x0000   (0x0008)  
	AActor*                                            LastViewer;                                                 // 0x0008   (0x0008)  
	AActor*                                            LastViewTarget;                                             // 0x0010   (0x0008)  
};

/// Struct /Script/ReplicationGraph.TearOffActorInfo
/// Size: 0x0018 (0x000000 - 0x000018)
struct FTearOffActorInfo
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
	AActor*                                            Actor;                                                      // 0x0008   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0010   (0x0008)  MISSED
};

/// Struct /Script/ReplicationGraph.LastLocationGatherInfo
/// Size: 0x0038 (0x000000 - 0x000038)
struct FLastLocationGatherInfo
{ 
	UNetConnection*                                    Connection;                                                 // 0x0000   (0x0008)  
	FVector                                            LastLocation;                                               // 0x0008   (0x0018)  
	FVector                                            LastOutOfRangeLocationCheck;                                // 0x0020   (0x0018)  
};

/// Struct /Script/ReplicationGraph.ClassReplicationInfo
/// Size: 0x0070 (0x000000 - 0x000070)
struct FClassReplicationInfo
{ 
	float                                              DistancePriorityScale;                                      // 0x0000   (0x0004)  
	float                                              StarvationPriorityScale;                                    // 0x0004   (0x0004)  
	float                                              AccumulatedNetPriorityBias;                                 // 0x0008   (0x0004)  
	uint16_t                                           ReplicationPeriodFrame;                                     // 0x000C   (0x0002)  
	uint16_t                                           FastPath_ReplicationPeriodFrame;                            // 0x000E   (0x0002)  
	uint16_t                                           ActorChannelFrameTimeout;                                   // 0x0010   (0x0002)  
	unsigned char                                      UnknownData00_5[0x56];                                      // 0x0012   (0x0056)  MISSED
	float                                              CullDistance;                                               // 0x0068   (0x0004)  
	float                                              CullDistanceSquared;                                        // 0x006C   (0x0004)  
};

/// Class /Script/ReplicationGraph.ReplicationGraph
/// Size: 0x0548 (0x000028 - 0x000570)
class UReplicationGraph : public UReplicationDriver : UReplicationDriver
{ 
public:
	UClass*                                            ReplicationConnectionManagerClass;                          // 0x0028   (0x0008)  
	UNetDriver*                                        NetDriver;                                                  // 0x0030   (0x0008)  
	TArray<UNetReplicationGraphConnection*>            Connections;                                                // 0x0038   (0x0010)  
	TArray<UNetReplicationGraphConnection*>            PendingConnections;                                         // 0x0048   (0x0010)  
	unsigned char                                      UnknownData00_5[0x40];                                      // 0x0058   (0x0040)  MISSED
	TArray<UReplicationGraphNode*>                     GlobalGraphNodes;                                           // 0x0098   (0x0010)  
	TArray<UReplicationGraphNode*>                     PrepareForReplicationNodes;                                 // 0x00A8   (0x0010)  
	unsigned char                                      UnknownData01_6[0x4B8];                                     // 0x00B8   (0x04B8)  MISSED
};

/// Class /Script/ReplicationGraph.BasicReplicationGraph
/// Size: 0x0030 (0x000570 - 0x0005A0)
class UBasicReplicationGraph : public UReplicationGraph : UReplicationGraph
{ 
public:
	UReplicationGraphNode_GridSpatialization2D*        GridNode;                                                   // 0x0570   (0x0008)  
	UReplicationGraphNode_ActorList*                   AlwaysRelevantNode;                                         // 0x0578   (0x0008)  
	TArray<FConnectionAlwaysRelevantNodePair>          AlwaysRelevantForConnectionList;                            // 0x0580   (0x0010)  
	TArray<AActor*>                                    ActorsWithoutNetConnection;                                 // 0x0590   (0x0010)  
};

/// Class /Script/ReplicationGraph.ReplicationGraphNode
/// Size: 0x0028 (0x000028 - 0x000050)
class UReplicationGraphNode : public UObject : UObject
{ 
public:
	TArray<UReplicationGraphNode*>                     AllChildNodes;                                              // 0x0028   (0x0010)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0038   (0x0018)  MISSED
};

/// Class /Script/ReplicationGraph.ReplicationGraphNode_ActorList
/// Size: 0x0080 (0x000050 - 0x0000D0)
class UReplicationGraphNode_ActorList : public UReplicationGraphNode : UReplicationGraphNode
{ 
public:
	unsigned char                                      UnknownData00_1[0x80];                                      // 0x0050   (0x0080)  MISSED
};

/// Class /Script/ReplicationGraph.ReplicationGraphNode_ActorListFrequencyBuckets
/// Size: 0x00B8 (0x000050 - 0x000108)
class UReplicationGraphNode_ActorListFrequencyBuckets : public UReplicationGraphNode : UReplicationGraphNode
{ 
public:
	unsigned char                                      UnknownData00_1[0xB8];                                      // 0x0050   (0x00B8)  MISSED
};

/// Class /Script/ReplicationGraph.ReplicationGraphNode_DynamicSpatialFrequency
/// Size: 0x0030 (0x0000D0 - 0x000100)
class UReplicationGraphNode_DynamicSpatialFrequency : public UReplicationGraphNode_ActorList : UReplicationGraphNode_ActorList
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x00D0   (0x0030)  MISSED
};

/// Class /Script/ReplicationGraph.ReplicationGraphNode_ConnectionDormancyNode
/// Size: 0x0080 (0x0000D0 - 0x000150)
class UReplicationGraphNode_ConnectionDormancyNode : public UReplicationGraphNode_ActorList : UReplicationGraphNode_ActorList
{ 
public:
	unsigned char                                      UnknownData00_1[0x80];                                      // 0x00D0   (0x0080)  MISSED
};

/// Class /Script/ReplicationGraph.ReplicationGraphNode_DormancyNode
/// Size: 0x0010 (0x0000D0 - 0x0000E0)
class UReplicationGraphNode_DormancyNode : public UReplicationGraphNode_ActorList : UReplicationGraphNode_ActorList
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x00D0   (0x0010)  MISSED
};

/// Class /Script/ReplicationGraph.ReplicationGraphNode_GridCell
/// Size: 0x0050 (0x0000D0 - 0x000120)
class UReplicationGraphNode_GridCell : public UReplicationGraphNode_ActorList : UReplicationGraphNode_ActorList
{ 
public:
	unsigned char                                      UnknownData00_2[0x40];                                      // 0x00D0   (0x0040)  MISSED
	UReplicationGraphNode*                             DynamicNode;                                                // 0x0110   (0x0008)  
	UReplicationGraphNode_DormancyNode*                DormancyNode;                                               // 0x0118   (0x0008)  
};

/// Class /Script/ReplicationGraph.ReplicationGraphNode_GridSpatialization2D
/// Size: 0x0220 (0x000050 - 0x000270)
class UReplicationGraphNode_GridSpatialization2D : public UReplicationGraphNode : UReplicationGraphNode
{ 
public:
	unsigned char                                      UnknownData00_1[0x220];                                     // 0x0050   (0x0220)  MISSED
};

/// Class /Script/ReplicationGraph.ReplicationGraphNode_AlwaysRelevant
/// Size: 0x0018 (0x000050 - 0x000068)
class UReplicationGraphNode_AlwaysRelevant : public UReplicationGraphNode : UReplicationGraphNode
{ 
public:
	UReplicationGraphNode*                             ChildNode;                                                  // 0x0050   (0x0008)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0058   (0x0010)  MISSED
};

/// Class /Script/ReplicationGraph.ReplicationGraphNode_AlwaysRelevant_ForConnection
/// Size: 0x0070 (0x0000D0 - 0x000140)
class UReplicationGraphNode_AlwaysRelevant_ForConnection : public UReplicationGraphNode_ActorList : UReplicationGraphNode_ActorList
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x00D0   (0x0010)  MISSED
	TArray<FAlwaysRelevantActorInfo>                   PastRelevantActors;                                         // 0x00E0   (0x0010)  
	unsigned char                                      UnknownData01_6[0x50];                                      // 0x00F0   (0x0050)  MISSED
};

/// Class /Script/ReplicationGraph.ReplicationGraphNode_TearOff_ForConnection
/// Size: 0x0020 (0x000050 - 0x000070)
class UReplicationGraphNode_TearOff_ForConnection : public UReplicationGraphNode : UReplicationGraphNode
{ 
public:
	TArray<FTearOffActorInfo>                          TearOffActors;                                              // 0x0050   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0060   (0x0010)  MISSED
};

/// Class /Script/ReplicationGraph.NetReplicationGraphConnection
/// Size: 0x0348 (0x000028 - 0x000370)
class UNetReplicationGraphConnection : public UReplicationConnectionDriver : UReplicationConnectionDriver
{ 
public:
	UNetConnection*                                    NetConnection;                                              // 0x0028   (0x0008)  
	unsigned char                                      UnknownData00_5[0x144];                                     // 0x0030   (0x0144)  MISSED
	TWeakObjectPtr<AReplicationGraphDebugActor*>       DebugActor;                                                 // 0x0174   (0x0008)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x017C   (0x0004)  MISSED
	TArray<FLastLocationGatherInfo>                    LastGatherLocations;                                        // 0x0180   (0x0010)  
	unsigned char                                      UnknownData02_5[0xA8];                                      // 0x0190   (0x00A8)  MISSED
	TArray<UReplicationGraphNode*>                     ConnectionGraphNodes;                                       // 0x0238   (0x0010)  
	UReplicationGraphNode_TearOff_ForConnection*       TearOffNode;                                                // 0x0248   (0x0008)  
	unsigned char                                      UnknownData03_6[0x120];                                     // 0x0250   (0x0120)  MISSED
};

/// Class /Script/ReplicationGraph.ReplicationGraphDebugActor
/// Size: 0x0010 (0x000290 - 0x0002A0)
class AReplicationGraphDebugActor : public AActor : AActor
{ 
public:
	UReplicationGraph*                                 ReplicationGraph;                                           // 0x0290   (0x0008)  
	UNetReplicationGraphConnection*                    ConnectionManager;                                          // 0x0298   (0x0008)  


	/// Functions
	// Function /Script/ReplicationGraph.ReplicationGraphDebugActor.ServerStopDebugging
	void ServerStopDebugging();                                                                                              // [0x4ac2e00] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/ReplicationGraph.ReplicationGraphDebugActor.ServerStartDebugging
	void ServerStartDebugging();                                                                                             // [0x4ac2de0] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/ReplicationGraph.ReplicationGraphDebugActor.ServerSetPeriodFrameForClass
	void ServerSetPeriodFrameForClass(UClass* Class, int32_t PeriodFrame);                                                   // [0x4ac2d10] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/ReplicationGraph.ReplicationGraphDebugActor.ServerSetCullDistanceForClass
	void ServerSetCullDistanceForClass(UClass* Class, float CullDistance);                                                   // [0x4ac2c40] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/ReplicationGraph.ReplicationGraphDebugActor.ServerSetConditionalActorBreakpoint
	void ServerSetConditionalActorBreakpoint(AActor* Actor);                                                                 // [0x4353600] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/ReplicationGraph.ReplicationGraphDebugActor.ServerPrintCullDistances
	void ServerPrintCullDistances();                                                                                         // [0x3d05480] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/ReplicationGraph.ReplicationGraphDebugActor.ServerPrintAllActorInfo
	void ServerPrintAllActorInfo(FString Str);                                                                               // [0x4ac2ba0] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/ReplicationGraph.ReplicationGraphDebugActor.ServerCellInfo
	void ServerCellInfo();                                                                                                   // [0x4ac2b80] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/ReplicationGraph.ReplicationGraphDebugActor.ClientCellInfo
	void ClientCellInfo(FVector CellLocation, FVector CellExtent, TArray<AActor*> Actors);                                   // [0x4ac2a20] Net|NetReliableNative|Event|Public|HasDefaults|NetClient 
};

