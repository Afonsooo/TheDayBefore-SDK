
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package CommonUI.

/// Struct /Script/CommonUI.CommonNumberFormattingOptions
/// Size: 0x0014 (0x000000 - 0x000014)
struct FCommonNumberFormattingOptions
{ 
	TEnumAsByte<ERoundingMode>                         RoundingMode;                                               // 0x0000   (0x0001)  
	bool                                               UseGrouping;                                                // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0002   (0x0002)  MISSED
	int32_t                                            MinimumIntegralDigits;                                      // 0x0004   (0x0004)  
	int32_t                                            MaximumIntegralDigits;                                      // 0x0008   (0x0004)  
	int32_t                                            MinimumFractionalDigits;                                    // 0x000C   (0x0004)  
	int32_t                                            MaximumFractionalDigits;                                    // 0x0010   (0x0004)  
};

/// Struct /Script/CommonUI.CommonRegisteredTabInfo
/// Size: 0x0018 (0x000000 - 0x000018)
struct FCommonRegisteredTabInfo
{ 
	int32_t                                            TabIndex;                                                   // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	UCommonButtonBase*                                 TabButton;                                                  // 0x0008   (0x0008)  
	UWidget*                                           ContentInstance;                                            // 0x0010   (0x0008)  
};

/// Struct /Script/CommonUI.UITag
/// Size: 0x0000 (0x000008 - 0x000008)
struct FUITag : FGameplayTag
{ 
};

/// Struct /Script/CommonUI.UIActionTag
/// Size: 0x0000 (0x000008 - 0x000008)
struct FUIActionTag : FUITag
{ 
};

/// Struct /Script/CommonUI.CommonInputActionHandlerData
/// Size: 0x0020 (0x000000 - 0x000020)
struct FCommonInputActionHandlerData
{ 
	FDataTableRowHandle                                InputActionRow;                                             // 0x0000   (0x0010)  
	EInputActionState                                  State;                                                      // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0xF];                                       // 0x0011   (0x000F)  MISSED
};

/// Struct /Script/CommonUI.CommonButtonStyleOptionalSlateSound
/// Size: 0x0020 (0x000000 - 0x000020)
struct FCommonButtonStyleOptionalSlateSound
{ 
	bool                                               bHasSound;                                                  // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	FSlateSound                                        Sound;                                                      // 0x0008   (0x0018)  
};

/// Struct /Script/CommonUI.RichTextIconData
/// Size: 0x0058 (0x000008 - 0x000060)
struct FRichTextIconData : FTableRowBase
{ 
	FText                                              DisplayName;                                                // 0x0008   (0x0018)  
	TWeakObjectPtr<UObject*>                           ResourceObject;                                             // 0x0020   (0x0030)  
	FVector2D                                          ImageSize;                                                  // 0x0050   (0x0010)  
};

/// Struct /Script/CommonUI.CommonInputTypeInfo
/// Size: 0x00F0 (0x000000 - 0x0000F0)
struct FCommonInputTypeInfo
{ 
	FKey                                               Key;                                                        // 0x0000   (0x0018)  
	EInputActionState                                  OverrrideState;                                             // 0x0018   (0x0001)  
	bool                                               bActionRequiresHold;                                        // 0x0019   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x001A   (0x0002)  MISSED
	float                                              HoldTime;                                                   // 0x001C   (0x0004)  
	FSlateBrush                                        OverrideBrush;                                              // 0x0020   (0x00D0)  
};

/// Struct /Script/CommonUI.CommonInputActionDataBase
/// Size: 0x0358 (0x000008 - 0x000360)
struct FCommonInputActionDataBase : FTableRowBase
{ 
	FText                                              DisplayName;                                                // 0x0008   (0x0018)  
	FText                                              HoldDisplayName;                                            // 0x0020   (0x0018)  
	int32_t                                            NavBarPriority;                                             // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x003C   (0x0004)  MISSED
	FCommonInputTypeInfo                               KeyboardInputTypeInfo;                                      // 0x0040   (0x00F0)  
	FCommonInputTypeInfo                               DefaultGamepadInputTypeInfo;                                // 0x0130   (0x00F0)  
	TMap<FName, FCommonInputTypeInfo>                  GamepadInputOverrides;                                      // 0x0220   (0x0050)  
	FCommonInputTypeInfo                               TouchInputTypeInfo;                                         // 0x0270   (0x00F0)  
};

