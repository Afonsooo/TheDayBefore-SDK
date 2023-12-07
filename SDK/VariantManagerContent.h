
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package VariantManagerContent.

/// Struct /Script/VariantManagerContent.FunctionCaller
/// Size: 0x0008 (0x000000 - 0x000008)
struct FFunctionCaller
{ 
	FName                                              FunctionName;                                               // 0x0000   (0x0008)  
};

/// Struct /Script/VariantManagerContent.CapturedPropSegment
/// Size: 0x0028 (0x000000 - 0x000028)
struct FCapturedPropSegment
{ 
	FString                                            PropertyName;                                               // 0x0000   (0x0010)  
	int32_t                                            PropertyIndex;                                              // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0014   (0x0004)  MISSED
	FString                                            ComponentName;                                              // 0x0018   (0x0010)  
};

/// Struct /Script/VariantManagerContent.VariantDependency
/// Size: 0x0068 (0x000000 - 0x000068)
struct FVariantDependency
{ 
	TWeakObjectPtr<UVariantSet*>                       VariantSet;                                                 // 0x0000   (0x0030)  
	TWeakObjectPtr<UVariant*>                          Variant;                                                    // 0x0030   (0x0030)  
	bool                                               bEnabled;                                                   // 0x0060   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0061   (0x0007)  MISSED
};

/// Class /Script/VariantManagerContent.LevelVariantSets
/// Size: 0x0068 (0x000028 - 0x000090)
class ULevelVariantSets : public UObject : UObject
{ 
public:
	UBlueprintGeneratedClass*                          DirectorClass;                                              // 0x0028   (0x0008)  
	TArray<UVariantSet*>                               VariantSets;                                                // 0x0030   (0x0010)  
	unsigned char                                      UnknownData00_6[0x50];                                      // 0x0040   (0x0050)  MISSED


	/// Functions
	// Function /Script/VariantManagerContent.LevelVariantSets.GetVariantSetByName
	UVariantSet* GetVariantSetByName(FString VariantSetName);                                                                // [0x19ccb10] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VariantManagerContent.LevelVariantSets.GetVariantSet
	UVariantSet* GetVariantSet(int32_t VariantSetIndex);                                                                     // [0x19cca50] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VariantManagerContent.LevelVariantSets.GetNumVariantSets
	int32_t GetNumVariantSets();                                                                                             // [0x11e0630] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/VariantManagerContent.LevelVariantSetsActor
/// Size: 0x0070 (0x000290 - 0x000300)
class ALevelVariantSetsActor : public AActor : AActor
{ 
public:
	FSoftObjectPath                                    LevelVariantSets;                                           // 0x0290   (0x0020)  
	TMap<UBlueprintGeneratedClass*, ULevelVariantSetsFunctionDirector*> DirectorInstances;                         // 0x02B0   (0x0050)  


	/// Functions
	// Function /Script/VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByName
	bool SwitchOnVariantByName(FString VariantSetName, FString VariantName);                                                 // [0x19cdbe0] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByIndex
	bool SwitchOnVariantByIndex(int32_t VariantSetIndex, int32_t VariantIndex);                                              // [0x19cdac0] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.LevelVariantSetsActor.SetLevelVariantSets
	void SetLevelVariantSets(ULevelVariantSets* InVariantSets);                                                              // [0x19cd140] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.LevelVariantSetsActor.GetLevelVariantSets
	ULevelVariantSets* GetLevelVariantSets(bool bLoad);                                                                      // [0x19cc500] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/VariantManagerContent.LevelVariantSetsFunctionDirector
/// Size: 0x0018 (0x000028 - 0x000040)
class ULevelVariantSetsFunctionDirector : public UObject : UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0028   (0x0018)  MISSED
};

/// Class /Script/VariantManagerContent.PropertyValue
/// Size: 0x0198 (0x000028 - 0x0001C0)
class UPropertyValue : public UObject : UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x60];                                      // 0x0028   (0x0060)  MISSED
	TArray<Properties>                                 Properties;                                                 // 0x0088   (0x0010)  
	TArray<int32_t>                                    PropertyIndices;                                            // 0x0098   (0x0010)  
	TArray<FCapturedPropSegment>                       CapturedPropSegments;                                       // 0x00A8   (0x0010)  
	FString                                            FullDisplayString;                                          // 0x00B8   (0x0010)  
	FName                                              PropertySetterName;                                         // 0x00C8   (0x0008)  
	TMap<FString, FString>                             PropertySetterParameterDefaults;                            // 0x00D0   (0x0050)  
	bool                                               bHasRecordedData;                                           // 0x0120   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0121   (0x0007)  MISSED
	UClass*                                            LeafPropertyClass;                                          // 0x0128   (0x0008)  
	unsigned char                                      UnknownData02_5[0x8];                                       // 0x0130   (0x0008)  MISSED
	TArray<char>                                       ValueBytes;                                                 // 0x0138   (0x0010)  
	EPropertyValueCategory                             PropCategory;                                               // 0x0148   (0x0001)  
	unsigned char                                      UnknownData03_6[0x77];                                      // 0x0149   (0x0077)  MISSED


	/// Functions
	// Function /Script/VariantManagerContent.PropertyValue.HasRecordedData
	bool HasRecordedData();                                                                                                  // [0x19ccc70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VariantManagerContent.PropertyValue.GetPropertyTooltip
	FText GetPropertyTooltip();                                                                                              // [0x19cc770] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VariantManagerContent.PropertyValue.GetFullDisplayString
	FString GetFullDisplayString();                                                                                          // [0x19cc4d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/VariantManagerContent.PropertyValueTransform
