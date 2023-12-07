
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package AudioWidgets.

/// Struct /Script/AudioWidgets.MeterChannelInfo
/// Size: 0x000C (0x000000 - 0x00000C)
struct FMeterChannelInfo
{ 
	float                                              MeterValue;                                                 // 0x0000   (0x0004)  
	float                                              PeakValue;                                                  // 0x0004   (0x0004)  
	float                                              ClippingValue;                                              // 0x0008   (0x0004)  
};

/// Struct /Script/AudioWidgets.AudioMeterStyle
/// Size: 0x04C8 (0x000008 - 0x0004D0)
struct FAudioMeterStyle : FSlateWidgetStyle
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FSlateBrush                                        MeterValueImage;                                            // 0x0010   (0x00D0)  
	FSlateBrush                                        BackgroundImage;                                            // 0x00E0   (0x00D0)  
	FSlateBrush                                        MeterBackgroundImage;                                       // 0x01B0   (0x00D0)  
	FSlateBrush                                        MeterValueBackgroundImage;                                  // 0x0280   (0x00D0)  
	FSlateBrush                                        MeterPeakImage;                                             // 0x0350   (0x00D0)  
	FVector2D                                          MeterSize;                                                  // 0x0420   (0x0010)  
	FVector2D                                          MeterPadding;                                               // 0x0430   (0x0010)  
	float                                              MeterValuePadding;                                          // 0x0440   (0x0004)  
	float                                              PeakValueWidth;                                             // 0x0444   (0x0004)  
	FVector2D                                          ValueRangeDb;                                               // 0x0448   (0x0010)  
	bool                                               bShowScale;                                                 // 0x0458   (0x0001)  
	bool                                               bScaleSide;                                                 // 0x0459   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x045A   (0x0002)  MISSED
	float                                              ScaleHashOffset;                                            // 0x045C   (0x0004)  
	float                                              ScaleHashWidth;                                             // 0x0460   (0x0004)  
	float                                              ScaleHashHeight;                                            // 0x0464   (0x0004)  
	int32_t                                            DecibelsPerHash;                                            // 0x0468   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x046C   (0x0004)  MISSED
	FSlateFontInfo                                     Font;                                                       // 0x0470   (0x0058)  
	unsigned char                                      UnknownData03_6[0x8];                                       // 0x04C8   (0x0008)  MISSED
};

/// Struct /Script/AudioWidgets.AudioTextBoxStyle
/// Size: 0x00F8 (0x000008 - 0x000100)
struct FAudioTextBoxStyle : FSlateWidgetStyle
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FSlateBrush                                        BackgroundImage;                                            // 0x0010   (0x00D0)  
	FSlateColor                                        BackgroundColor;                                            // 0x00E0   (0x0014)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x00F4   (0x000C)  MISSED
};

/// Struct /Script/AudioWidgets.AudioSliderStyle
/// Size: 0x0748 (0x000008 - 0x000750)
struct FAudioSliderStyle : FSlateWidgetStyle
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FSliderStyle                                       SliderStyle;                                                // 0x0010   (0x0500)  
	FAudioTextBoxStyle                                 TextBoxStyle;                                               // 0x0510   (0x0100)  
	FSlateBrush                                        WidgetBackgroundImage;                                      // 0x0610   (0x00D0)  
	FSlateColor                                        SliderBackgroundColor;                                      // 0x06E0   (0x0014)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x06F4   (0x0004)  MISSED
	FVector2D                                          SliderBackgroundSize;                                       // 0x06F8   (0x0010)  
	float                                              LabelPadding;                                               // 0x0708   (0x0004)  
	FSlateColor                                        SliderBarColor;                                             // 0x070C   (0x0014)  
	FSlateColor                                        SliderThumbColor;                                           // 0x0720   (0x0014)  
	FSlateColor                                        WidgetBackgroundColor;                                      // 0x0734   (0x0014)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0748   (0x0008)  MISSED
};

/// Struct /Script/AudioWidgets.AudioRadialSliderStyle
/// Size: 0x0158 (0x000008 - 0x000160)
struct FAudioRadialSliderStyle : FSlateWidgetStyle
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FAudioTextBoxStyle                                 TextBoxStyle;                                               // 0x0010   (0x0100)  
	FSlateColor                                        CenterBackgroundColor;                                      // 0x0110   (0x0014)  
	FSlateColor                                        SliderBarColor;                                             // 0x0124   (0x0014)  
	FSlateColor                                        SliderProgressColor;                                        // 0x0138   (0x0014)  
	float                                              LabelPadding;                                               // 0x014C   (0x0004)  
	float                                              DefaultSliderRadius;                                        // 0x0150   (0x0004)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x0154   (0x000C)  MISSED
};

