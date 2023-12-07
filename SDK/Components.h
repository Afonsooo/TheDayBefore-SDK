
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package Components.

/// Class /Game/Components/RTD_Notify.RTD_Notify_C
/// Size: 0x0000 (0x000030 - 0x000030)
class URTD_Notify_C : public URichTextBlockImageDecorator : URichTextBlockImageDecorator
{ 
public:
};

/// Class /Game/Components/WBP_KilledByNotification.WBP_KilledByNotification_C
/// Size: 0x0022 (0x000280 - 0x0002A2)
class UWBP_KilledByNotification_C : public UUserWidget : UUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0280   (0x0008)  
	UWidgetAnimation*                                  Show;                                                       // 0x0288   (0x0008)  
	UImage*                                            Image_Icon;                                                 // 0x0290   (0x0008)  
	UTextBlock*                                        TextBlock_Nickname;                                         // 0x0298   (0x0008)  
	bool                                               Showed;                                                     // 0x02A0   (0x0001)  
	bool                                               bValid;                                                     // 0x02A1   (0x0001)  


	/// Functions
	// Function /Game/Components/WBP_KilledByNotification.WBP_KilledByNotification_C.SetInfo
	void SetInfo(TWeakObjectPtr<UPaperSprite*> Icon, FString Name, bool bValid);                                             // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Components/WBP_KilledByNotification.WBP_KilledByNotification_C.Finished_F02B79744A8A4DEBFFC41695BD46D4B0
	void Finished_F02B79744A8A4DEBFFC41695BD46D4B0();                                                                        // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Components/WBP_KilledByNotification.WBP_KilledByNotification_C.PreConstruct
	void PreConstruct(bool IsDesignTime);                                                                                    // [0x2407bf0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/Components/WBP_KilledByNotification.WBP_KilledByNotification_C.ShowNotification
	void ShowNotification(bool Show);                                                                                        // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Components/WBP_KilledByNotification.WBP_KilledByNotification_C.ExecuteUbergraph_WBP_KilledByNotification
	void ExecuteUbergraph_WBP_KilledByNotification(int32_t EntryPoint);                                                      // [0x2407bf0] Final                
};

/// Class /Game/Components/WBP_IngameNotifications.WBP_IngameNotifications_C
/// Size: 0x004E (0x000280 - 0x0002CE)
class UWBP_IngameNotifications_C : public UUserWidget : UUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0280   (0x0008)  
	UWidgetAnimation*                                  Expand;                                                     // 0x0288   (0x0008)  
	UImage*                                            Image_Icon;                                                 // 0x0290   (0x0008)  
	URichTextBlock*                                    NotifyText;                                                 // 0x0298   (0x0008)  
	USizeBox*                                          SizeBox_Content;                                            // 0x02A0   (0x0008)  
	UTextBlock*                                        Text_Title;                                                 // 0x02A8   (0x0008)  
	int32_t                                            Message_Index;                                              // 0x02B0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x02B4   (0x0004)  MISSED
	FString                                            Nick_Name;                                                  // 0x02B8   (0x0010)  
	float                                              NotificationLifetime;                                       // 0x02C8   (0x0004)  
	bool                                               Shown;                                                      // 0x02CC   (0x0001)  
	bool                                               bRemoveFromParentOnAnimationEnd;                            // 0x02CD   (0x0001)  


	/// Functions
	// Function /Game/Components/WBP_IngameNotifications.WBP_IngameNotifications_C.Finished_A6128CFF4EA6353F586E92B7320AA35D
	void Finished_A6128CFF4EA6353F586E92B7320AA35D();                                                                        // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Components/WBP_IngameNotifications.WBP_IngameNotifications_C.Finished_A174E2E94EBFB5111F9E11A1208BE667
	void Finished_A174E2E94EBFB5111F9E11A1208BE667();                                                                        // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Components/WBP_IngameNotifications.WBP_IngameNotifications_C.PreConstruct
	void PreConstruct(bool IsDesignTime);                                                                                    // [0x2407bf0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/Components/WBP_IngameNotifications.WBP_IngameNotifications_C.Init
	void Init();                                                                                                             // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Components/WBP_IngameNotifications.WBP_IngameNotifications_C.ExecuteUbergraph_WBP_IngameNotifications
	void ExecuteUbergraph_WBP_IngameNotifications(int32_t EntryPoint);                                                       // [0x2407bf0] Final|HasDefaults    
};

