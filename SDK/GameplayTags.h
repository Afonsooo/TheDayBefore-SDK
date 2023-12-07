
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package GameplayTags.

/// Struct /Script/GameplayTags.GameplayTag
/// Size: 0x0008 (0x000000 - 0x000008)
struct FGameplayTag
{ 
	FName                                              TagName;                                                    // 0x0000   (0x0008)  
};

/// Struct /Script/GameplayTags.GameplayTagContainer
/// Size: 0x0020 (0x000000 - 0x000020)
struct FGameplayTagContainer
{ 
	TArray<FGameplayTag>                               GameplayTags;                                               // 0x0000   (0x0010)  
	TArray<FGameplayTag>                               ParentTags;                                                 // 0x0010   (0x0010)  
};

/// Struct /Script/GameplayTags.GameplayTagQuery
/// Size: 0x0048 (0x000000 - 0x000048)
struct FGameplayTagQuery
{ 
	int32_t                                            TokenStreamVersion;                                         // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<FGameplayTag>                               TagDictionary;                                              // 0x0008   (0x0010)  
	TArray<char>                                       QueryTokenStream;                                           // 0x0018   (0x0010)  
	FString                                            UserDescription;                                            // 0x0028   (0x0010)  
	FString                                            AutoDescription;                                            // 0x0038   (0x0010)  
};

/// Struct /Script/GameplayTags.GameplayTagContainerNetSerializerSerializationHelper
/// Size: 0x0010 (0x000000 - 0x000010)
struct FGameplayTagContainerNetSerializerSerializationHelper
{ 
	TArray<FGameplayTag>                               GameplayTags;                                               // 0x0000   (0x0010)  
};

