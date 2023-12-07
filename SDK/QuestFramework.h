
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package QuestFramework.

/// Struct /Script/QuestFramework.QuestEventPayload
/// Size: 0x0020 (0x000000 - 0x000020)
struct FQuestEventPayload
{ 
	int32_t                                            IntegerParameter;                                           // 0x0000   (0x0004)  
	float                                              FloatParameter;                                             // 0x0004   (0x0004)  
	bool                                               bBooleanParameter;                                          // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0009   (0x0007)  MISSED
	UClass*                                            ClassParameter;                                             // 0x0010   (0x0008)  
	UObject*                                           ObjectParameter;                                            // 0x0018   (0x0008)  
};

/// Struct /Script/QuestFramework.QuestConditions
/// Size: 0x0018 (0x000000 - 0x000018)
struct FQuestConditions
{ 
	TArray<UQuestCondition*>                           Conditions;                                                 // 0x0000   (0x0010)  
	EQuestConditionCompareMethod                       ComparisonMethod;                                           // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/QuestFramework.QuestAssetLibrary
/// Size: 0x0020 (0x000000 - 0x000020)
struct FQuestAssetLibrary
{ 
	TArray<FString>                                    Paths;                                                      // 0x0000   (0x0010)  
	UObjectLibrary*                                    QuestAssetObjectLibrary;                                    // 0x0010   (0x0008)  
	bool                                               bInitialized;                                               // 0x0018   (0x0001)  
	bool                                               bLoaded;                                                    // 0x0019   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x001A   (0x0006)  MISSED
};

/// Struct /Script/QuestFramework.QuestContextMessageListener
/// Size: 0x0010 (0x000000 - 0x000010)
struct FQuestContextMessageListener
{ 
	UQuestContext*                                     Context;                                                    // 0x0000   (0x0008)  
	UObject*                                           Listener;                                                   // 0x0008   (0x0008)  
};

/// Struct /Script/QuestFramework.QuestMemoryBlock
/// Size: 0x08F8 (0x000000 - 0x0008F8)
struct FQuestMemoryBlock
{ 
	TMap<FName, int32_t>                               IntegerVariables;                                           // 0x0000   (0x0050)  
	TMap<FName, float>                                 FloatVariables;                                             // 0x0050   (0x0050)  
	TMap<FName, bool>                                  BoolVariables;                                              // 0x00A0   (0x0050)  
	unsigned char                                      UnknownData00_6[0x808];                                     // 0x00F0   (0x0808)  MISSED
};

/// Struct /Script/QuestFramework.QuestRepVar_Int
/// Size: 0x000C (0x000000 - 0x00000C)
struct FQuestRepVar_Int
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
	int32_t                                            Value;                                                      // 0x0008   (0x0004)  
};

/// Struct /Script/QuestFramework.QuestRepVar_Float
/// Size: 0x000C (0x000000 - 0x00000C)
struct FQuestRepVar_Float
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
	float                                              Value;                                                      // 0x0008   (0x0004)  
};

/// Struct /Script/QuestFramework.QuestRepVar_Bool
/// Size: 0x000C (0x000000 - 0x00000C)
struct FQuestRepVar_Bool
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
	bool                                               Value;                                                      // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0009   (0x0003)  MISSED
};

/// Struct /Script/QuestFramework.QuestMemoryBlockReplicator
/// Size: 0x0120 (0x000000 - 0x000120)
struct FQuestMemoryBlockReplicator
{ 
	TArray<FQuestRepVar_Int>                           Integers;                                                   // 0x0000   (0x0010)  
	TArray<FQuestRepVar_Float>                         Floats;                                                     // 0x0010   (0x0010)  
	TArray<FQuestRepVar_Bool>                          Bools;                                                      // 0x0020   (0x0010)  
	unsigned char                                      UnknownData00_6[0xF0];                                      // 0x0030   (0x00F0)  MISSED
};

/// Struct /Script/QuestFramework.QuestVariable
/// Size: 0x000C (0x000000 - 0x00000C)
struct FQuestVariable
{ 
	EQuestVariableType                                 Type;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	FName                                              Variable;                                                   // 0x0004   (0x0008)  
};

/// Struct /Script/QuestFramework.QuestVariableBounds
/// Size: 0x0020 (0x000000 - 0x000020)
struct FQuestVariableBounds
{ 
	FQuestVariable                                     Variable;                                                   // 0x0000   (0x000C)  
	EQuestValueClamp                                   ClampOperation;                                             // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x000D   (0x0003)  MISSED
	int32_t                                            MinInteger;                                                 // 0x0010   (0x0004)  
	int32_t                                            MaxInteger;                                                 // 0x0014   (0x0004)  
	float                                              MinFloat;                                                   // 0x0018   (0x0004)  
	float                                              MaxFloat;                                                   // 0x001C   (0x0004)  
};

/// Struct /Script/QuestFramework.QuestVariableInitializer
/// Size: 0x0018 (0x000000 - 0x000018)
struct FQuestVariableInitializer
{ 
	FQuestVariable                                     Variable;                                                   // 0x0000   (0x000C)  
	int32_t                                            IntegerValue;                                               // 0x000C   (0x0004)  
	float                                              FloatValue;                                                 // 0x0010   (0x0004)  
	bool                                               BoolValue;                                                  // 0x0014   (0x0001)  
	bool                                               bAdditive;                                                  // 0x0015   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0016   (0x0002)  MISSED
};

/// Struct /Script/QuestFramework.DefaultQuestVariable
/// Size: 0x0038 (0x000000 - 0x000038)
struct FDefaultQuestVariable
{ 
	FQuestVariableInitializer                          Initializer;                                                // 0x0000   (0x0018)  
	bool                                               bReplicates;                                                // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0019   (0x0007)  MISSED
	FText                                              Description;                                                // 0x0020   (0x0018)  
};

/// Struct /Script/QuestFramework.QuestVariableInfo
/// Size: 0x0038 (0x000000 - 0x000038)
struct FQuestVariableInfo
{ 
	unsigned char                                      UnknownData00_1[0x38];                                      // 0x0000   (0x0038)  MISSED
};

/// Struct /Script/QuestFramework.QuestVariableComparison
/// Size: 0x002C (0x000000 - 0x00002C)
struct FQuestVariableComparison
{ 
	EQuestComparisonOperator                           Operator;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	FQuestVariable                                     Variable;                                                   // 0x0004   (0x000C)  
	EQuestVariableComparisonType                       ComparisonType;                                             // 0x0010   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0011   (0x0003)  MISSED
	int32_t                                            OtherInteger;                                               // 0x0014   (0x0004)  
	float                                              OtherFloat;                                                 // 0x0018   (0x0004)  
	bool                                               bOtherBool;                                                 // 0x001C   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x001D   (0x0003)  MISSED
	FQuestVariable                                     OtherVariable;                                              // 0x0020   (0x000C)  
};

