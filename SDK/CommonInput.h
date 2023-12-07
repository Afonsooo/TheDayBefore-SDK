
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package CommonInput.

/// Struct /Script/CommonInput.CommonInputKeyBrushConfiguration
/// Size: 0x00F0 (0x000000 - 0x0000F0)
struct FCommonInputKeyBrushConfiguration
{ 
	FKey                                               Key;                                                        // 0x0000   (0x0018)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0018   (0x0008)  MISSED
	FSlateBrush                                        KeyBrush;                                                   // 0x0020   (0x00D0)  
};

/// Struct /Script/CommonInput.CommonInputKeySetBrushConfiguration
/// Size: 0x00E0 (0x000000 - 0x0000E0)
struct FCommonInputKeySetBrushConfiguration
{ 
	TArray<FKey>                                       Keys;                                                       // 0x0000   (0x0010)  
	FSlateBrush                                        KeyBrush;                                                   // 0x0010   (0x00D0)  
};

/// Struct /Script/CommonInput.InputDeviceIdentifierPair
/// Size: 0x0018 (0x000000 - 0x000018)
struct FInputDeviceIdentifierPair
{ 
	FName                                              InputDeviceName;                                            // 0x0000   (0x0008)  
	FString                                            HardwareDeviceIdentifier;                                   // 0x0008   (0x0010)  
};

/// Struct /Script/CommonInput.CommonInputPlatformBaseData
/// Size: 0x0038 (0x000000 - 0x000038)
struct FCommonInputPlatformBaseData
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
	ECommonInputType                                   DefaultInputType;                                           // 0x0008   (0x0001)  
	bool                                               bSupportsMouseAndKeyboard;                                  // 0x0009   (0x0001)  
	bool                                               bSupportsGamepad;                                           // 0x000A   (0x0001)  
	unsigned char                                      UnknownData01_5[0x1];                                       // 0x000B   (0x0001)  MISSED
	FName                                              DefaultGamepadName;                                         // 0x000C   (0x0008)  
	bool                                               bCanChangeGamepadType;                                      // 0x0014   (0x0001)  
	bool                                               bSupportsTouch;                                             // 0x0015   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x0016   (0x0002)  MISSED
	TArray<TWeakObjectPtr>                             ControllerData;                                             // 0x0018   (0x0010)  
	TArray<UClass*>                                    ControllerDataClasses;                                      // 0x0028   (0x0010)  
};

/// Class /Script/CommonInput.CommonInputActionDomain
/// Size: 0x0010 (0x000030 - 0x000040)
class UCommonInputActionDomain : public UDataAsset : UDataAsset
{ 
public:
	ECommonInputEventFlowBehavior                      Behavior;                                                   // 0x0030   (0x0004)  
	ECommonInputEventFlowBehavior                      InnerBehavior;                                              // 0x0034   (0x0004)  
	bool                                               bUseActionDomainDesiredInputConfig;                         // 0x0038   (0x0001)  
	ECommonInputMode                                   InputMode;                                                  // 0x0039   (0x0001)  
	EMouseCaptureMode                                  MouseCaptureMode;                                           // 0x003A   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x003B   (0x0005)  MISSED
};

/// Class /Script/CommonInput.CommonInputActionDomainTable
/// Size: 0x0018 (0x000030 - 0x000048)
class UCommonInputActionDomainTable : public UDataAsset : UDataAsset
{ 
public:
	TArray<UCommonInputActionDomain*>                  ActionDomains;                                              // 0x0030   (0x0010)  
	ECommonInputMode                                   InputMode;                                                  // 0x0040   (0x0001)  
	EMouseCaptureMode                                  MouseCaptureMode;                                           // 0x0041   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0042   (0x0006)  MISSED
};

/// Class /Script/CommonInput.CommonUIInputData
/// Size: 0x0030 (0x000028 - 0x000058)
class UCommonUIInputData : public UObject : UObject
{ 
public:
	FDataTableRowHandle                                DefaultClickAction;                                         // 0x0028   (0x0010)  
	FDataTableRowHandle                                DefaultBackAction;                                          // 0x0038   (0x0010)  
	UInputAction*                                      EnhancedInputClickAction;                                   // 0x0048   (0x0008)  
	UInputAction*                                      EnhancedInputBackAction;                                    // 0x0050   (0x0008)  
};