/// Class /Script/AudioWidgets.AudioMeter
/// Size: 0x0580 (0x000150 - 0x0006D0)
class UAudioMeter : public UWidget : UWidget
{ 
public:
	TArray<FMeterChannelInfo>                          MeterChannelInfo;                                           // 0x0150   (0x0010)  
	FDelegateProperty                                  MeterChannelInfoDelegate;                                   // 0x0160   (0x0010)  
	FAudioMeterStyle                                   WidgetStyle;                                                // 0x0170   (0x04D0)  
	TEnumAsByte<EOrientation>                          Orientation;                                                // 0x0640   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0641   (0x0003)  MISSED
	FLinearColor                                       BackgroundColor;                                            // 0x0644   (0x0010)  
	FLinearColor                                       MeterBackgroundColor;                                       // 0x0654   (0x0010)  
	FLinearColor                                       MeterValueColor;                                            // 0x0664   (0x0010)  
	FLinearColor                                       MeterPeakColor;                                             // 0x0674   (0x0010)  
	FLinearColor                                       MeterClippingColor;                                         // 0x0684   (0x0010)  
	FLinearColor                                       MeterScaleColor;                                            // 0x0694   (0x0010)  
	FLinearColor                                       MeterScaleLabelColor;                                       // 0x06A4   (0x0010)  
	unsigned char                                      UnknownData01_6[0x1C];                                      // 0x06B4   (0x001C)  MISSED


	/// Functions
	// Function /Script/AudioWidgets.AudioMeter.SetMeterValueColor
	void SetMeterValueColor(FLinearColor InValue);                                                                           // [0x2049660] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioMeter.SetMeterScaleLabelColor
	void SetMeterScaleLabelColor(FLinearColor InValue);                                                                      // [0x20495c0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioMeter.SetMeterScaleColor
	void SetMeterScaleColor(FLinearColor InValue);                                                                           // [0x2049520] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioMeter.SetMeterPeakColor
	void SetMeterPeakColor(FLinearColor InValue);                                                                            // [0x2049480] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioMeter.SetMeterClippingColor
	void SetMeterClippingColor(FLinearColor InValue);                                                                        // [0x20493e0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioMeter.SetMeterChannelInfo
	void SetMeterChannelInfo(TArray<FMeterChannelInfo>& InMeterChannelInfo);                                                 // [0x2049330] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioMeter.SetMeterBackgroundColor
	void SetMeterBackgroundColor(FLinearColor InValue);                                                                      // [0x2049290] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioMeter.SetBackgroundColor
	void SetBackgroundColor(FLinearColor InValue);                                                                           // [0x20490b0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioMeter.GetMeterChannelInfo__DelegateSignature
	TArray<FMeterChannelInfo> GetMeterChannelInfo__DelegateSignature();                                                      // [0x2407bf0] Public|Delegate      
	// Function /Script/AudioWidgets.AudioMeter.GetMeterChannelInfo
	TArray<FMeterChannelInfo> GetMeterChannelInfo();                                                                         // [0x2048dd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AudioWidgets.AudioRadialSlider
/// Size: 0x0220 (0x000150 - 0x000370)
class UAudioRadialSlider : public UWidget : UWidget
{ 
public:
	float                                              Value;                                                      // 0x0150   (0x0004)  
	FDelegateProperty                                  ValueDelegate;                                              // 0x0154   (0x0010)  
	TEnumAsByte<EAudioRadialSliderLayout>              WidgetLayout;                                               // 0x0164   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0165   (0x0003)  MISSED
	FLinearColor                                       CenterBackgroundColor;                                      // 0x0168   (0x0010)  
	FLinearColor                                       SliderProgressColor;                                        // 0x0178   (0x0010)  
	FLinearColor                                       SliderBarColor;                                             // 0x0188   (0x0010)  
	FVector2D                                          HandStartEndRatio;                                          // 0x0198   (0x0010)  
	FText                                              UnitsText;                                                  // 0x01A8   (0x0018)  
	FLinearColor                                       TextLabelBackgroundColor;                                   // 0x01C0   (0x0010)  
	bool                                               ShowLabelOnlyOnHover;                                       // 0x01D0   (0x0001)  
	bool                                               ShowUnitsText;                                              // 0x01D1   (0x0001)  
	bool                                               IsUnitsTextReadOnly;                                        // 0x01D2   (0x0001)  
	bool                                               IsValueTextReadOnly;                                        // 0x01D3   (0x0001)  
	float                                              SliderThickness;                                            // 0x01D4   (0x0004)  
	FVector2D                                          OutputRange;                                                // 0x01D8   (0x0010)  
	FMulticastInlineDelegate                           OnValueChanged;                                             // 0x01E8   (0x0010)  
	unsigned char                                      UnknownData01_6[0x178];                                     // 0x01F8   (0x0178)  MISSED


