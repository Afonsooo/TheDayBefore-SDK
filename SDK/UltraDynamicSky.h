
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package UltraDynamicSky.

/// Class /Game/UltraDynamicSky/Blueprints/Weather_Effects/Weather_Effects_Interface.Weather_Effects_Interface_C
/// Size: 0x0000 (0x000028 - 0x000028)
class UWeather_Effects_Interface_C : public UInterface : UInterface
{ 
public:
};

/// Class /Game/UltraDynamicSky/Blueprints/Weather_Effects/Weather_Override_Volume.Weather_Override_Volume_C
/// Size: 0x01E1 (0x000290 - 0x000471)
class AWeather_Override_Volume_C : public AActor : AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0290   (0x0008)  
	URandom_Weather_Variation_C*                       Random_Weather_Variation;                                   // 0x0298   (0x0008)  
	UBillboardComponent*                               billboard;                                                  // 0x02A0   (0x0008)  
	USplineComponent*                                  Spline;                                                     // 0x02A8   (0x0008)  
	TEnumAsByte<UDS_Weather_Override_Mode>             Mode;                                                       // 0x02B0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x02B1   (0x0007)  MISSED
	double                                             Transition_Width;                                           // 0x02B8   (0x0008)  
	int32_t                                            Priority;                                                   // 0x02C0   (0x0004)  
	TEnumAsByte<UDS_WeatherTypes>                      Weather_Type;                                               // 0x02C4   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x02C5   (0x0003)  MISSED
	double                                             Weather_Intensity;                                          // 0x02C8   (0x0008)  
	double                                             Cloud_Coverage;                                             // 0x02D0   (0x0008)  
	double                                             Wind_Intensity;                                             // 0x02D8   (0x0008)  
	double                                             Rain___Snow;                                                // 0x02E0   (0x0008)  
	bool                                               Override_Material_Effects;                                  // 0x02E8   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x02E9   (0x0007)  MISSED
	double                                             Material_Snow;                                              // 0x02F0   (0x0008)  
	double                                             Material_Wetness;                                           // 0x02F8   (0x0008)  
	double                                             Scaled_Transition_Width;                                    // 0x0300   (0x0008)  
	AUltra_Dynamic_Weather_C*                          UDW;                                                        // 0x0308   (0x0008)  
	TMap<TEnumAsByte, double>                          Weather_Type_Probabilities__Summer_;                        // 0x0310   (0x0050)  
	TMap<TEnumAsByte, double>                          Weather_Type_Probabilities__Autumn_;                        // 0x0360   (0x0050)  
	TMap<TEnumAsByte, double>                          Weather_Type_Probabilities__Winter_;                        // 0x03B0   (0x0050)  
	TMap<TEnumAsByte, double>                          Weather_Type_Probabilities__Spring_;                        // 0x0400   (0x0050)  
	double                                             Total_Sphere_Bounds;                                        // 0x0450   (0x0008)  
	FVector                                            Spline_Bounds_Center;                                       // 0x0458   (0x0018)  
	bool                                               Show_Weather_Label_in_Editor;                               // 0x0470   (0x0001)  


	/// Functions
	// Function /Game/UltraDynamicSky/Blueprints/Weather_Effects/Weather_Override_Volume.Weather_Override_Volume_C.Calculate Spline Bounds
	void Calculate Spline Bounds();                                                                                          // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UltraDynamicSky/Blueprints/Weather_Effects/Weather_Override_Volume.Weather_Override_Volume_C.UserConstructionScript
	void UserConstructionScript();                                                                                           // [0x2407bf0] Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UltraDynamicSky/Blueprints/Weather_Effects/Weather_Override_Volume.Weather_Override_Volume_C.ReceiveBeginPlay
	void ReceiveBeginPlay();                                                                                                 // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/UltraDynamicSky/Blueprints/Weather_Effects/Weather_Override_Volume.Weather_Override_Volume_C.ReceiveTick
	void ReceiveTick(float DeltaSeconds);                                                                                    // [0x2407bf0] Event|Public|BlueprintEvent 
	// Function /Game/UltraDynamicSky/Blueprints/Weather_Effects/Weather_Override_Volume.Weather_Override_Volume_C.ReceiveDestroyed
	void ReceiveDestroyed();                                                                                                 // [0x2407bf0] Event|Public|BlueprintEvent 
	// Function /Game/UltraDynamicSky/Blueprints/Weather_Effects/Weather_Override_Volume.Weather_Override_Volume_C.ExecuteUbergraph_Weather_Override_Volume
	void ExecuteUbergraph_Weather_Override_Volume(int32_t EntryPoint);                                                       // [0x2407bf0] Final                
};

/// Class /Game/UltraDynamicSky/Blueprints/Weather_Effects/System/Random_Weather_Variation.Random_Weather_Variation_C
/// Size: 0x01C8 (0x0000A0 - 0x000268)
class URandom_Weather_Variation_C : public UActorComponent : UActorComponent
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x00A0   (0x0008)  
	AUltra_Dynamic_Weather_C*                          UDW;                                                        // 0x00A8   (0x0008)  
	double                                             Random_Weather_Intensity;                                   // 0x00B0   (0x0008)  
	double                                             Random_Cloud_Coverage;                                      // 0x00B8   (0x0008)  
	double                                             Random_Rain___Snow;                                         // 0x00C0   (0x0008)  
	double                                             Random_Wind_Intensity;                                      // 0x00C8   (0x0008)  
	double                                             Random_Material_Snow;                                       // 0x00D0   (0x0008)  
	double                                             Random_Material_Wetness;                                    // 0x00D8   (0x0008)  
	TEnumAsByte<UDS_WeatherTypes>                      Current_Random_Weather_Type;                                // 0x00E0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x00E1   (0x0007)  MISSED
	TMap<TEnumAsByte, double>                          Weather_Type_Probabilities__Summer_;                        // 0x00E8   (0x0050)  
	TMap<TEnumAsByte, double>                          Weather_Type_Probabilities__Autumn_;                        // 0x0138   (0x0050)  
	TMap<TEnumAsByte, double>                          Weather_Type_Probabilities__Winter_;                        // 0x0188   (0x0050)  
	TMap<TEnumAsByte, double>                          Weather_Type_Probabilities__Spring_;                        // 0x01D8   (0x0050)  
	double                                             Current_Lerp_Alpha;                                         // 0x0228   (0x0008)  
	double                                             Current_Timer_Length;                                       // 0x0230   (0x0008)  
	double                                             Old_Weather_Intensity;                                      // 0x0238   (0x0008)  
	double                                             Old_Cloud_Coverage;                                         // 0x0240   (0x0008)  
	double                                             Old_Rain___Snow;                                            // 0x0248   (0x0008)  
	double                                             Old_Wind_Intensity;                                         // 0x0250   (0x0008)  
	double                                             Old_Material_Snow;                                          // 0x0258   (0x0008)  
	double                                             Old_Material_Wetness;                                       // 0x0260   (0x0008)  


	/// Functions
	// Function /Game/UltraDynamicSky/Blueprints/Weather_Effects/System/Random_Weather_Variation.Random_Weather_Variation_C.Select New Random Weather Type
	void Select New Random Weather Type(bool Filter Probability List);                                                       // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UltraDynamicSky/Blueprints/Weather_Effects/System/Random_Weather_Variation.Random_Weather_Variation_C.Increment Random Weather
	void Increment Random Weather();                                                                                         // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UltraDynamicSky/Blueprints/Weather_Effects/System/Random_Weather_Variation.Random_Weather_Variation_C.Initialize
	void Initialize(AUltra_Dynamic_Weather_C* UDW, TMap<TEnumAsByte, double> Summer Probabilities, TMap<TEnumAsByte, double> Autumn Probabilities, TMap<TEnumAsByte, double> Winter Probabilities, TMap<TEnumAsByte, double> Spring Probabilities, bool Start with Random Type); // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/UltraDynamicSky/Blueprints/Weather_Effects/System/Random_Weather_Variation.Random_Weather_Variation_C.ReceiveTick
	void ReceiveTick(float DeltaSeconds);                                                                                    // [0x2407bf0] Event|Public|BlueprintEvent 
	// Function /Game/UltraDynamicSky/Blueprints/Weather_Effects/System/Random_Weather_Variation.Random_Weather_Variation_C.Start Timer to Change Weather Type
	void Start Timer to Change Weather Type();                                                                               // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/UltraDynamicSky/Blueprints/Weather_Effects/System/Random_Weather_Variation.Random_Weather_Variation_C.Reset Timer
	void Reset Timer();                                                                                                      // [0x2407bf0] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/UltraDynamicSky/Blueprints/Weather_Effects/System/Random_Weather_Variation.Random_Weather_Variation_C.Update Old Variables
	void Update Old Variables();                                                                                             // [0x2407bf0] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/UltraDynamicSky/Blueprints/Weather_Effects/System/Random_Weather_Variation.Random_Weather_Variation_C.ExecuteUbergraph_Random_Weather_Variation
	void ExecuteUbergraph_Random_Weather_Variation(int32_t EntryPoint);                                                      // [0x2407bf0] Final|HasDefaults    
};

