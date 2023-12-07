
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package UMG.

/// Struct /Script/UMG.FieldNotificationId
/// Size: 0x0008 (0x000000 - 0x000008)
struct FFieldNotificationId
{ 
	FName                                              FieldName;                                                  // 0x0000   (0x0008)  
};

/// Struct /Script/UMG.EventReply
/// Size: 0x00B8 (0x000000 - 0x0000B8)
struct FEventReply
{ 
	unsigned char                                      UnknownData00_1[0xB8];                                      // 0x0000   (0x00B8)  MISSED
};

/// Struct /Script/UMG.WidgetTransform
/// Size: 0x0038 (0x000000 - 0x000038)
struct FWidgetTransform
{ 
	FVector2D                                          Translation;                                                // 0x0000   (0x0010)  
	FVector2D                                          Scale;                                                      // 0x0010   (0x0010)  
	FVector2D                                          Shear;                                                      // 0x0020   (0x0010)  
	float                                              angle;                                                      // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Struct /Script/UMG.ShapedTextOptions
/// Size: 0x0003 (0x000000 - 0x000003)
struct FShapedTextOptions
{ 
	bool                                               bOverride_TextShapingMethod : 1;                            // 0x0000:0 (0x0001)  
	bool                                               bOverride_TextFlowDirection : 1;                            // 0x0000:1 (0x0001)  
	ETextShapingMethod                                 TextShapingMethod;                                          // 0x0001   (0x0001)  
	ETextFlowDirection                                 TextFlowDirection;                                          // 0x0002   (0x0001)  
};

/// Struct /Script/UMG.PaintContext
/// Size: 0x0030 (0x000000 - 0x000030)
struct FPaintContext
{ 
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0000   (0x0030)  MISSED
};

/// Struct /Script/UMG.AnimationEventBinding
/// Size: 0x0028 (0x000000 - 0x000028)
struct FAnimationEventBinding
{ 
	UWidgetAnimation*                                  Animation;                                                  // 0x0000   (0x0008)  
	FDelegateProperty                                  Delegate;                                                   // 0x0008   (0x0010)  
	EWidgetAnimationEvent                              AnimationEvent;                                             // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0019   (0x0003)  MISSED
	FName                                              UserTag;                                                    // 0x001C   (0x0008)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/UMG.NamedSlotBinding
/// Size: 0x0010 (0x000000 - 0x000010)
struct FNamedSlotBinding
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
	UWidget*                                           Content;                                                    // 0x0008   (0x0008)  
};

/// Struct /Script/UMG.RadialBoxSettings
/// Size: 0x0010 (0x000000 - 0x000010)
struct FRadialBoxSettings
{ 
	float                                              StartingAngle;                                              // 0x0000   (0x0004)  
	bool                                               bDistributeItemsEvenly;                                     // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0005   (0x0003)  MISSED
	float                                              AngleBetweenItems;                                          // 0x0008   (0x0004)  
	float                                              SectorCentralAngle;                                         // 0x000C   (0x0004)  
};

/// Struct /Script/UMG.SlateChildSize
/// Size: 0x0008 (0x000000 - 0x000008)
struct FSlateChildSize
{ 
	float                                              Value;                                                      // 0x0000   (0x0004)  
	TEnumAsByte<ESlateSizeRule>                        SizeRule;                                                   // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0005   (0x0003)  MISSED
};

/// Struct /Script/UMG.WidgetNavigationData
/// Size: 0x0024 (0x000000 - 0x000024)
struct FWidgetNavigationData
{ 
	EUINavigationRule                                  Rule;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	FName                                              WidgetToFocus;                                              // 0x0004   (0x0008)  
	TWeakObjectPtr<UWidget*>                           Widget;                                                     // 0x000C   (0x0008)  
	FDelegateProperty                                  CustomDelegate;                                             // 0x0014   (0x0010)  
};

/// Struct /Script/UMG.MovieScene2DTransformMask
/// Size: 0x0004 (0x000000 - 0x000004)
struct FMovieScene2DTransformMask
{ 
	uint32_t                                           Mask;                                                       // 0x0000   (0x0004)  
};

/// Struct /Script/UMG.SequenceTickManagerWidgetData
/// Size: 0x0002 (0x000000 - 0x000002)
struct FSequenceTickManagerWidgetData
{ 
	unsigned char                                      UnknownData00_1[0x2];                                       // 0x0000   (0x0002)  MISSED
};

/// Struct /Script/UMG.WidgetAnimationBinding
/// Size: 0x0024 (0x000000 - 0x000024)
struct FWidgetAnimationBinding
{ 
	FName                                              WidgetName;                                                 // 0x0000   (0x0008)  
	FName                                              SlotWidgetName;                                             // 0x0008   (0x0008)  
	FGuid                                              AnimationGuid;                                              // 0x0010   (0x0010)  
	bool                                               bIsRootWidget;                                              // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0021   (0x0003)  MISSED
};

/// Struct /Script/UMG.BlueprintWidgetAnimationDelegateBinding
/// Size: 0x001C (0x000000 - 0x00001C)
struct FBlueprintWidgetAnimationDelegateBinding
{ 
	EWidgetAnimationEvent                              Action;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	FName                                              AnimationToBind;                                            // 0x0004   (0x0008)  
	FName                                              FunctionNameToBind;                                         // 0x000C   (0x0008)  
	FName                                              UserTag;                                                    // 0x0014   (0x0008)  
};

/// Struct /Script/UMG.DynamicPropertyPath
/// Size: 0x0000 (0x000038 - 0x000038)
struct FDynamicPropertyPath : FCachedPropertyPath
{ 
};

/// Struct /Script/UMG.GameViewportWidgetSlot
/// Size: 0x0048 (0x000000 - 0x000048)
struct FGameViewportWidgetSlot
{ 
	FAnchors                                           Anchors;                                                    // 0x0000   (0x0020)  
	FMargin                                            Offsets;                                                    // 0x0020   (0x0010)  
	FVector2D                                          Alignment;                                                  // 0x0030   (0x0010)  
	int32_t                                            ZOrder;                                                     // 0x0040   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0044   (0x0004)  MISSED
};

/// Struct /Script/UMG.UserWidgetPool
/// Size: 0x0088 (0x000000 - 0x000088)
struct FUserWidgetPool
{ 
	TArray<UUserWidget*>                               ActiveWidgets;                                              // 0x0000   (0x0010)  
	TArray<UUserWidget*>                               InactiveWidgets;                                            // 0x0010   (0x0010)  
	unsigned char                                      UnknownData00_6[0x68];                                      // 0x0020   (0x0068)  MISSED
};

/// Struct /Script/UMG.AnchorData
/// Size: 0x0040 (0x000000 - 0x000040)
struct FAnchorData
{ 
	FMargin                                            Offsets;                                                    // 0x0000   (0x0010)  
	FAnchors                                           Anchors;                                                    // 0x0010   (0x0020)  
	FVector2D                                          Alignment;                                                  // 0x0030   (0x0010)  
};

/// Struct /Script/UMG.RichTextStyleRow
/// Size: 0x0348 (0x000008 - 0x000350)
struct FRichTextStyleRow : FTableRowBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTextBlockStyle                                    TextStyle;                                                  // 0x0010   (0x0340)  
};

/// Struct /Script/UMG.RichImageRow
/// Size: 0x00D8 (0x000008 - 0x0000E0)
struct FRichImageRow : FTableRowBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FSlateBrush                                        Brush;                                                      // 0x0010   (0x00D0)  
};

/// Struct /Script/UMG.WidgetComponentInstanceData
/// Size: 0x0010 (0x0000B8 - 0x0000C8)
struct FWidgetComponentInstanceData : FSceneComponentInstanceData
{ 
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x00B8   (0x0010)  MISSED
};

/// Struct /Script/UMG.SlateMeshVertex
/// Size: 0x003C (0x000000 - 0x00003C)
struct FSlateMeshVertex
{ 
	FVector2f                                          Position;                                                   // 0x0000   (0x0008)  
	FColor                                             Color;                                                      // 0x0008   (0x0004)  
	FVector2f                                          UV0;                                                        // 0x000C   (0x0008)  
	FVector2f                                          UV1;                                                        // 0x0014   (0x0008)  
	FVector2f                                          UV2;                                                        // 0x001C   (0x0008)  
	FVector2f                                          UV3;                                                        // 0x0024   (0x0008)  
	FVector2f                                          UV4;                                                        // 0x002C   (0x0008)  
	FVector2f                                          UV5;                                                        // 0x0034   (0x0008)  
};

/// Struct /Script/UMG.DelegateRuntimeBinding
/// Size: 0x0060 (0x000000 - 0x000060)
struct FDelegateRuntimeBinding
{ 
	FString                                            ObjectName;                                                 // 0x0000   (0x0010)  
	FName                                              PropertyName;                                               // 0x0010   (0x0008)  
	FName                                              FunctionName;                                               // 0x0018   (0x0008)  
	FDynamicPropertyPath                               SourcePath;                                                 // 0x0020   (0x0038)  
	EBindingKind                                       Kind;                                                       // 0x0058   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0059   (0x0007)  MISSED
};

/// Class /Script/UMG.Visual
/// Size: 0x0000 (0x000028 - 0x000028)
class UVisual : public UObject : UObject
{ 
public:
};

/// Class /Script/UMG.Widget
/// Size: 0x0128 (0x000028 - 0x000150)
class UWidget : public UVisual : UVisual
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0028   (0x0008)  MISSED
	UPanelSlot*                                        Slot;                                                       // 0x0030   (0x0008)  
	FDelegateProperty                                  bIsEnabledDelegate;                                         // 0x0038   (0x0010)  
	FText                                              ToolTipText;                                                // 0x0048   (0x0018)  
	FDelegateProperty                                  ToolTipTextDelegate;                                        // 0x0060   (0x0010)  
	UWidget*                                           ToolTipWidget;                                              // 0x0070   (0x0008)  
	FDelegateProperty                                  ToolTipWidgetDelegate;                                      // 0x0078   (0x0010)  
	FDelegateProperty                                  VisibilityDelegate;                                         // 0x0088   (0x0010)  
	FWidgetTransform                                   RenderTransform;                                            // 0x0098   (0x0038)  
	FVector2D                                          RenderTransformPivot;                                       // 0x00D0   (0x0010)  
	EFlowDirectionPreference                           FlowDirectionPreference;                                    // 0x00E0   (0x0001)  
	bool                                               bIsVariable : 1;                                            // 0x00E1:0 (0x0001)  
	bool                                               bCreatedByConstructionScript : 1;                           // 0x00E1:1 (0x0001)  
	bool                                               bIsEnabled : 1;                                             // 0x00E1:2 (0x0001)  
	bool                                               bOverride_Cursor : 1;                                       // 0x00E1:3 (0x0001)  
	bool                                               bIsVolatile : 1;                                            // 0x00E1:4 (0x0001)  
	TEnumAsByte<EMouseCursor>                          Cursor;                                                     // 0x00E2   (0x0001)  
	EWidgetClipping                                    Clipping;                                                   // 0x00E3   (0x0001)  
	ESlateVisibility                                   Visibility;                                                 // 0x00E4   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x00E5   (0x0003)  MISSED
	float                                              RenderOpacity;                                              // 0x00E8   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x00EC   (0x0004)  MISSED
	USlateAccessibleWidgetData*                        AccessibleWidgetData;                                       // 0x00F0   (0x0008)  
	UWidgetNavigation*                                 Navigation;                                                 // 0x00F8   (0x0008)  
	unsigned char                                      UnknownData03_5[0x20];                                      // 0x0100   (0x0020)  MISSED
	TArray<UPropertyBinding*>                          NativeBindings;                                             // 0x0120   (0x0010)  
	unsigned char                                      UnknownData04_6[0x20];                                      // 0x0130   (0x0020)  MISSED


	/// Functions
	// Function /Script/UMG.Widget.SetVisibility
	void SetVisibility(ESlateVisibility InVisibility);                                                                       // [0x3a65430] Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetUserFocus
	void SetUserFocus(APlayerController* PlayerController);                                                                  // [0x3a64bc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetToolTipText
	void SetToolTipText(FText& InToolTipText);                                                                               // [0x3a64a50] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.Widget.SetToolTip
	void SetToolTip(UWidget* Widget);                                                                                        // [0x3a649c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetRenderTranslation
	void SetRenderTranslation(FVector2D Translation);                                                                        // [0x3a624e0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Widget.SetRenderTransformPivot
	void SetRenderTransformPivot(FVector2D Pivot);                                                                           // [0x3a62450] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Widget.SetRenderTransformAngle
	void SetRenderTransformAngle(float angle);                                                                               // [0x3a623c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetRenderTransform
	void SetRenderTransform(FWidgetTransform InTransform);                                                                   // [0x3a622f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetRenderShear
	void SetRenderShear(FVector2D Shear);                                                                                    // [0x3a62270] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Widget.SetRenderScale
	void SetRenderScale(FVector2D Scale);                                                                                    // [0x3a621f0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Widget.SetRenderOpacity
	void SetRenderOpacity(float InOpacity);                                                                                  // [0x3a62170] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetNavigationRuleExplicit
	void SetNavigationRuleExplicit(EUINavigation Direction, UWidget* InWidget);                                              // [0x3a61590] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetNavigationRuleCustomBoundary
	void SetNavigationRuleCustomBoundary(EUINavigation Direction, FDelegateProperty InCustomDelegate);                       // [0x3a61490] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetNavigationRuleCustom
	void SetNavigationRuleCustom(EUINavigation Direction, FDelegateProperty InCustomDelegate);                               // [0x3a61390] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetNavigationRuleBase
	void SetNavigationRuleBase(EUINavigation Direction, EUINavigationRule Rule);                                             // [0x3a61280] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetNavigationRule
	void SetNavigationRule(EUINavigation Direction, EUINavigationRule Rule, FName WidgetToFocus);                            // [0x3a61140] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetKeyboardFocus
	void SetKeyboardFocus();                                                                                                 // [0x3a60280] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetIsEnabled
	void SetIsEnabled(bool bInIsEnabled);                                                                                    // [0xbddaa0] Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetFocus
	void SetFocus();                                                                                                         // [0x3a5e900] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetCursor
	void SetCursor(TEnumAsByte<EMouseCursor> InCursor);                                                                      // [0x3a5d750] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetClipping
	void SetClipping(EWidgetClipping InClipping);                                                                            // [0x3a5d160] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetAllNavigationRules
	void SetAllNavigationRules(EUINavigationRule Rule, FName WidgetToFocus);                                                 // [0x3a5bd60] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.ResetCursor
	void ResetCursor();                                                                                                      // [0x3a5b870] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.RemoveFromParent
	void RemoveFromParent();                                                                                                 // [0x1525510] Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.OnReply__DelegateSignature
	FEventReply OnReply__DelegateSignature();                                                                                // [0x2407bf0] Public|Delegate      
	// Function /Script/UMG.Widget.OnPointerEvent__DelegateSignature
	FEventReply OnPointerEvent__DelegateSignature(FGeometry MyGeometry, FPointerEvent& MouseEvent);                          // [0x2407bf0] Public|Delegate|HasOutParms 
	// Function /Script/UMG.Widget.K2_RemoveFieldValueChangedDelegate
	void K2_RemoveFieldValueChangedDelegate(FFieldNotificationId FieldId, FDelegateProperty Delegate);                       // [0x3a5ae00] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.K2_BroadcastFieldValueChanged
	void K2_BroadcastFieldValueChanged(FFieldNotificationId FieldId);                                                        // [0x3a5acb0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/UMG.Widget.K2_AddFieldValueChangedDelegate
	void K2_AddFieldValueChangedDelegate(FFieldNotificationId FieldId, FDelegateProperty Delegate);                          // [0x3a5aaf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.IsVisible
	bool IsVisible();                                                                                                        // [0x3a5aa90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.IsRendered
	bool IsRendered();                                                                                                       // [0x3a5a980] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.IsInViewport
	bool IsInViewport();                                                                                                     // [0x3a5a870] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.IsHovered
	bool IsHovered();                                                                                                        // [0x1525330] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.InvalidateLayoutAndVolatility
	void InvalidateLayoutAndVolatility();                                                                                    // [0x3a5a850] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.HasUserFocusedDescendants
	bool HasUserFocusedDescendants(APlayerController* PlayerController);                                                     // [0x3a5a6b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.HasUserFocus
	bool HasUserFocus(APlayerController* PlayerController);                                                                  // [0x3a5a4f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.HasMouseCaptureByUser
	bool HasMouseCaptureByUser(int32_t UserIndex, int32_t PointerIndex);                                                     // [0x3a5a310] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.HasMouseCapture
	bool HasMouseCapture();                                                                                                  // [0x3a5a210] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.HasKeyboardFocus
	bool HasKeyboardFocus();                                                                                                 // [0x3a5a110] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.HasFocusedDescendants
	bool HasFocusedDescendants();                                                                                            // [0x3a5a010] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.HasAnyUserFocus
	bool HasAnyUserFocus();                                                                                                  // [0x3a59e00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GetWidget__DelegateSignature
	UWidget* GetWidget__DelegateSignature();                                                                                 // [0x2407bf0] Public|Delegate      
	// Function /Script/UMG.Widget.GetVisibility
	ESlateVisibility GetVisibility();                                                                                        // [0x3a59d40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GetTickSpaceGeometry
	FGeometry GetTickSpaceGeometry();                                                                                        // [0x3a58280] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GetText__DelegateSignature
	FText GetText__DelegateSignature();                                                                                      // [0x2407bf0] Public|Delegate      
	// Function /Script/UMG.Widget.GetSlateVisibility__DelegateSignature
	ESlateVisibility GetSlateVisibility__DelegateSignature();                                                                // [0x2407bf0] Public|Delegate      
	// Function /Script/UMG.Widget.GetSlateColor__DelegateSignature
	FSlateColor GetSlateColor__DelegateSignature();                                                                          // [0x2407bf0] Public|Delegate      
	// Function /Script/UMG.Widget.GetSlateBrush__DelegateSignature
	FSlateBrush GetSlateBrush__DelegateSignature();                                                                          // [0x2407bf0] Public|Delegate      
	// Function /Script/UMG.Widget.GetRenderTransformAngle
	float GetRenderTransformAngle();                                                                                         // [0x3a59550] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GetRenderOpacity
	float GetRenderOpacity();                                                                                                // [0x3a59500] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GetParent
	UPanelWidget* GetParent();                                                                                               // [0x3a594a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GetPaintSpaceGeometry
	FGeometry GetPaintSpaceGeometry();                                                                                       // [0x3a593f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GetOwningPlayer
	APlayerController* GetOwningPlayer();                                                                                    // [0x3a593c0] BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GetOwningLocalPlayer
	ULocalPlayer* GetOwningLocalPlayer();                                                                                    // [0x3a59390] BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GetMouseCursor__DelegateSignature
	TEnumAsByte<EMouseCursor> GetMouseCursor__DelegateSignature();                                                           // [0x2407bf0] Public|Delegate      
	// Function /Script/UMG.Widget.GetLinearColor__DelegateSignature
	FLinearColor GetLinearColor__DelegateSignature();                                                                        // [0x2407bf0] Public|Delegate|HasDefaults 
	// Function /Script/UMG.Widget.GetIsEnabled
	bool GetIsEnabled();                                                                                                     // [0x3a58f20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GetInt32__DelegateSignature
	int32_t GetInt32__DelegateSignature();                                                                                   // [0x2407bf0] Public|Delegate      
	// Function /Script/UMG.Widget.GetGameInstance
	UGameInstance* GetGameInstance();                                                                                        // [0x3a58c30] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GetFloat__DelegateSignature
	float GetFloat__DelegateSignature();                                                                                     // [0x2407bf0] Public|Delegate      
	// Function /Script/UMG.Widget.GetDesiredSize
	FVector2D GetDesiredSize();                                                                                              // [0x3a58790] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GetClipping
	EWidgetClipping GetClipping();                                                                                           // [0x3a584c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GetCheckBoxState__DelegateSignature
	ECheckBoxState GetCheckBoxState__DelegateSignature();                                                                    // [0x2407bf0] Public|Delegate      
	// Function /Script/UMG.Widget.GetCachedGeometry
	FGeometry GetCachedGeometry();                                                                                           // [0x3a58280] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GetBool__DelegateSignature
	bool GetBool__DelegateSignature();                                                                                       // [0x2407bf0] Public|Delegate      
	// Function /Script/UMG.Widget.GetAccessibleText
	FText GetAccessibleText();                                                                                               // [0x3a58000] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GetAccessibleSummaryText
	FText GetAccessibleSummaryText();                                                                                        // [0x3a57ee0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GenerateWidgetForString__DelegateSignature
	UWidget* GenerateWidgetForString__DelegateSignature(FString Item);                                                       // [0x2407bf0] Public|Delegate      
	// Function /Script/UMG.Widget.GenerateWidgetForObject__DelegateSignature
	UWidget* GenerateWidgetForObject__DelegateSignature(UObject* Item);                                                      // [0x2407bf0] Public|Delegate      
	// Function /Script/UMG.Widget.ForceVolatile
	void ForceVolatile(bool bForce);                                                                                         // [0x3a57dc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.ForceLayoutPrepass
	void ForceLayoutPrepass();                                                                                               // [0x3a57d20] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.UserWidget