/// Struct /Script/QuestFramework.QuestMemoryQuery
/// Size: 0x0018 (0x000000 - 0x000018)
struct FQuestMemoryQuery
{ 
	TArray<FQuestVariableComparison>                   Comparisons;                                                // 0x0000   (0x0010)  
	EQuestLogicalOperator                              Operator;                                                   // 0x0010   (0x0001)  
	bool                                               bInvertResult;                                              // 0x0011   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0012   (0x0006)  MISSED
};

/// Struct /Script/QuestFramework.QuestStageObjectives
/// Size: 0x0010 (0x000000 - 0x000010)
struct FQuestStageObjectives
{ 
	TArray<UQuestObjective*>                           ObjectiveArray;                                             // 0x0000   (0x0010)  
};

/// Struct /Script/QuestFramework.QuestObjectiveRepResult
/// Size: 0x0010 (0x000000 - 0x000010)
struct FQuestObjectiveRepResult
{ 
	UQuestObjective*                                   Obj;                                                        // 0x0000   (0x0008)  
	EQuestResult                                       Result;                                                     // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0009   (0x0007)  MISSED
};

/// Struct /Script/QuestFramework.QuestObjectiveResultReplicator
/// Size: 0x0018 (0x000000 - 0x000018)
struct FQuestObjectiveResultReplicator
{ 
	TArray<FQuestObjectiveRepResult>                   RepResults;                                                 // 0x0000   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0010   (0x0008)  MISSED
};

/// Struct /Script/QuestFramework.QuestContextSaveStateData
/// Size: 0x0920 (0x000000 - 0x000920)
struct FQuestContextSaveStateData
{ 
	FGuid                                              Guid;                                                       // 0x0000   (0x0010)  
	EQuestResult                                       ResultState;                                                // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0011   (0x0003)  MISSED
	FGuid                                              NodeGuid;                                                   // 0x0014   (0x0010)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0024   (0x0004)  MISSED
	FQuestMemoryBlock                                  MemoryBlock;                                                // 0x0028   (0x08F8)  
};

/// Struct /Script/QuestFramework.QuestContextSaveState
/// Size: 0x0020 (0x000000 - 0x000020)
struct FQuestContextSaveState
{ 
	FGuid                                              QuestGuid;                                                  // 0x0000   (0x0010)  
	TArray<FQuestContextSaveStateData>                 ContextStates;                                              // 0x0010   (0x0010)  
};

/// Struct /Script/QuestFramework.QuestSaveStateData
/// Size: 0x0018 (0x000000 - 0x000018)
struct FQuestSaveStateData
{ 
	FDateTime                                          Timestamp;                                                  // 0x0000   (0x0008)  
	TArray<FQuestContextSaveState>                     Data;                                                       // 0x0008   (0x0010)  
};

/// Struct /Script/QuestFramework.QuestNumberFormattingOptions
/// Size: 0x0014 (0x000000 - 0x000014)
struct FQuestNumberFormattingOptions
{ 
	TEnumAsByte<ERoundingMode>                         RoundingMode;                                               // 0x0000   (0x0001)  
	bool                                               bUseGrouping;                                               // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0002   (0x0002)  MISSED
	int32_t                                            MinimumIntegralDigits;                                      // 0x0004   (0x0004)  
	int32_t                                            MaximumIntegralDigits;                                      // 0x0008   (0x0004)  
	int32_t                                            MinimumFractionalDigits;                                    // 0x000C   (0x0004)  
	int32_t                                            MaximumFractionalDigits;                                    // 0x0010   (0x0004)  
};

/// Struct /Script/QuestFramework.QuestTextArg
/// Size: 0x0040 (0x000000 - 0x000040)
struct FQuestTextArg
{ 
	FString                                            ArgName;                                                    // 0x0000   (0x0010)  
	EQuestTextArgType                                  Type;                                                       // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0011   (0x0003)  MISSED
	FQuestVariable                                     Variable;                                                   // 0x0014   (0x000C)  
	bool                                               bUseNumberFormatter;                                        // 0x0020   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0021   (0x0003)  MISSED
	FQuestNumberFormattingOptions                      NumberFormatOptions;                                        // 0x0024   (0x0014)  
	UQuestTextArgument*                                CustomTextArgument;                                         // 0x0038   (0x0008)  
};

/// Struct /Script/QuestFramework.QuestText
/// Size: 0x0028 (0x000000 - 0x000028)
struct FQuestText
{ 
	FText                                              Text;                                                       // 0x0000   (0x0018)  
	TArray<FQuestTextArg>                              TextArguments;                                              // 0x0018   (0x0010)  
};

/// Class /Script/QuestFramework.Quest
/// Size: 0x0070 (0x000028 - 0x000098)
class UQuest : public UObject : UObject
{ 
public:
	FText                                              DisplayName;                                                // 0x0028   (0x0018)  
	UQuestCustomData*                                  CustomData;                                                 // 0x0040   (0x0008)  
	TArray<FDefaultQuestVariable>                      DefaultVariables;                                           // 0x0048   (0x0010)  
	TArray<FQuestVariableBounds>                       VariableBounds;                                             // 0x0058   (0x0010)  
	TArray<UQuestService*>                             Services;                                                   // 0x0068   (0x0010)  
	FGuid                                              QuestGuid;                                                  // 0x0078   (0x0010)  
	TArray<UQuestNode*>                                Nodes;                                                      // 0x0088   (0x0010)  


	/// Functions
	// Function /Script/QuestFramework.Quest.HasValidGuid
	bool HasValidGuid();                                                                                                     // [0x15a4d40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/QuestFramework.Quest.GetRootNode
	UQuestNode_Root* GetRootNode();                                                                                          // [0x15a4b80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/QuestFramework.Quest.GetGuid
	FGuid GetGuid();                                                                                                         // [0x15a48b0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/QuestFramework.Quest.GetDisplayName
	FText GetDisplayName();                                                                                                  // [0x15a4820] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/QuestFramework.Quest.GetCustomData
	UQuestCustomData* GetCustomData();                                                                                       // [0x1522b90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/QuestFramework.Quest.GetAllStageNodesNames
	void GetAllStageNodesNames(TArray<FName>& OutNames);                                                                     // [0x15a4660] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/QuestFramework.Quest.FindStageNodeByName
	UQuestNode_Stage* FindStageNodeByName(FName& Name);                                                                      // [0x15a4330] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/QuestFramework.QuestComponent
/// Size: 0x0080 (0x0000A0 - 0x000120)
class UQuestComponent : public UActorComponent : UActorComponent
{ 
public:
	FMulticastInlineDelegate                           OnQuestContextCreated;                                      // 0x00A0   (0x0010)  
	FMulticastInlineDelegate                           OnQuestContextSuspend;                                      // 0x00B0   (0x0010)  
	TArray<UQuestContext*>                             ActiveQuestContexts;                                        // 0x00C0   (0x0010)  
	unsigned char                                      UnknownData00_6[0x50];                                      // 0x00D0   (0x0050)  MISSED