/// Class /Game/UltraDynamicSky/Blueprints/Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C
/// Size: 0x0A21 (0x000290 - 0x000CB1)
class AUltra_Dynamic_Weather_C : public AActor : AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0290   (0x0008)  
	UPostProcessComponent*                             Post_Process_Wind_Fog;                                      // 0x0298   (0x0008)  
	URandom_Weather_Variation_C*                       Random_Weather_Variation;                                   // 0x02A0   (0x0008)  
	UAudioComponent*                                   Rain_Y_;                                                    // 0x02A8   (0x0008)  
	UAudioComponent*                                   Rain_Y_;                                                    // 0x02B0   (0x0008)  
	UAudioComponent*                                   Rain_X_;                                                    // 0x02B8   (0x0008)  
	UAudioComponent*                                   Rain_X_;                                                    // 0x02C0   (0x0008)  
	UAudioComponent*                                   Wind_Y_;                                                    // 0x02C8   (0x0008)  
	UAudioComponent*                                   Wind_Y_;                                                    // 0x02D0   (0x0008)  
	UAudioComponent*                                   Wind_X_;                                                    // 0x02D8   (0x0008)  
	UAudioComponent*                                   Wind_Whistling;                                             // 0x02E0   (0x0008)  
	UAudioComponent*                                   DistantThunder_Cue;                                         // 0x02E8   (0x0008)  
	UAudioComponent*                                   Wind_X_;                                                    // 0x02F0   (0x0008)  
	UNiagaraComponent*                                 Obscured_Lightning;                                         // 0x02F8   (0x0008)  
	UDirectionalLightComponent*                        Lightning_Light;                                            // 0x0300   (0x0008)  
	UBillboardComponent*                               Root;                                                       // 0x0308   (0x0008)  
	UNiagaraComponent*                                 Rain_and_Snow;                                              // 0x0310   (0x0008)  
	AUltra_Dynamic_Sky_C*                              UltraDynamicSky;                                            // 0x0318   (0x0008)  
	TEnumAsByte<UDS_WeatherTypes>                      Weather_Type;                                               // 0x0320   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0321   (0x0007)  MISSED
	double                                             Weather_Intensity;                                          // 0x0328   (0x0008)  
	double                                             Cloud_Coverage;                                             // 0x0330   (0x0008)  
	double                                             Rain___Snow;                                                // 0x0338   (0x0008)  
	double                                             Wind_Intensity;                                             // 0x0340   (0x0008)  
	double                                             Wind_Direction;                                             // 0x0348   (0x0008)  
	double                                             Lerp_to_New_Settings;                                       // 0x0350   (0x0008)  
	double                                             Old_Weather_Intensity;                                      // 0x0358   (0x0008)  
	double                                             Old_Cloud_Coverage;                                         // 0x0360   (0x0008)  
	double                                             Old_Rain___Snow;                                            // 0x0368   (0x0008)  
	double                                             Old_Wind_Intensity;                                         // 0x0370   (0x0008)  
	double                                             Lerp_to_Static_Settings;                                    // 0x0378   (0x0008)  
	double                                             Current_Weather_Intensity;                                  // 0x0380   (0x0008)  
	double                                             Current_Cloud_Coverage;                                     // 0x0388   (0x0008)  
	double                                             Current_Rain___Snow;                                        // 0x0390   (0x0008)  
	double                                             Current_Wind_Intensity;                                     // 0x0398   (0x0008)  
	double                                             Transition_In_Time;                                         // 0x03A0   (0x0008)  
	double                                             Transition_Out_Time;                                        // 0x03A8   (0x0008)  
	double                                             Hold_Time;                                                  // 0x03B0   (0x0008)  
	int32_t                                            Transition_State;                                           // 0x03B8   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x03BC   (0x0004)  MISSED
	double                                             Timer;                                                      // 0x03C0   (0x0008)  
	bool                                               Enable_Rain_and_Snow_Particles;                             // 0x03C8   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x03C9   (0x0007)  MISSED
	double                                             Max_Particle_Spawn_Rate;                                    // 0x03D0   (0x0008)  
	bool                                               Particle_Collision_Enabled;                                 // 0x03D8   (0x0001)  
	unsigned char                                      UnknownData03_5[0x7];                                       // 0x03D9   (0x0007)  MISSED
	double                                             Camera_Forward_Spawn_Offset;                                // 0x03E0   (0x0008)  
	double                                             Ceiling_Check_Height;                                       // 0x03E8   (0x0008)  
	double                                             Spawn_Box_Height;                                           // 0x03F0   (0x0008)  
	double                                             Max_Spawn_Distance;                                         // 0x03F8   (0x0008)  
	double                                             Spawn_Distance_Distribution;                                // 0x0400   (0x0008)  
	double                                             Minimum_Particle_Distance;                                  // 0x0408   (0x0008)  
	double                                             Rain_Drops_Scale;                                           // 0x0410   (0x0008)  
	double                                             Snow_Flakes_Scale;                                          // 0x0418   (0x0008)  
	double                                             Splash_Particles_Scale;                                     // 0x0420   (0x0008)  
	double                                             Rain_Drops_Alpha;                                           // 0x0428   (0x0008)  
	double                                             Snow_Flakes_Alpha;                                          // 0x0430   (0x0008)  
	FLinearColor                                       Rain_Particle_Color_Multiplier;                             // 0x0438   (0x0010)  
	FLinearColor                                       Snow_Particle_Color_Multiplier;                             // 0x0448   (0x0010)  
	TEnumAsByte<ECollisionChannel>                     Rain___Snow_Particle_Collision_Channel;                     // 0x0458   (0x0001)  
	unsigned char                                      UnknownData04_5[0x7];                                       // 0x0459   (0x0007)  MISSED
	double                                             Splash_Frequency;                                           // 0x0460   (0x0008)  
	bool                                               Snow_Flakes_Stick_to_Surfaces;                              // 0x0468   (0x0001)  
	unsigned char                                      UnknownData05_5[0x7];                                       // 0x0469   (0x0007)  MISSED
	double                                             Current_Snow_Percentage;                                    // 0x0470   (0x0008)  
	FVector                                            Current_Lightning_Location;                                 // 0x0478   (0x0018)  
	bool                                               Spawn_Lightning_Flashes;                                    // 0x0490   (0x0001)  
	unsigned char                                      UnknownData06_5[0x7];                                       // 0x0491   (0x0007)  MISSED
	FVector                                            Current_Camera_Location;                                    // 0x0498   (0x0018)  
	double                                             Current_Lightning_Intensity;                                // 0x04B0   (0x0008)  
	double                                             Lightning_Flash_Interval__Min_;                             // 0x04B8   (0x0008)  
	double                                             Lightning_Flash_Interval__Max_;                             // 0x04C0   (0x0008)  
	double                                             Lightning_Flash_Timing_Randomization;                       // 0x04C8   (0x0008)  
	bool                                               Lightning_Flash_Light_Source;                               // 0x04D0   (0x0001)  
	unsigned char                                      UnknownData07_5[0x3];                                       // 0x04D1   (0x0003)  MISSED
	FLinearColor                                       Lightning_Flash_Light_Source_Color;                         // 0x04D4   (0x0010)  
	unsigned char                                      UnknownData08_5[0x4];                                       // 0x04E4   (0x0004)  MISSED
	double                                             Maximum_Lightning_Flash_Light_Intensity;                    // 0x04E8   (0x0008)  
	bool                                               Lightning_Flashes_Cast_Shadows;                             // 0x04F0   (0x0001)  
	bool                                               Lightning_Flashes_Cast_Light_Shaft_Bloom;                   // 0x04F1   (0x0001)  
	unsigned char                                      UnknownData09_5[0x6];                                       // 0x04F2   (0x0006)  MISSED
	double                                             Lightning_Flash_Light_Shaft_Intensity;                      // 0x04F8   (0x0008)  
	double                                             Lightning_Flash_Minimum_Distance;                           // 0x0500   (0x0008)  
	double                                             Lightning_Flash_Maximum_Distance;                           // 0x0508   (0x0008)  
	bool                                               Enable_Obscured_Lightning;                                  // 0x0510   (0x0001)  
	unsigned char                                      UnknownData10_5[0x7];                                       // 0x0511   (0x0007)  MISSED
	double                                             Obscured_Lightning_Spawn_Interval__Rain_;                   // 0x0518   (0x0008)  
	double                                             Obscured_Lightning_Spawn_Interval__Snow_;                   // 0x0520   (0x0008)  
	double                                             Lightning_Flash_Height;                                     // 0x0528   (0x0008)  
	bool                                               Spawn_Lightning_Flashes_During_Snow;                        // 0x0530   (0x0001)  
	bool                                               Enable_Fog_Particles;                                       // 0x0531   (0x0001)  
	unsigned char                                      UnknownData11_5[0x6];                                       // 0x0532   (0x0006)  MISSED
	double                                             Max_Fog_Particle_Percentage__Rain_;                         // 0x0538   (0x0008)  
	double                                             Max_Fog_Particle_Percentage__Snow_;                         // 0x0540   (0x0008)  
	double                                             Fog_Particle_Intensity__Rain_;                              // 0x0548   (0x0008)  
	double                                             Fog_Particle_Intensity__Snow_;                              // 0x0550   (0x0008)  
	double                                             Fog_Particles_Draw_Distance;                                // 0x0558   (0x0008)  
	AWindDirectionalSource*                            Wind_Directional_Source_Actor__for_SpeedTree_;              // 0x0560   (0x0008)  
	double                                             Material_Wetness;                                           // 0x0568   (0x0008)  
	double                                             Material_Snow_Coverage;                                     // 0x0570   (0x0008)  
	double                                             Current_Material_Wetness;                                   // 0x0578   (0x0008)  
	double                                             Current_Material_Snow_Coverage;                             // 0x0580   (0x0008)  
	bool                                               Simulate_Changing_Material_Effects_with_Weather;            // 0x0588   (0x0001)  
	unsigned char                                      UnknownData12_5[0x7];                                       // 0x0589   (0x0007)  MISSED
	double                                             Max_Material_Wetness;                                       // 0x0590   (0x0008)  
	double                                             Max_Material_Snow_Coverage;                                 // 0x0598   (0x0008)  
	double                                             Time_for_Materials_to_Get_Wet;                              // 0x05A0   (0x0008)  
	double                                             Time_for_Materials_to_Dry_Out;                              // 0x05A8   (0x0008)  
	double                                             Time_for_Materials_to_Gather_Snow;                          // 0x05B0   (0x0008)  
	double                                             Time_for_Snow_to_Melt;                                      // 0x05B8   (0x0008)  
	double                                             Snow_Delta;                                                 // 0x05C0   (0x0008)  
	double                                             Amount_of_Snow_to_Turn_to_Wetness_when_Melted;              // 0x05C8   (0x0008)  
	bool                                               Use_Random_Weather_Variation;                               // 0x05D0   (0x0001)  
	bool                                               Start_With_a_Random_Weather_Type;                           // 0x05D1   (0x0001)  
	TEnumAsByte<UDS_Season>                            Season;                                                     // 0x05D2   (0x0001)  
	unsigned char                                      UnknownData13_5[0x5];                                       // 0x05D3   (0x0005)  MISSED
	double                                             Weather_Type_Change_Minimum_Interval;                       // 0x05D8   (0x0008)  
	double                                             Weather_Type_Change_Maximum_Interval;                       // 0x05E0   (0x0008)  
	double                                             Transition_Length;                                          // 0x05E8   (0x0008)  
	TMap<TEnumAsByte, double>                          Weather_Type_Probabilities__Summer_;                        // 0x05F0   (0x0050)  
	TMap<TEnumAsByte, double>                          Weather_Type_Probabilities__Autumn_;                        // 0x0640   (0x0050)  
	TMap<TEnumAsByte, double>                          Weather_Type_Probabilities__Winter_;                        // 0x0690   (0x0050)  
	TMap<TEnumAsByte, double>                          Weather_Type_Probabilities__Spring_;                        // 0x06E0   (0x0050)  
	bool                                               Avoid_Extreme_Weather_Shifts;                               // 0x0730   (0x0001)  
	bool                                               Avoid_Repeating_Weather_Types;                              // 0x0731   (0x0001)  
	bool                                               Avoid_Changing_Directly_from_Snow_to_Rain__Or_Vice_Versa_;  // 0x0732   (0x0001)  
	bool                                               Use_Sound_Effects;                                          // 0x0733   (0x0001)  
	unsigned char                                      UnknownData14_5[0x4];                                       // 0x0734   (0x0004)  MISSED
	double                                             Rain_Volume;                                                // 0x0738   (0x0008)  
	UCurveFloat*                                       Rain_Fade_Curve;                                            // 0x0740   (0x0008)  
	double                                             Distant_Thunder_Volume;                                     // 0x0748   (0x0008)  
	double                                             Close_Thunder_Volume;                                       // 0x0750   (0x0008)  
	double                                             Wind_Volume;                                                // 0x0758   (0x0008)  
	double                                             Wind_Whistling_Volume;                                      // 0x0760   (0x0008)  
	double                                             Intended_Cloud_Speed;                                       // 0x0768   (0x0008)  
	double                                             Intended_Cloud_Coverage;                                    // 0x0770   (0x0008)  
	double                                             Intended_Cloud_Direction;                                   // 0x0778   (0x0008)  
	double                                             Cloud_Speed_Multiplier;                                     // 0x0780   (0x0008)  
	bool                                               Runtime;                                                    // 0x0788   (0x0001)  
	unsigned char                                      UnknownData15_5[0x7];                                       // 0x0789   (0x0007)  MISSED
	double                                             Fog_Particle_Camera_Offset;                                 // 0x0790   (0x0008)  
	double                                             Wind_Directional_Source_Intensity_Scale;                    // 0x0798   (0x0008)  
	double                                             Wind_Force_Scale;                                           // 0x07A0   (0x0008)  
	double                                             Lightning_Flash_Length;                                     // 0x07A8   (0x0008)  
	bool                                               Flashing_Lightning;                                         // 0x07B0   (0x0001)  
	unsigned char                                      UnknownData16_5[0x7];                                       // 0x07B1   (0x0007)  MISSED
	FTimerHandle                                       Lightning_Flash_Timer;                                      // 0x07B8   (0x0008)  
	UCurveFloat*                                       Lightning_Flash_Curve;                                      // 0x07C0   (0x0008)  
	TEnumAsByte<UDS_TemperatureType>                   Temperature_Scale;                                          // 0x07C8   (0x0001)  
	unsigned char                                      UnknownData17_5[0x7];                                       // 0x07C9   (0x0007)  MISSED
	double                                             Base_Summer_Temperature;                                    // 0x07D0   (0x0008)  
	double                                             Base_Autumn_Temperature;                                    // 0x07D8   (0x0008)  
	double                                             Base_Winter_Temperature;                                    // 0x07E0   (0x0008)  
	double                                             Base_Spring_Temerature;                                     // 0x07E8   (0x0008)  
	double                                             Nighttime_Factor;                                           // 0x07F0   (0x0008)  
	double                                             Overcast_Factor;                                            // 0x07F8   (0x0008)  
	double                                             Raining_Factor;                                             // 0x0800   (0x0008)  
	double                                             Morning_Evening_Factor;                                     // 0x0808   (0x0008)  
	double                                             Snowing_Factor;                                             // 0x0810   (0x0008)  
	double                                             Random_Factor;                                              // 0x0818   (0x0008)  
	double                                             Minimum_Valid_Temperature;                                  // 0x0820   (0x0008)  
	double                                             Maximum_Valid_Temperature;                                  // 0x0828   (0x0008)  
	double                                             Max_Cloud_Speed;                                            // 0x0830   (0x0008)  
	bool                                               Limit_Weather_Intensity_with_Cloud_Coverage;                // 0x0838   (0x0001)  
	unsigned char                                      UnknownData18_5[0x7];                                       // 0x0839   (0x0007)  MISSED
	double                                             Scale_Distant_Particles;                                    // 0x0840   (0x0008)  
	bool                                               Enable_Dynamic_Landscape_Weather_Effects;                   // 0x0848   (0x0001)  
	unsigned char                                      UnknownData19_5[0x7];                                       // 0x0849   (0x0007)  MISSED
	TArray<ALandscape*>                                Landscape_Actors;                                           // 0x0850   (0x0010)  
	TEnumAsByte<UDS_ControlPointMode>                  Control_Point_Location_Source;                              // 0x0860   (0x0001)  
	unsigned char                                      UnknownData20_5[0x7];                                       // 0x0861   (0x0007)  MISSED
	FVector                                            Custom_Control_Point_Location;                              // 0x0868   (0x0018)  
	double                                             Render_Target_Area_for_Dynamic_Snow;                        // 0x0880   (0x0008)  
	double                                             Render_Target_Area_for_Dynamic_Puddles;                     // 0x0888   (0x0008)  
	int32_t                                            Render_Target_Resolution;                                   // 0x0890   (0x0004)  
	unsigned char                                      UnknownData21_5[0x4];                                       // 0x0894   (0x0004)  MISSED
	double                                             Displacement_Input_Minimum_Level;                           // 0x0898   (0x0008)  
	double                                             Displacement_Input_Maximum_Level;                           // 0x08A0   (0x0008)  
	double                                             Displacement_Coverage_Factor__Snow_;                        // 0x08A8   (0x0008)  
	double                                             Displacement_Coverage_Factor__Puddles_;                     // 0x08B0   (0x0008)  
	bool                                               Apply_Dynamic_Trails_to_Snow;                               // 0x08B8   (0x0001)  
	unsigned char                                      UnknownData22_5[0x7];                                       // 0x08B9   (0x0007)  MISSED
	double                                             Snow_and_Puddle_Distribution_Erosion;                       // 0x08C0   (0x0008)  
	double                                             Snow_Depth;                                                 // 0x08C8   (0x0008)  
	double                                             Snow_Z_Normal_Cutoff;                                       // 0x08D0   (0x0008)  
	double                                             Snow_Z_Normal_Falloff;                                      // 0x08D8   (0x0008)  
	double                                             Snow_Texture_Scale;                                         // 0x08E0   (0x0008)  
	double                                             Snow_Compression_Brush_Spread;                              // 0x08E8   (0x0008)  
	double                                             Snow_Compression_Brush_Scatter;                             // 0x08F0   (0x0008)  
	double                                             Snow_Compression_Brush_Size_Scatter;                        // 0x08F8   (0x0008)  
	double                                             Snow_Compression_Fade_Speed_Idle;                           // 0x0900   (0x0008)  
	double                                             Snow_Compression_Fade_Speed_Snowy;                          // 0x0908   (0x0008)  
	double                                             Snow_Compression_Displacement_Radius;                       // 0x0910   (0x0008)  
	double                                             Snow_Compression_Displacement_Falloff;                      // 0x0918   (0x0008)  
	double                                             Snow_Disturbance_Height;                                    // 0x0920   (0x0008)  
	double                                             Snow_Render_Target_Distortion;                              // 0x0928   (0x0008)  
	double                                             Snow_Compression_Normal_Map_Intensity;                      // 0x0930   (0x0008)  
	double                                             Pixel_Normal_Snow_Buildup;                                  // 0x0938   (0x0008)  
	int32_t                                            Frames_Per_Update;                                          // 0x0940   (0x0004)  
	bool                                               Increasing_Material_Snow_Coverage;                          // 0x0944   (0x0001)  
	unsigned char                                      UnknownData23_5[0x3];                                       // 0x0945   (0x0003)  MISSED
	TArray<FVector>                                    DLWE_Brush_Locations_Buffer;                                // 0x0948   (0x0010)  
	UTextureRenderTarget2D*                            DLWE_NormalTarget;                                          // 0x0958   (0x0008)  
	UTextureRenderTarget2D*                            DLWE_MaskTarget;                                            // 0x0960   (0x0008)  
	FVector                                            Player_Pawn_Location;                                       // 0x0968   (0x0018)  
	FVector                                            Player_Camera_Location;                                     // 0x0980   (0x0018)  
	FVector                                            Control_Point_Location;                                     // 0x0998   (0x0018)  
	FVector                                            DLWE_RenderTarget_Center;                                   // 0x09B0   (0x0018)  
	FVector                                            DLWE_Recenter_Offset;                                       // 0x09C8   (0x0018)  
	int32_t                                            DLWE_Frame_Count;                                           // 0x09E0   (0x0004)  
	TEnumAsByte<UDS_DLWE_Mode>                         Current_DLWE_Mode;                                          // 0x09E4   (0x0001)  
	bool                                               Apply_Interaction_Ripples_to_Puddles;                       // 0x09E5   (0x0001)  
	unsigned char                                      UnknownData24_5[0x2];                                       // 0x09E6   (0x0002)  MISSED
	double                                             Puddles_Z_Normal_Cutoff;                                    // 0x09E8   (0x0008)  
	double                                             Puddles_Z_Normal_Falloff;                                   // 0x09F0   (0x0008)  
	double                                             Puddle_Coverage;                                            // 0x09F8   (0x0008)  
	double                                             Base_Wetness_when_Raining;                                  // 0x0A00   (0x0008)  
	double                                             Base_Wetness_when_Clear;                                    // 0x0A08   (0x0008)  
	double                                             Base_Wetness_Slope_Multiplier;                              // 0x0A10   (0x0008)  
	bool                                               Raindrop_Effect;                                            // 0x0A18   (0x0001)  
	unsigned char                                      UnknownData25_5[0x7];                                       // 0x0A19   (0x0007)  MISSED
	double                                             Puddle_Darkening;                                           // 0x0A20   (0x0008)  
	double                                             Puddle_Sharpness;                                           // 0x0A28   (0x0008)  
	double                                             Water_Roughness;                                            // 0x0A30   (0x0008)  
	double                                             Ripple_Spread;                                              // 0x0A38   (0x0008)  
	double                                             Ripple_Fade_Speed;                                          // 0x0A40   (0x0008)  
	double                                             Puddle_Normals_Intensity;                                   // 0x0A48   (0x0008)  
	double                                             Puddle_Refraction;                                          // 0x0A50   (0x0008)  
	double                                             Puddle_Render_Target_Distortion;                            // 0x0A58   (0x0008)  
	TArray<UTextureRenderTarget2D*>                    Render_Targets_to_Release_Next_Frame;                       // 0x0A60   (0x0010)  
	TArray<FVector2D>                                  Cloud_Reference_Array;                                      // 0x0A70   (0x0010)  
	TEnumAsByte<EObjectTypeQuery>                      Landscape_Object_Type;                                      // 0x0A80   (0x0001)  
	unsigned char                                      UnknownData26_5[0x7];                                       // 0x0A81   (0x0007)  MISSED
	TArray<UPhysicalMaterial*>                         Physical_Materials_which_disable_Snow_Sounds_and_Particles; // 0x0A88   (0x0010)  
	TArray<UPhysicalMaterial*>                         Physical_Materials_which_disable_Puddle_Sounds_and_Particles; // 0x0A98   (0x0010)  
	FVector2D                                          Variation_Clouds_Offset;                                    // 0x0AA8   (0x0010)  
	double                                             Large_Variation_Clouds_Scale;                               // 0x0AB8   (0x0008)  
	double                                             Small_Variation_Clouds_Scale;                               // 0x0AC0   (0x0008)  
	TArray<AWeather_Override_Volume_C*>                Weather_Override_Volumes;                                   // 0x0AC8   (0x0010)  
	double                                             Global_Material_Snow_Coverage;                              // 0x0AD8   (0x0008)  
	double                                             Global_Material_Wetness;                                    // 0x0AE0   (0x0008)  
	double                                             Global_Weather_Intensity;                                   // 0x0AE8   (0x0008)  
	double                                             Global_Cloud_Coverage;                                      // 0x0AF0   (0x0008)  
	double                                             Global_Rain___Snow;                                         // 0x0AF8   (0x0008)  
	double                                             Global_Wind_Intensity;                                      // 0x0B00   (0x0008)  
	double                                             Tiling_Ripples_Scale;                                       // 0x0B08   (0x0008)  
	double                                             Lightning_Flash_Minimum_Length;                             // 0x0B10   (0x0008)  
	double                                             Lightning_Flash_Maximum_Length;                             // 0x0B18   (0x0008)  
	bool                                               Use_Custom_Lightning_Location;                              // 0x0B20   (0x0001)  
	unsigned char                                      UnknownData27_5[0x7];                                       // 0x0B21   (0x0007)  MISSED
	FVector                                            Custom_Lightning_Location;                                  // 0x0B28   (0x0018)  
	bool                                               Using_Global_Weather_State;                                 // 0x0B40   (0x0001)  
	unsigned char                                      UnknownData28_5[0x7];                                       // 0x0B41   (0x0007)  MISSED
	double                                             Global_Snow_Percentage;                                     // 0x0B48   (0x0008)  
	bool                                               Resetting_Particle_Emitters;                                // 0x0B50   (0x0001)  
	unsigned char                                      UnknownData29_5[0x7];                                       // 0x0B51   (0x0007)  MISSED
	double                                             Current_Max_Interact_Distance;                              // 0x0B58   (0x0008)  
	bool                                               Mobile;                                                     // 0x0B60   (0x0001)  
	unsigned char                                      UnknownData30_5[0x7];                                       // 0x0B61   (0x0007)  MISSED
	double                                             Current_Lightning_Angle;                                    // 0x0B68   (0x0008)  
	AWeather_Override_Volume_C*                        Current_Weather_Override_Volume;                            // 0x0B70   (0x0008)  
	bool                                               Currently_in_a_Weather_Override_Volume;                     // 0x0B78   (0x0001)  
	unsigned char                                      UnknownData31_5[0x7];                                       // 0x0B79   (0x0007)  MISSED
	double                                             New_Cloud_Coverage;                                         // 0x0B80   (0x0008)  
	double                                             New_Weather_Intensity;                                      // 0x0B88   (0x0008)  
	double                                             New_Rain___Snow;                                            // 0x0B90   (0x0008)  
	double                                             New_Wind_Intensity;                                         // 0x0B98   (0x0008)  
	TArray<double>                                     DLWE_Brush_Size_Buffer;                                     // 0x0BA0   (0x0010)  
	TArray<UMaterialInstanceDynamic*>                  Ripple_Brushes;                                             // 0x0BB0   (0x0010)  
	TArray<double>                                     DLWE_Brush_Strength_Buffer;                                 // 0x0BC0   (0x0010)  
	bool                                               Use_Occlusion_to_Attenuate_Sounds_in_Interiors;             // 0x0BD0   (0x0001)  
	unsigned char                                      UnknownData32_5[0x7];                                       // 0x0BD1   (0x0007)  MISSED
	double                                             Max_Attenuation;                                            // 0x0BD8   (0x0008)  
	double                                             Min_LPF_Frequency;                                          // 0x0BE0   (0x0008)  
	double                                             Max_Interior_Occlusion_Distance;                            // 0x0BE8   (0x0008)  
	double                                             Sound_Occlusion_Update_Period;                              // 0x0BF0   (0x0008)  
	TArray<double>                                     Current_Sound_Occlusion_Profile;                            // 0x0BF8   (0x0010)  
	TArray<double>                                     Target_Sound_Occlusion_Profile;                             // 0x0C08   (0x0010)  
	TEnumAsByte<ETraceTypeQuery>                       Occlusion_Trace_Channel;                                    // 0x0C18   (0x0001)  
	bool                                               Enable_Post_Process_Wind_Fog;                               // 0x0C19   (0x0001)  
	unsigned char                                      UnknownData33_5[0x6];                                       // 0x0C1A   (0x0006)  MISSED
	UMaterialInstanceDynamic*                          Post_Process_Wind_Fog_MID;                                  // 0x0C20   (0x0008)  
	FVector                                            PPWF_Phase;                                                 // 0x0C28   (0x0018)  
	double                                             PPWF_Snow_Intensity;                                        // 0x0C40   (0x0008)  
	double                                             PPWF_Rain_Intensity;                                        // 0x0C48   (0x0008)  
	bool                                               Rain_Sounds_Active;                                         // 0x0C50   (0x0001)  
	bool                                               Wind_Sounds_Active;                                         // 0x0C51   (0x0001)  
	bool                                               Wind_Whistling_Sound_Active;                                // 0x0C52   (0x0001)  
	bool                                               Distant_Thunder_Sound_Active;                               // 0x0C53   (0x0001)  
	unsigned char                                      UnknownData34_5[0x4];                                       // 0x0C54   (0x0004)  MISSED
	TArray<UAudioComponent*>                           Rain_Sound_Components;                                      // 0x0C58   (0x0010)  
	TArray<UAudioComponent*>                           Wind_Sound_Components;                                      // 0x0C68   (0x0010)  
	double                                             PPWF_Fade_Distance;                                         // 0x0C78   (0x0008)  
	double                                             Time_Random_Offset;                                         // 0x0C80   (0x0008)  
	bool                                               Replicate_Lightning_Direction;                              // 0x0C88   (0x0001)  
	bool                                               Enable_Wind_Direction_Variation;                            // 0x0C89   (0x0001)  
	unsigned char                                      UnknownData35_5[0x6];                                       // 0x0C8A   (0x0006)  MISSED
	double                                             Maximum_Wind_Direction_Variation;                           // 0x0C90   (0x0008)  
	double                                             Current_Wind_Direction;                                     // 0x0C98   (0x0008)  
	double                                             Variation_Speed;                                            // 0x0CA0   (0x0008)  
	double                                             Wind_Variation_Time;                                        // 0x0CA8   (0x0008)  
	bool                                               Run_By_Counterpart;                                         // 0x0CB0   (0x0001)  


	/// Functions
	// Function /Game/UltraDynamicSky/Blueprints/Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Get Intended Cloud Direction
	void Get Intended Cloud Direction(double& Intended Cloud Direction);                                                     // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/UltraDynamicSky/Blueprints/Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Get Intended Cloud Speed
	void Get Intended Cloud Speed(double& Intended Cloud Speed);                                                             // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/UltraDynamicSky/Blueprints/Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Wind Direction
	void Update Wind Direction();                                                                                            // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UltraDynamicSky/Blueprints/Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Audio Component Activity
	void Update Audio Component Activity(UAudioComponent* Tested Component, TArray<UAudioComponent*>& Affected Components, double Current Sound Intensity, double Start Randomization); // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/UltraDynamicSky/Blueprints/Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Enabled Sound Components
	void Update Enabled Sound Components();                                                                                  // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UltraDynamicSky/Blueprints/Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Post Process Wind Fog
	void Update Post Process Wind Fog();                                                                                     // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UltraDynamicSky/Blueprints/Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Set up Post Process Wind Fog
	void Set up Post Process Wind Fog();                                                                                     // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UltraDynamicSky/Blueprints/Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Current Occlusion Profile
	void Update Current Occlusion Profile();                                                                                 // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UltraDynamicSky/Blueprints/Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Target Occlusion Profile
	void Update Target Occlusion Profile();                                                                                  // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UltraDynamicSky/Blueprints/Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update New Settings
	void Update New Settings();                                                                                              // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UltraDynamicSky/Blueprints/Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Current Lightning Period and Status
	void Current Lightning Period and Status(double Weather Intensity, double Cloud Coverage, double Snow Percentage, double& Period, bool& Enabled); // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/UltraDynamicSky/Blueprints/Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Get Weather Preset
	void Get Weather Preset(TEnumAsByte<UDS_WeatherTypes> Preset, double& Weather Intensity, double& Cloud Coverage, double& Rain / Snow, double& Wind Intensity, double& Material Wetness, double& Material Snow); // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/UltraDynamicSky/Blueprints/Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Material Effect Parameters
	void Update Material Effect Parameters();                                                                                // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UltraDynamicSky/Blueprints/Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Limit Weather Intensity
	void Limit Weather Intensity();                                                                                          // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UltraDynamicSky/Blueprints/Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Get Updated Control Point Location
	void Get Updated Control Point Location();                                                                               // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UltraDynamicSky/Blueprints/Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Apply Weather Override Volumes
	void Apply Weather Override Volumes();                                                                                   // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UltraDynamicSky/Blueprints/Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Check Point for Puddles or Snow
	void Check Point for Puddles or Snow(FVector Location, FVector Ground Normal, UPhysicalMaterial* Physical Material, double& Puddle Depth, double& Snow Depth); // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/UltraDynamicSky/Blueprints/Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Create Cloud Reference Array
	void Create Cloud Reference Array();                                                                                     // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UltraDynamicSky/Blueprints/Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Recycle Render Targets
	void Recycle Render Targets();                                                                                           // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UltraDynamicSky/Blueprints/Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update DLWE Puddle Ripples
	void Update DLWE Puddle Ripples();                                                                                       // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UltraDynamicSky/Blueprints/Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Ripple DLWE Puddle
	void Ripple DLWE Puddle(FVector Location, double Size, double Strength);                                                 // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UltraDynamicSky/Blueprints/Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Check to change DLWE Mode
	void Check to change DLWE Mode();                                                                                        // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UltraDynamicSky/Blueprints/Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Recenter DLWE Render Target
	void Recenter DLWE Render Target(UTextureRenderTarget2D* Render Target, TEnumAsByte<ETextureRenderTargetFormat> Format, FLinearColor Clear Color, UMaterialInterface* EdgeFade Material, UTextureRenderTarget2D*& New Target); // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UltraDynamicSky/Blueprints/Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Fade DLWE Target Over Time
	void Fade DLWE Target Over Time();                                                                                       // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UltraDynamicSky/Blueprints/Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update DLWE Snow Compressions
	void Update DLWE Snow Compressions();                                                                                    // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UltraDynamicSky/Blueprints/Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Compress DLWE Snow
	void Compress DLWE Snow(FVector Location, double Size);                                                                  // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UltraDynamicSky/Blueprints/Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Check for DLWE Recenter
	void Check for DLWE Recenter();                                                                                          // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UltraDynamicSky/Blueprints/Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update DLWE Parameters
	void Update DLWE Parameters();                                                                                           // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UltraDynamicSky/Blueprints/Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Start / Update DLWE Targets
	void Start / Update DLWE Targets(bool First Run);                                                                        // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UltraDynamicSky/Blueprints/Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Get Current Temperature
	void Get Current Temperature(double& Celsius, double& Fahrenheit);                                                       // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/UltraDynamicSky/Blueprints/Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Filter Probability Map
	void Filter Probability Map(TMap<TEnumAsByte, double> Probability Map, TEnumAsByte<UDS_WeatherTypes> Current Random Type, TMap<TEnumAsByte, double>& Filtered Probability Map); // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UltraDynamicSky/Blueprints/Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.ConstructionScript_Function
	void ConstructionScript_Function(bool Run By Counterpart);                                                               // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UltraDynamicSky/Blueprints/Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Audio Update
	void Audio Update();                                                                                                     // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UltraDynamicSky/Blueprints/Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Current Material Effects
	void Update Current Material Effects();                                                                                  // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UltraDynamicSky/Blueprints/Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Get Current Weather Type
	void Get Current Weather Type(TEnumAsByte<UDS_WeatherTypes>& Current Weather Type);                                      // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/UltraDynamicSky/Blueprints/Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Apply Weather Preset
	void Apply Weather Preset();                                                                                             // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UltraDynamicSky/Blueprints/Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Print Current Status To Screen
	void Print Current Status To Screen();                                                                                   // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UltraDynamicSky/Blueprints/Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Static Variables
	void Update Static Variables();                                                                                          // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UltraDynamicSky/Blueprints/Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Active Variables
	void Update Active Variables();                                                                                          // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UltraDynamicSky/Blueprints/Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.UserConstructionScript
	void UserConstructionScript();                                                                                           // [0x2407bf0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UltraDynamicSky/Blueprints/Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Set Current Season
	void Set Current Season(TEnumAsByte<UDS_Season> Season);                                                                 // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UltraDynamicSky/Blueprints/Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Cloud Coverage from UDS
	void Update Cloud Coverage from UDS(double Cloud Coverage);                                                              // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UltraDynamicSky/Blueprints/Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Flash Lightning
	void Flash Lightning(double angle, bool Use Custom Lightning Location, FVector Custom Lightning Location);               // [0x2407bf0] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/UltraDynamicSky/Blueprints/Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.End Lightning Flash
	void End Lightning Flash();                                                                                              // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/UltraDynamicSky/Blueprints/Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Tick Lightning Flash
	void Tick Lightning Flash();                                                                                             // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/UltraDynamicSky/Blueprints/Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Flash Lightning Local
	void Flash Lightning Local(AWeather_Override_Volume_C* Volume, double angle);                                            // [0x2407bf0] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/UltraDynamicSky/Blueprints/Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.ReceiveTick
	void ReceiveTick(float DeltaSeconds);                                                                                    // [0x2407bf0] Event|Public|BlueprintEvent 
	// Function /Game/UltraDynamicSky/Blueprints/Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Force Tick
	void Force Tick();                                                                                                       // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/UltraDynamicSky/Blueprints/Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Change Weather Using Settings
	void Change Weather Using Settings(double Weather Intensity, double Cloudiness, double Wind Intensity, double Rain / Snow, double Time To Transition To New Settings, double Time to Hold New Settings, double Time to Transition Back to Random Variation, bool Reset Particle Emitters); // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/UltraDynamicSky/Blueprints/Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Change Weather Using Type
	void Change Weather Using Type(TEnumAsByte<UDS_WeatherTypes> New Weather Type, double Time To Transition To New Settings, double Time to Hold New Settings, double Time to Transition Back to Random Variation, bool Reset Particle Emitters); // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/UltraDynamicSky/Blueprints/Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Start Client Weather Change
	void Start Client Weather Change(int32_t Transition State);                                                              // [0x2407bf0] Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/UltraDynamicSky/Blueprints/Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Reset All Emitters
	void Reset All Emitters();                                                                                               // [0x2407bf0] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/UltraDynamicSky/Blueprints/Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Initialize Weather
	void Initialize Weather();                                                                                               // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UltraDynamicSky/Blueprints/Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.ExecuteUbergraph_Ultra_Dynamic_Weather
	void ExecuteUbergraph_Ultra_Dynamic_Weather(int32_t EntryPoint);                                                         // [0x2407bf0] Final|HasDefaults    
};