/// Size: 0x0130 (0x000150 - 0x000280)
class UUserWidget : public UWidget : UWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0150   (0x0008)  MISSED
	FLinearColor                                       ColorAndOpacity;                                            // 0x0158   (0x0010)  
	FDelegateProperty                                  ColorAndOpacityDelegate;                                    // 0x0168   (0x0010)  
	FSlateColor                                        ForegroundColor;                                            // 0x0178   (0x0014)  
	FDelegateProperty                                  ForegroundColorDelegate;                                    // 0x018C   (0x0010)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x019C   (0x0004)  MISSED
	FMulticastInlineDelegate                           OnVisibilityChanged;                                        // 0x01A0   (0x0010)  
	unsigned char                                      UnknownData02_5[0x18];                                      // 0x01B0   (0x0018)  MISSED
	FMargin                                            Padding;                                                    // 0x01C8   (0x0010)  
	int32_t                                            Priority;                                                   // 0x01D8   (0x0004)  
	bool                                               bIsFocusable : 1;                                           // 0x01DC:0 (0x0001)  
	bool                                               bStopAction : 1;                                            // 0x01DC:1 (0x0001)  
	unsigned char                                      UnknownData03_4[0x3];                                       // 0x01DD   (0x0003)  MISSED
	TArray<UUMGSequencePlayer*>                        ActiveSequencePlayers;                                      // 0x01E0   (0x0010)  
	UUMGSequenceTickManager*                           AnimationTickManager;                                       // 0x01F0   (0x0008)  
	TArray<UUMGSequencePlayer*>                        StoppedSequencePlayers;                                     // 0x01F8   (0x0010)  
	TArray<FNamedSlotBinding>                          NamedSlotBindings;                                          // 0x0208   (0x0010)  
	TArray<UUserWidgetExtension*>                      Extensions;                                                 // 0x0218   (0x0010)  
	UWidgetTree*                                       WidgetTree;                                                 // 0x0228   (0x0008)  
	bool                                               bHasScriptImplementedTick : 1;                              // 0x0230:0 (0x0001)  
	bool                                               bHasScriptImplementedPaint : 1;                             // 0x0230:1 (0x0001)  
	unsigned char                                      UnknownData04_4[0x17];                                      // 0x0231   (0x0017)  MISSED
	EWidgetTickFrequency                               TickFrequency;                                              // 0x0248   (0x0001)  
	unsigned char                                      UnknownData05_5[0x7];                                       // 0x0249   (0x0007)  MISSED
	UInputComponent*                                   InputComponent;                                             // 0x0250   (0x0008)  
	TArray<FAnimationEventBinding>                     AnimationCallbacks;                                         // 0x0258   (0x0010)  
	unsigned char                                      UnknownData06_6[0x18];                                      // 0x0268   (0x0018)  MISSED


	/// Functions
	// Function /Script/UMG.UserWidget.UnregisterInputComponent
	void UnregisterInputComponent();                                                                                         // [0x3a98b30] Final|Native|Protected|BlueprintCallable 
	// Function /Script/UMG.UserWidget.UnbindFromAnimationStarted
	void UnbindFromAnimationStarted(UWidgetAnimation* Animation, FDelegateProperty Delegate);                                // [0x3a987c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.UnbindFromAnimationFinished
	void UnbindFromAnimationFinished(UWidgetAnimation* Animation, FDelegateProperty Delegate);                               // [0x3a98600] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.UnbindAllFromAnimationStarted
	void UnbindAllFromAnimationStarted(UWidgetAnimation* Animation);                                                         // [0x3a98480] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.UnbindAllFromAnimationFinished
	void UnbindAllFromAnimationFinished(UWidgetAnimation* Animation);                                                        // [0x3a98300] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.Tick
	void Tick(FGeometry MyGeometry, float InDeltaTime);                                                                      // [0x2407bf0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.StopListeningForInputAction
	void StopListeningForInputAction(FName ActionName, TEnumAsByte<EInputEvent> EventType);                                  // [0x3a97cb0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/UMG.UserWidget.StopListeningForAllInputActions
	void StopListeningForAllInputActions();                                                                                  // [0x3a97c90] Final|Native|Protected|BlueprintCallable 
	// Function /Script/UMG.UserWidget.StopAnimationsAndLatentActions
	void StopAnimationsAndLatentActions();                                                                                   // [0x3a97c60] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.StopAnimation
	void StopAnimation(UWidgetAnimation* InAnimation);                                                                       // [0x3a97b80] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.StopAllAnimations
	void StopAllAnimations();                                                                                                // [0x3a97b60] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.SetPositionInViewport
	void SetPositionInViewport(FVector2D Position, bool bRemoveDPIScale);                                                    // [0x3a96990] Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.UserWidget.SetPlaybackSpeed
	void SetPlaybackSpeed(UWidgetAnimation* InAnimation, float PlaybackSpeed);                                               // [0x3a96870] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.SetPadding
	void SetPadding(FMargin InPadding);                                                                                      // [0x3a965e0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.SetOwningPlayer
	void SetOwningPlayer(APlayerController* LocalPlayerController);                                                          // [0x3a96530] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.SetNumLoopsToPlay
	void SetNumLoopsToPlay(UWidgetAnimation* InAnimation, int32_t NumLoopsToPlay);                                           // [0x3a96420] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.SetInputActionPriority
	void SetInputActionPriority(int32_t NewPriority);                                                                        // [0x3a95ca0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/UMG.UserWidget.SetInputActionBlocking
	void SetInputActionBlocking(bool bShouldBlock);                                                                          // [0x3a95be0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/UMG.UserWidget.SetForegroundColor
	void SetForegroundColor(FSlateColor InForegroundColor);                                                                  // [0x3a95680] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.SetDesiredSizeInViewport
	void SetDesiredSizeInViewport(FVector2D Size);                                                                           // [0x3a95270] Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.UserWidget.SetColorAndOpacity
	void SetColorAndOpacity(FLinearColor InColorAndOpacity);                                                                 // [0x3a94ed0] Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.UserWidget.SetAnimationCurrentTime
	void SetAnimationCurrentTime(UWidgetAnimation* InAnimation, float InTime);                                               // [0x3a94be0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.SetAnchorsInViewport
	void SetAnchorsInViewport(FAnchors Anchors);                                                                             // [0x3a94a70] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.SetAlignmentInViewport
	void SetAlignmentInViewport(FVector2D Alignment);                                                                        // [0x3a94920] Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.UserWidget.ReverseAnimation
	void ReverseAnimation(UWidgetAnimation* InAnimation);                                                                    // [0x3a940a0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.RemoveFromViewport
	void RemoveFromViewport();                                                                                               // [0x1525510] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.RemoveExtensions
	void RemoveExtensions(UClass* InExtensionType);                                                                          // [0x3a93f30] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.RemoveExtension
	void RemoveExtension(UUserWidgetExtension* InExtension);                                                                 // [0x3a93de0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.RegisterInputComponent
	void RegisterInputComponent();                                                                                           // [0x3a93970] Final|Native|Protected|BlueprintCallable 
	// Function /Script/UMG.UserWidget.PreConstruct
	void PreConstruct(bool IsDesignTime);                                                                                    // [0x2407bf0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.PlaySound
	void PlaySound(USoundBase* SoundToPlay);                                                                                 // [0x3a93330] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.PlayAnimationTimeRange
	UUMGSequencePlayer* PlayAnimationTimeRange(UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int32_t NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode> PlayMode, float PlaybackSpeed, bool bRestoreState); // [0x3a92f40] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.PlayAnimationReverse
	UUMGSequencePlayer* PlayAnimationReverse(UWidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState);        // [0x3a92c10] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.PlayAnimationForward
	UUMGSequencePlayer* PlayAnimationForward(UWidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState);        // [0x3a928e0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.PlayAnimation
	UUMGSequencePlayer* PlayAnimation(UWidgetAnimation* InAnimation, float StartAtTime, int32_t NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode> PlayMode, float PlaybackSpeed, bool bRestoreState); // [0x3a92710] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.PauseAnimation
	float PauseAnimation(UWidgetAnimation* InAnimation);                                                                     // [0x3a925d0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.OnTouchStarted
	FEventReply OnTouchStarted(FGeometry MyGeometry, FPointerEvent& InTouchEvent);                                           // [0x2407bf0] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnTouchMoved
	FEventReply OnTouchMoved(FGeometry MyGeometry, FPointerEvent& InTouchEvent);                                             // [0x2407bf0] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnTouchGesture
	FEventReply OnTouchGesture(FGeometry MyGeometry, FPointerEvent& GestureEvent);                                           // [0x2407bf0] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnTouchForceChanged
	FEventReply OnTouchForceChanged(FGeometry MyGeometry, FPointerEvent& InTouchEvent);                                      // [0x2407bf0] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnTouchEnded
	FEventReply OnTouchEnded(FGeometry MyGeometry, FPointerEvent& InTouchEvent);                                             // [0x2407bf0] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnRemovedFromFocusPath
	void OnRemovedFromFocusPath(FFocusEvent InFocusEvent);                                                                   // [0x2407bf0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnPreviewMouseButtonDown
	FEventReply OnPreviewMouseButtonDown(FGeometry MyGeometry, FPointerEvent& MouseEvent);                                   // [0x2407bf0] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnPreviewKeyDown
	FEventReply OnPreviewKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);                                                // [0x2407bf0] Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnPaint
	void OnPaint(FPaintContext& Context);                                                                                    // [0x2407bf0] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent|Const 
	// Function /Script/UMG.UserWidget.OnMouseWheel
	FEventReply OnMouseWheel(FGeometry MyGeometry, FPointerEvent& MouseEvent);                                               // [0x2407bf0] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnMouseMove
	FEventReply OnMouseMove(FGeometry MyGeometry, FPointerEvent& MouseEvent);                                                // [0x2407bf0] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnMouseLeave
	void OnMouseLeave(FPointerEvent& MouseEvent);                                                                            // [0x2407bf0] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnMouseEnter
	void OnMouseEnter(FGeometry MyGeometry, FPointerEvent& MouseEvent);                                                      // [0x2407bf0] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnMouseCaptureLost
	void OnMouseCaptureLost();                                                                                               // [0x2407bf0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnMouseButtonUp
	FEventReply OnMouseButtonUp(FGeometry MyGeometry, FPointerEvent& MouseEvent);                                            // [0x2407bf0] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnMouseButtonDown
	FEventReply OnMouseButtonDown(FGeometry MyGeometry, FPointerEvent& MouseEvent);                                          // [0x2407bf0] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnMouseButtonDoubleClick
	FEventReply OnMouseButtonDoubleClick(FGeometry InMyGeometry, FPointerEvent& InMouseEvent);                               // [0x2407bf0] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnMotionDetected
	FEventReply OnMotionDetected(FGeometry MyGeometry, FMotionEvent InMotionEvent);                                          // [0x2407bf0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnKeyUp
	FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);                                                         // [0x2407bf0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnKeyDown
	FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);                                                       // [0x2407bf0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnKeyChar
	FEventReply OnKeyChar(FGeometry MyGeometry, FCharacterEvent InCharacterEvent);                                           // [0x2407bf0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnInitialized
	void OnInitialized();                                                                                                    // [0x2407bf0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnFocusReceived
	FEventReply OnFocusReceived(FGeometry MyGeometry, FFocusEvent InFocusEvent);                                             // [0x2407bf0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnFocusLost
	void OnFocusLost(FFocusEvent InFocusEvent);                                                                              // [0x2407bf0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnDrop
	bool OnDrop(FGeometry MyGeometry, FPointerEvent PointerEvent, UDragDropOperation* Operation);                            // [0x2407bf0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnDragOver
	bool OnDragOver(FGeometry MyGeometry, FPointerEvent PointerEvent, UDragDropOperation* Operation);                        // [0x2407bf0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnDragLeave
	void OnDragLeave(FPointerEvent PointerEvent, UDragDropOperation* Operation);                                             // [0x2407bf0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnDragEnter
	void OnDragEnter(FGeometry MyGeometry, FPointerEvent PointerEvent, UDragDropOperation* Operation);                       // [0x2407bf0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnDragDetected
	void OnDragDetected(FGeometry MyGeometry, FPointerEvent& PointerEvent, UDragDropOperation*& Operation);                  // [0x2407bf0] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnDragCancelled
	void OnDragCancelled(FPointerEvent& PointerEvent, UDragDropOperation* Operation);                                        // [0x2407bf0] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnAnimationStarted
	void OnAnimationStarted(UWidgetAnimation* Animation);                                                                    // [0x3a92540] BlueprintCosmetic|Native|Event|Protected|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnAnimationFinished
	void OnAnimationFinished(UWidgetAnimation* Animation);                                                                   // [0x3a924b0] BlueprintCosmetic|Native|Event|Protected|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnAnalogValueChanged
	FEventReply OnAnalogValueChanged(FGeometry MyGeometry, FAnalogInputEvent InAnalogInputEvent);                            // [0x2407bf0] Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnAddedToFocusPath
	void OnAddedToFocusPath(FFocusEvent InFocusEvent);                                                                       // [0x2407bf0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.ListenForInputAction
	void ListenForInputAction(FName ActionName, TEnumAsByte<EInputEvent> EventType, bool bConsume, FDelegateProperty Callback); // [0x3a91740] Final|Native|Protected|BlueprintCallable 
	// Function /Script/UMG.UserWidget.IsPlayingAnimation
	bool IsPlayingAnimation();                                                                                               // [0x3a91350] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.UserWidget.IsListeningForInputAction
	bool IsListeningForInputAction(FName ActionName);                                                                        // [0x3a91490] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.UserWidget.IsInteractable
	bool IsInteractable();                                                                                                   // [0x2407bf0] BlueprintCosmetic|Event|Public|BlueprintEvent|Const 
	// Function /Script/UMG.UserWidget.IsAnyAnimationPlaying
	bool IsAnyAnimationPlaying();                                                                                            // [0x3a91350] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.UserWidget.IsAnimationPlayingForward
	bool IsAnimationPlayingForward(UWidgetAnimation* InAnimation);                                                           // [0x3a91280] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.IsAnimationPlaying
	bool IsAnimationPlaying(UWidgetAnimation* InAnimation);                                                                  // [0x3a91190] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.UserWidget.GetOwningPlayerPawn
	APawn* GetOwningPlayerPawn();                                                                                            // [0x3a90c20] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.UserWidget.GetOwningPlayerCameraManager
	APlayerCameraManager* GetOwningPlayerCameraManager();                                                                    // [0x3a90bd0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.UserWidget.GetIsVisible
	bool GetIsVisible();                                                                                                     // [0x3a90260] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.UserWidget.GetExtensions
	TArray<UUserWidgetExtension*> GetExtensions(UClass* ExtensionType);                                                      // [0x3a8fc20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.UserWidget.GetExtension
	UUserWidgetExtension* GetExtension(UClass* ExtensionType);                                                               // [0x3a8fb10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.UserWidget.GetAnimationCurrentTime
	float GetAnimationCurrentTime(UWidgetAnimation* InAnimation);                                                            // [0x3a8f4b0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.UserWidget.GetAnchorsInViewport
	FAnchors GetAnchorsInViewport();                                                                                         // [0x3a8f430] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.UserWidget.GetAlignmentInViewport
	FVector2D GetAlignmentInViewport();                                                                                      // [0x3a8ed30] Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.UserWidget.FlushAnimations
	void FlushAnimations();                                                                                                  // [0x3a8eb10] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.Destruct
	void Destruct();                                                                                                         // [0x2407bf0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.Construct
	void Construct();                                                                                                        // [0x2407bf0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.CancelLatentActions
	void CancelLatentActions();                                                                                              // [0x3a8c150] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.BindToAnimationStarted
	void BindToAnimationStarted(UWidgetAnimation* Animation, FDelegateProperty Delegate);                                    // [0x3a8c000] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.BindToAnimationFinished
	void BindToAnimationFinished(UWidgetAnimation* Animation, FDelegateProperty Delegate);                                   // [0x3a8bed0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.BindToAnimationEvent
	void BindToAnimationEvent(UWidgetAnimation* Animation, FDelegateProperty Delegate, EWidgetAnimationEvent AnimationEvent, FName UserTag); // [0x3a8bd20] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.AddToViewport
	void AddToViewport(int32_t ZOrder);                                                                                      // [0x3a8bbf0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.AddToPlayerScreen
	bool AddToPlayerScreen(int32_t ZOrder);                                                                                  // [0x3a8bb50] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.AddExtension
	UUserWidgetExtension* AddExtension(UClass* InExtensionType);                                                             // [0x3a8b980] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.UserWidgetExtension
/// Size: 0x0000 (0x000028 - 0x000028)
class UUserWidgetExtension : public UObject : UObject
{ 
public:
};

/// Class /Script/UMG.WidgetBlueprintGeneratedClassExtension
/// Size: 0x0000 (0x000028 - 0x000028)
class UWidgetBlueprintGeneratedClassExtension : public UObject : UObject
{ 
public:
};

/// Class /Script/UMG.Slider
/// Size: 0x05B0 (0x000150 - 0x000700)
class USlider : public UWidget : UWidget
{ 
public:
	float                                              Value;                                                      // 0x0150   (0x0004)  
	FDelegateProperty                                  ValueDelegate;                                              // 0x0154   (0x0010)  
	float                                              MinValue;                                                   // 0x0164   (0x0004)  
	float                                              MaxValue;                                                   // 0x0168   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x016C   (0x0004)  MISSED
	FSliderStyle                                       WidgetStyle;                                                // 0x0170   (0x0500)  
	TEnumAsByte<EOrientation>                          Orientation;                                                // 0x0670   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0671   (0x0003)  MISSED
	FLinearColor                                       SliderBarColor;                                             // 0x0674   (0x0010)  
	FLinearColor                                       SliderHandleColor;                                          // 0x0684   (0x0010)  
	bool                                               IndentHandle;                                               // 0x0694   (0x0001)  
	bool                                               Locked;                                                     // 0x0695   (0x0001)  
	bool                                               MouseUsesStep;                                              // 0x0696   (0x0001)  
	bool                                               RequiresControllerLock;                                     // 0x0697   (0x0001)  
	float                                              StepSize;                                                   // 0x0698   (0x0004)  
	bool                                               IsFocusable;                                                // 0x069C   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x069D   (0x0003)  MISSED
	FMulticastInlineDelegate                           OnMouseCaptureBegin;                                        // 0x06A0   (0x0010)  
	FMulticastInlineDelegate                           OnMouseCaptureEnd;                                          // 0x06B0   (0x0010)  
	FMulticastInlineDelegate                           OnControllerCaptureBegin;                                   // 0x06C0   (0x0010)  
	FMulticastInlineDelegate                           OnControllerCaptureEnd;                                     // 0x06D0   (0x0010)  
	FMulticastInlineDelegate                           OnValueChanged;                                             // 0x06E0   (0x0010)  
	unsigned char                                      UnknownData03_6[0x10];                                      // 0x06F0   (0x0010)  MISSED


	/// Functions
	// Function /Script/UMG.Slider.SetValue
	void SetValue(float InValue);                                                                                            // [0x3a64de0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Slider.SetStepSize
	void SetStepSize(float InValue);                                                                                         // [0x3a63a70] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Slider.SetSliderHandleColor
	void SetSliderHandleColor(FLinearColor InValue);                                                                         // [0x3a63830] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Slider.SetSliderBarColor
	void SetSliderBarColor(FLinearColor InValue);                                                                            // [0x3a63780] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Slider.SetMinValue
	void SetMinValue(float InValue);                                                                                         // [0x3a60f90] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Slider.SetMaxValue
	void SetMaxValue(float InValue);                                                                                         // [0x3a60890] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Slider.SetLocked
	void SetLocked(bool InValue);                                                                                            // [0x3a60400] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Slider.SetIndentHandle
	void SetIndentHandle(bool InValue);                                                                                      // [0x3a5fa00] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Slider.GetValue
	float GetValue();                                                                                                        // [0x3a59b10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Slider.GetNormalizedValue
	float GetNormalizedValue();                                                                                              // [0x3a59270] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.PanelWidget
/// Size: 0x0018 (0x000150 - 0x000168)
class UPanelWidget : public UWidget : UWidget
{ 
public:
	TArray<UPanelSlot*>                                Slots;                                                      // 0x0150   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0160   (0x0008)  MISSED


	/// Functions
	// Function /Script/UMG.PanelWidget.RemoveChildAt
	bool RemoveChildAt(int32_t Index);                                                                                       // [0x3a5b4a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.PanelWidget.RemoveChild
	bool RemoveChild(UWidget* Content);                                                                                      // [0x3a5b3b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.PanelWidget.HasChild
	bool HasChild(UWidget* Content);                                                                                         // [0x3a59f10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.PanelWidget.HasAnyChildren
	bool HasAnyChildren();                                                                                                   // [0x16c2350] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.PanelWidget.GetChildrenCount
	int32_t GetChildrenCount();                                                                                              // [0x334d9b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.PanelWidget.GetChildIndex
	int32_t GetChildIndex(UWidget* Content);                                                                                 // [0x3a583d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.PanelWidget.GetChildAt
	UWidget* GetChildAt(int32_t Index);                                                                                      // [0x3a58310] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.PanelWidget.GetAllChildren
	TArray<UWidget*> GetAllChildren();                                                                                       // [0x3a58120] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.PanelWidget.ClearChildren
	void ClearChildren();                                                                                                    // [0x3a576a0] Native|Public|BlueprintCallable 
	// Function /Script/UMG.PanelWidget.AddChild
	UPanelSlot* AddChild(UWidget* Content);                                                                                  // [0x3a55c00] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.WidgetSwitcher
/// Size: 0x0018 (0x000168 - 0x000180)
class UWidgetSwitcher : public UPanelWidget : UPanelWidget
{ 
public:
	int32_t                                            ActiveWidgetIndex;                                          // 0x0168   (0x0004)  
	unsigned char                                      UnknownData00_6[0x14];                                      // 0x016C   (0x0014)  MISSED


	/// Functions
	// Function /Script/UMG.WidgetSwitcher.SetActiveWidgetIndex
	void SetActiveWidgetIndex(int32_t Index);                                                                                // [0x16c3980] Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetSwitcher.SetActiveWidget
	void SetActiveWidget(UWidget* Widget);                                                                                   // [0x16c3850] Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetSwitcher.GetWidgetAtIndex
	UWidget* GetWidgetAtIndex(int32_t Index);                                                                                // [0x16c1b10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetSwitcher.GetNumWidgets
	int32_t GetNumWidgets();                                                                                                 // [0x3a90b80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetSwitcher.GetActiveWidgetIndex
	int32_t GetActiveWidgetIndex();                                                                                          // [0x3a8ed00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetSwitcher.GetActiveWidget
	UWidget* GetActiveWidget();                                                                                              // [0x3a8ec90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.ContentWidget
/// Size: 0x0000 (0x000168 - 0x000168)
class UContentWidget : public UPanelWidget : UPanelWidget
{ 
public:
};

/// Class /Script/UMG.Border
/// Size: 0x01A8 (0x000168 - 0x000310)
class UBorder : public UContentWidget : UContentWidget
{ 
public:
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                        // 0x0168   (0x0001)  
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                          // 0x0169   (0x0001)  
	bool                                               bShowEffectWhenDisabled : 1;                                // 0x016A:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x1];                                       // 0x016B   (0x0001)  MISSED
	FLinearColor                                       ContentColorAndOpacity;                                     // 0x016C   (0x0010)  
	FDelegateProperty                                  ContentColorAndOpacityDelegate;                             // 0x017C   (0x0010)  
	FMargin                                            Padding;                                                    // 0x018C   (0x0010)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x019C   (0x0004)  MISSED
	FSlateBrush                                        Background;                                                 // 0x01A0   (0x00D0)  
	FDelegateProperty                                  BackgroundDelegate;                                         // 0x0270   (0x0010)  
	FLinearColor                                       BrushColor;                                                 // 0x0280   (0x0010)  
	FDelegateProperty                                  BrushColorDelegate;                                         // 0x0290   (0x0010)  
	FVector2D                                          DesiredSizeScale;                                           // 0x02A0   (0x0010)  
	bool                                               bFlipForRightToLeftFlowDirection;                           // 0x02B0   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x02B1   (0x0003)  MISSED
	FDelegateProperty                                  OnMouseButtonDownEvent;                                     // 0x02B4   (0x0010)  
	FDelegateProperty                                  OnMouseButtonUpEvent;                                       // 0x02C4   (0x0010)  
	FDelegateProperty                                  OnMouseMoveEvent;                                           // 0x02D4   (0x0010)  
	FDelegateProperty                                  OnMouseDoubleClickEvent;                                    // 0x02E4   (0x0010)  
	unsigned char                                      UnknownData03_6[0x1C];                                      // 0x02F4   (0x001C)  MISSED


	/// Functions
	// Function /Script/UMG.Border.SetVerticalAlignment
	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                          // [0x3a0c990] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Border.SetShowEffectWhenDisabled
	void SetShowEffectWhenDisabled(bool bInShowEffectWhenDisabled);                                                          // [0x3a0c2d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Border.SetPadding
	void SetPadding(FMargin InPadding);                                                                                      // [0x3a0b9e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Border.SetHorizontalAlignment
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                    // [0x3a0ae60] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Border.SetDesiredSizeScale
	void SetDesiredSizeScale(FVector2D InScale);                                                                             // [0x3a0a860] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Border.SetContentColorAndOpacity
	void SetContentColorAndOpacity(FLinearColor InContentColorAndOpacity);                                                   // [0x3a0a710] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Border.SetBrushFromTexture
	void SetBrushFromTexture(UTexture2D* Texture);                                                                           // [0x3a0a360] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Border.SetBrushFromMaterial
	void SetBrushFromMaterial(UMaterialInterface* Material);                                                                 // [0x3a0a360] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Border.SetBrushFromAsset
	void SetBrushFromAsset(USlateBrushAsset* Asset);                                                                         // [0x3a0a220] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Border.SetBrushColor
	void SetBrushColor(FLinearColor InBrushColor);                                                                           // [0x3a0a170] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Border.SetBrush
	void SetBrush(FSlateBrush& InBrush);                                                                                     // [0x3a0a080] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.Border.GetDynamicMaterial
	UMaterialInstanceDynamic* GetDynamicMaterial();                                                                          // [0x3a07770] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.Button
/// Size: 0x0488 (0x000168 - 0x0005F0)
class UButton : public UContentWidget : UContentWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0168   (0x0008)  MISSED
	FButtonStyle                                       WidgetStyle;                                                // 0x0170   (0x03F0)  
	FLinearColor                                       ColorAndOpacity;                                            // 0x0560   (0x0010)  
	FLinearColor                                       BackgroundColor;                                            // 0x0570   (0x0010)  
	TEnumAsByte<EButtonClickMethod>                    ClickMethod;                                                // 0x0580   (0x0001)  
	TEnumAsByte<EButtonTouchMethod>                    TouchMethod;                                                // 0x0581   (0x0001)  
	TEnumAsByte<EButtonPressMethod>                    PressMethod;                                                // 0x0582   (0x0001)  
	bool                                               IsFocusable;                                                // 0x0583   (0x0001)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0584   (0x0004)  MISSED
	FMulticastInlineDelegate                           OnClicked;                                                  // 0x0588   (0x0010)  
	FMulticastInlineDelegate                           OnPressed;                                                  // 0x0598   (0x0010)  
	FMulticastInlineDelegate                           OnReleased;                                                 // 0x05A8   (0x0010)  
	FMulticastInlineDelegate                           OnHovered;                                                  // 0x05B8   (0x0010)  
	FMulticastInlineDelegate                           OnUnhovered;                                                // 0x05C8   (0x0010)  
	unsigned char                                      UnknownData02_6[0x18];                                      // 0x05D8   (0x0018)  MISSED


	/// Functions
	// Function /Script/UMG.Button.SetTouchMethod
	void SetTouchMethod(TEnumAsByte<EButtonTouchMethod> InTouchMethod);                                                      // [0x3a0c740] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Button.SetStyle
	void SetStyle(FButtonStyle& InStyle);                                                                                    // [0x3a0c4a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.Button.SetPressMethod
	void SetPressMethod(TEnumAsByte<EButtonPressMethod> InPressMethod);                                                      // [0x3a0bd90] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Button.SetColorAndOpacity
	void SetColorAndOpacity(FLinearColor InColorAndOpacity);                                                                 // [0x3a0a5c0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Button.SetClickMethod
	void SetClickMethod(TEnumAsByte<EButtonClickMethod> InClickMethod);                                                      // [0x3a0a4a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Button.SetBackgroundColor
	void SetBackgroundColor(FLinearColor InBackgroundColor);                                                                 // [0x3a09e80] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Button.IsPressed
	bool IsPressed();                                                                                                        // [0x3a08f20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.TextLayoutWidget
/// Size: 0x0020 (0x000150 - 0x000170)
class UTextLayoutWidget : public UWidget : UWidget
{ 
public:
	FShapedTextOptions                                 ShapedTextOptions;                                          // 0x0150   (0x0003)  
	TEnumAsByte<ETextJustify>                          Justification;                                              // 0x0153   (0x0001)  
	ETextWrappingPolicy                                WrappingPolicy;                                             // 0x0154   (0x0001)  
	bool                                               AutoWrapText : 1;                                           // 0x0155:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x2];                                       // 0x0156   (0x0002)  MISSED
	float                                              WrapTextAt;                                                 // 0x0158   (0x0004)  
	FMargin                                            Margin;                                                     // 0x015C   (0x0010)  
	float                                              LineHeightPercentage;                                       // 0x016C   (0x0004)  