/// Struct /Script/GameplayTags.GameplayTagReferenceHelper
/// Size: 0x0010 (0x000000 - 0x000010)
struct FGameplayTagReferenceHelper
{ 
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/GameplayTags.GameplayTagCreationWidgetHelper
/// Size: 0x0001 (0x000000 - 0x000001)
struct FGameplayTagCreationWidgetHelper
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/GameplayTags.GameplayTagContainerNetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
struct FGameplayTagContainerNetSerializerConfig : FNetSerializerConfig
{ 
};

/// Struct /Script/GameplayTags.GameplayTagNetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
struct FGameplayTagNetSerializerConfig : FNetSerializerConfig
{ 
};

/// Struct /Script/GameplayTags.GameplayTagRedirect
/// Size: 0x0010 (0x000000 - 0x000010)
struct FGameplayTagRedirect
{ 
	FName                                              OldTagName;                                                 // 0x0000   (0x0008)  
	FName                                              NewTagName;                                                 // 0x0008   (0x0008)  
};

/// Struct /Script/GameplayTags.GameplayTagTableRow
/// Size: 0x0018 (0x000008 - 0x000020)
struct FGameplayTagTableRow : FTableRowBase
{ 
	FName                                              Tag;                                                        // 0x0008   (0x0008)  
	FString                                            DevComment;                                                 // 0x0010   (0x0010)  
};

/// Struct /Script/GameplayTags.RestrictedGameplayTagTableRow
/// Size: 0x0008 (0x000020 - 0x000028)
struct FRestrictedGameplayTagTableRow : FGameplayTagTableRow
{ 
	bool                                               bAllowNonRestrictedChildren;                                // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Struct /Script/GameplayTags.GameplayTagSource
/// Size: 0x0020 (0x000000 - 0x000020)
struct FGameplayTagSource
{ 
	FName                                              SourceName;                                                 // 0x0000   (0x0008)  
	EGameplayTagSourceType                             SourceType;                                                 // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0009   (0x0007)  MISSED
	UGameplayTagsList*                                 SourceTagList;                                              // 0x0010   (0x0008)  
	URestrictedGameplayTagsList*                       SourceRestrictedTagList;                                    // 0x0018   (0x0008)  
};

/// Struct /Script/GameplayTags.GameplayTagNode
/// Size: 0x0050 (0x000000 - 0x000050)
struct FGameplayTagNode
{ 
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x0000   (0x0050)  MISSED
};

/// Struct /Script/GameplayTags.GameplayTagCategoryRemap
/// Size: 0x0020 (0x000000 - 0x000020)
struct FGameplayTagCategoryRemap
{ 
	FString                                            BaseCategory;                                               // 0x0000   (0x0010)  
	TArray<FString>                                    RemapCategories;                                            // 0x0010   (0x0010)  
};

/// Struct /Script/GameplayTags.RestrictedConfigInfo
/// Size: 0x0020 (0x000000 - 0x000020)
struct FRestrictedConfigInfo
{ 
	FString                                            RestrictedConfigName;                                       // 0x0000   (0x0010)  
	TArray<FString>                                    Owners;                                                     // 0x0010   (0x0010)  
};

/// Class /Script/GameplayTags.BlueprintGameplayTagLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UBlueprintGameplayTagLibrary : public UBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/GameplayTags.GameplayTagAssetInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UGameplayTagAssetInterface : public UInterface : UInterface
{ 
public:
};

/// Class /Script/GameplayTags.EditableGameplayTagQuery
/// Size: 0x0070 (0x000028 - 0x000098)
class UEditableGameplayTagQuery : public UObject : UObject
{ 
public:
	FString                                            UserDescription;                                            // 0x0028   (0x0010)  
	unsigned char                                      UnknownData00_5[0x10];                                      // 0x0038   (0x0010)  MISSED
	UEditableGameplayTagQueryExpression*               RootExpression;                                             // 0x0048   (0x0008)  
	FGameplayTagQuery                                  TagQueryExportText_Helper;                                  // 0x0050   (0x0048)  
};

/// Class /Script/GameplayTags.EditableGameplayTagQueryExpression
/// Size: 0x0000 (0x000028 - 0x000028)
class UEditableGameplayTagQueryExpression : public UObject : UObject
{ 
public:
};

/// Class /Script/GameplayTags.EditableGameplayTagQueryExpression_AnyTagsMatch
/// Size: 0x0020 (0x000028 - 0x000048)
class UEditableGameplayTagQueryExpression_AnyTagsMatch : public UEditableGameplayTagQueryExpression : UEditableGameplayTagQueryExpression
{ 
public:
	FGameplayTagContainer                              Tags;                                                       // 0x0028   (0x0020)  
};

/// Class /Script/GameplayTags.EditableGameplayTagQueryExpression_AllTagsMatch
/// Size: 0x0020 (0x000028 - 0x000048)
class UEditableGameplayTagQueryExpression_AllTagsMatch : public UEditableGameplayTagQueryExpression : UEditableGameplayTagQueryExpression
{ 
public:
	FGameplayTagContainer                              Tags;                                                       // 0x0028   (0x0020)  
};

/// Class /Script/GameplayTags.EditableGameplayTagQueryExpression_NoTagsMatch
/// Size: 0x0020 (0x000028 - 0x000048)
class UEditableGameplayTagQueryExpression_NoTagsMatch : public UEditableGameplayTagQueryExpression : UEditableGameplayTagQueryExpression
{ 
public:
	FGameplayTagContainer                              Tags;                                                       // 0x0028   (0x0020)  
};

/// Class /Script/GameplayTags.EditableGameplayTagQueryExpression_AnyExprMatch
/// Size: 0x0010 (0x000028 - 0x000038)
class UEditableGameplayTagQueryExpression_AnyExprMatch : public UEditableGameplayTagQueryExpression : UEditableGameplayTagQueryExpression
{ 
public:
	TArray<UEditableGameplayTagQueryExpression*>       Expressions;                                                // 0x0028   (0x0010)  
};

/// Class /Script/GameplayTags.EditableGameplayTagQueryExpression_AllExprMatch
/// Size: 0x0010 (0x000028 - 0x000038)
class UEditableGameplayTagQueryExpression_AllExprMatch : public UEditableGameplayTagQueryExpression : UEditableGameplayTagQueryExpression
{ 
public:
	TArray<UEditableGameplayTagQueryExpression*>       Expressions;                                                // 0x0028   (0x0010)  
};

/// Class /Script/GameplayTags.EditableGameplayTagQueryExpression_NoExprMatch
/// Size: 0x0010 (0x000028 - 0x000038)
class UEditableGameplayTagQueryExpression_NoExprMatch : public UEditableGameplayTagQueryExpression : UEditableGameplayTagQueryExpression
{ 
public:
	TArray<UEditableGameplayTagQueryExpression*>       Expressions;                                                // 0x0028   (0x0010)  
};

/// Class /Script/GameplayTags.GameplayTagsManager
/// Size: 0x0220 (0x000028 - 0x000248)
class UGameplayTagsManager : public UObject : UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x138];                                     // 0x0028   (0x0138)  MISSED
	TMap<FName, FGameplayTagSource>                    TagSources;                                                 // 0x0160   (0x0050)  
	unsigned char                                      UnknownData01_5[0x88];                                      // 0x01B0   (0x0088)  MISSED
	TArray<UDataTable*>                                GameplayTagTables;                                          // 0x0238   (0x0010)  
};

/// Class /Script/GameplayTags.GameplayTagsList
/// Size: 0x0020 (0x000028 - 0x000048)
class UGameplayTagsList : public UObject : UObject
{ 
public:
	FString                                            ConfigFileName;                                             // 0x0028   (0x0010)  
	TArray<FGameplayTagTableRow>                       GameplayTagList;                                            // 0x0038   (0x0010)  
};

