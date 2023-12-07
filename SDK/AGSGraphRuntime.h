
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package AGSGraphRuntime.

/// Class /Script/AGSGraphRuntime.AGSAction
/// Size: 0x0008 (0x000028 - 0x000030)
class UAGSAction : public UObject : UObject
{ 
public:
	APlayerController*                                 Controller;                                                 // 0x0028   (0x0008)  


	/// Functions
	// Function /Script/AGSGraphRuntime.AGSAction.ExecuteAction
	void ExecuteAction(APlayerController* PlayerController, UAGSGraphNode* nodeOwner);                                       // [0xc8aed0] Native|Event|Protected|BlueprintEvent 
};

/// Class /Script/AGSGraphRuntime.AGSCondition
/// Size: 0x0010 (0x000028 - 0x000038)
class UAGSCondition : public UObject : UObject
{ 
public:
	APlayerController*                                 Controller;                                                 // 0x0028   (0x0008)  
	UAGSGraphNode*                                     nodeOwner;                                                  // 0x0030   (0x0008)  


	/// Functions
	// Function /Script/AGSGraphRuntime.AGSCondition.VerifyCondition
	bool VerifyCondition(APlayerController* PlayerController);                                                               // [0xc8acd0] Native|Event|Protected|BlueprintEvent|Const 
	// Function /Script/AGSGraphRuntime.AGSCondition.GetNodeOwner
	UAGSGraphNode* GetNodeOwner();                                                                                           // [0xc8b350] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AGSGraphRuntime.ABGORCondition
/// Size: 0x0010 (0x000038 - 0x000048)
class UABGORCondition : public UAGSCondition : UAGSCondition
{ 
public:
	TArray<UAGSCondition*>                             OrConditions;                                               // 0x0038   (0x0010)  
};

/// Class /Script/AGSGraphRuntime.ABGANDCondition
/// Size: 0x0010 (0x000038 - 0x000048)
class UABGANDCondition : public UAGSCondition : UAGSCondition
{ 
public:
	TArray<UAGSCondition*>                             AndConditions;                                              // 0x0038   (0x0010)  
};

/// Class /Script/AGSGraphRuntime.AGSGraph
/// Size: 0x0080 (0x000028 - 0x0000A8)
class UAGSGraph : public UObject : UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x48];                                      // 0x0028   (0x0048)  MISSED
	APlayerController*                                 Controller;                                                 // 0x0070   (0x0008)  
	TArray<UAGSGraphNode*>                             RootNodes;                                                  // 0x0078   (0x0010)  
	TArray<UAGSGraphNode*>                             AllNodes;                                                   // 0x0088   (0x0010)  
	TArray<UAGSGraphNode*>                             ActivedNodes;                                               // 0x0098   (0x0010)  


	/// Functions
	// Function /Script/AGSGraphRuntime.AGSGraph.Print
	void Print(bool ToConsole, bool ToScreen);                                                                               // [0xc8b600] Final|Native|Public|BlueprintCallable 
	// Function /Script/AGSGraphRuntime.AGSGraph.GetNodesByLevel
	void GetNodesByLevel(int32_t Level, TArray<UAGSGraphNode*>& Nodes);                                                      // [0xc8b3a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AGSGraphRuntime.AGSGraph.GetLevelNum
	int32_t GetLevelNum();                                                                                                   // [0xc8b370] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AGSGraphRuntime.AGSGraph.GetAllNodes
	TArray<UAGSGraphNode*> GetAllNodes();                                                                                    // [0xc8b070] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AGSGraphRuntime.AGSGraph.GetActiveNodes
	TArray<UAGSGraphNode*> GetActiveNodes();                                                                                 // [0xc8afa0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AGSGraphRuntime.AGSGraph.DeactivateNode
	bool DeactivateNode(UAGSGraphNode* Node);                                                                                // [0xc8ae30] Native|Public|BlueprintCallable 
	// Function /Script/AGSGraphRuntime.AGSGraph.DeactivateAllNodes
	void DeactivateAllNodes();                                                                                               // [0xc8ad70] Final|Native|Public|BlueprintCallable 
	// Function /Script/AGSGraphRuntime.AGSGraph.ActivateNode
	bool ActivateNode(UAGSGraphNode* Node);                                                                                  // [0xc8acd0] Native|Public|BlueprintCallable 
};

/// Class /Script/AGSGraphRuntime.AGSGraphEdge
/// Size: 0x0018 (0x000028 - 0x000040)
class UAGSGraphEdge : public UObject : UObject
{ 
public:
	UAGSGraph*                                         Graph;                                                      // 0x0028   (0x0008)  
	UAGSGraphNode*                                     StartNode;                                                  // 0x0030   (0x0008)  
	UAGSGraphNode*                                     EndNode;                                                    // 0x0038   (0x0008)  


	/// Functions
	// Function /Script/AGSGraphRuntime.AGSGraphEdge.GetGraph
	UAGSGraph* GetGraph();                                                                                                   // [0xc8b330] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AGSGraphRuntime.AGSGraphNode
/// Size: 0x0080 (0x000028 - 0x0000A8)
class UAGSGraphNode : public UObject : UObject
{ 
public:
	ENodeState                                         NodeState;                                                  // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0029   (0x0007)  MISSED
	UAGSGraph*                                         Graph;                                                      // 0x0030   (0x0008)  
	TArray<UAGSGraphNode*>                             ParentNodes;                                                // 0x0038   (0x0010)  
	TArray<UAGSGraphNode*>                             ChildrenNodes;                                              // 0x0048   (0x0010)  
	TMap<UAGSGraphNode*, UAGSGraphEdge*>               Edges;                                                      // 0x0058   (0x0050)  


	/// Functions
	// Function /Script/AGSGraphRuntime.AGSGraphNode.IsLeafNode
	bool IsLeafNode();                                                                                                       // [0xc8b5e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AGSGraphRuntime.AGSGraphNode.GetGraph
	UAGSGraph* GetGraph();                                                                                                   // [0xc8b350] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AGSGraphRuntime.AGSGraphNode.GetEdge
	UAGSGraphEdge* GetEdge(UAGSGraphNode* ChildNode);                                                                        // [0xc8b1e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AGSGraphRuntime.AGSGraphNode.GetDescription
	FText GetDescription();                                                                                                  // [0xc8b140] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
};

/// Enum /Script/AGSGraphRuntime.ENodeState
/// Size: 0x03
enum ENodeState : uint8_t
{
	ENodeState__Enabled0                                                             = 0,
	ENodeState__Disabled1                                                            = 1,
	ENodeState__ENodeState_MAX2                                                      = 2
};

