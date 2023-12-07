
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package Multiplayer.

/// Class /Game/Multiplayer/I_GI_Survival.I_GI_Survival_C
/// Size: 0x0000 (0x000028 - 0x000028)
class UI_GI_Survival_C : public UInterface : UInterface
{ 
public:
};

/// Class /Game/Multiplayer/GI_Survival.GI_Survival_C
/// Size: 0x0318 (0x000218 - 0x000530)
class UGI_Survival_C : public USurvivalGameInstance : USurvivalGameInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0218   (0x0008)  
	TArray<UObject*>                                   PreLoadedTiles;                                             // 0x0220   (0x0010)  
	FString                                            PlayFabUserID;                                              // 0x0230   (0x0010)  
	FName                                              SpawnRegion;                                                // 0x0240   (0x0008)  
	bool                                               PendingTeleport;                                            // 0x0248   (0x0001)  
	bool                                               ServerAddress;                                              // 0x0249   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x024A   (0x0002)  MISSED
	int32_t                                            DeathCounter;                                               // 0x024C   (0x0004)  
	int32_t                                            CurrentQuestIndex;                                          // 0x0250   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0254   (0x0004)  MISSED
	FFMODEventInstance                                 LoadingScreenAmbient;                                       // 0x0258   (0x0008)  
	USG_Tutorial_C*                                    CurrentTutorialSaveSlot;                                    // 0x0260   (0x0008)  
	bool                                               bIsAfterMenu;                                               // 0x0268   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0269   (0x0003)  MISSED
	FQualifiedFrameTime                                LoadingScreenTime;                                          // 0x026C   (0x0010)  
	int32_t                                            ShadowsQuality;                                             // 0x027C   (0x0004)  
	int32_t                                            TexturesQuality;                                            // 0x0280   (0x0004)  
	int32_t                                            PostProcessQuality;                                         // 0x0284   (0x0004)  
	int32_t                                            AntiAliacingQuality;                                        // 0x0288   (0x0004)  
	int32_t                                            ShadingQuality;                                             // 0x028C   (0x0004)  
	int32_t                                            EffectsQuality;                                             // 0x0290   (0x0004)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x0294   (0x0004)  MISSED
	UGameSettings_C*                                   GameSettings;                                               // 0x0298   (0x0008)  
	UCharacterCreateSave_C*                            GI_CharacterSaveRef;                                        // 0x02A0   (0x0008)  
	bool                                               CharactedCreated;                                           // 0x02A8   (0x0001)  
	unsigned char                                      UnknownData04_5[0x7];                                       // 0x02A9   (0x0007)  MISSED
	UPostProcessComponent*                             PlayerPPV;                                                  // 0x02B0   (0x0008)  
	double                                             LensIntensityDefault;                                       // 0x02B8   (0x0008)  
	TSet<UQuest*>                                      NPCQuests;                                                  // 0x02C0   (0x0050)  
	bool                                               InHub;                                                      // 0x0310   (0x0001)  
	unsigned char                                      UnknownData05_5[0x7];                                       // 0x0311   (0x0007)  MISSED
	TSet<UQuest*>                                      SpecQuests;                                                 // 0x0318   (0x0050)  
	UPerkTestSave_C*                                   PerkSaveRef;                                                // 0x0368   (0x0008)  
	bool                                               IsNewCharacter;                                             // 0x0370   (0x0001)  
	bool                                               bDisclaimerShowed;                                          // 0x0371   (0x0001)  
	bool                                               bEnableVoiceLines;                                          // 0x0372   (0x0001)  
	bool                                               bEnableTextChat;                                            // 0x0373   (0x0001)  
	bool                                               bEnableVoiceChat;                                           // 0x0374   (0x0001)  
	unsigned char                                      UnknownData06_5[0x3];                                       // 0x0375   (0x0003)  MISSED
	FString                                            ConnectionErrorText;                                        // 0x0378   (0x0010)  
	bool                                               bConnectAttempt;                                            // 0x0388   (0x0001)  
	unsigned char                                      UnknownData07_5[0x7];                                       // 0x0389   (0x0007)  MISSED
	USG_Dialogue_C*                                    As_SG_Dialogue;                                             // 0x0390   (0x0008)  
	TArray<FString>                                    TDBSERVERCREDENTIALS;                                       // 0x0398   (0x0010)  
	FString                                            VoiceCulture;                                               // 0x03A8   (0x0010)  
	float                                              MouseSensitivity;                                           // 0x03B8   (0x0004)  
	bool                                               MouseInverse;                                               // 0x03BC   (0x0001)  
	unsigned char                                      UnknownData08_5[0x3];                                       // 0x03BD   (0x0003)  MISSED
	USavePrivacyPolicy_C*                              PrivacyPolicySaveRef;                                       // 0x03C0   (0x0008)  
	bool                                               bNeedTutorReset;                                            // 0x03C8   (0x0001)  
	bool                                               NewCharacterCreated;                                        // 0x03C9   (0x0001)  
	unsigned char                                      UnknownData09_5[0x6];                                       // 0x03CA   (0x0006)  MISSED
	UDatabaseReference*                                DatabaseServerListReference;                                // 0x03D0   (0x0008)  
	TMap<FString, FString>                             NewServers;                                                 // 0x03D8   (0x0050)  
	TMap<FString, FString>                             Servers;                                                    // 0x0428   (0x0050)  
	FMulticastInlineDelegate                           ServerListReady;                                            // 0x0478   (0x0010)  
	FTimerHandle                                       LoadLevelTimerHandle;                                       // 0x0488   (0x0008)  
	bool                                               bMovieShowed;                                               // 0x0490   (0x0001)  
	TEnumAsByte<Enum_WarningMessageType>               Type_Message;                                               // 0x0491   (0x0001)  
	unsigned char                                      UnknownData10_5[0x6];                                       // 0x0492   (0x0006)  MISSED
	FText                                              Description_Text;                                           // 0x0498   (0x0018)  
	bool                                               New_State;                                                  // 0x04B0   (0x0001)  
	bool                                               bKickedFromAFK;                                             // 0x04B1   (0x0001)  
	bool                                               Agones;                                                     // 0x04B2   (0x0001)  
	unsigned char                                      UnknownData11_5[0x5];                                       // 0x04B3   (0x0005)  MISSED
	FString                                            CurrentServerList;                                          // 0x04B8   (0x0010)  
	UFirestoreQuery*                                   CurrentQuery;                                               // 0x04C8   (0x0008)  
	FString                                            WarningMessageTime;                                         // 0x04D0   (0x0010)  
	FString                                            GameVersion;                                                // 0x04E0   (0x0010)  
	bool                                               ResolutionFix;                                              // 0x04F0   (0x0001)  
	unsigned char                                      UnknownData12_5[0x7];                                       // 0x04F1   (0x0007)  MISSED
	UUser*                                             User;                                                       // 0x04F8   (0x0008)  
	FMulticastInlineDelegate                           OnCharacterLoaded;                                          // 0x0500   (0x0010)  
	double                                             RenderScale;                                                // 0x0510   (0x0008)  
	bool                                               WasCreated_;                                                // 0x0518   (0x0001)  
	unsigned char                                      UnknownData13_5[0x7];                                       // 0x0519   (0x0007)  MISSED
	FString                                            Server;                                                     // 0x0520   (0x0010)  


	/// Functions
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.GetKickedFromAFK
	void GetKickedFromAFK(bool& OutKickedFromAFK);                                                                           // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.GetWarningMessage
	void GetWarningMessage(TEnumAsByte<Enum_WarningMessageType>& Type Message, FText& Description Text, FString& Time, bool& New State); // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.GetMovieShowed
	void GetMovieShowed(bool& Showed);                                                                                       // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.GetVoiceChatEnabled
	void GetVoiceChatEnabled(bool& bEnabled);                                                                                // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.GetTextChatEnabled
	void GetTextChatEnabled(bool& bEnabled);                                                                                 // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.GetVoiceLinesEnabled
	void GetVoiceLinesEnabled(bool& bEnabled);                                                                               // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.GetDisclaimerShowed
	void GetDisclaimerShowed(bool& Showed);                                                                                  // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.IsTutorialBeginCompleted
	void IsTutorialBeginCompleted(bool& Completed);                                                                          // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.GetNPCQuests
	void GetNPCQuests(bool SpecQuests, TSet<UQuest*>& Quests);                                                               // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.SetBatchModePSO
	void SetBatchModePSO(int32_t Mode);                                                                                      // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.GetShadersRemainingPSO
	void GetShadersRemainingPSO(int64_t& Count);                                                                             // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.GetIsFemale
	void GetIsFemale(bool& IsFemale);                                                                                        // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.IsFirstStart
	void IsFirstStart(bool& IsFirstStart);                                                                                   // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.IsStashTutorialCompleted
	void IsStashTutorialCompleted(bool& Completed);                                                                          // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.LoadDeathCount
	void LoadDeathCount(int32_t& DeathCount);                                                                                // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.IsRadioMessagePlayed
	void IsRadioMessagePlayed(bool& IsPlayed);                                                                               // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.IsTutorialCompleted
	void IsTutorialCompleted(bool& Completed);                                                                               // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.LowEncString
	FString LowEncString(int64_t Input);                                                                                     // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.NIS
	void NIS(int32_t NIS);                                                                                                   // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.CheckReflexIsAvaliable
	bool CheckReflexIsAvaliable();                                                                                           // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.SetFMOD
	void SetFMOD(FString Language);                                                                                          // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.GetPathToServersCollection
	void GetPathToServersCollection(FString Region, UFirestoreCollectionReference*& Collection);                             // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.ApplyUpscaling
	void ApplyUpscaling();                                                                                                   // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.CalculateMinutesFrom2022
	int32_t CalculateMinutesFrom2022();                                                                                      // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.CustomShadowQuality
	void CustomShadowQuality(int32_t Quality);                                                                               // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.ServerListRearrange
	void ServerListRearrange();                                                                                              // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.FSR2
	void FSR2(int32_t Quality);                                                                                              // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.GetTimeTag
	FString GetTimeTag();                                                                                                    // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.SelectServerTag
	FString SelectServerTag(TEnumAsByte<ENUM_ServerRegions> Index);                                                          // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.SavePolicy
	void SavePolicy();                                                                                                       // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.LoadPolicy
	void LoadPolicy();                                                                                                       // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.FirebaseArrayToStringArray
	void FirebaseArrayToStringArray(TArray<FFirestoreFieldValue>& Value, TArray<FString>& Result);                           // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.ConsoleSettings
	void ConsoleSettings();                                                                                                  // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.LoadDialogue
	void LoadDialogue();                                                                                                     // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.SaveDialogue
	void SaveDialogue();                                                                                                     // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.SetGameSettings
	void SetGameSettings(USurvivalGameUserSettings* SurvivalGameUserSettings);                                               // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.InitSpecQuests
	void InitSpecQuests();                                                                                                   // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.LightStateChanged
	void LightStateChanged();                                                                                                // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.SetQuestDefaultValues
	void SetQuestDefaultValues(FName Name, UQuest* Target);                                                                  // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.Init NPCQuests
	void Init NPCQuests();                                                                                                   // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.SaveCharacterInfo
	void SaveCharacterInfo();                                                                                                // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.LoadCharacterInfo
	void LoadCharacterInfo();                                                                                                // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.DLSSFrameAndReflex
	void DLSSFrameAndReflex(bool Enable, int32_t Reflex);                                                                    // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.DLSS
	void DLSS(int32_t Quality, double Sharpness);                                                                            // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.ReflectionMethod
	void ReflectionMethod(int32_t Method);                                                                                   // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.ApplySettings
	void ApplySettings();                                                                                                    // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.SaveGameSettings
	void SaveGameSettings();                                                                                                 // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.LoadGameSettings
	void LoadGameSettings();                                                                                                 // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.DynamicGlobalIllumination
	void DynamicGlobalIllumination(int32_t Method);                                                                          // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.RayTracing
	void RayTracing(bool Enable);                                                                                            // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.GetGIGraphicsSettings
	void GetGIGraphicsSettings(int32_t& ShadowsQuality, int32_t& TexturesQuality, int32_t& PostProcessQuality, int32_t& AntiAliacingQuality, int32_t& ShadingQuality, int32_t& EffectsQuality); // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.SetNormalSettings
	void SetNormalSettings();                                                                                                // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.GetNormalSettings
	void GetNormalSettings();                                                                                                // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.SetMaxSettings
	void SetMaxSettings();                                                                                                   // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.LoadQuests
	void LoadQuests(TMap<int32_t, FQuestSaveStructure>& QuestsInfo);                                                         // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.OnError_6835CB6744EE185D3F5D7892C1B52321
	void OnError_6835CB6744EE185D3F5D7892C1B52321(EFirestoreError Error, TArray<FFirestoreDocumentSnapshot>& DocumentSnapshots, TArray<UFirestoreDocumentChange*>& DocumentChanges); // [0x2407bf0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.OnGot_6835CB6744EE185D3F5D7892C1B52321
	void OnGot_6835CB6744EE185D3F5D7892C1B52321(EFirestoreError Error, TArray<FFirestoreDocumentSnapshot>& DocumentSnapshots, TArray<UFirestoreDocumentChange*>& DocumentChanges); // [0x2407bf0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.OnError_6835CB6744EE185D3F5D7892FAB18A59
	void OnError_6835CB6744EE185D3F5D7892FAB18A59(EFirestoreError Error, TArray<FFirestoreDocumentSnapshot>& DocumentSnapshots, TArray<UFirestoreDocumentChange*>& DocumentChanges); // [0x2407bf0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.OnGot_6835CB6744EE185D3F5D7892FAB18A59
	void OnGot_6835CB6744EE185D3F5D7892FAB18A59(EFirestoreError Error, TArray<FFirestoreDocumentSnapshot>& DocumentSnapshots, TArray<UFirestoreDocumentChange*>& DocumentChanges); // [0x2407bf0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.OnError_6835CB6744EE185D3F5D78926D3BD00B
	void OnError_6835CB6744EE185D3F5D78926D3BD00B(EFirestoreError Error, TArray<FFirestoreDocumentSnapshot>& DocumentSnapshots, TArray<UFirestoreDocumentChange*>& DocumentChanges); // [0x2407bf0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.OnGot_6835CB6744EE185D3F5D78926D3BD00B
	void OnGot_6835CB6744EE185D3F5D78926D3BD00B(EFirestoreError Error, TArray<FFirestoreDocumentSnapshot>& DocumentSnapshots, TArray<UFirestoreDocumentChange*>& DocumentChanges); // [0x2407bf0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.OnError_6835CB6744EE185D3F5D7892FE86BCB7
	void OnError_6835CB6744EE185D3F5D7892FE86BCB7(EFirestoreError Error, TArray<FFirestoreDocumentSnapshot>& DocumentSnapshots, TArray<UFirestoreDocumentChange*>& DocumentChanges); // [0x2407bf0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.OnGot_6835CB6744EE185D3F5D7892FE86BCB7
	void OnGot_6835CB6744EE185D3F5D7892FE86BCB7(EFirestoreError Error, TArray<FFirestoreDocumentSnapshot>& DocumentSnapshots, TArray<UFirestoreDocumentChange*>& DocumentChanges); // [0x2407bf0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.OnError_6835CB6744EE185D3F5D78920C5D456D
	void OnError_6835CB6744EE185D3F5D78920C5D456D(EFirestoreError Error, TArray<FFirestoreDocumentSnapshot>& DocumentSnapshots, TArray<UFirestoreDocumentChange*>& DocumentChanges); // [0x2407bf0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.OnGot_6835CB6744EE185D3F5D78920C5D456D
	void OnGot_6835CB6744EE185D3F5D78920C5D456D(EFirestoreError Error, TArray<FFirestoreDocumentSnapshot>& DocumentSnapshots, TArray<UFirestoreDocumentChange*>& DocumentChanges); // [0x2407bf0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.OnError_6835CB6744EE185D3F5D789293787D5F
	void OnError_6835CB6744EE185D3F5D789293787D5F(EFirestoreError Error, TArray<FFirestoreDocumentSnapshot>& DocumentSnapshots, TArray<UFirestoreDocumentChange*>& DocumentChanges); // [0x2407bf0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.OnGot_6835CB6744EE185D3F5D789293787D5F
	void OnGot_6835CB6744EE185D3F5D789293787D5F(EFirestoreError Error, TArray<FFirestoreDocumentSnapshot>& DocumentSnapshots, TArray<UFirestoreDocumentChange*>& DocumentChanges); // [0x2407bf0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.OnError_23CC9A174CA102442FB54A8830395DF8
	void OnError_23CC9A174CA102442FB54A8830395DF8(EFirebaseAuthError Error, UUser* User);                                    // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.OnSignedIn_23CC9A174CA102442FB54A8830395DF8
	void OnSignedIn_23CC9A174CA102442FB54A8830395DF8(EFirebaseAuthError Error, UUser* User);                                 // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.OnError_A95FB9504F6A9A8A567CB4BB4EEB4351
	void OnError_A95FB9504F6A9A8A567CB4BB4EEB4351(EFirebaseAuthError Error, UUser* User);                                    // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.OnUserCreated_A95FB9504F6A9A8A567CB4BB4EEB4351
	void OnUserCreated_A95FB9504F6A9A8A567CB4BB4EEB4351(EFirebaseAuthError Error, UUser* User);                              // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.OnError_6835CB6744EE185D3F5D7892F0891E7E
	void OnError_6835CB6744EE185D3F5D7892F0891E7E(EFirestoreError Error, TArray<FFirestoreDocumentSnapshot>& DocumentSnapshots, TArray<UFirestoreDocumentChange*>& DocumentChanges); // [0x2407bf0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.OnGot_6835CB6744EE185D3F5D7892F0891E7E
	void OnGot_6835CB6744EE185D3F5D7892F0891E7E(EFirestoreError Error, TArray<FFirestoreDocumentSnapshot>& DocumentSnapshots, TArray<UFirestoreDocumentChange*>& DocumentChanges); // [0x2407bf0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.OnFailure_AF6BB2BE4E8813202D7A81BD3F550645
	void OnFailure_AF6BB2BE4E8813202D7A81BD3F550645();                                                                       // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.OnSuccess_AF6BB2BE4E8813202D7A81BD3F550645
	void OnSuccess_AF6BB2BE4E8813202D7A81BD3F550645();                                                                       // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.OnError_BAC59632492DB18DF9AE5F94ECBDAA46
	void OnError_BAC59632492DB18DF9AE5F94ECBDAA46(EFirestoreError Error, FFirestoreDocumentSnapshot& DocumentSnapshot);      // [0x2407bf0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.OnGot_BAC59632492DB18DF9AE5F94ECBDAA46
	void OnGot_BAC59632492DB18DF9AE5F94ECBDAA46(EFirestoreError Error, FFirestoreDocumentSnapshot& DocumentSnapshot);        // [0x2407bf0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.OnFailure_BA4A1E39414381EFD864E1AEBDC2BC27
	void OnFailure_BA4A1E39414381EFD864E1AEBDC2BC27();                                                                       // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.OnSuccess_BA4A1E39414381EFD864E1AEBDC2BC27
	void OnSuccess_BA4A1E39414381EFD864E1AEBDC2BC27();                                                                       // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.OnFailure_11AA78EF4DED4BFEB577A28ABD444A7E
	void OnFailure_11AA78EF4DED4BFEB577A28ABD444A7E();                                                                       // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.OnSuccess_11AA78EF4DED4BFEB577A28ABD444A7E
	void OnSuccess_11AA78EF4DED4BFEB577A28ABD444A7E();                                                                       // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.HandleNetworkError
	void HandleNetworkError(TEnumAsByte<ENetworkFailure> FailureType, bool bIsServer);                                       // [0x2407bf0] Event|Public|BlueprintEvent 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.HandleTravelError
	void HandleTravelError(TEnumAsByte<ETravelFailure> FailureType);                                                         // [0x2407bf0] Event|Public|BlueprintEvent 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.SetSpawnRegion
	void SetSpawnRegion(FName Region);                                                                                       // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.JoinToServer
	void JoinToServer();                                                                                                     // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.SetTutorialCompleted
	void SetTutorialCompleted(bool Completed);                                                                               // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.SetRadioMessagePlayed
	void SetRadioMessagePlayed(bool Played);                                                                                 // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.SaveQuestInfo
	void SaveQuestInfo(TMap<int32_t, FQuestSaveStructure> QuestsInfo);                                                       // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.SetStashTutorialCompleted
	void SetStashTutorialCompleted(bool Completed);                                                                          // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.SetFistStart
	void SetFistStart(bool IsFirstStart);                                                                                    // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.SetAfterMenu
	void SetAfterMenu(bool AfterMenu);                                                                                       // [0x2407bf0] BlueprintEvent       
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.RayTracingOn
	void RayTracingOn();                                                                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.RayTracingOff
	void RayTracingOff();                                                                                                    // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.ReceiveInit
	void ReceiveInit();                                                                                                      // [0x2407bf0] Event|Public|BlueprintEvent 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.OnPrintMessageClient
	void OnPrintMessageClient(FString pMessage);                                                                             // [0x2407bf0] Event|Public|BlueprintEvent 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.OnPrintMessageServer
	void OnPrintMessageServer(FString pMessage, EMessageType pType);                                                         // [0x2407bf0] Event|Public|BlueprintEvent 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.OnRequestRestartClient
	void OnRequestRestartClient(ERestartReason pReason);                                                                     // [0x2407bf0] Event|Public|BlueprintEvent 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.SetTutorialBeginCompleted
	void SetTutorialBeginCompleted(bool Completed);                                                                          // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.LoadCharacter
	void LoadCharacter();                                                                                                    // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.PerkSave
	void PerkSave();                                                                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.PerkLoad
	void PerkLoad();                                                                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.SetDisclaimerShowed
	void SetDisclaimerShowed(bool Show);                                                                                     // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.SetVoiceChatEnabled
	void SetVoiceChatEnabled(bool bEnable);                                                                                  // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.SetTextChatEnabled
	void SetTextChatEnabled(bool bEnable);                                                                                   // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.SetVoiceLinesEnabled
	void SetVoiceLinesEnabled(bool bEnable);                                                                                 // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.CustomEvent
	void CustomEvent();                                                                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.CustomEvent
	void CustomEvent();                                                                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.GetSaveCharsFromServer
	void GetSaveCharsFromServer();                                                                                           // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.SaveCharacter
	void SaveCharacter();                                                                                                    // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.NeedTutorReset
	void NeedTutorReset();                                                                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.NewCharCreated
	void NewCharCreated();                                                                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.PrepareServerList
	void PrepareServerList();                                                                                                // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.HideLoadingScreenAfterLoadLevel
	void HideLoadingScreenAfterLoadLevel();                                                                                  // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.SetMovieShowed
	void SetMovieShowed(bool Show);                                                                                          // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.SetWarningMessage
	void SetWarningMessage(TEnumAsByte<Enum_WarningMessageType> Type Message, FText Description Text, FString Time, bool New State); // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.SetKickedFromAFK
	void SetKickedFromAFK(bool NewKickedFromAFK);                                                                            // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.SetServerAddress
	void SetServerAddress(FString IP, FString Port);                                                                         // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.OnCharLoadMeshes_Event
	void OnCharLoadMeshes_Event();                                                                                           // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.ServerListByRegion
	void ServerListByRegion(TEnumAsByte<ENUM_ServerRegions> Region);                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.ReceiveShutdown
	void ReceiveShutdown();                                                                                                  // [0x2407bf0] Event|Public|BlueprintEvent 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.AuthToServer
	void AuthToServer();                                                                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.ExecuteUbergraph_GI_Survival
	void ExecuteUbergraph_GI_Survival(int32_t EntryPoint);                                                                   // [0x2407bf0] Final|HasDefaults    
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.OnCharacterLoaded__DelegateSignature
	void OnCharacterLoaded__DelegateSignature();                                                                             // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/Multiplayer/GI_Survival.GI_Survival_C.ServerListReady__DelegateSignature
	void ServerListReady__DelegateSignature(TEnumAsByte<ENUM_ServerRegions> Region);                                         // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Enum /Game/Multiplayer/E_Achievements.E_Achievements
/// Size: 0x13
enum E_Achievements : uint8_t
{
	E_Achievements__NewEnumerator00                                                  = 0,
	E_Achievements__NewEnumerator11                                                  = 1,
	E_Achievements__NewEnumerator22                                                  = 2,
	E_Achievements__NewEnumerator33                                                  = 3,
	E_Achievements__NewEnumerator44                                                  = 4,
	E_Achievements__NewEnumerator55                                                  = 5,
	E_Achievements__NewEnumerator66                                                  = 6,
	E_Achievements__NewEnumerator77                                                  = 7,
	E_Achievements__NewEnumerator88                                                  = 8,
	E_Achievements__NewEnumerator99                                                  = 9,
	E_Achievements__NewEnumerator1010                                                = 10,
	E_Achievements__NewEnumerator1111                                                = 11,
	E_Achievements__E_MAX12                                                          = 12
};