/// Class /Script/CommonInput.CommonInputBaseControllerData
/// Size: 0x00E8 (0x000028 - 0x000110)
class UCommonInputBaseControllerData : public UObject : UObject
{ 
public:
	ECommonInputType                                   InputType;                                                  // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0029   (0x0003)  MISSED
	FName                                              GamepadName;                                                // 0x002C   (0x0008)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0034   (0x0004)  MISSED
	FText                                              GamepadDisplayName;                                         // 0x0038   (0x0018)  
	FText                                              GamepadCategory;                                            // 0x0050   (0x0018)  
	FText                                              GamepadPlatformName;                                        // 0x0068   (0x0018)  
	TArray<FInputDeviceIdentifierPair>                 GamepadHardwareIdMapping;                                   // 0x0080   (0x0010)  
	TWeakObjectPtr<UTexture2D*>                        ControllerTexture;                                          // 0x0090   (0x0030)  
	TWeakObjectPtr<UTexture2D*>                        ControllerButtonMaskTexture;                                // 0x00C0   (0x0030)  
	TArray<FCommonInputKeyBrushConfiguration>          InputBrushDataMap;                                          // 0x00F0   (0x0010)  
	TArray<FCommonInputKeySetBrushConfiguration>       InputBrushKeySets;                                          // 0x0100   (0x0010)  


	/// Functions
	// Function /Script/CommonInput.CommonInputBaseControllerData.GetRegisteredGamepads
	TArray<FName> GetRegisteredGamepads();                                                                                   // [0x16ce0e0] Final|Native|Static|Public 
};

/// Class /Script/CommonInput.CommonInputPlatformSettings
/// Size: 0x0030 (0x000040 - 0x000070)
class UCommonInputPlatformSettings : public UPlatformSettings : UPlatformSettings
{ 
public:
	ECommonInputType                                   DefaultInputType;                                           // 0x0040   (0x0001)  
	bool                                               bSupportsMouseAndKeyboard;                                  // 0x0041   (0x0001)  
	bool                                               bSupportsTouch;                                             // 0x0042   (0x0001)  
	bool                                               bSupportsGamepad;                                           // 0x0043   (0x0001)  
	FName                                              DefaultGamepadName;                                         // 0x0044   (0x0008)  
	bool                                               bCanChangeGamepadType;                                      // 0x004C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x004D   (0x0003)  MISSED
	TArray<TWeakObjectPtr>                             ControllerData;                                             // 0x0050   (0x0010)  
	TArray<UClass*>                                    ControllerDataClasses;                                      // 0x0060   (0x0010)  
};

/// Class /Script/CommonInput.CommonInputSettings
/// Size: 0x00F8 (0x000038 - 0x000130)
class UCommonInputSettings : public UDeveloperSettings : UDeveloperSettings
{ 
public:
	TWeakObjectPtr<UClass*>                            InputData;                                                  // 0x0038   (0x0030)  
	FPerPlatformSettings                               PlatformInput;                                              // 0x0068   (0x0010)  
	TMap<FName, FCommonInputPlatformBaseData>          CommonInputPlatformData;                                    // 0x0078   (0x0050)  
	bool                                               bEnableInputMethodThrashingProtection;                      // 0x00C8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00C9   (0x0003)  MISSED
	int32_t                                            InputMethodThrashingLimit;                                  // 0x00CC   (0x0004)  
	double                                             InputMethodThrashingWindowInSeconds;                        // 0x00D0   (0x0008)  
	double                                             InputMethodThrashingCooldownInSeconds;                      // 0x00D8   (0x0008)  
	bool                                               bAllowOutOfFocusDeviceInput;                                // 0x00E0   (0x0001)  
	bool                                               bEnableDefaultInputConfig;                                  // 0x00E1   (0x0001)  
	bool                                               bEnableEnhancedInputSupport;                                // 0x00E2   (0x0001)  
	unsigned char                                      UnknownData01_5[0x5];                                       // 0x00E3   (0x0005)  MISSED
	TWeakObjectPtr<UCommonInputActionDomainTable*>     ActionDomainTable;                                          // 0x00E8   (0x0030)  
	unsigned char                                      UnknownData02_5[0x8];                                       // 0x0118   (0x0008)  MISSED
	UClass*                                            InputDataClass;                                             // 0x0120   (0x0008)  
	UCommonInputActionDomainTable*                     ActionDomainTablePtr;                                       // 0x0128   (0x0008)  


	/// Functions
	// Function /Script/CommonInput.CommonInputSettings.IsEnhancedInputSupportEnabled
	bool IsEnhancedInputSupportEnabled();                                                                                    // [0x16ce1d0] Final|Native|Static|Public 
};