	/// Functions
	// Function /Script/AudioWidgets.AudioRadialSlider.SetWidgetLayout
	void SetWidgetLayout(TEnumAsByte<EAudioRadialSliderLayout> InLayout);                                                    // [0x204a4d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetValueTextReadOnly
	void SetValueTextReadOnly(bool bIsReadOnly);                                                                             // [0x204a2b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetUnitsTextReadOnly
	void SetUnitsTextReadOnly(bool bIsReadOnly);                                                                             // [0x204a170] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetUnitsText
	void SetUnitsText(FText Units);                                                                                          // [0x2049fb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetTextLabelBackgroundColor
	void SetTextLabelBackgroundColor(FSlateColor InColor);                                                                   // [0x2049df0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetSliderThickness
	void SetSliderThickness(float InThickness);                                                                              // [0x2049ca0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetSliderProgressColor
	void SetSliderProgressColor(FLinearColor InValue);                                                                       // [0x2049c00] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetSliderBarColor
	void SetSliderBarColor(FLinearColor InValue);                                                                            // [0x2049ac0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetShowUnitsText
	void SetShowUnitsText(bool bShowUnitsText);                                                                              // [0x20498e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetShowLabelOnlyOnHover
	void SetShowLabelOnlyOnHover(bool bShowLabelOnlyOnHover);                                                                // [0x20497a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetOutputRange
	void SetOutputRange(FVector2D InOutputRange);                                                                            // [0x2049700] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetHandStartEndRatio
	void SetHandStartEndRatio(FVector2D InHandStartEndRatio);                                                                // [0x20491f0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetCenterBackgroundColor
	void SetCenterBackgroundColor(FLinearColor InValue);                                                                     // [0x2049150] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.GetSliderValue
	float GetSliderValue(float OutputValue);                                                                                 // [0x2049010] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.GetOutputValue
	float GetOutputValue(float InSliderValue);                                                                               // [0x2048ed0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AudioWidgets.AudioVolumeRadialSlider
/// Size: 0x0000 (0x000370 - 0x000370)
class UAudioVolumeRadialSlider : public UAudioRadialSlider : UAudioRadialSlider
{ 
public:
};

/// Class /Script/AudioWidgets.AudioFrequencyRadialSlider
/// Size: 0x0000 (0x000370 - 0x000370)
class UAudioFrequencyRadialSlider : public UAudioRadialSlider : UAudioRadialSlider
{ 
public:
};

/// Class /Script/AudioWidgets.AudioSliderBase
/// Size: 0x0850 (0x000150 - 0x0009A0)
class UAudioSliderBase : public UWidget : UWidget
{ 
public:
	float                                              Value;                                                      // 0x0150   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0154   (0x0004)  MISSED
	FText                                              UnitsText;                                                  // 0x0158   (0x0018)  
	FLinearColor                                       TextLabelBackgroundColor;                                   // 0x0170   (0x0010)  
	FDelegateProperty                                  TextLabelBackgroundColorDelegate;                           // 0x0180   (0x0010)  
	bool                                               ShowLabelOnlyOnHover;                                       // 0x0190   (0x0001)  
	bool                                               ShowUnitsText;                                              // 0x0191   (0x0001)  
	bool                                               IsUnitsTextReadOnly;                                        // 0x0192   (0x0001)  
	bool                                               IsValueTextReadOnly;                                        // 0x0193   (0x0001)  
	FDelegateProperty                                  ValueDelegate;                                              // 0x0194   (0x0010)  
	FLinearColor                                       SliderBackgroundColor;                                      // 0x01A4   (0x0010)  
	FDelegateProperty                                  SliderBackgroundColorDelegate;                              // 0x01B4   (0x0010)  
	FLinearColor                                       SliderBarColor;                                             // 0x01C4   (0x0010)  
	FDelegateProperty                                  SliderBarColorDelegate;                                     // 0x01D4   (0x0010)  
	FLinearColor                                       SliderThumbColor;                                           // 0x01E4   (0x0010)  
	FDelegateProperty                                  SliderThumbColorDelegate;                                   // 0x01F4   (0x0010)  
	FLinearColor                                       WidgetBackgroundColor;                                      // 0x0204   (0x0010)  
	FDelegateProperty                                  WidgetBackgroundColorDelegate;                              // 0x0214   (0x0010)  
	TEnumAsByte<EOrientation>                          Orientation;                                                // 0x0224   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0225   (0x0003)  MISSED
	FMulticastInlineDelegate                           OnValueChanged;                                             // 0x0228   (0x0010)  
	unsigned char                                      UnknownData02_6[0x768];                                     // 0x0238   (0x0768)  MISSED