	/// Functions
	// Function /Script/QuestFramework.QuestComponent.SuspendQuest
	void SuspendQuest(UQuestContext* QuestContext);                                                                          // [0x15a5770] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/QuestFramework.QuestComponent.SuspendAllQuests
	void SuspendAllQuests();                                                                                                 // [0x15a5750] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/QuestFramework.QuestComponent.SaveQuestStates
	bool SaveQuestStates(FQuestSaveStateData& SaveData);                                                                     // [0x15a5550] Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/QuestFramework.QuestComponent.OnRep_ActiveQuestContexts
	void OnRep_ActiveQuestContexts(TArray<UQuestContext*>& OldActiveContexts);                                               // [0x15a5240] Final|Native|Private|HasOutParms 
	// Function /Script/QuestFramework.QuestComponent.LoadQuestStates
	bool LoadQuestStates(FQuestSaveStateData& SaveData, bool bForceRestore);                                                 // [0x15a4f70] Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/QuestFramework.QuestComponent.HasActiveQuestContext
	bool HasActiveQuestContext(UQuest* Quest);                                                                               // [0x15a4c00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/QuestFramework.QuestComponent.GetAllActiveQuestContexts
	void GetAllActiveQuestContexts(TArray<UQuestContext*>& OutContexts);                                                     // [0x15a45b0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/QuestFramework.QuestComponent.FindFirstActiveQuestContext
	UQuestContext* FindFirstActiveQuestContext(UQuest* Quest);                                                               // [0x15a4290] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/QuestFramework.QuestComponent.FindAllActiveQuestContexts
	void FindAllActiveQuestContexts(UQuest* Quest, TArray<UQuestContext*>& OutContexts);                                     // [0x15a41a0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/QuestFramework.QuestComponent.CreateQuestContext
	UQuestContext* CreateQuestContext(UQuest* Quest, bool bStart);                                                           // [0x15a3f60] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
};

/// Class /Script/QuestFramework.QuestComponentInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UQuestComponentInterface : public UInterface : UInterface
{ 
public:
};

/// Class /Script/QuestFramework.QuestObjectBase
/// Size: 0x0008 (0x000028 - 0x000030)
class UQuestObjectBase : public UObject : UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/QuestFramework.QuestCondition
/// Size: 0x0000 (0x000030 - 0x000030)
class UQuestCondition : public UQuestObjectBase : UQuestObjectBase
{ 
public:
};

/// Class /Script/QuestFramework.QuestCondition_VariableQuery
/// Size: 0x0018 (0x000030 - 0x000048)
class UQuestCondition_VariableQuery : public UQuestCondition : UQuestCondition
{ 
public:
	FQuestMemoryQuery                                  Query;                                                      // 0x0030   (0x0018)  
};

/// Class /Script/QuestFramework.QuestContext
/// Size: 0x0320 (0x000030 - 0x000350)
class UQuestContext : public UQuestObjectBase : UQuestObjectBase
{ 
public:
	FMulticastInlineDelegate                           OnQuestStarted;                                             // 0x0030   (0x0010)  
	FMulticastInlineDelegate                           OnQuestEnded;                                               // 0x0040   (0x0010)  
	FMulticastInlineDelegate                           OnActiveNodeChanged;                                        // 0x0050   (0x0010)  
	FMulticastInlineDelegate                           OnStageBegin;                                               // 0x0060   (0x0010)  
	FMulticastInlineDelegate                           OnStageEnded;                                               // 0x0070   (0x0010)  
	FMulticastInlineDelegate                           OnObjectiveActivated;                                       // 0x0080   (0x0010)  
	FMulticastInlineDelegate                           OnObjectiveDeactivated;                                     // 0x0090   (0x0010)  
	FMulticastInlineDelegate                           OnObjectiveResultChanged;                                   // 0x00A0   (0x0010)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00B0   (0x0004)  MISSED
	FGuid                                              ContextGuid;                                                // 0x00B4   (0x0010)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x00C4   (0x0004)  MISSED
	uint64_t                                           QuestStatePacked;                                           // 0x00C8   (0x0008)  
	uint64_t                                           CurrentNodeIndexPacked;                                     // 0x00D0   (0x0008)  
	UQuest*                                            QuestAsset;                                                 // 0x00D8   (0x0008)  
	UQuestMemory*                                      ContextMemory;                                              // 0x00E0   (0x0008)  
	TArray<UQuestObjective*>                           ActiveObjectives;                                           // 0x00E8   (0x0010)  
	TArray<UQuestService*>                             ActiveStageServices;                                        // 0x00F8   (0x0010)  
	TArray<UQuestService*>                             ActiveContextServices;                                      // 0x0108   (0x0010)  
	TMap<UQuestObjective*, EQuestResult>               LastObjectiveResults;                                       // 0x0118   (0x0050)  
	unsigned char                                      UnknownData02_5[0x8];                                       // 0x0168   (0x0008)  MISSED
	UQuestContextViewModel*                            ViewModel;                                                  // 0x0170   (0x0008)  
	TMap<UQuestObjective*, UQuestObjectiveViewModel*>  ObjectiveViewModels;                                        // 0x0178   (0x0050)  
	unsigned char                                      UnknownData03_5[0x8];                                       // 0x01C8   (0x0008)  MISSED
	FQuestMemoryBlockReplicator                        MemoryReplicator;                                           // 0x01D0   (0x0120)  
	FQuestObjectiveResultReplicator                    ObjectiveResultReplicator;                                  // 0x02F0   (0x0018)  
	unsigned char                                      UnknownData04_6[0x48];                                      // 0x0308   (0x0048)  MISSED