	/// Functions
	// Function /Script/UMG.TextLayoutWidget.SetJustification
	void SetJustification(TEnumAsByte<ETextJustify> InJustification);                                                        // [0x3a60120] Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.TextBlock
/// Size: 0x01D0 (0x000170 - 0x000340)
class UTextBlock : public UTextLayoutWidget : UTextLayoutWidget
{ 
public:
	FText                                              Text;                                                       // 0x0170   (0x0018)  
	FDelegateProperty                                  TextDelegate;                                               // 0x0188   (0x0010)  
	FSlateColor                                        ColorAndOpacity;                                            // 0x0198   (0x0014)  
	FDelegateProperty                                  ColorAndOpacityDelegate;                                    // 0x01AC   (0x0010)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x01BC   (0x0004)  MISSED
	FSlateFontInfo                                     Font;                                                       // 0x01C0   (0x0058)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0218   (0x0008)  MISSED
	FSlateBrush                                        StrikeBrush;                                                // 0x0220   (0x00D0)  
	FVector2D                                          ShadowOffset;                                               // 0x02F0   (0x0010)  
	FLinearColor                                       ShadowColorAndOpacity;                                      // 0x0300   (0x0010)  
	FDelegateProperty                                  ShadowColorAndOpacityDelegate;                              // 0x0310   (0x0010)  
	float                                              MinDesiredWidth;                                            // 0x0320   (0x0004)  
	bool                                               bWrapWithInvalidationPanel;                                 // 0x0324   (0x0001)  
	ETextTransformPolicy                               TextTransformPolicy;                                        // 0x0325   (0x0001)  
	ETextOverflowPolicy                                TextOverflowPolicy;                                         // 0x0326   (0x0001)  
	bool                                               bSimpleTextMode;                                            // 0x0327   (0x0001)  
	unsigned char                                      UnknownData02_6[0x18];                                      // 0x0328   (0x0018)  MISSED


	/// Functions
	// Function /Script/UMG.TextBlock.SetTextTransformPolicy
	void SetTextTransformPolicy(ETextTransformPolicy InTransformPolicy);                                                     // [0x3a64670] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.TextBlock.SetTextOverflowPolicy
	void SetTextOverflowPolicy(ETextOverflowPolicy InOverflowPolicy);                                                        // [0x3a643d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.TextBlock.SetText
	void SetText(FText InText);                                                                                              // [0x3a64080] Native|Public|BlueprintCallable 
	// Function /Script/UMG.TextBlock.SetStrikeBrush
	void SetStrikeBrush(FSlateBrush InStrikeBrush);                                                                          // [0x3a63c40] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.TextBlock.SetShadowOffset
	void SetShadowOffset(FVector2D InShadowOffset);                                                                          // [0x3a63370] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.TextBlock.SetShadowColorAndOpacity
	void SetShadowColorAndOpacity(FLinearColor InShadowColorAndOpacity);                                                     // [0x3a632d0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.TextBlock.SetOpacity
	void SetOpacity(float InOpacity);                                                                                        // [0x3a61970] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.TextBlock.SetMinDesiredWidth
	void SetMinDesiredWidth(float InMinDesiredWidth);                                                                        // [0x3a60dd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.TextBlock.SetFontOutlineMaterial
	void SetFontOutlineMaterial(UMaterialInterface* InMaterial);                                                             // [0x3a5ee60] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.TextBlock.SetFontMaterial
	void SetFontMaterial(UMaterialInterface* InMaterial);                                                                    // [0x3a5ec90] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.TextBlock.SetFont
	void SetFont(FSlateFontInfo InFontInfo);                                                                                 // [0x3a5eac0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.TextBlock.SetColorAndOpacity
	void SetColorAndOpacity(FSlateColor InColorAndOpacity);                                                                  // [0x3a5d280] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.TextBlock.SetAutoWrapText
	void SetAutoWrapText(bool InAutoTextWrap);                                                                               // [0x3a5c660] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.TextBlock.GetText
	FText GetText();                                                                                                         // [0x3a599c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.TextBlock.GetDynamicOutlineMaterial
	UMaterialInstanceDynamic* GetDynamicOutlineMaterial();                                                                   // [0x3a58ac0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.TextBlock.GetDynamicFontMaterial
	UMaterialInstanceDynamic* GetDynamicFontMaterial();                                                                      // [0x3a58930] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.ScrollBox
/// Size: 0x0B58 (0x000168 - 0x000CC0)
class UScrollBox : public UPanelWidget : UPanelWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0168   (0x0008)  MISSED
	FScrollBoxStyle                                    WidgetStyle;                                                // 0x0170   (0x0370)  
	FScrollBarStyle                                    WidgetBarStyle;                                             // 0x04E0   (0x0770)  
	TEnumAsByte<EOrientation>                          Orientation;                                                // 0x0C50   (0x0001)  
	ESlateVisibility                                   ScrollBarVisibility;                                        // 0x0C51   (0x0001)  
	EConsumeMouseWheel                                 ConsumeMouseWheel;                                          // 0x0C52   (0x0001)  
	unsigned char                                      UnknownData01_5[0x5];                                       // 0x0C53   (0x0005)  MISSED
	FVector2D                                          ScrollbarThickness;                                         // 0x0C58   (0x0010)  
	FMargin                                            ScrollbarPadding;                                           // 0x0C68   (0x0010)  
	bool                                               AlwaysShowScrollbar;                                        // 0x0C78   (0x0001)  
	bool                                               AlwaysShowScrollbarTrack;                                   // 0x0C79   (0x0001)  
	bool                                               AllowOverscroll;                                            // 0x0C7A   (0x0001)  
	bool                                               BackPadScrolling;                                           // 0x0C7B   (0x0001)  
	bool                                               FrontPadScrolling;                                          // 0x0C7C   (0x0001)  
	bool                                               bAnimateWheelScrolling;                                     // 0x0C7D   (0x0001)  
	EDescendantScrollDestination                       NavigationDestination;                                      // 0x0C7E   (0x0001)  
	unsigned char                                      UnknownData02_5[0x1];                                       // 0x0C7F   (0x0001)  MISSED
	float                                              NavigationScrollPadding;                                    // 0x0C80   (0x0004)  
	EScrollWhenFocusChanges                            ScrollWhenFocusChanges;                                     // 0x0C84   (0x0001)  
	bool                                               bAllowRightClickDragScrolling;                              // 0x0C85   (0x0001)  
	unsigned char                                      UnknownData03_5[0x2];                                       // 0x0C86   (0x0002)  MISSED
	float                                              WheelScrollMultiplier;                                      // 0x0C88   (0x0004)  
	unsigned char                                      UnknownData04_5[0x4];                                       // 0x0C8C   (0x0004)  MISSED
	FMulticastInlineDelegate                           OnUserScrolled;                                             // 0x0C90   (0x0010)  
	unsigned char                                      UnknownData05_6[0x20];                                      // 0x0CA0   (0x0020)  MISSED


	/// Functions
	// Function /Script/UMG.ScrollBox.SetWheelScrollMultiplier
	void SetWheelScrollMultiplier(float NewWheelScrollMultiplier);                                                           // [0x3a65580] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScrollBox.SetScrollWhenFocusChanges
	void SetScrollWhenFocusChanges(EScrollWhenFocusChanges NewScrollWhenFocusChanges);                                       // [0x3a62ca0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScrollBox.SetScrollOffset
	void SetScrollOffset(float NewScrollOffset);                                                                             // [0x3a62c10] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScrollBox.SetScrollBarVisibility
	void SetScrollBarVisibility(ESlateVisibility NewScrollBarVisibility);                                                    // [0x3a62a70] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScrollBox.SetScrollbarThickness
	void SetScrollbarThickness(FVector2D& NewScrollbarThickness);                                                            // [0x3a62de0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.ScrollBox.SetScrollbarPadding
	void SetScrollbarPadding(FMargin& NewScrollbarPadding);                                                                  // [0x3a62d30] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.ScrollBox.SetOrientation
	void SetOrientation(TEnumAsByte<EOrientation> NewOrientation);                                                           // [0x3a61a90] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScrollBox.SetNavigationDestination
	void SetNavigationDestination(EDescendantScrollDestination NewNavigationDestination);                                    // [0x3a610b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScrollBox.SetConsumeMouseWheel
	void SetConsumeMouseWheel(EConsumeMouseWheel NewConsumeMouseWheel);                                                      // [0x3a5d6c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScrollBox.SetAnimateWheelScrolling
	void SetAnimateWheelScrolling(bool bShouldAnimateWheelScrolling);                                                        // [0x3a5c4b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScrollBox.SetAlwaysShowScrollbar
	void SetAlwaysShowScrollbar(bool NewAlwaysShowScrollbar);                                                                // [0x3a5c130] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScrollBox.SetAllowOverscroll
	void SetAllowOverscroll(bool NewAllowOverscroll);                                                                        // [0x3a5c090] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScrollBox.ScrollWidgetIntoView
	void ScrollWidgetIntoView(UWidget* WidgetToFind, bool AnimateScroll, EDescendantScrollDestination ScrollDestination, float Padding); // [0x3a5bb30] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScrollBox.ScrollToStart
	void ScrollToStart();                                                                                                    // [0x3a5bad0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScrollBox.ScrollToEnd
	void ScrollToEnd();                                                                                                      // [0x3a5baa0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScrollBox.GetViewOffsetFraction
	float GetViewOffsetFraction();                                                                                           // [0x3a59c40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ScrollBox.GetViewFraction
	float GetViewFraction();                                                                                                 // [0x3a59b80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ScrollBox.GetScrollOffsetOfEnd
	float GetScrollOffsetOfEnd();                                                                                            // [0x3a59610] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ScrollBox.GetScrollOffset
	float GetScrollOffset();                                                                                                 // [0x3a595c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ScrollBox.EndInertialScrolling
	void EndInertialScrolling();                                                                                             // [0x3a57bc0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.Image
/// Size: 0x0160 (0x000150 - 0x0002B0)
class UImage : public UWidget : UWidget
{ 
public:
	FSlateBrush                                        Brush;                                                      // 0x0150   (0x00D0)  
	FDelegateProperty                                  BrushDelegate;                                              // 0x0220   (0x0010)  
	FLinearColor                                       ColorAndOpacity;                                            // 0x0230   (0x0010)  
	FDelegateProperty                                  ColorAndOpacityDelegate;                                    // 0x0240   (0x0010)  
	bool                                               bFlipForRightToLeftFlowDirection;                           // 0x0250   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0251   (0x0003)  MISSED
	FDelegateProperty                                  OnMouseButtonDownEvent;                                     // 0x0254   (0x0010)  
	unsigned char                                      UnknownData01_6[0x4C];                                      // 0x0264   (0x004C)  MISSED


	/// Functions
	// Function /Script/UMG.Image.SetOpacity
	void SetOpacity(float InOpacity);                                                                                        // [0x3a618c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Image.SetDesiredSizeOverride
	void SetDesiredSizeOverride(FVector2D DesiredSize);                                                                      // [0x3a5e030] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Image.SetColorAndOpacity
	void SetColorAndOpacity(FLinearColor InColorAndOpacity);                                                                 // [0x3a5d1e0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Image.SetBrushTintColor
	void SetBrushTintColor(FSlateColor TintColor);                                                                           // [0x3a5cf40] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Image.SetBrushResourceObject
	void SetBrushResourceObject(UObject* ResourceObject);                                                                    // [0x3a5ceb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Image.SetBrushFromTextureDynamic
	void SetBrushFromTextureDynamic(UTexture2DDynamic* Texture, bool bMatchSize);                                            // [0x3a5cde0] Native|Public|BlueprintCallable 
	// Function /Script/UMG.Image.SetBrushFromTexture
	void SetBrushFromTexture(UTexture2D* Texture, bool bMatchSize);                                                          // [0x3a5cd10] Native|Public|BlueprintCallable 
	// Function /Script/UMG.Image.SetBrushFromSoftTexture
	void SetBrushFromSoftTexture(TWeakObjectPtr<UTexture2D*> SoftTexture, bool bMatchSize);                                  // [0x3a5cb80] Native|Public|BlueprintCallable 
	// Function /Script/UMG.Image.SetBrushFromSoftMaterial
	void SetBrushFromSoftMaterial(TWeakObjectPtr<UMaterialInterface*> SoftMaterial);                                         // [0x3a5ca30] Native|Public|BlueprintCallable 
	// Function /Script/UMG.Image.SetBrushFromMaterial
	void SetBrushFromMaterial(UMaterialInterface* Material);                                                                 // [0x16c3850] Native|Public|BlueprintCallable 
	// Function /Script/UMG.Image.SetBrushFromAtlasInterface
	void SetBrushFromAtlasInterface(TScriptInterface<Class> AtlasRegion, bool bMatchSize);                                   // [0x3a5c950] Native|Public|BlueprintCallable 
	// Function /Script/UMG.Image.SetBrushFromAsset
	void SetBrushFromAsset(USlateBrushAsset* Asset);                                                                         // [0x3a5c8c0] Native|Public|BlueprintCallable 
	// Function /Script/UMG.Image.SetBrush
	void SetBrush(FSlateBrush& InBrush);                                                                                     // [0x3a5c800] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.Image.GetDynamicMaterial
	UMaterialInstanceDynamic* GetDynamicMaterial();                                                                          // [0x3a589e0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.ListViewBase
/// Size: 0x0118 (0x000150 - 0x000268)
class UListViewBase : public UWidget : UWidget
{ 
public:
	FMulticastInlineDelegate                           BP_OnEntryGenerated;                                        // 0x0150   (0x0010)  
	unsigned char                                      UnknownData00_5[0x10];                                      // 0x0160   (0x0010)  MISSED
	UClass*                                            EntryWidgetClass;                                           // 0x0170   (0x0008)  
	float                                              WheelScrollMultiplier;                                      // 0x0178   (0x0004)  
	bool                                               bEnableScrollAnimation;                                     // 0x017C   (0x0001)  
	bool                                               AllowOverscroll;                                            // 0x017D   (0x0001)  
	bool                                               bEnableRightClickScrolling;                                 // 0x017E   (0x0001)  
	bool                                               bEnableFixedLineOffset;                                     // 0x017F   (0x0001)  
	float                                              FixedLineScrollOffset;                                      // 0x0180   (0x0004)  
	bool                                               bAllowDragging;                                             // 0x0184   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0185   (0x0003)  MISSED
	FMulticastInlineDelegate                           BP_OnEntryReleased;                                         // 0x0188   (0x0010)  
	FUserWidgetPool                                    EntryWidgetPool;                                            // 0x0198   (0x0088)  
	unsigned char                                      UnknownData02_6[0x48];                                      // 0x0220   (0x0048)  MISSED


	/// Functions
	// Function /Script/UMG.ListViewBase.SetWheelScrollMultiplier
	void SetWheelScrollMultiplier(float NewWheelScrollMultiplier);                                                           // [0x3a654b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ListViewBase.SetScrollOffset
	void SetScrollOffset(float InScrollOffset);                                                                              // [0x3a62b80] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ListViewBase.SetScrollBarVisibility
	void SetScrollBarVisibility(ESlateVisibility InVisibility);                                                              // [0x3a62eb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ListViewBase.ScrollToTop
	void ScrollToTop();                                                                                                      // [0x3a5bb00] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ListViewBase.ScrollToBottom
	void ScrollToBottom();                                                                                                   // [0x3a5ba70] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ListViewBase.RequestRefresh
	void RequestRefresh();                                                                                                   // [0x3a5b7f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ListViewBase.RegenerateAllEntries
	void RegenerateAllEntries();                                                                                             // [0x3a5b340] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ListViewBase.GetScrollOffset
	float GetScrollOffset();                                                                                                 // [0x3a59570] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ListViewBase.GetDisplayedEntryWidgets
	TArray<UUserWidget*> GetDisplayedEntryWidgets();                                                                         // [0x3a58860] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.ListView
/// Size: 0x09C8 (0x000268 - 0x000C30)
class UListView : public UListViewBase : UListViewBase
{ 
public:
	unsigned char                                      UnknownData00_2[0xD8];                                      // 0x0268   (0x00D8)  MISSED
	FTableViewStyle                                    WidgetStyle;                                                // 0x0340   (0x00E0)  
	FScrollBarStyle                                    ScrollBarStyle;                                             // 0x0420   (0x0770)  
	TEnumAsByte<EOrientation>                          Orientation;                                                // 0x0B90   (0x0001)  
	TEnumAsByte<ESelectionMode>                        SelectionMode;                                              // 0x0B91   (0x0001)  
	EConsumeMouseWheel                                 ConsumeMouseWheel;                                          // 0x0B92   (0x0001)  
	bool                                               bClearSelectionOnClick;                                     // 0x0B93   (0x0001)  
	bool                                               bIsFocusable;                                               // 0x0B94   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0B95   (0x0003)  MISSED
	float                                              EntrySpacing;                                               // 0x0B98   (0x0004)  
	bool                                               bReturnFocusToSelection;                                    // 0x0B9C   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0B9D   (0x0003)  MISSED
	TArray<UObject*>                                   ListItems;                                                  // 0x0BA0   (0x0010)  
	unsigned char                                      UnknownData03_5[0x10];                                      // 0x0BB0   (0x0010)  MISSED
	FMulticastInlineDelegate                           BP_OnEntryInitialized;                                      // 0x0BC0   (0x0010)  
	FMulticastInlineDelegate                           BP_OnItemClicked;                                           // 0x0BD0   (0x0010)  
	FMulticastInlineDelegate                           BP_OnItemDoubleClicked;                                     // 0x0BE0   (0x0010)  
	FMulticastInlineDelegate                           BP_OnItemIsHoveredChanged;                                  // 0x0BF0   (0x0010)  
	FMulticastInlineDelegate                           BP_OnItemSelectionChanged;                                  // 0x0C00   (0x0010)  
	FMulticastInlineDelegate                           BP_OnItemScrolledIntoView;                                  // 0x0C10   (0x0010)  
	FMulticastInlineDelegate                           BP_OnListViewScrolled;                                      // 0x0C20   (0x0010)  


	/// Functions
	// Function /Script/UMG.ListView.SetSelectionMode
	void SetSelectionMode(TEnumAsByte<ESelectionMode> SelectionMode);                                                        // [0x3a631d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ListView.SetSelectedIndex
	void SetSelectedIndex(int32_t Index);                                                                                    // [0x3a62fd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ListView.ScrollIndexIntoView
	void ScrollIndexIntoView(int32_t Index);                                                                                 // [0x3a5b980] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ListView.RemoveItem
	void RemoveItem(UObject* Item);                                                                                          // [0x3a5b540] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ListView.OnListItemOuterEndPlayed
	void OnListItemOuterEndPlayed(AActor* ItemOuter, TEnumAsByte<EEndPlayReason> EndPlayReason);                             // [0x3a5b180] Final|Native|Protected 
	// Function /Script/UMG.ListView.OnListItemEndPlayed
	void OnListItemEndPlayed(AActor* Item, TEnumAsByte<EEndPlayReason> EndPlayReason);                                       // [0x3a5b0b0] Final|Native|Protected 
	// Function /Script/UMG.ListView.NavigateToIndex
	void NavigateToIndex(int32_t Index);                                                                                     // [0x3a5afe0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ListView.IsRefreshPending
	bool IsRefreshPending();                                                                                                 // [0x3a5a930] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ListView.GetNumItems
	int32_t GetNumItems();                                                                                                   // [0x3a59300] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ListView.GetListItems
	TArray<UObject*> GetListItems();                                                                                         // [0x3a59070] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ListView.GetItemAt
	UObject* GetItemAt(int32_t Index);                                                                                       // [0x3a58fb0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ListView.GetIndexForItem
	int32_t GetIndexForItem(UObject* Item);                                                                                  // [0x3a58e50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ListView.ClearListItems
	void ClearListItems();                                                                                                   // [0x3a57770] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ListView.BP_SetSelectedItem
	void BP_SetSelectedItem(UObject* Item);                                                                                  // [0x3a57590] Final|Native|Private|BlueprintCallable 
	// Function /Script/UMG.ListView.BP_SetListItems
	void BP_SetListItems(TArray<UObject*>& InListItems);                                                                     // [0x3a573f0] Final|Native|Private|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.ListView.BP_SetItemSelection
	void BP_SetItemSelection(UObject* Item, bool bSelected);                                                                 // [0x3a57290] Final|Native|Private|BlueprintCallable 
	// Function /Script/UMG.ListView.BP_ScrollItemIntoView
	void BP_ScrollItemIntoView(UObject* Item);                                                                               // [0x3a571c0] Final|Native|Private|BlueprintCallable 
	// Function /Script/UMG.ListView.BP_NavigateToItem
	void BP_NavigateToItem(UObject* Item);                                                                                   // [0x3a570f0] Final|Native|Private|BlueprintCallable 
	// Function /Script/UMG.ListView.BP_IsItemVisible
	bool BP_IsItemVisible(UObject* Item);                                                                                    // [0x3a56ff0] Final|Native|Private|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ListView.BP_GetSelectedItems
	bool BP_GetSelectedItems(TArray<UObject*>& Items);                                                                       // [0x3a56f10] Final|Native|Private|HasOutParms|BlueprintCallable|Const 
	// Function /Script/UMG.ListView.BP_GetSelectedItem
	UObject* BP_GetSelectedItem();                                                                                           // [0x3a56e60] Final|Native|Private|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ListView.BP_GetNumItemsSelected
	int32_t BP_GetNumItemsSelected();                                                                                        // [0x3a56e00] Final|Native|Private|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ListView.BP_ClearSelection
	void BP_ClearSelection();                                                                                                // [0x3a56dc0] Final|Native|Private|BlueprintCallable 
	// Function /Script/UMG.ListView.BP_CancelScrollIntoView
	void BP_CancelScrollIntoView();                                                                                          // [0x3a56d80] Final|Native|Private|BlueprintCallable 
	// Function /Script/UMG.ListView.AddItem
	void AddItem(UObject* Item);                                                                                             // [0x3a56bd0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.PanelSlot
/// Size: 0x0010 (0x000028 - 0x000038)
class UPanelSlot : public UVisual : UVisual
{ 
public:
	UPanelWidget*                                      Parent;                                                     // 0x0028   (0x0008)  
	UWidget*                                           Content;                                                    // 0x0030   (0x0008)  
};

/// Class /Script/UMG.RichTextBlock
/// Size: 0x0700 (0x000170 - 0x000870)
class URichTextBlock : public UTextLayoutWidget : UTextLayoutWidget
{ 
public:
	FText                                              Text;                                                       // 0x0170   (0x0018)  
	UDataTable*                                        TextStyleSet;                                               // 0x0188   (0x0008)  
	TArray<UClass*>                                    DecoratorClasses;                                           // 0x0190   (0x0010)  
	bool                                               bOverrideDefaultStyle;                                      // 0x01A0   (0x0001)  
	unsigned char                                      UnknownData00_5[0xF];                                       // 0x01A1   (0x000F)  MISSED
	FTextBlockStyle                                    DefaultTextStyleOverride;                                   // 0x01B0   (0x0340)  
	float                                              MinDesiredWidth;                                            // 0x04F0   (0x0004)  
	ETextTransformPolicy                               TextTransformPolicy;                                        // 0x04F4   (0x0001)  
	ETextOverflowPolicy                                TextOverflowPolicy;                                         // 0x04F5   (0x0001)  
	unsigned char                                      UnknownData01_5[0xA];                                       // 0x04F6   (0x000A)  MISSED
	FTextBlockStyle                                    DefaultTextStyle;                                           // 0x0500   (0x0340)  
	TArray<URichTextBlockDecorator*>                   InstanceDecorators;                                         // 0x0840   (0x0010)  
	unsigned char                                      UnknownData02_6[0x20];                                      // 0x0850   (0x0020)  MISSED


