
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package ModelViewViewModel.

/// Struct /Script/ModelViewViewModel.MVVMAvailableBinding
/// Size: 0x000C (0x000000 - 0x00000C)
struct FMVVMAvailableBinding
{ 
	FMVVMBindingName                                   BindingName;                                                // 0x0000   (0x0008)  
	bool                                               bIsReadable;                                                // 0x0008   (0x0001)  
	bool                                               bIsWritable;                                                // 0x0009   (0x0001)  
	bool                                               bHasNotify;                                                 // 0x000A   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x000B   (0x0001)  MISSED
};

/// Struct /Script/ModelViewViewModel.MVVMBindingName
/// Size: 0x0008 (0x000000 - 0x000008)
struct FMVVMBindingName
{ 
	FName                                              BindingName;                                                // 0x0000   (0x0008)  
};

/// Struct /Script/ModelViewViewModel.MVVMEventField
/// Size: 0x0001 (0x000000 - 0x000001)
struct FMVVMEventField
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/ModelViewViewModel.MVVMViewModelContextInstance
/// Size: 0x0018 (0x000000 - 0x000018)
struct FMVVMViewModelContextInstance
{ 
	FMVVMViewModelContext                              Context;                                                    // 0x0000   (0x0010)  
	UMVVMViewModelBase*                                Instance;                                                   // 0x0010   (0x0008)  
};

/// Struct /Script/ModelViewViewModel.MVVMViewModelContext
/// Size: 0x0010 (0x000000 - 0x000010)
struct FMVVMViewModelContext
{ 
	UClass*                                            ContextClass;                                               // 0x0000   (0x0008)  
	FName                                              ContextName;                                                // 0x0008   (0x0008)  
};

/// Struct /Script/ModelViewViewModel.MVVMVCompiledFields
/// Size: 0x0010 (0x000000 - 0x000010)
struct FMVVMVCompiledFields
{ 
	UStruct*                                           ClassOrScriptStruct;                                        // 0x0000   (0x0008)  
	int16_t                                            LibraryStartIndex;                                          // 0x0008   (0x0002)  
	int16_t                                            NumberOfProperties;                                         // 0x000A   (0x0002)  
	int16_t                                            NumberOfFunctions;                                          // 0x000C   (0x0002)  
	int16_t                                            NumberOfFieldIds;                                           // 0x000E   (0x0002)  
};

/// Struct /Script/ModelViewViewModel.MVVMVCompiledFieldPath
/// Size: 0x0004 (0x000000 - 0x000004)
struct FMVVMVCompiledFieldPath
{ 
	int16_t                                            StartIndex;                                                 // 0x0000   (0x0002)  
	int16_t                                            Num;                                                        // 0x0002   (0x0002)  
};

/// Struct /Script/ModelViewViewModel.MVVMVCompiledFieldId
/// Size: 0x0002 (0x000000 - 0x000002)
struct FMVVMVCompiledFieldId
{ 
	int16_t                                            FieldIdIndex;                                               // 0x0000   (0x0002)  
};

/// Struct /Script/ModelViewViewModel.MVVMCompiledLoadedPropertyOrFunctionIndex
/// Size: 0x0004 (0x000000 - 0x000004)
struct FMVVMCompiledLoadedPropertyOrFunctionIndex
{ 
	int16_t                                            Index;                                                      // 0x0000   (0x0002)  
	bool                                               bIsObjectProperty : 1;                                      // 0x0002:0 (0x0001)  
	bool                                               bIsScriptStructProperty : 1;                                // 0x0002:1 (0x0001)  
	bool                                               bIsProperty : 1;                                            // 0x0002:2 (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x0003   (0x0001)  MISSED
};

/// Struct /Script/ModelViewViewModel.MVVMVCompiledBinding
/// Size: 0x000C (0x000000 - 0x00000C)
struct FMVVMVCompiledBinding
{ 
	FMVVMVCompiledFieldPath                            SourceFieldPath;                                            // 0x0000   (0x0004)  
	FMVVMVCompiledFieldPath                            DestinationFieldPath;                                       // 0x0004   (0x0004)  
	FMVVMVCompiledFieldPath                            ConversionFunctionFieldPath;                                // 0x0008   (0x0004)  
};