	/// Functions
	// Function /Script/QuestFramework.QuestContext.TryActivateObjective
	bool TryActivateObjective(UQuestObjective* Objective);                                                                   // [0x15a5890] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/QuestFramework.QuestContext.Start
	void Start();                                                                                                            // [0x15a5730] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/QuestFramework.QuestContext.RefreshViewModel
	void RefreshViewModel(bool bUpdateQuestData, bool bUpdateObjectiveList, bool bRefreshObjectiveViewModels);               // [0x15a5420] Final|Native|Public|BlueprintCallable 
	// Function /Script/QuestFramework.QuestContext.RefreshObjectiveViewModel
	void RefreshObjectiveViewModel(UQuestObjective* Objective);                                                              // [0x15a5390] Final|Native|Public|BlueprintCallable 
	// Function /Script/QuestFramework.QuestContext.OnRep_QuestState
	void OnRep_QuestState();                                                                                                 // [0x15a5370] Final|Native|Private 
	// Function /Script/QuestFramework.QuestContext.OnRep_QuestAsset
	void OnRep_QuestAsset();                                                                                                 // [0x15a5350] Final|Native|Private 
	// Function /Script/QuestFramework.QuestContext.OnRep_ObjectiveResultReplicator
	void OnRep_ObjectiveResultReplicator();                                                                                  // [0x15a5330] Final|Native|Private 
	// Function /Script/QuestFramework.QuestContext.OnRep_MemoryReplicator
	void OnRep_MemoryReplicator();                                                                                           // [0x15a5310] Final|Native|Private 
	// Function /Script/QuestFramework.QuestContext.OnRep_CurrentNodeIndex
	void OnRep_CurrentNodeIndex();                                                                                           // [0x15a52f0] Final|Native|Private 
	// Function /Script/QuestFramework.QuestContext.OnRep_ActiveObjectives
	void OnRep_ActiveObjectives(TArray<UQuestObjective*>& OldObjectives);                                                    // [0x15a5190] Final|Native|Private|HasOutParms 
	// Function /Script/QuestFramework.QuestContext.JumpToStageNode
	bool JumpToStageNode(UQuestNode_Stage* StageNode);                                                                       // [0x15a4ed0] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/QuestFramework.QuestContext.JumpToStageByName
	bool JumpToStageByName(FName StageName);                                                                                 // [0x15a4e30] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/QuestFramework.QuestContext.IsObjectiveActive
	bool IsObjectiveActive(UQuestObjective* Objective);                                                                      // [0x15a4d90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/QuestFramework.QuestContext.IsInitialized
	bool IsInitialized();                                                                                                    // [0x15a4d70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/QuestFramework.QuestContext.HasEnded
	bool HasEnded();                                                                                                         // [0x15a4d10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/QuestFramework.QuestContext.HasAuthority
	bool HasAuthority();                                                                                                     // [0x15a4ca0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/QuestFramework.QuestContext.GetViewModel
	UQuestContextViewModel* GetViewModel();                                                                                  // [0x15a4be0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/QuestFramework.QuestContext.GetQuestState
	EQuestResult GetQuestState();                                                                                            // [0x15a4b50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/QuestFramework.QuestContext.GetQuestMemory
	UQuestMemory* GetQuestMemory();                                                                                          // [0x15a4b30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/QuestFramework.QuestContext.GetQuestAsset
	UQuest* GetQuestAsset();                                                                                                 // [0xc8ec70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/QuestFramework.QuestContext.GetOwnerQuestComponent
	UQuestComponent* GetOwnerQuestComponent();                                                                               // [0x15a4ad0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/QuestFramework.QuestContext.GetOwnerController
	AController* GetOwnerController();                                                                                       // [0x15a4aa0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/QuestFramework.QuestContext.GetOwnerActor
	AActor* GetOwnerActor();                                                                                                 // [0x15a4a70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/QuestFramework.QuestContext.GetObjectiveViewModel
	UQuestObjectiveViewModel* GetObjectiveViewModel(UQuestObjective* Objective);                                             // [0x15a49d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/QuestFramework.QuestContext.GetObjectiveResult
	EQuestResult GetObjectiveResult(UQuestObjective* Objective, bool bReEvaluate);                                           // [0x15a4900] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/QuestFramework.QuestContext.GetGuid
	FGuid GetGuid();                                                                                                         // [0x15a48d0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/QuestFramework.QuestContext.GetCurrentObjectives
	void GetCurrentObjectives(TArray<UQuestObjective*>& Objectives);                                                         // [0x15a4770] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/QuestFramework.QuestContext.GetAuthority
	EQuestNetworkAuthority GetAuthority();                                                                                   // [0x15a4710] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/QuestFramework.QuestContext.GetActiveObjectives
	void GetActiveObjectives(TArray<UQuestObjective*>& Objectives);                                                          // [0x15a4440] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/QuestFramework.QuestContext.GetActiveNodeIndex
	int32_t GetActiveNodeIndex();                                                                                            // [0x15a4410] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/QuestFramework.QuestContext.GetActiveNode
	UQuestNode* GetActiveNode();                                                                                             // [0x15a43e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/QuestFramework.QuestContext.DeactivateObjective
	void DeactivateObjective(UQuestObjective* Objective);                                                                    // [0x15a4030] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
};

/// Class /Script/QuestFramework.QuestContextViewModel
/// Size: 0x0050 (0x000068 - 0x0000B8)
class UQuestContextViewModel : public UMVVMViewModelBase : UMVVMViewModelBase
{ 
public:
	FText                                              Title;                                                      // 0x0068   (0x0018)  
	FText                                              JournalText;                                                // 0x0080   (0x0018)  
	EQuestResult                                       QuestState;                                                 // 0x0098   (0x0001)  
	bool                                               IsTracked;                                                  // 0x0099   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x009A   (0x0006)  MISSED
	TArray<UQuestObjectiveViewModel*>                  ObjectiveViewModels;                                        // 0x00A0   (0x0010)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x00B0   (0x0008)  MISSED


	/// Functions
	// Function /Script/QuestFramework.QuestContextViewModel.TrackQuest
	void TrackQuest(bool bTrack);                                                                                            // [0x15a5800] Final|Native|Public|BlueprintCallable 
	// Function /Script/QuestFramework.QuestContextViewModel.GetTrackedVisibility
	ESlateVisibility GetTrackedVisibility();                                                                                 // [0x15a4bb0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/QuestFramework.QuestContextViewModel.GetActiveObjectives
	TArray<UQuestObjectiveViewModel*> GetActiveObjectives();                                                                 // [0x15a44f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/QuestFramework.QuestCustomData
/// Size: 0x0000 (0x000028 - 0x000028)
class UQuestCustomData : public UObject : UObject
{ 
public:
};

/// Class /Script/QuestFramework.QuestEvent
/// Size: 0x0008 (0x000030 - 0x000038)
class UQuestEvent : public UQuestObjectBase : UQuestObjectBase
{ 
public:
	EQuestNetworkExecType                              NetworkExecutionType;                                       // 0x0030   (0x0001)  
	bool                                               bTriggerOnStateRestore;                                     // 0x0031   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0032   (0x0006)  MISSED