/// Class /Game/Components/WBP_PerksInfo.WBP_PerksInfo_C
/// Size: 0x0040 (0x000280 - 0x0002C0)
class UWBP_PerksInfo_C : public UUserWidget : UUserWidget
{ 
public:
	UTextBlock*                                        Description;                                                // 0x0280   (0x0008)  
	UImage*                                            IconPerkInfo;                                               // 0x0288   (0x0008)  
	UImage*                                            Image;                                                      // 0x0290   (0x0008)  
	UImage*                                            Image;                                                      // 0x0298   (0x0008)  
	UImage*                                            Image;                                                      // 0x02A0   (0x0008)  
	UTextBlock*                                        NamePerk;                                                   // 0x02A8   (0x0008)  
	UTextBlock*                                        PercentageChange;                                           // 0x02B0   (0x0008)  
	UTextBlock*                                        StatName;                                                   // 0x02B8   (0x0008)  
};

/// Class /Game/Components/WBP_Perks.WBP_Perks_C
/// Size: 0x0040 (0x000280 - 0x0002C0)
class UWBP_Perks_C : public UUserWidget : UUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0280   (0x0008)  
	UButton*                                           Button;                                                     // 0x0288   (0x0008)  
	UTextBlock*                                        PerkName;                                                   // 0x0290   (0x0008)  
	FText                                              PerkNameText;                                               // 0x0298   (0x0018)  
	FMulticastInlineDelegate                           OnClickPerk;                                                // 0x02B0   (0x0010)  


	/// Functions
	// Function /Game/Components/WBP_Perks.WBP_Perks_C.Construct
	void Construct();                                                                                                        // [0x2407bf0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/Components/WBP_Perks.WBP_Perks_C.BndEvt__WBP_Perks_Button_87_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	void BndEvt__WBP_Perks_Button_87_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();                 // [0x2407bf0] BlueprintEvent       
	// Function /Game/Components/WBP_Perks.WBP_Perks_C.ExecuteUbergraph_WBP_Perks
	void ExecuteUbergraph_WBP_Perks(int32_t EntryPoint);                                                                     // [0x2407bf0] Final                
	// Function /Game/Components/WBP_Perks.WBP_Perks_C.OnClickPerk__DelegateSignature
	void OnClickPerk__DelegateSignature(FText PerkName);                                                                     // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Components/WBP_Group.WBP_Group_C