	/// Functions
	// Function /Script/AudioWidgets.AudioSliderBase.SetWidgetBackgroundColor
	void SetWidgetBackgroundColor(FLinearColor InValue);                                                                     // [0x204a430] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.SetValueTextReadOnly
	void SetValueTextReadOnly(bool bIsReadOnly);                                                                             // [0x204a370] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.SetUnitsTextReadOnly
	void SetUnitsTextReadOnly(bool bIsReadOnly);                                                                             // [0x204a210] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.SetUnitsText
	void SetUnitsText(FText Units);                                                                                          // [0x204a090] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.SetTextLabelBackgroundColor
	void SetTextLabelBackgroundColor(FSlateColor InColor);                                                                   // [0x2049ed0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.SetSliderThumbColor
	void SetSliderThumbColor(FLinearColor InValue);                                                                          // [0x2049d50] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.SetSliderBarColor
	void SetSliderBarColor(FLinearColor InValue);                                                                            // [0x2049b60] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.SetSliderBackgroundColor
	void SetSliderBackgroundColor(FLinearColor InValue);                                                                     // [0x2049a20] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.SetShowUnitsText
	void SetShowUnitsText(bool bShowUnitsText);                                                                              // [0x2049980] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.SetShowLabelOnlyOnHover
	void SetShowLabelOnlyOnHover(bool bShowLabelOnlyOnHover);                                                                // [0x2049840] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.GetSliderValue
	float GetSliderValue(float OutputValue);                                                                                 // [0x2048d30] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.GetOutputValue
	float GetOutputValue(float InSliderValue);                                                                               // [0x2048f70] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.GetLinValue
	float GetLinValue(float OutputValue);                                                                                    // [0x2048d30] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AudioWidgets.AudioSlider
/// Size: 0x0010 (0x0009A0 - 0x0009B0)
class UAudioSlider : public UAudioSliderBase : UAudioSliderBase
{ 
public:
	TWeakObjectPtr<UCurveFloat*>                       LinToOutputCurve;                                           // 0x09A0   (0x0008)  
	TWeakObjectPtr<UCurveFloat*>                       OutputToLinCurve;                                           // 0x09A8   (0x0008)  
};

/// Class /Script/AudioWidgets.AudioVolumeSlider
/// Size: 0x0000 (0x0009B0 - 0x0009B0)
class UAudioVolumeSlider : public UAudioSlider : UAudioSlider
{ 
public:
};

/// Class /Script/AudioWidgets.AudioFrequencySlider
/// Size: 0x0010 (0x0009A0 - 0x0009B0)
class UAudioFrequencySlider : public UAudioSliderBase : UAudioSliderBase
{ 
public:
	FVector2D                                          OutputRange;                                                // 0x09A0   (0x0010)  
};

/// Enum /Script/AudioWidgets.EAudioRadialSliderLayout
/// Size: 0x04
enum EAudioRadialSliderLayout : uint8_t
{
	Layout_LabelTop0                                                                 = 0,
	Layout_LabelCenter1                                                              = 1,
	Layout_LabelBottom2                                                              = 2,
	Layout_MAX3                                                                      = 3
};