/// Struct /Script/CommonUI.UIActionKeyMapping
/// Size: 0x0020 (0x000000 - 0x000020)
struct FUIActionKeyMapping
{ 
	FKey                                               Key;                                                        // 0x0000   (0x0018)  
	float                                              HoldTime;                                                   // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/CommonUI.UIInputAction
/// Size: 0x0030 (0x000000 - 0x000030)
struct FUIInputAction
{ 
	FUIActionTag                                       ActionTag;                                                  // 0x0000   (0x0008)  
	FText                                              DefaultDisplayName;                                         // 0x0008   (0x0018)  
	TArray<FUIActionKeyMapping>                        KeyMappings;                                                // 0x0020   (0x0010)  
};

/// Struct /Script/CommonUI.CommonAnalogCursorSettings
/// Size: 0x0024 (0x000000 - 0x000024)
struct FCommonAnalogCursorSettings
{ 
	int32_t                                            PreprocessorPriority;                                       // 0x0000   (0x0004)  
	bool                                               bEnableCursorAcceleration;                                  // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0005   (0x0003)  MISSED
	float                                              CursorAcceleration;                                         // 0x0008   (0x0004)  
	float                                              CursorMaxSpeed;                                             // 0x000C   (0x0004)  
	float                                              CursorDeadZone;                                             // 0x0010   (0x0004)  
	float                                              HoverSlowdownFactor;                                        // 0x0014   (0x0004)  
	float                                              ScrollDeadZone;                                             // 0x0018   (0x0004)  
	float                                              ScrollUpdatePeriod;                                         // 0x001C   (0x0004)  
	float                                              ScrollMultiplier;                                           // 0x0020   (0x0004)  
};

/// Class /Script/CommonUI.CommonBoundActionButtonInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UCommonBoundActionButtonInterface : public UInterface : UInterface
{ 
public:
};

/// Class /Script/CommonUI.CommonStyleSheetTypeBase
/// Size: 0x0008 (0x000028 - 0x000030)
class UCommonStyleSheetTypeBase : public UObject : UObject
{ 
public:
	bool                                               bIsEnabled;                                                 // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0029   (0x0007)  MISSED
};

/// Class /Script/CommonUI.CommonStyleSheetTypeColor
/// Size: 0x0010 (0x000030 - 0x000040)
class UCommonStyleSheetTypeColor : public UCommonStyleSheetTypeBase : UCommonStyleSheetTypeBase
{ 
public:
	FLinearColor                                       Color;                                                      // 0x0030   (0x0010)  
};

/// Class /Script/CommonUI.CommonStyleSheetTypeOpacity
/// Size: 0x0008 (0x000030 - 0x000038)
class UCommonStyleSheetTypeOpacity : public UCommonStyleSheetTypeBase : UCommonStyleSheetTypeBase
{ 
public:
	float                                              Opacity;                                                    // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Class /Script/CommonUI.CommonStyleSheetTypeLineHeightPercentage
/// Size: 0x0008 (0x000030 - 0x000038)
class UCommonStyleSheetTypeLineHeightPercentage : public UCommonStyleSheetTypeBase : UCommonStyleSheetTypeBase
{ 
public:
	float                                              LineHeightPercentage;                                       // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Class /Script/CommonUI.CommonStyleSheetTypeFontTypeface
/// Size: 0x0058 (0x000030 - 0x000088)
class UCommonStyleSheetTypeFontTypeface : public UCommonStyleSheetTypeBase : UCommonStyleSheetTypeBase
{ 
public:
	FSlateFontInfo                                     Typeface;                                                   // 0x0030   (0x0058)  
};

/// Class /Script/CommonUI.CommonStyleSheetTypeFontSize
/// Size: 0x0008 (0x000030 - 0x000038)
class UCommonStyleSheetTypeFontSize : public UCommonStyleSheetTypeBase : UCommonStyleSheetTypeBase
{ 
public:
	int32_t                                            Size;                                                       // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Class /Script/CommonUI.CommonStyleSheetTypeFontLetterSpacing
/// Size: 0x0008 (0x000030 - 0x000038)
class UCommonStyleSheetTypeFontLetterSpacing : public UCommonStyleSheetTypeBase : UCommonStyleSheetTypeBase
{ 
public:
	int32_t                                            LetterSpacing;                                              // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Class /Script/CommonUI.CommonStyleSheetTypeMarginLeft
/// Size: 0x0008 (0x000030 - 0x000038)
class UCommonStyleSheetTypeMarginLeft : public UCommonStyleSheetTypeBase : UCommonStyleSheetTypeBase
{ 
public:
	float                                              Left;                                                       // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Class /Script/CommonUI.CommonStyleSheetTypeMarginRight
/// Size: 0x0008 (0x000030 - 0x000038)
class UCommonStyleSheetTypeMarginRight : public UCommonStyleSheetTypeBase : UCommonStyleSheetTypeBase
{ 
public:
	float                                              Right;                                                      // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Class /Script/CommonUI.CommonStyleSheetTypeMarginTop
/// Size: 0x0008 (0x000030 - 0x000038)
class UCommonStyleSheetTypeMarginTop : public UCommonStyleSheetTypeBase : UCommonStyleSheetTypeBase
{ 
public:
	float                                              Top;                                                        // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Class /Script/CommonUI.CommonStyleSheetTypeMarginBottom
/// Size: 0x0008 (0x000030 - 0x000038)
class UCommonStyleSheetTypeMarginBottom : public UCommonStyleSheetTypeBase : UCommonStyleSheetTypeBase
{ 
public:
	float                                              Bottom;                                                     // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Class /Script/CommonUI.AnalogSlider
/// Size: 0x0020 (0x000700 - 0x000720)
class UAnalogSlider : public USlider : USlider
{ 
public:
	FMulticastInlineDelegate                           OnAnalogCapture;                                            // 0x0700   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0710   (0x0010)  MISSED
};

/// Class /Script/CommonUI.CommonActionHandlerInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UCommonActionHandlerInterface : public UInterface : UInterface
{ 
public:
};

/// Class /Script/CommonUI.CommonActionWidget
/// Size: 0x0310 (0x000150 - 0x000460)
class UCommonActionWidget : public UWidget : UWidget
{ 
public:
	FMulticastInlineDelegate                           OnInputMethodChanged;                                       // 0x0150   (0x0010)  
	FSlateBrush                                        ProgressMaterialBrush;                                      // 0x0160   (0x00D0)  
	FName                                              ProgressMaterialParam;                                      // 0x0230   (0x0008)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0238   (0x0008)  MISSED
	FSlateBrush                                        IconRimBrush;                                               // 0x0240   (0x00D0)  
	TArray<FDataTableRowHandle>                        InputActions;                                               // 0x0310   (0x0010)  
	UInputAction*                                      EnhancedInputAction;                                        // 0x0320   (0x0008)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0328   (0x0008)  MISSED
	UMaterialInstanceDynamic*                          ProgressDynamicMaterial;                                    // 0x0330   (0x0008)  
	unsigned char                                      UnknownData02_6[0x128];                                     // 0x0338   (0x0128)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonActionWidget.SetInputActions
	void SetInputActions(TArray<FDataTableRowHandle> NewInputActions);                                                       // [0x16c4bc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonActionWidget.SetInputAction
	void SetInputAction(FDataTableRowHandle InputActionRow);                                                                 // [0x16c4900] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonActionWidget.SetIconRimBrush
	void SetIconRimBrush(FSlateBrush InIconRimBrush);                                                                        // [0x16c4830] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonActionWidget.SetEnhancedInputAction
	void SetEnhancedInputAction(UInputAction* InInputAction);                                                                // [0x16c4560] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonActionWidget.OnInputMethodChanged__DelegateSignature
	void OnInputMethodChanged__DelegateSignature(bool bUsingGamepad);                                                        // [0x2407bf0] MulticastDelegate|Public|Delegate 
	// Function /Script/CommonUI.CommonActionWidget.IsHeldAction
	bool IsHeldAction();                                                                                                     // [0x16c25c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonActionWidget.GetIcon
	FSlateBrush GetIcon();                                                                                                   // [0x16c0980] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonActionWidget.GetDisplayText
	FText GetDisplayText();                                                                                                  // [0x16c0580] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CommonUI.CommonUserWidget
/// Size: 0x0028 (0x000280 - 0x0002A8)
class UCommonUserWidget : public UUserWidget : UUserWidget
{ 
public:
	bool                                               bDisplayInActionBar;                                        // 0x0280   (0x0001)  
	bool                                               bConsumePointerInput;                                       // 0x0281   (0x0001)  
	unsigned char                                      UnknownData00_6[0x26];                                      // 0x0282   (0x0026)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonUserWidget.SetConsumePointerInput
	void SetConsumePointerInput(bool bInConsumePointerInput);                                                                // [0x16c40c0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonActivatableWidget
/// Size: 0x0138 (0x0002A8 - 0x0003E0)
class UCommonActivatableWidget : public UCommonUserWidget : UCommonUserWidget
{ 
public:
	bool                                               bIsBackHandler;                                             // 0x02A8   (0x0001)  
	bool                                               bIsBackActionDisplayedInActionBar;                          // 0x02A9   (0x0001)  
	bool                                               bAutoActivate;                                              // 0x02AA   (0x0001)  
	bool                                               bSupportsActivationFocus;                                   // 0x02AB   (0x0001)  
	bool                                               bIsModal;                                                   // 0x02AC   (0x0001)  
	bool                                               bAutoRestoreFocus;                                          // 0x02AD   (0x0001)  
	bool                                               bOverrideActionDomain;                                      // 0x02AE   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x02AF   (0x0001)  MISSED
	UInputMappingContext*                              InputMapping;                                               // 0x02B0   (0x0008)  
	int32_t                                            InputMappingPriority;                                       // 0x02B8   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x02BC   (0x0004)  MISSED
	TWeakObjectPtr<UCommonInputActionDomain*>          ActionDomainOverride;                                       // 0x02C0   (0x0030)  
	FMulticastInlineDelegate                           BP_OnWidgetActivated;                                       // 0x02F0   (0x0010)  
	FMulticastInlineDelegate                           BP_OnWidgetDeactivated;                                     // 0x0300   (0x0010)  
	bool                                               bIsActive;                                                  // 0x0310   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0311   (0x0007)  MISSED
	TArray<TWeakObjectPtr>                             VisibilityBoundWidgets;                                     // 0x0318   (0x0010)  
	unsigned char                                      UnknownData03_5[0xB0];                                      // 0x0328   (0x00B0)  MISSED
	bool                                               bSetVisibilityOnActivated;                                  // 0x03D8   (0x0001)  
	ESlateVisibility                                   ActivatedVisibility;                                        // 0x03D9   (0x0001)  
	bool                                               bSetVisibilityOnDeactivated;                                // 0x03DA   (0x0001)  
	ESlateVisibility                                   DeactivatedVisibility;                                      // 0x03DB   (0x0001)  
	unsigned char                                      UnknownData04_6[0x4];                                       // 0x03DC   (0x0004)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonActivatableWidget.SetBindVisibilities
	void SetBindVisibilities(ESlateVisibility OnActivatedVisibility, ESlateVisibility OnDeactivatedVisibility, bool bInAllActive); // [0x16c3a10] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonActivatableWidget.IsActivated
	bool IsActivated();                                                                                                      // [0x16c2580] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonActivatableWidget.GetDesiredFocusTarget
	UWidget* GetDesiredFocusTarget();                                                                                        // [0x16c0460] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonActivatableWidget.DeactivateWidget
	void DeactivateWidget();                                                                                                 // [0x16bf830] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonActivatableWidget.BP_OnHandleBackAction
	bool BP_OnHandleBackAction();                                                                                            // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonActivatableWidget.BP_OnDeactivated
	void BP_OnDeactivated();                                                                                                 // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonActivatableWidget.BP_OnActivated
	void BP_OnActivated();                                                                                                   // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonActivatableWidget.BP_GetDesiredFocusTarget
	UWidget* BP_GetDesiredFocusTarget();                                                                                     // [0x2407bf0] Event|Protected|BlueprintEvent|Const 
	// Function /Script/CommonUI.CommonActivatableWidget.BindVisibilityToActivation
	void BindVisibilityToActivation(UCommonActivatableWidget* ActivatableWidget);                                            // [0x16bf5f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonActivatableWidget.ActivateWidget
	void ActivateWidget();                                                                                                   // [0x16bed10] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonAnimatedSwitcher
/// Size: 0x0070 (0x000180 - 0x0001F0)
class UCommonAnimatedSwitcher : public UWidgetSwitcher : UWidgetSwitcher
{ 
public:
	unsigned char                                      UnknownData00_2[0x30];                                      // 0x0180   (0x0030)  MISSED
	ECommonSwitcherTransition                          TransitionType;                                             // 0x01B0   (0x0001)  
	ETransitionCurve                                   TransitionCurveType;                                        // 0x01B1   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x01B2   (0x0002)  MISSED
	float                                              TransitionDuration;                                         // 0x01B4   (0x0004)  
	unsigned char                                      UnknownData02_6[0x38];                                      // 0x01B8   (0x0038)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonAnimatedSwitcher.SetDisableTransitionAnimation
	void SetDisableTransitionAnimation(bool bDisableAnimation);                                                              // [0x16c4430] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonAnimatedSwitcher.IsTransitionPlaying
	bool IsTransitionPlaying();                                                                                              // [0x16c27e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonAnimatedSwitcher.IsCurrentlySwitching
	bool IsCurrentlySwitching();                                                                                             // [0x16c25a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonAnimatedSwitcher.HasWidgets
	bool HasWidgets();                                                                                                       // [0x16c2350] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonAnimatedSwitcher.ActivatePreviousWidget
	void ActivatePreviousWidget(bool bCanWrap);                                                                              // [0x16bebc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonAnimatedSwitcher.ActivateNextWidget
	void ActivateNextWidget(bool bCanWrap);                                                                                  // [0x16beae0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonActivatableWidgetSwitcher
/// Size: 0x0010 (0x0001F0 - 0x000200)
class UCommonActivatableWidgetSwitcher : public UCommonAnimatedSwitcher : UCommonAnimatedSwitcher
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x01F0   (0x0010)  MISSED
};

/// Class /Script/CommonUI.CommonBorderStyle
/// Size: 0x00D8 (0x000028 - 0x000100)
class UCommonBorderStyle : public UObject : UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0028   (0x0008)  MISSED
	FSlateBrush                                        Background;                                                 // 0x0030   (0x00D0)  


	/// Functions
	// Function /Script/CommonUI.CommonBorderStyle.GetBackgroundBrush
	void GetBackgroundBrush(FSlateBrush& Brush);                                                                             // [0x16bff00] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CommonUI.CommonBorder
/// Size: 0x0020 (0x000310 - 0x000330)
class UCommonBorder : public UBorder : UBorder
{ 
public:
	UClass*                                            Style;                                                      // 0x0308   (0x0008)  
	bool                                               bReducePaddingBySafezone;                                   // 0x0310   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0311   (0x0003)  MISSED
	FMargin                                            MinimumPadding;                                             // 0x0314   (0x0010)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x0324   (0x000C)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonBorder.SetStyle
	void SetStyle(UClass* InStyle);                                                                                          // [0x16c63c0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonButtonStyle
/// Size: 0x0788 (0x000028 - 0x0007B0)
class UCommonButtonStyle : public UObject : UObject
{ 
public:
	bool                                               bSingleMaterial;                                            // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0029   (0x0007)  MISSED
	FSlateBrush                                        SingleMaterialBrush;                                        // 0x0030   (0x00D0)  
	FSlateBrush                                        NormalBase;                                                 // 0x0100   (0x00D0)  
	FSlateBrush                                        NormalHovered;                                              // 0x01D0   (0x00D0)  
	FSlateBrush                                        NormalPressed;                                              // 0x02A0   (0x00D0)  
	FSlateBrush                                        SelectedBase;                                               // 0x0370   (0x00D0)  
	FSlateBrush                                        SelectedHovered;                                            // 0x0440   (0x00D0)  
	FSlateBrush                                        SelectedPressed;                                            // 0x0510   (0x00D0)  
	FSlateBrush                                        Disabled;                                                   // 0x05E0   (0x00D0)  
	FMargin                                            ButtonPadding;                                              // 0x06B0   (0x0010)  
	FMargin                                            CustomPadding;                                              // 0x06C0   (0x0010)  
	int32_t                                            MinWidth;                                                   // 0x06D0   (0x0004)  
	int32_t                                            MinHeight;                                                  // 0x06D4   (0x0004)  
	UClass*                                            NormalTextStyle;                                            // 0x06D8   (0x0008)  
	UClass*                                            NormalHoveredTextStyle;                                     // 0x06E0   (0x0008)  
	UClass*                                            SelectedTextStyle;                                          // 0x06E8   (0x0008)  
	UClass*                                            SelectedHoveredTextStyle;                                   // 0x06F0   (0x0008)  
	UClass*                                            DisabledTextStyle;                                          // 0x06F8   (0x0008)  
	FSlateSound                                        PressedSlateSound;                                          // 0x0700   (0x0018)  
	FCommonButtonStyleOptionalSlateSound               SelectedPressedSlateSound;                                  // 0x0718   (0x0020)  
	FCommonButtonStyleOptionalSlateSound               LockedPressedSlateSound;                                    // 0x0738   (0x0020)  
	FSlateSound                                        HoveredSlateSound;                                          // 0x0758   (0x0018)  
	FCommonButtonStyleOptionalSlateSound               SelectedHoveredSlateSound;                                  // 0x0770   (0x0020)  
	FCommonButtonStyleOptionalSlateSound               LockedHoveredSlateSound;                                    // 0x0790   (0x0020)  


