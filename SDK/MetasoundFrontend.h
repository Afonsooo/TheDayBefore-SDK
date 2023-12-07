
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package MetasoundFrontend.

/// Struct /Script/MetasoundFrontend.MetasoundFrontendVersionNumber
/// Size: 0x0008 (0x000000 - 0x000008)
struct FMetasoundFrontendVersionNumber
{ 
	int32_t                                            Major;                                                      // 0x0000   (0x0004)  
	int32_t                                            Minor;                                                      // 0x0004   (0x0004)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendVersion
/// Size: 0x0010 (0x000000 - 0x000010)
struct FMetasoundFrontendVersion
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
	FMetasoundFrontendVersionNumber                    Number;                                                     // 0x0008   (0x0008)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendVertex
/// Size: 0x0020 (0x000000 - 0x000020)
struct FMetasoundFrontendVertex
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
	FName                                              TypeName;                                                   // 0x0008   (0x0008)  
	FGuid                                              VertexID;                                                   // 0x0010   (0x0010)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendVertexLiteral
/// Size: 0x0068 (0x000000 - 0x000068)
struct FMetasoundFrontendVertexLiteral
{ 
	FGuid                                              VertexID;                                                   // 0x0000   (0x0010)  
	FMetasoundFrontendLiteral                          Value;                                                      // 0x0010   (0x0058)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendLiteral
/// Size: 0x0058 (0x000000 - 0x000058)
struct FMetasoundFrontendLiteral
{ 
	EMetasoundFrontendLiteralType                      Type;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            AsNumDefault;                                               // 0x0004   (0x0004)  
	TArray<bool>                                       AsBoolean;                                                  // 0x0008   (0x0010)  
	TArray<int32_t>                                    AsInteger;                                                  // 0x0018   (0x0010)  
	TArray<float>                                      AsFloat;                                                    // 0x0028   (0x0010)  
	TArray<FString>                                    AsString;                                                   // 0x0038   (0x0010)  
	TArray<UObject*>                                   AsUObject;                                                  // 0x0048   (0x0010)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendVariable
/// Size: 0x00B8 (0x000000 - 0x0000B8)
struct FMetasoundFrontendVariable
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
	FName                                              TypeName;                                                   // 0x0008   (0x0008)  
	FMetasoundFrontendLiteral                          Literal;                                                    // 0x0010   (0x0058)  
	FGuid                                              ID;                                                         // 0x0068   (0x0010)  
	FGuid                                              VariableNodeID;                                             // 0x0078   (0x0010)  
	FGuid                                              MutatorNodeID;                                              // 0x0088   (0x0010)  
	TArray<FGuid>                                      AccessorNodeIDs;                                            // 0x0098   (0x0010)  
	TArray<FGuid>                                      DeferredAccessorNodeIDs;                                    // 0x00A8   (0x0010)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendNodeInterface
/// Size: 0x0030 (0x000000 - 0x000030)
struct FMetasoundFrontendNodeInterface
{ 
	TArray<FMetasoundFrontendVertex>                   Inputs;                                                     // 0x0000   (0x0010)  
	TArray<FMetasoundFrontendVertex>                   Outputs;                                                    // 0x0010   (0x0010)  
	TArray<FMetasoundFrontendVertex>                   Environment;                                                // 0x0020   (0x0010)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendNodeStyleDisplay
/// Size: 0x0001 (0x000000 - 0x000001)
struct FMetasoundFrontendNodeStyleDisplay
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendNodeStyle
/// Size: 0x0001 (0x000000 - 0x000001)
struct FMetasoundFrontendNodeStyle
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendNode
/// Size: 0x0068 (0x000000 - 0x000068)
struct FMetasoundFrontendNode
{ 
	FGuid                                              ID;                                                         // 0x0000   (0x0010)  
	FGuid                                              ClassID;                                                    // 0x0010   (0x0010)  
	FName                                              Name;                                                       // 0x0020   (0x0008)  
	FMetasoundFrontendNodeInterface                    Interface;                                                  // 0x0028   (0x0030)  
	TArray<FMetasoundFrontendVertexLiteral>            InputLiterals;                                              // 0x0058   (0x0010)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendEdge
/// Size: 0x0040 (0x000000 - 0x000040)
struct FMetasoundFrontendEdge
{ 
	FGuid                                              FromNodeID;                                                 // 0x0000   (0x0010)  
	FGuid                                              FromVertexID;                                               // 0x0010   (0x0010)  
	FGuid                                              ToNodeID;                                                   // 0x0020   (0x0010)  
	FGuid                                              ToVertexID;                                                 // 0x0030   (0x0010)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendEdgeStyleLiteralColorPair
/// Size: 0x0068 (0x000000 - 0x000068)
struct FMetasoundFrontendEdgeStyleLiteralColorPair
{ 
	FMetasoundFrontendLiteral                          Value;                                                      // 0x0000   (0x0058)  
	FLinearColor                                       Color;                                                      // 0x0058   (0x0010)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendEdgeStyle
/// Size: 0x0028 (0x000000 - 0x000028)
struct FMetasoundFrontendEdgeStyle
{ 
	FGuid                                              NodeID;                                                     // 0x0000   (0x0010)  
	FName                                              OutputName;                                                 // 0x0010   (0x0008)  
	TArray<FMetasoundFrontendEdgeStyleLiteralColorPair> LiteralColorPairs;                                         // 0x0018   (0x0010)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendGraphStyle
/// Size: 0x0018 (0x000000 - 0x000018)
struct FMetasoundFrontendGraphStyle
{ 
	bool                                               bIsGraphEditable;                                           // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	TArray<FMetasoundFrontendEdgeStyle>                EdgeStyles;                                                 // 0x0008   (0x0010)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendGraph
/// Size: 0x0030 (0x000000 - 0x000030)
struct FMetasoundFrontendGraph
{ 
	TArray<FMetasoundFrontendNode>                     Nodes;                                                      // 0x0000   (0x0010)  
	TArray<FMetasoundFrontendEdge>                     Edges;                                                      // 0x0010   (0x0010)  
	TArray<FMetasoundFrontendVariable>                 Variables;                                                  // 0x0020   (0x0010)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendVertexMetadata
/// Size: 0x0001 (0x000000 - 0x000001)
struct FMetasoundFrontendVertexMetadata
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendClassVertex
/// Size: 0x0014 (0x000020 - 0x000034)
struct FMetasoundFrontendClassVertex : FMetasoundFrontendVertex
{ 
	FGuid                                              NodeID;                                                     // 0x0020   (0x0010)  
	EMetasoundFrontendVertexAccessType                 AccessType;                                                 // 0x0030   (0x0004)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendClassStyleDisplay
/// Size: 0x0001 (0x000000 - 0x000001)
struct FMetasoundFrontendClassStyleDisplay
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendClassInput
/// Size: 0x005C (0x000034 - 0x000090)
struct FMetasoundFrontendClassInput : FMetasoundFrontendClassVertex
{ 
	unsigned char                                      UnknownData00_2[0x4];                                       // 0x0034   (0x0004)  MISSED
	FMetasoundFrontendLiteral                          DefaultLiteral;                                             // 0x0038   (0x0058)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendClassVariable
/// Size: 0x005C (0x000034 - 0x000090)
struct FMetasoundFrontendClassVariable : FMetasoundFrontendClassVertex
{ 
	unsigned char                                      UnknownData00_2[0x4];                                       // 0x0034   (0x0004)  MISSED
	FMetasoundFrontendLiteral                          DefaultLiteral;                                             // 0x0038   (0x0058)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendClassOutput
/// Size: 0x0000 (0x000034 - 0x000034)
struct FMetasoundFrontendClassOutput : FMetasoundFrontendClassVertex
{ 
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendClassEnvironmentVariable
/// Size: 0x0014 (0x000000 - 0x000014)
struct FMetasoundFrontendClassEnvironmentVariable
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
	FName                                              TypeName;                                                   // 0x0008   (0x0008)  
	bool                                               bIsRequired;                                                // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0011   (0x0003)  MISSED
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendInterfaceStyle
/// Size: 0x0001 (0x000000 - 0x000001)
struct FMetasoundFrontendInterfaceStyle
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendClassInterface
/// Size: 0x0040 (0x000000 - 0x000040)
struct FMetasoundFrontendClassInterface
{ 
	TArray<FMetasoundFrontendClassInput>               Inputs;                                                     // 0x0000   (0x0010)  
	TArray<FMetasoundFrontendClassOutput>              Outputs;                                                    // 0x0010   (0x0010)  
	TArray<FMetasoundFrontendClassEnvironmentVariable> Environment;                                                // 0x0020   (0x0010)  
	FGuid                                              ChangeID;                                                   // 0x0030   (0x0010)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendInterface
/// Size: 0x0010 (0x000040 - 0x000050)
struct FMetasoundFrontendInterface : FMetasoundFrontendClassInterface
{ 
	FMetasoundFrontendVersion                          Version;                                                    // 0x0040   (0x0010)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendClassName
/// Size: 0x0018 (0x000000 - 0x000018)
struct FMetasoundFrontendClassName
{ 
	FName                                              Namespace;                                                  // 0x0000   (0x0008)  
	FName                                              Name;                                                       // 0x0008   (0x0008)  
	FName                                              Variant;                                                    // 0x0010   (0x0008)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendClassMetadata
/// Size: 0x0034 (0x000000 - 0x000034)
struct FMetasoundFrontendClassMetadata
{ 
	FMetasoundFrontendClassName                        ClassName;                                                  // 0x0000   (0x0018)  
	FMetasoundFrontendVersionNumber                    Version;                                                    // 0x0018   (0x0008)  
	EMetasoundFrontendClassType                        Type;                                                       // 0x0020   (0x0001)  
	bool                                               bIsDeprecated;                                              // 0x0021   (0x0001)  
	bool                                               bAutoUpdateManagesInterface;                                // 0x0022   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0023   (0x0001)  MISSED
	FGuid                                              ChangeID;                                                   // 0x0024   (0x0010)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendClassStyle
/// Size: 0x0001 (0x000000 - 0x000001)
struct FMetasoundFrontendClassStyle
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendClass
/// Size: 0x0090 (0x000000 - 0x000090)
struct FMetasoundFrontendClass
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
	FGuid                                              ID;                                                         // 0x0008   (0x0010)  
	FMetasoundFrontendClassMetadata                    Metadata;                                                   // 0x0018   (0x0034)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x004C   (0x0004)  MISSED
	FMetasoundFrontendClassInterface                   Interface;                                                  // 0x0050   (0x0040)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendGraphClassPresetOptions
/// Size: 0x0058 (0x000000 - 0x000058)
struct FMetasoundFrontendGraphClassPresetOptions
{ 
	bool                                               bIsPreset;                                                  // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	TSet<FName>                                        InputsInheritingDefault;                                    // 0x0008   (0x0050)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendGraphClass
/// Size: 0x0088 (0x000090 - 0x000118)
struct FMetasoundFrontendGraphClass : FMetasoundFrontendClass
{ 
	FMetasoundFrontendGraph                            Graph;                                                      // 0x0090   (0x0030)  
	FMetasoundFrontendGraphClassPresetOptions          PresetOptions;                                              // 0x00C0   (0x0058)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendDocumentMetadata
/// Size: 0x0010 (0x000000 - 0x000010)
struct FMetasoundFrontendDocumentMetadata
{ 
	FMetasoundFrontendVersion                          Version;                                                    // 0x0000   (0x0010)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendDocument
/// Size: 0x01C8 (0x000000 - 0x0001C8)
struct FMetasoundFrontendDocument
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
	FMetasoundFrontendDocumentMetadata                 Metadata;                                                   // 0x0010   (0x0010)  
	TSet<FMetasoundFrontendVersion>                    Interfaces;                                                 // 0x0020   (0x0050)  
	FMetasoundFrontendGraphClass                       RootGraph;                                                  // 0x0070   (0x0118)  
	TArray<FMetasoundFrontendGraphClass>               Subgraphs;                                                  // 0x0188   (0x0010)  
	TArray<FMetasoundFrontendClass>                    Dependencies;                                               // 0x0198   (0x0010)  
	FMetasoundFrontendVersion                          ArchetypeVersion;                                           // 0x01A8   (0x0010)  
	TArray<FMetasoundFrontendVersion>                  InterfaceVersions;                                          // 0x01B8   (0x0010)  
};

/// Class /Script/MetasoundFrontend.MetasoundParameterPack
/// Size: 0x0018 (0x000028 - 0x000040)
class UMetasoundParameterPack : public UObject : UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0028   (0x0018)  MISSED
};

/// Enum /Script/MetasoundFrontend.ESetParamResult
/// Size: 0x03
enum ESetParamResult : uint8_t
{
	ESetParamResult__Succeeded0                                                      = 0,
	ESetParamResult__Failed1                                                         = 1,
	ESetParamResult__ESetParamResult_MAX2                                            = 2
};

/// Enum /Script/MetasoundFrontend.EMetasoundFrontendVertexAccessType
/// Size: 0x04
enum EMetasoundFrontendVertexAccessType : uint8_t
{
	EMetasoundFrontendVertexAccessType__Reference0                                   = 0,
	EMetasoundFrontendVertexAccessType__Value1                                       = 1,
	EMetasoundFrontendVertexAccessType__Unset2                                       = 2,
	EMetasoundFrontendVertexAccessType__EMetasoundFrontendVertexAccessType_MAX3      = 3
};

/// Enum /Script/MetasoundFrontend.EMetasoundFrontendClassType
/// Size: 0x12
enum EMetasoundFrontendClassType : uint8_t
{
	EMetasoundFrontendClassType__External0                                           = 0,
	EMetasoundFrontendClassType__Graph1                                              = 1,
	EMetasoundFrontendClassType__Input2                                              = 2,
	EMetasoundFrontendClassType__Output3                                             = 3,
	EMetasoundFrontendClassType__Literal4                                            = 4,
	EMetasoundFrontendClassType__Variable5                                           = 5,
	EMetasoundFrontendClassType__VariableDeferredAccessor6                           = 6,
	EMetasoundFrontendClassType__VariableAccessor7                                   = 7,
	EMetasoundFrontendClassType__VariableMutator8                                    = 8,
	EMetasoundFrontendClassType__Template9                                           = 9,
	EMetasoundFrontendClassType__Invalid10                                           = 10,
	EMetasoundFrontendClassType__EMetasoundFrontendClassType_MAX11                   = 11
};

/// Enum /Script/MetasoundFrontend.EMetasoundFrontendNodeStyleDisplayVisibility
/// Size: 0x03
enum EMetasoundFrontendNodeStyleDisplayVisibility : uint8_t
{
	EMetasoundFrontendNodeStyleDisplayVisibility__Visible0                           = 0,
	EMetasoundFrontendNodeStyleDisplayVisibility__Hidden1                            = 1,
	EMetasoundFrontendNodeStyleDisplayVisibility__EMetasoundFrontendNodeStyleDisplayVisibility_MAX2 = 2
};

/// Enum /Script/MetasoundFrontend.EMetasoundFrontendLiteralType
/// Size: 0x14
enum EMetasoundFrontendLiteralType : uint8_t
{
	EMetasoundFrontendLiteralType__None0                                             = 0,
	EMetasoundFrontendLiteralType__Boolean1                                          = 1,
	EMetasoundFrontendLiteralType__Integer2                                          = 2,
	EMetasoundFrontendLiteralType__Float3                                            = 3,
	EMetasoundFrontendLiteralType__String4                                           = 4,
	EMetasoundFrontendLiteralType__UObject5                                          = 5,
	EMetasoundFrontendLiteralType__NoneArray6                                        = 6,
	EMetasoundFrontendLiteralType__BooleanArray7                                     = 7,
	EMetasoundFrontendLiteralType__IntegerArray8                                     = 8,
	EMetasoundFrontendLiteralType__FloatArray9                                       = 9,
	EMetasoundFrontendLiteralType__StringArray10                                     = 10,
	EMetasoundFrontendLiteralType__UObjectArray11                                    = 11,
	EMetasoundFrontendLiteralType__Invalid12                                         = 12,
	EMetasoundFrontendLiteralType__EMetasoundFrontendLiteralType_MAX13               = 13
};

