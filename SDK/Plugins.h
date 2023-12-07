
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package Plugins.

/// Struct /Game/Plugins/SkyCreator/SkyCreatorDayTimeStructObjectRef.SkyCreatorDayTimeStructObjectRef
/// Size: 0x0068 (0x000000 - 0x000068)
struct FSkyCreatorDayTimeStructObjectRef
{ 
	TArray<USkyCreatorWeatherPreset*>                  MorningWeatherPresets_20_C49A5B0C4C0CE496C861EDAC6B276CBD;  // 0x0000   (0x0010)  
	USkyCreatorWeatherPreset*                          MorningToDay_29_093CCCA142D477A3F7611A9CC3C9CD7C;           // 0x0010   (0x0008)  
	TArray<USkyCreatorWeatherPreset*>                  DayWeatherPresets_21_7CB04BC44C979B82A4CC9D8A5D710D94;      // 0x0018   (0x0010)  
	USkyCreatorWeatherPreset*                          DayToEvening_30_82B802C94175779DBE7B3896B64095E7;           // 0x0028   (0x0008)  
	TArray<USkyCreatorWeatherPreset*>                  EveningWeatherPresets_22_B5CBC9CF4BEA9CF8F2509B8DFE83F78B;  // 0x0030   (0x0010)  
	USkyCreatorWeatherPreset*                          EveningToNight_31_63E267364B3D8BB731AB2C8B3C666FDC;         // 0x0040   (0x0008)  
	TArray<USkyCreatorWeatherPreset*>                  NightWeatherPresets_23_4F351981424C0C11EEAAB2B21BD0873B;    // 0x0048   (0x0010)  
	USkyCreatorWeatherPreset*                          NightToMorning_32_C3E3D28C4B0C48DC5325A9B79569717C;         // 0x0058   (0x0008)  
	USkyCreatorWeatherPreset*                          HubWeatherPreset_24_ED81BC574FD43389DC79ACBB34CD71E9;       // 0x0060   (0x0008)  
};

/// Struct /Game/Plugins/SkyCreator/SkyCreatorDayTimeStruct.SkyCreatorDayTimeStruct
/// Size: 0x0130 (0x000000 - 0x000130)
struct FSkyCreatorDayTimeStruct
{ 
	TArray<TWeakObjectPtr>                             MorningWeatherPresets_19_C49A5B0C4C0CE496C861EDAC6B276CBD;  // 0x0000   (0x0010)  
	TWeakObjectPtr<USkyCreatorWeatherPreset*>          MorningToDay_22_64E4404845FB5A78D306E3A53C0F372D;           // 0x0010   (0x0030)  
	TArray<TWeakObjectPtr>                             DayWeatherPresets_18_7CB04BC44C979B82A4CC9D8A5D710D94;      // 0x0040   (0x0010)  
	TWeakObjectPtr<USkyCreatorWeatherPreset*>          DayToEvening_24_B73DFD6A4052859DAECD9AA38AEB9878;           // 0x0050   (0x0030)  
	TArray<TWeakObjectPtr>                             EveningWeatherPresets_17_B5CBC9CF4BEA9CF8F2509B8DFE83F78B;  // 0x0080   (0x0010)  
	TWeakObjectPtr<USkyCreatorWeatherPreset*>          EveningToNight_26_A8BE56C64D4376A39CDA918EE2F07950;         // 0x0090   (0x0030)  
	TArray<TWeakObjectPtr>                             NightWeatherPresets_16_4F351981424C0C11EEAAB2B21BD0873B;    // 0x00C0   (0x0010)  
	TWeakObjectPtr<USkyCreatorWeatherPreset*>          NightToMorning_28_2491A80D49F9549D0F63959F765A907E;         // 0x00D0   (0x0030)  
	TWeakObjectPtr<USkyCreatorWeatherPreset*>          HubWeatherPreset_15_ED81BC574FD43389DC79ACBB34CD71E9;       // 0x0100   (0x0030)  
};

