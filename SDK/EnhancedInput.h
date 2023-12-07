
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package EnhancedInput.

/// Struct /Script/EnhancedInput.InputActionValue
/// Size: 0x0020 (0x000000 - 0x000020)
struct FInputActionValue
{ 
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0000   (0x0020)  MISSED
};

/// Struct /Script/EnhancedInput.MappingQueryIssue
/// Size: 0x0018 (0x000000 - 0x000018)
struct FMappingQueryIssue
{ 
	EMappingQueryIssue                                 Issue;                                                      // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	UInputMappingContext*                              BlockingContext;                                            // 0x0008   (0x0008)  
	UInputAction*                                      BlockingAction;                                             // 0x0010   (0x0008)  
};

/// Struct /Script/EnhancedInput.PlayerMappableKeySlot
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPlayerMappableKeySlot
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
	int32_t                                            SlotNumber;                                                 // 0x0008   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Struct /Script/EnhancedInput.PlayerMappableKeyOptions
/// Size: 0x0040 (0x000000 - 0x000040)
struct FPlayerMappableKeyOptions
{ 
	UObject*                                           Metadata;                                                   // 0x0000   (0x0008)  
	FName                                              Name;                                                       // 0x0008   (0x0008)  
	FText                                              DisplayName;                                                // 0x0010   (0x0018)  
	FText                                              DisplayCategory;                                            // 0x0028   (0x0018)  
};

/// Struct /Script/EnhancedInput.EnhancedActionKeyMapping
/// Size: 0x0098 (0x000000 - 0x000098)
struct FEnhancedActionKeyMapping
{ 
	FPlayerMappableKeyOptions                          PlayerMappableOptions;                                      // 0x0000   (0x0040)  
	TArray<UInputTrigger*>                             Triggers;                                                   // 0x0040   (0x0010)  
	TArray<UInputModifier*>                            Modifiers;                                                  // 0x0050   (0x0010)  
	UInputAction*                                      Action;                                                     // 0x0060   (0x0008)  
	FKey                                               Key;                                                        // 0x0068   (0x0018)  
	bool                                               bShouldBeIgnored : 1;                                       // 0x0080:0 (0x0001)  
	EPlayerMappableKeySettingBehaviors                 SettingBehavior;                                            // 0x0081   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0082   (0x0006)  MISSED
	UPlayerMappableKeySettings*                        PlayerMappableKeySettings;                                  // 0x0088   (0x0008)  
	bool                                               bIsPlayerMappable : 1;                                      // 0x0090:0 (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0091   (0x0007)  MISSED
};

