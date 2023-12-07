
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package Slate.

/// Struct /Script/Slate.VirtualKeyboardOptions
/// Size: 0x0001 (0x000000 - 0x000001)
struct FVirtualKeyboardOptions
{ 
	bool                                               bEnableAutocorrect;                                         // 0x0000   (0x0001)  
};

/// Struct /Script/Slate.InputChord
/// Size: 0x0020 (0x000000 - 0x000020)
struct FInputChord
{ 
	FKey                                               Key;                                                        // 0x0000   (0x0018)  
	bool                                               bShift : 1;                                                 // 0x0018:0 (0x0001)  
	bool                                               bCtrl : 1;                                                  // 0x0018:1 (0x0001)  
	bool                                               bAlt : 1;                                                   // 0x0018:2 (0x0001)  
	bool                                               bCmd : 1;                                                   // 0x0018:3 (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0019   (0x0007)  MISSED
};

/// Struct /Script/Slate.Anchors
/// Size: 0x0020 (0x000000 - 0x000020)
struct FAnchors
{ 
	FVector2D                                          Minimum;                                                    // 0x0000   (0x0010)  
	FVector2D                                          Maximum;                                                    // 0x0010   (0x0010)  
};

/// Struct /Script/Slate.CustomizedToolMenuEntry
/// Size: 0x0004 (0x000000 - 0x000004)
struct FCustomizedToolMenuEntry
{ 
	ECustomizedToolMenuVisibility                      Visibility;                                                 // 0x0000   (0x0004)  
};

/// Struct /Script/Slate.CustomizedToolMenuSection
/// Size: 0x0004 (0x000000 - 0x000004)
struct FCustomizedToolMenuSection
{ 
	ECustomizedToolMenuVisibility                      Visibility;                                                 // 0x0000   (0x0004)  
};

/// Struct /Script/Slate.CustomizedToolMenuNameArray
/// Size: 0x0010 (0x000000 - 0x000010)
struct FCustomizedToolMenuNameArray
{ 
	TArray<FName>                                      Names;                                                      // 0x0000   (0x0010)  
};

/// Struct /Script/Slate.CustomizedToolMenu
/// Size: 0x01F0 (0x000000 - 0x0001F0)
struct FCustomizedToolMenu
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
	TMap<FName, FCustomizedToolMenuEntry>              Entries;                                                    // 0x0008   (0x0050)  
	TMap<FName, FCustomizedToolMenuSection>            Sections;                                                   // 0x0058   (0x0050)  
	TMap<FName, FCustomizedToolMenuNameArray>          EntryOrder;                                                 // 0x00A8   (0x0050)  
	TArray<FName>                                      SectionOrder;                                               // 0x00F8   (0x0010)  
	unsigned char                                      UnknownData00_6[0xE8];                                      // 0x0108   (0x00E8)  MISSED
};

/// Class /Script/Slate.ToolMenuBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UToolMenuBase : public UObject : UObject
{ 
public:
};

/// Class /Script/Slate.SlateSettings
/// Size: 0x0008 (0x000028 - 0x000030)
class USlateSettings : public UObject : UObject
{ 
public:
	bool                                               bExplicitCanvasChildZOrder;                                 // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0029   (0x0007)  MISSED
};

/// Class /Script/Slate.ButtonWidgetStyle
/// Size: 0x03F0 (0x000030 - 0x000420)
class UButtonWidgetStyle : public USlateWidgetStyleContainerBase : USlateWidgetStyleContainerBase
{ 
public:
	FButtonStyle                                       ButtonStyle;                                                // 0x0030   (0x03F0)  
};

/// Class /Script/Slate.CheckBoxWidgetStyle
/// Size: 0x0AD0 (0x000030 - 0x000B00)
class UCheckBoxWidgetStyle : public USlateWidgetStyleContainerBase : USlateWidgetStyleContainerBase
{ 
public:
	FCheckBoxStyle                                     CheckBoxStyle;                                              // 0x0030   (0x0AD0)  
};

/// Class /Script/Slate.ComboBoxWidgetStyle
/// Size: 0x0660 (0x000030 - 0x000690)
class UComboBoxWidgetStyle : public USlateWidgetStyleContainerBase : USlateWidgetStyleContainerBase
{ 
public:
	FComboBoxStyle                                     ComboBoxStyle;                                              // 0x0030   (0x0660)  
};