/// Class /Game/UltraDynamicSky/Blueprints/Weather_Effects/System/Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C
/// Size: 0x0000 (0x000028 - 0x000028)
class UUltra_Dynamic_Weather_Interface_C : public UInterface : UInterface
{ 
public:
};

/// Class /Game/UltraDynamicSky/Blueprints/Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C
/// Size: 0x0C50 (0x000290 - 0x000EE0)
class AUltra_Dynamic_Sky_C : public AActor : AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0290   (0x0008)  
	USkyLightComponent*                                Realtime_Capture_Based_Sky_Light;                           // 0x0298   (0x0008)  
	UNiagaraComponent*                                 Inside_Cloud_Fog;                                           // 0x02A0   (0x0008)  
	UVolumetricCloudComponent*                         VolumetricAurora;                                           // 0x02A8   (0x0008)  
	UStaticMeshComponent*                              StaticCloudsSphere;                                         // 0x02B0   (0x0008)  
	UBillboardComponent*                               Root;                                                       // 0x02B8   (0x0008)  
	UVolumetricCloudComponent*                         VolumetricCloud;                                            // 0x02C0   (0x0008)  
	USkyLightComponent*                                CubeMap_Sky_Light;                                          // 0x02C8   (0x0008)  
	USkyLightComponent*                                Capture_Based_Sky_Light;                                    // 0x02D0   (0x0008)  
	UPostProcessComponent*                             Exposure;                                                   // 0x02D8   (0x0008)  
	UExponentialHeightFogComponent*                    HeightFog;                                                  // 0x02E0   (0x0008)  
	UDirectionalLightComponent*                        Moon;                                                       // 0x02E8   (0x0008)  
	UDirectionalLightComponent*                        Sun;                                                        // 0x02F0   (0x0008)  
	USkyAtmosphereComponent*                           SkyAtmosphere;                                              // 0x02F8   (0x0008)  
	UArrowComponent*                                   Moon_Root;                                                  // 0x0300   (0x0008)  
	UArrowComponent*                                   Sun_Root;                                                   // 0x0308   (0x0008)  
	UStaticMeshComponent*                              Ultra_Dynamic_Sky_Sphere;                                   // 0x0310   (0x0008)  
	TEnumAsByte<UDS_FeatureToggle>                     Sun_Light;                                                  // 0x0318   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0319   (0x0007)  MISSED
	ADirectionalLight*                                 Custom_Sun_Light_Actor;                                     // 0x0320   (0x0008)  
	TEnumAsByte<EComponentMobility>                    Sun_Mobility;                                               // 0x0328   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0329   (0x0007)  MISSED
	UMaterialInstanceDynamic*                          Sky_MID;                                                    // 0x0330   (0x0008)  
	double                                             Cloud_Speed;                                                // 0x0338   (0x0008)  
	double                                             Cloud_Wisps_Opacity;                                        // 0x0340   (0x0008)  
	bool                                               Refresh_Settings;                                           // 0x0348   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0349   (0x0007)  MISSED
	double                                             Time_of_Day;                                                // 0x0350   (0x0008)  
	TEnumAsByte<UDS_SkyMode>                           Sky_Mode;                                                   // 0x0358   (0x0001)  
	unsigned char                                      UnknownData03_5[0x7];                                       // 0x0359   (0x0007)  MISSED
	double                                             Cloud_Coverage;                                             // 0x0360   (0x0008)  
	double                                             Overall_Intensity;                                          // 0x0368   (0x0008)  
	double                                             Saturation;                                                 // 0x0370   (0x0008)  
	double                                             Cloud_Direction;                                            // 0x0378   (0x0008)  
	double                                             Cloud_Phase;                                                // 0x0380   (0x0008)  
	double                                             Moon_Angle;                                                 // 0x0388   (0x0008)  
	double                                             Moon_Inclination;                                           // 0x0390   (0x0008)  
	double                                             Moon_Vertical_Offset;                                       // 0x0398   (0x0008)  
	double                                             Moon_Orbit_Offset;                                          // 0x03A0   (0x0008)  
	bool                                               Moon_Casts_Shadows;                                         // 0x03A8   (0x0001)  
	unsigned char                                      UnknownData04_5[0x7];                                       // 0x03A9   (0x0007)  MISSED
	double                                             Moon_Scale;                                                 // 0x03B0   (0x0008)  
	double                                             Moon_Phase;                                                 // 0x03B8   (0x0008)  
	bool                                               Automatically_Set_Advanced_Legacy_Settings_using_Time_of_Day; // 0x03C0   (0x0001)  
	unsigned char                                      UnknownData05_5[0x7];                                       // 0x03C1   (0x0007)  MISSED
	double                                             Stars_Visibility;                                           // 0x03C8   (0x0008)  
	bool                                               Moon_Phase_Changes_Over_Time;                               // 0x03D0   (0x0001)  
	unsigned char                                      UnknownData06_5[0x7];                                       // 0x03D1   (0x0007)  MISSED
	double                                             Dark_Side_Brightness;                                       // 0x03D8   (0x0008)  
	double                                             Moon_Texture_Intensity__Night_;                             // 0x03E0   (0x0008)  
	double                                             Moon_Position;                                              // 0x03E8   (0x0008)  
	double                                             Sun_Angle;                                                  // 0x03F0   (0x0008)  
	FLinearColor                                       Horizon_Base_Color;                                         // 0x03F8   (0x0010)  
	FLinearColor                                       Zenith_Base_Color;                                          // 0x0408   (0x0010)  
	FLinearColor                                       Cloud_Light_Color;                                          // 0x0418   (0x0010)  
	FLinearColor                                       Cloud_Dark_Color;                                           // 0x0428   (0x0010)  
	FLinearColor                                       Sun_Color;                                                  // 0x0438   (0x0010)  
	double                                             Cloud_Shine_Intensity;                                      // 0x0448   (0x0008)  
	bool                                               Animate_Time_of_Day;                                        // 0x0450   (0x0001)  
	unsigned char                                      UnknownData07_5[0x7];                                       // 0x0451   (0x0007)  MISSED
	double                                             Contrast;                                                   // 0x0458   (0x0008)  
	double                                             Sun_Inclination;                                            // 0x0460   (0x0008)  
	double                                             Sun_Vertical_Offset;                                        // 0x0468   (0x0008)  
	bool                                               Sun_Casts_Shadows;                                          // 0x0470   (0x0001)  
	unsigned char                                      UnknownData08_5[0x3];                                       // 0x0471   (0x0003)  MISSED
	FLinearColor                                       Sun_Light_Color;                                            // 0x0474   (0x0010)  
	unsigned char                                      UnknownData09_5[0x4];                                       // 0x0484   (0x0004)  MISSED
	double                                             Sun_Light_Intensity;                                        // 0x0488   (0x0008)  
	double                                             Moon_Texture_Intensity__Day_;                               // 0x0490   (0x0008)  
	FLinearColor                                       Moon_Light_Color;                                           // 0x0498   (0x0010)  
	double                                             Soften_Cloud_Layer_1;                                       // 0x04A8   (0x0008)  
	double                                             Soften_Cloud_Layer_2;                                       // 0x04B0   (0x0008)  
	double                                             Sharpen_Outer_Edge;                                         // 0x04B8   (0x0008)  
	double                                             Sun_Highlight_Radius;                                       // 0x04C0   (0x0008)  
	double                                             Stars_Intensity;                                            // 0x04C8   (0x0008)  
	FLinearColor                                       Stars_Color;                                                // 0x04D0   (0x0010)  
	FLinearColor                                       Moon_Material_Color;                                        // 0x04E0   (0x0010)  
	bool                                               Automatically_Set_Sun_Light_Rotation;                       // 0x04F0   (0x0001)  
	unsigned char                                      UnknownData10_5[0x7];                                       // 0x04F1   (0x0007)  MISSED
	FRotator                                           Sun_Rotation;                                               // 0x04F8   (0x0018)  
	double                                             Sun_Radius;                                                 // 0x0510   (0x0008)  
	UMaterialInstanceDynamic*                          Sun_Cloud_Shadows_MID;                                      // 0x0518   (0x0008)  
	bool                                               Use_Cloud_Shadows;                                          // 0x0520   (0x0001)  
	unsigned char                                      UnknownData11_5[0x7];                                       // 0x0521   (0x0007)  MISSED
	double                                             Cloud_Shadows_Scale;                                        // 0x0528   (0x0008)  
	double                                             Cloud_Shadows_Speed;                                        // 0x0530   (0x0008)  
	double                                             Cloud_Shadows_Intensity_When_Sunny;                         // 0x0538   (0x0008)  
	TEnumAsByte<UDS_FeatureToggle>                     Moon_Light;                                                 // 0x0540   (0x0001)  
	unsigned char                                      UnknownData12_5[0x7];                                       // 0x0541   (0x0007)  MISSED
	ADirectionalLight*                                 Custom_Moon_Light_Actor;                                    // 0x0548   (0x0008)  
	bool                                               Manually_Select_Sun_Color;                                  // 0x0550   (0x0001)  
	bool                                               Automatically_Set_Moon_Light_Rotation;                      // 0x0551   (0x0001)  
	unsigned char                                      UnknownData13_5[0x6];                                       // 0x0552   (0x0006)  MISSED
	double                                             Moon_Light_Intensity;                                       // 0x0558   (0x0008)  
	double                                             Stars_Speed;                                                // 0x0560   (0x0008)  
	UMaterialInstanceDynamic*                          Moon_Cloud_Shadows_MID;                                     // 0x0568   (0x0008)  
	double                                             New_Moon_Light_Brightness;                                  // 0x0570   (0x0008)  
	double                                             Moon_Texture_Rotation;                                      // 0x0578   (0x0008)  
	bool                                               Use_Custom_Moon_Texture;                                    // 0x0580   (0x0001)  
	unsigned char                                      UnknownData14_5[0x7];                                       // 0x0581   (0x0007)  MISSED
	UTexture2D*                                        Custom_Moon_Texture;                                        // 0x0588   (0x0008)  
	TEnumAsByte<EComponentMobility>                    Moon_Mobility;                                              // 0x0590   (0x0001)  
	TEnumAsByte<UDS_FeatureToggle>                     Sky_Light;                                                  // 0x0591   (0x0001)  
	unsigned char                                      UnknownData15_5[0x6];                                       // 0x0592   (0x0006)  MISSED
	ASkyLight*                                         Custom_Sky_Light_Actor;                                     // 0x0598   (0x0008)  
	TEnumAsByte<EComponentMobility>                    Sky_Light_Mobility;                                         // 0x05A0   (0x0001)  
	TEnumAsByte<UDS_FeatureToggle>                     Height_Fog;                                                 // 0x05A1   (0x0001)  
	unsigned char                                      UnknownData16_5[0x6];                                       // 0x05A2   (0x0006)  MISSED
	AExponentialHeightFog*                             Custom_Height_Fog_Actor;                                    // 0x05A8   (0x0008)  
	TEnumAsByte<UDS_SkyLightMode>                      Sky_Light_Mode;                                             // 0x05B0   (0x0001)  
	unsigned char                                      UnknownData17_5[0x7];                                       // 0x05B1   (0x0007)  MISSED
	UCurveFloat*                                       Night_Filter_Curve;                                         // 0x05B8   (0x0008)  
	double                                             Moon_Glow_Intensity;                                        // 0x05C0   (0x0008)  
	bool                                               Use_Auroras;                                                // 0x05C8   (0x0001)  
	unsigned char                                      UnknownData18_5[0x7];                                       // 0x05C9   (0x0007)  MISSED
	double                                             Aurora_Intensity;                                           // 0x05D0   (0x0008)  
	double                                             Aurora_Speed;                                               // 0x05D8   (0x0008)  
	double                                             Cloud_Shadows_Intensity_When_Overcast;                      // 0x05E0   (0x0008)  
	double                                             Cloud_Shadows_Softness_When_Sunny;                          // 0x05E8   (0x0008)  
	double                                             Cloud_Shadows_Softness_When_Overcast;                       // 0x05F0   (0x0008)  
	double                                             Cloud_Tiling_Layer_1;                                       // 0x05F8   (0x0008)  
	double                                             Cloud_Tiling_Layer_2;                                       // 0x0600   (0x0008)  
	double                                             Soften_Horizon;                                             // 0x0608   (0x0008)  
	bool                                               One_Cloud_Layer;                                            // 0x0610   (0x0001)  
	unsigned char                                      UnknownData19_5[0x7];                                       // 0x0611   (0x0007)  MISSED
	double                                             Cloud_Height_Layer_1;                                       // 0x0618   (0x0008)  
	double                                             Cloud_Height_Layer_2;                                       // 0x0620   (0x0008)  
	double                                             Overcast_Swirling_Texture;                                  // 0x0628   (0x0008)  
	double                                             Dawn_Time;                                                  // 0x0630   (0x0008)  
	double                                             Dusk_Time;                                                  // 0x0638   (0x0008)  
	double                                             Night_brightness;                                           // 0x0640   (0x0008)  
	double                                             Sun_Volumetric_Scattering_Intensity;                        // 0x0648   (0x0008)  
	double                                             Moon_Volumetric_Scattering_Intensity;                       // 0x0650   (0x0008)  
	double                                             Aurora_Phase;                                               // 0x0658   (0x0008)  
	FString                                            Readme;                                                     // 0x0660   (0x0010)  
	ULightComponent*                                   Sun_LightComponent;                                         // 0x0670   (0x0008)  
	ULightComponent*                                   Moon_LightComponent;                                        // 0x0678   (0x0008)  
	USkyLightComponent*                                SkyLightComponent;                                          // 0x0680   (0x0008)  
	UExponentialHeightFogComponent*                    Height_Fog_Component;                                       // 0x0688   (0x0008)  
	bool                                               Use_Exposure_Range;                                         // 0x0690   (0x0001)  
	unsigned char                                      UnknownData20_5[0x7];                                       // 0x0691   (0x0007)  MISSED
	double                                             Exposure_Min;                                               // 0x0698   (0x0008)  
	double                                             Exposure_Max;                                               // 0x06A0   (0x0008)  
	double                                             Day_Length;                                                 // 0x06A8   (0x0008)  
	double                                             Night_Length;                                               // 0x06B0   (0x0008)  
	double                                             Extend_Dawn_and_Dusk;                                       // 0x06B8   (0x0008)  
	bool                                               Move_Static_Stationary_Lights;                              // 0x06C0   (0x0001)  
	unsigned char                                      UnknownData21_5[0x7];                                       // 0x06C1   (0x0007)  MISSED
	double                                             Fog_Density_Clear;                                          // 0x06C8   (0x0008)  
	double                                             Fog_Density_Cloudy;                                         // 0x06D0   (0x0008)  
	double                                             Fog_Density_Distribution;                                   // 0x06D8   (0x0008)  
	UCurveLinearColor*                                 Fog_Inscattering_Color_Curve;                               // 0x06E0   (0x0008)  
	UCurveLinearColor*                                 Fog_Directional_Inscattering_Color_Curve;                   // 0x06E8   (0x0008)  
	double                                             Stars_Tiling;                                               // 0x06F0   (0x0008)  
	double                                             Stars_Daytime_Intensity;                                    // 0x06F8   (0x0008)  
	UTexture2D*                                        Tiling_Stars_Texture;                                       // 0x0700   (0x0008)  
	UTexture2D*                                        Real_Stars_Texture;                                         // 0x0708   (0x0008)  
	double                                             Night_Sky_Glow;                                             // 0x0710   (0x0008)  
	FLinearColor                                       Night_Sky_Glow_Color;                                       // 0x0718   (0x0010)  
	double                                             Stars_Phase;                                                // 0x0728   (0x0008)  
	UCurveFloat*                                       Stars_Intensity_Curve;                                      // 0x0730   (0x0008)  
	double                                             Sky_Light_Intensity;                                        // 0x0738   (0x0008)  
	bool                                               Sky_Light_Casts_Shadows;                                    // 0x0740   (0x0001)  
	unsigned char                                      UnknownData22_5[0x7];                                       // 0x0741   (0x0007)  MISSED
	double                                             DFAO_Min_Occlusion;                                         // 0x0748   (0x0008)  
	double                                             DFAO_Exponent;                                              // 0x0750   (0x0008)  
	UTextureCube*                                      Flat_Clear_Cubemap;                                         // 0x0758   (0x0008)  
	UTextureCube*                                      Flat_PartlyCloudy_Cubemap;                                  // 0x0760   (0x0008)  
	UTextureCube*                                      Flat_Overcast_Cubemap;                                      // 0x0768   (0x0008)  
	UTextureCube*                                      Custom_Cubemap;                                             // 0x0770   (0x0008)  
	UCurveLinearColor*                                 Tint_Color_Clear;                                           // 0x0778   (0x0008)  
	UCurveLinearColor*                                 Tint_Color_Partly_Cloudy;                                   // 0x0780   (0x0008)  
	UCurveLinearColor*                                 Tint_Color_Overcast;                                        // 0x0788   (0x0008)  
	FLinearColor                                       Tinted_Sky_Light_Lower_Hemisphere_Color;                    // 0x0790   (0x0010)  
	bool                                               Real_Time_Capture;                                          // 0x07A0   (0x0001)  
	unsigned char                                      UnknownData23_5[0x7];                                       // 0x07A1   (0x0007)  MISSED
	double                                             Captured_Sky_Light_Lower_Hemisphere_Brightness;             // 0x07A8   (0x0008)  
	FLinearColor                                       Capture_Based_Sky_Light_Color;                              // 0x07B0   (0x0010)  
	bool                                               Recapture_Sky_light_Periodically;                           // 0x07C0   (0x0001)  
	unsigned char                                      UnknownData24_5[0x7];                                       // 0x07C1   (0x0007)  MISSED
	double                                             Sky_Light_Recapture_Period__Seconds_;                       // 0x07C8   (0x0008)  
	double                                             Lights_Update_Period;                                       // 0x07D0   (0x0008)  
	double                                             Sunrise_Event_Time;                                         // 0x07D8   (0x0008)  
	double                                             Sunset_Event_Time;                                          // 0x07E0   (0x0008)  
	FMulticastInlineDelegate                           Sunset;                                                     // 0x07E8   (0x0010)  
	FMulticastInlineDelegate                           Sunrise;                                                    // 0x07F8   (0x0010)  
	FLinearColor                                       Height_Fog_Color_Multiplier;                                // 0x0808   (0x0010)  
	bool                                               Use_Fog_Density_Curve;                                      // 0x0818   (0x0001)  
	unsigned char                                      UnknownData25_5[0x7];                                       // 0x0819   (0x0007)  MISSED
	UCurveFloat*                                       Fog_Density_Curve;                                          // 0x0820   (0x0008)  
	double                                             Horizon_Density_Multiplier;                                 // 0x0828   (0x0008)  
	double                                             Zenith_Density_Multiplier;                                  // 0x0830   (0x0008)  
	double                                             Latitude_Gradient_Position;                                 // 0x0838   (0x0008)  
	double                                             Latitude_Gradient_Width;                                    // 0x0840   (0x0008)  
	double                                             Around_Sun_Density_Multiplier;                              // 0x0848   (0x0008)  
	double                                             Around_Sun_Density_Exponent;                                // 0x0850   (0x0008)  
	double                                             Around_Moon_Density_Multiplier;                             // 0x0858   (0x0008)  
	double                                             Around_Moon_Density_Exponent;                               // 0x0860   (0x0008)  
	UTexture2D*                                        Cloud_Wisps_Texture;                                        // 0x0868   (0x0008)  
	TEnumAsByte<UDS_NoiseType>                         Cloud_Noise_Type;                                           // 0x0870   (0x0001)  
	unsigned char                                      UnknownData26_5[0x7];                                       // 0x0871   (0x0007)  MISSED
	UTexture*                                          Custom_Noise_Texture;                                       // 0x0878   (0x0008)  
	double                                             Sun_Shader_Intensity;                                       // 0x0880   (0x0008)  
	double                                             Directional_Lighting_Intensity;                             // 0x0888   (0x0008)  
	double                                             Shine_Variation;                                            // 0x0890   (0x0008)  
	UCurveFloat*                                       Sun_Highlight_Radius_Curve;                                 // 0x0898   (0x0008)  
	UCurveFloat*                                       Sun_Highlight_Intensity_Curve;                              // 0x08A0   (0x0008)  
	UCurveFloat*                                       Shine_Intensity_Curve;                                      // 0x08A8   (0x0008)  
	double                                             Cloud_Opacity;                                              // 0x08B0   (0x0008)  
	double                                             Directional_Lights_Absent_Brightness;                       // 0x08B8   (0x0008)  
	UMaterialInstanceDynamic*                          Volumetric_Clouds_MID_Complex;                              // 0x08C0   (0x0008)  
	TEnumAsByte<UDS_VolRT_Mode>                        Volumetric_Cloud_Rendering_Mode;                            // 0x08C8   (0x0001)  
	unsigned char                                      UnknownData27_5[0x7];                                       // 0x08C9   (0x0007)  MISSED
	double                                             Layer_Height_Scale;                                         // 0x08D0   (0x0008)  
	double                                             Bottom_Altitude;                                            // 0x08D8   (0x0008)  
	double                                             Base_Clouds_Scale;                                          // 0x08E0   (0x0008)  
	double                                             SubNoise_Scale;                                             // 0x08E8   (0x0008)  
	double                                             High_Frequency_Noise_Amount;                                // 0x08F0   (0x0008)  
	double                                             Extinction_Scale_Top;                                       // 0x08F8   (0x0008)  
	double                                             Extinction_Scale_Bottom;                                    // 0x0900   (0x0008)  
	double                                             Shift_Curve;                                                // 0x0908   (0x0008)  
	double                                             Minimum_Erosion;                                            // 0x0910   (0x0008)  
	double                                             View_Sample_Count_Scale;                                    // 0x0918   (0x0008)  
	double                                             Shadow_Sample_Scale;                                        // 0x0920   (0x0008)  
	double                                             Shadow_Tracing_Distance;                                    // 0x0928   (0x0008)  
	double                                             Reflection_Sample_Count_Scale;                              // 0x0930   (0x0008)  
	double                                             Reflection_Shadow_Sample_Count_Scale;                       // 0x0938   (0x0008)  
	TEnumAsByte<UDS_NoiseType>                         Volumetric_Cloud_Noise_Type;                                // 0x0940   (0x0001)  
	unsigned char                                      UnknownData28_5[0x7];                                       // 0x0941   (0x0007)  MISSED
	UTexture*                                          Volumetric_Custom_Noise_Texture;                            // 0x0948   (0x0008)  
	double                                             Base_Clouds_Mip_Level;                                      // 0x0950   (0x0008)  
	double                                             Multiscattering_Intensity;                                  // 0x0958   (0x0008)  
	double                                             Multiscattering_Occlusion_Factor;                           // 0x0960   (0x0008)  
	double                                             SubNoise_Erosion;                                           // 0x0968   (0x0008)  
	bool                                               Use_Volumetric_Fog;                                         // 0x0970   (0x0001)  
	unsigned char                                      UnknownData29_5[0x7];                                       // 0x0971   (0x0007)  MISSED
	UMaterialInstanceDynamic*                          Volumetric_Clouds_MID_Simplified;                           // 0x0978   (0x0008)  
	double                                             Fog_Start_Distance_when_Clear;                              // 0x0980   (0x0008)  
	double                                             Fog_Start_Distance_when_Cloudy_Foggy;                       // 0x0988   (0x0008)  
	double                                             Fog_Start_Distance_Exponent;                                // 0x0990   (0x0008)  
	bool                                               Randomize_Cloud_Formation_on_Run;                           // 0x0998   (0x0001)  
	unsigned char                                      UnknownData30_5[0x7];                                       // 0x0999   (0x0007)  MISSED
	double                                             Macro_Variation;                                            // 0x09A0   (0x0008)  
	double                                             Macro_Scale;                                                // 0x09A8   (0x0008)  
	double                                             Phase_G;                                                    // 0x09B0   (0x0008)  
	double                                             Phase_G_2;                                                  // 0x09B8   (0x0008)  
	double                                             MultiScattering_Eccentricity;                               // 0x09C0   (0x0008)  
	double                                             Distance_to_Sample_Max_Count;                               // 0x09C8   (0x0008)  
	double                                             Time_Speed;                                                 // 0x09D0   (0x0008)  
	double                                             Internal_Time_of_Day;                                       // 0x09D8   (0x0008)  
	AActor*                                            Weather_BP;                                                 // 0x09E0   (0x0008)  
	double                                             Volumetric_Clouds_Scale;                                    // 0x09E8   (0x0008)  
	FLinearColor                                       Volumetric_Cloud_Color;                                     // 0x09F0   (0x0010)  
	double                                             Tracing_Max_Start_Distance;                                 // 0x0A00   (0x0008)  
	UMaterialInstanceDynamic*                          Static_Clouds_MID;                                          // 0x0A08   (0x0008)  
	FLinearColor                                       Aurora_Color_1;                                             // 0x0A10   (0x0010)  
	FLinearColor                                       Aurora_Color_2;                                             // 0x0A20   (0x0010)  
	FLinearColor                                       Aurora_Color_3;                                             // 0x0A30   (0x0010)  
	UMaterialInstanceDynamic*                          Volumetric_Aurora_MID;                                      // 0x0A40   (0x0008)  
	double                                             Overcast_Night_Brightness;                                  // 0x0A48   (0x0008)  
	bool                                               Use_Sky_Mode_Scalability_Map;                               // 0x0A50   (0x0001)  
	unsigned char                                      UnknownData31_5[0x7];                                       // 0x0A51   (0x0007)  MISSED
	TMap<int32_t, TEnumAsByte>                         Sky_Mode_ScalabilityMap;                                    // 0x0A58   (0x0050)  
	double                                             Scale_Skylight_Intensity_at_Night;                          // 0x0AA8   (0x0008)  
	double                                             Scale_Skylight_Intensity_when_Cloudy;                       // 0x0AB0   (0x0008)  
	UCurveLinearColor*                                 Horizon_Base_Color__Legacy_Color_Curve_;                    // 0x0AB8   (0x0008)  
	UCurveLinearColor*                                 Cloud_Dark_Color__Legacy_Color_Curve_;                      // 0x0AC0   (0x0008)  
	UCurveLinearColor*                                 Cloud_Light_Color__Legacy_Color_Curve_;                     // 0x0AC8   (0x0008)  
	double                                             Sun_Disk_Intensity;                                         // 0x0AD0   (0x0008)  
	UCurveLinearColor*                                 Sun_Disk_Color_Curve;                                       // 0x0AD8   (0x0008)  
	UCurveLinearColor*                                 Sun_Cloudy_Color__Legacy_Color_Curve_;                      // 0x0AE0   (0x0008)  
	UCurveLinearColor*                                 Zenith_Base_Color__Legacy_Color_Curve_;                     // 0x0AE8   (0x0008)  
	UCurveFloat*                                       Directional_Intensity_Curve;                                // 0x0AF0   (0x0008)  
	double                                             Aurora_Lines;                                               // 0x0AF8   (0x0008)  
	UCurveFloat*                                       Aurora_Intensity_Curve;                                     // 0x0B00   (0x0008)  
	UMaterialInstanceDynamic*                          Inside_Clouds_Fog_MID;                                      // 0x0B08   (0x0008)  
	double                                             Tracing_Max_Distance;                                       // 0x0B10   (0x0008)  
	bool                                               Enable_Fog_Inside_Clouds;                                   // 0x0B18   (0x0001)  
	unsigned char                                      UnknownData32_5[0x7];                                       // 0x0B19   (0x0007)  MISSED
	double                                             Volumetric_Aurora_Sample_Count_Scale;                       // 0x0B20   (0x0008)  
	double                                             Volumetric_Aurora_Layer_Height;                             // 0x0B28   (0x0008)  
	double                                             Volumetric_Aurora_Bottom_Altitude;                          // 0x0B30   (0x0008)  
	double                                             Clear_Height_Fog_Falloff;                                   // 0x0B38   (0x0008)  
	double                                             Cloudy_Height_Fog_Falloff;                                  // 0x0B40   (0x0008)  
	UCurveFloat*                                       Tint_Color_Value_Curve;                                     // 0x0B48   (0x0008)  
	bool                                               Two_Layers;                                                 // 0x0B50   (0x0001)  
	unsigned char                                      UnknownData33_5[0x7];                                       // 0x0B51   (0x0007)  MISSED
	double                                             Layer_2_Density_Scale;                                      // 0x0B58   (0x0008)  
	double                                             Layer_2_Extinction_Scale;                                   // 0x0B60   (0x0008)  
	FVector2D                                          Layer_2_Cloud_Scale;                                        // 0x0B68   (0x0010)  
	double                                             Layer_2_Mip_Offset;                                         // 0x0B78   (0x0008)  
	double                                             Distance_Between_Layers;                                    // 0x0B80   (0x0008)  
	UVolumeTexture*                                    LowQuality_VolumeTexture;                                   // 0x0B88   (0x0008)  
	UVolumeTexture*                                    HighQuality_VolumeTexture;                                  // 0x0B90   (0x0008)  
	UVolumeTexture*                                    EpicQuality_VolumeTexture;                                  // 0x0B98   (0x0008)  
	bool                                               Use_Static_Moon_Rotation;                                   // 0x0BA0   (0x0001)  
	unsigned char                                      UnknownData34_5[0x7];                                       // 0x0BA1   (0x0007)  MISSED
	FRotator                                           Static_Moon_Rotation;                                       // 0x0BA8   (0x0018)  
	double                                             Fog_Color_Strength_Day;                                     // 0x0BC0   (0x0008)  
	bool                                               Enable_Sun_Light_Shaft_Bloom;                               // 0x0BC8   (0x0001)  
	unsigned char                                      UnknownData35_5[0x7];                                       // 0x0BC9   (0x0007)  MISSED
	double                                             Sun_Light_Shaft_Max_Brightness;                             // 0x0BD0   (0x0008)  
	UCurveFloat*                                       Sun_Light_Shaft_Bloom_Threshold_Curve;                      // 0x0BD8   (0x0008)  
	UCurveFloat*                                       Sun_Light_Shaft_Bloom_Scale_Curve;                          // 0x0BE0   (0x0008)  
	FColor                                             Sun_Light_Shaft_Tint_Color;                                 // 0x0BE8   (0x0004)  
	bool                                               Enable_Moon_Light_Shaft_Bloom;                              // 0x0BEC   (0x0001)  
	unsigned char                                      UnknownData36_5[0x3];                                       // 0x0BED   (0x0003)  MISSED
	double                                             Moon_Light_Shaft_Max_Brightness;                            // 0x0BF0   (0x0008)  
	double                                             Moon_Light_Shaft_Bloom_Threshold;                           // 0x0BF8   (0x0008)  
	double                                             Moon_Light_Shaft_Bloom_Scale;                               // 0x0C00   (0x0008)  
	FColor                                             Moon_Light_Shaft_Tint_Color;                                // 0x0C08   (0x0004)  
	FLinearColor                                       Custom_Cubemap_Sky_Light_Color;                             // 0x0C0C   (0x0010)  
	bool                                               Factor_Absent_Directional_Lights_Brightness;                // 0x0C1C   (0x0001)  
	bool                                               Real_Time_Capture_Uses_Time_Slicing;                        // 0x0C1D   (0x0001)  
	bool                                               Use_Mobile_Overrides;                                       // 0x0C1E   (0x0001)  
	TEnumAsByte<UDS_SkyMode>                           Volumetric_Clouds_Replacement;                              // 0x0C1F   (0x0001)  
	TEnumAsByte<UDS_SkyLightMode>                      Real_Time_Capture_Sky_Light_Replacement;                    // 0x0C20   (0x0001)  
	bool                                               Adjust_For_Mobile_Renderer;                                 // 0x0C21   (0x0001)  
	unsigned char                                      UnknownData37_5[0x6];                                       // 0x0C22   (0x0006)  MISSED
	TArray<FString>                                    Mobile_Platforms;                                           // 0x0C28   (0x0010)  
	bool                                               Mobile;                                                     // 0x0C38   (0x0001)  
	bool                                               Simulate_Real_Sun;                                          // 0x0C39   (0x0001)  
	bool                                               Simulate_Real_Moon;                                         // 0x0C3A   (0x0001)  
	bool                                               Simulate_Real_Stars;                                        // 0x0C3B   (0x0001)  
	unsigned char                                      UnknownData38_5[0x4];                                       // 0x0C3C   (0x0004)  MISSED
	double                                             Latitude;                                                   // 0x0C40   (0x0008)  
	double                                             Longitude;                                                  // 0x0C48   (0x0008)  
	double                                             Time_Zone;                                                  // 0x0C50   (0x0008)  
	int32_t                                            Year;                                                       // 0x0C58   (0x0004)  
	int32_t                                            Month;                                                      // 0x0C5C   (0x0004)  
	int32_t                                            Day;                                                        // 0x0C60   (0x0004)  
	unsigned char                                      UnknownData39_5[0x4];                                       // 0x0C64   (0x0004)  MISSED
	double                                             North_Yaw;                                                  // 0x0C68   (0x0008)  
	double                                             Simulation_Speed;                                           // 0x0C70   (0x0008)  
	bool                                               True_Real_World_Time;                                       // 0x0C78   (0x0001)  
	bool                                               Apply_Daylight_Savings_Time;                                // 0x0C79   (0x0001)  
	bool                                               Date_Controls_UDW_Season;                                   // 0x0C7A   (0x0001)  
	unsigned char                                      UnknownData40_5[0x1];                                       // 0x0C7B   (0x0001)  MISSED
	int32_t                                            DST_Start_Month;                                            // 0x0C7C   (0x0004)  
	int32_t                                            DST_Start_Day;                                              // 0x0C80   (0x0004)  
	int32_t                                            DST_End_Month;                                              // 0x0C84   (0x0004)  
	int32_t                                            DST_End_Day;                                                // 0x0C88   (0x0004)  
	int32_t                                            DST_Change_Hour;                                            // 0x0C8C   (0x0004)  
	UCurveLinearColor*                                 Sun_Color__Legacy_Color_Curve_;                             // 0x0C90   (0x0008)  
	FLinearColor                                       Sun_Disk_Color;                                             // 0x0C98   (0x0010)  
	TArray<int32_t>                                    Months;                                                     // 0x0CA8   (0x0010)  
	TArray<int32_t>                                    Months__Leap_Year_;                                         // 0x0CB8   (0x0010)  
	double                                             Stellar_Calibration;                                        // 0x0CC8   (0x0008)  
	double                                             Lunar_Orbit_Calibration;                                    // 0x0CD0   (0x0008)  
	double                                             Lunar_Inclination_Calibration;                              // 0x0CD8   (0x0008)  
	bool                                               Runtime;                                                    // 0x0CE0   (0x0001)  
	bool                                               Daylight_Savings_Time;                                      // 0x0CE1   (0x0001)  
	unsigned char                                      UnknownData41_5[0x2];                                       // 0x0CE2   (0x0002)  MISSED
	int32_t                                            Total_Days_Elapsed;                                         // 0x0CE4   (0x0004)  
	bool                                               Clouds_Move_with_Time_of_Day;                               // 0x0CE8   (0x0001)  
	unsigned char                                      UnknownData42_5[0x7];                                       // 0x0CE9   (0x0007)  MISSED
	double                                             Time_of_Day_Movement_Multiplier;                            // 0x0CF0   (0x0008)  
	double                                             Clouds_Time;                                                // 0x0CF8   (0x0008)  
	TMap<FString, UMaterialInstance*>                  Sky_MID_Parent_Instances;                                   // 0x0D00   (0x0050)  
	double                                             Fog_Color_Strength_Night;                                   // 0x0D50   (0x0008)  
	bool                                               Use_Custom_Light_Function_Material;                         // 0x0D58   (0x0001)  
	unsigned char                                      UnknownData43_5[0x7];                                       // 0x0D59   (0x0007)  MISSED
	UMaterialInterface*                                Custom_Light_Function_Material;                             // 0x0D60   (0x0008)  
	bool                                               Force_Light_Functions_On;                                   // 0x0D68   (0x0001)  
	unsigned char                                      UnknownData44_5[0x7];                                       // 0x0D69   (0x0007)  MISSED
	double                                             Time_of_Day_Replication_Period;                             // 0x0D70   (0x0008)  
	double                                             Replicated_Time_of_Day;                                     // 0x0D78   (0x0008)  
	double                                             Replicated_Moon_Phase;                                      // 0x0D80   (0x0008)  
	double                                             Scale_Sun_Radius_as_it_Nears_Horizon;                       // 0x0D88   (0x0008)  
	double                                             Sun_Yaw;                                                    // 0x0D90   (0x0008)  
	double                                             Scale_Moon_Radius_as_it_Nears_Horizon;                      // 0x0D98   (0x0008)  
	bool                                               Height_Fog_Gets_Colors_from_Sky_Atmosphere;                 // 0x0DA0   (0x0001)  
	unsigned char                                      UnknownData45_5[0x7];                                       // 0x0DA1   (0x0007)  MISSED
	double                                             Sky_Atmosphere_Influence;                                   // 0x0DA8   (0x0008)  
	double                                             Sun_Z_Vector;                                               // 0x0DB0   (0x0008)  
	FLinearColor                                       Ambient_Fog_Color;                                          // 0x0DB8   (0x0010)  
	double                                             Moon_Specular_Scale;                                        // 0x0DC8   (0x0008)  
	double                                             Replicated_Day_Length;                                      // 0x0DD0   (0x0008)  
	double                                             Replicated_Night_Length;                                    // 0x0DD8   (0x0008)  
	double                                             Replicated_Time_Speed;                                      // 0x0DE0   (0x0008)  
	double                                             Replicated_Simulation_Speed;                                // 0x0DE8   (0x0008)  
	bool                                               Change_to_Simplified_Material_when_Overcast;                // 0x0DF0   (0x0001)  
	unsigned char                                      UnknownData46_5[0x7];                                       // 0x0DF1   (0x0007)  MISSED
	double                                             Simplified_Material_Cloud_Coverage_Threshold;               // 0x0DF8   (0x0008)  
	double                                             Simplified_Material_Fade_Length;                            // 0x0E00   (0x0008)  
	double                                             Top_Bottom_Distribution;                                    // 0x0E08   (0x0008)  
	int32_t                                            Current_Volumetric_Clouds_MID;                              // 0x0E10   (0x0004)  
	bool                                               Dim_Directional_Lights_with_Cloud_Coverage;                 // 0x0E14   (0x0001)  
	unsigned char                                      UnknownData47_5[0x3];                                       // 0x0E15   (0x0003)  MISSED
	FVector                                            Clouds_Position;                                            // 0x0E18   (0x0018)  
	double                                             Standard_Base_Clouds_Size;                                  // 0x0E30   (0x0008)  
	double                                             Last_Clouds_Time_of_Day_Factor;                             // 0x0E38   (0x0008)  
	FVector                                            Starting_Cloud_Texture_Velocity;                            // 0x0E40   (0x0018)  
	bool                                               Control_Sky_Atmosphere_Settings;                            // 0x0E58   (0x0001)  
	unsigned char                                      UnknownData48_5[0x3];                                       // 0x0E59   (0x0003)  MISSED
	FLinearColor                                       Rayleigh_Scattering_Color;                                  // 0x0E5C   (0x0010)  
	unsigned char                                      UnknownData49_5[0x4];                                       // 0x0E6C   (0x0004)  MISSED
	double                                             Desaturate_Rayleigh_Scattering_when_Cloudy;                 // 0x0E70   (0x0008)  
	double                                             Brighten_Rayleigh_Scattering_When_Cloudy;                   // 0x0E78   (0x0008)  
	bool                                               Volumetric_Fog_Follow_Player;                               // 0x0E80   (0x0001)  
	unsigned char                                      UnknownData50_5[0x7];                                       // 0x0E81   (0x0007)  MISSED
	double                                             HouseBoxOffset;                                             // 0x0E88   (0x0008)  
	double                                             TargetSkylightOffset;                                       // 0x0E90   (0x0008)  
	FTimerHandle                                       InterpTimer;                                                // 0x0E98   (0x0008)  
	FTimerHandle                                       ScatteringTimer;                                            // 0x0EA0   (0x0008)  
	double                                             TargetVolumetricScattering;                                 // 0x0EA8   (0x0008)  
	FLinearColor                                       Target_Sun_Color;                                           // 0x0EB0   (0x0010)  
	FTimerHandle                                       ChangeSunlightColorTimer;                                   // 0x0EC0   (0x0008)  
	UCurveLinearColor*                                 CustomTintSkyColor;                                         // 0x0EC8   (0x0008)  
	double                                             CustomTintColorAlpha;                                       // 0x0ED0   (0x0008)  
	double                                             TargetTintColorAlpha;                                       // 0x0ED8   (0x0008)  


	/// Functions
	// Function /Game/UltraDynamicSky/Blueprints/Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Current Volumetric Clouds MID
	void Update Current Volumetric Clouds MID();                                                                             // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UltraDynamicSky/Blueprints/Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Replicated Time
	void Update Replicated Time();                                                                                           // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UltraDynamicSky/Blueprints/Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Static Cloud Lighting
	void Update Static Cloud Lighting();                                                                                     // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UltraDynamicSky/Blueprints/Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.OnRep_Replicated Time of Day
	void OnRep_Replicated Time of Day();                                                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/UltraDynamicSky/Blueprints/Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Get Current Date and Time
	void Get Current Date and Time(FDateTime& Current Date and Time);                                                        // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/UltraDynamicSky/Blueprints/Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Check for Daylight Savings Time
	void Check for Daylight Savings Time();                                                                                  // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UltraDynamicSky/Blueprints/Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Increment Day
	void Increment Day();                                                                                                    // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UltraDynamicSky/Blueprints/Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Force Valid Day
	void Force Valid Day();                                                                                                  // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UltraDynamicSky/Blueprints/Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Approximate Real Sun Moon and Stars
	void Approximate Real Sun Moon and Stars(int32_t Month, int32_t Day, int32_t Year, double Time of Day, double Time Zone, FVector& Sun Vector, FVector& Moon Vector, double& Real Phase, FVector& Phase Alignment, double& Celestial Orbit, FLinearColor& Celestial Yaw); // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UltraDynamicSky/Blueprints/Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Set Date and Time
	void Set Date and Time(FDateTime Date Time);                                                                             // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UltraDynamicSky/Blueprints/Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Directional Lights
	void Update Directional Lights(bool Move Static Lights);                                                                 // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UltraDynamicSky/Blueprints/Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Recapture_SkyLight
	void Recapture_SkyLight();                                                                                               // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UltraDynamicSky/Blueprints/Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Change Settings Based on Platform and Scalability
	void Change Settings Based on Platform and Scalability();                                                                // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UltraDynamicSky/Blueprints/Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Variables Controlled by Weather
	void Update Variables Controlled by Weather();                                                                           // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UltraDynamicSky/Blueprints/Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Construction Script Function
	void Construction Script Function(bool Run By Counterpart);                                                              // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UltraDynamicSky/Blueprints/Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Set Cloud Timing
	void Set Cloud Timing();                                                                                                 // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UltraDynamicSky/Blueprints/Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Static Variables
	void Update Static Variables();                                                                                          // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UltraDynamicSky/Blueprints/Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Set Time of Day using Time Code
	void Set Time of Day using Time Code(FTimecode Time Code);                                                               // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UltraDynamicSky/Blueprints/Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Get Time of Day in Real Time Format
	void Get Time of Day in Real Time Format(FTimecode& Time);                                                               // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/UltraDynamicSky/Blueprints/Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Active Variables
	void Update Active Variables();                                                                                          // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UltraDynamicSky/Blueprints/Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Set Sun and Moon Root Rotation
	void Set Sun and Moon Root Rotation();                                                                                   // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UltraDynamicSky/Blueprints/Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.UserConstructionScript
	void UserConstructionScript();                                                                                           // [0x2407bf0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UltraDynamicSky/Blueprints/Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.ReceiveTick
	void ReceiveTick(float DeltaSeconds);                                                                                    // [0x2407bf0] Event|Public|BlueprintEvent 
	// Function /Game/UltraDynamicSky/Blueprints/Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.ReceiveBeginPlay
	void ReceiveBeginPlay();                                                                                                 // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/UltraDynamicSky/Blueprints/Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Midnight
	void Midnight();                                                                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/UltraDynamicSky/Blueprints/Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Lights
	void Update Lights();                                                                                                    // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/UltraDynamicSky/Blueprints/Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Restart Inside Cloud Fog
	void Restart Inside Cloud Fog();                                                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/UltraDynamicSky/Blueprints/Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Replicated ToD
	void Update Replicated ToD();                                                                                            // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/UltraDynamicSky/Blueprints/Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.SetSkylightOffset
	void SetSkylightOffset(double Offset);                                                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/UltraDynamicSky/Blueprints/Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.InterpSkylightTimer
	void InterpSkylightTimer();                                                                                              // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/UltraDynamicSky/Blueprints/Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.SetScattering
	void SetScattering(double Offset);                                                                                       // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/UltraDynamicSky/Blueprints/Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.ScatteringTimerEvent
	void ScatteringTimerEvent();                                                                                             // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/UltraDynamicSky/Blueprints/Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.SetSunColor
	void SetSunColor(UCurveLinearColor* TargetSunColor, double alpha);                                                       // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/UltraDynamicSky/Blueprints/Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.SunlightColorTimer
	void SunlightColorTimer();                                                                                               // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/UltraDynamicSky/Blueprints/Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.ExecuteUbergraph_Ultra_Dynamic_Sky
	void ExecuteUbergraph_Ultra_Dynamic_Sky(int32_t EntryPoint);                                                             // [0x2407bf0] Final|HasDefaults    
	// Function /Game/UltraDynamicSky/Blueprints/Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Sunrise__DelegateSignature
	void Sunrise__DelegateSignature();                                                                                       // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/UltraDynamicSky/Blueprints/Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Sunset__DelegateSignature
	void Sunset__DelegateSignature();                                                                                        // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/UltraDynamicSky/Blueprints/Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C