	/// Functions
	// Function /Script/CommonUI.CommonButtonStyle.GetSelectedTextStyle
	UCommonTextStyle* GetSelectedTextStyle();                                                                                // [0x16c1640] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetSelectedPressedBrush
	void GetSelectedPressedBrush(FSlateBrush& Brush);                                                                        // [0x16c14a0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetSelectedHoveredTextStyle
	UCommonTextStyle* GetSelectedHoveredTextStyle();                                                                         // [0x16c1450] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetSelectedHoveredBrush
	void GetSelectedHoveredBrush(FSlateBrush& Brush);                                                                        // [0x16c1390] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetSelectedBaseBrush
	void GetSelectedBaseBrush(FSlateBrush& Brush);                                                                           // [0x16c1250] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetNormalTextStyle
	UCommonTextStyle* GetNormalTextStyle();                                                                                  // [0x16c1160] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetNormalPressedBrush
	void GetNormalPressedBrush(FSlateBrush& Brush);                                                                          // [0x16c10a0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetNormalHoveredTextStyle
	UCommonTextStyle* GetNormalHoveredTextStyle();                                                                           // [0x16c1070] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetNormalHoveredBrush
	void GetNormalHoveredBrush(FSlateBrush& Brush);                                                                          // [0x16c0fb0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetNormalBaseBrush
	void GetNormalBaseBrush(FSlateBrush& Brush);                                                                             // [0x16c0ef0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetMaterialBrush
	void GetMaterialBrush(FSlateBrush& Brush);                                                                               // [0x16bff00] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetDisabledTextStyle
	UCommonTextStyle* GetDisabledTextStyle();                                                                                // [0x16c0550] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetDisabledBrush
	void GetDisabledBrush(FSlateBrush& Brush);                                                                               // [0x16c0490] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetCustomPadding
	void GetCustomPadding(FMargin& OutCustomPadding);                                                                        // [0x16c03c0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetButtonPadding
	void GetButtonPadding(FMargin& OutButtonPadding);                                                                        // [0x16c00a0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CommonUI.CommonButtonInternalBase
/// Size: 0x0070 (0x0005F0 - 0x000660)
class UCommonButtonInternalBase : public UButton : UButton
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x05F0   (0x0008)  MISSED
	FMulticastInlineDelegate                           OnDoubleClicked;                                            // 0x05F8   (0x0010)  
	unsigned char                                      UnknownData01_5[0x20];                                      // 0x0608   (0x0020)  MISSED
	int32_t                                            MinWidth;                                                   // 0x0628   (0x0004)  
	int32_t                                            MinHeight;                                                  // 0x062C   (0x0004)  
	bool                                               bButtonEnabled;                                             // 0x0630   (0x0001)  
	bool                                               bInteractionEnabled;                                        // 0x0631   (0x0001)  
	unsigned char                                      UnknownData02_6[0x2E];                                      // 0x0632   (0x002E)  MISSED
};

/// Class /Script/CommonUI.CommonButtonBase
/// Size: 0x1258 (0x0002A8 - 0x001500)
class UCommonButtonBase : public UCommonUserWidget : UCommonUserWidget
{ 
public:
	int32_t                                            MinWidth;                                                   // 0x02A8   (0x0004)  
	int32_t                                            MinHeight;                                                  // 0x02AC   (0x0004)  
	UClass*                                            Style;                                                      // 0x02B0   (0x0008)  
	bool                                               bHideInputAction;                                           // 0x02B8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x02B9   (0x0007)  MISSED
	FSlateSound                                        PressedSlateSoundOverride;                                  // 0x02C0   (0x0018)  
	FSlateSound                                        HoveredSlateSoundOverride;                                  // 0x02D8   (0x0018)  
	FSlateSound                                        SelectedPressedSlateSoundOverride;                          // 0x02F0   (0x0018)  
	FSlateSound                                        SelectedHoveredSlateSoundOverride;                          // 0x0308   (0x0018)  
	FSlateSound                                        LockedPressedSlateSoundOverride;                            // 0x0320   (0x0018)  
	FSlateSound                                        LockedHoveredSlateSoundOverride;                            // 0x0338   (0x0018)  
	bool                                               bApplyAlphaOnDisable : 1;                                   // 0x0350:0 (0x0001)  
	bool                                               bLocked : 1;                                                // 0x0350:1 (0x0001)  
	bool                                               bSelectable : 1;                                            // 0x0350:2 (0x0001)  
	bool                                               bShouldSelectUponReceivingFocus : 1;                        // 0x0350:3 (0x0001)  
	bool                                               bInteractableWhenSelected : 1;                              // 0x0350:4 (0x0001)  
	bool                                               bToggleable : 1;                                            // 0x0350:5 (0x0001)  
	bool                                               bTriggerClickedAfterSelection : 1;                          // 0x0350:6 (0x0001)  
	bool                                               bDisplayInputActionWhenNotInteractable : 1;                 // 0x0350:7 (0x0001)  
	bool                                               bHideInputActionWithKeyboard : 1;                           // 0x0351:0 (0x0001)  
	bool                                               bShouldUseFallbackDefaultInputAction : 1;                   // 0x0351:1 (0x0001)  
	TEnumAsByte<EButtonClickMethod>                    ClickMethod;                                                // 0x0352   (0x0001)  
	TEnumAsByte<EButtonTouchMethod>                    TouchMethod;                                                // 0x0353   (0x0001)  
	TEnumAsByte<EButtonPressMethod>                    PressMethod;                                                // 0x0354   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0355   (0x0003)  MISSED
	int32_t                                            InputPriority;                                              // 0x0358   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x035C   (0x0004)  MISSED
	FDataTableRowHandle                                TriggeringInputAction;                                      // 0x0360   (0x0010)  
	UInputAction*                                      TriggeringEnhancedInputAction;                              // 0x0370   (0x0008)  
	unsigned char                                      UnknownData03_5[0x10];                                      // 0x0378   (0x0010)  MISSED
	FMulticastInlineDelegate                           OnSelectedChangedBase;                                      // 0x0388   (0x0010)  
	FMulticastInlineDelegate                           OnButtonBaseClicked;                                        // 0x0398   (0x0010)  
	FMulticastInlineDelegate                           OnButtonBaseDoubleClicked;                                  // 0x03A8   (0x0010)  
	FMulticastInlineDelegate                           OnButtonBaseHovered;                                        // 0x03B8   (0x0010)  
	FMulticastInlineDelegate                           OnButtonBaseUnhovered;                                      // 0x03C8   (0x0010)  
	unsigned char                                      UnknownData04_5[0x4];                                       // 0x03D8   (0x0004)  MISSED
	bool                                               bIsPersistentBinding;                                       // 0x03DC   (0x0001)  
	ECommonInputMode                                   InputModeOverride;                                          // 0x03DD   (0x0001)  
	unsigned char                                      UnknownData05_5[0x32];                                      // 0x03DE   (0x0032)  MISSED
	UMaterialInstanceDynamic*                          SingleMaterialStyleMID;                                     // 0x0410   (0x0008)  
	unsigned char                                      UnknownData06_5[0x8];                                       // 0x0418   (0x0008)  MISSED
	FButtonStyle                                       NormalStyle;                                                // 0x0420   (0x03F0)  
	FButtonStyle                                       SelectedStyle;                                              // 0x0810   (0x03F0)  
	FButtonStyle                                       DisabledStyle;                                              // 0x0C00   (0x03F0)  
	FButtonStyle                                       LockedStyle;                                                // 0x0FF0   (0x03F0)  
	bool                                               bStopDoubleClickPropagation : 1;                            // 0x13E0:0 (0x0001)  
	unsigned char                                      UnknownData07_4[0x117];                                     // 0x13E1   (0x0117)  MISSED
	UCommonActionWidget*                               InputActionWidget;                                          // 0x14F8   (0x0008)  