/// Struct /Script/EnhancedInput.BlueprintEnhancedInputActionBinding
/// Size: 0x0018 (0x000000 - 0x000018)
struct FBlueprintEnhancedInputActionBinding
{ 
	UInputAction*                                      InputAction;                                                // 0x0000   (0x0008)  
	ETriggerEvent                                      TriggerEvent;                                               // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0009   (0x0003)  MISSED
	FName                                              FunctionNameToBind;                                         // 0x000C   (0x0008)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/EnhancedInput.DefaultContextSetting
/// Size: 0x0038 (0x000000 - 0x000038)
struct FDefaultContextSetting
{ 
	TWeakObjectPtr<UInputMappingContext*>              InputMappingContext;                                        // 0x0000   (0x0030)  
	int32_t                                            Priority;                                                   // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Struct /Script/EnhancedInput.ModifyContextOptions
/// Size: 0x0001 (0x000000 - 0x000001)
struct FModifyContextOptions
{ 
	bool                                               bIgnoreAllPressedKeysUntilRelease : 1;                      // 0x0000:0 (0x0001)  
	bool                                               bForceImmediately : 1;                                      // 0x0000:1 (0x0001)  
};

/// Struct /Script/EnhancedInput.InjectedInputArray
/// Size: 0x0010 (0x000000 - 0x000010)
struct FInjectedInputArray
{ 
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/EnhancedInput.InputActionInstance
/// Size: 0x0060 (0x000000 - 0x000060)
struct FInputActionInstance
{ 
	UInputAction*                                      SourceAction;                                               // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_5[0xB];                                       // 0x0008   (0x000B)  MISSED
	ETriggerEvent                                      TriggerEvent;                                               // 0x0013   (0x0001)  
	float                                              LastTriggeredWorldTime;                                     // 0x0014   (0x0004)  
	TArray<UInputTrigger*>                             Triggers;                                                   // 0x0018   (0x0010)  
	TArray<UInputModifier*>                            Modifiers;                                                  // 0x0028   (0x0010)  
	unsigned char                                      UnknownData01_5[0x20];                                      // 0x0038   (0x0020)  MISSED
	float                                              ElapsedProcessedTime;                                       // 0x0058   (0x0004)  
	float                                              ElapsedTriggeredTime;                                       // 0x005C   (0x0004)  
};

/// Struct /Script/EnhancedInput.BlueprintInputDebugKeyDelegateBinding
/// Size: 0x0030 (0x000000 - 0x000030)
struct FBlueprintInputDebugKeyDelegateBinding
{ 
	FInputChord                                        InputChord;                                                 // 0x0000   (0x0020)  
	TEnumAsByte<EInputEvent>                           InputKeyEvent;                                              // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0021   (0x0003)  MISSED
	FName                                              FunctionNameToBind;                                         // 0x0024   (0x0008)  
	bool                                               bExecuteWhenPaused;                                         // 0x002C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x002D   (0x0003)  MISSED
};

/// Struct /Script/EnhancedInput.InputComboStepData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FInputComboStepData
{ 
	UInputAction*                                      ComboStepAction;                                            // 0x0000   (0x0008)  
	char                                               ComboStepCompletionStates;                                  // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0009   (0x0003)  MISSED
	float                                              TimeToPressKey;                                             // 0x000C   (0x0004)  
};

/// Struct /Script/EnhancedInput.InputCancelAction
/// Size: 0x0010 (0x000000 - 0x000010)
struct FInputCancelAction
{ 
	UInputAction*                                      CancelAction;                                               // 0x0000   (0x0008)  
	char                                               CancellationStates;                                         // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0009   (0x0007)  MISSED
};

/// Class /Script/EnhancedInput.EnhancedInputActionDelegateBinding
/// Size: 0x0010 (0x000028 - 0x000038)
class UEnhancedInputActionDelegateBinding : public UInputDelegateBinding : UInputDelegateBinding
{ 
public:
	TArray<FBlueprintEnhancedInputActionBinding>       InputActionDelegateBindings;                                // 0x0028   (0x0010)  
};

/// Class /Script/EnhancedInput.EnhancedInputActionValueBinding
/// Size: 0x0010 (0x000028 - 0x000038)
class UEnhancedInputActionValueBinding : public UInputDelegateBinding : UInputDelegateBinding
{ 
public:
	TArray<FBlueprintEnhancedInputActionBinding>       InputActionValueBindings;                                   // 0x0028   (0x0010)  
};

/// Class /Script/EnhancedInput.EnhancedInputComponent
/// Size: 0x0038 (0x000128 - 0x000160)
class UEnhancedInputComponent : public UInputComponent : UInputComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x38];                                      // 0x0128   (0x0038)  MISSED
};

/// Class /Script/EnhancedInput.EnhancedInputDeveloperSettings
/// Size: 0x0068 (0x000038 - 0x0000A0)
class UEnhancedInputDeveloperSettings : public UDeveloperSettingsBackedByCVars : UDeveloperSettingsBackedByCVars
{ 
public:
	TArray<FDefaultContextSetting>                     DefaultMappingContexts;                                     // 0x0038   (0x0010)  
	TArray<FDefaultContextSetting>                     DefaultWorldSubsystemMappingContexts;                       // 0x0048   (0x0010)  
	TWeakObjectPtr<UClass*>                            DefaultWorldInputClass;                                     // 0x0058   (0x0030)  
	FPerPlatformSettings                               PlatformSettings;                                           // 0x0088   (0x0010)  
	bool                                               bEnableDefaultMappingContexts : 1;                          // 0x0098:0 (0x0001)  
	bool                                               bShouldOnlyTriggerLastActionInChord : 1;                    // 0x0098:1 (0x0001)  
	bool                                               bEnableWorldSubsystem : 1;                                  // 0x0098:2 (0x0001)  
	bool                                               bShouldLogAllWorldSubsystemInputs : 1;                      // 0x0098:3 (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0099   (0x0007)  MISSED
};

/// Class /Script/EnhancedInput.EnhancedInputLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UEnhancedInputLibrary : public UBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/EnhancedInput.EnhancedInputPlatformData
/// Size: 0x0050 (0x000028 - 0x000078)
class UEnhancedInputPlatformData : public UObject : UObject
{ 
public:
	TMap<UInputMappingContext*, UInputMappingContext*> MappingContextRedirects;                                    // 0x0028   (0x0050)  