	/// Functions
	// Function /Script/UMG.RichTextBlock.SetTextTransformPolicy
	void SetTextTransformPolicy(ETextTransformPolicy InTransformPolicy);                                                     // [0x3a645f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.RichTextBlock.SetTextStyleSet
	void SetTextStyleSet(UDataTable* NewTextStyleSet);                                                                       // [0x3a64530] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.RichTextBlock.SetTextOverflowPolicy
	void SetTextOverflowPolicy(ETextOverflowPolicy InOverflowPolicy);                                                        // [0x3a64330] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.RichTextBlock.SetText
	void SetText(FText& InText);                                                                                             // [0x3a63fa0] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.RichTextBlock.SetMinDesiredWidth
	void SetMinDesiredWidth(float InMinDesiredWidth);                                                                        // [0x3a60c90] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.RichTextBlock.SetDefaultTextStyle
	void SetDefaultTextStyle(FTextBlockStyle& InDefaultTextStyle);                                                           // [0x3a5deb0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.RichTextBlock.SetDefaultStrikeBrush
	void SetDefaultStrikeBrush(FSlateBrush& InStrikeBrush);                                                                  // [0x3a5ddb0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.RichTextBlock.SetDefaultShadowOffset
	void SetDefaultShadowOffset(FVector2D InShadowOffset);                                                                   // [0x3a5dce0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.RichTextBlock.SetDefaultShadowColorAndOpacity
	void SetDefaultShadowColorAndOpacity(FLinearColor InShadowColorAndOpacity);                                              // [0x3a5dc30] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.RichTextBlock.SetDefaultMaterial
	void SetDefaultMaterial(UMaterialInterface* InMaterial);                                                                 // [0x3a5db70] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.RichTextBlock.SetDefaultFont
	void SetDefaultFont(FSlateFontInfo InFontInfo);                                                                          // [0x3a5d9d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.RichTextBlock.SetDefaultColorAndOpacity
	void SetDefaultColorAndOpacity(FSlateColor InColorAndOpacity);                                                           // [0x3a5d900] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.RichTextBlock.SetDecorators
	void SetDecorators(TArray<UClass*>& InDecoratorClasses);                                                                 // [0x3a5d850] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.RichTextBlock.SetAutoWrapText
	void SetAutoWrapText(bool InAutoTextWrap);                                                                               // [0x3a5c550] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.RichTextBlock.RefreshTextLayout
	void RefreshTextLayout();                                                                                                // [0x3a5b310] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.RichTextBlock.GetTextStyleSet
	UDataTable* GetTextStyleSet();                                                                                           // [0x3a59a90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.RichTextBlock.GetText
	FText GetText();                                                                                                         // [0x3a598f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.RichTextBlock.GetDefaultDynamicMaterial
	UMaterialInstanceDynamic* GetDefaultDynamicMaterial();                                                                   // [0x3a58660] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.RichTextBlock.GetDecoratorByClass
	URichTextBlockDecorator* GetDecoratorByClass(UClass* DecoratorClass);                                                    // [0x3a58550] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.RichTextBlock.ClearAllDefaultStyleOverrides
	void ClearAllDefaultStyleOverrides();                                                                                    // [0x3a57670] Final|Native|Public  
};

/// Class /Script/UMG.TileView
/// Size: 0x0020 (0x000C30 - 0x000C50)
class UTileView : public UListView : UListView
{ 
public:
	float                                              EntryHeight;                                                // 0x0C30   (0x0004)  
	float                                              EntryWidth;                                                 // 0x0C34   (0x0004)  
	EListItemAlignment                                 TileAlignment;                                              // 0x0C38   (0x0001)  
	bool                                               bWrapHorizontalNavigation;                                  // 0x0C39   (0x0001)  
	unsigned char                                      UnknownData00_6[0x16];                                      // 0x0C3A   (0x0016)  MISSED


	/// Functions
	// Function /Script/UMG.TileView.SetEntryWidth
	void SetEntryWidth(float NewWidth);                                                                                      // [0x3a5e360] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.TileView.SetEntryHeight
	void SetEntryHeight(float NewHeight);                                                                                    // [0x3a5e2a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.TileView.GetEntryWidth
	float GetEntryWidth();                                                                                                   // [0x3a58be0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.TileView.GetEntryHeight
	float GetEntryHeight();                                                                                                  // [0x3a58bc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.TreeView
/// Size: 0x0060 (0x000C30 - 0x000C90)
class UTreeView : public UListView : UListView
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0C30   (0x0010)  MISSED
	FDelegateProperty                                  BP_OnGetItemChildren;                                       // 0x0C40   (0x0010)  
	FMulticastInlineDelegate                           BP_OnItemExpansionChanged;                                  // 0x0C50   (0x0010)  
	unsigned char                                      UnknownData01_6[0x30];                                      // 0x0C60   (0x0030)  MISSED


	/// Functions
	// Function /Script/UMG.TreeView.SetItemExpansion
	void SetItemExpansion(UObject* Item, bool bExpandItem);                                                                  // [0x3a5ffc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.TreeView.ExpandAll
	void ExpandAll();                                                                                                        // [0x3a57bf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.TreeView.CollapseAll
	void CollapseAll();                                                                                                      // [0x3a57af0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.Overlay
/// Size: 0x0010 (0x000168 - 0x000178)
class UOverlay : public UPanelWidget : UPanelWidget
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0168   (0x0010)  MISSED
};

/// Class /Script/UMG.OverlaySlot
/// Size: 0x0020 (0x000038 - 0x000058)
class UOverlaySlot : public UPanelSlot : UPanelSlot
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0038   (0x0008)  MISSED
	FMargin                                            Padding;                                                    // 0x0040   (0x0010)  
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                        // 0x0050   (0x0001)  
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                          // 0x0051   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x0052   (0x0006)  MISSED


	/// Functions
	// Function /Script/UMG.OverlaySlot.SetVerticalAlignment
	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                          // [0x3a65030] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.OverlaySlot.SetPadding
	void SetPadding(FMargin InPadding);                                                                                      // [0x3a61ce0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.OverlaySlot.SetHorizontalAlignment
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                    // [0x3a5f6b0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.SizeBox
/// Size: 0x0038 (0x000168 - 0x0001A0)
class USizeBox : public UContentWidget : UContentWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0168   (0x0010)  MISSED
	float                                              WidthOverride;                                              // 0x0178   (0x0004)  
	float                                              HeightOverride;                                             // 0x017C   (0x0004)  
	float                                              MinDesiredWidth;                                            // 0x0180   (0x0004)  
	float                                              MinDesiredHeight;                                           // 0x0184   (0x0004)  
	float                                              MaxDesiredWidth;                                            // 0x0188   (0x0004)  
	float                                              MaxDesiredHeight;                                           // 0x018C   (0x0004)  
	float                                              MinAspectRatio;                                             // 0x0190   (0x0004)  
	float                                              MaxAspectRatio;                                             // 0x0194   (0x0004)  
	bool                                               bOverride_WidthOverride : 1;                                // 0x0198:0 (0x0001)  
	bool                                               bOverride_HeightOverride : 1;                               // 0x0198:1 (0x0001)  
	bool                                               bOverride_MinDesiredWidth : 1;                              // 0x0198:2 (0x0001)  
	bool                                               bOverride_MinDesiredHeight : 1;                             // 0x0198:3 (0x0001)  
	bool                                               bOverride_MaxDesiredWidth : 1;                              // 0x0198:4 (0x0001)  
	bool                                               bOverride_MaxDesiredHeight : 1;                             // 0x0198:5 (0x0001)  
	bool                                               bOverride_MinAspectRatio : 1;                               // 0x0198:6 (0x0001)  
	bool                                               bOverride_MaxAspectRatio : 1;                               // 0x0198:7 (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0199   (0x0007)  MISSED


	/// Functions
	// Function /Script/UMG.SizeBox.SetWidthOverride
	void SetWidthOverride(float InWidthOverride);                                                                            // [0x3a657f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBox.SetMinDesiredWidth
	void SetMinDesiredWidth(float InMinDesiredWidth);                                                                        // [0x3a60d10] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBox.SetMinDesiredHeight
	void SetMinDesiredHeight(float InMinDesiredHeight);                                                                      // [0x3a60a70] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBox.SetMinAspectRatio
	void SetMinAspectRatio(float InMinAspectRatio);                                                                          // [0x3a609b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBox.SetMaxDesiredWidth
	void SetMaxDesiredWidth(float InMaxDesiredWidth);                                                                        // [0x3a606c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBox.SetMaxDesiredHeight
	void SetMaxDesiredHeight(float InMaxDesiredHeight);                                                                      // [0x3a60600] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBox.SetMaxAspectRatio
	void SetMaxAspectRatio(float InMaxAspectRatio);                                                                          // [0x3a60540] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBox.SetHeightOverride
	void SetHeightOverride(float InHeightOverride);                                                                          // [0x3a5f230] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBox.ClearWidthOverride
	void ClearWidthOverride();                                                                                               // [0x3a57a50] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBox.ClearMinDesiredWidth
	void ClearMinDesiredWidth();                                                                                             // [0x3a579b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBox.ClearMinDesiredHeight
	void ClearMinDesiredHeight();                                                                                            // [0x3a57950] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBox.ClearMinAspectRatio
	void ClearMinAspectRatio();                                                                                              // [0x3a578f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBox.ClearMaxDesiredWidth
	void ClearMaxDesiredWidth();                                                                                             // [0x3a57850] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBox.ClearMaxDesiredHeight
	void ClearMaxDesiredHeight();                                                                                            // [0x3a577f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBox.ClearMaxAspectRatio
	void ClearMaxAspectRatio();                                                                                              // [0x3a57790] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBox.ClearHeightOverride
	void ClearHeightOverride();                                                                                              // [0x3a57710] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.DynamicEntryBoxBase
/// Size: 0x00E0 (0x000150 - 0x000230)
class UDynamicEntryBoxBase : public UWidget : UWidget
{ 
public:
	FVector2D                                          EntrySpacing;                                               // 0x0150   (0x0010)  
	TArray<FVector2D>                                  SpacingPattern;                                             // 0x0160   (0x0010)  
	EDynamicBoxType                                    EntryBoxType;                                               // 0x0170   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0171   (0x0003)  MISSED
	FSlateChildSize                                    EntrySizeRule;                                              // 0x0174   (0x0008)  
	TEnumAsByte<EHorizontalAlignment>                  EntryHorizontalAlignment;                                   // 0x017C   (0x0001)  
	TEnumAsByte<EVerticalAlignment>                    EntryVerticalAlignment;                                     // 0x017D   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x017E   (0x0002)  MISSED
	int32_t                                            MaxElementSize;                                             // 0x0180   (0x0004)  
	FRadialBoxSettings                                 RadialBoxSettings;                                          // 0x0184   (0x0010)  
	unsigned char                                      UnknownData02_5[0x14];                                      // 0x0194   (0x0014)  MISSED
	FUserWidgetPool                                    EntryWidgetPool;                                            // 0x01A8   (0x0088)  


	/// Functions
	// Function /Script/UMG.DynamicEntryBoxBase.SetRadialSettings
	void SetRadialSettings(FRadialBoxSettings& InSettings);                                                                  // [0x3a0beb0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.DynamicEntryBoxBase.SetEntrySpacing
	void SetEntrySpacing(FVector2D& InEntrySpacing);                                                                         // [0x3a0a900] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.DynamicEntryBoxBase.GetNumEntries
	int32_t GetNumEntries();                                                                                                 // [0x3a07c10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.DynamicEntryBoxBase.GetAllEntries
	TArray<UUserWidget*> GetAllEntries();                                                                                    // [0x3a07530] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.NotifyFieldValueChanged
/// Size: 0x0000 (0x000028 - 0x000028)
class UNotifyFieldValueChanged : public UInterface : UInterface
{ 
public:
};

/// Class /Script/UMG.ListViewDesignerPreviewItem
/// Size: 0x0000 (0x000028 - 0x000028)
class UListViewDesignerPreviewItem : public UObject : UObject
{ 
public:
};

/// Class /Script/UMG.SlateAccessibleWidgetData
/// Size: 0x0058 (0x000028 - 0x000080)
class USlateAccessibleWidgetData : public UObject : UObject
{ 
public:
	bool                                               bCanChildrenBeAccessible;                                   // 0x0028   (0x0001)  
	ESlateAccessibleBehavior                           AccessibleBehavior;                                         // 0x0029   (0x0001)  
	ESlateAccessibleBehavior                           AccessibleSummaryBehavior;                                  // 0x002A   (0x0001)  
	unsigned char                                      UnknownData00_5[0x5];                                       // 0x002B   (0x0005)  MISSED
	FText                                              AccessibleText;                                             // 0x0030   (0x0018)  
	FDelegateProperty                                  AccessibleTextDelegate;                                     // 0x0048   (0x0010)  
	FText                                              AccessibleSummaryText;                                      // 0x0058   (0x0018)  
	FDelegateProperty                                  AccessibleSummaryTextDelegate;                              // 0x0070   (0x0010)  
};

/// Class /Script/UMG.UserWidgetBlueprint
/// Size: 0x0000 (0x0000A8 - 0x0000A8)
class UUserWidgetBlueprint : public UBlueprint : UBlueprint
{ 
public:
};

/// Class /Script/UMG.WidgetFieldNotificationExtension
/// Size: 0x0018 (0x000028 - 0x000040)
class UWidgetFieldNotificationExtension : public UUserWidgetExtension : UUserWidgetExtension
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0028   (0x0018)  MISSED
};

/// Class /Script/UMG.WidgetNavigation
/// Size: 0x00D8 (0x000028 - 0x000100)
class UWidgetNavigation : public UObject : UObject
{ 
public:
	FWidgetNavigationData                              Up;                                                         // 0x0028   (0x0024)  
	FWidgetNavigationData                              Down;                                                       // 0x004C   (0x0024)  
	FWidgetNavigationData                              Left;                                                       // 0x0070   (0x0024)  
	FWidgetNavigationData                              Right;                                                      // 0x0094   (0x0024)  
	FWidgetNavigationData                              Next;                                                       // 0x00B8   (0x0024)  
	FWidgetNavigationData                              Previous;                                                   // 0x00DC   (0x0024)  
};

/// Class /Script/UMG.MovieScene2DTransformPropertySystem
/// Size: 0x0000 (0x000058 - 0x000058)
class UMovieScene2DTransformPropertySystem : public UMovieScenePropertySystem : UMovieScenePropertySystem
{ 
public:
};

/// Class /Script/UMG.MovieScene2DTransformSection
/// Size: 0x0780 (0x0000F0 - 0x000870)
class UMovieScene2DTransformSection : public UMovieSceneSection : UMovieSceneSection
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x00F0   (0x0008)  MISSED
	FMovieScene2DTransformMask                         TransformMask;                                              // 0x00F8   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x00FC   (0x0004)  MISSED
	FMovieSceneFloatChannel                            Translation;                                                // 0x0100   (0x0220)  
	FMovieSceneFloatChannel                            Rotation;                                                   // 0x0320   (0x0110)  
	FMovieSceneFloatChannel                            Scale;                                                      // 0x0430   (0x0220)  
	FMovieSceneFloatChannel                            Shear;                                                      // 0x0650   (0x0220)  
};

/// Class /Script/UMG.MovieScene2DTransformTrack
/// Size: 0x0000 (0x0000C8 - 0x0000C8)
class UMovieScene2DTransformTrack : public UMovieScenePropertyTrack : UMovieScenePropertyTrack
{ 
public:
};

/// Class /Script/UMG.MovieSceneMarginPropertySystem
/// Size: 0x0000 (0x000058 - 0x000058)
class UMovieSceneMarginPropertySystem : public UMovieScenePropertySystem : UMovieScenePropertySystem
{ 
public:
};

/// Class /Script/UMG.MovieSceneMarginSection
/// Size: 0x0448 (0x0000F0 - 0x000538)
class UMovieSceneMarginSection : public UMovieSceneSection : UMovieSceneSection
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x00F0   (0x0008)  MISSED
	FMovieSceneFloatChannel                            TopCurve;                                                   // 0x00F8   (0x0110)  
	FMovieSceneFloatChannel                            LeftCurve;                                                  // 0x0208   (0x0110)  
	FMovieSceneFloatChannel                            RightCurve;                                                 // 0x0318   (0x0110)  
	FMovieSceneFloatChannel                            BottomCurve;                                                // 0x0428   (0x0110)  
};

/// Class /Script/UMG.MovieSceneMarginTrack
/// Size: 0x0000 (0x0000C8 - 0x0000C8)
class UMovieSceneMarginTrack : public UMovieScenePropertyTrack : UMovieScenePropertyTrack
{ 
public:
};

/// Class /Script/UMG.MovieSceneWidgetMaterialSystem
/// Size: 0x0160 (0x000040 - 0x0001A0)
class UMovieSceneWidgetMaterialSystem : public UMovieSceneEntitySystem : UMovieSceneEntitySystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x160];                                     // 0x0040   (0x0160)  MISSED
};

/// Class /Script/UMG.MovieSceneWidgetMaterialTrack
/// Size: 0x0028 (0x0000A8 - 0x0000D0)
class UMovieSceneWidgetMaterialTrack : public UMovieSceneMaterialTrack : UMovieSceneMaterialTrack
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x00A8   (0x0010)  MISSED
	TArray<FName>                                      BrushPropertyNamePath;                                      // 0x00B8   (0x0010)  
	FName                                              TrackName;                                                  // 0x00C8   (0x0008)  
};

/// Class /Script/UMG.UMGSequencePlayer
/// Size: 0x0310 (0x000028 - 0x000338)
class UUMGSequencePlayer : public UObject : UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x1F8];                                     // 0x0028   (0x01F8)  MISSED
	UWidgetAnimation*                                  Animation;                                                  // 0x0220   (0x0008)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0228   (0x0008)  MISSED
	FMovieSceneRootEvaluationTemplateInstance          RootTemplateInstance;                                       // 0x0230   (0x0088)  
	unsigned char                                      UnknownData02_6[0x80];                                      // 0x02B8   (0x0080)  MISSED


	/// Functions
	// Function /Script/UMG.UMGSequencePlayer.SetUserTag
	void SetUserTag(FName InUserTag);                                                                                        // [0x18f7c60] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UMGSequencePlayer.GetUserTag
	FName GetUserTag();                                                                                                      // [0x18f63b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.UMGSequenceTickManager
/// Size: 0x0098 (0x000028 - 0x0000C0)
class UUMGSequenceTickManager : public UObject : UObject
{ 
public:
	TMap<TWeakObjectPtr, FSequenceTickManagerWidgetData> WeakUserWidgetData;                                       // 0x0028   (0x0050)  
	UMovieSceneEntitySystemLinker*                     Linker;                                                     // 0x0078   (0x0008)  
	unsigned char                                      UnknownData00_6[0x40];                                      // 0x0080   (0x0040)  MISSED
};

/// Class /Script/UMG.WidgetAnimation
/// Size: 0x0030 (0x000068 - 0x000098)
class UWidgetAnimation : public UMovieSceneSequence : UMovieSceneSequence
{ 
public:
	UMovieScene*                                       MovieScene;                                                 // 0x0068   (0x0008)  
	TArray<FWidgetAnimationBinding>                    AnimationBindings;                                          // 0x0070   (0x0010)  
	bool                                               bLegacyFinishOnStop;                                        // 0x0080   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0081   (0x0007)  MISSED
	FString                                            DisplayLabel;                                               // 0x0088   (0x0010)  


	/// Functions
	// Function /Script/UMG.WidgetAnimation.UnbindFromAnimationStarted
	void UnbindFromAnimationStarted(UUserWidget* Widget, FDelegateProperty Delegate);                                        // [0x3a0d6b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetAnimation.UnbindFromAnimationFinished
	void UnbindFromAnimationFinished(UUserWidget* Widget, FDelegateProperty Delegate);                                       // [0x3a0d5d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetAnimation.UnbindAllFromAnimationStarted
	void UnbindAllFromAnimationStarted(UUserWidget* Widget);                                                                 // [0x3a0d540] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetAnimation.UnbindAllFromAnimationFinished
	void UnbindAllFromAnimationFinished(UUserWidget* Widget);                                                                // [0x3a0d4b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetAnimation.GetStartTime
	float GetStartTime();                                                                                                    // [0x3a08290] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetAnimation.GetEndTime
	float GetEndTime();                                                                                                      // [0x3a07880] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetAnimation.BindToAnimationStarted
	void BindToAnimationStarted(UUserWidget* Widget, FDelegateProperty Delegate);                                            // [0x3a06ac0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetAnimation.BindToAnimationFinished
	void BindToAnimationFinished(UUserWidget* Widget, FDelegateProperty Delegate);                                           // [0x3a069e0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.WidgetAnimationDelegateBinding
/// Size: 0x0010 (0x000028 - 0x000038)
class UWidgetAnimationDelegateBinding : public UDynamicBlueprintBinding : UDynamicBlueprintBinding
{ 
public:
	TArray<FBlueprintWidgetAnimationDelegateBinding>   WidgetAnimationDelegateBindings;                            // 0x0028   (0x0010)  
};

/// Class /Script/UMG.WidgetAnimationPlayCallbackProxy
/// Size: 0x0018 (0x000028 - 0x000040)
class UWidgetAnimationPlayCallbackProxy : public UObject : UObject
{ 
public:
	FMulticastInlineDelegate                           Finished;                                                   // 0x0028   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0038   (0x0008)  MISSED


	/// Functions
	// Function /Script/UMG.WidgetAnimationPlayCallbackProxy.CreatePlayAnimationTimeRangeProxyObject
	UWidgetAnimationPlayCallbackProxy* CreatePlayAnimationTimeRangeProxyObject(UUMGSequencePlayer*& Result, UUserWidget* Widget, UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int32_t NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode> PlayMode, float PlaybackSpeed); // [0x3a06f80] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.WidgetAnimationPlayCallbackProxy.CreatePlayAnimationProxyObject
	UWidgetAnimationPlayCallbackProxy* CreatePlayAnimationProxyObject(UUMGSequencePlayer*& Result, UUserWidget* Widget, UWidgetAnimation* InAnimation, float StartAtTime, int32_t NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode> PlayMode, float PlaybackSpeed); // [0x3a06cd0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UMG.PropertyBinding
/// Size: 0x0048 (0x000028 - 0x000070)
class UPropertyBinding : public UObject : UObject
{ 
public:
	TWeakObjectPtr<UObject*>                           SourceObject;                                               // 0x0028   (0x0008)  
	FDynamicPropertyPath                               SourcePath;                                                 // 0x0030   (0x0038)  
	FName                                              DestinationProperty;                                        // 0x0068   (0x0008)  
};

/// Class /Script/UMG.BoolBinding
/// Size: 0x0000 (0x000070 - 0x000070)
class UBoolBinding : public UPropertyBinding : UPropertyBinding
{ 
public:
};

/// Class /Script/UMG.BrushBinding
/// Size: 0x0008 (0x000070 - 0x000078)
class UBrushBinding : public UPropertyBinding : UPropertyBinding
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0070   (0x0008)  MISSED
};

/// Class /Script/UMG.CheckedStateBinding
/// Size: 0x0008 (0x000070 - 0x000078)
class UCheckedStateBinding : public UPropertyBinding : UPropertyBinding
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0070   (0x0008)  MISSED
};

/// Class /Script/UMG.ColorBinding
/// Size: 0x0008 (0x000070 - 0x000078)
class UColorBinding : public UPropertyBinding : UPropertyBinding
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0070   (0x0008)  MISSED
};

/// Class /Script/UMG.FloatBinding
/// Size: 0x0000 (0x000070 - 0x000070)
class UFloatBinding : public UPropertyBinding : UPropertyBinding
{ 
public:
};

/// Class /Script/UMG.Int32Binding
/// Size: 0x0000 (0x000070 - 0x000070)
class UInt32Binding : public UPropertyBinding : UPropertyBinding
{ 
public:
};

/// Class /Script/UMG.MouseCursorBinding
/// Size: 0x0000 (0x000070 - 0x000070)
class UMouseCursorBinding : public UPropertyBinding : UPropertyBinding
{ 
public:
};

/// Class /Script/UMG.TextBinding
/// Size: 0x0008 (0x000070 - 0x000078)
class UTextBinding : public UPropertyBinding : UPropertyBinding
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0070   (0x0008)  MISSED
};

/// Class /Script/UMG.VisibilityBinding
/// Size: 0x0000 (0x000070 - 0x000070)
class UVisibilityBinding : public UPropertyBinding : UPropertyBinding
{ 
public:
};

/// Class /Script/UMG.WidgetBinding
/// Size: 0x0000 (0x000070 - 0x000070)
class UWidgetBinding : public UPropertyBinding : UPropertyBinding
{ 
public:
};

/// Class /Script/UMG.AsyncTaskDownloadImage
/// Size: 0x0020 (0x000030 - 0x000050)
class UAsyncTaskDownloadImage : public UBlueprintAsyncActionBase : UBlueprintAsyncActionBase
{ 
public:
	FMulticastInlineDelegate                           OnSuccess;                                                  // 0x0030   (0x0010)  
	FMulticastInlineDelegate                           OnFail;                                                     // 0x0040   (0x0010)  


	/// Functions
	// Function /Script/UMG.AsyncTaskDownloadImage.DownloadImage
	UAsyncTaskDownloadImage* DownloadImage(FString URL);                                                                     // [0x3a07280] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UMG.GameViewportSubsystem
/// Size: 0x0080 (0x000030 - 0x0000B0)
class UGameViewportSubsystem : public UEngineSubsystem : UEngineSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x80];                                      // 0x0030   (0x0080)  MISSED
};

/// Class /Script/UMG.UserListEntry
/// Size: 0x0000 (0x000028 - 0x000028)
class UUserListEntry : public UInterface : UInterface
{ 
public:
};

/// Class /Script/UMG.UserListEntryLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UUserListEntryLibrary : public UBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/UMG.UserObjectListEntry
/// Size: 0x0000 (0x000028 - 0x000028)
class UUserObjectListEntry : public UUserListEntry : UUserListEntry
{ 
public:
};

