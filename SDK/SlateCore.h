
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package SlateCore.

/// Struct /Script/SlateCore.Geometry
/// Size: 0x0038 (0x000000 - 0x000038)
struct FGeometry
{ 
	unsigned char                                      UnknownData00_1[0x38];                                      // 0x0000   (0x0038)  MISSED
};

/// Struct /Script/SlateCore.SlateBrush
/// Size: 0x00D0 (0x000000 - 0x0000D0)
struct FSlateBrush
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
	bool                                               bIsDynamicallyLoaded : 1;                                   // 0x0010:0 (0x0001)  
	bool                                               bHasUObject : 1;                                            // 0x0010:1 (0x0001)  
	TEnumAsByte<ESlateBrushDrawType>                   DrawAs;                                                     // 0x0011   (0x0001)  
	TEnumAsByte<ESlateBrushTileType>                   Tiling;                                                     // 0x0012   (0x0001)  
	TEnumAsByte<ESlateBrushMirrorType>                 Mirroring;                                                  // 0x0013   (0x0001)  
	TEnumAsByte<ESlateBrushImageType>                  ImageType;                                                  // 0x0014   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0015   (0x0003)  MISSED
	FDeprecateSlateVector2D                            ImageSize;                                                  // 0x0018   (0x0008)  
	FMargin                                            Margin;                                                     // 0x0020   (0x0010)  
	FSlateColor                                        TintColor;                                                  // 0x0030   (0x0014)  
	unsigned char                                      UnknownData02_5[0xC];                                       // 0x0044   (0x000C)  MISSED
	FSlateBrushOutlineSettings                         OutlineSettings;                                            // 0x0050   (0x0040)  
	UObject*                                           ResourceObject;                                             // 0x0090   (0x0008)  
	FName                                              ResourceName;                                               // 0x0098   (0x0008)  
	FBox2f                                             UVRegion;                                                   // 0x00A0   (0x0014)  
	unsigned char                                      UnknownData03_6[0x1C];                                      // 0x00B4   (0x001C)  MISSED
};

/// Struct /Script/SlateCore.SlateBrushOutlineSettings
/// Size: 0x0040 (0x000000 - 0x000040)
struct FSlateBrushOutlineSettings
{ 
	FVector4                                           CornerRadii;                                                // 0x0000   (0x0020)  
	FSlateColor                                        Color;                                                      // 0x0020   (0x0014)  
	float                                              Width;                                                      // 0x0034   (0x0004)  
	TEnumAsByte<ESlateBrushRoundingType>               RoundingType;                                               // 0x0038   (0x0001)  
	bool                                               bUseBrushTransparency;                                      // 0x0039   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x003A   (0x0006)  MISSED
};

/// Struct /Script/SlateCore.SlateColor
/// Size: 0x0014 (0x000000 - 0x000014)
struct FSlateColor
{ 
	FLinearColor                                       SpecifiedColor;                                             // 0x0000   (0x0010)  
	ESlateColorStylingMode                             ColorUseRule;                                               // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0011   (0x0003)  MISSED
};

/// Struct /Script/SlateCore.Margin
/// Size: 0x0010 (0x000000 - 0x000010)
struct FMargin
{ 
	float                                              Left;                                                       // 0x0000   (0x0004)  
	float                                              Top;                                                        // 0x0004   (0x0004)  
	float                                              Right;                                                      // 0x0008   (0x0004)  
	float                                              Bottom;                                                     // 0x000C   (0x0004)  
};

/// Struct /Script/SlateCore.DeprecateSlateVector2D
/// Size: 0x0000 (0x000008 - 0x000008)
struct FDeprecateSlateVector2D : FVector2f
{ 
};

/// Struct /Script/SlateCore.InputEvent
/// Size: 0x0020 (0x000000 - 0x000020)
struct FInputEvent
{ 
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0000   (0x0020)  MISSED
};

/// Struct /Script/SlateCore.PointerEvent
/// Size: 0x0058 (0x000020 - 0x000078)
struct FPointerEvent : FInputEvent
{ 
	unsigned char                                      UnknownData00_1[0x58];                                      // 0x0020   (0x0058)  MISSED
};

/// Struct /Script/SlateCore.SlateWidgetStyle
/// Size: 0x0008 (0x000000 - 0x000008)
struct FSlateWidgetStyle
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/SlateCore.ScrollBarStyle
/// Size: 0x0768 (0x000008 - 0x000770)
struct FScrollBarStyle : FSlateWidgetStyle
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FSlateBrush                                        HorizontalBackgroundImage;                                  // 0x0010   (0x00D0)  
	FSlateBrush                                        VerticalBackgroundImage;                                    // 0x00E0   (0x00D0)  
	FSlateBrush                                        VerticalTopSlotImage;                                       // 0x01B0   (0x00D0)  
	FSlateBrush                                        HorizontalTopSlotImage;                                     // 0x0280   (0x00D0)  
	FSlateBrush                                        VerticalBottomSlotImage;                                    // 0x0350   (0x00D0)  
	FSlateBrush                                        HorizontalBottomSlotImage;                                  // 0x0420   (0x00D0)  
	FSlateBrush                                        NormalThumbImage;                                           // 0x04F0   (0x00D0)  
	FSlateBrush                                        HoveredThumbImage;                                          // 0x05C0   (0x00D0)  
	FSlateBrush                                        DraggedThumbImage;                                          // 0x0690   (0x00D0)  
	float                                              Thickness;                                                  // 0x0760   (0x0004)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x0764   (0x000C)  MISSED
};

/// Struct /Script/SlateCore.TableRowStyle
/// Size: 0x0D48 (0x000008 - 0x000D50)
struct FTableRowStyle : FSlateWidgetStyle
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FSlateBrush                                        SelectorFocusedBrush;                                       // 0x0010   (0x00D0)  
	FSlateBrush                                        ActiveHoveredBrush;                                         // 0x00E0   (0x00D0)  
	FSlateBrush                                        ActiveBrush;                                                // 0x01B0   (0x00D0)  
	FSlateBrush                                        InactiveHoveredBrush;                                       // 0x0280   (0x00D0)  
	FSlateBrush                                        InactiveBrush;                                              // 0x0350   (0x00D0)  
	bool                                               bUseParentRowBrush;                                         // 0x0420   (0x0001)  
	unsigned char                                      UnknownData01_5[0xF];                                       // 0x0421   (0x000F)  MISSED
	FSlateBrush                                        ParentRowBackgroundBrush;                                   // 0x0430   (0x00D0)  
	FSlateBrush                                        ParentRowBackgroundHoveredBrush;                            // 0x0500   (0x00D0)  
	FSlateBrush                                        EvenRowBackgroundHoveredBrush;                              // 0x05D0   (0x00D0)  
	FSlateBrush                                        EvenRowBackgroundBrush;                                     // 0x06A0   (0x00D0)  
	FSlateBrush                                        OddRowBackgroundHoveredBrush;                               // 0x0770   (0x00D0)  
	FSlateBrush                                        OddRowBackgroundBrush;                                      // 0x0840   (0x00D0)  
	FSlateColor                                        TextColor;                                                  // 0x0910   (0x0014)  
	FSlateColor                                        SelectedTextColor;                                          // 0x0924   (0x0014)  
	unsigned char                                      UnknownData02_5[0x8];                                       // 0x0938   (0x0008)  MISSED
	FSlateBrush                                        DropIndicator_Above;                                        // 0x0940   (0x00D0)  
	FSlateBrush                                        DropIndicator_Onto;                                         // 0x0A10   (0x00D0)  
	FSlateBrush                                        DropIndicator_Below;                                        // 0x0AE0   (0x00D0)  
	FSlateBrush                                        ActiveHighlightedBrush;                                     // 0x0BB0   (0x00D0)  
	FSlateBrush                                        InactiveHighlightedBrush;                                   // 0x0C80   (0x00D0)  
};

/// Struct /Script/SlateCore.ComboBoxStyle
/// Size: 0x0658 (0x000008 - 0x000660)
struct FComboBoxStyle : FSlateWidgetStyle
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FComboButtonStyle                                  ComboButtonStyle;                                           // 0x0010   (0x0600)  
	FSlateSound                                        PressedSlateSound;                                          // 0x0610   (0x0018)  
	FSlateSound                                        SelectionChangeSlateSound;                                  // 0x0628   (0x0018)  
	FMargin                                            ContentPadding;                                             // 0x0640   (0x0010)  
	FMargin                                            MenuRowPadding;                                             // 0x0650   (0x0010)  
};