	/// Functions
	// Function /Script/EnhancedInput.EnhancedInputPlatformData.GetContextRedirect
	UInputMappingContext* GetContextRedirect(UInputMappingContext* InContext);                                               // [0x16ef810] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/EnhancedInput.EnhancedInputPlatformSettings
/// Size: 0x0028 (0x000040 - 0x000068)
class UEnhancedInputPlatformSettings : public UPlatformSettings : UPlatformSettings
{ 
public:
	TArray<TWeakObjectPtr>                             InputData;                                                  // 0x0040   (0x0010)  
	TArray<UClass*>                                    InputDataClasses;                                           // 0x0050   (0x0010)  
	bool                                               bShouldLogMappingContextRedirects;                          // 0x0060   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0061   (0x0007)  MISSED
};

/// Class /Script/EnhancedInput.EnhancedInputSubsystemInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UEnhancedInputSubsystemInterface : public UInterface : UInterface
{ 
public:
};

/// Class /Script/EnhancedInput.EnhancedInputLocalPlayerSubsystem
/// Size: 0x01B0 (0x000030 - 0x0001E0)
class UEnhancedInputLocalPlayerSubsystem : public ULocalPlayerSubsystem : ULocalPlayerSubsystem
{ 
public:
	unsigned char                                      UnknownData00_2[0x1A0];                                     // 0x0030   (0x01A0)  MISSED
	FMulticastInlineDelegate                           ControlMappingsRebuiltDelegate;                             // 0x01D0   (0x0010)  
};

/// Class /Script/EnhancedInput.EnhancedInputWorldSubsystem
/// Size: 0x01C8 (0x000030 - 0x0001F8)
class UEnhancedInputWorldSubsystem : public UWorldSubsystem : UWorldSubsystem
{ 
public:
	unsigned char                                      UnknownData00_2[0x1A0];                                     // 0x0030   (0x01A0)  MISSED
	UEnhancedPlayerInput*                              PlayerInput;                                                // 0x01D0   (0x0008)  
	unsigned char                                      UnknownData01_5[0x10];                                      // 0x01D8   (0x0010)  MISSED
	TArray<TWeakObjectPtr>                             CurrentInputStack;                                          // 0x01E8   (0x0010)  