	/// Functions
	// Function /Script/QuestFramework.QuestEvent.ExecuteEvent
	void ExecuteEvent(UQuestContext* Context, FQuestEventPayload& Payload);                                                  // [0x15a40c0] Native|Event|Protected|HasOutParms|BlueprintEvent 
};

/// Class /Script/QuestFramework.QuestMessageEvent
/// Size: 0x0028 (0x000038 - 0x000060)
class UQuestMessageEvent : public UQuestEvent : UQuestEvent
{ 
public:
	FGameplayTag                                       MessageTag;                                                 // 0x0038   (0x0008)  
	FQuestEventPayload                                 Payload;                                                    // 0x0040   (0x0020)  
};

/// Class /Script/QuestFramework.QuestEvent_SetVariable
/// Size: 0x0018 (0x000038 - 0x000050)
class UQuestEvent_SetVariable : public UQuestEvent : UQuestEvent
{ 
public:
	FQuestVariableInitializer                          VariableSetter;                                             // 0x0038   (0x0018)  
};

/// Class /Script/QuestFramework.QuestFrameworkSettings
/// Size: 0x0030 (0x000038 - 0x000068)
class UQuestFrameworkSettings : public UDeveloperSettings : UDeveloperSettings
{ 
public:
	TArray<FString>                                    QuestAssetPaths;                                            // 0x0038   (0x0010)  
	UClass*                                            QuestContextViewModelClass;                                 // 0x0048   (0x0008)  
	UClass*                                            QuestObjectiveViewModelClass;                               // 0x0050   (0x0008)  
	UClass*                                            QuestTrackerViewModelClass;                                 // 0x0058   (0x0008)  
	UClass*                                            QuestListViewModelClass;                                    // 0x0060   (0x0008)  
};

/// Class /Script/QuestFramework.QuestFrameworkSubsystem
/// Size: 0x0008 (0x000030 - 0x000038)
class UQuestFrameworkSubsystem : public UGameInstanceSubsystem : UGameInstanceSubsystem
{ 
public:
	UQuestManager*                                     QuestManager;                                               // 0x0030   (0x0008)  
};

/// Class /Script/QuestFramework.QuestListViewModel
/// Size: 0x0018 (0x000068 - 0x000080)
class UQuestListViewModel : public UMVVMViewModelBase : UMVVMViewModelBase
{ 
public:
	TArray<UQuestContextViewModel*>                    ContextViewModels;                                          // 0x0068   (0x0010)  
	UQuestContextViewModel*                            DetailContextViewModel;                                     // 0x0078   (0x0008)  


	/// Functions
	// Function /Script/QuestFramework.QuestListViewModel.SetDetailQuestContextViewModel
	void SetDetailQuestContextViewModel(UQuestContextViewModel* ViewModel);                                                  // [0x15aa8f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/QuestFramework.QuestListViewModel.GetQuestContexts
	TArray<UQuestContextViewModel*> GetQuestContexts();                                                                      // [0x15aa380] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/QuestFramework.QuestListViewModel.GetInProgressQuestContexts
	TArray<UQuestContextViewModel*> GetInProgressQuestContexts();                                                            // [0x15aa120] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/QuestFramework.QuestListViewModel.GetFailedQuestContexts
	TArray<UQuestContextViewModel*> GetFailedQuestContexts();                                                                // [0x15aa000] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/QuestFramework.QuestListViewModel.GetDetailQuestContextViewModel
	UQuestContextViewModel* GetDetailQuestContextViewModel();                                                                // [0x15a9fb0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/QuestFramework.QuestListViewModel.GetCompletedQuestContexts
	TArray<UQuestContextViewModel*> GetCompletedQuestContexts();                                                             // [0x15a9f10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/QuestFramework.QuestManager
/// Size: 0x0120 (0x000030 - 0x000150)
class UQuestManager : public UQuestObjectBase : UQuestObjectBase
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0030   (0x0010)  MISSED
	TSet<UQuestComponent*>                             QuestComponents;                                            // 0x0040   (0x0050)  
	TSet<UQuestMessageComponent*>                      MessageListeners;                                           // 0x0090   (0x0050)  
	TSet<FQuestContextMessageListener>                 QuestContextMessageListeners;                               // 0x00E0   (0x0050)  
	FQuestAssetLibrary                                 RuntimeQuestAssetLibrary;                                   // 0x0130   (0x0020)  


	/// Functions
	// Function /Script/QuestFramework.QuestManager.GetQuestManager
	UQuestManager* GetQuestManager(UObject* WorldContext);                                                                   // [0x15aa400] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/QuestFramework.QuestManagerAccess
/// Size: 0x0000 (0x000028 - 0x000028)
class UQuestManagerAccess : public UInterface : UInterface
{ 
public:
};

/// Class /Script/QuestFramework.QuestMemory
/// Size: 0x08F8 (0x000030 - 0x000928)
class UQuestMemory : public UQuestObjectBase : UQuestObjectBase
{ 
public:
	FQuestMemoryBlock                                  MemoryBlock;                                                // 0x0030   (0x08F8)  


	/// Functions
	// Function /Script/QuestFramework.QuestMemory.SetInteger
	void SetInteger(FName Variable, int32_t Value);                                                                          // [0x15aaa50] Final|Native|Public|BlueprintCallable 
	// Function /Script/QuestFramework.QuestMemory.SetFloat
	void SetFloat(FName Variable, float Value);                                                                              // [0x15aa980] Final|Native|Public|BlueprintCallable 
	// Function /Script/QuestFramework.QuestMemory.SetBool
	void SetBool(FName Variable, bool Value);                                                                                // [0x15aa820] Final|Native|Public|BlueprintCallable 
	// Function /Script/QuestFramework.QuestMemory.RunQuery
	bool RunQuery(FQuestMemoryQuery& Query);                                                                                 // [0x15aa620] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/QuestFramework.QuestMemory.GetInteger
	int32_t GetInteger(FName Variable);                                                                                      // [0x15aa1a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/QuestFramework.QuestMemory.GetFloat
	float GetFloat(FName Variable);                                                                                          // [0x15aa080] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/QuestFramework.QuestMemory.GetBool
	bool GetBool(FName Variable);                                                                                            // [0x15a9e70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/QuestFramework.QuestMessageComponent
/// Size: 0x0038 (0x0000A0 - 0x0000D8)
class UQuestMessageComponent : public UActorComponent : UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x00A0   (0x0008)  MISSED
	FMulticastInlineDelegate                           OnQuestMessage;                                             // 0x00A8   (0x0010)  
	FGameplayTagContainer                              MessagesToListen;                                           // 0x00B8   (0x0020)  