/// Struct /Script/SlateCore.SlateSound
/// Size: 0x0018 (0x000000 - 0x000018)
struct FSlateSound
{ 
	UObject*                                           ResourceObject;                                             // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0008   (0x0010)  MISSED
};

/// Struct /Script/SlateCore.ComboButtonStyle
/// Size: 0x05F8 (0x000008 - 0x000600)
struct FComboButtonStyle : FSlateWidgetStyle
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FButtonStyle                                       ButtonStyle;                                                // 0x0010   (0x03F0)  
	FSlateBrush                                        DownArrowImage;                                             // 0x0400   (0x00D0)  
	FDeprecateSlateVector2D                            ShadowOffset;                                               // 0x04D0   (0x0008)  
	FLinearColor                                       ShadowColorAndOpacity;                                      // 0x04D8   (0x0010)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x04E8   (0x0008)  MISSED
	FSlateBrush                                        MenuBorderBrush;                                            // 0x04F0   (0x00D0)  
	FMargin                                            MenuBorderPadding;                                          // 0x05C0   (0x0010)  
	FMargin                                            ContentPadding;                                             // 0x05D0   (0x0010)  
	FMargin                                            DownArrowPadding;                                           // 0x05E0   (0x0010)  
	TEnumAsByte<EVerticalAlignment>                    DownArrowAlign;                                             // 0x05F0   (0x0001)  
	unsigned char                                      UnknownData02_6[0xF];                                       // 0x05F1   (0x000F)  MISSED
};

/// Struct /Script/SlateCore.ButtonStyle
/// Size: 0x03E8 (0x000008 - 0x0003F0)
struct FButtonStyle : FSlateWidgetStyle
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FSlateBrush                                        Normal;                                                     // 0x0010   (0x00D0)  
	FSlateBrush                                        Hovered;                                                    // 0x00E0   (0x00D0)  
	FSlateBrush                                        Pressed;                                                    // 0x01B0   (0x00D0)  
	FSlateBrush                                        Disabled;                                                   // 0x0280   (0x00D0)  
	FSlateColor                                        NormalForeground;                                           // 0x0350   (0x0014)  
	FSlateColor                                        HoveredForeground;                                          // 0x0364   (0x0014)  
	FSlateColor                                        PressedForeground;                                          // 0x0378   (0x0014)  
	FSlateColor                                        DisabledForeground;                                         // 0x038C   (0x0014)  
	FMargin                                            NormalPadding;                                              // 0x03A0   (0x0010)  
	FMargin                                            PressedPadding;                                             // 0x03B0   (0x0010)  
	FSlateSound                                        PressedSlateSound;                                          // 0x03C0   (0x0018)  
	FSlateSound                                        HoveredSlateSound;                                          // 0x03D8   (0x0018)  
};

/// Struct /Script/SlateCore.SlateFontInfo
/// Size: 0x0058 (0x000000 - 0x000058)
struct FSlateFontInfo
{ 
	UObject*                                           FontObject;                                                 // 0x0000   (0x0008)  
	UObject*                                           FontMaterial;                                               // 0x0008   (0x0008)  
	FFontOutlineSettings                               OutlineSettings;                                            // 0x0010   (0x0020)  
	unsigned char                                      UnknownData00_5[0x10];                                      // 0x0030   (0x0010)  MISSED
	FName                                              TypefaceFontName;                                           // 0x0040   (0x0008)  
	int32_t                                            Size;                                                       // 0x0048   (0x0004)  
	int32_t                                            LetterSpacing;                                              // 0x004C   (0x0004)  
	float                                              SkewAmount;                                                 // 0x0050   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0054   (0x0004)  MISSED
};

/// Struct /Script/SlateCore.FontOutlineSettings
/// Size: 0x0020 (0x000000 - 0x000020)
struct FFontOutlineSettings
{ 
	int32_t                                            OutlineSize;                                                // 0x0000   (0x0004)  
	bool                                               bSeparateFillAlpha;                                         // 0x0004   (0x0001)  
	bool                                               bApplyOutlineToDropShadows;                                 // 0x0005   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0006   (0x0002)  MISSED
	UObject*                                           OutlineMaterial;                                            // 0x0008   (0x0008)  
	FLinearColor                                       OutlineColor;                                               // 0x0010   (0x0010)  
};

/// Struct /Script/SlateCore.EditableTextStyle
/// Size: 0x02E8 (0x000008 - 0x0002F0)
struct FEditableTextStyle : FSlateWidgetStyle
{ 
	FSlateFontInfo                                     Font;                                                       // 0x0008   (0x0058)  
	FSlateColor                                        ColorAndOpacity;                                            // 0x0060   (0x0014)  
	unsigned char                                      UnknownData00_5[0xC];                                       // 0x0074   (0x000C)  MISSED
	FSlateBrush                                        BackgroundImageSelected;                                    // 0x0080   (0x00D0)  
	FSlateBrush                                        BackgroundImageComposing;                                   // 0x0150   (0x00D0)  
	FSlateBrush                                        CaretImage;                                                 // 0x0220   (0x00D0)  
};

/// Struct /Script/SlateCore.EditableTextBoxStyle
/// Size: 0x0E78 (0x000008 - 0x000E80)
struct FEditableTextBoxStyle : FSlateWidgetStyle
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FSlateBrush                                        BackgroundImageNormal;                                      // 0x0010   (0x00D0)  
	FSlateBrush                                        BackgroundImageHovered;                                     // 0x00E0   (0x00D0)  
	FSlateBrush                                        BackgroundImageFocused;                                     // 0x01B0   (0x00D0)  
	FSlateBrush                                        BackgroundImageReadOnly;                                    // 0x0280   (0x00D0)  
	FMargin                                            Padding;                                                    // 0x0350   (0x0010)  
	FTextBlockStyle                                    TextStyle;                                                  // 0x0360   (0x0340)  
	FSlateColor                                        ForegroundColor;                                            // 0x06A0   (0x0014)  
	FSlateColor                                        BackgroundColor;                                            // 0x06B4   (0x0014)  
	FSlateColor                                        ReadOnlyForegroundColor;                                    // 0x06C8   (0x0014)  
	FSlateColor                                        FocusedForegroundColor;                                     // 0x06DC   (0x0014)  
	FMargin                                            HScrollBarPadding;                                          // 0x06F0   (0x0010)  
	FMargin                                            VScrollBarPadding;                                          // 0x0700   (0x0010)  
	FScrollBarStyle                                    ScrollBarStyle;                                             // 0x0710   (0x0770)  
};

/// Struct /Script/SlateCore.TextBlockStyle
/// Size: 0x0338 (0x000008 - 0x000340)
struct FTextBlockStyle : FSlateWidgetStyle
{ 
	FSlateFontInfo                                     Font;                                                       // 0x0008   (0x0058)  
	FSlateColor                                        ColorAndOpacity;                                            // 0x0060   (0x0014)  
	FDeprecateSlateVector2D                            ShadowOffset;                                               // 0x0074   (0x0008)  
	FLinearColor                                       ShadowColorAndOpacity;                                      // 0x007C   (0x0010)  
	FSlateColor                                        SelectedBackgroundColor;                                    // 0x008C   (0x0014)  
	FSlateColor                                        HighlightColor;                                             // 0x00A0   (0x0014)  
	unsigned char                                      UnknownData00_5[0xC];                                       // 0x00B4   (0x000C)  MISSED
	FSlateBrush                                        HighlightShape;                                             // 0x00C0   (0x00D0)  
	FSlateBrush                                        StrikeBrush;                                                // 0x0190   (0x00D0)  
	FSlateBrush                                        UnderlineBrush;                                             // 0x0260   (0x00D0)  
	ETextTransformPolicy                               TransformPolicy;                                            // 0x0330   (0x0001)  
	ETextOverflowPolicy                                OverflowPolicy;                                             // 0x0331   (0x0001)  
	unsigned char                                      UnknownData01_6[0xE];                                       // 0x0332   (0x000E)  MISSED
};