	/// Functions
	// Function /Script/CommonUI.CommonButtonBase.StopDoubleClickPropagation
	void StopDoubleClickPropagation();                                                                                       // [0x16c6f80] Final|Native|Protected|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetTriggeringInputAction
	void SetTriggeringInputAction(FDataTableRowHandle& InputActionRow);                                                      // [0x16c6d10] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetTriggeringEnhancedInputAction
	void SetTriggeringEnhancedInputAction(UInputAction* InInputAction);                                                      // [0x16c6c20] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetTriggeredInputAction
	void SetTriggeredInputAction(FDataTableRowHandle& InputActionRow);                                                       // [0x16c6b20] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetTouchMethod
	void SetTouchMethod(TEnumAsByte<EButtonTouchMethod> InTouchMethod);                                                      // [0x16c69e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetStyle
	void SetStyle(UClass* InStyle);                                                                                          // [0x16c6460] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetShouldUseFallbackDefaultInputAction
	void SetShouldUseFallbackDefaultInputAction(bool bInShouldUseFallbackDefaultInputAction);                                // [0x16c6320] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetShouldSelectUponReceivingFocus
	void SetShouldSelectUponReceivingFocus(bool bInShouldSelectUponReceivingFocus);                                          // [0x16c6280] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetSelectedPressedSoundOverride
	void SetSelectedPressedSoundOverride(USoundBase* Sound);                                                                 // [0x16c6150] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetSelectedInternal
	void SetSelectedInternal(bool bInSelected, bool bAllowSound, bool bBroadcast);                                           // [0x16c5f90] Final|Native|Protected|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetSelectedHoveredSoundOverride
	void SetSelectedHoveredSoundOverride(USoundBase* Sound);                                                                 // [0x16c5ef0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetPressMethod
	void SetPressMethod(TEnumAsByte<EButtonPressMethod> InPressMethod);                                                      // [0x16c5c70] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetPressedSoundOverride
	void SetPressedSoundOverride(USoundBase* Sound);                                                                         // [0x16c5d10] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetMinDimensions
	void SetMinDimensions(int32_t InMinWidth, int32_t InMinHeight);                                                          // [0x16c59c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetLockedPressedSoundOverride
	void SetLockedPressedSoundOverride(USoundBase* Sound);                                                                   // [0x16c57c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetLockedHoveredSoundOverride
	void SetLockedHoveredSoundOverride(USoundBase* Sound);                                                                   // [0x16c5720] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetIsToggleable
	void SetIsToggleable(bool bInIsToggleable);                                                                              // [0x16c51f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetIsSelected
	void SetIsSelected(bool InSelected, bool bGiveClickFeedback);                                                            // [0x16c5120] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetIsSelectable
	void SetIsSelectable(bool bInIsSelectable);                                                                              // [0x16c5060] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetIsLocked
	void SetIsLocked(bool bInIsLocked);                                                                                      // [0x16c4f90] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetIsInteractionEnabled
	void SetIsInteractionEnabled(bool bInIsInteractionEnabled);                                                              // [0x16c4e60] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetIsInteractableWhenSelected
	void SetIsInteractableWhenSelected(bool bInInteractableWhenSelected);                                                    // [0x16c4da0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetIsFocusable
	void SetIsFocusable(bool bInIsFocusable);                                                                                // [0x16c4d10] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetInputActionProgressMaterial
	void SetInputActionProgressMaterial(FSlateBrush& InProgressMaterialBrush, FName& InProgressMaterialParam);               // [0x16c49f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetHoveredSoundOverride
	void SetHoveredSoundOverride(USoundBase* Sound);                                                                         // [0x16c4790] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetHideInputAction
	void SetHideInputAction(bool bInHideInputAction);                                                                        // [0x16c4680] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetClickMethod
	void SetClickMethod(TEnumAsByte<EButtonClickMethod> InClickMethod);                                                      // [0x16c4010] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.OnTriggeringInputActionChanged
	void OnTriggeringInputActionChanged(FDataTableRowHandle& NewTriggeredAction);                                            // [0x2407bf0] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.OnTriggeringEnhancedInputActionChanged
	void OnTriggeringEnhancedInputActionChanged(UInputAction* InInputAction);                                                // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.OnTriggeredInputActionChanged
	void OnTriggeredInputActionChanged(FDataTableRowHandle& NewTriggeredAction);                                             // [0x2407bf0] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.OnInputMethodChanged
	void OnInputMethodChanged(ECommonInputType CurrentInputType);                                                            // [0x16c2bc0] Native|Protected     
	// Function /Script/CommonUI.CommonButtonBase.OnCurrentTextStyleChanged
	void OnCurrentTextStyleChanged();                                                                                        // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.OnActionProgress
	void OnActionProgress(float HeldPercent);                                                                                // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.OnActionComplete
	void OnActionComplete();                                                                                                 // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.NativeOnActionProgress
	void NativeOnActionProgress(float HeldPercent);                                                                          // [0x16c2850] Native|Protected     
	// Function /Script/CommonUI.CommonButtonBase.NativeOnActionComplete
	void NativeOnActionComplete();                                                                                           // [0x16c2830] Native|Protected     
	// Function /Script/CommonUI.CommonButtonBase.IsPressed
	bool IsPressed();                                                                                                        // [0x16c2760] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonBase.IsInteractionEnabled
	bool IsInteractionEnabled();                                                                                             // [0x16c25f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonBase.HandleTriggeringActionCommited
	void HandleTriggeringActionCommited(bool& bPassThrough);                                                                 // [0x16c2280] Native|Protected|HasOutParms 
	// Function /Script/CommonUI.CommonButtonBase.HandleFocusReceived
	void HandleFocusReceived();                                                                                              // [0x16c1df0] Native|Protected     
	// Function /Script/CommonUI.CommonButtonBase.HandleFocusLost
	void HandleFocusLost();                                                                                                  // [0x16c1dd0] Native|Protected     
	// Function /Script/CommonUI.CommonButtonBase.HandleButtonReleased
	void HandleButtonReleased();                                                                                             // [0x16c1d60] Final|Native|Protected 
	// Function /Script/CommonUI.CommonButtonBase.HandleButtonPressed
	void HandleButtonPressed();                                                                                              // [0x16c1cf0] Final|Native|Protected 
	// Function /Script/CommonUI.CommonButtonBase.HandleButtonClicked
	void HandleButtonClicked();                                                                                              // [0x16c1bd0] Final|Native|Protected 
	// Function /Script/CommonUI.CommonButtonBase.GetStyle
	UCommonButtonStyle* GetStyle();                                                                                          // [0x16c18a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonBase.GetSingleMaterialStyleMID
	UMaterialInstanceDynamic* GetSingleMaterialStyleMID();                                                                   // [0x16c17c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonBase.GetShouldSelectUponReceivingFocus
	bool GetShouldSelectUponReceivingFocus();                                                                                // [0x16c1790] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonBase.GetSelected
	bool GetSelected();                                                                                                      // [0x16c1220] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonBase.GetLocked
	bool GetLocked();                                                                                                        // [0x16c0dd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonBase.GetIsFocusable
	bool GetIsFocusable();                                                                                                   // [0x16c0d60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonBase.GetInputAction
	bool GetInputAction(FDataTableRowHandle& InputActionRow);                                                                // [0x16c09e0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonBase.GetEnhancedInputAction
	UInputAction* GetEnhancedInputAction();                                                                                  // [0xbdc950] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonBase.GetCurrentTextStyleClass
	UClass* GetCurrentTextStyleClass();                                                                                      // [0x16c0380] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonBase.GetCurrentTextStyle
	UCommonTextStyle* GetCurrentTextStyle();                                                                                 // [0x16c0350] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonBase.GetCurrentCustomPadding
	void GetCurrentCustomPadding(FMargin& OutCustomPadding);                                                                 // [0x16c02a0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonBase.GetCurrentButtonPadding
	void GetCurrentButtonPadding(FMargin& OutButtonPadding);                                                                 // [0x16c01f0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonBase.DisableButtonWithReason
	void DisableButtonWithReason(FText& DisabledReason);                                                                     // [0x16bf930] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.ClearSelection
	void ClearSelection();                                                                                                   // [0x16bf770] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.BP_OnUnhovered
	void BP_OnUnhovered();                                                                                                   // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.BP_OnSelected
	void BP_OnSelected();                                                                                                    // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.BP_OnReleased
	void BP_OnReleased();                                                                                                    // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.BP_OnPressed
	void BP_OnPressed();                                                                                                     // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.BP_OnLockedChanged
	void BP_OnLockedChanged(bool bIsLocked);                                                                                 // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.BP_OnLockDoubleClicked
	void BP_OnLockDoubleClicked();                                                                                           // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.BP_OnLockClicked
	void BP_OnLockClicked();                                                                                                 // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.BP_OnInputMethodChanged
	void BP_OnInputMethodChanged(ECommonInputType CurrentInputType);                                                         // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.BP_OnHovered
	void BP_OnHovered();                                                                                                     // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.BP_OnFocusReceived
	void BP_OnFocusReceived();                                                                                               // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.BP_OnFocusLost
	void BP_OnFocusLost();                                                                                                   // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.BP_OnEnabled
	void BP_OnEnabled();                                                                                                     // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.BP_OnDoubleClicked
	void BP_OnDoubleClicked();                                                                                               // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.BP_OnDisabled
	void BP_OnDisabled();                                                                                                    // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.BP_OnDeselected
	void BP_OnDeselected();                                                                                                  // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.BP_OnClicked
	void BP_OnClicked();                                                                                                     // [0x2407bf0] Event|Protected|BlueprintEvent 
};

/// Class /Script/CommonUI.CommonCustomNavigation
/// Size: 0x0010 (0x000310 - 0x000320)
class UCommonCustomNavigation : public UBorder : UBorder
{ 
public:
	FDelegateProperty                                  OnNavigationEvent;                                          // 0x0308   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0318   (0x0008)  MISSED
};

/// Class /Script/CommonUI.CommonTextBlock
/// Size: 0x0030 (0x000340 - 0x000370)
class UCommonTextBlock : public UTextBlock : UTextBlock
{ 
public:
	float                                              MobileFontSizeMultiplier;                                   // 0x0338   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x033C   (0x0004)  MISSED
	UClass*                                            Style;                                                      // 0x0340   (0x0008)  
	UClass*                                            ScrollStyle;                                                // 0x0348   (0x0008)  
	UCommonStyleSheet*                                 StyleSheet;                                                 // 0x0350   (0x0008)  
	bool                                               bIsScrollingEnabled;                                        // 0x0358   (0x0001)  
	bool                                               bDisplayAllCaps;                                            // 0x0359   (0x0001)  
	bool                                               bAutoCollapseWithEmptyText;                                 // 0x035A   (0x0001)  
	unsigned char                                      UnknownData01_6[0x15];                                      // 0x035B   (0x0015)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonTextBlock.SetWrapTextWidth
	void SetWrapTextWidth(int32_t InWrapTextAt);                                                                             // [0x16c6ea0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTextBlock.SetTextCase
	void SetTextCase(bool bUseAllCaps);                                                                                      // [0x16c68a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTextBlock.SetStyle
	void SetStyle(UClass* InStyle);                                                                                          // [0x16c65a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTextBlock.SetScrollingEnabled
	void SetScrollingEnabled(bool bInIsScrollingEnabled);                                                                    // [0x16c5e50] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTextBlock.SetMobileFontSizeMultiplier
	void SetMobileFontSizeMultiplier(float InMobileFontSizeMultiplier);                                                      // [0x16c5aa0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTextBlock.SetMargin
	void SetMargin(FMargin& InMargin);                                                                                       // [0x16c5860] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonUI.CommonTextBlock.SetLineHeightPercentage
	void SetLineHeightPercentage(float InLineHeightPercentage);                                                              // [0x16c53c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTextBlock.ResetScrollState
	void ResetScrollState();                                                                                                 // [0x16c3470] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTextBlock.GetMobileFontSizeMultiplier
	float GetMobileFontSizeMultiplier();                                                                                     // [0x16c0ed0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonTextBlock.GetMargin
	FMargin GetMargin();                                                                                                     // [0x16c0e00] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonDateTimeTextBlock
/// Size: 0x0060 (0x000370 - 0x0003D0)
class UCommonDateTimeTextBlock : public UCommonTextBlock : UCommonTextBlock
{ 
public:
	unsigned char                                      UnknownData00_1[0x60];                                      // 0x0370   (0x0060)  MISSED
};

/// Class /Script/CommonUI.CommonGameViewportClient
/// Size: 0x0040 (0x0003B0 - 0x0003F0)
class UCommonGameViewportClient : public UGameViewportClient : UGameViewportClient
{ 
public:
	unsigned char                                      UnknownData00_1[0x40];                                      // 0x03B0   (0x0040)  MISSED
};

/// Class /Script/CommonUI.CommonHardwareVisibilityBorder
/// Size: 0x0050 (0x000330 - 0x000380)
class UCommonHardwareVisibilityBorder : public UCommonBorder : UCommonBorder
{ 
public:
	FGameplayTagQuery                                  VisibilityQuery;                                            // 0x0328   (0x0048)  
	ESlateVisibility                                   VisibleType;                                                // 0x0370   (0x0001)  
	ESlateVisibility                                   HiddenType;                                                 // 0x0371   (0x0001)  
	unsigned char                                      UnknownData00_6[0xE];                                       // 0x0372   (0x000E)  MISSED
};

/// Class /Script/CommonUI.CommonHierarchicalScrollBox
/// Size: 0x0000 (0x000CC0 - 0x000CC0)
class UCommonHierarchicalScrollBox : public UScrollBox : UScrollBox
{ 
public:
};

/// Class /Script/CommonUI.CommonLazyImage
/// Size: 0x0110 (0x0002B0 - 0x0003C0)
class UCommonLazyImage : public UImage : UImage
{ 
public:
	FSlateBrush                                        LoadingBackgroundBrush;                                     // 0x02B0   (0x00D0)  
	FName                                              MaterialTextureParamName;                                   // 0x0380   (0x0008)  
	FMulticastInlineDelegate                           BP_OnLoadingStateChanged;                                   // 0x0388   (0x0010)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x0398   (0x0028)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonLazyImage.SetMaterialTextureParamName
	void SetMaterialTextureParamName(FName TextureParamName);                                                                // [0x16c5900] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonLazyImage.SetBrushFromLazyTexture
	void SetBrushFromLazyTexture(TWeakObjectPtr<UTexture2D*>& LazyTexture, bool bMatchSize);                                 // [0x16c3e90] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonUI.CommonLazyImage.SetBrushFromLazyMaterial
	void SetBrushFromLazyMaterial(TWeakObjectPtr<UMaterialInterface*>& LazyMaterial);                                        // [0x16c3d50] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonUI.CommonLazyImage.SetBrushFromLazyDisplayAsset
	void SetBrushFromLazyDisplayAsset(TWeakObjectPtr<UObject*>& LazyObject, bool bMatchTextureSize);                         // [0x16c3b20] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonUI.CommonLazyImage.IsLoading
	bool IsLoading();                                                                                                        // [0x16c26a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CommonUI.CommonLazyWidget
/// Size: 0x0160 (0x000150 - 0x0002B0)
class UCommonLazyWidget : public UWidget : UWidget
{ 
public:
	FSlateBrush                                        LoadingBackgroundBrush;                                     // 0x0150   (0x00D0)  
	UUserWidget*                                       Content;                                                    // 0x0220   (0x0008)  
	unsigned char                                      UnknownData00_5[0x30];                                      // 0x0228   (0x0030)  MISSED
	FMulticastInlineDelegate                           BP_OnLoadingStateChanged;                                   // 0x0258   (0x0010)  
	unsigned char                                      UnknownData01_6[0x48];                                      // 0x0268   (0x0048)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonLazyWidget.SetLazyContent
	void SetLazyContent(TWeakObjectPtr<UClass*> SoftWidget);                                                                 // [0x16c5280] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonLazyWidget.IsLoading
	bool IsLoading();                                                                                                        // [0x16c26e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonLazyWidget.GetContent
	UUserWidget* GetContent();                                                                                               // [0x16c01d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CommonUI.CommonListView
/// Size: 0x0000 (0x000C30 - 0x000C30)
class UCommonListView : public UListView : UListView
{ 
public:
};

/// Class /Script/CommonUI.LoadGuardSlot
/// Size: 0x0028 (0x000038 - 0x000060)
class ULoadGuardSlot : public UPanelSlot : UPanelSlot
{ 
public:
	FMargin                                            Padding;                                                    // 0x0038   (0x0010)  
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                        // 0x0048   (0x0001)  
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                          // 0x0049   (0x0001)  
	unsigned char                                      UnknownData00_6[0x16];                                      // 0x004A   (0x0016)  MISSED