	/// Functions
	// Function /Script/EnhancedInput.EnhancedInputWorldSubsystem.RemoveActorInputComponent
	bool RemoveActorInputComponent(AActor* Actor);                                                                           // [0x16f1ba0] Final|Native|Public|BlueprintCallable 
	// Function /Script/EnhancedInput.EnhancedInputWorldSubsystem.AddActorInputComponent
	void AddActorInputComponent(AActor* Actor);                                                                              // [0x16ee8d0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/EnhancedInput.EnhancedPlayerInput
/// Size: 0x02A8 (0x000498 - 0x000740)
class UEnhancedPlayerInput : public UPlayerInput : UPlayerInput
{ 
public:
	TMap<UInputMappingContext*, int32_t>               AppliedInputContexts;                                       // 0x0498   (0x0050)  
	TArray<FEnhancedActionKeyMapping>                  EnhancedActionMappings;                                     // 0x04E8   (0x0010)  
	unsigned char                                      UnknownData00_5[0x50];                                      // 0x04F8   (0x0050)  MISSED
	TMap<UInputAction*, FInputActionInstance>          ActionInstanceData;                                         // 0x0548   (0x0050)  
	unsigned char                                      UnknownData01_5[0xA0];                                      // 0x0598   (0x00A0)  MISSED
	TMap<FKey, FVector>                                KeysPressedThisTick;                                        // 0x0638   (0x0050)  
	TMap<UInputAction*, FInjectedInputArray>           InputsInjectedThisTick;                                     // 0x0688   (0x0050)  
	TSet<UInputAction*>                                LastInjectedActions;                                        // 0x06D8   (0x0050)  
	unsigned char                                      UnknownData02_6[0x18];                                      // 0x0728   (0x0018)  MISSED
};

/// Class /Script/EnhancedInput.InputAction
/// Size: 0x0048 (0x000030 - 0x000078)
class UInputAction : public UDataAsset : UDataAsset
{ 
public:
	FText                                              ActionDescription;                                          // 0x0030   (0x0018)  
	bool                                               bConsumeInput;                                              // 0x0048   (0x0001)  
	bool                                               bTriggerWhenPaused;                                         // 0x0049   (0x0001)  
	bool                                               bReserveAllMappings;                                        // 0x004A   (0x0001)  
	EInputActionValueType                              ValueType;                                                  // 0x004B   (0x0001)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x004C   (0x0004)  MISSED
	TArray<UInputTrigger*>                             Triggers;                                                   // 0x0050   (0x0010)  
	TArray<UInputModifier*>                            Modifiers;                                                  // 0x0060   (0x0010)  
	UPlayerMappableKeySettings*                        PlayerMappableKeySettings;                                  // 0x0070   (0x0008)  
};

/// Class /Script/EnhancedInput.InputDebugKeyDelegateBinding
/// Size: 0x0010 (0x000028 - 0x000038)
class UInputDebugKeyDelegateBinding : public UInputDelegateBinding : UInputDelegateBinding
{ 
public:
	TArray<FBlueprintInputDebugKeyDelegateBinding>     InputDebugKeyDelegateBindings;                              // 0x0028   (0x0010)  
};

/// Class /Script/EnhancedInput.InputMappingContext
/// Size: 0x0028 (0x000030 - 0x000058)
class UInputMappingContext : public UDataAsset : UDataAsset
{ 
public:
	TArray<FEnhancedActionKeyMapping>                  Mappings;                                                   // 0x0030   (0x0010)  
	FText                                              ContextDescription;                                         // 0x0040   (0x0018)  