/// Struct /Script/SlateCore.SpinBoxStyle
/// Size: 0x05F8 (0x000008 - 0x000600)
struct FSpinBoxStyle : FSlateWidgetStyle
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FSlateBrush                                        BackgroundBrush;                                            // 0x0010   (0x00D0)  
	FSlateBrush                                        ActiveBackgroundBrush;                                      // 0x00E0   (0x00D0)  
	FSlateBrush                                        HoveredBackgroundBrush;                                     // 0x01B0   (0x00D0)  
	FSlateBrush                                        ActiveFillBrush;                                            // 0x0280   (0x00D0)  
	FSlateBrush                                        HoveredFillBrush;                                           // 0x0350   (0x00D0)  
	FSlateBrush                                        InactiveFillBrush;                                          // 0x0420   (0x00D0)  
	FSlateBrush                                        ArrowsImage;                                                // 0x04F0   (0x00D0)  
	FSlateColor                                        ForegroundColor;                                            // 0x05C0   (0x0014)  
	FMargin                                            TextPadding;                                                // 0x05D4   (0x0010)  
	FMargin                                            InsetPadding;                                               // 0x05E4   (0x0010)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x05F4   (0x000C)  MISSED
};

/// Struct /Script/SlateCore.CharacterEvent
/// Size: 0x0008 (0x000020 - 0x000028)
struct FCharacterEvent : FInputEvent
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0020   (0x0008)  MISSED
};

/// Struct /Script/SlateCore.KeyEvent
/// Size: 0x0020 (0x000020 - 0x000040)
struct FKeyEvent : FInputEvent
{ 
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0020   (0x0020)  MISSED
};

/// Struct /Script/SlateCore.NavigationEvent
/// Size: 0x0008 (0x000020 - 0x000028)
struct FNavigationEvent : FInputEvent
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0020   (0x0008)  MISSED
};

/// Struct /Script/SlateCore.AnalogInputEvent
/// Size: 0x0008 (0x000040 - 0x000048)
struct FAnalogInputEvent : FKeyEvent
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0040   (0x0008)  MISSED
};

/// Struct /Script/SlateCore.FocusEvent
/// Size: 0x0008 (0x000000 - 0x000008)
struct FFocusEvent
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/SlateCore.MotionEvent
/// Size: 0x0060 (0x000020 - 0x000080)
struct FMotionEvent : FInputEvent
{ 
	unsigned char                                      UnknownData00_1[0x60];                                      // 0x0020   (0x0060)  MISSED
};

/// Struct /Script/SlateCore.SliderStyle
/// Size: 0x04F8 (0x000008 - 0x000500)
struct FSliderStyle : FSlateWidgetStyle
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FSlateBrush                                        NormalBarImage;                                             // 0x0010   (0x00D0)  
	FSlateBrush                                        HoveredBarImage;                                            // 0x00E0   (0x00D0)  
	FSlateBrush                                        DisabledBarImage;                                           // 0x01B0   (0x00D0)  
	FSlateBrush                                        NormalThumbImage;                                           // 0x0280   (0x00D0)  
	FSlateBrush                                        HoveredThumbImage;                                          // 0x0350   (0x00D0)  
	FSlateBrush                                        DisabledThumbImage;                                         // 0x0420   (0x00D0)  
	float                                              BarThickness;                                               // 0x04F0   (0x0004)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x04F4   (0x000C)  MISSED
};

/// Struct /Script/SlateCore.FontData
/// Size: 0x0028 (0x000000 - 0x000028)
struct FFontData
{ 
	FString                                            FontFilename;                                               // 0x0000   (0x0010)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0010   (0x0004)  MISSED
	EFontHinting                                       Hinting;                                                    // 0x0014   (0x0001)  
	EFontLoadingPolicy                                 LoadingPolicy;                                              // 0x0015   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x0016   (0x0002)  MISSED
	int32_t                                            SubFaceIndex;                                               // 0x0018   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x001C   (0x0004)  MISSED
	UObject*                                           FontFaceAsset;                                              // 0x0020   (0x0008)  
};

/// Struct /Script/SlateCore.TypefaceEntry
/// Size: 0x0030 (0x000000 - 0x000030)
struct FTypefaceEntry
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
	FFontData                                          Font;                                                       // 0x0008   (0x0028)  
};

/// Struct /Script/SlateCore.Typeface
/// Size: 0x0010 (0x000000 - 0x000010)
struct FTypeface
{ 
	TArray<FTypefaceEntry>                             Fonts;                                                      // 0x0000   (0x0010)  
};

/// Struct /Script/SlateCore.CompositeFallbackFont
/// Size: 0x0018 (0x000000 - 0x000018)
struct FCompositeFallbackFont
{ 
	FTypeface                                          Typeface;                                                   // 0x0000   (0x0010)  
	float                                              ScalingFactor;                                              // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/SlateCore.CompositeSubFont
/// Size: 0x0020 (0x000018 - 0x000038)
struct FCompositeSubFont : FCompositeFallbackFont
{ 
	TArray<FInt32Range>                                CharacterRanges;                                            // 0x0018   (0x0010)  
	FString                                            Cultures;                                                   // 0x0028   (0x0010)  
};

/// Struct /Script/SlateCore.CompositeFont
/// Size: 0x0038 (0x000000 - 0x000038)
struct FCompositeFont
{ 
	FTypeface                                          DefaultTypeface;                                            // 0x0000   (0x0010)  
	FCompositeFallbackFont                             FallbackTypeface;                                           // 0x0010   (0x0018)  
	TArray<FCompositeSubFont>                          SubTypefaces;                                               // 0x0028   (0x0010)  
};

/// Struct /Script/SlateCore.CaptureLostEvent
/// Size: 0x0008 (0x000000 - 0x000008)
struct FCaptureLostEvent
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/SlateCore.SegmentedControlStyle
/// Size: 0x2158 (0x000008 - 0x002160)
struct FSegmentedControlStyle : FSlateWidgetStyle
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FCheckBoxStyle                                     ControlStyle;                                               // 0x0010   (0x0AD0)  
	FCheckBoxStyle                                     FirstControlStyle;                                          // 0x0AE0   (0x0AD0)  
	FCheckBoxStyle                                     LastControlStyle;                                           // 0x15B0   (0x0AD0)  
	FSlateBrush                                        BackgroundBrush;                                            // 0x2080   (0x00D0)  
	FMargin                                            UniformPadding;                                             // 0x2150   (0x0010)  
};

/// Struct /Script/SlateCore.CheckBoxStyle
/// Size: 0x0AC8 (0x000008 - 0x000AD0)
struct FCheckBoxStyle : FSlateWidgetStyle
{ 
	TEnumAsByte<ESlateCheckBoxType>                    CheckBoxType;                                               // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0009   (0x0007)  MISSED
	FSlateBrush                                        UncheckedImage;                                             // 0x0010   (0x00D0)  
	FSlateBrush                                        UncheckedHoveredImage;                                      // 0x00E0   (0x00D0)  
	FSlateBrush                                        UncheckedPressedImage;                                      // 0x01B0   (0x00D0)  
	FSlateBrush                                        CheckedImage;                                               // 0x0280   (0x00D0)  
	FSlateBrush                                        CheckedHoveredImage;                                        // 0x0350   (0x00D0)  
	FSlateBrush                                        CheckedPressedImage;                                        // 0x0420   (0x00D0)  
	FSlateBrush                                        UndeterminedImage;                                          // 0x04F0   (0x00D0)  
	FSlateBrush                                        UndeterminedHoveredImage;                                   // 0x05C0   (0x00D0)  
	FSlateBrush                                        UndeterminedPressedImage;                                   // 0x0690   (0x00D0)  
	FMargin                                            Padding;                                                    // 0x0760   (0x0010)  
	FSlateBrush                                        BackgroundImage;                                            // 0x0770   (0x00D0)  
	FSlateBrush                                        BackgroundHoveredImage;                                     // 0x0840   (0x00D0)  
	FSlateBrush                                        BackgroundPressedImage;                                     // 0x0910   (0x00D0)  
	FSlateColor                                        ForegroundColor;                                            // 0x09E0   (0x0014)  
	FSlateColor                                        HoveredForeground;                                          // 0x09F4   (0x0014)  
	FSlateColor                                        PressedForeground;                                          // 0x0A08   (0x0014)  
	FSlateColor                                        CheckedForeground;                                          // 0x0A1C   (0x0014)  
	FSlateColor                                        CheckedHoveredForeground;                                   // 0x0A30   (0x0014)  
	FSlateColor                                        CheckedPressedForeground;                                   // 0x0A44   (0x0014)  
	FSlateColor                                        UndeterminedForeground;                                     // 0x0A58   (0x0014)  
	FSlateColor                                        BorderBackgroundColor;                                      // 0x0A6C   (0x0014)  
	FSlateSound                                        CheckedSlateSound;                                          // 0x0A80   (0x0018)  
	FSlateSound                                        UncheckedSlateSound;                                        // 0x0A98   (0x0018)  
	FSlateSound                                        HoveredSlateSound;                                          // 0x0AB0   (0x0018)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0AC8   (0x0008)  MISSED
};