/// Class /Script/GameplayTags.RestrictedGameplayTagsList
/// Size: 0x0020 (0x000028 - 0x000048)
class URestrictedGameplayTagsList : public UObject : UObject
{ 
public:
	FString                                            ConfigFileName;                                             // 0x0028   (0x0010)  
	TArray<FRestrictedGameplayTagTableRow>             RestrictedGameplayTagList;                                  // 0x0038   (0x0010)  
};

/// Class /Script/GameplayTags.GameplayTagsSettings
/// Size: 0x0070 (0x000048 - 0x0000B8)
class UGameplayTagsSettings : public UGameplayTagsList : UGameplayTagsList
{ 
public:
	bool                                               ImportTagsFromConfig;                                       // 0x0048   (0x0001)  
	bool                                               WarnOnInvalidTags;                                          // 0x0049   (0x0001)  
	bool                                               ClearInvalidTags;                                           // 0x004A   (0x0001)  
	bool                                               AllowEditorTagUnloading;                                    // 0x004B   (0x0001)  
	bool                                               AllowGameTagUnloading;                                      // 0x004C   (0x0001)  
	bool                                               FastReplication;                                            // 0x004D   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x004E   (0x0002)  MISSED
	FString                                            InvalidTagCharacters;                                       // 0x0050   (0x0010)  
	TArray<FGameplayTagCategoryRemap>                  CategoryRemapping;                                          // 0x0060   (0x0010)  
	TArray<FSoftObjectPath>                            GameplayTagTableList;                                       // 0x0070   (0x0010)  
	TArray<FGameplayTagRedirect>                       GameplayTagRedirects;                                       // 0x0080   (0x0010)  
	TArray<FName>                                      CommonlyReplicatedTags;                                     // 0x0090   (0x0010)  
	int32_t                                            NumBitsForContainerSize;                                    // 0x00A0   (0x0004)  
	int32_t                                            NetIndexFirstBitSegment;                                    // 0x00A4   (0x0004)  
	TArray<FRestrictedConfigInfo>                      RestrictedConfigFiles;                                      // 0x00A8   (0x0010)  
};

/// Class /Script/GameplayTags.GameplayTagsDeveloperSettings
/// Size: 0x0018 (0x000038 - 0x000050)
class UGameplayTagsDeveloperSettings : public UDeveloperSettings : UDeveloperSettings
{ 
public:
	FString                                            DeveloperConfigName;                                        // 0x0038   (0x0010)  
	FName                                              FavoriteTagSource;                                          // 0x0048   (0x0008)  
};

/// Enum /Script/GameplayTags.EGameplayContainerMatchType
/// Size: 0x03
enum EGameplayContainerMatchType : uint8_t
{
	EGameplayContainerMatchType__Any0                                                = 0,
	EGameplayContainerMatchType__All1                                                = 1,
	EGameplayContainerMatchType__EGameplayContainerMatchType_MAX2                    = 2
};

/// Enum /Script/GameplayTags.EGameplayTagQueryExprType
/// Size: 0x08
enum EGameplayTagQueryExprType : uint8_t
{
	EGameplayTagQueryExprType__Undefined0                                            = 0,
	EGameplayTagQueryExprType__AnyTagsMatch1                                         = 1,
	EGameplayTagQueryExprType__AllTagsMatch2                                         = 2,
	EGameplayTagQueryExprType__NoTagsMatch3                                          = 3,
	EGameplayTagQueryExprType__AnyExprMatch4                                         = 4,
	EGameplayTagQueryExprType__AllExprMatch5                                         = 5,
	EGameplayTagQueryExprType__NoExprMatch6                                          = 6,
	EGameplayTagQueryExprType__EGameplayTagQueryExprType_MAX7                        = 7
};

/// Enum /Script/GameplayTags.EGameplayTagSourceType
/// Size: 0x07
enum EGameplayTagSourceType : uint8_t
{
	EGameplayTagSourceType__Native0                                                  = 0,
	EGameplayTagSourceType__DefaultTagList1                                          = 1,
	EGameplayTagSourceType__TagList2                                                 = 2,
	EGameplayTagSourceType__RestrictedTagList3                                       = 3,
	EGameplayTagSourceType__DataTable4                                               = 4,
	EGameplayTagSourceType__Invalid5                                                 = 5,
	EGameplayTagSourceType__EGameplayTagSourceType_MAX6                              = 6
};

/// Enum /Script/GameplayTags.EGameplayTagSelectionType
/// Size: 0x05
enum EGameplayTagSelectionType : uint8_t
{
	EGameplayTagSelectionType__None0                                                 = 0,
	EGameplayTagSelectionType__NonRestrictedOnly1                                    = 1,
	EGameplayTagSelectionType__RestrictedOnly2                                       = 2,
	EGameplayTagSelectionType__All3                                                  = 3,
	EGameplayTagSelectionType__EGameplayTagSelectionType_MAX4                        = 4
};