/// Class /Script/UMG.UserObjectListEntryLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UUserObjectListEntryLibrary : public UBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/UMG.BackgroundBlur
/// Size: 0x0128 (0x000168 - 0x000290)
class UBackgroundBlur : public UContentWidget : UContentWidget
{ 
public:
	FMargin                                            Padding;                                                    // 0x0168   (0x0010)  
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                        // 0x0178   (0x0001)  
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                          // 0x0179   (0x0001)  
	bool                                               bApplyAlphaToBlur;                                          // 0x017A   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x017B   (0x0001)  MISSED
	float                                              BlurStrength;                                               // 0x017C   (0x0004)  
	bool                                               bOverrideAutoRadiusCalculation;                             // 0x0180   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0181   (0x0003)  MISSED
	int32_t                                            BlurRadius;                                                 // 0x0184   (0x0004)  
	unsigned char                                      UnknownData02_5[0x8];                                       // 0x0188   (0x0008)  MISSED
	FVector4                                           CornerRadius;                                               // 0x0190   (0x0020)  
	FSlateBrush                                        LowQualityFallbackBrush;                                    // 0x01B0   (0x00D0)  
	unsigned char                                      UnknownData03_6[0x10];                                      // 0x0280   (0x0010)  MISSED


	/// Functions
	// Function /Script/UMG.BackgroundBlur.SetVerticalAlignment
	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                          // [0x3a0c860] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.BackgroundBlur.SetPadding
	void SetPadding(FMargin InPadding);                                                                                      // [0x3a0b870] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.BackgroundBlur.SetLowQualityFallbackBrush
	void SetLowQualityFallbackBrush(FSlateBrush& InBrush);                                                                   // [0x3a0b330] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.BackgroundBlur.SetHorizontalAlignment
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                    // [0x3a0ad30] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.BackgroundBlur.SetCornerRadius
	void SetCornerRadius(FVector4 InCornerRadius);                                                                           // [0x3a0a7b0] Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.BackgroundBlur.SetBlurStrength
	void SetBlurStrength(float InStrength);                                                                                  // [0x3a09ff0] Native|Public|BlueprintCallable 
	// Function /Script/UMG.BackgroundBlur.SetBlurRadius
	void SetBlurRadius(int32_t InBlurRadius);                                                                                // [0x3a09f30] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.BackgroundBlur.SetApplyAlphaToBlur
	void SetApplyAlphaToBlur(bool bInApplyAlphaToBlur);                                                                      // [0x3a09d50] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.BackgroundBlurSlot
/// Size: 0x0028 (0x000038 - 0x000060)
class UBackgroundBlurSlot : public UPanelSlot : UPanelSlot
{ 
public:
	FMargin                                            Padding;                                                    // 0x0038   (0x0010)  
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                        // 0x0048   (0x0001)  
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                          // 0x0049   (0x0001)  
	unsigned char                                      UnknownData00_6[0x16];                                      // 0x004A   (0x0016)  MISSED


	/// Functions
	// Function /Script/UMG.BackgroundBlurSlot.SetVerticalAlignment
	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                          // [0x3a0c8f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.BackgroundBlurSlot.SetPadding
	void SetPadding(FMargin InPadding);                                                                                      // [0x3a0b920] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.BackgroundBlurSlot.SetHorizontalAlignment
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                    // [0x3a0adc0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.BorderSlot
/// Size: 0x0028 (0x000038 - 0x000060)
class UBorderSlot : public UPanelSlot : UPanelSlot
{ 
public:
	FMargin                                            Padding;                                                    // 0x0038   (0x0010)  
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                        // 0x0048   (0x0001)  
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                          // 0x0049   (0x0001)  
	unsigned char                                      UnknownData00_6[0x16];                                      // 0x004A   (0x0016)  MISSED


	/// Functions
	// Function /Script/UMG.BorderSlot.SetVerticalAlignment
	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                          // [0x3a0ca20] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.BorderSlot.SetPadding
	void SetPadding(FMargin InPadding);                                                                                      // [0x3a0ba90] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.BorderSlot.SetHorizontalAlignment
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                    // [0x3a0aef0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.ButtonSlot
/// Size: 0x0028 (0x000038 - 0x000060)
class UButtonSlot : public UPanelSlot : UPanelSlot
{ 
public:
	FMargin                                            Padding;                                                    // 0x0038   (0x0010)  
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                        // 0x0048   (0x0001)  
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                          // 0x0049   (0x0001)  
	unsigned char                                      UnknownData00_6[0x16];                                      // 0x004A   (0x0016)  MISSED


	/// Functions
	// Function /Script/UMG.ButtonSlot.SetVerticalAlignment
	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                          // [0x3a0cac0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ButtonSlot.SetPadding
	void SetPadding(FMargin InPadding);                                                                                      // [0x3a0bb50] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ButtonSlot.SetHorizontalAlignment
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                    // [0x3a0af90] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.CanvasPanel
/// Size: 0x0010 (0x000168 - 0x000178)
class UCanvasPanel : public UPanelWidget : UPanelWidget
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0168   (0x0010)  MISSED
};

/// Class /Script/UMG.CanvasPanelSlot
/// Size: 0x0050 (0x000038 - 0x000088)
class UCanvasPanelSlot : public UPanelSlot : UPanelSlot
{ 
public:
	FAnchorData                                        LayoutData;                                                 // 0x0038   (0x0040)  
	bool                                               bAutoSize;                                                  // 0x0078   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0079   (0x0003)  MISSED
	int32_t                                            ZOrder;                                                     // 0x007C   (0x0004)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0080   (0x0008)  MISSED


	/// Functions
	// Function /Script/UMG.CanvasPanelSlot.SetZOrder
	void SetZOrder(int32_t InZOrder);                                                                                        // [0x3a0d410] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.CanvasPanelSlot.SetSize
	void SetSize(FVector2D InSize);                                                                                          // [0x3a0c390] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.CanvasPanelSlot.SetPosition
	void SetPosition(FVector2D InPosition);                                                                                  // [0x3a0bc80] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.CanvasPanelSlot.SetOffsets
	void SetOffsets(FMargin InOffset);                                                                                       // [0x3a0b760] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.CanvasPanelSlot.SetMinimum
	void SetMinimum(FVector2D InMinimumAnchors);                                                                             // [0x3a0b520] Final|Native|Public|HasDefaults 
	// Function /Script/UMG.CanvasPanelSlot.SetMaximum
	void SetMaximum(FVector2D InMaximumAnchors);                                                                             // [0x3a0b410] Final|Native|Public|HasDefaults 
	// Function /Script/UMG.CanvasPanelSlot.SetLayout
	void SetLayout(FAnchorData& InLayoutData);                                                                               // [0x3a0b280] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.CanvasPanelSlot.SetAutoSize
	void SetAutoSize(bool InbAutoSize);                                                                                      // [0x3a09df0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.CanvasPanelSlot.SetAnchors
	void SetAnchors(FAnchors InAnchors);                                                                                     // [0x3a09cb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.CanvasPanelSlot.SetAlignment
	void SetAlignment(FVector2D InAlignment);                                                                                // [0x3a09bb0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.CanvasPanelSlot.GetZOrder
	int32_t GetZOrder();                                                                                                     // [0x3a08c70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.CanvasPanelSlot.GetSize
	FVector2D GetSize();                                                                                                     // [0x3a080c0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.CanvasPanelSlot.GetPosition
	FVector2D GetPosition();                                                                                                 // [0x3a07eb0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.CanvasPanelSlot.GetOffsets
	FMargin GetOffsets();                                                                                                    // [0x3a07c30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.CanvasPanelSlot.GetLayout
	FAnchorData GetLayout();                                                                                                 // [0x3a07a30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.CanvasPanelSlot.GetAutoSize
	bool GetAutoSize();                                                                                                      // [0x3a07670] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.CanvasPanelSlot.GetAnchors
	FAnchors GetAnchors();                                                                                                   // [0x3a075c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.CanvasPanelSlot.GetAlignment
	FVector2D GetAlignment();                                                                                                // [0x3a07480] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.CheckBox
/// Size: 0x0B18 (0x000168 - 0x000C80)
class UCheckBox : public UContentWidget : UContentWidget
{ 
public:
	ECheckBoxState                                     CheckedState;                                               // 0x0168   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0169   (0x0003)  MISSED
	FDelegateProperty                                  CheckedStateDelegate;                                       // 0x016C   (0x0010)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x017C   (0x0004)  MISSED
	FCheckBoxStyle                                     WidgetStyle;                                                // 0x0180   (0x0AD0)  
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                        // 0x0C50   (0x0001)  
	TEnumAsByte<EButtonClickMethod>                    ClickMethod;                                                // 0x0C51   (0x0001)  
	TEnumAsByte<EButtonTouchMethod>                    TouchMethod;                                                // 0x0C52   (0x0001)  
	TEnumAsByte<EButtonPressMethod>                    PressMethod;                                                // 0x0C53   (0x0001)  
	bool                                               IsFocusable;                                                // 0x0C54   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0C55   (0x0003)  MISSED
	FMulticastInlineDelegate                           OnCheckStateChanged;                                        // 0x0C58   (0x0010)  
	unsigned char                                      UnknownData03_6[0x18];                                      // 0x0C68   (0x0018)  MISSED


	/// Functions
	// Function /Script/UMG.CheckBox.SetTouchMethod
	void SetTouchMethod(TEnumAsByte<EButtonTouchMethod> InTouchMethod);                                                      // [0x3a0c7d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.CheckBox.SetPressMethod
	void SetPressMethod(TEnumAsByte<EButtonPressMethod> InPressMethod);                                                      // [0x3a0be20] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.CheckBox.SetIsChecked
	void SetIsChecked(bool InIsChecked);                                                                                     // [0x3a0b010] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.CheckBox.SetClickMethod
	void SetClickMethod(TEnumAsByte<EButtonClickMethod> InClickMethod);                                                      // [0x3a0a530] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.CheckBox.SetCheckedState
	void SetCheckedState(ECheckBoxState InCheckedState);                                                                     // [0x3a0a420] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.CheckBox.IsPressed
	bool IsPressed();                                                                                                        // [0x3a08f60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.CheckBox.IsChecked
	bool IsChecked();                                                                                                        // [0x3a08cb0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.CheckBox.GetCheckedState
	ECheckBoxState GetCheckedState();                                                                                        // [0x3a076a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.CircularThrobber
/// Size: 0x0100 (0x000150 - 0x000250)
class UCircularThrobber : public UWidget : UWidget
{ 
public:
	int32_t                                            NumberOfPieces;                                             // 0x0150   (0x0004)  
	float                                              Period;                                                     // 0x0154   (0x0004)  
	float                                              Radius;                                                     // 0x0158   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x015C   (0x0004)  MISSED
	FSlateBrush                                        Image;                                                      // 0x0160   (0x00D0)  
	bool                                               bEnableRadius;                                              // 0x0230   (0x0001)  
	unsigned char                                      UnknownData01_6[0x1F];                                      // 0x0231   (0x001F)  MISSED


	/// Functions
	// Function /Script/UMG.CircularThrobber.setRadius
	void setRadius(float InRadius);                                                                                          // [0x3a0bf60] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.CircularThrobber.SetPeriod
	void SetPeriod(float InPeriod);                                                                                          // [0x3a0bbe0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.CircularThrobber.SetNumberOfPieces
	void SetNumberOfPieces(int32_t InNumberOfPieces);                                                                        // [0x3a0b6b0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.ComboBox
/// Size: 0x07B0 (0x000150 - 0x000900)
class UComboBox : public UWidget : UWidget
{ 
public:
	FScrollBarStyle                                    ScrollBarStyle;                                             // 0x0150   (0x0770)  
	TArray<UObject*>                                   Items;                                                      // 0x08C0   (0x0010)  
	FDelegateProperty                                  OnGenerateWidgetEvent;                                      // 0x08D0   (0x0010)  
	bool                                               bIsFocusable;                                               // 0x08E0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1F];                                      // 0x08E1   (0x001F)  MISSED
};

/// Class /Script/UMG.ComboBoxKey
/// Size: 0x1BD0 (0x000150 - 0x001D20)
class UComboBoxKey : public UWidget : UWidget
{ 
public:
	TArray<FName>                                      Options;                                                    // 0x0150   (0x0010)  
	FName                                              SelectedOption;                                             // 0x0160   (0x0008)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0168   (0x0008)  MISSED
	FComboBoxStyle                                     WidgetStyle;                                                // 0x0170   (0x0660)  
	FTableRowStyle                                     ItemStyle;                                                  // 0x07D0   (0x0D50)  
	FScrollBarStyle                                    ScrollBarStyle;                                             // 0x1520   (0x0770)  
	FSlateColor                                        ForegroundColor;                                            // 0x1C90   (0x0014)  
	FMargin                                            ContentPadding;                                             // 0x1CA4   (0x0010)  
	float                                              MaxListHeight;                                              // 0x1CB4   (0x0004)  
	bool                                               bHasDownArrow;                                              // 0x1CB8   (0x0001)  
	bool                                               bEnableGamepadNavigationMode;                               // 0x1CB9   (0x0001)  
	bool                                               bIsFocusable;                                               // 0x1CBA   (0x0001)  
	unsigned char                                      UnknownData01_5[0x1];                                       // 0x1CBB   (0x0001)  MISSED
	FDelegateProperty                                  OnGenerateContentWidget;                                    // 0x1CBC   (0x0010)  
	FDelegateProperty                                  OnGenerateItemWidget;                                       // 0x1CCC   (0x0010)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x1CDC   (0x0004)  MISSED
	FMulticastInlineDelegate                           OnSelectionChanged;                                         // 0x1CE0   (0x0010)  
	FMulticastInlineDelegate                           OnOpening;                                                  // 0x1CF0   (0x0010)  
	unsigned char                                      UnknownData03_6[0x20];                                      // 0x1D00   (0x0020)  MISSED


	/// Functions
	// Function /Script/UMG.ComboBoxKey.SetSelectedOption
	void SetSelectedOption(FName Option);                                                                                    // [0x3a0c080] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ComboBoxKey.RemoveOption
	bool RemoveOption(FName Option);                                                                                         // [0x3a09460] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ComboBoxKey.OnSelectionChangedEvent__DelegateSignature
	void OnSelectionChangedEvent__DelegateSignature(FName SelectedItem, TEnumAsByte<ESelectInfo> SelectionType);             // [0x2407bf0] MulticastDelegate|Public|Delegate 
	// Function /Script/UMG.ComboBoxKey.OnOpeningEvent__DelegateSignature
	void OnOpeningEvent__DelegateSignature();                                                                                // [0x2407bf0] MulticastDelegate|Public|Delegate 
	// Function /Script/UMG.ComboBoxKey.IsOpen
	bool IsOpen();                                                                                                           // [0x3a08e80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ComboBoxKey.GetSelectedOption
	FName GetSelectedOption();                                                                                               // [0x3a07fc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ComboBoxKey.GenerateWidgetEvent__DelegateSignature
	UWidget* GenerateWidgetEvent__DelegateSignature(FName Item);                                                             // [0x2407bf0] Public|Delegate      
	// Function /Script/UMG.ComboBoxKey.ClearSelection
	void ClearSelection();                                                                                                   // [0x3a06c80] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ComboBoxKey.ClearOptions
	void ClearOptions();                                                                                                     // [0x3a06ba0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ComboBoxKey.AddOption
	void AddOption(FName Option);                                                                                            // [0x3a063d0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.ComboBoxString
/// Size: 0x1C50 (0x000150 - 0x001DA0)
class UComboBoxString : public UWidget : UWidget
{ 
public:
	TArray<FString>                                    DefaultOptions;                                             // 0x0150   (0x0010)  
	FString                                            SelectedOption;                                             // 0x0160   (0x0010)  
	FComboBoxStyle                                     WidgetStyle;                                                // 0x0170   (0x0660)  
	FTableRowStyle                                     ItemStyle;                                                  // 0x07D0   (0x0D50)  
	FScrollBarStyle                                    ScrollBarStyle;                                             // 0x1520   (0x0770)  
	FMargin                                            ContentPadding;                                             // 0x1C90   (0x0010)  
	float                                              MaxListHeight;                                              // 0x1CA0   (0x0004)  
	bool                                               HasDownArrow;                                               // 0x1CA4   (0x0001)  
	bool                                               EnableGamepadNavigationMode;                                // 0x1CA5   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x1CA6   (0x0002)  MISSED
	FSlateFontInfo                                     Font;                                                       // 0x1CA8   (0x0058)  
	FSlateColor                                        ForegroundColor;                                            // 0x1D00   (0x0014)  
	bool                                               bIsFocusable;                                               // 0x1D14   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x1D15   (0x0003)  MISSED
	FDelegateProperty                                  OnGenerateWidgetEvent;                                      // 0x1D18   (0x0010)  
	FMulticastInlineDelegate                           OnSelectionChanged;                                         // 0x1D28   (0x0010)  
	FMulticastInlineDelegate                           OnOpening;                                                  // 0x1D38   (0x0010)  
	unsigned char                                      UnknownData02_6[0x58];                                      // 0x1D48   (0x0058)  MISSED


	/// Functions
	// Function /Script/UMG.ComboBoxString.SetSelectedOption
	void SetSelectedOption(FString Option);                                                                                  // [0x3a0c1b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ComboBoxString.SetSelectedIndex
	void SetSelectedIndex(int32_t Index);                                                                                    // [0x3a0bff0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ComboBoxString.RemoveOption
	bool RemoveOption(FString Option);                                                                                       // [0x3a09590] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ComboBoxString.RefreshOptions
	void RefreshOptions();                                                                                                   // [0x3a090c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ComboBoxString.OnSelectionChangedEvent__DelegateSignature
	void OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, TEnumAsByte<ESelectInfo> SelectionType);           // [0x2407bf0] MulticastDelegate|Public|Delegate 
	// Function /Script/UMG.ComboBoxString.OnOpeningEvent__DelegateSignature
	void OnOpeningEvent__DelegateSignature();                                                                                // [0x2407bf0] MulticastDelegate|Public|Delegate 
	// Function /Script/UMG.ComboBoxString.IsOpen
	bool IsOpen();                                                                                                           // [0x3a08ed0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ComboBoxString.GetSelectedOption
	FString GetSelectedOption();                                                                                             // [0x3a07fe0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ComboBoxString.GetSelectedIndex
	int32_t GetSelectedIndex();                                                                                              // [0x3a07f60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ComboBoxString.GetOptionCount
	int32_t GetOptionCount();                                                                                                // [0x3a07e00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ComboBoxString.GetOptionAtIndex
	FString GetOptionAtIndex(int32_t Index);                                                                                 // [0x3a07cd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ComboBoxString.FindOptionIndex
	int32_t FindOptionIndex(FString Option);                                                                                 // [0x3a07370] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ComboBoxString.ClearSelection
	void ClearSelection();                                                                                                   // [0x3a06cb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ComboBoxString.ClearOptions
	void ClearOptions();                                                                                                     // [0x3a06c20] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ComboBoxString.AddOption
	void AddOption(FString Option);                                                                                          // [0x3a06490] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.DynamicEntryBox
/// Size: 0x0008 (0x000230 - 0x000238)
class UDynamicEntryBox : public UDynamicEntryBoxBase : UDynamicEntryBoxBase
{ 
public:
	UClass*                                            EntryWidgetClass;                                           // 0x0230   (0x0008)  


	/// Functions
	// Function /Script/UMG.DynamicEntryBox.Reset
	void Reset(bool bDeleteWidgets);                                                                                         // [0x3a09b20] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.DynamicEntryBox.RemoveEntry
	void RemoveEntry(UUserWidget* EntryWidget);                                                                              // [0x3a09100] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.DynamicEntryBox.BP_CreateEntryOfClass
	UUserWidget* BP_CreateEntryOfClass(UClass* EntryClass);                                                                  // [0x3a06820] Final|Native|Private|BlueprintCallable 
	// Function /Script/UMG.DynamicEntryBox.BP_CreateEntry
	UUserWidget* BP_CreateEntry();                                                                                           // [0x3a067e0] Final|Native|Private|BlueprintCallable 
};

/// Class /Script/UMG.EditableText
/// Size: 0x0390 (0x000150 - 0x0004E0)
class UEditableText : public UWidget : UWidget
{ 
public:
	FText                                              Text;                                                       // 0x0150   (0x0018)  
	FDelegateProperty                                  TextDelegate;                                               // 0x0168   (0x0010)  
	FText                                              HintText;                                                   // 0x0178   (0x0018)  
	FDelegateProperty                                  HintTextDelegate;                                           // 0x0190   (0x0010)  
	FEditableTextStyle                                 WidgetStyle;                                                // 0x01A0   (0x02F0)  
	bool                                               IsReadOnly;                                                 // 0x0490   (0x0001)  
	bool                                               IsPassword;                                                 // 0x0491   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0492   (0x0002)  MISSED
	float                                              MinimumDesiredWidth;                                        // 0x0494   (0x0004)  
	bool                                               IsCaretMovedWhenGainFocus;                                  // 0x0498   (0x0001)  
	bool                                               SelectAllTextWhenFocused;                                   // 0x0499   (0x0001)  
	bool                                               RevertTextOnEscape;                                         // 0x049A   (0x0001)  
	bool                                               ClearKeyboardFocusOnCommit;                                 // 0x049B   (0x0001)  
	bool                                               SelectAllTextOnCommit;                                      // 0x049C   (0x0001)  
	bool                                               AllowContextMenu;                                           // 0x049D   (0x0001)  
	TEnumAsByte<EVirtualKeyboardType>                  KeyboardType;                                               // 0x049E   (0x0001)  
	FVirtualKeyboardOptions                            VirtualKeyboardOptions;                                     // 0x049F   (0x0001)  
	EVirtualKeyboardTrigger                            VirtualKeyboardTrigger;                                     // 0x04A0   (0x0001)  
	EVirtualKeyboardDismissAction                      VirtualKeyboardDismissAction;                               // 0x04A1   (0x0001)  
	TEnumAsByte<ETextJustify>                          Justification;                                              // 0x04A2   (0x0001)  
	ETextOverflowPolicy                                OverflowPolicy;                                             // 0x04A3   (0x0001)  
	FShapedTextOptions                                 ShapedTextOptions;                                          // 0x04A4   (0x0003)  
	unsigned char                                      UnknownData01_5[0x1];                                       // 0x04A7   (0x0001)  MISSED
	FMulticastInlineDelegate                           OnTextChanged;                                              // 0x04A8   (0x0010)  
	FMulticastInlineDelegate                           OnTextCommitted;                                            // 0x04B8   (0x0010)  
	unsigned char                                      UnknownData02_6[0x18];                                      // 0x04C8   (0x0018)  MISSED


	/// Functions
	// Function /Script/UMG.EditableText.SetTextOverflowPolicy
	void SetTextOverflowPolicy(ETextOverflowPolicy InOverflowPolicy);                                                        // [0x3a0c6a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.EditableText.SetText
	void SetText(FText InText);                                                                                              // [0x3a0c5c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.EditableText.SetMinimumDesiredWidth
	void SetMinimumDesiredWidth(float InMinDesiredWidth);                                                                    // [0x3a0b630] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.EditableText.SetJustification
	void SetJustification(TEnumAsByte<ETextJustify> InJustification);                                                        // [0x3a0b200] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.EditableText.SetIsReadOnly
	void SetIsReadOnly(bool InbIsReadyOnly);                                                                                 // [0x3a0b150] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.EditableText.SetIsPassword
	void SetIsPassword(bool InbIsPassword);                                                                                  // [0x3a0b0a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.EditableText.SetHintText
	void SetHintText(FText InHintText);                                                                                      // [0x3a0ac50] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.EditableText.SetFontOutlineMaterial
	void SetFontOutlineMaterial(UMaterialInterface* InMaterial);                                                             // [0x3a0abb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.EditableText.SetFontMaterial
	void SetFontMaterial(UMaterialInterface* InMaterial);                                                                    // [0x3a0ab10] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.EditableText.SetFont
	void SetFont(FSlateFontInfo InFontInfo);                                                                                 // [0x3a0a990] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.EditableText.OnEditableTextCommittedEvent__DelegateSignature
	void OnEditableTextCommittedEvent__DelegateSignature(FText& Text, TEnumAsByte<ETextCommit> CommitMethod);                // [0x2407bf0] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/UMG.EditableText.OnEditableTextChangedEvent__DelegateSignature
	void OnEditableTextChangedEvent__DelegateSignature(FText& Text);                                                         // [0x2407bf0] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/UMG.EditableText.GetText
	FText GetText();                                                                                                         // [0x3a083a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.EditableText.GetJustification
	TEnumAsByte<ETextJustify> GetJustification();                                                                            // [0x3a07a10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.EditableText.GetHintText
	FText GetHintText();                                                                                                     // [0x3a07940] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.EditableText.GetFont
	FSlateFontInfo GetFont();                                                                                                // [0x3a07910] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.EditableTextBox
/// Size: 0x0F20 (0x000150 - 0x001070)
class UEditableTextBox : public UWidget : UWidget
{ 
public:
	FText                                              Text;                                                       // 0x0150   (0x0018)  
	FDelegateProperty                                  TextDelegate;                                               // 0x0168   (0x0010)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0178   (0x0008)  MISSED
	FEditableTextBoxStyle                              WidgetStyle;                                                // 0x0180   (0x0E80)  
	FText                                              HintText;                                                   // 0x1000   (0x0018)  
	FDelegateProperty                                  HintTextDelegate;                                           // 0x1018   (0x0010)  
	bool                                               IsReadOnly;                                                 // 0x1028   (0x0001)  
	bool                                               IsPassword;                                                 // 0x1029   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x102A   (0x0002)  MISSED
	float                                              MinimumDesiredWidth;                                        // 0x102C   (0x0004)  
	bool                                               IsCaretMovedWhenGainFocus;                                  // 0x1030   (0x0001)  
	bool                                               SelectAllTextWhenFocused;                                   // 0x1031   (0x0001)  
	bool                                               RevertTextOnEscape;                                         // 0x1032   (0x0001)  
	bool                                               ClearKeyboardFocusOnCommit;                                 // 0x1033   (0x0001)  
	bool                                               SelectAllTextOnCommit;                                      // 0x1034   (0x0001)  
	bool                                               AllowContextMenu;                                           // 0x1035   (0x0001)  
	TEnumAsByte<EVirtualKeyboardType>                  KeyboardType;                                               // 0x1036   (0x0001)  
	FVirtualKeyboardOptions                            VirtualKeyboardOptions;                                     // 0x1037   (0x0001)  
	EVirtualKeyboardTrigger                            VirtualKeyboardTrigger;                                     // 0x1038   (0x0001)  
	EVirtualKeyboardDismissAction                      VirtualKeyboardDismissAction;                               // 0x1039   (0x0001)  
	TEnumAsByte<ETextJustify>                          Justification;                                              // 0x103A   (0x0001)  
	ETextOverflowPolicy                                OverflowPolicy;                                             // 0x103B   (0x0001)  
	FShapedTextOptions                                 ShapedTextOptions;                                          // 0x103C   (0x0003)  
	unsigned char                                      UnknownData02_5[0x1];                                       // 0x103F   (0x0001)  MISSED
	FMulticastInlineDelegate                           OnTextChanged;                                              // 0x1040   (0x0010)  
	FMulticastInlineDelegate                           OnTextCommitted;                                            // 0x1050   (0x0010)  
	unsigned char                                      UnknownData03_6[0x10];                                      // 0x1060   (0x0010)  MISSED