/// Struct /Script/SlateCore.HyperlinkStyle
/// Size: 0x0748 (0x000008 - 0x000750)
struct FHyperlinkStyle : FSlateWidgetStyle
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FButtonStyle                                       UnderlineStyle;                                             // 0x0010   (0x03F0)  
	FTextBlockStyle                                    TextStyle;                                                  // 0x0400   (0x0340)  
	FMargin                                            Padding;                                                    // 0x0740   (0x0010)  
};

/// Struct /Script/SlateCore.InlineEditableTextBlockStyle
/// Size: 0x11C8 (0x000008 - 0x0011D0)
struct FInlineEditableTextBlockStyle : FSlateWidgetStyle
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FEditableTextBoxStyle                              EditableTextBoxStyle;                                       // 0x0010   (0x0E80)  
	FTextBlockStyle                                    TextStyle;                                                  // 0x0E90   (0x0340)  
};

/// Struct /Script/SlateCore.ProgressBarStyle
/// Size: 0x0288 (0x000008 - 0x000290)
struct FProgressBarStyle : FSlateWidgetStyle
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FSlateBrush                                        BackgroundImage;                                            // 0x0010   (0x00D0)  
	FSlateBrush                                        FillImage;                                                  // 0x00E0   (0x00D0)  
	FSlateBrush                                        MarqueeImage;                                               // 0x01B0   (0x00D0)  
	bool                                               EnableFillAnimation;                                        // 0x0280   (0x0001)  
	unsigned char                                      UnknownData01_6[0xF];                                       // 0x0281   (0x000F)  MISSED
};

/// Struct /Script/SlateCore.ExpandableAreaStyle
/// Size: 0x01B8 (0x000008 - 0x0001C0)
struct FExpandableAreaStyle : FSlateWidgetStyle
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FSlateBrush                                        CollapsedImage;                                             // 0x0010   (0x00D0)  
	FSlateBrush                                        ExpandedImage;                                              // 0x00E0   (0x00D0)  
	float                                              RolloutAnimationSeconds;                                    // 0x01B0   (0x0004)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x01B4   (0x000C)  MISSED
};

/// Struct /Script/SlateCore.SearchBoxStyle
/// Size: 0x1248 (0x000008 - 0x001250)
struct FSearchBoxStyle : FSlateWidgetStyle
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FEditableTextBoxStyle                              TextBoxStyle;                                               // 0x0010   (0x0E80)  
	FSlateFontInfo                                     ActiveFontInfo;                                             // 0x0E90   (0x0058)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0EE8   (0x0008)  MISSED
	FSlateBrush                                        UpArrowImage;                                               // 0x0EF0   (0x00D0)  
	FSlateBrush                                        DownArrowImage;                                             // 0x0FC0   (0x00D0)  
	FSlateBrush                                        GlassImage;                                                 // 0x1090   (0x00D0)  
	FSlateBrush                                        ClearImage;                                                 // 0x1160   (0x00D0)  
	FMargin                                            ImagePadding;                                               // 0x1230   (0x0010)  
	bool                                               bLeftAlignButtons;                                          // 0x1240   (0x0001)  
	bool                                               bLeftAlignSearchResultButtons;                              // 0x1241   (0x0001)  
	bool                                               bLeftAlignGlassImageAndClearButton;                         // 0x1242   (0x0001)  
	unsigned char                                      UnknownData02_6[0xD];                                       // 0x1243   (0x000D)  MISSED
};

/// Struct /Script/SlateCore.VolumeControlStyle
/// Size: 0x0918 (0x000008 - 0x000920)
struct FVolumeControlStyle : FSlateWidgetStyle
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FSliderStyle                                       SliderStyle;                                                // 0x0010   (0x0500)  
	FSlateBrush                                        HighVolumeImage;                                            // 0x0510   (0x00D0)  
	FSlateBrush                                        MidVolumeImage;                                             // 0x05E0   (0x00D0)  
	FSlateBrush                                        LowVolumeImage;                                             // 0x06B0   (0x00D0)  
	FSlateBrush                                        NoVolumeImage;                                              // 0x0780   (0x00D0)  
	FSlateBrush                                        MutedImage;                                                 // 0x0850   (0x00D0)  
};

/// Struct /Script/SlateCore.InlineTextImageStyle
/// Size: 0x00E8 (0x000008 - 0x0000F0)
struct FInlineTextImageStyle : FSlateWidgetStyle
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FSlateBrush                                        Image;                                                      // 0x0010   (0x00D0)  
	int16_t                                            Baseline;                                                   // 0x00E0   (0x0002)  
	unsigned char                                      UnknownData01_6[0xE];                                       // 0x00E2   (0x000E)  MISSED
};

/// Struct /Script/SlateCore.SplitterStyle
/// Size: 0x01A8 (0x000008 - 0x0001B0)
struct FSplitterStyle : FSlateWidgetStyle
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FSlateBrush                                        HandleNormalBrush;                                          // 0x0010   (0x00D0)  
	FSlateBrush                                        HandleHighlightBrush;                                       // 0x00E0   (0x00D0)  
};

/// Struct /Script/SlateCore.TableViewStyle
/// Size: 0x00D8 (0x000008 - 0x0000E0)
struct FTableViewStyle : FSlateWidgetStyle
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FSlateBrush                                        BackgroundBrush;                                            // 0x0010   (0x00D0)  
};

/// Struct /Script/SlateCore.TableColumnHeaderStyle
/// Size: 0x0758 (0x000008 - 0x000760)
struct FTableColumnHeaderStyle : FSlateWidgetStyle
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FSlateBrush                                        SortPrimaryAscendingImage;                                  // 0x0010   (0x00D0)  
	FSlateBrush                                        SortPrimaryDescendingImage;                                 // 0x00E0   (0x00D0)  
	FSlateBrush                                        SortSecondaryAscendingImage;                                // 0x01B0   (0x00D0)  
	FSlateBrush                                        SortSecondaryDescendingImage;                               // 0x0280   (0x00D0)  
	FSlateBrush                                        NormalBrush;                                                // 0x0350   (0x00D0)  
	FSlateBrush                                        HoveredBrush;                                               // 0x0420   (0x00D0)  
	FSlateBrush                                        MenuDropdownImage;                                          // 0x04F0   (0x00D0)  
	FSlateBrush                                        MenuDropdownNormalBorderBrush;                              // 0x05C0   (0x00D0)  
	FSlateBrush                                        MenuDropdownHoveredBorderBrush;                             // 0x0690   (0x00D0)  
};

/// Struct /Script/SlateCore.HeaderRowStyle
/// Size: 0x1258 (0x000008 - 0x001260)
struct FHeaderRowStyle : FSlateWidgetStyle
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTableColumnHeaderStyle                            ColumnStyle;                                                // 0x0010   (0x0760)  
	FTableColumnHeaderStyle                            LastColumnStyle;                                            // 0x0770   (0x0760)  
	FSplitterStyle                                     ColumnSplitterStyle;                                        // 0x0ED0   (0x01B0)  
	float                                              SplitterHandleSize;                                         // 0x1080   (0x0004)  
	unsigned char                                      UnknownData01_5[0xC];                                       // 0x1084   (0x000C)  MISSED
	FSlateBrush                                        BackgroundBrush;                                            // 0x1090   (0x00D0)  
	FSlateColor                                        ForegroundColor;                                            // 0x1160   (0x0014)  
	unsigned char                                      UnknownData02_5[0xC];                                       // 0x1174   (0x000C)  MISSED
	FSlateBrush                                        HorizontalSeparatorBrush;                                   // 0x1180   (0x00D0)  
	float                                              HorizontalSeparatorThickness;                               // 0x1250   (0x0004)  
	unsigned char                                      UnknownData03_6[0xC];                                       // 0x1254   (0x000C)  MISSED
};