/// Size: 0x0000 (0x0001C0 - 0x0001C0)
class UPropertyValueTransform : public UPropertyValue : UPropertyValue
{ 
public:
};

/// Class /Script/VariantManagerContent.PropertyValueVisibility
/// Size: 0x0000 (0x0001C0 - 0x0001C0)
class UPropertyValueVisibility : public UPropertyValue : UPropertyValue
{ 
public:
};

/// Class /Script/VariantManagerContent.PropertyValueColor
/// Size: 0x0000 (0x0001C0 - 0x0001C0)
class UPropertyValueColor : public UPropertyValue : UPropertyValue
{ 
public:
};

/// Class /Script/VariantManagerContent.PropertyValueMaterial
/// Size: 0x0000 (0x0001C0 - 0x0001C0)
class UPropertyValueMaterial : public UPropertyValue : UPropertyValue
{ 
public:
};

/// Class /Script/VariantManagerContent.PropertyValueOption
/// Size: 0x0000 (0x0001C0 - 0x0001C0)
class UPropertyValueOption : public UPropertyValue : UPropertyValue
{ 
public:
};

/// Class /Script/VariantManagerContent.PropertyValueSoftObject
/// Size: 0x0000 (0x0001C0 - 0x0001C0)
class UPropertyValueSoftObject : public UPropertyValue : UPropertyValue
{ 
public:
};

/// Class /Script/VariantManagerContent.SwitchActor
/// Size: 0x0028 (0x000290 - 0x0002B8)
class ASwitchActor : public AActor : AActor
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0290   (0x0018)  MISSED
	USceneComponent*                                   SceneComponent;                                             // 0x02A8   (0x0008)  
	int32_t                                            LastSelectedOption;                                         // 0x02B0   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x02B4   (0x0004)  MISSED


	/// Functions
	// Function /Script/VariantManagerContent.SwitchActor.SelectOption
	void SelectOption(int32_t OptionIndex);                                                                                  // [0x19ccd60] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.SwitchActor.GetSelectedOption
	int32_t GetSelectedOption();                                                                                             // [0x18f1560] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VariantManagerContent.SwitchActor.GetOptions
	TArray<AActor*> GetOptions();                                                                                            // [0x19cc5e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/VariantManagerContent.Variant
/// Size: 0x0058 (0x000028 - 0x000080)
class UVariant : public UObject : UObject
{ 
public:
	TArray<FVariantDependency>                         Dependencies;                                               // 0x0028   (0x0010)  
	FText                                              DisplayText;                                                // 0x0038   (0x0018)  
	unsigned char                                      UnknownData00_5[0x18];                                      // 0x0050   (0x0018)  MISSED
	TArray<UVariantObjectBinding*>                     ObjectBindings;                                             // 0x0068   (0x0010)  
	UTexture2D*                                        Thumbnail;                                                  // 0x0078   (0x0008)  


	/// Functions
	// Function /Script/VariantManagerContent.Variant.SwitchOn
	void SwitchOn();                                                                                                         // [0x19cdaa0] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.Variant.SetThumbnailFromTexture
	void SetThumbnailFromTexture(UTexture2D* NewThumbnail);                                                                  // [0x19cd940] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.Variant.SetThumbnailFromFile
	void SetThumbnailFromFile(FString FilePath);                                                                             // [0x19cd6f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.Variant.SetThumbnailFromEditorViewport
	void SetThumbnailFromEditorViewport();                                                                                   // [0xd0bd90] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.Variant.SetThumbnailFromCamera
	void SetThumbnailFromCamera(UObject* WorldContextObject, FTransform& CameraTransform, float FOVDegrees, float MinZ, float Gamma); // [0x19cd290] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/VariantManagerContent.Variant.SetDisplayText
	void SetDisplayText(FText& NewDisplayText);                                                                              // [0x19ccf80] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VariantManagerContent.Variant.SetDependency
	void SetDependency(int32_t Index, FVariantDependency& Dependency);                                                       // [0x19ccdf0] Final|Native|Public|HasOutParms 
	// Function /Script/VariantManagerContent.Variant.IsActive
	bool IsActive();                                                                                                         // [0x19ccc90] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.Variant.GetThumbnail
	UTexture2D* GetThumbnail();                                                                                              // [0x15a9fb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.Variant.GetParent
	UVariantSet* GetParent();                                                                                                // [0x19cc690] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VariantManagerContent.Variant.GetNumDependencies
	int32_t GetNumDependencies();                                                                                            // [0x19cc5c0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VariantManagerContent.Variant.GetNumActors
	int32_t GetNumActors();                                                                                                  // [0x19cc5a0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VariantManagerContent.Variant.GetDisplayText
	FText GetDisplayText();                                                                                                  // [0x19cc3b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VariantManagerContent.Variant.GetDependents
	TArray<UVariant*> GetDependents(ULevelVariantSets* LevelVariantSets, bool bOnlyEnabledDependencies);                     // [0x19cc140] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.Variant.GetDependency
	FVariantDependency GetDependency(int32_t Index);                                                                         // [0x19cc0a0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VariantManagerContent.Variant.GetActor
	AActor* GetActor(int32_t ActorIndex);                                                                                    // [0x19cbfb0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VariantManagerContent.Variant.DeleteDependency
	void DeleteDependency(int32_t Index);                                                                                    // [0x19cbf20] Final|Native|Public  
	// Function /Script/VariantManagerContent.Variant.AddDependency
	int32_t AddDependency(FVariantDependency& Dependency);                                                                   // [0x19cbda0] Final|Native|Public|HasOutParms 
};