	/// Functions
	// Function /Script/UMG.EditableTextBox.SetTextOverflowPolicy
	void SetTextOverflowPolicy(ETextOverflowPolicy InOverflowPolicy);                                                        // [0x3a64290] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.EditableTextBox.SetText
	void SetText(FText InText);                                                                                              // [0x3a63d00] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.EditableTextBox.SetJustification
	void SetJustification(TEnumAsByte<ETextJustify> InJustification);                                                        // [0x3a600a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.EditableTextBox.SetIsReadOnly
	void SetIsReadOnly(bool bReadOnly);                                                                                      // [0x3a5fdf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.EditableTextBox.SetIsPassword
	void SetIsPassword(bool bIsPassword);                                                                                    // [0x3a5fd40] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.EditableTextBox.SetHintText
	void SetHintText(FText InText);                                                                                          // [0x3a5f2f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.EditableTextBox.SetForegroundColor
	void SetForegroundColor(FLinearColor Color);                                                                             // [0x3a5ef90] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.EditableTextBox.SetError
	void SetError(FText InError);                                                                                            // [0x3a5e420] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.EditableTextBox.OnEditableTextBoxCommittedEvent__DelegateSignature
	void OnEditableTextBoxCommittedEvent__DelegateSignature(FText& Text, TEnumAsByte<ETextCommit> CommitMethod);             // [0x2407bf0] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/UMG.EditableTextBox.OnEditableTextBoxChangedEvent__DelegateSignature
	void OnEditableTextBoxChangedEvent__DelegateSignature(FText& Text);                                                      // [0x2407bf0] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/UMG.EditableTextBox.HasError
	bool HasError();                                                                                                         // [0x3a59fc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.EditableTextBox.GetText
	FText GetText();                                                                                                         // [0x3a59660] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.EditableTextBox.ClearError
	void ClearError();                                                                                                       // [0x3a576c0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.ExpandableArea
/// Size: 0x0310 (0x000150 - 0x000460)
class UExpandableArea : public UWidget : UWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0150   (0x0010)  MISSED
	FExpandableAreaStyle                               Style;                                                      // 0x0160   (0x01C0)  
	FSlateBrush                                        BorderBrush;                                                // 0x0320   (0x00D0)  
	FSlateColor                                        BorderColor;                                                // 0x03F0   (0x0014)  
	bool                                               bIsExpanded;                                                // 0x0404   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0405   (0x0003)  MISSED
	float                                              MaxHeight;                                                  // 0x0408   (0x0004)  
	FMargin                                            HeaderPadding;                                              // 0x040C   (0x0010)  
	FMargin                                            AreaPadding;                                                // 0x041C   (0x0010)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x042C   (0x0004)  MISSED
	FMulticastInlineDelegate                           OnExpansionChanged;                                         // 0x0430   (0x0010)  
	UWidget*                                           HeaderContent;                                              // 0x0440   (0x0008)  
	UWidget*                                           BodyContent;                                                // 0x0448   (0x0008)  
	unsigned char                                      UnknownData03_6[0x10];                                      // 0x0450   (0x0010)  MISSED


	/// Functions
	// Function /Script/UMG.ExpandableArea.SetIsExpanded_Animated
	void SetIsExpanded_Animated(bool IsExpanded);                                                                            // [0x3a5fb40] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ExpandableArea.SetIsExpanded
	void SetIsExpanded(bool IsExpanded);                                                                                     // [0x3a5fab0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ExpandableArea.GetIsExpanded
	bool GetIsExpanded();                                                                                                    // [0x3a58f50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.GridPanel
/// Size: 0x0030 (0x000168 - 0x000198)
class UGridPanel : public UPanelWidget : UPanelWidget
{ 
public:
	TArray<float>                                      ColumnFill;                                                 // 0x0168   (0x0010)  
	TArray<float>                                      RowFill;                                                    // 0x0178   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0188   (0x0010)  MISSED


	/// Functions
	// Function /Script/UMG.GridPanel.SetRowFill
	void SetRowFill(int32_t RowIndex, float Coefficient);                                                                    // [0x3a62820] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.GridPanel.SetColumnFill
	void SetColumnFill(int32_t ColumnIndex, float Coefficient);                                                              // [0x3a5d470] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.GridPanel.AddChildToGrid
	UGridSlot* AddChildToGrid(UWidget* Content, int32_t InRow, int32_t InColumn);                                            // [0x3a55df0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.GridSlot
/// Size: 0x0040 (0x000038 - 0x000078)
class UGridSlot : public UPanelSlot : UPanelSlot
{ 
public:
	FMargin                                            Padding;                                                    // 0x0038   (0x0010)  
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                        // 0x0048   (0x0001)  
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                          // 0x0049   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x004A   (0x0002)  MISSED
	int32_t                                            Row;                                                        // 0x004C   (0x0004)  
	int32_t                                            RowSpan;                                                    // 0x0050   (0x0004)  
	int32_t                                            column;                                                     // 0x0054   (0x0004)  
	int32_t                                            ColumnSpan;                                                 // 0x0058   (0x0004)  
	int32_t                                            Layer;                                                      // 0x005C   (0x0004)  
	FVector2D                                          Nudge;                                                      // 0x0060   (0x0010)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0070   (0x0008)  MISSED


	/// Functions
	// Function /Script/UMG.GridSlot.SetVerticalAlignment
	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                          // [0x3a64f10] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.GridSlot.SetRowSpan
	void SetRowSpan(int32_t InRowSpan);                                                                                      // [0x3a629e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.GridSlot.SetRow
	void SetRow(int32_t InRow);                                                                                              // [0x3a626f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.GridSlot.SetPadding
	void SetPadding(FMargin InPadding);                                                                                      // [0x3a61bc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.GridSlot.SetNudge
	void SetNudge(FVector2D InNudge);                                                                                        // [0x3a61780] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.GridSlot.SetLayer
	void SetLayer(int32_t InLayer);                                                                                          // [0x3a60370] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.GridSlot.SetHorizontalAlignment
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                    // [0x3a5f590] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.GridSlot.SetColumnSpan
	void SetColumnSpan(int32_t InColumnSpan);                                                                                // [0x3a5d630] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.GridSlot.SetColumn
	void SetColumn(int32_t InColumn);                                                                                        // [0x3a5d340] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.HorizontalBox
/// Size: 0x0010 (0x000168 - 0x000178)
class UHorizontalBox : public UPanelWidget : UPanelWidget
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0168   (0x0010)  MISSED
};

/// Class /Script/UMG.HorizontalBoxSlot
/// Size: 0x0028 (0x000038 - 0x000060)
class UHorizontalBoxSlot : public UPanelSlot : UPanelSlot
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0038   (0x0008)  MISSED
	FSlateChildSize                                    Size;                                                       // 0x0040   (0x0008)  
	FMargin                                            Padding;                                                    // 0x0048   (0x0010)  
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                        // 0x0058   (0x0001)  
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                          // 0x0059   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x005A   (0x0006)  MISSED


	/// Functions
	// Function /Script/UMG.HorizontalBoxSlot.SetVerticalAlignment
	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                          // [0x3a64fa0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.HorizontalBoxSlot.SetSize
	void SetSize(FSlateChildSize InSize);                                                                                    // [0x3a635c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.HorizontalBoxSlot.SetPadding
	void SetPadding(FMargin InPadding);                                                                                      // [0x3a61c50] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.HorizontalBoxSlot.SetHorizontalAlignment
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                    // [0x3a5f620] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.InputKeySelector
/// Size: 0x07E0 (0x000150 - 0x000930)
class UInputKeySelector : public UWidget : UWidget
{ 
public:
	FButtonStyle                                       WidgetStyle;                                                // 0x0150   (0x03F0)  
	FTextBlockStyle                                    TextStyle;                                                  // 0x0540   (0x0340)  
	FInputChord                                        SelectedKey;                                                // 0x0880   (0x0020)  
	FMargin                                            Margin;                                                     // 0x08A0   (0x0010)  
	FText                                              KeySelectionText;                                           // 0x08B0   (0x0018)  
	FText                                              NoKeySpecifiedText;                                         // 0x08C8   (0x0018)  
	bool                                               bAllowModifierKeys;                                         // 0x08E0   (0x0001)  
	bool                                               bAllowGamepadKeys;                                          // 0x08E1   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x08E2   (0x0006)  MISSED
	TArray<FKey>                                       EscapeKeys;                                                 // 0x08E8   (0x0010)  
	FMulticastInlineDelegate                           OnKeySelected;                                              // 0x08F8   (0x0010)  
	FMulticastInlineDelegate                           OnIsSelectingKeyChanged;                                    // 0x0908   (0x0010)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x0918   (0x0018)  MISSED


	/// Functions
	// Function /Script/UMG.InputKeySelector.SetTextBlockVisibility
	void SetTextBlockVisibility(ESlateVisibility InVisibility);                                                              // [0x3a64170] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.InputKeySelector.SetSelectedKey
	void SetSelectedKey(FInputChord& InSelectedKey);                                                                         // [0x3a630d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.InputKeySelector.SetNoKeySpecifiedText
	void SetNoKeySpecifiedText(FText InNoKeySpecifiedText);                                                                  // [0x3a616a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.InputKeySelector.SetKeySelectionText
	void SetKeySelectionText(FText InKeySelectionText);                                                                      // [0x3a601a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.InputKeySelector.SetEscapeKeys
	void SetEscapeKeys(TArray<FKey>& InKeys);                                                                                // [0x3a5e6a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.InputKeySelector.SetAllowModifierKeys
	void SetAllowModifierKeys(bool bInAllowModifierKeys);                                                                    // [0x3a5bff0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.InputKeySelector.SetAllowGamepadKeys
	void SetAllowGamepadKeys(bool bInAllowGamepadKeys);                                                                      // [0x3a5bf50] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.InputKeySelector.OnKeySelected__DelegateSignature
	void OnKeySelected__DelegateSignature(FInputChord SelectedKey);                                                          // [0x2407bf0] MulticastDelegate|Public|Delegate 
	// Function /Script/UMG.InputKeySelector.OnIsSelectingKeyChanged__DelegateSignature
	void OnIsSelectingKeyChanged__DelegateSignature();                                                                       // [0x2407bf0] MulticastDelegate|Public|Delegate 
	// Function /Script/UMG.InputKeySelector.GetIsSelectingKey
	bool GetIsSelectingKey();                                                                                                // [0x3a58f70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.InvalidationBox
/// Size: 0x0018 (0x000168 - 0x000180)
class UInvalidationBox : public UContentWidget : UContentWidget
{ 
public:
	bool                                               bCanCache;                                                  // 0x0168   (0x0001)  
	unsigned char                                      UnknownData00_6[0x17];                                      // 0x0169   (0x0017)  MISSED


	/// Functions
	// Function /Script/UMG.InvalidationBox.SetCanCache
	void SetCanCache(bool CanCache);                                                                                         // [0x3a5d0c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.InvalidationBox.InvalidateCache
	void InvalidateCache();                                                                                                  // [0xd0bd90] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.InvalidationBox.GetCanCache
	bool GetCanCache();                                                                                                      // [0x3a582c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.MenuAnchor
/// Size: 0x0050 (0x000168 - 0x0001B8)
class UMenuAnchor : public UContentWidget : UContentWidget
{ 
public:
	UClass*                                            MenuClass;                                                  // 0x0168   (0x0008)  
	FDelegateProperty                                  OnGetMenuContentEvent;                                      // 0x0170   (0x0010)  
	FDelegateProperty                                  OnGetUserMenuContentEvent;                                  // 0x0180   (0x0010)  
	TEnumAsByte<EMenuPlacement>                        Placement;                                                  // 0x0190   (0x0001)  
	bool                                               bFitInWindow;                                               // 0x0191   (0x0001)  
	bool                                               ShouldDeferPaintingAfterWindowContent;                      // 0x0192   (0x0001)  
	bool                                               UseApplicationMenuStack;                                    // 0x0193   (0x0001)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0194   (0x0004)  MISSED
	FMulticastInlineDelegate                           OnMenuOpenChanged;                                          // 0x0198   (0x0010)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x01A8   (0x0010)  MISSED


	/// Functions
	// Function /Script/UMG.MenuAnchor.ToggleOpen
	void ToggleOpen(bool bFocusOnOpen);                                                                                      // [0x3a65c20] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.MenuAnchor.ShouldOpenDueToClick
	bool ShouldOpenDueToClick();                                                                                             // [0x3a65a70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.MenuAnchor.SetPlacement
	void SetPlacement(TEnumAsByte<EMenuPlacement> InPlacement);                                                              // [0x3a62040] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.MenuAnchor.Open
	void Open(bool bFocusMenu);                                                                                              // [0x3a5b250] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.MenuAnchor.IsOpen
	bool IsOpen();                                                                                                           // [0x3a5a8e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.MenuAnchor.HasOpenSubMenus
	bool HasOpenSubMenus();                                                                                                  // [0x3a5a4a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.MenuAnchor.GetUserWidget__DelegateSignature
	UUserWidget* GetUserWidget__DelegateSignature();                                                                         // [0x2407bf0] Public|Delegate      
	// Function /Script/UMG.MenuAnchor.GetMenuPosition
	FVector2D GetMenuPosition();                                                                                             // [0x3a59180] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.MenuAnchor.FitInWindow
	void FitInWindow(bool bFit);                                                                                             // [0x3a57c80] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.MenuAnchor.Close
	void Close();                                                                                                            // [0x3a57ab0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.MultiLineEditableText
/// Size: 0x03C0 (0x000170 - 0x000530)
class UMultiLineEditableText : public UTextLayoutWidget : UTextLayoutWidget
{ 
public:
	FText                                              Text;                                                       // 0x0170   (0x0018)  
	FText                                              HintText;                                                   // 0x0188   (0x0018)  
	FDelegateProperty                                  HintTextDelegate;                                           // 0x01A0   (0x0010)  
	FTextBlockStyle                                    WidgetStyle;                                                // 0x01B0   (0x0340)  
	bool                                               bIsReadOnly;                                                // 0x04F0   (0x0001)  
	bool                                               SelectAllTextWhenFocused;                                   // 0x04F1   (0x0001)  
	bool                                               ClearTextSelectionOnFocusLoss;                              // 0x04F2   (0x0001)  
	bool                                               RevertTextOnEscape;                                         // 0x04F3   (0x0001)  
	bool                                               ClearKeyboardFocusOnCommit;                                 // 0x04F4   (0x0001)  
	bool                                               AllowContextMenu;                                           // 0x04F5   (0x0001)  
	FVirtualKeyboardOptions                            VirtualKeyboardOptions;                                     // 0x04F6   (0x0001)  
	EVirtualKeyboardDismissAction                      VirtualKeyboardDismissAction;                               // 0x04F7   (0x0001)  
	FMulticastInlineDelegate                           OnTextChanged;                                              // 0x04F8   (0x0010)  
	FMulticastInlineDelegate                           OnTextCommitted;                                            // 0x0508   (0x0010)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0518   (0x0018)  MISSED


	/// Functions
	// Function /Script/UMG.MultiLineEditableText.SetWidgetStyle
	void SetWidgetStyle(FTextBlockStyle& InWidgetStyle);                                                                     // [0x3a65720] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.MultiLineEditableText.SetText
	void SetText(FText InText);                                                                                              // [0x3a63de0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.MultiLineEditableText.SetIsReadOnly
	void SetIsReadOnly(bool bReadOnly);                                                                                      // [0x3a5fea0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.MultiLineEditableText.SetHintText
	void SetHintText(FText InHintText);                                                                                      // [0x3a5f3d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.MultiLineEditableText.SetFontOutlineMaterial
	void SetFontOutlineMaterial(UMaterialInterface* InMaterial);                                                             // [0x3a5edc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.MultiLineEditableText.SetFontMaterial
	void SetFontMaterial(UMaterialInterface* InMaterial);                                                                    // [0x3a5ebf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.MultiLineEditableText.SetFont
	void SetFont(FSlateFontInfo InFontInfo);                                                                                 // [0x3a5e940] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.MultiLineEditableText.OnMultiLineEditableTextCommittedEvent__DelegateSignature
	void OnMultiLineEditableTextCommittedEvent__DelegateSignature(FText& Text, TEnumAsByte<ETextCommit> CommitMethod);       // [0x2407bf0] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/UMG.MultiLineEditableText.OnMultiLineEditableTextChangedEvent__DelegateSignature
	void OnMultiLineEditableTextChangedEvent__DelegateSignature(FText& Text);                                                // [0x2407bf0] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/UMG.MultiLineEditableText.GetText
	FText GetText();                                                                                                         // [0x3a59740] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.MultiLineEditableText.GetHintText
	FText GetHintText();                                                                                                     // [0x3a58ca0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.MultiLineEditableText.GetFont
	FSlateFontInfo GetFont();                                                                                                // [0x3a58c00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.MultiLineEditableTextBox
/// Size: 0x0F00 (0x000170 - 0x001070)
class UMultiLineEditableTextBox : public UTextLayoutWidget : UTextLayoutWidget
{ 
public:
	FText                                              Text;                                                       // 0x0170   (0x0018)  
	FText                                              HintText;                                                   // 0x0188   (0x0018)  
	FDelegateProperty                                  HintTextDelegate;                                           // 0x01A0   (0x0010)  
	FEditableTextBoxStyle                              WidgetStyle;                                                // 0x01B0   (0x0E80)  
	bool                                               bIsReadOnly;                                                // 0x1030   (0x0001)  
	bool                                               AllowContextMenu;                                           // 0x1031   (0x0001)  
	FVirtualKeyboardOptions                            VirtualKeyboardOptions;                                     // 0x1032   (0x0001)  
	EVirtualKeyboardDismissAction                      VirtualKeyboardDismissAction;                               // 0x1033   (0x0001)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x1034   (0x0004)  MISSED
	FMulticastInlineDelegate                           OnTextChanged;                                              // 0x1038   (0x0010)  
	FMulticastInlineDelegate                           OnTextCommitted;                                            // 0x1048   (0x0010)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x1058   (0x0018)  MISSED


	/// Functions
	// Function /Script/UMG.MultiLineEditableTextBox.SetTextStyle
	void SetTextStyle(FTextBlockStyle& InTextStyle);                                                                         // [0x3a64460] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.MultiLineEditableTextBox.SetText
	void SetText(FText InText);                                                                                              // [0x3a63ec0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.MultiLineEditableTextBox.SetIsReadOnly
	void SetIsReadOnly(bool bReadOnly);                                                                                      // [0x3a5ff30] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.MultiLineEditableTextBox.SetHintText
	void SetHintText(FText InHintText);                                                                                      // [0x3a5f4b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.MultiLineEditableTextBox.SetForegroundColor
	void SetForegroundColor(FLinearColor Color);                                                                             // [0x3a5f050] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.MultiLineEditableTextBox.SetError
	void SetError(FText InError);                                                                                            // [0x3a5e560] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature
	void OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(FText& Text, TEnumAsByte<ETextCommit> CommitMethod);    // [0x2407bf0] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxChangedEvent__DelegateSignature
	void OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(FText& Text);                                             // [0x2407bf0] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/UMG.MultiLineEditableTextBox.GetText
	FText GetText();                                                                                                         // [0x3a59810] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.MultiLineEditableTextBox.GetHintText
	FText GetHintText();                                                                                                     // [0x3a58d70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.NamedSlot
/// Size: 0x0010 (0x000168 - 0x000178)
class UNamedSlot : public UContentWidget : UContentWidget
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0168   (0x0010)  MISSED
};

/// Class /Script/UMG.NamedSlotInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UNamedSlotInterface : public UInterface : UInterface
{ 
public:
};

/// Class /Script/UMG.NativeWidgetHost
/// Size: 0x0010 (0x000150 - 0x000160)
class UNativeWidgetHost : public UWidget : UWidget
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0150   (0x0010)  MISSED
};

/// Class /Script/UMG.ProgressBar
/// Size: 0x02F0 (0x000150 - 0x000440)
class UProgressBar : public UWidget : UWidget
{ 
public:
	FProgressBarStyle                                  WidgetStyle;                                                // 0x0150   (0x0290)  
	float                                              Percent;                                                    // 0x03E0   (0x0004)  
	TEnumAsByte<EProgressBarFillType>                  BarFillType;                                                // 0x03E4   (0x0001)  
	TEnumAsByte<EProgressBarFillStyle>                 BarFillStyle;                                               // 0x03E5   (0x0001)  
	bool                                               bIsMarquee;                                                 // 0x03E6   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x03E7   (0x0001)  MISSED
	FVector2D                                          BorderPadding;                                              // 0x03E8   (0x0010)  
	FDelegateProperty                                  PercentDelegate;                                            // 0x03F8   (0x0010)  
	FLinearColor                                       FillColorAndOpacity;                                        // 0x0408   (0x0010)  
	FDelegateProperty                                  FillColorAndOpacityDelegate;                                // 0x0418   (0x0010)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x0428   (0x0018)  MISSED


	/// Functions
	// Function /Script/UMG.ProgressBar.SetPercent
	void SetPercent(float InPercent);                                                                                        // [0x3a61f00] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ProgressBar.SetIsMarquee
	void SetIsMarquee(bool InbIsMarquee);                                                                                    // [0x3a5fc70] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ProgressBar.SetFillColorAndOpacity
	void SetFillColorAndOpacity(FLinearColor InColor);                                                                       // [0x3a5e850] Final|Native|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/UMG.RetainerBox
/// Size: 0x0030 (0x000168 - 0x000198)
class URetainerBox : public UContentWidget : UContentWidget
{ 
public:
	bool                                               bRetainRender;                                              // 0x0168   (0x0001)  
	bool                                               RenderOnInvalidation;                                       // 0x0169   (0x0001)  
	bool                                               RenderOnPhase;                                              // 0x016A   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x016B   (0x0001)  MISSED
	int32_t                                            Phase;                                                      // 0x016C   (0x0004)  
	int32_t                                            PhaseCount;                                                 // 0x0170   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0174   (0x0004)  MISSED
	UMaterialInterface*                                EffectMaterial;                                             // 0x0178   (0x0008)  
	FName                                              TextureParameter;                                           // 0x0180   (0x0008)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x0188   (0x0010)  MISSED


	/// Functions
	// Function /Script/UMG.RetainerBox.SetTextureParameter
	void SetTextureParameter(FName TextureParameter);                                                                        // [0x3a64720] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.RetainerBox.SetRetainRendering
	void SetRetainRendering(bool bInRetainRendering);                                                                        // [0x3a62650] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.RetainerBox.SetRenderingPhase
	void SetRenderingPhase(int32_t RenderPhase, int32_t TotalPhases);                                                        // [0x3a62560] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.RetainerBox.SetEffectMaterial
	void SetEffectMaterial(UMaterialInterface* EffectMaterial);                                                              // [0x3a5e200] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.RetainerBox.RequestRender
	void RequestRender();                                                                                                    // [0x3a5b820] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.RetainerBox.GetEffectMaterial
	UMaterialInstanceDynamic* GetEffectMaterial();                                                                           // [0x3a58b70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.RichTextBlockDecorator
/// Size: 0x0000 (0x000028 - 0x000028)
class URichTextBlockDecorator : public UObject : UObject
{ 
public:
};

/// Class /Script/UMG.RichTextBlockImageDecorator
/// Size: 0x0008 (0x000028 - 0x000030)
class URichTextBlockImageDecorator : public URichTextBlockDecorator : URichTextBlockDecorator
{ 
public:
	UDataTable*                                        ImageSet;                                                   // 0x0028   (0x0008)  
};

/// Class /Script/UMG.SafeZone
/// Size: 0x0018 (0x000168 - 0x000180)
class USafeZone : public UContentWidget : UContentWidget
{ 
public:
	bool                                               PadLeft;                                                    // 0x0168   (0x0001)  
	bool                                               PadRight;                                                   // 0x0169   (0x0001)  
	bool                                               PadTop;                                                     // 0x016A   (0x0001)  
	bool                                               PadBottom;                                                  // 0x016B   (0x0001)  
	unsigned char                                      UnknownData00_6[0x14];                                      // 0x016C   (0x0014)  MISSED