	/// Functions
	// Function /Script/EnhancedInput.InputMappingContext.UnmapKey
	void UnmapKey(UInputAction* Action, FKey Key);                                                                           // [0x16f22b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/EnhancedInput.InputMappingContext.UnmapAllKeysFromAction
	void UnmapAllKeysFromAction(UInputAction* Action);                                                                       // [0x16f21b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/EnhancedInput.InputMappingContext.UnmapAll
	void UnmapAll();                                                                                                         // [0x16f2240] Final|Native|Public|BlueprintCallable 
	// Function /Script/EnhancedInput.InputMappingContext.UnmapAction
	void UnmapAction(UInputAction* Action);                                                                                  // [0x16f21b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/EnhancedInput.InputMappingContext.MapKey
	FEnhancedActionKeyMapping MapKey(UInputAction* Action, FKey ToKey);                                                      // [0x16f1370] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/EnhancedInput.InputModifier
/// Size: 0x0000 (0x000028 - 0x000028)
class UInputModifier : public UObject : UObject
{ 
public:
};

/// Class /Script/EnhancedInput.InputModifierDeadZone
/// Size: 0x0010 (0x000028 - 0x000038)
class UInputModifierDeadZone : public UInputModifier : UInputModifier
{ 
public:
	float                                              LowerThreshold;                                             // 0x0028   (0x0004)  
	float                                              UpperThreshold;                                             // 0x002C   (0x0004)  
	EDeadZoneType                                      Type;                                                       // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Class /Script/EnhancedInput.InputModifierScalar
/// Size: 0x0018 (0x000028 - 0x000040)
class UInputModifierScalar : public UInputModifier : UInputModifier
{ 
public:
	FVector                                            Scalar;                                                     // 0x0028   (0x0018)  
};

/// Class /Script/EnhancedInput.InputModifierScaleByDeltaTime
/// Size: 0x0000 (0x000028 - 0x000028)
class UInputModifierScaleByDeltaTime : public UInputModifier : UInputModifier
{ 
public:
};

/// Class /Script/EnhancedInput.InputModifierNegate
/// Size: 0x0008 (0x000028 - 0x000030)
class UInputModifierNegate : public UInputModifier : UInputModifier
{ 
public:
	bool                                               bX;                                                         // 0x0028   (0x0001)  
	bool                                               bY;                                                         // 0x0029   (0x0001)  
	bool                                               bZ;                                                         // 0x002A   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x002B   (0x0005)  MISSED
};

/// Class /Script/EnhancedInput.InputModifierSmooth
/// Size: 0x0030 (0x000028 - 0x000058)
class UInputModifierSmooth : public UInputModifier : UInputModifier
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0028   (0x0030)  MISSED
};

/// Class /Script/EnhancedInput.InputModifierResponseCurveExponential
/// Size: 0x0018 (0x000028 - 0x000040)
class UInputModifierResponseCurveExponential : public UInputModifier : UInputModifier
{ 
public:
	FVector                                            CurveExponent;                                              // 0x0028   (0x0018)  
};

/// Class /Script/EnhancedInput.InputModifierResponseCurveUser
/// Size: 0x0018 (0x000028 - 0x000040)
class UInputModifierResponseCurveUser : public UInputModifier : UInputModifier
{ 
public:
	UCurveFloat*                                       ResponseX;                                                  // 0x0028   (0x0008)  
	UCurveFloat*                                       ResponseY;                                                  // 0x0030   (0x0008)  
	UCurveFloat*                                       ResponseZ;                                                  // 0x0038   (0x0008)  
};

/// Class /Script/EnhancedInput.InputModifierFOVScaling
/// Size: 0x0008 (0x000028 - 0x000030)
class UInputModifierFOVScaling : public UInputModifier : UInputModifier
{ 
public:
	float                                              FOVScale;                                                   // 0x0028   (0x0004)  
	EFOVScalingType                                    FOVScalingType;                                             // 0x002C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x002D   (0x0003)  MISSED
};

/// Class /Script/EnhancedInput.InputModifierToWorldSpace
/// Size: 0x0000 (0x000028 - 0x000028)
class UInputModifierToWorldSpace : public UInputModifier : UInputModifier
{ 
public:
};

/// Class /Script/EnhancedInput.InputModifierSwizzleAxis
/// Size: 0x0008 (0x000028 - 0x000030)
class UInputModifierSwizzleAxis : public UInputModifier : UInputModifier
{ 
public:
	EInputAxisSwizzle                                  Order;                                                      // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0029   (0x0007)  MISSED
};

/// Class /Script/EnhancedInput.InputTrigger
/// Size: 0x0028 (0x000028 - 0x000050)
class UInputTrigger : public UObject : UObject
{ 
public:
	float                                              ActuationThreshold;                                         // 0x0028   (0x0004)  
	bool                                               bShouldAlwaysTick;                                          // 0x002C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x002D   (0x0003)  MISSED
	FInputActionValue                                  LastValue;                                                  // 0x0030   (0x0020)  