/// Class /Script/CommonInput.CommonInputSubsystem
/// Size: 0x00E8 (0x000030 - 0x000118)
class UCommonInputSubsystem : public ULocalPlayerSubsystem : ULocalPlayerSubsystem
{ 
public:
	unsigned char                                      UnknownData00_2[0x28];                                      // 0x0030   (0x0028)  MISSED
	FMulticastInlineDelegate                           OnInputMethodChanged;                                       // 0x0058   (0x0010)  
	int32_t                                            NumberOfInputMethodChangesRecently;                         // 0x0068   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x006C   (0x0004)  MISSED
	double                                             LastInputMethodChangeTime;                                  // 0x0070   (0x0008)  
	double                                             LastTimeInputMethodThrashingBegan;                          // 0x0078   (0x0008)  
	ECommonInputType                                   LastInputType;                                              // 0x0080   (0x0001)  
	ECommonInputType                                   CurrentInputType;                                           // 0x0081   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x0082   (0x0002)  MISSED
	FName                                              GamepadInputType;                                           // 0x0084   (0x0008)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x008C   (0x0004)  MISSED
	TMap<FName, ECommonInputType>                      CurrentInputLocks;                                          // 0x0090   (0x0050)  
	unsigned char                                      UnknownData04_5[0x18];                                      // 0x00E0   (0x0018)  MISSED
	UCommonInputActionDomainTable*                     ActionDomainTable;                                          // 0x00F8   (0x0008)  
	bool                                               bIsGamepadSimulatedClick;                                   // 0x0100   (0x0001)  
	unsigned char                                      UnknownData05_6[0x17];                                      // 0x0101   (0x0017)  MISSED


	/// Functions
	// Function /Script/CommonInput.CommonInputSubsystem.ShouldShowInputKeys
	bool ShouldShowInputKeys();                                                                                              // [0x16ce3e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonInput.CommonInputSubsystem.SetGamepadInputType
	void SetGamepadInputType(FName InGamepadInputType);                                                                      // [0x16ce350] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonInput.CommonInputSubsystem.SetCurrentInputType
	void SetCurrentInputType(ECommonInputType NewInputType);                                                                 // [0x16ce2d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonInput.CommonInputSubsystem.IsUsingPointerInput
	bool IsUsingPointerInput();                                                                                              // [0x16ce290] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonInput.CommonInputSubsystem.IsInputMethodActive
	bool IsInputMethodActive(ECommonInputType InputMethod);                                                                  // [0x16ce200] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonInput.CommonInputSubsystem.GetDefaultInputType
	ECommonInputType GetDefaultInputType();                                                                                  // [0x16ce070] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonInput.CommonInputSubsystem.GetCurrentInputType
	ECommonInputType GetCurrentInputType();                                                                                  // [0x16ce050] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonInput.CommonInputSubsystem.GetCurrentGamepadName
	FName GetCurrentGamepadName();                                                                                           // [0x16ce030] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonInput.CommonInputSubsystem.BroadcastInputMethodChanged
	void BroadcastInputMethodChanged();                                                                                      // [0x16ce010] Final|Native|Protected 
};

/// Enum /Script/CommonInput.ECommonInputType
/// Size: 0x05
enum ECommonInputType : uint8_t
{
	ECommonInputType__MouseAndKeyboard0                                              = 0,
	ECommonInputType__Gamepad1                                                       = 1,
	ECommonInputType__Touch2                                                         = 2,
	ECommonInputType__Count3                                                         = 3,
	ECommonInputType__ECommonInputType_MAX4                                          = 4
};

/// Enum /Script/CommonInput.ECommonInputMode
/// Size: 0x04
enum ECommonInputMode : uint8_t
{
	ECommonInputMode__Menu0                                                          = 0,
	ECommonInputMode__Game1                                                          = 1,
	ECommonInputMode__All2                                                           = 2,
	ECommonInputMode__MAX3                                                           = 3
};

/// Enum /Script/CommonInput.ECommonInputEventFlowBehavior
/// Size: 0x04
enum ECommonInputEventFlowBehavior : uint8_t
{
	ECommonInputEventFlowBehavior__BlockIfActive0                                    = 0,
	ECommonInputEventFlowBehavior__BlockIfHandled1                                   = 1,
	ECommonInputEventFlowBehavior__NeverBlock2                                       = 2,
	ECommonInputEventFlowBehavior__ECommonInputEventFlowBehavior_MAX3                = 3
};