	/// Functions
	// Function /Script/QuestFramework.QuestMessageComponent.SendQuestMessage
	void SendQuestMessage(FGameplayTag MessageTag, FQuestEventPayload Payload, AActor* Recipient);                           // [0x15aa6e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/QuestFramework.QuestMessageComponent.BroadcastQuestMessage
	void BroadcastQuestMessage(FGameplayTag MessageTag, FQuestEventPayload Payload);                                         // [0x15a9c20] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/QuestFramework.QuestMessageInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UQuestMessageInterface : public UInterface : UInterface
{ 
public:
};

/// Class /Script/QuestFramework.QuestNode
/// Size: 0x0068 (0x000028 - 0x000090)
class UQuestNode : public UObject : UObject
{ 
public:
	int32_t                                            NodeIndex;                                                  // 0x0028   (0x0004)  
	FGuid                                              NodeGuid;                                                   // 0x002C   (0x0010)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x003C   (0x0004)  MISSED
	TArray<int32_t>                                    Children;                                                   // 0x0040   (0x0010)  
	TArray<UQuestEvent*>                               EntryEvents;                                                // 0x0050   (0x0010)  
	UQuestCustomData*                                  CustomData;                                                 // 0x0060   (0x0008)  
	FQuestText                                         NodeText;                                                   // 0x0068   (0x0028)  


	/// Functions
	// Function /Script/QuestFramework.QuestNode.GetNodeText
	FText GetNodeText(UQuestContext* Context);                                                                               // [0x15aa280] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/QuestFramework.QuestNode.GetNodeIndex
	int32_t GetNodeIndex();                                                                                                  // [0x15aa260] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/QuestFramework.QuestNode.GetNodeGuid
	FGuid GetNodeGuid();                                                                                                     // [0x15aa240] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/QuestFramework.QuestNode.GetCustomData
	UQuestCustomData* GetCustomData();                                                                                       // [0x15a9f90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/QuestFramework.QuestNode_End
/// Size: 0x0008 (0x000090 - 0x000098)
class UQuestNode_End : public UQuestNode : UQuestNode
{ 
public:
	bool                                               bCompleted;                                                 // 0x0090   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0091   (0x0007)  MISSED


	/// Functions
	// Function /Script/QuestFramework.QuestNode_End.GetEndResultType
	EQuestResult GetEndResultType();                                                                                         // [0x15a9fd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/QuestFramework.QuestNode_Root
/// Size: 0x0000 (0x000090 - 0x000090)
class UQuestNode_Root : public UQuestNode : UQuestNode
{ 
public:
};

/// Class /Script/QuestFramework.QuestNode_Selector
/// Size: 0x0060 (0x000090 - 0x0000F0)
class UQuestNode_Selector : public UQuestNode : UQuestNode
{ 
public:
	TArray<FQuestConditions>                           Conditions;                                                 // 0x0090   (0x0010)  
	TMap<int32_t, int32_t>                             ChildToConditionIndexTable;                                 // 0x00A0   (0x0050)  
};

/// Class /Script/QuestFramework.QuestNode_Stage
/// Size: 0x0078 (0x000090 - 0x000108)
class UQuestNode_Stage : public UQuestNode : UQuestNode
{ 
public:
	FName                                              LogicalName;                                                // 0x0090   (0x0008)  
	FQuestText                                         StageName;                                                  // 0x0098   (0x0028)  
	FQuestText                                         StageDescription;                                           // 0x00C0   (0x0028)  
	FQuestStageObjectives                              Objectives;                                                 // 0x00E8   (0x0010)  
	TArray<UQuestService*>                             Services;                                                   // 0x00F8   (0x0010)  


	/// Functions
	// Function /Script/QuestFramework.QuestNode_Stage.GetAllObjectiveNames
	void GetAllObjectiveNames(TArray<FName>& OutNames);                                                                      // [0x15a9dc0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/QuestFramework.QuestNode_Stage.FindObjectiveByName
	UQuestObjective* FindObjectiveByName(FName& Name);                                                                       // [0x15a9d10] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/QuestFramework.QuestObjective
/// Size: 0x0070 (0x000030 - 0x0000A0)
class UQuestObjective : public UQuestObjectBase : UQuestObjectBase
{ 
public:
	FName                                              LogicalName;                                                // 0x0030   (0x0008)  
	FQuestText                                         ShortDescription;                                           // 0x0038   (0x0028)  
	FQuestText                                         LongDescription;                                            // 0x0060   (0x0028)  
	EQuestObjectiveSignificancy                        Significancy;                                               // 0x0088   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0089   (0x0007)  MISSED
	UQuestObjectiveObserver*                           Observer;                                                   // 0x0090   (0x0008)  
	bool                                               bAutoActivate;                                              // 0x0098   (0x0001)  
	bool                                               bUseCustomObserver;                                         // 0x0099   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x009A   (0x0006)  MISSED