	/// Functions
	// Function /Script/UMG.SafeZone.SetSidesToPad
	void SetSidesToPad(bool InPadLeft, bool InPadRight, bool InPadTop, bool InPadBottom);                                    // [0x3a63410] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.SafeZoneSlot
/// Size: 0x0038 (0x000038 - 0x000070)
class USafeZoneSlot : public UPanelSlot : UPanelSlot
{ 
public:
	bool                                               bIsTitleSafe;                                               // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0039   (0x0003)  MISSED
	FMargin                                            SafeAreaScale;                                              // 0x003C   (0x0010)  
	TEnumAsByte<EHorizontalAlignment>                  HAlign;                                                     // 0x004C   (0x0001)  
	TEnumAsByte<EVerticalAlignment>                    VAlign;                                                     // 0x004D   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x004E   (0x0002)  MISSED
	FMargin                                            Padding;                                                    // 0x0050   (0x0010)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x0060   (0x0010)  MISSED
};

/// Class /Script/UMG.ScaleBox
/// Size: 0x0020 (0x000168 - 0x000188)
class UScaleBox : public UContentWidget : UContentWidget
{ 
public:
	TEnumAsByte<EStretch>                              Stretch;                                                    // 0x0168   (0x0001)  
	TEnumAsByte<EStretchDirection>                     StretchDirection;                                           // 0x0169   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x016A   (0x0002)  MISSED
	float                                              UserSpecifiedScale;                                         // 0x016C   (0x0004)  
	bool                                               IgnoreInheritedScale;                                       // 0x0170   (0x0001)  
	unsigned char                                      UnknownData01_6[0x17];                                      // 0x0171   (0x0017)  MISSED


	/// Functions
	// Function /Script/UMG.ScaleBox.SetUserSpecifiedScale
	void SetUserSpecifiedScale(float InUserSpecifiedScale);                                                                  // [0x3a64d50] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScaleBox.SetStretchDirection
	void SetStretchDirection(TEnumAsByte<EStretchDirection> InStretchDirection);                                             // [0x3a63bb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScaleBox.SetStretch
	void SetStretch(TEnumAsByte<EStretch> InStretch);                                                                        // [0x3a63b20] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScaleBox.SetIgnoreInheritedScale
	void SetIgnoreInheritedScale(bool bInIgnoreInheritedScale);                                                              // [0x3a5f960] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.ScaleBoxSlot
/// Size: 0x0018 (0x000038 - 0x000050)
class UScaleBoxSlot : public UPanelSlot : UPanelSlot
{ 
public:
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                        // 0x0038   (0x0001)  
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                          // 0x0039   (0x0001)  
	unsigned char                                      UnknownData00_6[0x16];                                      // 0x003A   (0x0016)  MISSED


	/// Functions
	// Function /Script/UMG.ScaleBoxSlot.SetVerticalAlignment
	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                          // [0x3a650c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScaleBoxSlot.SetPadding
	void SetPadding(FMargin InPadding);                                                                                      // [0x3a61d70] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScaleBoxSlot.SetHorizontalAlignment
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                    // [0x3a5f740] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.ScrollBar
/// Size: 0x07B0 (0x000150 - 0x000900)
class UScrollBar : public UWidget : UWidget
{ 
public:
	FScrollBarStyle                                    WidgetStyle;                                                // 0x0150   (0x0770)  
	bool                                               bAlwaysShowScrollbar;                                       // 0x08C0   (0x0001)  
	bool                                               bAlwaysShowScrollbarTrack;                                  // 0x08C1   (0x0001)  
	TEnumAsByte<EOrientation>                          Orientation;                                                // 0x08C2   (0x0001)  
	unsigned char                                      UnknownData00_5[0x5];                                       // 0x08C3   (0x0005)  MISSED
	FVector2D                                          Thickness;                                                  // 0x08C8   (0x0010)  
	FMargin                                            Padding;                                                    // 0x08D8   (0x0010)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x08E8   (0x0018)  MISSED


	/// Functions
	// Function /Script/UMG.ScrollBar.SetState
	void SetState(float InOffsetFraction, float InThumbSizeFraction);                                                        // [0x3a63990] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.ScrollBoxSlot
/// Size: 0x0028 (0x000038 - 0x000060)
class UScrollBoxSlot : public UPanelSlot : UPanelSlot
{ 
public:
	FSlateChildSize                                    Size;                                                       // 0x0038   (0x0008)  
	FMargin                                            Padding;                                                    // 0x0040   (0x0010)  
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                        // 0x0050   (0x0001)  
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                          // 0x0051   (0x0001)  
	unsigned char                                      UnknownData00_6[0xE];                                       // 0x0052   (0x000E)  MISSED


	/// Functions
	// Function /Script/UMG.ScrollBoxSlot.SetVerticalAlignment
	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                          // [0x3a65140] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScrollBoxSlot.SetPadding
	void SetPadding(FMargin InPadding);                                                                                      // [0x3a61de0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScrollBoxSlot.SetHorizontalAlignment
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                    // [0x3a5f7c0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.SizeBoxSlot
/// Size: 0x0028 (0x000038 - 0x000060)
class USizeBoxSlot : public UPanelSlot : UPanelSlot
{ 
public:
	FMargin                                            Padding;                                                    // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_5[0x10];                                      // 0x0048   (0x0010)  MISSED
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                        // 0x0058   (0x0001)  
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                          // 0x0059   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x005A   (0x0006)  MISSED


	/// Functions
	// Function /Script/UMG.SizeBoxSlot.SetVerticalAlignment
	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                          // [0x3a651d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBoxSlot.SetPadding
	void SetPadding(FMargin InPadding);                                                                                      // [0x3a61e70] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBoxSlot.SetHorizontalAlignment
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                    // [0x3a5f850] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.Spacer
/// Size: 0x0020 (0x000150 - 0x000170)
class USpacer : public UWidget : UWidget
{ 
public:
	FVector2D                                          Size;                                                       // 0x0150   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0160   (0x0010)  MISSED


	/// Functions
	// Function /Script/UMG.Spacer.SetSize
	void SetSize(FVector2D InSize);                                                                                          // [0x3a63650] Final|Native|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/UMG.SpinBox
/// Size: 0x0720 (0x000150 - 0x000870)
class USpinBox : public UWidget : UWidget
{ 
public:
	float                                              Value;                                                      // 0x0150   (0x0004)  
	FDelegateProperty                                  ValueDelegate;                                              // 0x0154   (0x0010)  
	unsigned char                                      UnknownData00_5[0xC];                                       // 0x0164   (0x000C)  MISSED
	FSpinBoxStyle                                      WidgetStyle;                                                // 0x0170   (0x0600)  
	int32_t                                            MinFractionalDigits;                                        // 0x0770   (0x0004)  
	int32_t                                            MaxFractionalDigits;                                        // 0x0774   (0x0004)  
	bool                                               bAlwaysUsesDeltaSnap;                                       // 0x0778   (0x0001)  
	bool                                               bEnableSlider;                                              // 0x0779   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x077A   (0x0002)  MISSED
	float                                              Delta;                                                      // 0x077C   (0x0004)  
	float                                              SliderExponent;                                             // 0x0780   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0784   (0x0004)  MISSED
	FSlateFontInfo                                     Font;                                                       // 0x0788   (0x0058)  
	TEnumAsByte<ETextJustify>                          Justification;                                              // 0x07E0   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x07E1   (0x0003)  MISSED
	float                                              MinDesiredWidth;                                            // 0x07E4   (0x0004)  
	TEnumAsByte<EVirtualKeyboardType>                  KeyboardType;                                               // 0x07E8   (0x0001)  
	bool                                               ClearKeyboardFocusOnCommit;                                 // 0x07E9   (0x0001)  
	bool                                               SelectAllTextOnCommit;                                      // 0x07EA   (0x0001)  
	unsigned char                                      UnknownData04_5[0x1];                                       // 0x07EB   (0x0001)  MISSED
	FSlateColor                                        ForegroundColor;                                            // 0x07EC   (0x0014)  
	FMulticastInlineDelegate                           OnValueChanged;                                             // 0x0800   (0x0010)  
	FMulticastInlineDelegate                           OnValueCommitted;                                           // 0x0810   (0x0010)  
	FMulticastInlineDelegate                           OnBeginSliderMovement;                                      // 0x0820   (0x0010)  
	FMulticastInlineDelegate                           OnEndSliderMovement;                                        // 0x0830   (0x0010)  
	bool                                               bOverride_MinValue : 1;                                     // 0x0840:0 (0x0001)  
	bool                                               bOverride_MaxValue : 1;                                     // 0x0840:1 (0x0001)  
	bool                                               bOverride_MinSliderValue : 1;                               // 0x0840:2 (0x0001)  
	bool                                               bOverride_MaxSliderValue : 1;                               // 0x0840:3 (0x0001)  
	unsigned char                                      UnknownData05_4[0x3];                                       // 0x0841   (0x0003)  MISSED
	float                                              MinValue;                                                   // 0x0844   (0x0004)  
	float                                              MaxValue;                                                   // 0x0848   (0x0004)  
	float                                              MinSliderValue;                                             // 0x084C   (0x0004)  
	float                                              MaxSliderValue;                                             // 0x0850   (0x0004)  
	unsigned char                                      UnknownData06_6[0x1C];                                      // 0x0854   (0x001C)  MISSED


	/// Functions
	// Function /Script/UMG.SpinBox.SetValue
	void SetValue(float NewValue);                                                                                           // [0x3a64e90] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SpinBox.SetMinValue
	void SetMinValue(float NewValue);                                                                                        // [0x3a61030] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SpinBox.SetMinSliderValue
	void SetMinSliderValue(float NewValue);                                                                                  // [0x3a60f10] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SpinBox.SetMinFractionalDigits
	void SetMinFractionalDigits(int32_t NewValue);                                                                           // [0x3a60e80] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SpinBox.SetMaxValue
	void SetMaxValue(float NewValue);                                                                                        // [0x3a60930] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SpinBox.SetMaxSliderValue
	void SetMaxSliderValue(float NewValue);                                                                                  // [0x3a60810] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SpinBox.SetMaxFractionalDigits
	void SetMaxFractionalDigits(int32_t NewValue);                                                                           // [0x3a60780] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SpinBox.SetForegroundColor
	void SetForegroundColor(FSlateColor InForegroundColor);                                                                  // [0x3a5f0f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SpinBox.SetDelta
	void SetDelta(float NewValue);                                                                                           // [0x3a5dfa0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SpinBox.SetAlwaysUsesDeltaSnap
	void SetAlwaysUsesDeltaSnap(bool bNewValue);                                                                             // [0x3a5c1d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SpinBox.OnSpinBoxValueCommittedEvent__DelegateSignature
	void OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit> CommitMethod);              // [0x2407bf0] MulticastDelegate|Public|Delegate 
	// Function /Script/UMG.SpinBox.OnSpinBoxValueChangedEvent__DelegateSignature
	void OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);                                                       // [0x2407bf0] MulticastDelegate|Public|Delegate 
	// Function /Script/UMG.SpinBox.OnSpinBoxBeginSliderMovement__DelegateSignature
	void OnSpinBoxBeginSliderMovement__DelegateSignature();                                                                  // [0x2407bf0] MulticastDelegate|Public|Delegate 
	// Function /Script/UMG.SpinBox.GetValue
	float GetValue();                                                                                                        // [0x3a59b60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.SpinBox.GetMinValue
	float GetMinValue();                                                                                                     // [0x3a59230] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.SpinBox.GetMinSliderValue
	float GetMinSliderValue();                                                                                               // [0x3a591f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.SpinBox.GetMinFractionalDigits
	int32_t GetMinFractionalDigits();                                                                                        // [0x3a591d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.SpinBox.GetMaxValue
	float GetMaxValue();                                                                                                     // [0x3a59140] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.SpinBox.GetMaxSliderValue
	float GetMaxSliderValue();                                                                                               // [0x3a59100] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.SpinBox.GetMaxFractionalDigits
	int32_t GetMaxFractionalDigits();                                                                                        // [0x3a590e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.SpinBox.GetDelta
	float GetDelta();                                                                                                        // [0x3a58770] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.SpinBox.GetAlwaysUsesDeltaSnap
	bool GetAlwaysUsesDeltaSnap();                                                                                           // [0x3a58230] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.SpinBox.ClearMinValue
	void ClearMinValue();                                                                                                    // [0x3a57a30] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SpinBox.ClearMinSliderValue
	void ClearMinSliderValue();                                                                                              // [0x3a57a10] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SpinBox.ClearMaxValue
	void ClearMaxValue();                                                                                                    // [0x3a578d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SpinBox.ClearMaxSliderValue
	void ClearMaxSliderValue();                                                                                              // [0x3a578b0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.StackBox
/// Size: 0x0018 (0x000168 - 0x000180)
class UStackBox : public UPanelWidget : UPanelWidget
{ 
public:
	TEnumAsByte<EOrientation>                          Orientation;                                                // 0x0168   (0x0001)  
	unsigned char                                      UnknownData00_6[0x17];                                      // 0x0169   (0x0017)  MISSED


	/// Functions
	// Function /Script/UMG.StackBox.ReplaceStackBoxChildAt
	bool ReplaceStackBoxChildAt(int32_t Index, UWidget* Content);                                                            // [0x3a5b6d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.StackBox.AddChildToStackBox
	UStackBoxSlot* AddChildToStackBox(UWidget* Content);                                                                     // [0x3a564d0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.StackBoxSlot
/// Size: 0x0028 (0x000038 - 0x000060)
class UStackBoxSlot : public UPanelSlot : UPanelSlot
{ 
public:
	FMargin                                            Padding;                                                    // 0x0038   (0x0010)  
	FSlateChildSize                                    Size;                                                       // 0x0048   (0x0008)  
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                        // 0x0050   (0x0001)  
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                          // 0x0051   (0x0001)  
	unsigned char                                      UnknownData00_6[0xE];                                       // 0x0052   (0x000E)  MISSED
};

/// Class /Script/UMG.Throbber
/// Size: 0x00F0 (0x000150 - 0x000240)
class UThrobber : public UWidget : UWidget
{ 
public:
	int32_t                                            NumberOfPieces;                                             // 0x0150   (0x0004)  
	bool                                               bAnimateHorizontally;                                       // 0x0154   (0x0001)  
	bool                                               bAnimateVertically;                                         // 0x0155   (0x0001)  
	bool                                               bAnimateOpacity;                                            // 0x0156   (0x0001)  
	unsigned char                                      UnknownData00_5[0x9];                                       // 0x0157   (0x0009)  MISSED
	FSlateBrush                                        Image;                                                      // 0x0160   (0x00D0)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0230   (0x0010)  MISSED


	/// Functions
	// Function /Script/UMG.Throbber.SetNumberOfPieces
	void SetNumberOfPieces(int32_t InNumberOfPieces);                                                                        // [0x3a61810] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Throbber.SetAnimateVertically
	void SetAnimateVertically(bool bInAnimateVertically);                                                                    // [0x3a5c3f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Throbber.SetAnimateOpacity
	void SetAnimateOpacity(bool bInAnimateOpacity);                                                                          // [0x3a5c330] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Throbber.SetAnimateHorizontally
	void SetAnimateHorizontally(bool bInAnimateHorizontally);                                                                // [0x3a5c270] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.UniformGridPanel
/// Size: 0x0028 (0x000168 - 0x000190)
class UUniformGridPanel : public UPanelWidget : UPanelWidget
{ 
public:
	FMargin                                            SlotPadding;                                                // 0x0168   (0x0010)  
	float                                              MinDesiredSlotWidth;                                        // 0x0178   (0x0004)  
	float                                              MinDesiredSlotHeight;                                       // 0x017C   (0x0004)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0180   (0x0010)  MISSED


	/// Functions
	// Function /Script/UMG.UniformGridPanel.SetSlotPadding
	void SetSlotPadding(FMargin InSlotPadding);                                                                              // [0x3a638e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UniformGridPanel.SetMinDesiredSlotWidth
	void SetMinDesiredSlotWidth(float InMinDesiredSlotWidth);                                                                // [0x3a60be0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UniformGridPanel.SetMinDesiredSlotHeight
	void SetMinDesiredSlotHeight(float InMinDesiredSlotHeight);                                                              // [0x3a60b30] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UniformGridPanel.AddChildToUniformGrid
	UUniformGridSlot* AddChildToUniformGrid(UWidget* Content, int32_t InRow, int32_t InColumn);                              // [0x3a566f0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.UniformGridSlot
/// Size: 0x0018 (0x000038 - 0x000050)
class UUniformGridSlot : public UPanelSlot : UPanelSlot
{ 
public:
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                        // 0x0038   (0x0001)  
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                          // 0x0039   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x003A   (0x0002)  MISSED
	int32_t                                            Row;                                                        // 0x003C   (0x0004)  
	int32_t                                            column;                                                     // 0x0040   (0x0004)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x0044   (0x000C)  MISSED


	/// Functions
	// Function /Script/UMG.UniformGridSlot.SetVerticalAlignment
	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                          // [0x3a65250] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UniformGridSlot.SetRow
	void SetRow(int32_t InRow);                                                                                              // [0x3a62780] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UniformGridSlot.SetHorizontalAlignment
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                    // [0x3a5f8d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UniformGridSlot.SetColumn
	void SetColumn(int32_t InColumn);                                                                                        // [0x3a5d3d0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.VerticalBox
/// Size: 0x0010 (0x000168 - 0x000178)
class UVerticalBox : public UPanelWidget : UPanelWidget
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0168   (0x0010)  MISSED
};

/// Class /Script/UMG.VerticalBoxSlot
/// Size: 0x0028 (0x000038 - 0x000060)
class UVerticalBoxSlot : public UPanelSlot : UPanelSlot
{ 
public:
	FSlateChildSize                                    Size;                                                       // 0x0038   (0x0008)  
	FMargin                                            Padding;                                                    // 0x0040   (0x0010)  
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                        // 0x0050   (0x0001)  
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                          // 0x0051   (0x0001)  
	unsigned char                                      UnknownData00_6[0xE];                                       // 0x0052   (0x000E)  MISSED


	/// Functions
	// Function /Script/UMG.VerticalBoxSlot.SetVerticalAlignment
	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                          // [0x3a65140] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.VerticalBoxSlot.SetSize
	void SetSize(FSlateChildSize InSize);                                                                                    // [0x3a636f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.VerticalBoxSlot.SetPadding
	void SetPadding(FMargin InPadding);                                                                                      // [0x3a61de0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.VerticalBoxSlot.SetHorizontalAlignment
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                    // [0x3a5f7c0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.Viewport
/// Size: 0x0050 (0x000168 - 0x0001B8)
class UViewport : public UContentWidget : UContentWidget
{ 
public:
	FLinearColor                                       BackgroundColor;                                            // 0x0168   (0x0010)  
	unsigned char                                      UnknownData00_6[0x40];                                      // 0x0178   (0x0040)  MISSED


	/// Functions
	// Function /Script/UMG.Viewport.Spawn
	AActor* Spawn(UClass* ActorClass);                                                                                       // [0x3a65ac0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Viewport.SetViewRotation
	void SetViewRotation(FRotator Rotation);                                                                                 // [0x3a65390] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Viewport.SetViewLocation
	void SetViewLocation(FVector Location);                                                                                  // [0x3a652e0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Viewport.GetViewRotation
	FRotator GetViewRotation();                                                                                              // [0x3a59c90] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Viewport.GetViewportWorld
	UWorld* GetViewportWorld();                                                                                              // [0x3a59d00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Viewport.GetViewLocation
	FVector GetViewLocation();                                                                                               // [0x3a59bd0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.WidgetComponent
/// Size: 0x0140 (0x0005A0 - 0x0006E0)
class UWidgetComponent : public UMeshComponent : UMeshComponent
{ 
public:
	EWidgetSpace                                       Space;                                                      // 0x05A0   (0x0001)  
	EWidgetTimingPolicy                                TimingPolicy;                                               // 0x05A1   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x05A2   (0x0006)  MISSED
	UClass*                                            WidgetClass;                                                // 0x05A8   (0x0008)  
	FIntPoint                                          DrawSize;                                                   // 0x05B0   (0x0008)  
	bool                                               bManuallyRedraw;                                            // 0x05B8   (0x0001)  
	bool                                               bRedrawRequested;                                           // 0x05B9   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x05BA   (0x0002)  MISSED
	float                                              RedrawTime;                                                 // 0x05BC   (0x0004)  
	unsigned char                                      UnknownData02_5[0x8];                                       // 0x05C0   (0x0008)  MISSED
	FIntPoint                                          CurrentDrawSize;                                            // 0x05C8   (0x0008)  
	bool                                               bDrawAtDesiredSize;                                         // 0x05D0   (0x0001)  
	unsigned char                                      UnknownData03_5[0x7];                                       // 0x05D1   (0x0007)  MISSED
	FVector2D                                          Pivot;                                                      // 0x05D8   (0x0010)  
	bool                                               bReceiveHardwareInput;                                      // 0x05E8   (0x0001)  
	bool                                               bWindowFocusable;                                           // 0x05E9   (0x0001)  
	EWindowVisibility                                  WindowVisibility;                                           // 0x05EA   (0x0001)  
	bool                                               bApplyGammaCorrection;                                      // 0x05EB   (0x0001)  
	unsigned char                                      UnknownData04_5[0x4];                                       // 0x05EC   (0x0004)  MISSED
	ULocalPlayer*                                      OwnerPlayer;                                                // 0x05F0   (0x0008)  
	FLinearColor                                       BackgroundColor;                                            // 0x05F8   (0x0010)  
	FLinearColor                                       TintColorAndOpacity;                                        // 0x0608   (0x0010)  
	float                                              OpacityFromTexture;                                         // 0x0618   (0x0004)  
	EWidgetBlendMode                                   BlendMode;                                                  // 0x061C   (0x0001)  
	bool                                               bIsTwoSided;                                                // 0x061D   (0x0001)  
	bool                                               TickWhenOffscreen;                                          // 0x061E   (0x0001)  
	unsigned char                                      UnknownData05_5[0x1];                                       // 0x061F   (0x0001)  MISSED
	UBodySetup*                                        BodySetup;                                                  // 0x0620   (0x0008)  
	UMaterialInterface*                                TranslucentMaterial;                                        // 0x0628   (0x0008)  
	UMaterialInterface*                                TranslucentMaterial_OneSided;                               // 0x0630   (0x0008)  
	UMaterialInterface*                                OpaqueMaterial;                                             // 0x0638   (0x0008)  
	UMaterialInterface*                                OpaqueMaterial_OneSided;                                    // 0x0640   (0x0008)  
	UMaterialInterface*                                MaskedMaterial;                                             // 0x0648   (0x0008)  
	UMaterialInterface*                                MaskedMaterial_OneSided;                                    // 0x0650   (0x0008)  
	UTextureRenderTarget2D*                            RenderTarget;                                               // 0x0658   (0x0008)  
	UMaterialInstanceDynamic*                          MaterialInstance;                                           // 0x0660   (0x0008)  
	bool                                               bAddedToScreen;                                             // 0x0668   (0x0001)  
	bool                                               bEditTimeUsable;                                            // 0x0669   (0x0001)  
	unsigned char                                      UnknownData06_5[0x2];                                       // 0x066A   (0x0002)  MISSED
	FName                                              SharedLayerName;                                            // 0x066C   (0x0008)  
	int32_t                                            LayerZOrder;                                                // 0x0674   (0x0004)  
	EWidgetGeometryMode                                GeometryMode;                                               // 0x0678   (0x0001)  
	unsigned char                                      UnknownData07_5[0x3];                                       // 0x0679   (0x0003)  MISSED
	float                                              CylinderArcAngle;                                           // 0x067C   (0x0004)  
	ETickMode                                          TickMode;                                                   // 0x0680   (0x0001)  
	unsigned char                                      UnknownData08_5[0x2F];                                      // 0x0681   (0x002F)  MISSED
	UUserWidget*                                       Widget;                                                     // 0x06B0   (0x0008)  
	unsigned char                                      UnknownData09_6[0x28];                                      // 0x06B8   (0x0028)  MISSED