/// Struct /Script/ModelViewViewModel.MVVMCompiledBindingLibrary
/// Size: 0x0060 (0x000000 - 0x000060)
struct FMVVMCompiledBindingLibrary
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
	TArray<UFunction*>                                 LoadedFunctions;                                            // 0x0010   (0x0010)  
	unsigned char                                      UnknownData01_5[0x10];                                      // 0x0020   (0x0010)  MISSED
	TArray<FMVVMCompiledLoadedPropertyOrFunctionIndex> FieldPaths;                                                 // 0x0030   (0x0010)  
	TArray<FMVVMVCompiledFields>                       CompiledFields;                                             // 0x0040   (0x0010)  
	TArray<FName>                                      CompiledFieldNames;                                         // 0x0050   (0x0010)  
};

/// Struct /Script/ModelViewViewModel.MVVMViewModelCollection
/// Size: 0x0028 (0x000000 - 0x000028)
struct FMVVMViewModelCollection
{ 
	TArray<FMVVMViewModelContextInstance>              ViewModelInstances;                                         // 0x0000   (0x0010)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0010   (0x0018)  MISSED
};

/// Struct /Script/ModelViewViewModel.MVVMViewClass_SourceCreator
/// Size: 0x0028 (0x000000 - 0x000028)
struct FMVVMViewClass_SourceCreator
{ 
	UClass*                                            ExpectedSourceType;                                         // 0x0000   (0x0008)  
	FMVVMViewModelContext                              GlobalViewModelInstance;                                    // 0x0008   (0x0010)  
	FMVVMVCompiledFieldPath                            FieldPath;                                                  // 0x0018   (0x0004)  
	FName                                              PropertyName;                                               // 0x001C   (0x0008)  
	bool                                               bCreateInstance;                                            // 0x0024   (0x0001)  
	bool                                               bOptional;                                                  // 0x0025   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0026   (0x0002)  MISSED
};

/// Struct /Script/ModelViewViewModel.MVVMViewClass_CompiledBinding
/// Size: 0x001C (0x000000 - 0x00001C)
struct FMVVMViewClass_CompiledBinding
{ 
	FMVVMVCompiledFieldId                              FieldId;                                                    // 0x0000   (0x0002)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0002   (0x0002)  MISSED
	FName                                              SourcePropertyName;                                         // 0x0004   (0x0008)  
	FMVVMVCompiledBinding                              Binding;                                                    // 0x000C   (0x000C)  
	EMVVMExecutionMode                                 ExecutionMode;                                              // 0x0018   (0x0001)  
	char                                               Flags;                                                      // 0x0019   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x001A   (0x0002)  MISSED
};

/// Class /Script/ModelViewViewModel.MVVMViewModelBase
/// Size: 0x0040 (0x000028 - 0x000068)
class UMVVMViewModelBase : public UObject : UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x40];                                      // 0x0028   (0x0040)  MISSED
};

/// Class /Script/ModelViewViewModel.MVVMSubsystem
/// Size: 0x0008 (0x000030 - 0x000038)
class UMVVMSubsystem : public UEngineSubsystem : UEngineSubsystem
{ 
public:
	UMVVMViewModelCollectionObject*                    GlobalViewModelCollection;                                  // 0x0030   (0x0008)  


	/// Functions
	// Function /Script/ModelViewViewModel.MVVMSubsystem.K2_GetViewFromUserWidget
	UMVVMView* K2_GetViewFromUserWidget(UUserWidget* UserWidget);                                                            // [0x15d0670] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ModelViewViewModel.MVVMSubsystem.K2_GetAvailableBindings
	TArray<FMVVMAvailableBinding> K2_GetAvailableBindings(UClass* Class, UClass* Accessor);                                  // [0x15d04e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ModelViewViewModel.MVVMSubsystem.K2_GetAvailableBinding
	FMVVMAvailableBinding K2_GetAvailableBinding(UClass* Class, FMVVMBindingName BindingName, UClass* Accessor);             // [0x15d0330] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ModelViewViewModel.MVVMSubsystem.GetGlobalViewModelCollection
	UMVVMViewModelCollectionObject* GetGlobalViewModelCollection();                                                          // [0xc8b350] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ModelViewViewModel.MVVMSubsystem.DoesWidgetTreeContainedWidget
	bool DoesWidgetTreeContainedWidget(UWidgetTree* WidgetTree, UWidget* ViewWidget);                                        // [0x15cfd30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/ModelViewViewModel.MVVMViewModelCollectionObject
/// Size: 0x0028 (0x000028 - 0x000050)
class UMVVMViewModelCollectionObject : public UObject : UObject
{ 
public:
	FMVVMViewModelCollection                           ViewModelCollection;                                        // 0x0028   (0x0028)  