/// Struct /Script/SlateCore.DockTabStyle
/// Size: 0x0D78 (0x000008 - 0x000D80)
struct FDockTabStyle : FSlateWidgetStyle
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FButtonStyle                                       CloseButtonStyle;                                           // 0x0010   (0x03F0)  
	FSlateBrush                                        NormalBrush;                                                // 0x0400   (0x00D0)  
	FSlateBrush                                        ColorOverlayTabBrush;                                       // 0x04D0   (0x00D0)  
	FSlateBrush                                        ColorOverlayIconBrush;                                      // 0x05A0   (0x00D0)  
	FSlateBrush                                        ForegroundBrush;                                            // 0x0670   (0x00D0)  
	FSlateBrush                                        HoveredBrush;                                               // 0x0740   (0x00D0)  
	FSlateBrush                                        ContentAreaBrush;                                           // 0x0810   (0x00D0)  
	FSlateBrush                                        TabWellBrush;                                               // 0x08E0   (0x00D0)  
	FTextBlockStyle                                    TabTextStyle;                                               // 0x09B0   (0x0340)  
	FMargin                                            TabPadding;                                                 // 0x0CF0   (0x0010)  
	FDeprecateSlateVector2D                            IconSize;                                                   // 0x0D00   (0x0008)  
	float                                              OverlapWidth;                                               // 0x0D08   (0x0004)  
	FSlateColor                                        FlashColor;                                                 // 0x0D0C   (0x0014)  
	FSlateColor                                        NormalForegroundColor;                                      // 0x0D20   (0x0014)  
	FSlateColor                                        HoveredForegroundColor;                                     // 0x0D34   (0x0014)  
	FSlateColor                                        ActiveForegroundColor;                                      // 0x0D48   (0x0014)  
	FSlateColor                                        ForegroundForegroundColor;                                  // 0x0D5C   (0x0014)  
	float                                              IconBorderPadding;                                          // 0x0D70   (0x0004)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x0D74   (0x000C)  MISSED
};

/// Struct /Script/SlateCore.ScrollBoxStyle
/// Size: 0x0368 (0x000008 - 0x000370)
struct FScrollBoxStyle : FSlateWidgetStyle
{ 
	float                                              BarThickness;                                               // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	FSlateBrush                                        TopShadowBrush;                                             // 0x0010   (0x00D0)  
	FSlateBrush                                        BottomShadowBrush;                                          // 0x00E0   (0x00D0)  
	FSlateBrush                                        LeftShadowBrush;                                            // 0x01B0   (0x00D0)  
	FSlateBrush                                        RightShadowBrush;                                           // 0x0280   (0x00D0)  
	FMargin                                            HorizontalScrolledContentPadding;                           // 0x0350   (0x0010)  
	FMargin                                            VerticalScrolledContentPadding;                             // 0x0360   (0x0010)  
};

/// Struct /Script/SlateCore.ScrollBorderStyle
/// Size: 0x01A8 (0x000008 - 0x0001B0)
struct FScrollBorderStyle : FSlateWidgetStyle
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FSlateBrush                                        TopShadowBrush;                                             // 0x0010   (0x00D0)  
	FSlateBrush                                        BottomShadowBrush;                                          // 0x00E0   (0x00D0)  
};

/// Struct /Script/SlateCore.WindowStyle
/// Size: 0x1938 (0x000008 - 0x001940)
struct FWindowStyle : FSlateWidgetStyle
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FButtonStyle                                       MinimizeButtonStyle;                                        // 0x0010   (0x03F0)  
	FButtonStyle                                       MaximizeButtonStyle;                                        // 0x0400   (0x03F0)  
	FButtonStyle                                       RestoreButtonStyle;                                         // 0x07F0   (0x03F0)  
	FButtonStyle                                       CloseButtonStyle;                                           // 0x0BE0   (0x03F0)  
	FTextBlockStyle                                    TitleTextStyle;                                             // 0x0FD0   (0x0340)  
	FSlateBrush                                        ActiveTitleBrush;                                           // 0x1310   (0x00D0)  
	FSlateBrush                                        InactiveTitleBrush;                                         // 0x13E0   (0x00D0)  
	FSlateBrush                                        FlashTitleBrush;                                            // 0x14B0   (0x00D0)  
	FSlateColor                                        BackgroundColor;                                            // 0x1580   (0x0014)  
	unsigned char                                      UnknownData01_5[0xC];                                       // 0x1594   (0x000C)  MISSED
	FSlateBrush                                        OutlineBrush;                                               // 0x15A0   (0x00D0)  
	FSlateColor                                        OutlineColor;                                               // 0x1670   (0x0014)  
	unsigned char                                      UnknownData02_5[0xC];                                       // 0x1684   (0x000C)  MISSED
	FSlateBrush                                        BorderBrush;                                                // 0x1690   (0x00D0)  
	FSlateColor                                        BorderColor;                                                // 0x1760   (0x0014)  
	unsigned char                                      UnknownData03_5[0xC];                                       // 0x1774   (0x000C)  MISSED
	FSlateBrush                                        BackgroundBrush;                                            // 0x1780   (0x00D0)  
	FSlateBrush                                        ChildBackgroundBrush;                                       // 0x1850   (0x00D0)  
	int32_t                                            WindowCornerRadius;                                         // 0x1920   (0x0004)  
	FMargin                                            BorderPadding;                                              // 0x1924   (0x0010)  
	unsigned char                                      UnknownData04_6[0xC];                                       // 0x1934   (0x000C)  MISSED
};

/// Struct /Script/SlateCore.StyleColorList
/// Size: 0x0988 (0x000000 - 0x000988)
struct FStyleColorList
{ 
	FLinearColor                                       StyleColors;                                                // 0x0000   (0x03D0)  
	unsigned char                                      UnknownData00_6[0x5B8];                                     // 0x03D0   (0x05B8)  MISSED
};

/// Struct /Script/SlateCore.StyleTheme
/// Size: 0x0048 (0x000000 - 0x000048)
struct FStyleTheme
{ 
	unsigned char                                      UnknownData00_1[0x48];                                      // 0x0000   (0x0048)  MISSED
};

/// Struct /Script/SlateCore.ToolBarStyle
/// Size: 0x3E48 (0x000008 - 0x003E50)
struct FToolBarStyle : FSlateWidgetStyle
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FSlateBrush                                        BackgroundBrush;                                            // 0x0010   (0x00D0)  
	FSlateBrush                                        ExpandBrush;                                                // 0x00E0   (0x00D0)  
	FSlateBrush                                        SeparatorBrush;                                             // 0x01B0   (0x00D0)  
	FTextBlockStyle                                    LabelStyle;                                                 // 0x0280   (0x0340)  
	FEditableTextBoxStyle                              EditableTextStyle;                                          // 0x05C0   (0x0E80)  
	FCheckBoxStyle                                     ToggleButton;                                               // 0x1440   (0x0AD0)  
	FComboButtonStyle                                  ComboButtonStyle;                                           // 0x1F10   (0x0600)  
	FButtonStyle                                       SettingsButtonStyle;                                        // 0x2510   (0x03F0)  
	FComboButtonStyle                                  SettingsComboButton;                                        // 0x2900   (0x0600)  
	FCheckBoxStyle                                     SettingsToggleButton;                                       // 0x2F00   (0x0AD0)  
	FButtonStyle                                       ButtonStyle;                                                // 0x39D0   (0x03F0)  
	FMargin                                            LabelPadding;                                               // 0x3DC0   (0x0010)  
	FMargin                                            SeparatorPadding;                                           // 0x3DD0   (0x0010)  
	FMargin                                            ComboButtonPadding;                                         // 0x3DE0   (0x0010)  
	FMargin                                            ButtonPadding;                                              // 0x3DF0   (0x0010)  
	FMargin                                            CheckBoxPadding;                                            // 0x3E00   (0x0010)  
	FMargin                                            BlockPadding;                                               // 0x3E10   (0x0010)  
	FMargin                                            IndentedBlockPadding;                                       // 0x3E20   (0x0010)  
	FMargin                                            BackgroundPadding;                                          // 0x3E30   (0x0010)  
	FDeprecateSlateVector2D                            IconSize;                                                   // 0x3E40   (0x0008)  
	bool                                               bShowLabels;                                                // 0x3E48   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x3E49   (0x0007)  MISSED
};

/// Class /Script/SlateCore.SlateWidgetStyleAsset
/// Size: 0x0008 (0x000028 - 0x000030)
class USlateWidgetStyleAsset : public UObject : UObject
{ 
public:
	USlateWidgetStyleContainerBase*                    CustomStyle;                                                // 0x0028   (0x0008)  
};