/// Size: 0x0028 (0x000290 - 0x0002B8)
class AUltra_Dynamic_Sky_BP_C : public AActor : AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0290   (0x0008)  
	UArrowComponent*                                   Arrow;                                                      // 0x0298   (0x0008)  
	UArrowComponent*                                   Sun_Root;                                                   // 0x02A0   (0x0008)  
	UStaticMeshComponent*                              Ultra_Dynamic_Sky_Sphere;                                   // 0x02A8   (0x0008)  
	USceneComponent*                                   DefaultSceneRoot;                                           // 0x02B0   (0x0008)  


	/// Functions
	// Function /Game/UltraDynamicSky/Blueprints/Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.ReceiveTick
	void ReceiveTick(float DeltaSeconds);                                                                                    // [0x2407bf0] Event|Public|BlueprintEvent 
	// Function /Game/UltraDynamicSky/Blueprints/Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.ReceiveBeginPlay
	void ReceiveBeginPlay();                                                                                                 // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/UltraDynamicSky/Blueprints/Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.UpdateSlot2
	void UpdateSlot2();                                                                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/UltraDynamicSky/Blueprints/Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.UpdateSlot1
	void UpdateSlot1();                                                                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/UltraDynamicSky/Blueprints/Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.CubemapTransition
	void CubemapTransition();                                                                                                // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/UltraDynamicSky/Blueprints/Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.Reverse
	void Reverse();                                                                                                          // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/UltraDynamicSky/Blueprints/Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.EnterTradeBunker
	void EnterTradeBunker(bool Enter);                                                                                       // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/UltraDynamicSky/Blueprints/Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.ExecuteUbergraph_Ultra_Dynamic_Sky_BP
	void ExecuteUbergraph_Ultra_Dynamic_Sky_BP(int32_t EntryPoint);                                                          // [0x2407bf0] Final                
};

