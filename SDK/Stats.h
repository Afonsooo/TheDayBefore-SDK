
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package Stats.

/// Class /Game/Stats/I_StatsInterface.I_StatsInterface_C
/// Size: 0x0000 (0x000028 - 0x000028)
class UI_StatsInterface_C : public UInterface : UInterface
{ 
public:
};

/// Class /Game/Stats/CarStats/BPC_CarStatsComponent.BPC_CarStatsComponent_C
/// Size: 0x00D0 (0x0000A0 - 0x000170)
class UBPC_CarStatsComponent_C : public UActorComponent : UActorComponent
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x00A0   (0x0008)  
	FMulticastInlineDelegate                           Fuel_End;                                                   // 0x00A8   (0x0010)  
	TMap<TEnumAsByte, double>                          Stats;                                                      // 0x00B8   (0x0050)  
	FMulticastInlineDelegate                           DurabilityEnd;                                              // 0x0108   (0x0010)  
	bool                                               NoFuel;                                                     // 0x0118   (0x0001)  
	bool                                               NoDurability;                                               // 0x0119   (0x0001)  
	bool                                               IsCriticalDurability;                                       // 0x011A   (0x0001)  
	unsigned char                                      UnknownData00_5[0x5];                                       // 0x011B   (0x0005)  MISSED
	double                                             CriticalDurability;                                         // 0x0120   (0x0008)  
	bool                                               IsCriticalFuel;                                             // 0x0128   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0129   (0x0007)  MISSED
	double                                             CriticalFuel;                                               // 0x0130   (0x0008)  
	bool                                               Destroy_;                                                   // 0x0138   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0139   (0x0007)  MISSED
	UObject*                                           As_BP_FGear_Vehicle_Basic;                                  // 0x0140   (0x0008)  
	FMulticastInlineDelegate                           OnFuelChange;                                               // 0x0148   (0x0010)  
	AAVS_VehicleMaster_C*                              As_AVS_Vehicle_Master;                                      // 0x0158   (0x0008)  
	FMulticastInlineDelegate                           OnDurabilityChange;                                         // 0x0160   (0x0010)  


	/// Functions
	// Function /Game/Stats/CarStats/BPC_CarStatsComponent.BPC_CarStatsComponent_C.AddImpulseVehicle
	void AddImpulseVehicle(AAVS_VehicleMaster_C* Vehicle);                                                                   // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/CarStats/BPC_CarStatsComponent.BPC_CarStatsComponent_C.RadialDamage
	void RadialDamage(AAVS_VehicleMaster_C* Vehicle);                                                                        // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/CarStats/BPC_CarStatsComponent.BPC_CarStatsComponent_C.StatInitialize
	void StatInitialize();                                                                                                   // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/CarStats/BPC_CarStatsComponent.BPC_CarStatsComponent_C.DestroyCar
	void DestroyCar(UFMODEvent* SFX, UNiagaraSystem* VFX, UObject* Mesh);                                                    // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/CarStats/BPC_CarStatsComponent.BPC_CarStatsComponent_C.UpdateCriticalState
	void UpdateCriticalState();                                                                                              // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/CarStats/BPC_CarStatsComponent.BPC_CarStatsComponent_C.DecreaseFuel
	void DecreaseFuel(double Value);                                                                                         // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/CarStats/BPC_CarStatsComponent.BPC_CarStatsComponent_C.NeedFuelAmount
	void NeedFuelAmount(double& Value);                                                                                      // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Stats/CarStats/BPC_CarStatsComponent.BPC_CarStatsComponent_C.IncreaseFuel
	void IncreaseFuel(double Value);                                                                                         // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/CarStats/BPC_CarStatsComponent.BPC_CarStatsComponent_C.IsFullDurability
	void IsFullDurability(bool& IsFull);                                                                                     // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Stats/CarStats/BPC_CarStatsComponent.BPC_CarStatsComponent_C.IsFullFuel
	void IsFullFuel(bool& IsFull);                                                                                           // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Stats/CarStats/BPC_CarStatsComponent.BPC_CarStatsComponent_C.IncreaseDurability
	void IncreaseDurability(double Value);                                                                                   // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/CarStats/BPC_CarStatsComponent.BPC_CarStatsComponent_C.DecreaseDurability
	void DecreaseDurability(double Value);                                                                                   // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/CarStats/BPC_CarStatsComponent.BPC_CarStatsComponent_C.GetStat
	void GetStat(TEnumAsByte<StatType> Key, double& Value);                                                                  // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Stats/CarStats/BPC_CarStatsComponent.BPC_CarStatsComponent_C.SetStat
	double SetStat(TEnumAsByte<StatType> Stat, double Value);                                                                // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/CarStats/BPC_CarStatsComponent.BPC_CarStatsComponent_C.CalculateFuel
	void CalculateFuel(double Delta);                                                                                        // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/CarStats/BPC_CarStatsComponent.BPC_CarStatsComponent_C.ReceiveTick
	void ReceiveTick(float DeltaSeconds);                                                                                    // [0x2407bf0] Event|Public|BlueprintEvent 
	// Function /Game/Stats/CarStats/BPC_CarStatsComponent.BPC_CarStatsComponent_C.ReceiveBeginPlay
	void ReceiveBeginPlay();                                                                                                 // [0x2407bf0] Event|Public|BlueprintEvent 
	// Function /Game/Stats/CarStats/BPC_CarStatsComponent.BPC_CarStatsComponent_C.SetStat_Multi
	void SetStat_Multi(TEnumAsByte<StatType> Key, double& Value);                                                            // [0x2407bf0] Net|NetReliableNetMulticast|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/CarStats/BPC_CarStatsComponent.BPC_CarStatsComponent_C.ExecuteUbergraph_BPC_CarStatsComponent
	void ExecuteUbergraph_BPC_CarStatsComponent(int32_t EntryPoint);                                                         // [0x2407bf0] Final                
	// Function /Game/Stats/CarStats/BPC_CarStatsComponent.BPC_CarStatsComponent_C.OnDurabilityChange__DelegateSignature
	void OnDurabilityChange__DelegateSignature(double Durability);                                                           // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/CarStats/BPC_CarStatsComponent.BPC_CarStatsComponent_C.OnFuelChange__DelegateSignature
	void OnFuelChange__DelegateSignature(double Fuel);                                                                       // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/CarStats/BPC_CarStatsComponent.BPC_CarStatsComponent_C.DurabilityEnd__DelegateSignature
	void DurabilityEnd__DelegateSignature();                                                                                 // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/CarStats/BPC_CarStatsComponent.BPC_CarStatsComponent_C.Fuel End__DelegateSignature
	void Fuel End__DelegateSignature();                                                                                      // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C