	/// Functions
	// Function /Script/QuestFramework.QuestObjective.IsActive
	bool IsActive(UQuestContext* Context);                                                                                   // [0x15aa4f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/QuestFramework.QuestObjective.HasTextArguments
	bool HasTextArguments();                                                                                                 // [0x15aa4c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/QuestFramework.QuestObjectiveObserver
/// Size: 0x0000 (0x000030 - 0x000030)
class UQuestObjectiveObserver : public UQuestObjectBase : UQuestObjectBase
{ 
public:
};

/// Class /Script/QuestFramework.ObjectiveObserver_VariableQuery
/// Size: 0x0030 (0x000030 - 0x000060)
class UObjectiveObserver_VariableQuery : public UQuestObjectiveObserver : UQuestObjectiveObserver
{ 
public:
	FQuestMemoryQuery                                  CompleteQuery;                                              // 0x0030   (0x0018)  
	FQuestMemoryQuery                                  FailQuery;                                                  // 0x0048   (0x0018)  
};

/// Class /Script/QuestFramework.QuestObjectiveViewModel
/// Size: 0x0020 (0x000068 - 0x000088)
class UQuestObjectiveViewModel : public UMVVMViewModelBase : UMVVMViewModelBase
{ 
public:
	FText                                              Text;                                                       // 0x0068   (0x0018)  
	EQuestResult                                       ObjectiveState;                                             // 0x0080   (0x0001)  
	bool                                               IsOptional;                                                 // 0x0081   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0082   (0x0006)  MISSED
};

/// Class /Script/QuestFramework.QuestService
/// Size: 0x0008 (0x000030 - 0x000038)
class UQuestService : public UQuestObjectBase : UQuestObjectBase
{ 
public:
	EQuestNetworkExecType                              NetworkExecutionType;                                       // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Class /Script/QuestFramework.QuestService_BlueprintBase
/// Size: 0x0000 (0x000038 - 0x000038)
class UQuestService_BlueprintBase : public UQuestService : UQuestService
{ 
public:
};

/// Class /Script/QuestFramework.QuestService_Timer
/// Size: 0x0018 (0x000038 - 0x000050)
class UQuestService_Timer : public UQuestService : UQuestService
{ 
public:
	float                                              InitialTime;                                                // 0x0038   (0x0004)  
	float                                              Speed;                                                      // 0x003C   (0x0004)  
	FQuestVariable                                     Variable;                                                   // 0x0040   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Class /Script/QuestFramework.QuestService_EventTriggerBase
/// Size: 0x0010 (0x000038 - 0x000048)
class UQuestService_EventTriggerBase : public UQuestService : UQuestService
{ 
public:
	TArray<UQuestEvent*>                               Events;                                                     // 0x0038   (0x0010)  
};

/// Class /Script/QuestFramework.QuestService_EventTrigger_Interval
/// Size: 0x0010 (0x000048 - 0x000058)
class UQuestService_EventTrigger_Interval : public UQuestService_EventTriggerBase : UQuestService_EventTriggerBase
{ 
public:
	float                                              TriggerInterval;                                            // 0x0048   (0x0004)  
	bool                                               bTriggerOnActivation;                                       // 0x004C   (0x0001)  
	unsigned char                                      UnknownData00_6[0xB];                                       // 0x004D   (0x000B)  MISSED
};

/// Class /Script/QuestFramework.QuestService_ListenMessage
/// Size: 0x0008 (0x000038 - 0x000040)
class UQuestService_ListenMessage : public UQuestService_BlueprintBase : UQuestService_BlueprintBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0038   (0x0008)  MISSED
};

/// Class /Script/QuestFramework.QuestService_TriggerEventsOnMessage
/// Size: 0x0028 (0x000048 - 0x000070)
class UQuestService_TriggerEventsOnMessage : public UQuestService_EventTriggerBase : UQuestService_EventTriggerBase
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0048   (0x0008)  MISSED
	FGameplayTagContainer                              MessagesToListen;                                           // 0x0050   (0x0020)  
};

/// Class /Script/QuestFramework.QuestService_SyncVariable
/// Size: 0x0010 (0x000038 - 0x000048)
class UQuestService_SyncVariable : public UQuestService_BlueprintBase : UQuestService_BlueprintBase
{ 
public:
	FQuestVariable                                     Variable;                                                   // 0x0038   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0044   (0x0004)  MISSED


	/// Functions
	// Function /Script/QuestFramework.QuestService_SyncVariable.GetIntegerSyncValue
	int32_t GetIntegerSyncValue(UQuestContext* Context);                                                                     // [0x15af2b0] Native|Event|Protected|BlueprintEvent|Const 
	// Function /Script/QuestFramework.QuestService_SyncVariable.GetFloatSyncValue
	float GetFloatSyncValue(UQuestContext* Context);                                                                         // [0x15af2b0] Native|Event|Protected|BlueprintEvent|Const 
	// Function /Script/QuestFramework.QuestService_SyncVariable.GetBoolSyncValue
	bool GetBoolSyncValue(UQuestContext* Context);                                                                           // [0x15af230] Native|Event|Protected|BlueprintEvent|Const 
};

/// Class /Script/QuestFramework.QuestTextArgument
/// Size: 0x0000 (0x000030 - 0x000030)
class UQuestTextArgument : public UQuestObjectBase : UQuestObjectBase
{ 
public:
};

/// Class /Script/QuestFramework.QuestTrackerComponent
/// Size: 0x0058 (0x0000A0 - 0x0000F8)
class UQuestTrackerComponent : public UActorComponent : UActorComponent
{ 
public:
	bool                                               bAddPlayerAsSourceOnInit;                                   // 0x00A0   (0x0001)  
	bool                                               bTrackOnlySingle;                                           // 0x00A1   (0x0001)  
	bool                                               bAutoTrackNewQuests;                                        // 0x00A2   (0x0001)  
	unsigned char                                      UnknownData00_5[0x5];                                       // 0x00A3   (0x0005)  MISSED
	FMulticastInlineDelegate                           OnBeginTrackQuest;                                          // 0x00A8   (0x0010)  
	FMulticastInlineDelegate                           OnStopTrackQuest;                                           // 0x00B8   (0x0010)  
	UQuestTrackerViewModel*                            ViewModel;                                                  // 0x00C8   (0x0008)  
	UQuestListViewModel*                               ListViewModel;                                              // 0x00D0   (0x0008)  
	unsigned char                                      UnknownData01_6[0x20];                                      // 0x00D8   (0x0020)  MISSED


	/// Functions
	// Function /Script/QuestFramework.QuestTrackerComponent.TrackQuest
	void TrackQuest(UQuestContext* QuestContext);                                                                            // [0x15b07a0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/QuestFramework.QuestTrackerComponent.StopTrackQuest
	void StopTrackQuest(UQuestContext* QuestContext);                                                                        // [0x15b0710] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/QuestFramework.QuestTrackerComponent.RemoveSourceQuestComponent
	void RemoveSourceQuestComponent(UQuestComponent* QuestComponent);                                                        // [0x15b0180] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/QuestFramework.QuestTrackerComponent.RefreshViewModel
	void RefreshViewModel(bool bTrackerViewModel, bool bQuestListViewModel);                                                 // [0x15b00b0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/QuestFramework.QuestTrackerComponent.HandleOnQuestStarted
	void HandleOnQuestStarted(UQuestContext* Context);                                                                       // [0x15b0020] Final|Native|Protected 
	// Function /Script/QuestFramework.QuestTrackerComponent.HandleOnQuestEnded
	void HandleOnQuestEnded(UQuestContext* Context);                                                                         // [0x15aff90] Final|Native|Protected 
	// Function /Script/QuestFramework.QuestTrackerComponent.HandleOnQuestContextSuspended
	void HandleOnQuestContextSuspended(UQuestComponent* QuestComponent, UQuestContext* Context);                             // [0x15afec0] Final|Native|Protected 
	// Function /Script/QuestFramework.QuestTrackerComponent.HandleOnQuestContextCreated
	void HandleOnQuestContextCreated(UQuestComponent* QuestComponent, UQuestContext* Context);                               // [0x15afdf0] Final|Native|Protected 
	// Function /Script/QuestFramework.QuestTrackerComponent.GetViewModel
	UQuestTrackerViewModel* GetViewModel();                                                                                  // [0x15afdd0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/QuestFramework.QuestTrackerComponent.GetTrackedQuestContexts
	void GetTrackedQuestContexts(TArray<UQuestContext*>& OutContexts);                                                       // [0x15afc60] Final|BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/QuestFramework.QuestTrackerComponent.GetListViewModel
	UQuestListViewModel* GetListViewModel();                                                                                 // [0x1522fc0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/QuestFramework.QuestTrackerComponent.GetAllQuestContexts
	void GetAllQuestContexts(TArray<UQuestContext*>& OutContexts);                                                           // [0x15af180] Final|BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/QuestFramework.QuestTrackerComponent.AddSourceQuestComponent
	void AddSourceQuestComponent(UQuestComponent* QuestComponent);                                                           // [0x15ae410] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
};

/// Class /Script/QuestFramework.QuestTrackerViewModel
/// Size: 0x0010 (0x000068 - 0x000078)
class UQuestTrackerViewModel : public UMVVMViewModelBase : UMVVMViewModelBase
{ 
public:
	TArray<UQuestContextViewModel*>                    ContextViewModels;                                          // 0x0068   (0x0010)  