/// Class /Script/Slate.ComboButtonWidgetStyle
/// Size: 0x0600 (0x000030 - 0x000630)
class UComboButtonWidgetStyle : public USlateWidgetStyleContainerBase : USlateWidgetStyleContainerBase
{ 
public:
	FComboButtonStyle                                  ComboButtonStyle;                                           // 0x0030   (0x0600)  
};

/// Class /Script/Slate.EditableTextBoxWidgetStyle
/// Size: 0x0E80 (0x000030 - 0x000EB0)
class UEditableTextBoxWidgetStyle : public USlateWidgetStyleContainerBase : USlateWidgetStyleContainerBase
{ 
public:
	FEditableTextBoxStyle                              EditableTextBoxStyle;                                       // 0x0030   (0x0E80)  
};

/// Class /Script/Slate.EditableTextWidgetStyle
/// Size: 0x02F0 (0x000030 - 0x000320)
class UEditableTextWidgetStyle : public USlateWidgetStyleContainerBase : USlateWidgetStyleContainerBase
{ 
public:
	FEditableTextStyle                                 EditableTextStyle;                                          // 0x0030   (0x02F0)  
};

/// Class /Script/Slate.ProgressWidgetStyle
/// Size: 0x0290 (0x000030 - 0x0002C0)
class UProgressWidgetStyle : public USlateWidgetStyleContainerBase : USlateWidgetStyleContainerBase
{ 
public:
	FProgressBarStyle                                  ProgressBarStyle;                                           // 0x0030   (0x0290)  
};

/// Class /Script/Slate.ScrollBarWidgetStyle
/// Size: 0x0770 (0x000030 - 0x0007A0)
class UScrollBarWidgetStyle : public USlateWidgetStyleContainerBase : USlateWidgetStyleContainerBase
{ 
public:
	FScrollBarStyle                                    ScrollBarStyle;                                             // 0x0030   (0x0770)  
};

/// Class /Script/Slate.ScrollBoxWidgetStyle
/// Size: 0x0370 (0x000030 - 0x0003A0)
class UScrollBoxWidgetStyle : public USlateWidgetStyleContainerBase : USlateWidgetStyleContainerBase
{ 
public:
	FScrollBoxStyle                                    ScrollBoxStyle;                                             // 0x0030   (0x0370)  
};

/// Class /Script/Slate.SpinBoxWidgetStyle
/// Size: 0x0600 (0x000030 - 0x000630)
class USpinBoxWidgetStyle : public USlateWidgetStyleContainerBase : USlateWidgetStyleContainerBase
{ 
public:
	FSpinBoxStyle                                      SpinBoxStyle;                                               // 0x0030   (0x0600)  
};

/// Class /Script/Slate.TextBlockWidgetStyle
/// Size: 0x0340 (0x000030 - 0x000370)
class UTextBlockWidgetStyle : public USlateWidgetStyleContainerBase : USlateWidgetStyleContainerBase
{ 
public:
	FTextBlockStyle                                    TextBlockStyle;                                             // 0x0030   (0x0340)  
};

/// Enum /Script/Slate.ETextJustify
/// Size: 0x04
enum ETextJustify : uint8_t
{
	ETextJustify__Left0                                                              = 0,
	ETextJustify__Center1                                                            = 1,
	ETextJustify__Right2                                                             = 2,
	ETextJustify__ETextJustify_MAX3                                                  = 3
};

/// Enum /Script/Slate.ETextFlowDirection
/// Size: 0x05
enum ETextFlowDirection : uint8_t
{
	ETextFlowDirection__Auto0                                                        = 0,
	ETextFlowDirection__LeftToRight1                                                 = 1,
	ETextFlowDirection__RightToLeft2                                                 = 2,
	ETextFlowDirection__Culture3                                                     = 3,
	ETextFlowDirection__ETextFlowDirection_MAX4                                      = 4
};

/// Enum /Script/Slate.EVirtualKeyboardDismissAction
/// Size: 0x04
enum EVirtualKeyboardDismissAction : uint8_t
{
	EVirtualKeyboardDismissAction__TextChangeOnDismiss0                              = 0,
	EVirtualKeyboardDismissAction__TextCommitOnAccept1                               = 1,
	EVirtualKeyboardDismissAction__TextCommitOnDismiss2                              = 2,
	EVirtualKeyboardDismissAction__EVirtualKeyboardDismissAction_MAX3                = 3
};