/// Size: 0x0779 (0x0000A0 - 0x000819)
class UBPC_PlayerStatsComponent_C : public UActorComponent : UActorComponent
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x00A0   (0x0008)  
	double                                             HealthRegenerationSpeed;                                    // 0x00A8   (0x0008)  
	double                                             HealthDecreaseSpeed;                                        // 0x00B0   (0x0008)  
	double                                             HungerDecreaseSpeed;                                        // 0x00B8   (0x0008)  
	FMulticastInlineDelegate                           HungerEnd;                                                  // 0x00C0   (0x0010)  
	FMulticastInlineDelegate                           ColdEnd;                                                    // 0x00D0   (0x0010)  
	FMulticastInlineDelegate                           HealthEnd;                                                  // 0x00E0   (0x0010)  
	bool                                               NoHealth;                                                   // 0x00F0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x00F1   (0x0007)  MISSED
	double                                             StaminaDecreaseSpeed;                                       // 0x00F8   (0x0008)  
	double                                             StaminaRegeneartionSpeed;                                   // 0x0100   (0x0008)  
	bool                                               StaminaUse;                                                 // 0x0108   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0109   (0x0007)  MISSED
	FMulticastInlineDelegate                           StaminaEnd;                                                 // 0x0110   (0x0010)  
	bool                                               NoStamina;                                                  // 0x0120   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0121   (0x0007)  MISSED
	double                                             CriticalHealth;                                             // 0x0128   (0x0008)  
	double                                             CriticalHunger;                                             // 0x0130   (0x0008)  
	double                                             CriticalCold;                                               // 0x0138   (0x0008)  
	double                                             CriticalStamina;                                            // 0x0140   (0x0008)  
	bool                                               SatietyHunger;                                              // 0x0148   (0x0001)  
	unsigned char                                      UnknownData03_5[0x7];                                       // 0x0149   (0x0007)  MISSED
	double                                             Thirst;                                                     // 0x0150   (0x0008)  
	double                                             ThirstMax;                                                  // 0x0158   (0x0008)  
	double                                             ThirstDecreaseSpeed;                                        // 0x0160   (0x0008)  
	double                                             CriticalThirst;                                             // 0x0168   (0x0008)  
	FMulticastInlineDelegate                           ThirstEnd;                                                  // 0x0170   (0x0010)  
	TMap<TEnumAsByte, double>                          Stats;                                                      // 0x0180   (0x0050)  
	bool                                               PlayerDead;                                                 // 0x01D0   (0x0001)  
	bool                                               InCar;                                                      // 0x01D1   (0x0001)  
	unsigned char                                      UnknownData04_5[0x6];                                       // 0x01D2   (0x0006)  MISSED
	ABP_TrueSkyController_C*                           DaySystem;                                                  // 0x01D8   (0x0008)  
	double                                             StaminaAimSpeed;                                            // 0x01E0   (0x0008)  
	ASurvivalPlayer_C*                                 CharRef;                                                    // 0x01E8   (0x0008)  
	double                                             HungerDecreaseMultiplier;                                   // 0x01F0   (0x0008)  
	bool                                               IsCriticalHealth;                                           // 0x01F8   (0x0001)  
	bool                                               IsCriticalHunger;                                           // 0x01F9   (0x0001)  
	bool                                               IsCriticalCold;                                             // 0x01FA   (0x0001)  
	unsigned char                                      UnknownData05_5[0x5];                                       // 0x01FB   (0x0005)  MISSED
	FMulticastInlineDelegate                           OnStaminaCritical;                                          // 0x0200   (0x0010)  
	UFMODAudioComponent*                               ColdCritSound;                                              // 0x0210   (0x0008)  
	bool                                               StaminaHitted;                                              // 0x0218   (0x0001)  
	unsigned char                                      UnknownData06_5[0x7];                                       // 0x0219   (0x0007)  MISSED
	ABP_BlizzardController_C*                          BlizzController;                                            // 0x0220   (0x0008)  
	UFMODAudioComponent*                               stomachGurgle;                                              // 0x0228   (0x0008)  
	UFMODAudioComponent*                               CritHealthSound;                                            // 0x0230   (0x0008)  
	bool                                               IsCriticalThirst;                                           // 0x0238   (0x0001)  
	unsigned char                                      UnknownData07_5[0x7];                                       // 0x0239   (0x0007)  MISSED
	double                                             NonEffectedMaxStamina;                                      // 0x0240   (0x0008)  
	double                                             EffectedStamina;                                            // 0x0248   (0x0008)  
	bool                                               isBleeding;                                                 // 0x0250   (0x0001)  
	unsigned char                                      UnknownData08_5[0x7];                                       // 0x0251   (0x0007)  MISSED
	double                                             HealthRegenerationMultiplier;                               // 0x0258   (0x0008)  
	double                                             ThirstDecreaseMultiplier;                                   // 0x0260   (0x0008)  
	bool                                               FullHunger;                                                 // 0x0268   (0x0001)  
	bool                                               FullThirst;                                                 // 0x0269   (0x0001)  
	unsigned char                                      UnknownData09_5[0x6];                                       // 0x026A   (0x0006)  MISSED
	double                                             FullThirstTime;                                             // 0x0270   (0x0008)  
	double                                             FullHungerTime;                                             // 0x0278   (0x0008)  
	double                                             InsideColdIncreaseSpeed;                                    // 0x0280   (0x0008)  
	double                                             SwimmingColdDecreaseSpeed;                                  // 0x0288   (0x0008)  
	double                                             BlizzardColdDecreaseSpeed;                                  // 0x0290   (0x0008)  
	bool                                               IsWet;                                                      // 0x0298   (0x0001)  
	bool                                               IsFreezing;                                                 // 0x0299   (0x0001)  
	bool                                               IsWarming;                                                  // 0x029A   (0x0001)  
	unsigned char                                      UnknownData10_5[0x5];                                       // 0x029B   (0x0005)  MISSED
	double                                             BlizzardPPCustom;                                           // 0x02A0   (0x0008)  
	bool                                               Tutorial;                                                   // 0x02A8   (0x0001)  
	unsigned char                                      UnknownData11_5[0x7];                                       // 0x02A9   (0x0007)  MISSED
	double                                             MaxHealth;                                                  // 0x02B0   (0x0008)  
	double                                             MaxStamina;                                                 // 0x02B8   (0x0008)  
	bool                                               Crawling;                                                   // 0x02C0   (0x0001)  
	unsigned char                                      UnknownData12_5[0x7];                                       // 0x02C1   (0x0007)  MISSED
	double                                             StaminaThirstyMultiplier;                                   // 0x02C8   (0x0008)  
	bool                                               NewVar;                                                     // 0x02D0   (0x0001)  
	unsigned char                                      UnknownData13_5[0x7];                                       // 0x02D1   (0x0007)  MISSED
	double                                             BleedingChanceMultiplier;                                   // 0x02D8   (0x0008)  
	double                                             HungerDecreaseAditional;                                    // 0x02E0   (0x0008)  
	double                                             ThirstDecreaseAdditional;                                   // 0x02E8   (0x0008)  
	double                                             StaminaRegeneartionMultiplier;                              // 0x02F0   (0x0008)  
	double                                             CraftSpeedMultiplier;                                       // 0x02F8   (0x0008)  
	double                                             HealthRegenAddMultiplier;                                   // 0x0300   (0x0008)  
	double                                             ClimbSpeedRate;                                             // 0x0308   (0x0008)  
	FMulticastInlineDelegate                           OnCrawling;                                                 // 0x0310   (0x0010)  
	double                                             WetColdMultiplier;                                          // 0x0320   (0x0008)  
	FMulticastInlineDelegate                           MildIntoxication;                                           // 0x0328   (0x0010)  
	FMulticastInlineDelegate                           ModerateIntoxication;                                       // 0x0338   (0x0010)  
	FMulticastInlineDelegate                           SevereIntoxication;                                         // 0x0348   (0x0010)  
	FMulticastInlineDelegate                           CriticalIntoxication;                                       // 0x0358   (0x0010)  
	double                                             ChangedIntoxication;                                        // 0x0368   (0x0008)  
	bool                                               DrunkDehydration;                                           // 0x0370   (0x0001)  
	unsigned char                                      UnknownData14_5[0x7];                                       // 0x0371   (0x0007)  MISSED
	double                                             BleedingDuration;                                           // 0x0378   (0x0008)  
	double                                             MaxFakeHealth;                                              // 0x0380   (0x0008)  
	double                                             ChangeAdrenalin;                                            // 0x0388   (0x0008)  
	double                                             AdrenalinHealth;                                            // 0x0390   (0x0008)  
	FTimerHandle                                       AdrenalinTimer;                                             // 0x0398   (0x0008)  
	int32_t                                            AdrenalinLevel;                                             // 0x03A0   (0x0004)  
	unsigned char                                      UnknownData15_5[0x4];                                       // 0x03A4   (0x0004)  MISSED
	double                                             Value;                                                      // 0x03A8   (0x0008)  
	double                                             NonEffectStaminaDecrease;                                   // 0x03B0   (0x0008)  
	double                                             ConsumptionStaminaWeight;                                   // 0x03B8   (0x0008)  
	double                                             AdrenalinStaminaDecrease;                                   // 0x03C0   (0x0008)  
	double                                             WeightMaxStamina;                                           // 0x03C8   (0x0008)  
	double                                             WeightStaminaDecrease;                                      // 0x03D0   (0x0008)  
	int32_t                                            SatietyEffect;                                              // 0x03D8   (0x0004)  
	unsigned char                                      UnknownData16_5[0x4];                                       // 0x03DC   (0x0004)  MISSED
	double                                             HungerCriticalMaxStamina;                                   // 0x03E0   (0x0008)  
	bool                                               HungerIsZero;                                               // 0x03E8   (0x0001)  
	unsigned char                                      UnknownData17_5[0x7];                                       // 0x03E9   (0x0007)  MISSED
	FTimerHandle                                       TimerHungerZero;                                            // 0x03F0   (0x0008)  
	bool                                               SatietyThirst;                                              // 0x03F8   (0x0001)  
	unsigned char                                      UnknownData18_5[0x7];                                       // 0x03F9   (0x0007)  MISSED
	double                                             ThirstCriticalMaxStamina;                                   // 0x0400   (0x0008)  
	bool                                               ThirstIsZero;                                               // 0x0408   (0x0001)  
	unsigned char                                      UnknownData19_5[0x7];                                       // 0x0409   (0x0007)  MISSED
	FTimerHandle                                       TimerThirstZero;                                            // 0x0410   (0x0008)  
	UFMODAudioComponent*                               BreathSound;                                                // 0x0418   (0x0008)  
	FMulticastInlineDelegate                           OnHPChange;                                                 // 0x0420   (0x0010)  
	FMulticastInlineDelegate                           OnStatChange;                                               // 0x0430   (0x0010)  
	FMulticastInlineDelegate                           OnStartCritical;                                            // 0x0440   (0x0010)  
	bool                                               IsDeadDue;                                                  // 0x0450   (0x0001)  
	bool                                               StaminaRegeneartion;                                        // 0x0451   (0x0001)  
	unsigned char                                      UnknownData20_5[0x6];                                       // 0x0452   (0x0006)  MISSED
	double                                             StaminaRegeneartionDelay;                                   // 0x0458   (0x0008)  
	UFMODAudioComponent*                               Breath_Sound_Female;                                        // 0x0460   (0x0008)  
	FStatsStruct                                       PlayerGameStat;                                             // 0x0468   (0x0040)  
	FVector                                            PreviousLocation;                                           // 0x04A8   (0x0018)  
	double                                             PreviousHealth;                                             // 0x04C0   (0x0008)  
	double                                             TakedDamageAmount;                                          // 0x04C8   (0x0008)  
	FTimerHandle                                       TimerHungerThirstZero;                                      // 0x04D0   (0x0008)  
	double                                             HungerThirstDamage;                                         // 0x04D8   (0x0008)  
	double                                             FallingFor2Seconds;                                         // 0x04E0   (0x0008)  
	float                                              HungerFrequency;                                            // 0x04E8   (0x0004)  
	float                                              ThirstFrequency;                                            // 0x04EC   (0x0004)  
	FTimerHandle                                       HungerTimer;                                                // 0x04F0   (0x0008)  
	FTimerHandle                                       ThirstTimer;                                                // 0x04F8   (0x0008)  
	FMulticastInlineDelegate                           OnThirstUpdate;                                             // 0x0500   (0x0010)  
	FMulticastInlineDelegate                           OnHungerUpdate;                                             // 0x0510   (0x0010)  
	FMulticastInlineDelegate                           StatUpd;                                                    // 0x0520   (0x0010)  
	double                                             StaminaTrainLimit;                                          // 0x0530   (0x0008)  
	double                                             TrainStaminaValue;                                          // 0x0538   (0x0008)  
	double                                             PistolRSMulti;                                              // 0x0540   (0x0008)  
	double                                             ReloadSpeedMultiplierAdd;                                   // 0x0548   (0x0008)  
	TMap<TEnumAsByte, int32_t>                         TrainCounter;                                               // 0x0550   (0x0050)  
	double                                             LockpickMastery;                                            // 0x05A0   (0x0008)  
	bool                                               isHeavyBleeding;                                            // 0x05A8   (0x0001)  
	unsigned char                                      UnknownData21_5[0x7];                                       // 0x05A9   (0x0007)  MISSED
	double                                             StaminaNegativeEffectMultiplier;                            // 0x05B0   (0x0008)  
	double                                             LootSpeedMultiplier;                                        // 0x05B8   (0x0008)  
	double                                             HealAmountCount;                                            // 0x05C0   (0x0008)  
	double                                             HealSpeedMultiply;                                          // 0x05C8   (0x0008)  
	double                                             ReviveSpeedMultiply;                                        // 0x05D0   (0x0008)  
	double                                             UsableDiscountMultiply;                                     // 0x05D8   (0x0008)  
	double                                             ItemDiscountMultiply;                                       // 0x05E0   (0x0008)  
	double                                             PistolRC;                                                   // 0x05E8   (0x0008)  
	double                                             CarSteal;                                                   // 0x05F0   (0x0008)  
	double                                             CarRepair;                                                  // 0x05F8   (0x0008)  
	double                                             CarRefill;                                                  // 0x0600   (0x0008)  
	TEnumAsByte<E_HouseType>                           Where_Am_I_;                                                // 0x0608   (0x0001)  
	unsigned char                                      UnknownData22_5[0x7];                                       // 0x0609   (0x0007)  MISSED
	FTimerHandle                                       HungerRegenTimer;                                           // 0x0610   (0x0008)  
	FTimerHandle                                       ThirstRegenTimer;                                           // 0x0618   (0x0008)  
	FTimerHandle                                       Regen_Timer;                                                // 0x0620   (0x0008)  
	FTimerHandle                                       NegateTimer;                                                // 0x0628   (0x0008)  
	int32_t                                            LockpickCount;                                              // 0x0630   (0x0004)  
	unsigned char                                      UnknownData23_5[0x4];                                       // 0x0634   (0x0004)  MISSED
	FMulticastInlineDelegate                           PerkActivate;                                               // 0x0638   (0x0010)  
	double                                             MedicAmount;                                                // 0x0648   (0x0008)  
	double                                             MedicSpeed;                                                 // 0x0650   (0x0008)  
	double                                             BuffDuration;                                               // 0x0658   (0x0008)  
	double                                             ThirstPerk;                                                 // 0x0660   (0x0008)  
	double                                             HungerPerk;                                                 // 0x0668   (0x0008)  
	double                                             HoldBreath;                                                 // 0x0670   (0x0008)  
	double                                             WeaponSwitch;                                               // 0x0678   (0x0008)  
	double                                             CarbineRS;                                                  // 0x0680   (0x0008)  
	double                                             ShotgunRS;                                                  // 0x0688   (0x0008)  
	double                                             SubmachineRS;                                               // 0x0690   (0x0008)  
	double                                             AssaultRS;                                                  // 0x0698   (0x0008)  
	double                                             HandgunRS;                                                  // 0x06A0   (0x0008)  
	double                                             WeaponEndurance;                                            // 0x06A8   (0x0008)  
	double                                             ArmorEndurance;                                             // 0x06B0   (0x0008)  
	double                                             CraftDiscount;                                              // 0x06B8   (0x0008)  
	double                                             RepairDiscount;                                             // 0x06C0   (0x0008)  
	double                                             WeightPerk;                                                 // 0x06C8   (0x0008)  
	double                                             LootSpeedPerk;                                              // 0x06D0   (0x0008)  
	double                                             StaminaPerk;                                                // 0x06D8   (0x0008)  
	double                                             InventorySlot;                                              // 0x06E0   (0x0008)  
	double                                             SprintSpeed;                                                // 0x06E8   (0x0008)  
	double                                             FriendlyFire;                                               // 0x06F0   (0x0008)  
	double                                             StaminaDrain;                                               // 0x06F8   (0x0008)  
	double                                             NotAffectedWeightMax;                                       // 0x0700   (0x0008)  
	double                                             WeightMaxMultiplier;                                        // 0x0708   (0x0008)  
	bool                                               AdrenalineActive;                                           // 0x0710   (0x0001)  
	unsigned char                                      UnknownData24_5[0x7];                                       // 0x0711   (0x0007)  MISSED
	FMulticastInlineDelegate                           OnStatTrainChanged;                                         // 0x0718   (0x0010)  
	TMap<TEnumAsByte, int32_t>                         TrainCounterMax;                                            // 0x0728   (0x0050)  
	FMulticastInlineDelegate                           PlayerStatSave;                                             // 0x0778   (0x0010)  
	FString                                            StatSaveString;                                             // 0x0788   (0x0010)  
	TArray<TEnumAsByte>                                StatSaveEnums;                                              // 0x0798   (0x0010)  
	double                                             RegenAmount;                                                // 0x07A8   (0x0008)  
	double                                             SwimmingTime;                                               // 0x07B0   (0x0008)  
	FTimerHandle                                       SwimmingDamageTimer;                                        // 0x07B8   (0x0008)  
	FMulticastInlineDelegate                           PlayerTrainStatSave;                                        // 0x07C0   (0x0010)  
	double                                             AssaultRSMulti;                                             // 0x07D0   (0x0008)  
	double                                             ShotgunRSMulti;                                             // 0x07D8   (0x0008)  
	double                                             CarbineRSMulti;                                             // 0x07E0   (0x0008)  
	double                                             AssaultRC;                                                  // 0x07E8   (0x0008)  
	double                                             ShotgunRC;                                                  // 0x07F0   (0x0008)  
	double                                             CarbineRC;                                                  // 0x07F8   (0x0008)  
	TEnumAsByte<E_TrainStatType>                       Stat_Train_Type;                                            // 0x0800   (0x0001)  
	unsigned char                                      UnknownData25_5[0x7];                                       // 0x0801   (0x0007)  MISSED
	FString                                            PlayerTrainSave;                                            // 0x0808   (0x0010)  
	bool                                               NotifSkipper;                                               // 0x0818   (0x0001)  


	/// Functions
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.LoadTrainStatsValues
	void LoadTrainStatsValues();                                                                                             // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.SetTrainState
	void SetTrainState(TEnumAsByte<E_TrainStatType> Type, int32_t Value);                                                    // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.DecodeTrainStatSave
	void DecodeTrainStatSave(FString SavedString, TEnumAsByte<E_TrainStatType> Type, int32_t& Value);                        // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.LoadTrainStats
	void LoadTrainStats(FString StatString);                                                                                 // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.GetTrainStatString
	void GetTrainStatString(FString& TrainStatString);                                                                       // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.TickSwimmingDamage
	void TickSwimmingDamage();                                                                                               // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.DecodeStatSave
	double DecodeStatSave(TEnumAsByte<StatType> Enumerator);                                                                 // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.Health Regen
	void Health Regen();                                                                                                     // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.Initialize health regen
	void Initialize health regen();                                                                                          // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.ThirstRegenTick
	void ThirstRegenTick();                                                                                                  // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.Hunger Regen Tick
	void Hunger Regen Tick();                                                                                                // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.ChestEffect
	void ChestEffect(bool On?);                                                                                              // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.ThirstTick
	void ThirstTick();                                                                                                       // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.Hunger Tick
	void Hunger Tick();                                                                                                      // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.InitializeThirstTimer
	void InitializeThirstTimer();                                                                                            // [0x2407bf0] Private|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.InitializeHungerTimer
	void InitializeHungerTimer();                                                                                            // [0x2407bf0] Private|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.InitializeAllTimers
	void InitializeAllTimers();                                                                                              // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.CanUseStaminaAmount
	void CanUseStaminaAmount(double StaminaAmount, bool& Can);                                                               // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.StaminaDecreaseHitted
	void StaminaDecreaseHitted();                                                                                            // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.InfoAboutDamage
	void InfoAboutDamage(double RealDamage, bool isHeadshot, bool IsTargetDead);                                             // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.CheckDecreaseStat
	void CheckDecreaseStat(TEnumAsByte<StatType> StatType, double AddValue);                                                 // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.UseStaminaInAction
	void UseStaminaInAction(double Value);                                                                                   // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.CalculateEffects
	void CalculateEffects();                                                                                                 // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.GetStatDivide A by float
	double GetStatDivide A by float(TEnumAsByte<StatType> A, double float);                                                  // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.Calculate Stamina Decrease
	void Calculate Stamina Decrease(double ConsumptionStaminaWeight);                                                        // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.Change Weight MaxLowSpeed by Value
	void Change Weight MaxLowSpeed by Value(double Value);                                                                   // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.Change Weight Max by Value
	void Change Weight Max by Value(double Value);                                                                           // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.ChangeWeightByValue
	void ChangeWeightByValue(double Value);                                                                                  // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.AdrenalinHealthChange
	void AdrenalinHealthChange();                                                                                            // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.ChangeAdrenalinByValue
	void ChangeAdrenalinByValue(double Value);                                                                               // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.ChangeFakeHealth
	void ChangeFakeHealth(double Value);                                                                                     // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.SetBleedingDuration
	void SetBleedingDuration(double Duration);                                                                               // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.Change Intoxication by Value
	void Change Intoxication by Value(double Value);                                                                         // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.InitFakeHealth
	void InitFakeHealth();                                                                                                   // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.GetDamage
	void GetDamage(double Damage);                                                                                           // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.CalculateFakeHealth
	void CalculateFakeHealth();                                                                                              // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.GetBleedingChanceMultiplier
	void GetBleedingChanceMultiplier(double& Value);                                                                         // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.SetFullStats
	void SetFullStats();                                                                                                     // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.CalculateHealthMax
	void CalculateHealthMax(bool HungerZero);                                                                                // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.GetBleedingSpeed
	void GetBleedingSpeed(double& Value);                                                                                    // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.CalculateThirstDecrease
	void CalculateThirstDecrease();                                                                                          // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.CalculateHungerDecreaseSpeed
	void CalculateHungerDecreaseSpeed();                                                                                     // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.CalculateRegenerationSpeed
	void CalculateRegenerationSpeed();                                                                                       // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.GetStatDivide A by B
	double GetStatDivide A by B(TEnumAsByte<StatType> A, TEnumAsByte<StatType> B);                                           // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.DisableSounds
	void DisableSounds();                                                                                                    // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.CheckFullHeal
	void CheckFullHeal(double AddHealth);                                                                                    // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.GetCriticalHealthValue
	void GetCriticalHealthValue(double& CriticalHealthValue);                                                                // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.EffectPlayerSpeed
	void EffectPlayerSpeed(double CurrentHunger);                                                                            // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.CalculateMaxStamina
	void CalculateMaxStamina(double Effect, TEnumAsByte<StatType> Key);                                                      // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.GetCarIsolation
	double GetCarIsolation(ASurvivalPlayer_C* Player);                                                                       // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.GetStat
	void GetStat(TEnumAsByte<StatType> Key, double& Value);                                                                  // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.SetStat
	double SetStat(TEnumAsByte<StatType> Key, double Value);                                                                 // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.ChangeThirst
	void ChangeThirst(double Value);                                                                                         // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.CalculateThirst
	void CalculateThirst();                                                                                                  // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.ChangeCold
	void ChangeCold(double Value);                                                                                           // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.ChangeHunger
	void ChangeHunger(double Value);                                                                                         // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.UseStamina
	void UseStamina(bool Use);                                                                                               // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.CalculateStamina
	void CalculateStamina(bool Use);                                                                                         // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.Calculate Health
	void Calculate Health();                                                                                                 // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.CalculateCold
	void CalculateCold(double ColdSpeed);                                                                                    // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.CalculateHunger
	void CalculateHunger();                                                                                                  // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.DisplayStats
	void DisplayStats();                                                                                                     // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.ChangeHealth
	void ChangeHealth(double Value);                                                                                         // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.PerkStatUpdate
	void PerkStatUpdate(TEnumAsByte<PerkStatEnum> StatType, double Multiplier);                                              // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.StatTrainUpdate
	void StatTrainUpdate(TEnumAsByte<E_TrainStatType> StatType);                                                             // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.StaminaUpgrade
	void StaminaUpgrade(TEnumAsByte<E_TrainStatType> Stat);                                                                  // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.RS
	void RS(TEnumAsByte<E_TrainStatType> Stat);                                                                              // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.StatCounterUpd
	void StatCounterUpd(TEnumAsByte<E_TrainStatType> Stat, int32_t Count);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.Lockpick
	void Lockpick(TEnumAsByte<E_TrainStatType> Stat);                                                                        // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.Immune
	void Immune(TEnumAsByte<E_TrainStatType> Stat);                                                                          // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.Weight
	void Weight(TEnumAsByte<E_TrainStatType> Stat);                                                                          // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.LootSpeed
	void LootSpeed(TEnumAsByte<E_TrainStatType> Stat);                                                                       // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.HealedAmount
	void HealedAmount(double HealAmount);                                                                                    // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.HealUpgrade
	void HealUpgrade(TEnumAsByte<E_TrainStatType> Stat);                                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.Revive
	void Revive(TEnumAsByte<E_TrainStatType> Stat);                                                                          // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.Discount
	void Discount(TEnumAsByte<E_TrainStatType> Stat);                                                                        // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.RC
	void RC(TEnumAsByte<E_TrainStatType> Stat);                                                                              // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.WheelRepair
	void WheelRepair(TEnumAsByte<E_TrainStatType> Stat);                                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.Refuel
	void Refuel(TEnumAsByte<E_TrainStatType> Stat);                                                                          // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.GTA
	void GTA(TEnumAsByte<E_TrainStatType> Stat);                                                                             // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.LockPickAmount
	void LockPickAmount();                                                                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.ReceiveTick
	void ReceiveTick(float DeltaSeconds);                                                                                    // [0x2407bf0] Event|Public|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.ReceiveBeginPlay
	void ReceiveBeginPlay();                                                                                                 // [0x2407bf0] Event|Public|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.StaminaHit
	void StaminaHit(double HitTime);                                                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.OnPlayerDie
	void OnPlayerDie();                                                                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.CalculateIntoxication
	void CalculateIntoxication();                                                                                            // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.ResetCheck
	void ResetCheck();                                                                                                       // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.CalculateAdrenalin
	void CalculateAdrenalin();                                                                                               // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.ResetCheckAdrenalin
	void ResetCheckAdrenalin();                                                                                              // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.CalculateEffectEvent
	void CalculateEffectEvent();                                                                                             // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.DamageHungerThirstZero
	void DamageHungerThirstZero();                                                                                           // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.ResetStaminaRegeneration
	void ResetStaminaRegeneration();                                                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.StatsCalculation
	void StatsCalculation();                                                                                                 // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.StopBleeding
	void StopBleeding();                                                                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.BreathSystemStats
	void BreathSystemStats();                                                                                                // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.ResetTimers
	void ResetTimers();                                                                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.NegateAllEffectsTimer
	void NegateAllEffectsTimer();                                                                                            // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.RemoveAllEffects
	void RemoveAllEffects();                                                                                                 // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.SaveMainStats
	void SaveMainStats();                                                                                                    // [0x2407bf0] Net|NetClient|BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.LoadMainStats
	void LoadMainStats();                                                                                                    // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.SetStatSaveStringLocal
	void SetStatSaveStringLocal(FString StatSaveString);                                                                     // [0x2407bf0] Net|NetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.SwimmingDamage
	void SwimmingDamage();                                                                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.OnDeathEvent
	void OnDeathEvent();                                                                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.SaveTrainStats
	void SaveTrainStats();                                                                                                   // [0x2407bf0] Net|NetClient|BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.SaveTrainStats_Server
	void SaveTrainStats_Server(FString Stats);                                                                               // [0x2407bf0] Net|NetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.LoadTrainStats_Server
	void LoadTrainStats_Server(FString StatsString);                                                                         // [0x2407bf0] Net|NetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.LoadTrainStats_Client
	void LoadTrainStats_Client(FString StatsString);                                                                         // [0x2407bf0] Net|NetClient|BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.sTakedDamage
	void sTakedDamage(ASurvivalPlayer_C* Target, double Damage, bool DontAnimate, bool EffectDamage, bool HungerDamage);     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.ExecuteUbergraph_BPC_PlayerStatsComponent
	void ExecuteUbergraph_BPC_PlayerStatsComponent(int32_t EntryPoint);                                                      // [0x2407bf0] Final|HasDefaults    
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.PlayerTrainStatSave__DelegateSignature
	void PlayerTrainStatSave__DelegateSignature(FString TrainStat);                                                          // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.PlayerStatSave__DelegateSignature
	void PlayerStatSave__DelegateSignature(FString HpHuThAd);                                                                // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.OnStatTrainChanged__DelegateSignature
	void OnStatTrainChanged__DelegateSignature(TEnumAsByte<E_TrainStatType> Stat);                                           // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.PerkActivate__DelegateSignature
	void PerkActivate__DelegateSignature(TEnumAsByte<PerkStatEnum> StatType, double Multiplier);                             // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.StatUpd__DelegateSignature
	void StatUpd__DelegateSignature(TEnumAsByte<E_TrainStatType> StatType);                                                  // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.OnHungerUpdate__DelegateSignature
	void OnHungerUpdate__DelegateSignature(double HungerLevel, double CriticalHungerLevel);                                  // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.OnThirstUpdate__DelegateSignature
	void OnThirstUpdate__DelegateSignature(double ThirstLevel, double CriticalThirstLevel);                                  // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.OnStartCritical__DelegateSignature
	void OnStartCritical__DelegateSignature(bool NewParam);                                                                  // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.OnStatChange__DelegateSignature
	void OnStatChange__DelegateSignature(TEnumAsByte<StatType> StatKey);                                                     // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.OnHPChange__DelegateSignature
	void OnHPChange__DelegateSignature();                                                                                    // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.CriticalIntoxication__DelegateSignature
	void CriticalIntoxication__DelegateSignature();                                                                          // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.SevereIntoxication__DelegateSignature
	void SevereIntoxication__DelegateSignature();                                                                            // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.ModerateIntoxication__DelegateSignature
	void ModerateIntoxication__DelegateSignature(bool On);                                                                   // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.MildIntoxication__DelegateSignature
	void MildIntoxication__DelegateSignature(bool On);                                                                       // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.OnCrawling__DelegateSignature
	void OnCrawling__DelegateSignature(bool Crawling);                                                                       // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.OnStaminaCritical__DelegateSignature
	void OnStaminaCritical__DelegateSignature();                                                                             // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.ThirstEnd__DelegateSignature
	void ThirstEnd__DelegateSignature();                                                                                     // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.StaminaEnd__DelegateSignature
	void StaminaEnd__DelegateSignature();                                                                                    // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.HealthEnd__DelegateSignature
	void HealthEnd__DelegateSignature(ASurvivalPlayer_C* Player);                                                            // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.ColdEnd__DelegateSignature
	void ColdEnd__DelegateSignature();                                                                                       // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/Stats/PlayerStats/BPC_PlayerStatsComponent.BPC_PlayerStatsComponent_C.HungerEnd__DelegateSignature
	void HungerEnd__DelegateSignature();                                                                                     // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