	/// Functions
	// Function /Script/QuestFramework.QuestTrackerViewModel.GetTrackedQuestContexts
	TArray<UQuestContextViewModel*> GetTrackedQuestContexts();                                                               // [0x15afd10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/QuestFramework.QuestUtilityLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UQuestUtilityLibrary : public UBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{ 
public:
};

/// Enum /Script/QuestFramework.EQuestResult
/// Size: 0x05
enum EQuestResult : uint8_t
{
	EQuestResult__NotStarted0                                                        = 0,
	EQuestResult__InProgress1                                                        = 1,
	EQuestResult__Completed2                                                         = 2,
	EQuestResult__Failed3                                                            = 3,
	EQuestResult__EQuestResult_MAX4                                                  = 4
};

/// Enum /Script/QuestFramework.EQuestConditionCompareMethod
/// Size: 0x03
enum EQuestConditionCompareMethod : uint8_t
{
	EQuestConditionCompareMethod__All0                                               = 0,
	EQuestConditionCompareMethod__Any1                                               = 1,
	EQuestConditionCompareMethod__EQuestConditionCompareMethod_MAX2                  = 2
};

/// Enum /Script/QuestFramework.EQuestComparisonOperator
/// Size: 0x07
enum EQuestComparisonOperator : uint8_t
{
	EQuestComparisonOperator__Equal0                                                 = 0,
	EQuestComparisonOperator__NotEqual1                                              = 1,
	EQuestComparisonOperator__Less2                                                  = 2,
	EQuestComparisonOperator__Greater3                                               = 3,
	EQuestComparisonOperator__LessEqual4                                             = 4,
	EQuestComparisonOperator__GreaterEqual5                                          = 5,
	EQuestComparisonOperator__EQuestComparisonOperator_MAX6                          = 6
};

/// Enum /Script/QuestFramework.EQuestLogicalOperator
/// Size: 0x03
enum EQuestLogicalOperator : uint8_t
{
	EQuestLogicalOperator__And0                                                      = 0,
	EQuestLogicalOperator__Or1                                                       = 1,
	EQuestLogicalOperator__EQuestLogicalOperator_MAX2                                = 2
};

/// Enum /Script/QuestFramework.EQuestNetworkAuthority
/// Size: 0x04
enum EQuestNetworkAuthority : uint8_t
{
	EQuestNetworkAuthority__None0                                                    = 0,
	EQuestNetworkAuthority__HasAuthority1                                            = 1,
	EQuestNetworkAuthority__Remote2                                                  = 2,
	EQuestNetworkAuthority__EQuestNetworkAuthority_MAX3                              = 3
};

/// Enum /Script/QuestFramework.EQuestNetworkExecType
/// Size: 0x04
enum EQuestNetworkExecType : uint8_t
{
	EQuestNetworkExecType__OnlyServer0                                               = 0,
	EQuestNetworkExecType__OnlyClient1                                               = 1,
	EQuestNetworkExecType__Both2                                                     = 2,
	EQuestNetworkExecType__EQuestNetworkExecType_MAX3                                = 3
};

/// Enum /Script/QuestFramework.EQuestVariableType
/// Size: 0x04
enum EQuestVariableType : uint8_t
{
	EQuestVariableType__Integer0                                                     = 0,
	EQuestVariableType__Float1                                                       = 1,
	EQuestVariableType__Bool2                                                        = 2,
	EQuestVariableType__EQuestVariableType_MAX3                                      = 3
};

/// Enum /Script/QuestFramework.EQuestVariableComparisonType
/// Size: 0x03
enum EQuestVariableComparisonType : uint8_t
{
	EQuestVariableComparisonType__Constant0                                          = 0,
	EQuestVariableComparisonType__OtherVariable1                                     = 1,
	EQuestVariableComparisonType__EQuestVariableComparisonType_MAX2                  = 2
};

/// Enum /Script/QuestFramework.EQuestValueClamp
/// Size: 0x05
enum EQuestValueClamp : uint8_t
{
	EQuestValueClamp__NotClamped0                                                    = 0,
	EQuestValueClamp__ClampMin1                                                      = 1,
	EQuestValueClamp__ClampMax2                                                      = 2,
	EQuestValueClamp__ClampMinAndMax3                                                = 3,
	EQuestValueClamp__EQuestValueClamp_MAX4                                          = 4
};

/// Enum /Script/QuestFramework.EQuestObjectiveSignificancy
/// Size: 0x07
enum EQuestObjectiveSignificancy : uint8_t
{
	EQuestObjectiveSignificancy__Regular0                                            = 0,
	EQuestObjectiveSignificancy__Optional1                                           = 1,
	EQuestObjectiveSignificancy__ForceComplete2                                      = 2,
	EQuestObjectiveSignificancy__ForceFailure3                                       = 3,
	EQuestObjectiveSignificancy__ForceCompleteAndFailure4                            = 4,
	EQuestObjectiveSignificancy__RequiredToComplete5                                 = 5,
	EQuestObjectiveSignificancy__EQuestObjectiveSignificancy_MAX6                    = 6
};

/// Enum /Script/QuestFramework.EQuestTextArgType
/// Size: 0x03
enum EQuestTextArgType : uint8_t
{
	EQuestTextArgType__QuestVariable0                                                = 0,
	EQuestTextArgType__Custom1                                                       = 1,
	EQuestTextArgType__EQuestTextArgType_MAX2                                        = 2
};