/// Enum /Script/Slate.EVirtualKeyboardTrigger
/// Size: 0x03
enum EVirtualKeyboardTrigger : uint8_t
{
	EVirtualKeyboardTrigger__OnFocusByPointer0                                       = 0,
	EVirtualKeyboardTrigger__OnAllFocusEvents1                                       = 1,
	EVirtualKeyboardTrigger__EVirtualKeyboardTrigger_MAX2                            = 2
};

/// Enum /Script/Slate.ETextWrappingPolicy
/// Size: 0x03
enum ETextWrappingPolicy : uint8_t
{
	ETextWrappingPolicy__DefaultWrapping0                                            = 0,
	ETextWrappingPolicy__AllowPerCharacterWrapping1                                  = 1,
	ETextWrappingPolicy__ETextWrappingPolicy_MAX2                                    = 2
};

/// Enum /Script/Slate.ESelectionMode
/// Size: 0x05
enum ESelectionMode : uint8_t
{
	ESelectionMode__None0                                                            = 0,
	ESelectionMode__Single1                                                          = 1,
	ESelectionMode__SingleToggle2                                                    = 2,
	ESelectionMode__Multi3                                                           = 3,
	ESelectionMode__ESelectionMode_MAX4                                              = 4
};

/// Enum /Script/Slate.ETableViewMode
/// Size: 0x04
enum ETableViewMode : uint8_t
{
	ETableViewMode__List0                                                            = 0,
	ETableViewMode__Tile1                                                            = 1,
	ETableViewMode__Tree2                                                            = 2,
	ETableViewMode__ETableViewMode_MAX3                                              = 3
};

/// Enum /Script/Slate.EMultiBoxType
/// Size: 0x08
enum EMultiBoxType : uint8_t
{
	EMultiBoxType__MenuBar0                                                          = 0,
	EMultiBoxType__ToolBar1                                                          = 1,
	EMultiBoxType__VerticalToolBar2                                                  = 2,
	EMultiBoxType__SlimHorizontalToolBar3                                            = 3,
	EMultiBoxType__UniformToolBar4                                                   = 4,
	EMultiBoxType__Menu5                                                             = 5,
	EMultiBoxType__ButtonRow6                                                        = 6,
	EMultiBoxType__EMultiBoxType_MAX7                                                = 7
};

/// Enum /Script/Slate.EMultiBlockType
/// Size: 0x10
enum EMultiBlockType : uint8_t
{
	EMultiBlockType__None0                                                           = 0,
	EMultiBlockType__ButtonRow1                                                      = 1,
	EMultiBlockType__EditableText2                                                   = 2,
	EMultiBlockType__Heading3                                                        = 3,
	EMultiBlockType__MenuEntry4                                                      = 4,
	EMultiBlockType__Separator5                                                      = 5,
	EMultiBlockType__ToolBarButton6                                                  = 6,
	EMultiBlockType__ToolBarComboButton7                                             = 7,
	EMultiBlockType__Widget8                                                         = 8,
	EMultiBlockType__EMultiBlockType_MAX9                                            = 9
};

/// Enum /Script/Slate.EDescendantScrollDestination
/// Size: 0x05
enum EDescendantScrollDestination : uint8_t
{
	EDescendantScrollDestination__IntoView0                                          = 0,
	EDescendantScrollDestination__TopOrLeft1                                         = 1,
	EDescendantScrollDestination__Center2                                            = 2,
	EDescendantScrollDestination__BottomOrRight3                                     = 3,
	EDescendantScrollDestination__EDescendantScrollDestination_MAX4                  = 4
};

/// Enum /Script/Slate.EScrollWhenFocusChanges
/// Size: 0x04
enum EScrollWhenFocusChanges : uint8_t
{
	EScrollWhenFocusChanges__NoScroll0                                               = 0,
	EScrollWhenFocusChanges__InstantScroll1                                          = 1,
	EScrollWhenFocusChanges__AnimatedScroll2                                         = 2,
	EScrollWhenFocusChanges__EScrollWhenFocusChanges_MAX3                            = 3
};