/// Class /Script/VariantManagerContent.VariantObjectBinding
/// Size: 0x0070 (0x000028 - 0x000098)
class UVariantObjectBinding : public UObject : UObject
{ 
public:
	FString                                            CachedActorLabel;                                           // 0x0028   (0x0010)  
	FSoftObjectPath                                    ObjectPtr;                                                  // 0x0038   (0x0020)  
	TLazyObjectPtr<UObject*>                           LazyObjectPtr;                                              // 0x0058   (0x001C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0074   (0x0004)  MISSED
	TArray<UPropertyValue*>                            CapturedProperties;                                         // 0x0078   (0x0010)  
	TArray<FFunctionCaller>                            FunctionCallers;                                            // 0x0088   (0x0010)  
};

/// Class /Script/VariantManagerContent.VariantSet
/// Size: 0x0050 (0x000028 - 0x000078)
class UVariantSet : public UObject : UObject
{ 
public:
	FText                                              DisplayText;                                                // 0x0028   (0x0018)  
	unsigned char                                      UnknownData00_5[0x18];                                      // 0x0040   (0x0018)  MISSED
	bool                                               bExpanded;                                                  // 0x0058   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0059   (0x0007)  MISSED
	TArray<UVariant*>                                  Variants;                                                   // 0x0060   (0x0010)  
	UTexture2D*                                        Thumbnail;                                                  // 0x0070   (0x0008)  


	/// Functions
	// Function /Script/VariantManagerContent.VariantSet.SetThumbnailFromTexture
	void SetThumbnailFromTexture(UTexture2D* NewThumbnail);                                                                  // [0x19cda00] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.VariantSet.SetThumbnailFromFile
	void SetThumbnailFromFile(FString FilePath);                                                                             // [0x19cd830] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.VariantSet.SetThumbnailFromEditorViewport
	void SetThumbnailFromEditorViewport();                                                                                   // [0xd0bd90] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.VariantSet.SetThumbnailFromCamera
	void SetThumbnailFromCamera(UObject* WorldContextObject, FTransform& CameraTransform, float FOVDegrees, float MinZ, float Gamma); // [0x19cd4d0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/VariantManagerContent.VariantSet.SetDisplayText
	void SetDisplayText(FText& NewDisplayText);                                                                              // [0x19cd060] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VariantManagerContent.VariantSet.GetVariantByName
	UVariant* GetVariantByName(FString VariantName);                                                                         // [0x19cc8f0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VariantManagerContent.VariantSet.GetVariant
	UVariant* GetVariant(int32_t VariantIndex);                                                                              // [0x19cc830] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VariantManagerContent.VariantSet.GetThumbnail
	UTexture2D* GetThumbnail();                                                                                              // [0x19cc810] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.VariantSet.GetParent
	ULevelVariantSets* GetParent();                                                                                          // [0x19cc700] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VariantManagerContent.VariantSet.GetNumVariants
	int32_t GetNumVariants();                                                                                                // [0x10a3d90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VariantManagerContent.VariantSet.GetDisplayText
	FText GetDisplayText();                                                                                                  // [0x19cc440] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Enum /Script/VariantManagerContent.EPropertyValueCategory
/// Size: 0x10
enum EPropertyValueCategory : uint8_t
{
	EPropertyValueCategory__Undefined0                                               = 0,
	EPropertyValueCategory__Generic1                                                 = 1,
	EPropertyValueCategory__RelativeLocation2                                        = 2,
	EPropertyValueCategory__RelativeRotation3                                        = 4,
	EPropertyValueCategory__RelativeScale3D4                                         = 8,
	EPropertyValueCategory__Visibility5                                              = 16,
	EPropertyValueCategory__Material6                                                = 32,
	EPropertyValueCategory__Color7                                                   = 64,
	EPropertyValueCategory__Option8                                                  = 128,
	EPropertyValueCategory__EPropertyValueCategory_MAX9                              = 129
};

