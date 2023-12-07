
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package FX.

/// Struct /Game/FX/CarHit.CarHit
/// Size: 0x0038 (0x000000 - 0x000038)
struct FCarHit
{ 
	TEnumAsByte<EPhysicalSurface>                      Surface_2_21E3B5554E49E8B72234638B7035EE31;                 // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	TWeakObjectPtr<UParticleSystem*>                   Particle_6_15330AD04C02703F394C74ABF543A4E9;                // 0x0008   (0x0030)  
};

/// Class /Game/FX/ZombieCarHit.ZombieCarHit_C
/// Size: 0x0040 (0x000280 - 0x0002C0)
class UZombieCarHit_C : public UUserWidget : UUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0280   (0x0008)  
	UWidgetAnimation*                                  NewAnimation;                                               // 0x0288   (0x0008)  
	UWidgetAnimation*                                  NewAnimation;                                               // 0x0290   (0x0008)  
	UWidgetAnimation*                                  NewAnimation;                                               // 0x0298   (0x0008)  
	UImage*                                            Image;                                                      // 0x02A0   (0x0008)  
	UImage*                                            Image;                                                      // 0x02A8   (0x0008)  
	UImage*                                            Image;                                                      // 0x02B0   (0x0008)  
	bool                                               GetingDamage;                                               // 0x02B8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x02B9   (0x0003)  MISSED
	int32_t                                            Index;                                                      // 0x02BC   (0x0004)  


	/// Functions
	// Function /Game/FX/ZombieCarHit.ZombieCarHit_C.Get
	void Get();                                                                                                              // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/FX/ZombieCarHit.ZombieCarHit_C.ExecuteUbergraph_ZombieCarHit
	void ExecuteUbergraph_ZombieCarHit(int32_t EntryPoint);                                                                  // [0x2407bf0] Final                
};

/// Class /Game/FX/W_CarSnowCamera.W_CarSnowCamera_C
/// Size: 0x0030 (0x000280 - 0x0002B0)
class UW_CarSnowCamera_C : public UUserWidget : UUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0280   (0x0008)  
	UWidgetAnimation*                                  Disappear;                                                  // 0x0288   (0x0008)  
	UWidgetAnimation*                                  NewAnimation;                                               // 0x0290   (0x0008)  
	UImage*                                            Image_Snow;                                                 // 0x0298   (0x0008)  
	AActor*                                            Vehicle;                                                    // 0x02A0   (0x0008)  
	double                                             Opacity;                                                    // 0x02A8   (0x0008)  


	/// Functions
	// Function /Game/FX/W_CarSnowCamera.W_CarSnowCamera_C.Appear
	void Appear();                                                                                                           // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/FX/W_CarSnowCamera.W_CarSnowCamera_C.EDisappear
	void EDisappear();                                                                                                       // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/FX/W_CarSnowCamera.W_CarSnowCamera_C.SetOpacity
	void SetOpacity(double InOpacity);                                                                                       // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/FX/W_CarSnowCamera.W_CarSnowCamera_C.Tick
	void Tick(FGeometry MyGeometry, float InDeltaTime);                                                                      // [0x2407bf0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/FX/W_CarSnowCamera.W_CarSnowCamera_C.ExecuteUbergraph_W_CarSnowCamera
	void ExecuteUbergraph_W_CarSnowCamera(int32_t EntryPoint);                                                               // [0x2407bf0] Final|HasDefaults    
};