	/// Functions
	// Function /Script/CommonUI.LoadGuardSlot.SetVerticalAlignment
	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                          // [0x16c6e20] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.LoadGuardSlot.SetPadding
	void SetPadding(FMargin InPadding);                                                                                      // [0x16c5be0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.LoadGuardSlot.SetHorizontalAlignment
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                    // [0x16c4710] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonLoadGuard
/// Size: 0x0168 (0x000168 - 0x0002D0)
class UCommonLoadGuard : public UContentWidget : UContentWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0168   (0x0008)  MISSED
	FSlateBrush                                        LoadingBackgroundBrush;                                     // 0x0170   (0x00D0)  
	TEnumAsByte<EHorizontalAlignment>                  ThrobberAlignment;                                          // 0x0240   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0241   (0x0003)  MISSED
	FMargin                                            ThrobberPadding;                                            // 0x0244   (0x0010)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0254   (0x0004)  MISSED
	FText                                              LoadingText;                                                // 0x0258   (0x0018)  
	UClass*                                            TextStyle;                                                  // 0x0270   (0x0008)  
	FMulticastInlineDelegate                           BP_OnLoadingStateChanged;                                   // 0x0278   (0x0010)  
	FSoftObjectPath                                    SpinnerMaterialPath;                                        // 0x0288   (0x0020)  
	unsigned char                                      UnknownData03_6[0x28];                                      // 0x02A8   (0x0028)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonLoadGuard.SetLoadingText
	void SetLoadingText(FText& InLoadingText);                                                                               // [0x16c55f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonUI.CommonLoadGuard.SetIsLoading
	void SetIsLoading(bool bInIsLoading);                                                                                    // [0x16c4ef0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonLoadGuard.OnAssetLoaded__DelegateSignature
	void OnAssetLoaded__DelegateSignature(UObject* Object);                                                                  // [0x2407bf0] Public|Delegate      
	// Function /Script/CommonUI.CommonLoadGuard.IsLoading
	bool IsLoading();                                                                                                        // [0x16c2720] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonLoadGuard.BP_GuardAndLoadAsset
	void BP_GuardAndLoadAsset(TWeakObjectPtr<UObject*>& InLazyAsset, FDelegateProperty& OnAssetLoaded);                      // [0x16bf2e0] Final|Native|Private|HasOutParms|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonNumericTextBlock
/// Size: 0x00A0 (0x000370 - 0x000410)
class UCommonNumericTextBlock : public UCommonTextBlock : UCommonTextBlock
{ 
public:
	FMulticastInlineDelegate                           OnInterpolationStartedEvent;                                // 0x0370   (0x0010)  
	FMulticastInlineDelegate                           OnInterpolationUpdatedEvent;                                // 0x0380   (0x0010)  
	FMulticastInlineDelegate                           OnOutroEvent;                                               // 0x0390   (0x0010)  
	FMulticastInlineDelegate                           OnInterpolationEndedEvent;                                  // 0x03A0   (0x0010)  
	float                                              CurrentNumericValue;                                        // 0x03B0   (0x0004)  
	ECommonNumericType                                 NumericType;                                                // 0x03B4   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x03B5   (0x0003)  MISSED
	FCommonNumberFormattingOptions                     FormattingSpecification;                                    // 0x03B8   (0x0014)  
	float                                              EaseOutInterpolationExponent;                               // 0x03CC   (0x0004)  
	float                                              InterpolationUpdateInterval;                                // 0x03D0   (0x0004)  
	float                                              PostInterpolationShrinkDuration;                            // 0x03D4   (0x0004)  
	bool                                               PerformSizeInterpolation;                                   // 0x03D8   (0x0001)  
	bool                                               IsPercentage;                                               // 0x03D9   (0x0001)  
	unsigned char                                      UnknownData01_6[0x36];                                      // 0x03DA   (0x0036)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonNumericTextBlock.SetNumericType
	void SetNumericType(ECommonNumericType InNumericType);                                                                   // [0x16c5b50] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonNumericTextBlock.SetCurrentValue
	void SetCurrentValue(float NewValue);                                                                                    // [0x16c4280] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonNumericTextBlock.OnOutro__DelegateSignature
	void OnOutro__DelegateSignature(UCommonNumericTextBlock* NumericTextBlock);                                              // [0x2407bf0] MulticastDelegate|Public|Delegate 
	// Function /Script/CommonUI.CommonNumericTextBlock.OnInterpolationUpdated__DelegateSignature
	void OnInterpolationUpdated__DelegateSignature(UCommonNumericTextBlock* NumericTextBlock, float LastValue, float NewValue); // [0x2407bf0] MulticastDelegate|Public|Delegate 
	// Function /Script/CommonUI.CommonNumericTextBlock.OnInterpolationStarted__DelegateSignature
	void OnInterpolationStarted__DelegateSignature(UCommonNumericTextBlock* NumericTextBlock);                               // [0x2407bf0] MulticastDelegate|Public|Delegate 
	// Function /Script/CommonUI.CommonNumericTextBlock.OnInterpolationEnded__DelegateSignature
	void OnInterpolationEnded__DelegateSignature(UCommonNumericTextBlock* NumericTextBlock, bool HadCompleted);              // [0x2407bf0] MulticastDelegate|Public|Delegate 
	// Function /Script/CommonUI.CommonNumericTextBlock.IsInterpolatingNumericValue
	bool IsInterpolatingNumericValue();                                                                                      // [0x16c2670] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonNumericTextBlock.InterpolateToValue
	void InterpolateToValue(float TargetValue, float MaximumInterpolationDuration, float MinimumChangeRate, float OutroOffset); // [0x16c2420] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonNumericTextBlock.GetTargetValue
	float GetTargetValue();                                                                                                  // [0x16c1ab0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CommonUI.CommonPoolableWidgetInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UCommonPoolableWidgetInterface : public UInterface : UInterface
{ 
public:
};

/// Class /Script/CommonUI.CommonRichTextBlock
/// Size: 0x0040 (0x000870 - 0x0008B0)
class UCommonRichTextBlock : public URichTextBlock : URichTextBlock
{ 
public:
	ERichTextInlineIconDisplayMode                     InlineIconDisplayMode;                                      // 0x0870   (0x0001)  
	bool                                               bTintInlineIcon;                                            // 0x0871   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0872   (0x0006)  MISSED
	UClass*                                            DefaultTextStyleOverrideClass;                              // 0x0878   (0x0008)  
	float                                              MobileTextBlockScale;                                       // 0x0880   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0884   (0x0004)  MISSED
	UClass*                                            ScrollStyle;                                                // 0x0888   (0x0008)  
	bool                                               bIsScrollingEnabled;                                        // 0x0890   (0x0001)  
	bool                                               bDisplayAllCaps;                                            // 0x0891   (0x0001)  
	bool                                               bAutoCollapseWithEmptyText;                                 // 0x0892   (0x0001)  
	unsigned char                                      UnknownData02_6[0x1D];                                      // 0x0893   (0x001D)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonRichTextBlock.SetScrollingEnabled
	void SetScrollingEnabled(bool bInIsScrollingEnabled);                                                                    // [0x16c5db0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonRotator
/// Size: 0x0060 (0x001500 - 0x001560)
class UCommonRotator : public UCommonButtonBase : UCommonButtonBase
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x1500   (0x0010)  MISSED
	FMulticastInlineDelegate                           OnRotated;                                                  // 0x1510   (0x0010)  
	unsigned char                                      UnknownData01_5[0x18];                                      // 0x1520   (0x0018)  MISSED
	UCommonTextBlock*                                  MyText;                                                     // 0x1538   (0x0008)  
	unsigned char                                      UnknownData02_6[0x20];                                      // 0x1540   (0x0020)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonRotator.ShiftTextRight
	void ShiftTextRight();                                                                                                   // [0x16c6f60] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonRotator.ShiftTextLeft
	void ShiftTextLeft();                                                                                                    // [0x16c6f40] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonRotator.SetSelectedItem
	void SetSelectedItem(int32_t InValue);                                                                                   // [0x16c60c0] Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonRotator.PopulateTextLabels
	void PopulateTextLabels(TArray<FText> Labels);                                                                           // [0x16c2d30] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonRotator.GetSelectedText
	FText GetSelectedText();                                                                                                 // [0x16c15a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonRotator.GetSelectedIndex
	int32_t GetSelectedIndex();                                                                                              // [0x16c1480] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonRotator.BP_OnOptionsPopulated
	void BP_OnOptionsPopulated(int32_t Count);                                                                               // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonRotator.BP_OnOptionSelected
	void BP_OnOptionSelected(int32_t Index);                                                                                 // [0x2407bf0] Event|Protected|BlueprintEvent 
};

/// Class /Script/CommonUI.CommonTabListWidgetBase
/// Size: 0x00F8 (0x0002A8 - 0x0003A0)
class UCommonTabListWidgetBase : public UCommonUserWidget : UCommonUserWidget
{ 
public:
	FMulticastInlineDelegate                           OnTabSelected;                                              // 0x02A8   (0x0010)  
	FMulticastInlineDelegate                           OnTabButtonCreation;                                        // 0x02B8   (0x0010)  
	FMulticastInlineDelegate                           OnTabButtonRemoval;                                         // 0x02C8   (0x0010)  
	FMulticastInlineDelegate                           OnTabListRebuilt;                                           // 0x02D8   (0x0010)  
	FDataTableRowHandle                                NextTabInputActionData;                                     // 0x02E8   (0x0010)  
	FDataTableRowHandle                                PreviousTabInputActionData;                                 // 0x02F8   (0x0010)  
	UInputAction*                                      NextTabEnhancedInputAction;                                 // 0x0308   (0x0008)  
	UInputAction*                                      PreviousTabEnhancedInputAction;                             // 0x0310   (0x0008)  
	bool                                               bAutoListenForInput;                                        // 0x0318   (0x0001)  
	bool                                               bDeferRebuildingTabList;                                    // 0x0319   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x031A   (0x0002)  MISSED
	TWeakObjectPtr<UCommonAnimatedSwitcher*>           LinkedSwitcher;                                             // 0x031C   (0x0008)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0324   (0x0004)  MISSED
	UCommonButtonGroupBase*                            TabButtonGroup;                                             // 0x0328   (0x0008)  
	unsigned char                                      UnknownData02_5[0x8];                                       // 0x0330   (0x0008)  MISSED
	TMap<FName, FCommonRegisteredTabInfo>              RegisteredTabsByID;                                         // 0x0338   (0x0050)  
	unsigned char                                      UnknownData03_6[0x18];                                      // 0x0388   (0x0018)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonTabListWidgetBase.SetTabVisibility
	void SetTabVisibility(FName TabNameID, ESlateVisibility NewVisibility);                                                  // [0x16c67d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTabListWidgetBase.SetTabInteractionEnabled
	void SetTabInteractionEnabled(FName TabNameID, bool bEnable);                                                            // [0x16c6700] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTabListWidgetBase.SetTabEnabled
	void SetTabEnabled(FName TabNameID, bool bEnable);                                                                       // [0x16c6630] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTabListWidgetBase.SetListeningForInput
	void SetListeningForInput(bool bShouldListen);                                                                           // [0x16c5560] Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTabListWidgetBase.SetLinkedSwitcher
	void SetLinkedSwitcher(UCommonAnimatedSwitcher* CommonSwitcher);                                                         // [0x16c54d0] Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTabListWidgetBase.SelectTabByID
	bool SelectTabByID(FName TabNameID, bool bSuppressClickFeedback);                                                        // [0x16c36d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTabListWidgetBase.RemoveTab
	bool RemoveTab(FName TabNameID);                                                                                         // [0x16c3150] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTabListWidgetBase.RemoveAllTabs
	void RemoveAllTabs();                                                                                                    // [0x16c3130] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTabListWidgetBase.RegisterTab
	bool RegisterTab(FName TabNameID, UClass* ButtonWidgetType, UWidget* ContentWidget, int32_t TabIndex);                   // [0x16c2fd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTabListWidgetBase.OnTabSelected__DelegateSignature
	void OnTabSelected__DelegateSignature(FName TabId);                                                                      // [0x2407bf0] MulticastDelegate|Public|Delegate 
	// Function /Script/CommonUI.CommonTabListWidgetBase.OnTabListRebuilt__DelegateSignature
	void OnTabListRebuilt__DelegateSignature();                                                                              // [0x2407bf0] MulticastDelegate|Public|Delegate 
	// Function /Script/CommonUI.CommonTabListWidgetBase.OnTabButtonRemoval__DelegateSignature
	void OnTabButtonRemoval__DelegateSignature(FName TabId, UCommonButtonBase* TabButton);                                   // [0x2407bf0] MulticastDelegate|Public|Delegate 
	// Function /Script/CommonUI.CommonTabListWidgetBase.OnTabButtonCreation__DelegateSignature
	void OnTabButtonCreation__DelegateSignature(FName TabId, UCommonButtonBase* TabButton);                                  // [0x2407bf0] MulticastDelegate|Public|Delegate 
	// Function /Script/CommonUI.CommonTabListWidgetBase.HandleTabRemoval
	void HandleTabRemoval(FName TabNameID, UCommonButtonBase* TabButton);                                                    // [0x16c21b0] Native|Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonTabListWidgetBase.HandleTabCreation
	void HandleTabCreation(FName TabNameID, UCommonButtonBase* TabButton);                                                   // [0x16c20e0] Native|Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonTabListWidgetBase.HandleTabButtonSelected
	void HandleTabButtonSelected(UCommonButtonBase* SelectedTabButton, int32_t ButtonIndex);                                 // [0x16c2010] Final|Native|Protected 
	// Function /Script/CommonUI.CommonTabListWidgetBase.HandlePreviousTabInputAction
	void HandlePreviousTabInputAction(bool& bPassThrough);                                                                   // [0x16c1f80] Final|Native|Protected|HasOutParms 
	// Function /Script/CommonUI.CommonTabListWidgetBase.HandlePreLinkedSwitcherChanged_BP
	void HandlePreLinkedSwitcherChanged_BP();                                                                                // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonTabListWidgetBase.HandlePostLinkedSwitcherChanged_BP
	void HandlePostLinkedSwitcherChanged_BP();                                                                               // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonTabListWidgetBase.HandleNextTabInputAction
	void HandleNextTabInputAction(bool& bPassThrough);                                                                       // [0x16c1e10] Final|Native|Protected|HasOutParms 
	// Function /Script/CommonUI.CommonTabListWidgetBase.GetTabIdAtIndex
	FName GetTabIdAtIndex(int32_t Index);                                                                                    // [0x16c1a20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonTabListWidgetBase.GetTabCount
	int32_t GetTabCount();                                                                                                   // [0x16c19f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonTabListWidgetBase.GetTabButtonBaseByID
	UCommonButtonBase* GetTabButtonBaseByID(FName TabNameID);                                                                // [0x16c18d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTabListWidgetBase.GetSelectedTabId
	FName GetSelectedTabId();                                                                                                // [0x16c1560] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonTabListWidgetBase.GetLinkedSwitcher
	UCommonAnimatedSwitcher* GetLinkedSwitcher();                                                                            // [0x16c0d90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonTabListWidgetBase.GetActiveTab
	FName GetActiveTab();                                                                                                    // [0xbdca30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonTabListWidgetBase.DisableTabWithReason
	void DisableTabWithReason(FName TabNameID, FText& Reason);                                                               // [0x16bfa20] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonTextStyle
/// Size: 0x0188 (0x000028 - 0x0001B0)
class UCommonTextStyle : public UObject : UObject
{ 
public:
	FSlateFontInfo                                     Font;                                                       // 0x0028   (0x0058)  
	FLinearColor                                       Color;                                                      // 0x0080   (0x0010)  
	bool                                               bUsesDropShadow;                                            // 0x0090   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0091   (0x0007)  MISSED
	FVector2D                                          ShadowOffset;                                               // 0x0098   (0x0010)  
	FLinearColor                                       ShadowColor;                                                // 0x00A8   (0x0010)  
	FMargin                                            Margin;                                                     // 0x00B8   (0x0010)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x00C8   (0x0008)  MISSED
	FSlateBrush                                        StrikeBrush;                                                // 0x00D0   (0x00D0)  
	float                                              LineHeightPercentage;                                       // 0x01A0   (0x0004)  
	unsigned char                                      UnknownData02_6[0xC];                                       // 0x01A4   (0x000C)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonTextStyle.GetStrikeBrush
	void GetStrikeBrush(FSlateBrush& OutStrikeBrush);                                                                        // [0x16c17e0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonTextStyle.GetShadowOffset
	void GetShadowOffset(FVector2D& OutShadowOffset);                                                                        // [0x16c1700] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonTextStyle.GetShadowColor
	void GetShadowColor(FLinearColor& OutColor);                                                                             // [0x16c1670] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonTextStyle.GetMargin
	void GetMargin(FMargin& OutMargin);                                                                                      // [0x16c0e30] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonTextStyle.GetLineHeightPercentage
	float GetLineHeightPercentage();                                                                                         // [0x10a3d70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonTextStyle.GetFont
	void GetFont(FSlateFontInfo& OutFont);                                                                                   // [0x16c0880] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonTextStyle.GetColor
	void GetColor(FLinearColor& OutColor);                                                                                   // [0x16c0140] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CommonUI.CommonTextScrollStyle
/// Size: 0x0018 (0x000028 - 0x000040)
class UCommonTextScrollStyle : public UObject : UObject
{ 
public:
	float                                              Speed;                                                      // 0x0028   (0x0004)  
	float                                              StartDelay;                                                 // 0x002C   (0x0004)  
	float                                              EndDelay;                                                   // 0x0030   (0x0004)  
	float                                              FadeInDelay;                                                // 0x0034   (0x0004)  
	float                                              FadeOutDelay;                                               // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Class /Script/CommonUI.CommonTileView
/// Size: 0x0000 (0x000C50 - 0x000C50)
class UCommonTileView : public UTileView : UTileView
{ 
public:
};

/// Class /Script/CommonUI.CommonTreeView
/// Size: 0x0000 (0x000C90 - 0x000C90)
class UCommonTreeView : public UTreeView : UTreeView
{ 
public:
};

/// Class /Script/CommonUI.CommonUIEditorSettings
/// Size: 0x0098 (0x000028 - 0x0000C0)
class UCommonUIEditorSettings : public UObject : UObject
{ 
public:
	TWeakObjectPtr<UClass*>                            TemplateTextStyle;                                          // 0x0028   (0x0030)  
	TWeakObjectPtr<UClass*>                            TemplateButtonStyle;                                        // 0x0058   (0x0030)  
	TWeakObjectPtr<UClass*>                            TemplateBorderStyle;                                        // 0x0088   (0x0030)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x00B8   (0x0008)  MISSED
};

/// Class /Script/CommonUI.CommonUILibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UCommonUILibrary : public UBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/CommonUI.CommonUIRichTextData
/// Size: 0x0008 (0x000028 - 0x000030)
class UCommonUIRichTextData : public UObject : UObject
{ 
public:
	UDataTable*                                        InlineIconSet;                                              // 0x0028   (0x0008)  
};

/// Class /Script/CommonUI.CommonUISettings
/// Size: 0x01C8 (0x000028 - 0x0001F0)
class UCommonUISettings : public UObject : UObject
{ 
public:
	bool                                               bAutoLoadData;                                              // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0029   (0x0007)  MISSED
	TWeakObjectPtr<UObject*>                           DefaultImageResourceObject;                                 // 0x0030   (0x0030)  
	TWeakObjectPtr<UMaterialInterface*>                DefaultThrobberMaterial;                                    // 0x0060   (0x0030)  
	TWeakObjectPtr<UClass*>                            DefaultRichTextDataClass;                                   // 0x0090   (0x0030)  
	TArray<FGameplayTag>                               PlatformTraits;                                             // 0x00C0   (0x0010)  
	unsigned char                                      UnknownData01_5[0x28];                                      // 0x00D0   (0x0028)  MISSED
	UObject*                                           DefaultImageResourceObjectInstance;                         // 0x00F8   (0x0008)  
	UMaterialInterface*                                DefaultThrobberMaterialInstance;                            // 0x0100   (0x0008)  
	unsigned char                                      UnknownData02_5[0x8];                                       // 0x0108   (0x0008)  MISSED
	FSlateBrush                                        DefaultThrobberBrush;                                       // 0x0110   (0x00D0)  
	UCommonUIRichTextData*                             RichTextDataInstance;                                       // 0x01E0   (0x0008)  
	unsigned char                                      UnknownData03_6[0x8];                                       // 0x01E8   (0x0008)  MISSED
};

/// Class /Script/CommonUI.CommonUISubsystemBase
/// Size: 0x0010 (0x000030 - 0x000040)
class UCommonUISubsystemBase : public UGameInstanceSubsystem : UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0030   (0x0010)  MISSED
};

/// Class /Script/CommonUI.CommonInputMetadata
/// Size: 0x0008 (0x000028 - 0x000030)
class UCommonInputMetadata : public UObject : UObject
{ 
public:
	int32_t                                            NavBarPriority;                                             // 0x0028   (0x0004)  
	bool                                               bIsGenericInputAction;                                      // 0x002C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x002D   (0x0003)  MISSED
};

/// Class /Script/CommonUI.CommonMappingContextMetadataInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UCommonMappingContextMetadataInterface : public UInterface : UInterface
{ 
public:
};

/// Class /Script/CommonUI.CommonMappingContextMetadata
/// Size: 0x0060 (0x000030 - 0x000090)
class UCommonMappingContextMetadata : public UDataAsset : UDataAsset
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0030   (0x0008)  MISSED
	UCommonInputMetadata*                              EnhancedInputMetadata;                                      // 0x0038   (0x0008)  
	TMap<UInputAction*, UCommonInputMetadata*>         PerActionEnhancedInputMetadata;                             // 0x0040   (0x0050)  
};

/// Class /Script/CommonUI.CommonUIVisibilitySubsystem
/// Size: 0x0058 (0x000030 - 0x000088)
class UCommonUIVisibilitySubsystem : public ULocalPlayerSubsystem : ULocalPlayerSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x58];                                      // 0x0030   (0x0058)  MISSED
};

/// Class /Script/CommonUI.CommonVideoPlayer
/// Size: 0x0160 (0x000150 - 0x0002B0)
class UCommonVideoPlayer : public UWidget : UWidget
{ 
public:
	UMediaSource*                                      Video;                                                      // 0x0150   (0x0008)  
	UMediaPlayer*                                      MediaPlayer;                                                // 0x0158   (0x0008)  
	UMediaTexture*                                     MediaTexture;                                               // 0x0160   (0x0008)  
	UMaterial*                                         VideoMaterial;                                              // 0x0168   (0x0008)  
	UMediaSoundComponent*                              SoundComponent;                                             // 0x0170   (0x0008)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0178   (0x0008)  MISSED
	FSlateBrush                                        VideoBrush;                                                 // 0x0180   (0x00D0)  
	unsigned char                                      UnknownData01_6[0x60];                                      // 0x0250   (0x0060)  MISSED
};

/// Class /Script/CommonUI.CommonVisibilitySwitcher
/// Size: 0x0028 (0x000178 - 0x0001A0)
class UCommonVisibilitySwitcher : public UOverlay : UOverlay
{ 
public:
	ESlateVisibility                                   ShownVisibility;                                            // 0x0178   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0179   (0x0003)  MISSED
	int32_t                                            ActiveWidgetIndex;                                          // 0x017C   (0x0004)  
	bool                                               bAutoActivateSlot;                                          // 0x0180   (0x0001)  
	bool                                               bActivateFirstSlotOnAdding;                                 // 0x0181   (0x0001)  
	unsigned char                                      UnknownData01_6[0x1E];                                      // 0x0182   (0x001E)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonVisibilitySwitcher.SetActiveWidgetIndex
	void SetActiveWidgetIndex(int32_t Index);                                                                                // [0x16c38e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonVisibilitySwitcher.SetActiveWidget
	void SetActiveWidget(UWidget* Widget);                                                                                   // [0x16c37a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonVisibilitySwitcher.IncrementActiveWidgetIndex
	void IncrementActiveWidgetIndex(bool bAllowWrapping);                                                                    // [0x16c2380] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonVisibilitySwitcher.GetActiveWidgetIndex
	int32_t GetActiveWidgetIndex();                                                                                          // [0x16bfea0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonVisibilitySwitcher.GetActiveWidget
	UWidget* GetActiveWidget();                                                                                              // [0x16bfe60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonVisibilitySwitcher.DecrementActiveWidgetIndex
	void DecrementActiveWidgetIndex(bool bAllowWrapping);                                                                    // [0x16bf860] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonVisibilitySwitcher.DeactivateVisibleSlot
	void DeactivateVisibleSlot();                                                                                            // [0x16bf7c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonVisibilitySwitcher.ActivateVisibleSlot
	void ActivateVisibleSlot();                                                                                              // [0x16beca0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonVisibilitySwitcherSlot
/// Size: 0x0010 (0x000058 - 0x000068)
class UCommonVisibilitySwitcherSlot : public UOverlaySlot : UOverlaySlot
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0058   (0x0010)  MISSED
};

/// Class /Script/CommonUI.UCommonVisibilityWidgetBase
/// Size: 0x0050 (0x000330 - 0x000380)
class UUCommonVisibilityWidgetBase : public UCommonBorder : UCommonBorder
{ 
public:
	TMap<FName, bool>                                  VisibilityControls;                                         // 0x0328   (0x0050)  
	bool                                               bShowForGamepad;                                            // 0x0378   (0x0001)  
	bool                                               bShowForMouseAndKeyboard;                                   // 0x0379   (0x0001)  
	bool                                               bShowForTouch;                                              // 0x037A   (0x0001)  
	ESlateVisibility                                   VisibleType;                                                // 0x037B   (0x0001)  
	ESlateVisibility                                   HiddenType;                                                 // 0x037C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x037D   (0x0003)  MISSED