	/// Functions
	// Function /Script/UMG.WidgetComponent.SetWindowVisibility
	void SetWindowVisibility(EWindowVisibility InVisibility);                                                                // [0x3a65950] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.SetWindowFocusable
	void SetWindowFocusable(bool bInWindowFocusable);                                                                        // [0x3a658b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.SetWidgetSpace
	void SetWidgetSpace(EWidgetSpace NewSpace);                                                                              // [0x3a656a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.SetWidget
	void SetWidget(UUserWidget* Widget);                                                                                     // [0x3a65610] Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.SetTwoSided
	void SetTwoSided(bool bWantTwoSided);                                                                                    // [0x3a64b20] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.SetTintColorAndOpacity
	void SetTintColorAndOpacity(FLinearColor NewTintColorAndOpacity);                                                        // [0x3a648e0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.SetTickWhenOffscreen
	void SetTickWhenOffscreen(bool bWantTickWhenOffscreen);                                                                  // [0x3a64850] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.SetTickMode
	void SetTickMode(ETickMode InTickMode);                                                                                  // [0x3a647c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.SetRedrawTime
	void SetRedrawTime(float InRedrawTime);                                                                                  // [0x3a620f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.SetPivot
	void SetPivot(FVector2D& InPivot);                                                                                       // [0x3a61fb0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.SetOwnerPlayer
	void SetOwnerPlayer(ULocalPlayer* LocalPlayer);                                                                          // [0x3a61b20] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.SetManuallyRedraw
	void SetManuallyRedraw(bool bUseManualRedraw);                                                                           // [0x3a604b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.SetGeometryMode
	void SetGeometryMode(EWidgetGeometryMode InGeometryMode);                                                                // [0x3a5f1b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.SetDrawSize
	void SetDrawSize(FVector2D Size);                                                                                        // [0x3a5e160] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.SetDrawAtDesiredSize
	void SetDrawAtDesiredSize(bool bInDrawAtDesiredSize);                                                                    // [0x3a5e0d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.SetCylinderArcAngle
	void SetCylinderArcAngle(float InCylinderArcAngle);                                                                      // [0x3a5d7d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.SetBackgroundColor
	void SetBackgroundColor(FLinearColor NewBackgroundColor);                                                                // [0x3a5c720] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.RequestRenderUpdate
	void RequestRenderUpdate();                                                                                              // [0x3a5b850] Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.RequestRedraw
	void RequestRedraw();                                                                                                    // [0x3a5b7d0] Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.IsWidgetVisible
	bool IsWidgetVisible();                                                                                                  // [0x3a5aac0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetWindowVisiblility
	EWindowVisibility GetWindowVisiblility();                                                                                // [0x3a59de0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetWindowFocusable
	bool GetWindowFocusable();                                                                                               // [0x3a59dc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetWidgetSpace
	EWidgetSpace GetWidgetSpace();                                                                                           // [0x3a59da0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetWidget
	UUserWidget* GetWidget();                                                                                                // [0x3a59d70] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetUserWidgetObject
	UUserWidget* GetUserWidgetObject();                                                                                      // [0x3a59af0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetTwoSided
	bool GetTwoSided();                                                                                                      // [0x3a59ad0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetTickWhenOffscreen
	bool GetTickWhenOffscreen();                                                                                             // [0x3a59ab0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetRenderTarget
	UTextureRenderTarget2D* GetRenderTarget();                                                                               // [0x3a59530] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetRedrawTime
	float GetRedrawTime();                                                                                                   // [0x1901a40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetPivot
	FVector2D GetPivot();                                                                                                    // [0x3a594d0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetOwnerPlayer
	ULocalPlayer* GetOwnerPlayer();                                                                                          // [0x3a59320] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetMaterialInstance
	UMaterialInstanceDynamic* GetMaterialInstance();                                                                         // [0x3a590c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetManuallyRedraw
	bool GetManuallyRedraw();                                                                                                // [0x3a590a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetGeometryMode
	EWidgetGeometryMode GetGeometryMode();                                                                                   // [0x3a58c80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetDrawSize
	FVector2D GetDrawSize();                                                                                                 // [0x3a588f0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetDrawAtDesiredSize
	bool GetDrawAtDesiredSize();                                                                                             // [0x33665f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetCylinderArcAngle
	float GetCylinderArcAngle();                                                                                             // [0x3a58530] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetCurrentDrawSize
	FVector2D GetCurrentDrawSize();                                                                                          // [0x3a584f0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.WidgetInteractionComponent
/// Size: 0x02D0 (0x0002A0 - 0x000570)
class UWidgetInteractionComponent : public USceneComponent : USceneComponent
{ 
public:
	FMulticastInlineDelegate                           OnHoveredWidgetChanged;                                     // 0x02A0   (0x0010)  
	unsigned char                                      UnknownData00_5[0x10];                                      // 0x02B0   (0x0010)  MISSED
	int32_t                                            VirtualUserIndex;                                           // 0x02C0   (0x0004)  
	int32_t                                            PointerIndex;                                               // 0x02C4   (0x0004)  
	TEnumAsByte<ECollisionChannel>                     TraceChannel;                                               // 0x02C8   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x02C9   (0x0003)  MISSED
	float                                              InteractionDistance;                                        // 0x02CC   (0x0004)  
	EWidgetInteractionSource                           InteractionSource;                                          // 0x02D0   (0x0001)  
	bool                                               bEnableHitTesting;                                          // 0x02D1   (0x0001)  
	bool                                               bShowDebug;                                                 // 0x02D2   (0x0001)  
	unsigned char                                      UnknownData02_5[0x1];                                       // 0x02D3   (0x0001)  MISSED
	float                                              DebugSphereLineThickness;                                   // 0x02D4   (0x0004)  
	float                                              DebugLineThickness;                                         // 0x02D8   (0x0004)  
	FLinearColor                                       DebugColor;                                                 // 0x02DC   (0x0010)  
	unsigned char                                      UnknownData03_5[0x7C];                                      // 0x02EC   (0x007C)  MISSED
	FHitResult                                         CustomHitResult;                                            // 0x0368   (0x00E8)  
	FVector2D                                          LocalHitLocation;                                           // 0x0450   (0x0010)  
	FVector2D                                          LastLocalHitLocation;                                       // 0x0460   (0x0010)  
	UWidgetComponent*                                  HoveredWidgetComponent;                                     // 0x0470   (0x0008)  
	FHitResult                                         LastHitResult;                                              // 0x0478   (0x00E8)  
	bool                                               bIsHoveredWidgetInteractable;                               // 0x0560   (0x0001)  
	bool                                               bIsHoveredWidgetFocusable;                                  // 0x0561   (0x0001)  
	bool                                               bIsHoveredWidgetHitTestVisible;                             // 0x0562   (0x0001)  
	unsigned char                                      UnknownData04_6[0xD];                                       // 0x0563   (0x000D)  MISSED


	/// Functions
	// Function /Script/UMG.WidgetInteractionComponent.SetFocus
	void SetFocus(UWidget* FocusWidget);                                                                                     // [0x3a95560] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetInteractionComponent.SetCustomHitResult
	void SetCustomHitResult(FHitResult& HitResult);                                                                          // [0x3a95100] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.WidgetInteractionComponent.SendKeyChar
	bool SendKeyChar(FString Characters, bool bRepeat);                                                                      // [0x3a947d0] Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetInteractionComponent.ScrollWheel
	void ScrollWheel(float ScrollDelta);                                                                                     // [0x3a94740] Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetInteractionComponent.ReleasePointerKey
	void ReleasePointerKey(FKey Key);                                                                                        // [0x3a93c30] Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetInteractionComponent.ReleaseKey
	bool ReleaseKey(FKey Key);                                                                                               // [0x3a939d0] Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetInteractionComponent.PressPointerKey
	void PressPointerKey(FKey Key);                                                                                          // [0x3a93630] Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetInteractionComponent.PressKey
	bool PressKey(FKey Key, bool bRepeat);                                                                                   // [0x3a934e0] Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetInteractionComponent.PressAndReleaseKey
	bool PressAndReleaseKey(FKey Key);                                                                                       // [0x3a933d0] Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetInteractionComponent.IsOverInteractableWidget
	bool IsOverInteractableWidget();                                                                                         // [0x3a915a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetInteractionComponent.IsOverHitTestVisibleWidget
	bool IsOverHitTestVisibleWidget();                                                                                       // [0x3a91580] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetInteractionComponent.IsOverFocusableWidget
	bool IsOverFocusableWidget();                                                                                            // [0x3a91560] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetInteractionComponent.GetLastHitResult
	FHitResult GetLastHitResult();                                                                                           // [0x3a904b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetInteractionComponent.GetHoveredWidgetComponent
	UWidgetComponent* GetHoveredWidgetComponent();                                                                           // [0x3a8fdd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetInteractionComponent.Get2DHitLocation
	FVector2D Get2DHitLocation();                                                                                            // [0x3a8eb40] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.WidgetSwitcherSlot
/// Size: 0x0020 (0x000038 - 0x000058)
class UWidgetSwitcherSlot : public UPanelSlot : UPanelSlot
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0038   (0x0008)  MISSED
	FMargin                                            Padding;                                                    // 0x0040   (0x0010)  
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                        // 0x0050   (0x0001)  
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                          // 0x0051   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x0052   (0x0006)  MISSED


	/// Functions
	// Function /Script/UMG.WidgetSwitcherSlot.SetVerticalAlignment
	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                          // [0x3a65030] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetSwitcherSlot.SetPadding
	void SetPadding(FMargin InPadding);                                                                                      // [0x3a61ce0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetSwitcherSlot.SetHorizontalAlignment
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                    // [0x3a5f6b0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.WindowTitleBarArea
/// Size: 0x0020 (0x000168 - 0x000188)
class UWindowTitleBarArea : public UContentWidget : UContentWidget
{ 
public:
	bool                                               bWindowButtonsEnabled;                                      // 0x0168   (0x0001)  
	bool                                               bDoubleClickTogglesFullscreen;                              // 0x0169   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1E];                                      // 0x016A   (0x001E)  MISSED


	/// Functions
	// Function /Script/UMG.WindowTitleBarArea.SetVerticalAlignment
	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                          // [0x3a96bc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WindowTitleBarArea.SetPadding
	void SetPadding(FMargin InPadding);                                                                                      // [0x3a96670] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WindowTitleBarArea.SetHorizontalAlignment
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                    // [0x3a958e0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.WindowTitleBarAreaSlot
/// Size: 0x0028 (0x000038 - 0x000060)
class UWindowTitleBarAreaSlot : public UPanelSlot : UPanelSlot
{ 
public:
	FMargin                                            Padding;                                                    // 0x0038   (0x0010)  
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                        // 0x0048   (0x0001)  
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                          // 0x0049   (0x0001)  
	unsigned char                                      UnknownData00_6[0x16];                                      // 0x004A   (0x0016)  MISSED


	/// Functions
	// Function /Script/UMG.WindowTitleBarAreaSlot.SetVerticalAlignment
	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                          // [0x3a96c50] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WindowTitleBarAreaSlot.SetPadding
	void SetPadding(FMargin InPadding);                                                                                      // [0x3a96720] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WindowTitleBarAreaSlot.SetHorizontalAlignment
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                    // [0x3a95970] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.WrapBox
/// Size: 0x0028 (0x000168 - 0x000190)
class UWrapBox : public UPanelWidget : UPanelWidget
{ 
public:
	FVector2D                                          InnerSlotPadding;                                           // 0x0168   (0x0010)  
	float                                              WrapSize;                                                   // 0x0178   (0x0004)  
	bool                                               bExplicitWrapSize;                                          // 0x017C   (0x0001)  
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                        // 0x017D   (0x0001)  
	TEnumAsByte<EOrientation>                          Orientation;                                                // 0x017E   (0x0001)  
	unsigned char                                      UnknownData00_6[0x11];                                      // 0x017F   (0x0011)  MISSED


	/// Functions
	// Function /Script/UMG.WrapBox.SetInnerSlotPadding
	void SetInnerSlotPadding(FVector2D InPadding);                                                                           // [0x3a95b40] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.WrapBox.SetHorizontalAlignment
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                    // [0x3a95a00] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WrapBox.AddChildToWrapBox
	UWrapBoxSlot* AddChildToWrapBox(UWidget* Content);                                                                       // [0x3a8b8a0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.WrapBoxSlot
/// Size: 0x0020 (0x000038 - 0x000058)
class UWrapBoxSlot : public UPanelSlot : UPanelSlot
{ 
public:
	FMargin                                            Padding;                                                    // 0x0038   (0x0010)  
	float                                              FillSpanWhenLessThan;                                       // 0x0048   (0x0004)  
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                        // 0x004C   (0x0001)  
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                          // 0x004D   (0x0001)  
	bool                                               bFillEmptySpace;                                            // 0x004E   (0x0001)  
	bool                                               bForceNewLine;                                              // 0x004F   (0x0001)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0050   (0x0008)  MISSED


	/// Functions
	// Function /Script/UMG.WrapBoxSlot.SetVerticalAlignment
	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                          // [0x3a96ce0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WrapBoxSlot.SetPadding
	void SetPadding(FMargin InPadding);                                                                                      // [0x3a967e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WrapBoxSlot.SetNewLine
	void SetNewLine(bool InForceNewLine);                                                                                    // [0x3a96380] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WrapBoxSlot.SetHorizontalAlignment
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                    // [0x3a95ab0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WrapBoxSlot.SetFillSpanWhenLessThan
	void SetFillSpanWhenLessThan(float InFillSpanWhenLessThan);                                                              // [0x3a954e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WrapBoxSlot.SetFillEmptySpace
	void SetFillEmptySpace(bool InbFillEmptySpace);                                                                          // [0x3a95440] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.DragDropOperation
/// Size: 0x0068 (0x000028 - 0x000090)
class UDragDropOperation : public UObject : UObject
{ 
public:
	FString                                            Tag;                                                        // 0x0028   (0x0010)  
	UObject*                                           Payload;                                                    // 0x0038   (0x0008)  
	UWidget*                                           DefaultDragVisual;                                          // 0x0040   (0x0008)  
	EDragPivot                                         Pivot;                                                      // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0049   (0x0007)  MISSED
	FVector2D                                          Offset;                                                     // 0x0050   (0x0010)  
	FMulticastInlineDelegate                           OnDrop;                                                     // 0x0060   (0x0010)  
	FMulticastInlineDelegate                           OnDragCancelled;                                            // 0x0070   (0x0010)  
	FMulticastInlineDelegate                           OnDragged;                                                  // 0x0080   (0x0010)  


	/// Functions
	// Function /Script/UMG.DragDropOperation.Drop
	void Drop(FPointerEvent& PointerEvent);                                                                                  // [0x3a8e670] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.DragDropOperation.Dragged
	void Dragged(FPointerEvent& PointerEvent);                                                                               // [0x3a8d360] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.DragDropOperation.DragCancelled
	void DragCancelled(FPointerEvent& PointerEvent);                                                                         // [0x3a8d210] Native|Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/UMG.SlateBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class USlateBlueprintLibrary : public UBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/UMG.SlateVectorArtData
/// Size: 0x0048 (0x000028 - 0x000070)
class USlateVectorArtData : public UObject : UObject
{ 
public:
	TArray<FSlateMeshVertex>                           VertexData;                                                 // 0x0028   (0x0010)  
	TArray<uint32_t>                                   IndexData;                                                  // 0x0038   (0x0010)  
	UMaterialInterface*                                Material;                                                   // 0x0048   (0x0008)  
	FVector2D                                          ExtentMin;                                                  // 0x0050   (0x0010)  
	FVector2D                                          ExtentMax;                                                  // 0x0060   (0x0010)  
};

/// Class /Script/UMG.WidgetBlueprintGeneratedClass
/// Size: 0x0080 (0x000370 - 0x0003F0)
class UWidgetBlueprintGeneratedClass : public UBlueprintGeneratedClass : UBlueprintGeneratedClass
{ 
public:
	UWidgetTree*                                       WidgetTree;                                                 // 0x0370   (0x0008)  
	TArray<UWidgetBlueprintGeneratedClassExtension*>   Extensions;                                                 // 0x0378   (0x0010)  
	TArray<FFieldNotificationId>                       FieldNotifyNames;                                           // 0x0388   (0x0010)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0398   (0x0004)  MISSED
	bool                                               bClassRequiresNativeTick : 1;                               // 0x039C:0 (0x0001)  
	unsigned char                                      UnknownData01_4[0x3];                                       // 0x039D   (0x0003)  MISSED
	TArray<FDelegateRuntimeBinding>                    Bindings;                                                   // 0x03A0   (0x0010)  
	TArray<UWidgetAnimation*>                          Animations;                                                 // 0x03B0   (0x0010)  
	TArray<FName>                                      NamedSlots;                                                 // 0x03C0   (0x0010)  
	TArray<FName>                                      AvailableNamedSlots;                                        // 0x03D0   (0x0010)  
	TArray<FName>                                      InstanceNamedSlots;                                         // 0x03E0   (0x0010)  
};

/// Class /Script/UMG.WidgetBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UWidgetBlueprintLibrary : public UBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/UMG.WidgetLayoutLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UWidgetLayoutLibrary : public UBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/UMG.WidgetTree
/// Size: 0x0060 (0x000028 - 0x000088)
class UWidgetTree : public UObject : UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0028   (0x0008)  MISSED
	UWidget*                                           RootWidget;                                                 // 0x0030   (0x0008)  
	TMap<FName, UWidget*>                              NamedSlotBindings;                                          // 0x0038   (0x0050)  
};

/// Enum /Script/UMG.ESlateVisibility
/// Size: 0x06
enum ESlateVisibility : uint8_t
{
	ESlateVisibility__Visible0                                                       = 0,
	ESlateVisibility__Collapsed1                                                     = 1,
	ESlateVisibility__Hidden2                                                        = 2,
	ESlateVisibility__HitTestInvisible3                                              = 3,
	ESlateVisibility__SelfHitTestInvisible4                                          = 4,
	ESlateVisibility__ESlateVisibility_MAX5                                          = 5
};

/// Enum /Script/UMG.EVirtualKeyboardType
/// Size: 0x07
enum EVirtualKeyboardType : uint8_t
{
	EVirtualKeyboardType__Default0                                                   = 0,
	EVirtualKeyboardType__Number1                                                    = 1,
	EVirtualKeyboardType__Web2                                                       = 2,
	EVirtualKeyboardType__Email3                                                     = 3,
	EVirtualKeyboardType__Password4                                                  = 4,
	EVirtualKeyboardType__AlphaNumeric5                                              = 5,
	EVirtualKeyboardType__EVirtualKeyboardType_MAX6                                  = 6
};

/// Enum /Script/UMG.ESlateAccessibleBehavior
/// Size: 0x06
enum ESlateAccessibleBehavior : uint8_t
{
	ESlateAccessibleBehavior__NotAccessible0                                         = 0,
	ESlateAccessibleBehavior__Auto1                                                  = 1,
	ESlateAccessibleBehavior__Summary2                                               = 2,
	ESlateAccessibleBehavior__Custom3                                                = 3,
	ESlateAccessibleBehavior__ToolTip4                                               = 4,
	ESlateAccessibleBehavior__ESlateAccessibleBehavior_MAX5                          = 5
};

/// Enum /Script/UMG.EWidgetAnimationEvent
/// Size: 0x03
enum EWidgetAnimationEvent : uint8_t
{
	EWidgetAnimationEvent__Started0                                                  = 0,
	EWidgetAnimationEvent__Finished1                                                 = 1,
	EWidgetAnimationEvent__EWidgetAnimationEvent_MAX2                                = 2
};

/// Enum /Script/UMG.EUMGSequencePlayMode
/// Size: 0x04
enum EUMGSequencePlayMode : uint8_t
{
	EUMGSequencePlayMode__Forward0                                                   = 0,
	EUMGSequencePlayMode__Reverse1                                                   = 1,
	EUMGSequencePlayMode__PingPong2                                                  = 2,
	EUMGSequencePlayMode__EUMGSequencePlayMode_MAX3                                  = 3
};

/// Enum /Script/UMG.EWidgetTickFrequency
/// Size: 0x03
enum EWidgetTickFrequency : uint8_t
{
	EWidgetTickFrequency__Never0                                                     = 0,
	EWidgetTickFrequency__Auto1                                                      = 1,
	EWidgetTickFrequency__EWidgetTickFrequency_MAX2                                  = 2
};

/// Enum /Script/UMG.ESlateSizeRule
/// Size: 0x03
enum ESlateSizeRule : uint8_t
{
	ESlateSizeRule__Automatic0                                                       = 0,
	ESlateSizeRule__Fill1                                                            = 1,
	ESlateSizeRule__ESlateSizeRule_MAX2                                              = 2
};

/// Enum /Script/UMG.EDynamicBoxType
/// Size: 0x07
enum EDynamicBoxType : uint8_t
{
	EDynamicBoxType__Horizontal0                                                     = 0,
	EDynamicBoxType__Vertical1                                                       = 1,
	EDynamicBoxType__Wrap2                                                           = 2,
	EDynamicBoxType__VerticalWrap3                                                   = 3,
	EDynamicBoxType__Radial4                                                         = 4,
	EDynamicBoxType__Overlay5                                                        = 5,
	EDynamicBoxType__EDynamicBoxType_MAX6                                            = 6
};

/// Enum /Script/UMG.EWidgetDesignFlags
/// Size: 0x06
enum EWidgetDesignFlags : uint8_t
{
	EWidgetDesignFlags__None0                                                        = 0,
	EWidgetDesignFlags__Designing1                                                   = 1,
	EWidgetDesignFlags__ShowOutline2                                                 = 2,
	EWidgetDesignFlags__ExecutePreConstruct3                                         = 4,
	EWidgetDesignFlags__Previewing4                                                  = 8,
	EWidgetDesignFlags__EWidgetDesignFlags_MAX5                                      = 9
};

/// Enum /Script/UMG.EWidgetSpace
/// Size: 0x03
enum EWidgetSpace : uint8_t
{
	EWidgetSpace__World0                                                             = 0,
	EWidgetSpace__Screen1                                                            = 1,
	EWidgetSpace__EWidgetSpace_MAX2                                                  = 2
};

/// Enum /Script/UMG.EWidgetTimingPolicy
/// Size: 0x03
enum EWidgetTimingPolicy : uint8_t
{
	EWidgetTimingPolicy__RealTime0                                                   = 0,
	EWidgetTimingPolicy__GameTime1                                                   = 1,
	EWidgetTimingPolicy__EWidgetTimingPolicy_MAX2                                    = 2
};

/// Enum /Script/UMG.EWidgetBlendMode
/// Size: 0x04
enum EWidgetBlendMode : uint8_t
{
	EWidgetBlendMode__Opaque0                                                        = 0,
	EWidgetBlendMode__Masked1                                                        = 1,
	EWidgetBlendMode__Transparent2                                                   = 2,
	EWidgetBlendMode__EWidgetBlendMode_MAX3                                          = 3
};

/// Enum /Script/UMG.EWidgetGeometryMode
/// Size: 0x03
enum EWidgetGeometryMode : uint8_t
{
	EWidgetGeometryMode__Plane0                                                      = 0,
	EWidgetGeometryMode__Cylinder1                                                   = 1,
	EWidgetGeometryMode__EWidgetGeometryMode_MAX2                                    = 2
};

/// Enum /Script/UMG.EWindowVisibility
/// Size: 0x03
enum EWindowVisibility : uint8_t
{
	EWindowVisibility__Visible0                                                      = 0,
	EWindowVisibility__SelfHitTestInvisible1                                         = 1,
	EWindowVisibility__EWindowVisibility_MAX2                                        = 2
};

/// Enum /Script/UMG.ETickMode
/// Size: 0x04
enum ETickMode : uint8_t
{
	ETickMode__Disabled0                                                             = 0,
	ETickMode__Enabled1                                                              = 1,
	ETickMode__Automatic2                                                            = 2,
	ETickMode__ETickMode_MAX3                                                        = 3
};

/// Enum /Script/UMG.EWidgetInteractionSource
/// Size: 0x05
enum EWidgetInteractionSource : uint8_t
{
	EWidgetInteractionSource__World0                                                 = 0,
	EWidgetInteractionSource__Mouse1                                                 = 1,
	EWidgetInteractionSource__CenterScreen2                                          = 2,
	EWidgetInteractionSource__Custom3                                                = 3,
	EWidgetInteractionSource__EWidgetInteractionSource_MAX4                          = 4
};

/// Enum /Script/UMG.EDragPivot
/// Size: 0x11
enum EDragPivot : uint8_t
{
	EDragPivot__MouseDown0                                                           = 0,
	EDragPivot__TopLeft1                                                             = 1,
	EDragPivot__TopCenter2                                                           = 2,
	EDragPivot__TopRight3                                                            = 3,
	EDragPivot__CenterLeft4                                                          = 4,
	EDragPivot__CenterCenter5                                                        = 5,
	EDragPivot__CenterRight6                                                         = 6,
	EDragPivot__BottomLeft7                                                          = 7,
	EDragPivot__BottomCenter8                                                        = 8,
	EDragPivot__BottomRight9                                                         = 9,
	EDragPivot__EDragPivot_MAX10                                                     = 10
};

/// Enum /Script/UMG.EBindingKind
/// Size: 0x03
enum EBindingKind : uint8_t
{
	EBindingKind__Function0                                                          = 0,
	EBindingKind__Property1                                                          = 1,
	EBindingKind__EBindingKind_MAX2                                                  = 2
};