/// Enum /Game/UltraDynamicSky/Blueprints/Enum/UDS_Weather_Override_Mode.UDS_Weather_Override_Mode
/// Size: 0x03
enum UDS_Weather_Override_Mode : uint8_t
{
	UDS_Weather_Override_Mode__NewEnumerator00                                       = 0,
	UDS_Weather_Override_Mode__NewEnumerator11                                       = 1,
	UDS_Weather_Override_Mode__UDS_Weather_Override_MAX2                             = 2
};

/// Enum /Game/UltraDynamicSky/Blueprints/Enum/UDS_WeatherVariables.UDS_WeatherVariables
/// Size: 0x07
enum UDS_WeatherVariables : uint8_t
{
	UDS_WeatherVariables__NewEnumerator00                                            = 0,
	UDS_WeatherVariables__NewEnumerator11                                            = 1,
	UDS_WeatherVariables__NewEnumerator22                                            = 2,
	UDS_WeatherVariables__NewEnumerator33                                            = 3,
	UDS_WeatherVariables__NewEnumerator114                                           = 4,
	UDS_WeatherVariables__NewEnumerator125                                           = 5,
	UDS_WeatherVariables__UDS_MAX6                                                   = 6
};

/// Enum /Game/UltraDynamicSky/Blueprints/Enum/UDS_TemperatureType.UDS_TemperatureType
/// Size: 0x03
enum UDS_TemperatureType : uint8_t
{
	UDS_TemperatureType__NewEnumerator00                                             = 0,
	UDS_TemperatureType__NewEnumerator11                                             = 1,
	UDS_TemperatureType__UDS_MAX2                                                    = 2
};