/// Class /Script/SlateCore.FontBulkData
/// Size: 0x0050 (0x000028 - 0x000078)
class UFontBulkData : public UObject : UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x0028   (0x0050)  MISSED
};

/// Class /Script/SlateCore.FontFaceInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UFontFaceInterface : public UInterface : UInterface
{ 
public:
};

/// Class /Script/SlateCore.FontProviderInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UFontProviderInterface : public UInterface : UInterface
{ 
public:
};

/// Class /Script/SlateCore.SlateTypes
/// Size: 0x0000 (0x000028 - 0x000028)
class USlateTypes : public UObject : UObject
{ 
public:
};

/// Class /Script/SlateCore.SlateWidgetStyleContainerBase
/// Size: 0x0008 (0x000028 - 0x000030)
class USlateWidgetStyleContainerBase : public UObject : UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/SlateCore.SlateWidgetStyleContainerInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class USlateWidgetStyleContainerInterface : public UInterface : UInterface
{ 
public:
};

/// Class /Script/SlateCore.SlateThemeManager
/// Size: 0x0998 (0x000028 - 0x0009C0)
class USlateThemeManager : public UObject : UObject
{ 
public:
	FGuid                                              CurrentThemeId;                                             // 0x0028   (0x0010)  
	FStyleColorList                                    ActiveColors;                                               // 0x0038   (0x0988)  
};

/// Enum /Script/SlateCore.ECheckBoxState
/// Size: 0x04
enum ECheckBoxState : uint8_t
{
	ECheckBoxState__Unchecked0                                                       = 0,
	ECheckBoxState__Checked1                                                         = 1,
	ECheckBoxState__Undetermined2                                                    = 2,
	ECheckBoxState__ECheckBoxState_MAX3                                              = 3
};

/// Enum /Script/SlateCore.EWidgetClipping
/// Size: 0x06
enum EWidgetClipping : uint8_t
{
	EWidgetClipping__Inherit0                                                        = 0,
	EWidgetClipping__ClipToBounds1                                                   = 1,
	EWidgetClipping__ClipToBoundsWithoutIntersecting2                                = 2,
	EWidgetClipping__ClipToBoundsAlways3                                             = 3,
	EWidgetClipping__OnDemand4                                                       = 4,
	EWidgetClipping__EWidgetClipping_MAX5                                            = 5
};

/// Enum /Script/SlateCore.ESlateBrushRoundingType
/// Size: 0x03
enum ESlateBrushRoundingType : uint8_t
{
	ESlateBrushRoundingType__FixedRadius0                                            = 0,
	ESlateBrushRoundingType__HalfHeightRadius1                                       = 1,
	ESlateBrushRoundingType__ESlateBrushRoundingType_MAX2                            = 2
};

/// Enum /Script/SlateCore.ESlateColorStylingMode
/// Size: 0x06
enum ESlateColorStylingMode : uint8_t
{
	ESlateColorStylingMode__UseColor_Specified0                                      = 0,
	ESlateColorStylingMode__UseColor_ColorTable1                                     = 1,
	ESlateColorStylingMode__UseColor_Foreground2                                     = 2,
	ESlateColorStylingMode__UseColor_Foreground_Subdued3                             = 3,
	ESlateColorStylingMode__UseColor_UseStyle4                                       = 4,
	ESlateColorStylingMode__UseColor_MAX5                                            = 5
};

/// Enum /Script/SlateCore.ESlateBrushImageType
/// Size: 0x05
enum ESlateBrushImageType : uint8_t
{
	ESlateBrushImageType__NoImage0                                                   = 0,
	ESlateBrushImageType__FullColor1                                                 = 1,
	ESlateBrushImageType__Linear2                                                    = 2,
	ESlateBrushImageType__Vector3                                                    = 3,
	ESlateBrushImageType__ESlateBrushImageType_MAX4                                  = 4
};

/// Enum /Script/SlateCore.ESlateBrushMirrorType
/// Size: 0x05
enum ESlateBrushMirrorType : uint8_t
{
	ESlateBrushMirrorType__NoMirror0                                                 = 0,
	ESlateBrushMirrorType__Horizontal1                                               = 1,
	ESlateBrushMirrorType__Vertical2                                                 = 2,
	ESlateBrushMirrorType__Both3                                                     = 3,
	ESlateBrushMirrorType__ESlateBrushMirrorType_MAX4                                = 4
};

/// Enum /Script/SlateCore.ESlateBrushTileType
/// Size: 0x05
enum ESlateBrushTileType : uint8_t
{
	ESlateBrushTileType__NoTile0                                                     = 0,
	ESlateBrushTileType__Horizontal1                                                 = 1,
	ESlateBrushTileType__Vertical2                                                   = 2,
	ESlateBrushTileType__Both3                                                       = 3,
	ESlateBrushTileType__ESlateBrushTileType_MAX4                                    = 4
};

/// Enum /Script/SlateCore.ESlateBrushDrawType
/// Size: 0x06
enum ESlateBrushDrawType : uint8_t
{
	ESlateBrushDrawType__NoDrawType0                                                 = 0,
	ESlateBrushDrawType__Box1                                                        = 1,
	ESlateBrushDrawType__Border2                                                     = 2,
	ESlateBrushDrawType__Image3                                                      = 3,
	ESlateBrushDrawType__RoundedBox4                                                 = 4,
	ESlateBrushDrawType__ESlateBrushDrawType_MAX5                                    = 5
};

/// Enum /Script/SlateCore.EUINavigationRule
/// Size: 0x08
enum EUINavigationRule : uint8_t
{
	EUINavigationRule__Escape0                                                       = 0,
	EUINavigationRule__Explicit1                                                     = 1,
	EUINavigationRule__Wrap2                                                         = 2,
	EUINavigationRule__Stop3                                                         = 3,
	EUINavigationRule__Custom4                                                       = 4,
	EUINavigationRule__CustomBoundary5                                               = 5,
	EUINavigationRule__Invalid6                                                      = 6,
	EUINavigationRule__EUINavigationRule_MAX7                                        = 7
};

/// Enum /Script/SlateCore.EUINavigation
/// Size: 0x09
enum EUINavigation : uint8_t
{
	EUINavigation__Left0                                                             = 0,
	EUINavigation__Right1                                                            = 1,
	EUINavigation__Up2                                                               = 2,
	EUINavigation__Down3                                                             = 3,
	EUINavigation__Next4                                                             = 4,
	EUINavigation__Previous5                                                         = 5,
	EUINavigation__Num6                                                              = 6,
	EUINavigation__Invalid7                                                          = 7,
	EUINavigation__EUINavigation_MAX8                                                = 8
};

/// Enum /Script/SlateCore.EFlowDirectionPreference
/// Size: 0x05
enum EFlowDirectionPreference : uint8_t
{
	EFlowDirectionPreference__Inherit0                                               = 0,
	EFlowDirectionPreference__Culture1                                               = 1,
	EFlowDirectionPreference__LeftToRight2                                           = 2,
	EFlowDirectionPreference__RightToLeft3                                           = 3,
	EFlowDirectionPreference__EFlowDirectionPreference_MAX4                          = 4
};

/// Enum /Script/SlateCore.ESelectInfo
/// Size: 0x05
enum ESelectInfo : uint8_t
{
	ESelectInfo__OnKeyPress0                                                         = 0,
	ESelectInfo__OnNavigation1                                                       = 1,
	ESelectInfo__OnMouseClick2                                                       = 2,
	ESelectInfo__Direct3                                                             = 3,
	ESelectInfo__ESelectInfo_MAX4                                                    = 4
};

/// Enum /Script/SlateCore.EVerticalAlignment
/// Size: 0x05
enum EVerticalAlignment : uint8_t
{
	VAlign_Fill0                                                                     = 0,
	VAlign_Top1                                                                      = 1,
	VAlign_Center2                                                                   = 2,
	VAlign_Bottom3                                                                   = 3,
	VAlign_MAX4                                                                      = 4
};

/// Enum /Script/SlateCore.ETextCommit
/// Size: 0x05
enum ETextCommit : uint8_t
{
	ETextCommit__Default0                                                            = 0,
	ETextCommit__OnEnter1                                                            = 1,
	ETextCommit__OnUserMovedFocus2                                                   = 2,
	ETextCommit__OnCleared3                                                          = 3,
	ETextCommit__ETextCommit_MAX4                                                    = 4
};