	/// Functions
	// Function /Script/EnhancedInput.InputTrigger.UpdateState
	ETriggerState UpdateState(UEnhancedPlayerInput* PlayerInput, FInputActionValue ModifiedValue, float DeltaTime);          // [0x16f24c0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/EnhancedInput.InputTrigger.IsActuated
	bool IsActuated(FInputActionValue& ForValue);                                                                            // [0x16f0a30] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EnhancedInput.InputTrigger.GetTriggerType
	ETriggerType GetTriggerType();                                                                                           // [0xbfa9a0] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
};

/// Class /Script/EnhancedInput.InputTriggerTimedBase
/// Size: 0x0008 (0x000050 - 0x000058)
class UInputTriggerTimedBase : public UInputTrigger : UInputTrigger
{ 
public:
	float                                              HeldDuration;                                               // 0x0050   (0x0004)  
	bool                                               bAffectedByTimeDilation;                                    // 0x0054   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0055   (0x0003)  MISSED
};

/// Class /Script/EnhancedInput.InputTriggerDown
/// Size: 0x0000 (0x000050 - 0x000050)
class UInputTriggerDown : public UInputTrigger : UInputTrigger
{ 
public:
};

/// Class /Script/EnhancedInput.InputTriggerPressed
/// Size: 0x0000 (0x000050 - 0x000050)
class UInputTriggerPressed : public UInputTrigger : UInputTrigger
{ 
public:
};

/// Class /Script/EnhancedInput.InputTriggerReleased
/// Size: 0x0000 (0x000050 - 0x000050)
class UInputTriggerReleased : public UInputTrigger : UInputTrigger
{ 
public:
};

/// Class /Script/EnhancedInput.InputTriggerHold
/// Size: 0x0010 (0x000058 - 0x000068)
class UInputTriggerHold : public UInputTriggerTimedBase : UInputTriggerTimedBase
{ 
public:
	unsigned char                                      UnknownData00_2[0x4];                                       // 0x0058   (0x0004)  MISSED
	float                                              HoldTimeThreshold;                                          // 0x005C   (0x0004)  
	bool                                               bIsOneShot;                                                 // 0x0060   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0061   (0x0007)  MISSED
};

/// Class /Script/EnhancedInput.InputTriggerHoldAndRelease
/// Size: 0x0008 (0x000058 - 0x000060)
class UInputTriggerHoldAndRelease : public UInputTriggerTimedBase : UInputTriggerTimedBase
{ 
public:
	float                                              HoldTimeThreshold;                                          // 0x0058   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x005C   (0x0004)  MISSED
};

/// Class /Script/EnhancedInput.InputTriggerTap
/// Size: 0x0008 (0x000058 - 0x000060)
class UInputTriggerTap : public UInputTriggerTimedBase : UInputTriggerTimedBase
{ 
public:
	float                                              TapReleaseTimeThreshold;                                    // 0x0058   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x005C   (0x0004)  MISSED
};

/// Class /Script/EnhancedInput.InputTriggerPulse
/// Size: 0x0010 (0x000058 - 0x000068)
class UInputTriggerPulse : public UInputTriggerTimedBase : UInputTriggerTimedBase
{ 
public:
	unsigned char                                      UnknownData00_2[0x4];                                       // 0x0058   (0x0004)  MISSED
	bool                                               bTriggerOnStart;                                            // 0x005C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x005D   (0x0003)  MISSED
	float                                              Interval;                                                   // 0x0060   (0x0004)  
	int32_t                                            TriggerLimit;                                               // 0x0064   (0x0004)  
};

/// Class /Script/EnhancedInput.InputTriggerChordAction
/// Size: 0x0008 (0x000050 - 0x000058)
class UInputTriggerChordAction : public UInputTrigger : UInputTrigger
{ 
public:
	UInputAction*                                      ChordAction;                                                // 0x0050   (0x0008)  
};

/// Class /Script/EnhancedInput.InputTriggerChordBlocker
/// Size: 0x0000 (0x000058 - 0x000058)
class UInputTriggerChordBlocker : public UInputTriggerChordAction : UInputTriggerChordAction
{ 
public:
};

/// Class /Script/EnhancedInput.InputTriggerCombo
/// Size: 0x0028 (0x000050 - 0x000078)
class UInputTriggerCombo : public UInputTrigger : UInputTrigger
{ 
public:
	int32_t                                            CurrentComboStepIndex;                                      // 0x0050   (0x0004)  
	float                                              CurrentTimeBetweenComboSteps;                               // 0x0054   (0x0004)  
	TArray<FInputComboStepData>                        ComboActions;                                               // 0x0058   (0x0010)  
	TArray<FInputCancelAction>                         InputCancelActions;                                         // 0x0068   (0x0010)  
};

/// Class /Script/EnhancedInput.PlayerMappableInputConfig
/// Size: 0x0080 (0x000030 - 0x0000B0)
class UPlayerMappableInputConfig : public UPrimaryDataAsset : UPrimaryDataAsset
{ 
public:
	FName                                              ConfigName;                                                 // 0x0030   (0x0008)  
	FText                                              ConfigDisplayName;                                          // 0x0038   (0x0018)  
	bool                                               bIsDeprecated;                                              // 0x0050   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0051   (0x0007)  MISSED
	UObject*                                           Metadata;                                                   // 0x0058   (0x0008)  
	TMap<UInputMappingContext*, int32_t>               Contexts;                                                   // 0x0060   (0x0050)  