/// Class /Game/FX/UIW_Damage.UIW_Damage_C
/// Size: 0x0088 (0x000280 - 0x000308)
class UUIW_Damage_C : public UUserWidget : UUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0280   (0x0008)  
	UWidgetAnimation*                                  Damage3Animation_Tutorial;                                  // 0x0288   (0x0008)  
	UWidgetAnimation*                                  Damage2Animation_Tutorial;                                  // 0x0290   (0x0008)  
	UWidgetAnimation*                                  Damage1Animation_Tutorial;                                  // 0x0298   (0x0008)  
	UWidgetAnimation*                                  PingPong;                                                   // 0x02A0   (0x0008)  
	UWidgetAnimation*                                  Damage3Animation;                                           // 0x02A8   (0x0008)  
	UWidgetAnimation*                                  Damage2Animation;                                           // 0x02B0   (0x0008)  
	UWidgetAnimation*                                  Damage1Animation;                                           // 0x02B8   (0x0008)  
	UImage*                                            DamageImage1;                                               // 0x02C0   (0x0008)  
	UImage*                                            DamageImage2;                                               // 0x02C8   (0x0008)  
	UImage*                                            DamageImage3;                                               // 0x02D0   (0x0008)  
	int32_t                                            LastUsedRandom;                                             // 0x02D8   (0x0004)  
	int32_t                                            GeneratedRandom;                                            // 0x02DC   (0x0004)  
	double                                             LastCriticalValue;                                          // 0x02E0   (0x0008)  
	bool                                               IsBleed;                                                    // 0x02E8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x02E9   (0x0007)  MISSED
	double                                             BleedCriticalValue;                                         // 0x02F0   (0x0008)  
	bool                                               Image1Active;                                               // 0x02F8   (0x0001)  
	bool                                               Image2Active;                                               // 0x02F9   (0x0001)  
	bool                                               Image3Active;                                               // 0x02FA   (0x0001)  
	bool                                               Pause;                                                      // 0x02FB   (0x0001)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x02FC   (0x0004)  MISSED
	UUMGSequencePlayer*                                BleenAnimation;                                             // 0x0300   (0x0008)  


	/// Functions
	// Function /Game/FX/UIW_Damage.UIW_Damage_C.SequenceEvent__ENTRYPOINTUIW_Damage
	void SequenceEvent__ENTRYPOINTUIW_Damage();                                                                              // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/FX/UIW_Damage.UIW_Damage_C.SequenceEvent__ENTRYPOINTUIW_Damage
	void SequenceEvent__ENTRYPOINTUIW_Damage();                                                                              // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/FX/UIW_Damage.UIW_Damage_C.SequenceEvent__ENTRYPOINTUIW_Damage
	void SequenceEvent__ENTRYPOINTUIW_Damage();                                                                              // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/FX/UIW_Damage.UIW_Damage_C.Animation3End
	void Animation3End();                                                                                                    // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/FX/UIW_Damage.UIW_Damage_C.Animation2End
	void Animation2End();                                                                                                    // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/FX/UIW_Damage.UIW_Damage_C.Animation1End
	void Animation1End();                                                                                                    // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/FX/UIW_Damage.UIW_Damage_C.GetBleed
	void GetBleed();                                                                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/FX/UIW_Damage.UIW_Damage_C.BleedRemoved
	void BleedRemoved();                                                                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/FX/UIW_Damage.UIW_Damage_C.Initialize
	void Initialize(ASurvivalPlayer_C* Player);                                                                              // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/FX/UIW_Damage.UIW_Damage_C.StopBleedingEffect
	void StopBleedingEffect();                                                                                               // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/FX/UIW_Damage.UIW_Damage_C.RefreshBleedingEffect
	void RefreshBleedingEffect();                                                                                            // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/FX/UIW_Damage.UIW_Damage_C.GetDamageWidget
	void GetDamageWidget();                                                                                                  // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/FX/UIW_Damage.UIW_Damage_C.SetBleedAnim
	void SetBleedAnim();                                                                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/FX/UIW_Damage.UIW_Damage_C.StopBleedAnim
	void StopBleedAnim();                                                                                                    // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/FX/UIW_Damage.UIW_Damage_C.HealthChange
	void HealthChange(double CriticalValue);                                                                                 // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/FX/UIW_Damage.UIW_Damage_C.TutorialDamage
	void TutorialDamage();                                                                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/FX/UIW_Damage.UIW_Damage_C.ExecuteUbergraph_UIW_Damage
	void ExecuteUbergraph_UIW_Damage(int32_t EntryPoint);                                                                    // [0x2407bf0] Final                
};