/// Class /Game/Plugins/TS_PostProcess/Blueprints/Functions/TS_Functions.TS_Functions_C
/// Size: 0x0000 (0x000028 - 0x000028)
class UTS_Functions_C : public UBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Game/Plugins/SkyCreator/SkyCreatorController.SkyCreatorController_C
/// Size: 0x152C (0x000290 - 0x0017BC)
class ASkyCreatorController_C : public AActor : AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0290   (0x0008)  
	USceneComponent*                                   DefaultSceneRoot;                                           // 0x0298   (0x0008)  
	ASkyCreator*                                       SkyCreator;                                                 // 0x02A0   (0x0008)  
	bool                                               LumenTest;                                                  // 0x02A8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x02A9   (0x0007)  MISSED
	double                                             TimeOfDay;                                                  // 0x02B0   (0x0008)  
	bool                                               StartTime;                                                  // 0x02B8   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x02B9   (0x0007)  MISSED
	double                                             DayDurationInSeconds;                                       // 0x02C0   (0x0008)  
	FSkyCreatorDayTimeStruct                           DefaultPresets;                                             // 0x02C8   (0x0130)  
	ASkyCreator*                                       SkyCreatorHub;                                              // 0x03F8   (0x0008)  
	FSkyCreatorWeatherSettings                         CurrentWeatherPreset;                                       // 0x0400   (0x04E8)  
	FSkyCreatorWeatherSettings                         NextWeatherPreset;                                          // 0x08E8   (0x04E8)  
	TEnumAsByte<DayCycleState>                         DayCycleState;                                              // 0x0DD0   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0DD1   (0x0003)  MISSED
	int32_t                                            WeatherIndex;                                               // 0x0DD4   (0x0004)  
	FSkyCreatorDayTimeStruct                           LumenPresets;                                               // 0x0DD8   (0x0130)  
	FSkyCreatorDayTimeStruct                           RTXPresets;                                                 // 0x0F08   (0x0130)  
	double                                             InterpolateDurationTimeMin;                                 // 0x1038   (0x0008)  
	double                                             InterpolateDurationTimeMax;                                 // 0x1040   (0x0008)  
	double                                             WeatherInterpolateDuration;                                 // 0x1048   (0x0008)  
	double                                             InterpolateAlpha;                                           // 0x1050   (0x0008)  
	int32_t                                            OnDayCycleChange;                                           // 0x1058   (0x0004)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x105C   (0x0004)  MISSED
	double                                             WeatherTimeInSeconds;                                       // 0x1060   (0x0008)  
	FTimerHandle                                       WeatherTimer;                                               // 0x1068   (0x0008)  
	double                                             LerpWeatherTimer;                                           // 0x1070   (0x0008)  
	double                                             LerpWeatherTime;                                            // 0x1078   (0x0008)  
	double                                             TimeCycleLeft;                                              // 0x1080   (0x0008)  
	bool                                               ChangeWeather;                                              // 0x1088   (0x0001)  
	unsigned char                                      UnknownData04_5[0x7];                                       // 0x1089   (0x0007)  MISSED
	double                                             ConsturctAlpha;                                             // 0x1090   (0x0008)  
	double                                             DayDurationInSecondsDefault;                                // 0x1098   (0x0008)  
	FMulticastInlineDelegate                           OnCycleChange;                                              // 0x10A0   (0x0010)  
	USkyCreatorWeatherPreset*                          MainWeatherPreset;                                          // 0x10B0   (0x0008)  
	USkyCreatorWeatherPreset*                          LumenWeatherPreset;                                         // 0x10B8   (0x0008)  
	TEnumAsByte<SkyCreatorLightStateEnum>              SettingsState;                                              // 0x10C0   (0x0001)  
	unsigned char                                      UnknownData05_5[0x7];                                       // 0x10C1   (0x0007)  MISSED
	FMulticastInlineDelegate                           LightChange;                                                // 0x10C8   (0x0010)  
	FFMODEventInstance                                 ambient;                                                    // 0x10D8   (0x0008)  
	ASurvPC_C*                                         Local_Surv_PC;                                              // 0x10E0   (0x0008)  
	double                                             Day_Duration_in_Seconds;                                    // 0x10E8   (0x0008)  
	FSkyCreatorDayTimeStruct                           UltimatePresets;                                            // 0x10F0   (0x0130)  
	FSkyCreatorWeatherSettings                         HubPreset;                                                  // 0x1220   (0x04E8)  
	FSkyCreatorDayTimeStructObjectRef                  CurrentState;                                               // 0x1708   (0x0068)  
	int32_t                                            LoadingData;                                                // 0x1770   (0x0004)  
	unsigned char                                      UnknownData06_5[0x4];                                       // 0x1774   (0x0004)  MISSED
	TArray<USkyCreatorWeatherPreset*>                  LoadingDataArray;                                           // 0x1778   (0x0010)  
	double                                             LightAngleMorning;                                          // 0x1788   (0x0008)  
	double                                             LightAngleDay;                                              // 0x1790   (0x0008)  
	double                                             LightAngleEvening;                                          // 0x1798   (0x0008)  
	double                                             LightAngleNight;                                            // 0x17A0   (0x0008)  
	bool                                               InsideHouse;                                                // 0x17A8   (0x0001)  
	unsigned char                                      UnknownData07_5[0x7];                                       // 0x17A9   (0x0007)  MISSED
	USkyCreatorWeatherPreset*                          HousePreset;                                                // 0x17B0   (0x0008)  
	float                                              alpha;                                                      // 0x17B8   (0x0004)  


	/// Functions
	// Function /Game/Plugins/SkyCreator/SkyCreatorController.SkyCreatorController_C.IsHub
	void IsHub(bool& IsHub);                                                                                                 // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Plugins/SkyCreator/SkyCreatorController.SkyCreatorController_C.HiddenCalc
	void HiddenCalc();                                                                                                       // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Plugins/SkyCreator/SkyCreatorController.SkyCreatorController_C.GetDayCycleState
	TEnumAsByte<DayCycleState> GetDayCycleState();                                                                           // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Plugins/SkyCreator/SkyCreatorController.SkyCreatorController_C.OnSettingsStateChange
	void OnSettingsStateChange(TEnumAsByte<SkyCreatorLightStateEnum> SettingsState);                                         // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Plugins/SkyCreator/SkyCreatorController.SkyCreatorController_C.SetNextCycle
	void SetNextCycle();                                                                                                     // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Plugins/SkyCreator/SkyCreatorController.SkyCreatorController_C.InitSkyCreator
	void InitSkyCreator();                                                                                                   // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Plugins/SkyCreator/SkyCreatorController.SkyCreatorController_C.NormalizeTime
	double NormalizeTime(double Time);                                                                                       // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Plugins/SkyCreator/SkyCreatorController.SkyCreatorController_C.GetWeatherPreset
	FSkyCreatorWeatherSettings GetWeatherPreset(bool prev);                                                                  // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Plugins/SkyCreator/SkyCreatorController.SkyCreatorController_C.WeatherTimerCheck
	void WeatherTimerCheck();                                                                                                // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Plugins/SkyCreator/SkyCreatorController.SkyCreatorController_C.WeatherTimerStop
	void WeatherTimerStop();                                                                                                 // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Plugins/SkyCreator/SkyCreatorController.SkyCreatorController_C.LerpSettings
	void LerpSettings(bool Construct);                                                                                       // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Plugins/SkyCreator/SkyCreatorController.SkyCreatorController_C.OnDayStateChange
	void OnDayStateChange(bool Construct);                                                                                   // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Plugins/SkyCreator/SkyCreatorController.SkyCreatorController_C.CalculateInterpolationAlpha
	void CalculateInterpolationAlpha();                                                                                      // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Plugins/SkyCreator/SkyCreatorController.SkyCreatorController_C.CalculateDayCycleState
	void CalculateDayCycleState(bool Construct);                                                                             // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Plugins/SkyCreator/SkyCreatorController.SkyCreatorController_C.UserConstructionScript
	void UserConstructionScript();                                                                                           // [0x2407bf0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Plugins/SkyCreator/SkyCreatorController.SkyCreatorController_C.ReceiveBeginPlay
	void ReceiveBeginPlay();                                                                                                 // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/Plugins/SkyCreator/SkyCreatorController.SkyCreatorController_C.ReceiveTick
	void ReceiveTick(float DeltaSeconds);                                                                                    // [0x2407bf0] Event|Public|BlueprintEvent 
	// Function /Game/Plugins/SkyCreator/SkyCreatorController.SkyCreatorController_C.LoadSkyCreatorState
	void LoadSkyCreatorState();                                                                                              // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Plugins/SkyCreator/SkyCreatorController.SkyCreatorController_C.ExecuteUbergraph_SkyCreatorController
	void ExecuteUbergraph_SkyCreatorController(int32_t EntryPoint);                                                          // [0x2407bf0] Final|HasDefaults    
	// Function /Game/Plugins/SkyCreator/SkyCreatorController.SkyCreatorController_C.LightChange__DelegateSignature
	void LightChange__DelegateSignature(TEnumAsByte<SkyCreatorLightStateEnum> Setting State);                                // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/Plugins/SkyCreator/SkyCreatorController.SkyCreatorController_C.OnCycleChange__DelegateSignature
	void OnCycleChange__DelegateSignature(TEnumAsByte<DayCycleState> DayCycleState);                                         // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Enum /Game/Plugins/SkyCreator/SkyCreatorLightStateEnum.SkyCreatorLightStateEnum
/// Size: 0x04
enum SkyCreatorLightStateEnum : uint8_t
{
	SkyCreatorLightStateEnum__NewEnumerator00                                        = 0,
	SkyCreatorLightStateEnum__NewEnumerator11                                        = 1,
	SkyCreatorLightStateEnum__NewEnumerator22                                        = 2,
	SkyCreatorLightStateEnum__SkyCreatorLightStateEnum_MAX3                          = 3
};