	/// Functions
	// Function /Script/EnhancedInput.PlayerMappableInputConfig.ResetToDefault
	void ResetToDefault();                                                                                                   // [0xd0bd90] Final|Native|Public|BlueprintCallable 
	// Function /Script/EnhancedInput.PlayerMappableInputConfig.IsDeprecated
	bool IsDeprecated();                                                                                                     // [0x16f0b00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EnhancedInput.PlayerMappableInputConfig.GetPlayerMappableKeys
	TArray<FEnhancedActionKeyMapping> GetPlayerMappableKeys();                                                               // [0x16f01b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EnhancedInput.PlayerMappableInputConfig.GetMetadata
	UObject* GetMetadata();                                                                                                  // [0x16f0030] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EnhancedInput.PlayerMappableInputConfig.GetMappingContexts
	TMap<UInputMappingContext*, int32_t> GetMappingContexts();                                                               // [0x16efd60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EnhancedInput.PlayerMappableInputConfig.GetMappingByName
	FEnhancedActionKeyMapping GetMappingByName(FName MappingName);                                                           // [0x16efb10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EnhancedInput.PlayerMappableInputConfig.GetKeysBoundToAction
	TArray<FEnhancedActionKeyMapping> GetKeysBoundToAction(UInputAction* InAction);                                          // [0x16ef9a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EnhancedInput.PlayerMappableInputConfig.GetDisplayName
	FText GetDisplayName();                                                                                                  // [0x16ef930] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EnhancedInput.PlayerMappableInputConfig.GetConfigName
	FName GetConfigName();                                                                                                   // [0xc8b350] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/EnhancedInput.PlayerMappableKeySettings
/// Size: 0x0040 (0x000028 - 0x000068)
class UPlayerMappableKeySettings : public UObject : UObject
{ 
public:
	UObject*                                           Metadata;                                                   // 0x0028   (0x0008)  
	FName                                              Name;                                                       // 0x0030   (0x0008)  
	FText                                              DisplayName;                                                // 0x0038   (0x0018)  
	FText                                              DisplayCategory;                                            // 0x0050   (0x0018)  
};

/// Enum /Script/EnhancedInput.EInputActionValueType
/// Size: 0x05
enum EInputActionValueType : uint8_t
{
	EInputActionValueType__Boolean0                                                  = 0,
	EInputActionValueType__Axis1D1                                                   = 1,
	EInputActionValueType__Axis2D2                                                   = 2,
	EInputActionValueType__Axis3D3                                                   = 3,
	EInputActionValueType__EInputActionValueType_MAX4                                = 4
};

/// Enum /Script/EnhancedInput.EMappingQueryResult
/// Size: 0x06
enum EMappingQueryResult : uint8_t
{
	EMappingQueryResult__Error_EnhancedInputNotEnabled0                              = 0,
	EMappingQueryResult__Error_InputContextNotInActiveContexts1                      = 1,
	EMappingQueryResult__Error_InvalidAction2                                        = 2,
	EMappingQueryResult__NotMappable3                                                = 3,
	EMappingQueryResult__MappingAvailable4                                           = 4,
	EMappingQueryResult__EMappingQueryResult_MAX5                                    = 5
};

/// Enum /Script/EnhancedInput.EMappingQueryIssue
/// Size: 0x08
enum EMappingQueryIssue : uint8_t
{
	EMappingQueryIssue__NoIssue0                                                     = 0,
	EMappingQueryIssue__ReservedByAction1                                            = 1,
	EMappingQueryIssue__HidesExistingMapping2                                        = 2,
	EMappingQueryIssue__HiddenByExistingMapping3                                     = 4,
	EMappingQueryIssue__CollisionWithMappingInSameContext4                           = 8,
	EMappingQueryIssue__ForcesTypePromotion5                                         = 16,
	EMappingQueryIssue__ForcesTypeDemotion6                                          = 32,
	EMappingQueryIssue__EMappingQueryIssue_MAX7                                      = 33
};

/// Enum /Script/EnhancedInput.EPlayerMappableKeySettingBehaviors
/// Size: 0x04
enum EPlayerMappableKeySettingBehaviors : uint8_t
{
	EPlayerMappableKeySettingBehaviors__InheritSettingsFromAction0                   = 0,
	EPlayerMappableKeySettingBehaviors__OverrideSettings1                            = 1,
	EPlayerMappableKeySettingBehaviors__IgnoreSettings2                              = 2,
	EPlayerMappableKeySettingBehaviors__EPlayerMappableKeySettingBehaviors_MAX3      = 3
};

/// Enum /Script/EnhancedInput.EInputMappingRebuildType
/// Size: 0x04
enum EInputMappingRebuildType : uint8_t
{
	EInputMappingRebuildType__None0                                                  = 0,
	EInputMappingRebuildType__Rebuild1                                               = 1,
	EInputMappingRebuildType__RebuildWithFlush2                                      = 2,
	EInputMappingRebuildType__EInputMappingRebuildType_MAX3                          = 3
};

/// Enum /Script/EnhancedInput.EDeadZoneType
/// Size: 0x03
enum EDeadZoneType : uint8_t
{
	EDeadZoneType__Axial0                                                            = 0,
	EDeadZoneType__Radial1                                                           = 1,
	EDeadZoneType__EDeadZoneType_MAX2                                                = 2
};

/// Enum /Script/EnhancedInput.EFOVScalingType
/// Size: 0x03
enum EFOVScalingType : uint8_t
{
	EFOVScalingType__Standard0                                                       = 0,
	EFOVScalingType__UE4_BackCompat1                                                 = 1,
	EFOVScalingType__EFOVScalingType_MAX2                                            = 2
};

/// Enum /Script/EnhancedInput.EInputAxisSwizzle
/// Size: 0x06
enum EInputAxisSwizzle : uint8_t
{
	EInputAxisSwizzle__YXZ0                                                          = 0,
	EInputAxisSwizzle__ZYX1                                                          = 1,
	EInputAxisSwizzle__XZY2                                                          = 2,
	EInputAxisSwizzle__YZX3                                                          = 3,
	EInputAxisSwizzle__ZXY4                                                          = 4,
	EInputAxisSwizzle__EInputAxisSwizzle_MAX5                                        = 5
};

/// Enum /Script/EnhancedInput.ETriggerState
/// Size: 0x04
enum ETriggerState : uint8_t
{
	ETriggerState__None0                                                             = 0,
	ETriggerState__Ongoing1                                                          = 1,
	ETriggerState__Triggered2                                                        = 2,
	ETriggerState__ETriggerState_MAX3                                                = 3
};

/// Enum /Script/EnhancedInput.ETriggerEvent
/// Size: 0x07
enum ETriggerEvent : uint8_t
{
	ETriggerEvent__None0                                                             = 0,
	ETriggerEvent__Triggered1                                                        = 1,
	ETriggerEvent__Started2                                                          = 2,
	ETriggerEvent__Ongoing3                                                          = 4,
	ETriggerEvent__Canceled4                                                         = 8,
	ETriggerEvent__Completed5                                                        = 16,
	ETriggerEvent__ETriggerEvent_MAX6                                                = 17
};

/// Enum /Script/EnhancedInput.ETriggerType
/// Size: 0x04
enum ETriggerType : uint8_t
{
	ETriggerType__Explicit0                                                          = 0,
	ETriggerType__Implicit1                                                          = 1,
	ETriggerType__Blocker2                                                           = 2,
	ETriggerType__ETriggerType_MAX3                                                  = 3
};

/// Enum /Script/EnhancedInput.ETriggerEventsSupported
/// Size: 0x06
enum ETriggerEventsSupported : uint8_t
{
	ETriggerEventsSupported__None0                                                   = 0,
	ETriggerEventsSupported__Instant1                                                = 1,
	ETriggerEventsSupported__Uninterruptible2                                        = 2,
	ETriggerEventsSupported__Ongoing3                                                = 4,
	ETriggerEventsSupported__All4                                                    = 7,
	ETriggerEventsSupported__ETriggerEventsSupported_MAX5                            = 8
};