/// Size: 0x0190 (0x000280 - 0x000410)
class UWBP_Group_C : public UUserWidget : UUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0280   (0x0008)  
	UWidgetAnimation*                                  Expand_Hover;                                               // 0x0288   (0x0008)  
	UWidgetAnimation*                                  Options_Hover;                                              // 0x0290   (0x0008)  
	UWidgetAnimation*                                  Expand;                                                     // 0x0298   (0x0008)  
	UButton*                                           Button_CallOptions;                                         // 0x02A0   (0x0008)  
	UButton*                                           Button_Exit;                                                // 0x02A8   (0x0008)  
	UButton*                                           Button_InviteHome;                                          // 0x02B0   (0x0008)  
	UButton*                                           Button_Kick;                                                // 0x02B8   (0x0008)  
	UButton*                                           Button_MakeLeader;                                          // 0x02C0   (0x0008)  
	UButton*                                           Button_Nickname;                                            // 0x02C8   (0x0008)  
	UButton*                                           Button_Nickname;                                            // 0x02D0   (0x0008)  
	UImage*                                            Image;                                                      // 0x02D8   (0x0008)  
	UImage*                                            Image_BG;                                                   // 0x02E0   (0x0008)  
	UImage*                                            Image_Default;                                              // 0x02E8   (0x0008)  
	UImage*                                            Image_EmptyBG;                                              // 0x02F0   (0x0008)  
	UImage*                                            Image_Hovered;                                              // 0x02F8   (0x0008)  
	UImage*                                            Image_PlayerIcon;                                           // 0x0300   (0x0008)  
	UImage*                                            Image_Selected;                                             // 0x0308   (0x0008)  
	UVerticalBox*                                      OptionsSquadLeader;                                         // 0x0310   (0x0008)  
	UVerticalBox*                                      OptionsSquadMember;                                         // 0x0318   (0x0008)  
	UTextBlock*                                        PlayerName;                                                 // 0x0320   (0x0008)  
	UTextBlock*                                        Role;                                                       // 0x0328   (0x0008)  
	USizeBox*                                          Size_Box_Nickname;                                          // 0x0330   (0x0008)  
	USizeBox*                                          SizeBox;                                                    // 0x0338   (0x0008)  
	USizeBox*                                          SizeBox_Options;                                            // 0x0340   (0x0008)  
	USizeBox*                                          SizeBox_PlayerIcon;                                         // 0x0348   (0x0008)  
	UTextBlock*                                        TextBlock_Nickname;                                         // 0x0350   (0x0008)  
	UTextBlock*                                        TextBlock_Nickname;                                         // 0x0358   (0x0008)  
	UWidgetSwitcher*                                   WidgetSwitcher_BG;                                          // 0x0360   (0x0008)  
	UWidgetSwitcher*                                   WidgetSwitcher_Options;                                     // 0x0368   (0x0008)  
	FMulticastInlineDelegate                           CallRefreshList;                                            // 0x0370   (0x0010)  
	FMulticastInlineDelegate                           OnClickedKick;                                              // 0x0380   (0x0010)  
	APS_TDB_C*                                         PlayerState;                                                // 0x0390   (0x0008)  
	FMulticastInlineDelegate                           OnClickedExit;                                              // 0x0398   (0x0010)  
	FMulticastInlineDelegate                           OnMakeLeader;                                               // 0x03A8   (0x0010)  
	bool                                               OptionsShowed;                                              // 0x03B8   (0x0001)  
	bool                                               IsEmpty;                                                    // 0x03B9   (0x0001)  
	bool                                               Solo;                                                       // 0x03BA   (0x0001)  
	unsigned char                                      UnknownData00_5[0x5];                                       // 0x03BB   (0x0005)  MISSED
	FMulticastInlineDelegate                           OnClickOptions;                                             // 0x03C0   (0x0010)  
	FMulticastInlineDelegate                           OnClickInviteHome;                                          // 0x03D0   (0x0010)  
	bool                                               Nickname_Showed;                                            // 0x03E0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x03E1   (0x0007)  MISSED
	FMulticastInlineDelegate                           OnHovered;                                                  // 0x03E8   (0x0010)  
	FMulticastInlineDelegate                           OnUnhovered;                                                // 0x03F8   (0x0010)  
	UW_PauseMenu_C*                                    PauseMenu;                                                  // 0x0408   (0x0008)  


	/// Functions
	// Function /Game/Components/WBP_Group.WBP_Group_C.ExpandHover
	void ExpandHover(bool Show);                                                                                             // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Components/WBP_Group.WBP_Group_C.ExpandOption
	void ExpandOption(bool Show);                                                                                            // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Components/WBP_Group.WBP_Group_C.GetEmpty
	void GetEmpty(bool& IsEmpty);                                                                                            // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Components/WBP_Group.WBP_Group_C.GetSolo
	void GetSolo(bool& Solo);                                                                                                // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Components/WBP_Group.WBP_Group_C.GetIsOptionShowed
	void GetIsOptionShowed(bool& OptionsShowed);                                                                             // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Components/WBP_Group.WBP_Group_C.InitOptionsButtons
	void InitOptionsButtons();                                                                                               // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Components/WBP_Group.WBP_Group_C.Init
	void Init(APS_TDB_C* PlayerState, bool bSolo, bool bEmpty);                                                              // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Components/WBP_Group.WBP_Group_C.GetPlayerState
	void GetPlayerState(APS_TDB_C*& PlayerState);                                                                            // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Components/WBP_Group.WBP_Group_C.SetOwner
	void SetOwner();                                                                                                         // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Components/WBP_Group.WBP_Group_C.PreConstruct
	void PreConstruct(bool IsDesignTime);                                                                                    // [0x2407bf0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/Components/WBP_Group.WBP_Group_C.Destruct
	void Destruct();                                                                                                         // [0x2407bf0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/Components/WBP_Group.WBP_Group_C.BndEvt__WBP_Group_Button_InviteHome_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
	void BndEvt__WBP_Group_Button_InviteHome_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();         // [0x2407bf0] BlueprintEvent       
	// Function /Game/Components/WBP_Group.WBP_Group_C.ShowNickName
	void ShowNickName(bool Show);                                                                                            // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Components/WBP_Group.WBP_Group_C.BndEvt__WBP_Group_Button_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	void BndEvt__WBP_Group_Button_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();                    // [0x2407bf0] BlueprintEvent       
	// Function /Game/Components/WBP_Group.WBP_Group_C.BndEvt__WBP_Group_Button_243_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	void BndEvt__WBP_Group_Button_243_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();                // [0x2407bf0] BlueprintEvent       
	// Function /Game/Components/WBP_Group.WBP_Group_C.BndEvt__WBP_Group_Button_177_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	void BndEvt__WBP_Group_Button_177_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();                // [0x2407bf0] BlueprintEvent       
	// Function /Game/Components/WBP_Group.WBP_Group_C.BndEvt__WBP_Group_Button_CallOptions_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	void BndEvt__WBP_Group_Button_CallOptions_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();        // [0x2407bf0] BlueprintEvent       
	// Function /Game/Components/WBP_Group.WBP_Group_C.ShowOptions
	void ShowOptions(bool Show);                                                                                             // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Components/WBP_Group.WBP_Group_C.OnMouseEnter
	void OnMouseEnter(FGeometry MyGeometry, FPointerEvent& MouseEvent);                                                      // [0x2407bf0] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/Components/WBP_Group.WBP_Group_C.OnMouseLeave
	void OnMouseLeave(FPointerEvent& MouseEvent);                                                                            // [0x2407bf0] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/Components/WBP_Group.WBP_Group_C.BindEmptyClick
	void BindEmptyClick(UW_PauseMenu_C* PauseWidget);                                                                        // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Components/WBP_Group.WBP_Group_C.CloseCustom
	void CloseCustom();                                                                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Components/WBP_Group.WBP_Group_C.ExecuteUbergraph_WBP_Group
	void ExecuteUbergraph_WBP_Group(int32_t EntryPoint);                                                                     // [0x2407bf0] Final|HasDefaults    
	// Function /Game/Components/WBP_Group.WBP_Group_C.OnUnhovered__DelegateSignature
	void OnUnhovered__DelegateSignature(UWBP_Group_C* Ref);                                                                  // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/Components/WBP_Group.WBP_Group_C.OnHovered__DelegateSignature
	void OnHovered__DelegateSignature(UWBP_Group_C* Ref);                                                                    // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/Components/WBP_Group.WBP_Group_C.OnClickInviteHome__DelegateSignature
	void OnClickInviteHome__DelegateSignature();                                                                             // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/Components/WBP_Group.WBP_Group_C.OnClickOptions__DelegateSignature
	void OnClickOptions__DelegateSignature(UWBP_Group_C* GroupEntry);                                                        // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/Components/WBP_Group.WBP_Group_C.OnMakeLeader__DelegateSignature
	void OnMakeLeader__DelegateSignature(APS_TDB_C* PlayerState);                                                            // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/Components/WBP_Group.WBP_Group_C.OnClickedExit__DelegateSignature
	void OnClickedExit__DelegateSignature(APS_TDB_C* PlayerState);                                                           // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/Components/WBP_Group.WBP_Group_C.OnClickedKick__DelegateSignature
	void OnClickedKick__DelegateSignature(APS_TDB_C* PlayerState);                                                           // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/Components/WBP_Group.WBP_Group_C.CallRefreshList__DelegateSignature
	void CallRefreshList__DelegateSignature();                                                                               // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