/// Enum /Script/SlateCore.ETextOverflowPolicy
/// Size: 0x03
enum ETextOverflowPolicy : uint8_t
{
	ETextOverflowPolicy__Clip0                                                       = 0,
	ETextOverflowPolicy__Ellipsis1                                                   = 1,
	ETextOverflowPolicy__ETextOverflowPolicy_MAX2                                    = 2
};

/// Enum /Script/SlateCore.ETextShapingMethod
/// Size: 0x04
enum ETextShapingMethod : uint8_t
{
	ETextShapingMethod__Auto0                                                        = 0,
	ETextShapingMethod__KerningOnly1                                                 = 1,
	ETextShapingMethod__FullShaping2                                                 = 2,
	ETextShapingMethod__ETextShapingMethod_MAX3                                      = 3
};

/// Enum /Script/SlateCore.ETextTransformPolicy
/// Size: 0x04
enum ETextTransformPolicy : uint8_t
{
	ETextTransformPolicy__None0                                                      = 0,
	ETextTransformPolicy__ToLower1                                                   = 1,
	ETextTransformPolicy__ToUpper2                                                   = 2,
	ETextTransformPolicy__ETextTransformPolicy_MAX3                                  = 3
};

/// Enum /Script/SlateCore.EMenuPlacement
/// Size: 0x14
enum EMenuPlacement : uint8_t
{
	MenuPlacement_BelowAnchor0                                                       = 0,
	MenuPlacement_CenteredBelowAnchor1                                               = 1,
	MenuPlacement_BelowRightAnchor2                                                  = 2,
	MenuPlacement_ComboBox3                                                          = 3,
	MenuPlacement_ComboBoxRight4                                                     = 4,
	MenuPlacement_MenuRight5                                                         = 5,
	MenuPlacement_AboveAnchor6                                                       = 6,
	MenuPlacement_CenteredAboveAnchor7                                               = 7,
	MenuPlacement_AboveRightAnchor8                                                  = 8,
	MenuPlacement_MenuLeft9                                                          = 9,
	MenuPlacement_Center10                                                           = 10,
	MenuPlacement_RightLeftCenter11                                                  = 11,
	MenuPlacement_MatchBottomLeft12                                                  = 12,
	MenuPlacement_MAX13                                                              = 13
};

/// Enum /Script/SlateCore.EColorVisionDeficiency
/// Size: 0x05
enum EColorVisionDeficiency : uint8_t
{
	EColorVisionDeficiency__NormalVision0                                            = 0,
	EColorVisionDeficiency__Deuteranope1                                             = 1,
	EColorVisionDeficiency__Protanope2                                               = 2,
	EColorVisionDeficiency__Tritanope3                                               = 3,
	EColorVisionDeficiency__EColorVisionDeficiency_MAX4                              = 4
};

/// Enum /Script/SlateCore.EHorizontalAlignment
/// Size: 0x05
enum EHorizontalAlignment : uint8_t
{
	HAlign_Fill0                                                                     = 0,
	HAlign_Left1                                                                     = 1,
	HAlign_Center2                                                                   = 2,
	HAlign_Right3                                                                    = 3,
	HAlign_MAX4                                                                      = 4
};

/// Enum /Script/SlateCore.EOrientation
/// Size: 0x03
enum EOrientation : uint8_t
{
	Orient_Horizontal0                                                               = 0,
	Orient_Vertical1                                                                 = 1,
	Orient_MAX2                                                                      = 2
};

/// Enum /Script/SlateCore.EButtonClickMethod
/// Size: 0x05
enum EButtonClickMethod : uint8_t
{
	EButtonClickMethod__DownAndUp0                                                   = 0,
	EButtonClickMethod__MouseDown1                                                   = 1,
	EButtonClickMethod__MouseUp2                                                     = 2,
	EButtonClickMethod__PreciseClick3                                                = 3,
	EButtonClickMethod__EButtonClickMethod_MAX4                                      = 4
};

/// Enum /Script/SlateCore.EButtonTouchMethod
/// Size: 0x04
enum EButtonTouchMethod : uint8_t
{
	EButtonTouchMethod__DownAndUp0                                                   = 0,
	EButtonTouchMethod__Down1                                                        = 1,
	EButtonTouchMethod__PreciseTap2                                                  = 2,
	EButtonTouchMethod__EButtonTouchMethod_MAX3                                      = 3
};

/// Enum /Script/SlateCore.EButtonPressMethod
/// Size: 0x04
enum EButtonPressMethod : uint8_t
{
	EButtonPressMethod__DownAndUp0                                                   = 0,
	EButtonPressMethod__ButtonPress1                                                 = 1,
	EButtonPressMethod__ButtonRelease2                                               = 2,
	EButtonPressMethod__EButtonPressMethod_MAX3                                      = 3
};

/// Enum /Script/SlateCore.EUINavigationAction
/// Size: 0x05
enum EUINavigationAction : uint8_t
{
	EUINavigationAction__Accept0                                                     = 0,
	EUINavigationAction__Back1                                                       = 1,
	EUINavigationAction__Num2                                                        = 2,
	EUINavigationAction__Invalid3                                                    = 3,
	EUINavigationAction__EUINavigationAction_MAX4                                    = 4
};

/// Enum /Script/SlateCore.ENavigationSource
/// Size: 0x03
enum ENavigationSource : uint8_t
{
	ENavigationSource__FocusedWidget0                                                = 0,
	ENavigationSource__WidgetUnderCursor1                                            = 1,
	ENavigationSource__ENavigationSource_MAX2                                        = 2
};

/// Enum /Script/SlateCore.ENavigationGenesis
/// Size: 0x04
enum ENavigationGenesis : uint8_t
{
	ENavigationGenesis__Keyboard0                                                    = 0,
	ENavigationGenesis__Controller1                                                  = 1,
	ENavigationGenesis__User2                                                        = 2,
	ENavigationGenesis__ENavigationGenesis_MAX3                                      = 3
};

/// Enum /Script/SlateCore.EScrollDirection
/// Size: 0x03
enum EScrollDirection : uint8_t
{
	Scroll_Down0                                                                     = 0,
	Scroll_Up1                                                                       = 1,
	Scroll_MAX2                                                                      = 2
};

/// Enum /Script/SlateCore.ESlateDebuggingInputEvent
/// Size: 0x27
enum ESlateDebuggingInputEvent : uint8_t
{
	ESlateDebuggingInputEvent__MouseMove0                                            = 0,
	ESlateDebuggingInputEvent__MouseEnter1                                           = 1,
	ESlateDebuggingInputEvent__MouseLeave2                                           = 2,
	ESlateDebuggingInputEvent__PreviewMouseButtonDown3                               = 3,
	ESlateDebuggingInputEvent__MouseButtonDown4                                      = 4,
	ESlateDebuggingInputEvent__MouseButtonUp5                                        = 5,
	ESlateDebuggingInputEvent__MouseButtonDoubleClick6                               = 6,
	ESlateDebuggingInputEvent__MouseWheel7                                           = 7,
	ESlateDebuggingInputEvent__TouchStart8                                           = 8,
	ESlateDebuggingInputEvent__TouchEnd9                                             = 9,
	ESlateDebuggingInputEvent__TouchForceChanged10                                   = 10,
	ESlateDebuggingInputEvent__TouchFirstMove11                                      = 11,
	ESlateDebuggingInputEvent__TouchMoved12                                          = 12,
	ESlateDebuggingInputEvent__DragDetected13                                        = 13,
	ESlateDebuggingInputEvent__DragEnter14                                           = 14,
	ESlateDebuggingInputEvent__DragLeave15                                           = 15,
	ESlateDebuggingInputEvent__DragOver16                                            = 16,
	ESlateDebuggingInputEvent__DragDrop17                                            = 17,
	ESlateDebuggingInputEvent__DropMessage18                                         = 18,
	ESlateDebuggingInputEvent__PreviewKeyDown19                                      = 19,
	ESlateDebuggingInputEvent__KeyDown20                                             = 20,
	ESlateDebuggingInputEvent__KeyUp21                                               = 21,
	ESlateDebuggingInputEvent__KeyChar22                                             = 22,
	ESlateDebuggingInputEvent__AnalogInput23                                         = 23,
	ESlateDebuggingInputEvent__TouchGesture24                                        = 24,
	ESlateDebuggingInputEvent__MotionDetected25                                      = 25,
	ESlateDebuggingInputEvent__MAX26                                                 = 26
};