/// Enum /Game/UltraDynamicSky/Blueprints/Enum/UDS_DLWE_Mode.UDS_DLWE_Mode
/// Size: 0x04
enum UDS_DLWE_Mode : uint8_t
{
	UDS_DLWE_Mode__NewEnumerator00                                                   = 0,
	UDS_DLWE_Mode__NewEnumerator11                                                   = 1,
	UDS_DLWE_Mode__NewEnumerator22                                                   = 2,
	UDS_DLWE_Mode__UDS_DLWE_MAX3                                                     = 3
};

/// Enum /Game/UltraDynamicSky/Blueprints/Enum/UDS_ControlPointMode.UDS_ControlPointMode
/// Size: 0x04
enum UDS_ControlPointMode : uint8_t
{
	UDS_ControlPointMode__NewEnumerator00                                            = 0,
	UDS_ControlPointMode__NewEnumerator11                                            = 1,
	UDS_ControlPointMode__NewEnumerator22                                            = 2,
	UDS_ControlPointMode__UDS_MAX3                                                   = 3
};

/// Enum /Game/UltraDynamicSky/Blueprints/Enum/UDS_WeatherTypes.UDS_WeatherTypes
/// Size: 0x13
enum UDS_WeatherTypes : uint8_t
{
	UDS_WeatherTypes__NewEnumerator00                                                = 0,
	UDS_WeatherTypes__NewEnumerator11                                                = 1,
	UDS_WeatherTypes__NewEnumerator22                                                = 2,
	UDS_WeatherTypes__NewEnumerator33                                                = 3,
	UDS_WeatherTypes__NewEnumerator114                                               = 4,
	UDS_WeatherTypes__NewEnumerator45                                                = 5,
	UDS_WeatherTypes__NewEnumerator56                                                = 6,
	UDS_WeatherTypes__NewEnumerator67                                                = 7,
	UDS_WeatherTypes__NewEnumerator78                                                = 8,
	UDS_WeatherTypes__NewEnumerator89                                                = 9,
	UDS_WeatherTypes__NewEnumerator910                                               = 10,
	UDS_WeatherTypes__NewEnumerator1011                                              = 11,
	UDS_WeatherTypes__UDS_MAX12                                                      = 12
};