	/// Functions
	// Function /Script/CommonUI.UCommonVisibilityWidgetBase.GetRegisteredPlatforms
	TArray<FName> GetRegisteredPlatforms();                                                                                  // [0x16c1190] Final|Native|Static|Protected 
};

/// Class /Script/CommonUI.CommonVisualAttachment
/// Size: 0x0020 (0x0001A0 - 0x0001C0)
class UCommonVisualAttachment : public USizeBox : USizeBox
{ 
public:
	FVector2D                                          ContentAnchor;                                              // 0x01A0   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x01B0   (0x0010)  MISSED
};

/// Class /Script/CommonUI.CommonWidgetCarousel
/// Size: 0x0048 (0x000168 - 0x0001B0)
class UCommonWidgetCarousel : public UPanelWidget : UPanelWidget
{ 
public:
	int32_t                                            ActiveWidgetIndex;                                          // 0x0168   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x016C   (0x0004)  MISSED
	FMulticastInlineDelegate                           OnCurrentPageIndexChanged;                                  // 0x0170   (0x0010)  
	unsigned char                                      UnknownData01_6[0x30];                                      // 0x0180   (0x0030)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonWidgetCarousel.SetActiveWidgetIndex
	void SetActiveWidgetIndex(int32_t Index);                                                                                // [0x16c3980] Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonWidgetCarousel.SetActiveWidget
	void SetActiveWidget(UWidget* Widget);                                                                                   // [0x16c3850] Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonWidgetCarousel.PreviousPage
	void PreviousPage();                                                                                                     // [0x16c2f50] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonWidgetCarousel.NextPage
	void NextPage();                                                                                                         // [0x16c28e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonWidgetCarousel.GetWidgetAtIndex
	UWidget* GetWidgetAtIndex(int32_t Index);                                                                                // [0x16c1b10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonWidgetCarousel.GetActiveWidgetIndex
	int32_t GetActiveWidgetIndex();                                                                                          // [0x16bfec0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonWidgetCarousel.EndAutoScrolling
	void EndAutoScrolling();                                                                                                 // [0x16bfb40] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonWidgetCarousel.BeginAutoScrolling
	void BeginAutoScrolling(float ScrollInterval);                                                                           // [0x16bf570] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonWidgetCarouselNavBar
/// Size: 0x0048 (0x000150 - 0x000198)
class UCommonWidgetCarouselNavBar : public UWidget : UWidget
{ 
public:
	UClass*                                            ButtonWidgetType;                                           // 0x0150   (0x0008)  
	FMargin                                            ButtonPadding;                                              // 0x0158   (0x0010)  
	unsigned char                                      UnknownData00_5[0x10];                                      // 0x0168   (0x0010)  MISSED
	UCommonWidgetCarousel*                             LinkedCarousel;                                             // 0x0178   (0x0008)  
	UCommonButtonGroupBase*                            ButtonGroup;                                                // 0x0180   (0x0008)  
	TArray<UCommonButtonBase*>                         buttons;                                                    // 0x0188   (0x0010)  