/// Enum /Script/Slate.ECustomizedToolMenuVisibility
/// Size: 0x04
enum ECustomizedToolMenuVisibility : uint8_t
{
	ECustomizedToolMenuVisibility__None0                                             = 0,
	ECustomizedToolMenuVisibility__Visible1                                          = 1,
	ECustomizedToolMenuVisibility__Hidden2                                           = 2,
	ECustomizedToolMenuVisibility__ECustomizedToolMenuVisibility_MAX3                = 3
};

/// Enum /Script/Slate.EUserInterfaceActionType
/// Size: 0x07
enum EUserInterfaceActionType : uint8_t
{
	EUserInterfaceActionType__None0                                                  = 0,
	EUserInterfaceActionType__Button1                                                = 1,
	EUserInterfaceActionType__ToggleButton2                                          = 2,
	EUserInterfaceActionType__RadioButton3                                           = 3,
	EUserInterfaceActionType__Check4                                                 = 4,
	EUserInterfaceActionType__CollapsedButton5                                       = 5,
	EUserInterfaceActionType__EUserInterfaceActionType_MAX6                          = 6
};

/// Enum /Script/Slate.EMultipleKeyBindingIndex
/// Size: 0x04
enum EMultipleKeyBindingIndex : uint8_t
{
	EMultipleKeyBindingIndex__Primary0                                               = 0,
	EMultipleKeyBindingIndex__Secondary1                                             = 1,
	EMultipleKeyBindingIndex__NumChords2                                             = 2,
	EMultipleKeyBindingIndex__EMultipleKeyBindingIndex_MAX3                          = 3
};

/// Enum /Script/Slate.EStretchDirection
/// Size: 0x04
enum EStretchDirection : uint8_t
{
	EStretchDirection__Both0                                                         = 0,
	EStretchDirection__DownOnly1                                                     = 1,
	EStretchDirection__UpOnly2                                                       = 2,
	EStretchDirection__EStretchDirection_MAX3                                        = 3
};

/// Enum /Script/Slate.EStretch
/// Size: 0x10
enum EStretch : uint8_t
{
	EStretch__None0                                                                  = 0,
	EStretch__Fill1                                                                  = 1,
	EStretch__ScaleToFit2                                                            = 2,
	EStretch__ScaleToFitX3                                                           = 3,
	EStretch__ScaleToFitY4                                                           = 4,
	EStretch__ScaleToFill5                                                           = 5,
	EStretch__ScaleBySafeZone6                                                       = 6,
	EStretch__UserSpecified7                                                         = 7,
	EStretch__UserSpecifiedWithClipping8                                             = 8,
	EStretch__EStretch_MAX9                                                          = 9
};

/// Enum /Script/Slate.EProgressBarFillType
/// Size: 0x08
enum EProgressBarFillType : uint8_t
{
	EProgressBarFillType__LeftToRight0                                               = 0,
	EProgressBarFillType__RightToLeft1                                               = 1,
	EProgressBarFillType__FillFromCenter2                                            = 2,
	EProgressBarFillType__FillFromCenterHorizontal3                                  = 3,
	EProgressBarFillType__FillFromCenterVertical4                                    = 4,
	EProgressBarFillType__TopToBottom5                                               = 5,
	EProgressBarFillType__BottomToTop6                                               = 6,
	EProgressBarFillType__EProgressBarFillType_MAX7                                  = 7
};

/// Enum /Script/Slate.EProgressBarFillStyle
/// Size: 0x03
enum EProgressBarFillStyle : uint8_t
{
	EProgressBarFillStyle__Mask0                                                     = 0,
	EProgressBarFillStyle__Scale1                                                    = 1,
	EProgressBarFillStyle__EProgressBarFillStyle_MAX2                                = 2
};

/// Enum /Script/Slate.EListItemAlignment
/// Size: 0x08
enum EListItemAlignment : uint8_t
{
	EListItemAlignment__EvenlyDistributed0                                           = 0,
	EListItemAlignment__EvenlySize1                                                  = 1,
	EListItemAlignment__EvenlyWide2                                                  = 2,
	EListItemAlignment__LeftAligned3                                                 = 3,
	EListItemAlignment__RightAligned4                                                = 4,
	EListItemAlignment__CenterAligned5                                               = 5,
	EListItemAlignment__Fill6                                                        = 6,
	EListItemAlignment__EListItemAlignment_MAX7                                      = 7
};