	/// Functions
	// Function /Script/ModelViewViewModel.MVVMViewModelCollectionObject.RemoveViewModel
	bool RemoveViewModel(FMVVMViewModelContext Context);                                                                     // [0x15d0e60] Final|Native|Public|BlueprintCallable 
	// Function /Script/ModelViewViewModel.MVVMViewModelCollectionObject.RemoveAllViewModelInstance
	int32_t RemoveAllViewModelInstance(UMVVMViewModelBase* ViewModel);                                                       // [0x15d0ce0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ModelViewViewModel.MVVMViewModelCollectionObject.FindViewModelInstance
	UMVVMViewModelBase* FindViewModelInstance(FMVVMViewModelContext Context);                                                // [0x15cff50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ModelViewViewModel.MVVMViewModelCollectionObject.FindFirstViewModelInstanceOfType
	UMVVMViewModelBase* FindFirstViewModelInstanceOfType(UClass*& ViewModelClass);                                           // [0x15cfe60] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ModelViewViewModel.MVVMViewModelCollectionObject.AddViewModelInstance
	bool AddViewModelInstance(FMVVMViewModelContext Context, UMVVMViewModelBase* ViewModel);                                 // [0x15cfc40] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/ModelViewViewModel.MVVMViewModelBlueprintGeneratedClass
/// Size: 0x0020 (0x000370 - 0x000390)
class UMVVMViewModelBlueprintGeneratedClass : public UBlueprintGeneratedClass : UBlueprintGeneratedClass
{ 
public:
	TArray<FFieldNotificationId>                       FieldNotifyNames;                                           // 0x0370   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0380   (0x0010)  MISSED
};

/// Class /Script/ModelViewViewModel.MVVMView
/// Size: 0x0040 (0x000028 - 0x000068)
class UMVVMView : public UUserWidgetExtension : UUserWidgetExtension
{ 
public:
	UMVVMViewClass*                                    ClassExtension;                                             // 0x0028   (0x0008)  
	unsigned char                                      UnknownData00_6[0x38];                                      // 0x0030   (0x0038)  MISSED


	/// Functions
	// Function /Script/ModelViewViewModel.MVVMView.SetViewModel
	bool SetViewModel(FName ViewModelName, TScriptInterface<Class> ViewModel);                                               // [0x15d0fd0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/ModelViewViewModel.MVVMViewClass
/// Size: 0x0088 (0x000028 - 0x0000B0)
class UMVVMViewClass : public UWidgetBlueprintGeneratedClassExtension : UWidgetBlueprintGeneratedClassExtension
{ 
public:
	TArray<FMVVMViewClass_SourceCreator>               SourceCreators;                                             // 0x0028   (0x0010)  
	TArray<FMVVMViewClass_CompiledBinding>             CompiledBindings;                                           // 0x0038   (0x0010)  
	FMVVMCompiledBindingLibrary                        BindingLibrary;                                             // 0x0048   (0x0060)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x00A8   (0x0008)  MISSED
};

/// Class /Script/ModelViewViewModel.MVVMViewWorldSubsystem
/// Size: 0x0060 (0x000040 - 0x0000A0)
class UMVVMViewWorldSubsystem : public UTickableWorldSubsystem : UTickableWorldSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x60];                                      // 0x0040   (0x0060)  MISSED
};

/// Enum /Script/ModelViewViewModel.EMVVMExecutionMode
/// Size: 0x04
enum EMVVMExecutionMode : uint8_t
{
	EMVVMExecutionMode__Immediate0                                                   = 0,
	EMVVMExecutionMode__Delayed1                                                     = 1,
	EMVVMExecutionMode__Tick2                                                        = 2,
	EMVVMExecutionMode__EMVVMExecutionMode_MAX3                                      = 3
};

/// Enum /Script/ModelViewViewModel.EMVVMBindingMode
/// Size: 0x06
enum EMVVMBindingMode : uint8_t
{
	EMVVMBindingMode__OneTimeToDestination0                                          = 0,
	EMVVMBindingMode__OneWayToDestination1                                           = 1,
	EMVVMBindingMode__TwoWay2                                                        = 2,
	EMVVMBindingMode__OneTimeToSource3                                               = 3,
	EMVVMBindingMode__OneWayToSource4                                                = 4,
	EMVVMBindingMode__EMVVMBindingMode_MAX5                                          = 5
};