/// Enum /Game/UltraDynamicSky/Blueprints/Enum/UDS_VolRT_Mode.UDS_VolRT_Mode
/// Size: 0x05
enum UDS_VolRT_Mode : uint8_t
{
	UDS_VolRT_Mode__NewEnumerator00                                                  = 0,
	UDS_VolRT_Mode__NewEnumerator11                                                  = 1,
	UDS_VolRT_Mode__NewEnumerator22                                                  = 2,
	UDS_VolRT_Mode__NewEnumerator33                                                  = 3,
	UDS_VolRT_Mode__UDS_VolRT_MAX4                                                   = 4
};

/// Enum /Game/UltraDynamicSky/Blueprints/Enum/UDS_SkyMode.UDS_SkyMode
/// Size: 0x07
enum UDS_SkyMode : uint8_t
{
	UDS_SkyMode__NewEnumerator00                                                     = 0,
	UDS_SkyMode__NewEnumerator61                                                     = 1,
	UDS_SkyMode__NewEnumerator12                                                     = 2,
	UDS_SkyMode__NewEnumerator43                                                     = 3,
	UDS_SkyMode__NewEnumerator24                                                     = 4,
	UDS_SkyMode__NewEnumerator85                                                     = 5,
	UDS_SkyMode__UDS_MAX6                                                            = 6
};