/// Enum /Script/SlateCore.ESlateDebuggingStateChangeEvent
/// Size: 0x03
enum ESlateDebuggingStateChangeEvent : uint8_t
{
	ESlateDebuggingStateChangeEvent__MouseCaptureGained0                             = 0,
	ESlateDebuggingStateChangeEvent__MouseCaptureLost1                               = 1,
	ESlateDebuggingStateChangeEvent__ESlateDebuggingStateChangeEvent_MAX2            = 2
};

/// Enum /Script/SlateCore.ESlateDebuggingNavigationMethod
/// Size: 0x07
enum ESlateDebuggingNavigationMethod : uint8_t
{
	ESlateDebuggingNavigationMethod__Unknown0                                        = 0,
	ESlateDebuggingNavigationMethod__Explicit1                                       = 1,
	ESlateDebuggingNavigationMethod__CustomDelegateBound2                            = 2,
	ESlateDebuggingNavigationMethod__CustomDelegateUnbound3                          = 3,
	ESlateDebuggingNavigationMethod__NextOrPrevious4                                 = 4,
	ESlateDebuggingNavigationMethod__HitTestGrid5                                    = 5,
	ESlateDebuggingNavigationMethod__ESlateDebuggingNavigationMethod_MAX6            = 6
};

/// Enum /Script/SlateCore.ESlateDebuggingFocusEvent
/// Size: 0x04
enum ESlateDebuggingFocusEvent : uint8_t
{
	ESlateDebuggingFocusEvent__FocusChanging0                                        = 0,
	ESlateDebuggingFocusEvent__FocusLost1                                            = 1,
	ESlateDebuggingFocusEvent__FocusReceived2                                        = 2,
	ESlateDebuggingFocusEvent__MAX3                                                  = 3
};

/// Enum /Script/SlateCore.EFontHinting
/// Size: 0x06
enum EFontHinting : uint8_t
{
	EFontHinting__Default0                                                           = 0,
	EFontHinting__Auto1                                                              = 1,
	EFontHinting__AutoLight2                                                         = 2,
	EFontHinting__Monochrome3                                                        = 3,
	EFontHinting__None4                                                              = 4,
	EFontHinting__EFontHinting_MAX5                                                  = 5
};

/// Enum /Script/SlateCore.EFontLoadingPolicy
/// Size: 0x04
enum EFontLoadingPolicy : uint8_t
{
	EFontLoadingPolicy__LazyLoad0                                                    = 0,
	EFontLoadingPolicy__Stream1                                                      = 1,
	EFontLoadingPolicy__Inline2                                                      = 2,
	EFontLoadingPolicy__EFontLoadingPolicy_MAX3                                      = 3
};

/// Enum /Script/SlateCore.EFontLayoutMethod
/// Size: 0x03
enum EFontLayoutMethod : uint8_t
{
	EFontLayoutMethod__Metrics0                                                      = 0,
	EFontLayoutMethod__BoundingBox1                                                  = 1,
	EFontLayoutMethod__EFontLayoutMethod_MAX2                                        = 2
};

/// Enum /Script/SlateCore.EFocusCause
/// Size: 0x07
enum EFocusCause : uint8_t
{
	EFocusCause__Mouse0                                                              = 0,
	EFocusCause__Navigation1                                                         = 1,
	EFocusCause__SetDirectly2                                                        = 2,
	EFocusCause__Cleared3                                                            = 3,
	EFocusCause__OtherWidgetLostFocus4                                               = 4,
	EFocusCause__WindowActivate5                                                     = 5,
	EFocusCause__EFocusCause_MAX6                                                    = 6
};

/// Enum /Script/SlateCore.EConsumeMouseWheel
/// Size: 0x04
enum EConsumeMouseWheel : uint8_t
{
	EConsumeMouseWheel__WhenScrollingPossible0                                       = 0,
	EConsumeMouseWheel__Always1                                                      = 1,
	EConsumeMouseWheel__Never2                                                       = 2,
	EConsumeMouseWheel__EConsumeMouseWheel_MAX3                                      = 3
};

/// Enum /Script/SlateCore.ESlateParentWindowSearchMethod
/// Size: 0x03
enum ESlateParentWindowSearchMethod : uint8_t
{
	ESlateParentWindowSearchMethod__ActiveWindow0                                    = 0,
	ESlateParentWindowSearchMethod__MainWindow1                                      = 1,
	ESlateParentWindowSearchMethod__ESlateParentWindowSearchMethod_MAX2              = 2
};

/// Enum /Script/SlateCore.ESlateCheckBoxType
/// Size: 0x03
enum ESlateCheckBoxType : uint8_t
{
	ESlateCheckBoxType__CheckBox0                                                    = 0,
	ESlateCheckBoxType__ToggleButton1                                                = 1,
	ESlateCheckBoxType__ESlateCheckBoxType_MAX2                                      = 2
};

/// Enum /Script/SlateCore.EStyleColor
/// Size: 0x62
enum EStyleColor : uint8_t
{
	EStyleColor__Black0                                                              = 0,
	EStyleColor__Background1                                                         = 1,
	EStyleColor__Title2                                                              = 2,
	EStyleColor__WindowBorder3                                                       = 3,
	EStyleColor__Foldout4                                                            = 4,
	EStyleColor__Input5                                                              = 5,
	EStyleColor__InputOutline6                                                       = 6,
	EStyleColor__Recessed7                                                           = 7,
	EStyleColor__Panel8                                                              = 8,
	EStyleColor__Header9                                                             = 9,
	EStyleColor__Dropdown10                                                          = 10,
	EStyleColor__DropdownOutline11                                                   = 11,
	EStyleColor__Hover12                                                             = 12,
	EStyleColor__Hover213                                                            = 13,
	EStyleColor__White14                                                             = 14,
	EStyleColor__White2515                                                           = 15,
	EStyleColor__Highlight16                                                         = 16,
	EStyleColor__Primary17                                                           = 17,
	EStyleColor__PrimaryHover18                                                      = 18,
	EStyleColor__PrimaryPress19                                                      = 19,
	EStyleColor__Secondary20                                                         = 20,
	EStyleColor__Foreground21                                                        = 21,
	EStyleColor__ForegroundHover22                                                   = 22,
	EStyleColor__ForegroundInverted23                                                = 23,
	EStyleColor__ForegroundHeader24                                                  = 24,
	EStyleColor__Select25                                                            = 25,
	EStyleColor__SelectInactive26                                                    = 26,
	EStyleColor__SelectParent27                                                      = 27,
	EStyleColor__SelectHover28                                                       = 28,
	EStyleColor__Notifications29                                                     = 29,
	EStyleColor__AccentBlue30                                                        = 30,
	EStyleColor__AccentPurple31                                                      = 31,
	EStyleColor__AccentPink32                                                        = 32,
	EStyleColor__AccentRed33                                                         = 33,
	EStyleColor__AccentOrange34                                                      = 34,
	EStyleColor__AccentYellow35                                                      = 35,
	EStyleColor__AccentGreen36                                                       = 36,
	EStyleColor__AccentBrown37                                                       = 37,
	EStyleColor__AccentBlack38                                                       = 38,
	EStyleColor__AccentGray39                                                        = 39,
	EStyleColor__AccentWhite40                                                       = 40,
	EStyleColor__AccentFolder41                                                      = 41,
	EStyleColor__Warning42                                                           = 42,
	EStyleColor__Error43                                                             = 43,
	EStyleColor__Success44                                                           = 44,
	EStyleColor__User145                                                             = 45,
	EStyleColor__User246                                                             = 46,
	EStyleColor__User347                                                             = 47,
	EStyleColor__User448                                                             = 48,
	EStyleColor__User549                                                             = 49,
	EStyleColor__User650                                                             = 50,
	EStyleColor__User751                                                             = 51,
	EStyleColor__User852                                                             = 52,
	EStyleColor__User953                                                             = 53,
	EStyleColor__User1054                                                            = 54,
	EStyleColor__User1155                                                            = 55,
	EStyleColor__User1256                                                            = 56,
	EStyleColor__User1357                                                            = 57,
	EStyleColor__User1458                                                            = 58,
	EStyleColor__User1559                                                            = 59,
	EStyleColor__User1660                                                            = 60,
	EStyleColor__MAX61                                                               = 61
};