	/// Functions
	// Function /Script/CommonUI.CommonWidgetCarouselNavBar.SetLinkedCarousel
	void SetLinkedCarousel(UCommonWidgetCarousel* CommonCarousel);                                                           // [0x16c5440] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonWidgetCarouselNavBar.HandlePageChanged
	void HandlePageChanged(UCommonWidgetCarousel* CommonCarousel, int32_t PageIndex);                                        // [0x16c1ea0] Final|Native|Protected 
	// Function /Script/CommonUI.CommonWidgetCarouselNavBar.HandleButtonClicked
	void HandleButtonClicked(UCommonButtonBase* AssociatedButton, int32_t ButtonIndex);                                      // [0x16c1bf0] Final|Native|Protected 
};

/// Class /Script/CommonUI.CommonWidgetGroupBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UCommonWidgetGroupBase : public UObject : UObject
{ 
public:
};

/// Class /Script/CommonUI.CommonButtonGroupBase
/// Size: 0x00E8 (0x000028 - 0x000110)
class UCommonButtonGroupBase : public UCommonWidgetGroupBase : UCommonWidgetGroupBase
{ 
public:
	FMulticastInlineDelegate                           OnSelectedButtonBaseChanged;                                // 0x0028   (0x0010)  
	unsigned char                                      UnknownData00_5[0x18];                                      // 0x0038   (0x0018)  MISSED
	FMulticastInlineDelegate                           OnHoveredButtonBaseChanged;                                 // 0x0050   (0x0010)  
	unsigned char                                      UnknownData01_5[0x18];                                      // 0x0060   (0x0018)  MISSED
	FMulticastInlineDelegate                           OnButtonBaseClicked;                                        // 0x0078   (0x0010)  
	unsigned char                                      UnknownData02_5[0x18];                                      // 0x0088   (0x0018)  MISSED
	FMulticastInlineDelegate                           OnButtonBaseDoubleClicked;                                  // 0x00A0   (0x0010)  
	unsigned char                                      UnknownData03_5[0x18];                                      // 0x00B0   (0x0018)  MISSED
	FMulticastInlineDelegate                           OnSelectionCleared;                                         // 0x00C8   (0x0010)  
	unsigned char                                      UnknownData04_5[0x18];                                      // 0x00D8   (0x0018)  MISSED
	bool                                               bSelectionRequired;                                         // 0x00F0   (0x0001)  
	unsigned char                                      UnknownData05_6[0x1F];                                      // 0x00F1   (0x001F)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonButtonGroupBase.SetSelectionRequired
	void SetSelectionRequired(bool bRequireSelection);                                                                       // [0x16c61f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonGroupBase.SelectPreviousButton
	void SelectPreviousButton(bool bAllowWrap);                                                                              // [0x16c3640] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonGroupBase.SelectNextButton
	void SelectNextButton(bool bAllowWrap);                                                                                  // [0x16c35b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonGroupBase.SelectButtonAtIndex
	void SelectButtonAtIndex(int32_t ButtonIndex, bool bAllowSound);                                                         // [0x16c34e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonGroupBase.OnSelectionStateChangedBase
	void OnSelectionStateChangedBase(UCommonButtonBase* BaseButton, bool bIsSelected);                                       // [0x16c2c60] Native|Protected     
	// Function /Script/CommonUI.CommonButtonGroupBase.OnHandleButtonBaseDoubleClicked
	void OnHandleButtonBaseDoubleClicked(UCommonButtonBase* BaseButton);                                                     // [0x16c2b30] Native|Protected     
	// Function /Script/CommonUI.CommonButtonGroupBase.OnHandleButtonBaseClicked
	void OnHandleButtonBaseClicked(UCommonButtonBase* BaseButton);                                                           // [0x16c2aa0] Native|Protected     
	// Function /Script/CommonUI.CommonButtonGroupBase.OnButtonBaseUnhovered
	void OnButtonBaseUnhovered(UCommonButtonBase* BaseButton);                                                               // [0x16c2a10] Native|Protected     
	// Function /Script/CommonUI.CommonButtonGroupBase.OnButtonBaseHovered
	void OnButtonBaseHovered(UCommonButtonBase* BaseButton);                                                                 // [0x16c2980] Native|Protected     
	// Function /Script/CommonUI.CommonButtonGroupBase.HasAnyButtons
	bool HasAnyButtons();                                                                                                    // [0x16c2320] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonGroupBase.GetSelectedButtonIndex
	int32_t GetSelectedButtonIndex();                                                                                        // [0x16c1370] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonGroupBase.GetSelectedButtonBase
	UCommonButtonBase* GetSelectedButtonBase();                                                                              // [0x16c1310] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonGroupBase.GetHoveredButtonIndex
	int32_t GetHoveredButtonIndex();                                                                                         // [0x16c0960] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonGroupBase.GetButtonCount
	int32_t GetButtonCount();                                                                                                // [0x16c0080] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonGroupBase.GetButtonBaseAtIndex
	UCommonButtonBase* GetButtonBaseAtIndex(int32_t Index);                                                                  // [0x16bffc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonGroupBase.FindButtonIndex
	int32_t FindButtonIndex(UCommonButtonBase* ButtonToFind);                                                                // [0x16bfb60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonGroupBase.DeselectAll
	void DeselectAll();                                                                                                      // [0x16bf910] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonBoundActionBar
/// Size: 0x0018 (0x000230 - 0x000248)
class UCommonBoundActionBar : public UDynamicEntryBoxBase : UDynamicEntryBoxBase
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0230   (0x0008)  MISSED
	UClass*                                            ActionButtonClass;                                          // 0x0238   (0x0008)  
	bool                                               bDisplayOwningPlayerActionsOnly;                            // 0x0240   (0x0001)  
	bool                                               bIgnoreDuplicateActions;                                    // 0x0241   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x0242   (0x0006)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonBoundActionBar.SetDisplayOwningPlayerActionsOnly
	void SetDisplayOwningPlayerActionsOnly(bool bShouldOnlyDisplayOwningPlayerActions);                                      // [0x16c44c0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonBoundActionButton
/// Size: 0x0020 (0x001500 - 0x001520)
class UCommonBoundActionButton : public UCommonButtonBase : UCommonButtonBase
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x1500   (0x0008)  MISSED
	UCommonTextBlock*                                  Text_ActionName;                                            // 0x1508   (0x0008)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x1510   (0x0010)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonBoundActionButton.OnUpdateInputAction
	void OnUpdateInputAction();                                                                                              // [0x2407bf0] Event|Protected|BlueprintEvent 
};

/// Class /Script/CommonUI.CommonGenericInputActionDataTable
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class UCommonGenericInputActionDataTable : public UDataTable : UDataTable
{ 
public:
};

/// Class /Script/CommonUI.CommonInputActionDataProcessor
/// Size: 0x0000 (0x000028 - 0x000028)
class UCommonInputActionDataProcessor : public UObject : UObject
{ 
public:
};

/// Class /Script/CommonUI.CommonUIActionRouterBase
/// Size: 0x0128 (0x000030 - 0x000158)
class UCommonUIActionRouterBase : public ULocalPlayerSubsystem : ULocalPlayerSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x128];                                     // 0x0030   (0x0128)  MISSED
};

/// Class /Script/CommonUI.CommonUIInputSettings
/// Size: 0x0050 (0x000028 - 0x000078)
class UCommonUIInputSettings : public UObject : UObject
{ 
public:
	bool                                               bLinkCursorToGamepadFocus;                                  // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0029   (0x0003)  MISSED
	int32_t                                            UIActionProcessingPriority;                                 // 0x002C   (0x0004)  
	TArray<FUIInputAction>                             InputActions;                                               // 0x0030   (0x0010)  
	TArray<FUIInputAction>                             ActionOverrides;                                            // 0x0040   (0x0010)  
	FCommonAnalogCursorSettings                        AnalogCursorSettings;                                       // 0x0050   (0x0024)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0074   (0x0004)  MISSED
};

/// Class /Script/CommonUI.CommonStyleSheet
/// Size: 0x0028 (0x000030 - 0x000058)
class UCommonStyleSheet : public UDataAsset : UDataAsset
{ 
public:
	TArray<UCommonStyleSheetTypeBase*>                 Properties;                                                 // 0x0030   (0x0010)  
	TArray<UCommonStyleSheet*>                         ImportedStyleSheets;                                        // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0050   (0x0008)  MISSED
};

/// Class /Script/CommonUI.CommonActivatableWidgetContainerBase
/// Size: 0x0120 (0x000150 - 0x000270)
class UCommonActivatableWidgetContainerBase : public UWidget : UWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0150   (0x0018)  MISSED
	ECommonSwitcherTransition                          TransitionType;                                             // 0x0168   (0x0001)  
	ETransitionCurve                                   TransitionCurveType;                                        // 0x0169   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x016A   (0x0002)  MISSED
	float                                              TransitionDuration;                                         // 0x016C   (0x0004)  
	TArray<UCommonActivatableWidget*>                  WidgetList;                                                 // 0x0170   (0x0010)  
	UCommonActivatableWidget*                          DisplayedWidget;                                            // 0x0180   (0x0008)  
	FUserWidgetPool                                    GeneratedWidgetsPool;                                       // 0x0188   (0x0088)  
	unsigned char                                      UnknownData02_6[0x60];                                      // 0x0210   (0x0060)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonActivatableWidgetContainerBase.SetTransitionDuration
	void SetTransitionDuration(float Duration);                                                                              // [0x16c6a80] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonActivatableWidgetContainerBase.RemoveWidget
	void RemoveWidget(UCommonActivatableWidget* WidgetToRemove);                                                             // [0x16c31f0] Final|Native|Private|BlueprintCallable 
	// Function /Script/CommonUI.CommonActivatableWidgetContainerBase.GetTransitionDuration
	float GetTransitionDuration();                                                                                           // [0x16c1af0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonActivatableWidgetContainerBase.GetActiveWidget
	UCommonActivatableWidget* GetActiveWidget();                                                                             // [0x16bfe30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonActivatableWidgetContainerBase.ClearWidgets
	void ClearWidgets();                                                                                                     // [0x16bf7a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonActivatableWidgetContainerBase.BP_AddWidget
	UCommonActivatableWidget* BP_AddWidget(UClass* ActivatableWidgetClass);                                                  // [0x16bee30] Final|Native|Private|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonActivatableWidgetStack
/// Size: 0x0010 (0x000270 - 0x000280)
class UCommonActivatableWidgetStack : public UCommonActivatableWidgetContainerBase : UCommonActivatableWidgetContainerBase
{ 
public:
	UClass*                                            RootContentWidgetClass;                                     // 0x0270   (0x0008)  
	UCommonActivatableWidget*                          RootContentWidget;                                          // 0x0278   (0x0008)  
};

/// Class /Script/CommonUI.CommonActivatableWidgetQueue
/// Size: 0x0000 (0x000270 - 0x000270)
class UCommonActivatableWidgetQueue : public UCommonActivatableWidgetContainerBase : UCommonActivatableWidgetContainerBase
{ 
public:
};

/// Enum /Script/CommonUI.ECommonNumericType
/// Size: 0x05
enum ECommonNumericType : uint8_t
{
	ECommonNumericType__Number0                                                      = 0,
	ECommonNumericType__Percentage1                                                  = 1,
	ECommonNumericType__Seconds2                                                     = 2,
	ECommonNumericType__Distance3                                                    = 3,
	ECommonNumericType__ECommonNumericType_MAX4                                      = 4
};

/// Enum /Script/CommonUI.ERichTextInlineIconDisplayMode
/// Size: 0x04
enum ERichTextInlineIconDisplayMode : uint8_t
{
	ERichTextInlineIconDisplayMode__IconOnly0                                        = 0,
	ERichTextInlineIconDisplayMode__TextOnly1                                        = 1,
	ERichTextInlineIconDisplayMode__IconAndText2                                     = 2,
	ERichTextInlineIconDisplayMode__MAX3                                             = 3
};

/// Enum /Script/CommonUI.EInputActionState
/// Size: 0x05
enum EInputActionState : uint8_t
{
	EInputActionState__Enabled0                                                      = 0,
	EInputActionState__Disabled1                                                     = 1,
	EInputActionState__Hidden2                                                       = 2,
	EInputActionState__HiddenAndDisabled3                                            = 3,
	EInputActionState__EInputActionState_MAX4                                        = 4
};

/// Enum /Script/CommonUI.ECommonSwitcherTransition
/// Size: 0x05
enum ECommonSwitcherTransition : uint8_t
{
	ECommonSwitcherTransition__FadeOnly0                                             = 0,
	ECommonSwitcherTransition__Horizontal1                                           = 1,
	ECommonSwitcherTransition__Vertical2                                             = 2,
	ECommonSwitcherTransition__Zoom3                                                 = 3,
	ECommonSwitcherTransition__ECommonSwitcherTransition_MAX4                        = 4
};

/// Enum /Script/CommonUI.ETransitionCurve
/// Size: 0x08
enum ETransitionCurve : uint8_t
{
	ETransitionCurve__Linear0                                                        = 0,
	ETransitionCurve__QuadIn1                                                        = 1,
	ETransitionCurve__QuadOut2                                                       = 2,
	ETransitionCurve__QuadInOut3                                                     = 3,
	ETransitionCurve__CubicIn4                                                       = 4,
	ETransitionCurve__CubicOut5                                                      = 5,
	ETransitionCurve__CubicInOut6                                                    = 6,
	ETransitionCurve__ETransitionCurve_MAX7                                          = 7
};