/// Enum /Game/UltraDynamicSky/Blueprints/Enum/UDS_SkyLightMode.UDS_SkyLightMode
/// Size: 0x04
enum UDS_SkyLightMode : uint8_t
{
	UDS_SkyLightMode__NewEnumerator00                                                = 0,
	UDS_SkyLightMode__NewEnumerator11                                                = 1,
	UDS_SkyLightMode__NewEnumerator22                                                = 2,
	UDS_SkyLightMode__UDS_MAX3                                                       = 3
};

/// Enum /Game/UltraDynamicSky/Blueprints/Enum/UDS_Season.UDS_Season
/// Size: 0x05
enum UDS_Season : uint8_t
{
	UDS_Season__NewEnumerator00                                                      = 0,
	UDS_Season__NewEnumerator11                                                      = 1,
	UDS_Season__NewEnumerator22                                                      = 2,
	UDS_Season__NewEnumerator33                                                      = 3,
	UDS_Season__UDS_MAX4                                                             = 4
};

/// Enum /Game/UltraDynamicSky/Blueprints/Enum/UDS_NoiseType.UDS_NoiseType
/// Size: 0x06
enum UDS_NoiseType : uint8_t
{
	UDS_NoiseType__NewEnumerator00                                                   = 0,
	UDS_NoiseType__NewEnumerator11                                                   = 1,
	UDS_NoiseType__NewEnumerator22                                                   = 2,
	UDS_NoiseType__NewEnumerator43                                                   = 3,
	UDS_NoiseType__NewEnumerator34                                                   = 4,
	UDS_NoiseType__UDS_MAX5                                                          = 5
};

/// Enum /Game/UltraDynamicSky/Blueprints/Enum/UDS_FeatureToggle.UDS_FeatureToggle
/// Size: 0x04
enum UDS_FeatureToggle : uint8_t
{
	UDS_FeatureToggle__NewEnumerator00                                               = 0,
	UDS_FeatureToggle__NewEnumerator11                                               = 1,
	UDS_FeatureToggle__NewEnumerator22                                               = 2,
	UDS_FeatureToggle__UDS_MAX3                                                      = 3
};

