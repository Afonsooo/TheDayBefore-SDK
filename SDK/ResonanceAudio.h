
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package ResonanceAudio.

/// Struct /Script/ResonanceAudio.ResonanceAudioReverbPluginSettings
/// Size: 0x0070 (0x000000 - 0x000070)
struct FResonanceAudioReverbPluginSettings
{ 
	bool                                               bEnableRoomEffects;                                         // 0x0000   (0x0001)  
	bool                                               bGetTransformFromAudioVolume;                               // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0002   (0x0006)  MISSED
	FVector                                            RoomPosition;                                               // 0x0008   (0x0018)  
	FQuat                                              RoomRotation;                                               // 0x0020   (0x0020)  
	FVector                                            RoomDimensions;                                             // 0x0040   (0x0018)  
	ERaMaterialName                                    LeftWallMaterial;                                           // 0x0058   (0x0001)  
	ERaMaterialName                                    RightWallMaterial;                                          // 0x0059   (0x0001)  
	ERaMaterialName                                    FloorMaterial;                                              // 0x005A   (0x0001)  
	ERaMaterialName                                    CeilingMaterial;                                            // 0x005B   (0x0001)  
	ERaMaterialName                                    FrontWallMaterial;                                          // 0x005C   (0x0001)  
	ERaMaterialName                                    BackWallMaterial;                                           // 0x005D   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x005E   (0x0002)  MISSED
	float                                              ReflectionScalar;                                           // 0x0060   (0x0004)  
	float                                              ReverbGain;                                                 // 0x0064   (0x0004)  
	float                                              ReverbTimeModifier;                                         // 0x0068   (0x0004)  
	float                                              ReverbBrightness;                                           // 0x006C   (0x0004)  
};

/// Class /Script/ResonanceAudio.ResonanceAudioSoundfieldSettings
/// Size: 0x0008 (0x000028 - 0x000030)
class UResonanceAudioSoundfieldSettings : public USoundfieldEncodingSettingsBase : USoundfieldEncodingSettingsBase
{ 
public:
	EResonanceRenderMode                               RenderMode;                                                 // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0029   (0x0007)  MISSED
};

/// Class /Script/ResonanceAudio.ResonanceAudioBlueprintFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UResonanceAudioBlueprintFunctionLibrary : public UBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/ResonanceAudio.ResonanceAudioDirectivityVisualizer
/// Size: 0x0080 (0x000290 - 0x000310)
class AResonanceAudioDirectivityVisualizer : public AActor : AActor
{ 
public:
	unsigned char                                      UnknownData00_2[0x70];                                      // 0x0290   (0x0070)  MISSED
	UMaterial*                                         Material;                                                   // 0x0300   (0x0008)  
	UResonanceAudioSpatializationSourceSettings*       Settings;                                                   // 0x0308   (0x0008)  
};

/// Class /Script/ResonanceAudio.ResonanceAudioReverbPluginPreset
/// Size: 0x0108 (0x000068 - 0x000170)
class UResonanceAudioReverbPluginPreset : public USoundEffectSubmixPreset : USoundEffectSubmixPreset
{ 
public:
	unsigned char                                      UnknownData00_2[0x98];                                      // 0x0068   (0x0098)  MISSED
	FResonanceAudioReverbPluginSettings                Settings;                                                   // 0x0100   (0x0070)  


	/// Functions
	// Function /Script/ResonanceAudio.ResonanceAudioReverbPluginPreset.SetRoomRotation
	void SetRoomRotation(FQuat& InRotation);                                                                                 // [0x206ba40] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/ResonanceAudio.ResonanceAudioReverbPluginPreset.SetRoomPosition
	void SetRoomPosition(FVector& InPosition);                                                                               // [0x206b960] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/ResonanceAudio.ResonanceAudioReverbPluginPreset.SetRoomMaterials
	void SetRoomMaterials(TArray<ERaMaterialName>& InMaterials);                                                             // [0x206b860] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ResonanceAudio.ResonanceAudioReverbPluginPreset.SetRoomDimensions
	void SetRoomDimensions(FVector& InDimensions);                                                                           // [0x206b780] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/ResonanceAudio.ResonanceAudioReverbPluginPreset.SetReverbTimeModifier
	void SetReverbTimeModifier(float InReverbTimeModifier);                                                                  // [0x206b6f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ResonanceAudio.ResonanceAudioReverbPluginPreset.SetReverbGain
	void SetReverbGain(float InReverbGain);                                                                                  // [0x206b660] Final|Native|Public|BlueprintCallable 
	// Function /Script/ResonanceAudio.ResonanceAudioReverbPluginPreset.SetReverbBrightness
	void SetReverbBrightness(float InReverbBrightness);                                                                      // [0x206b5d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ResonanceAudio.ResonanceAudioReverbPluginPreset.SetReflectionScalar
	void SetReflectionScalar(float InReflectionScalar);                                                                      // [0x206b540] Final|Native|Public|BlueprintCallable 
	// Function /Script/ResonanceAudio.ResonanceAudioReverbPluginPreset.SetEnableRoomEffects
	void SetEnableRoomEffects(bool bInEnableRoomEffects);                                                                    // [0x206b360] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/ResonanceAudio.ResonanceAudioSettings
/// Size: 0x0068 (0x000028 - 0x000090)
class UResonanceAudioSettings : public UObject : UObject
{ 
public:
	FSoftObjectPath                                    OutputSubmix;                                               // 0x0028   (0x0020)  
	ERaQualityMode                                     QualityMode;                                                // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0049   (0x0007)  MISSED
	FSoftObjectPath                                    GlobalReverbPreset;                                         // 0x0050   (0x0020)  
	FSoftObjectPath                                    GlobalSourcePreset;                                         // 0x0070   (0x0020)  
};

/// Class /Script/ResonanceAudio.ResonanceAudioSpatializationSourceSettings
/// Size: 0x0028 (0x000028 - 0x000050)
class UResonanceAudioSpatializationSourceSettings : public USpatializationPluginSourceSettingsBase : USpatializationPluginSourceSettingsBase
{ 
public:
	ERaSpatializationMethod                            SpatializationMethod;                                       // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0029   (0x0003)  MISSED
	float                                              Pattern;                                                    // 0x002C   (0x0004)  
	float                                              Sharpness;                                                  // 0x0030   (0x0004)  
	bool                                               bToggleVisualization;                                       // 0x0034   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0035   (0x0003)  MISSED
	float                                              Scale;                                                      // 0x0038   (0x0004)  
	float                                              Spread;                                                     // 0x003C   (0x0004)  
	ERaDistanceRolloffModel                            Rolloff;                                                    // 0x0040   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0041   (0x0003)  MISSED
	float                                              MinDistance;                                                // 0x0044   (0x0004)  
	float                                              MaxDistance;                                                // 0x0048   (0x0004)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x004C   (0x0004)  MISSED


	/// Functions
	// Function /Script/ResonanceAudio.ResonanceAudioSpatializationSourceSettings.SetSoundSourceSpread
	void SetSoundSourceSpread(float InSpread);                                                                               // [0x206bbf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ResonanceAudio.ResonanceAudioSpatializationSourceSettings.SetSoundSourceDirectivity
	void SetSoundSourceDirectivity(float InPattern, float InSharpness);                                                      // [0x206bb20] Final|Native|Public|BlueprintCallable 
};

/// Enum /Script/ResonanceAudio.ERaQualityMode
/// Size: 0x05
enum ERaQualityMode : uint8_t
{
	ERaQualityMode__STEREO_PANNING0                                                  = 0,
	ERaQualityMode__BINAURAL_LOW1                                                    = 1,
	ERaQualityMode__BINAURAL_MEDIUM2                                                 = 2,
	ERaQualityMode__BINAURAL_HIGH3                                                   = 3,
	ERaQualityMode__ERaQualityMode_MAX4                                              = 4
};

/// Enum /Script/ResonanceAudio.ERaSpatializationMethod
/// Size: 0x03
enum ERaSpatializationMethod : uint8_t
{
	ERaSpatializationMethod__STEREO_PANNING0                                         = 0,
	ERaSpatializationMethod__HRTF1                                                   = 1,
	ERaSpatializationMethod__ERaSpatializationMethod_MAX2                            = 2
};

/// Enum /Script/ResonanceAudio.ERaDistanceRolloffModel
/// Size: 0x04
enum ERaDistanceRolloffModel : uint8_t
{
	ERaDistanceRolloffModel__LOGARITHMIC0                                            = 0,
	ERaDistanceRolloffModel__LINEAR1                                                 = 1,
	ERaDistanceRolloffModel__NONE2                                                   = 2,
	ERaDistanceRolloffModel__ERaDistanceRolloffModel_MAX3                            = 3
};

/// Enum /Script/ResonanceAudio.ERaMaterialName
/// Size: 0x25
enum ERaMaterialName : uint8_t
{
	ERaMaterialName__TRANSPARENT0                                                    = 0,
	ERaMaterialName__ACOUSTIC_CEILING_TILES1                                         = 1,
	ERaMaterialName__BRICK_BARE2                                                     = 2,
	ERaMaterialName__BRICK_PAINTED3                                                  = 3,
	ERaMaterialName__CONCRETE_BLOCK_COARSE4                                          = 4,
	ERaMaterialName__CONCRETE_BLOCK_PAINTED5                                         = 5,
	ERaMaterialName__CURTAIN_HEAVY6                                                  = 6,
	ERaMaterialName__FIBER_GLASS_INSULATION7                                         = 7,
	ERaMaterialName__GLASS_THIN8                                                     = 8,
	ERaMaterialName__GLASS_THICK9                                                    = 9,
	ERaMaterialName__GRASS10                                                         = 10,
	ERaMaterialName__LINOLEUM_ON_CONCRETE11                                          = 11,
	ERaMaterialName__MARBLE12                                                        = 12,
	ERaMaterialName__METAL13                                                         = 13,
	ERaMaterialName__PARQUET_ONCONCRETE14                                            = 14,
	ERaMaterialName__PLASTER_ROUGH15                                                 = 15,
	ERaMaterialName__PLASTER_SMOOTH16                                                = 16,
	ERaMaterialName__PLYWOOD_PANEL17                                                 = 17,
	ERaMaterialName__POLISHED_CONCRETE_OR_TILE18                                     = 18,
	ERaMaterialName__SHEETROCK19                                                     = 19,
	ERaMaterialName__WATER_OR_ICE_SURFACE20                                          = 20,
	ERaMaterialName__WOOD_CEILING21                                                  = 21,
	ERaMaterialName__WOOD_PANEL22                                                    = 22,
	ERaMaterialName__UNIFORM23                                                       = 23,
	ERaMaterialName__ERaMaterialName_MAX24                                           = 24
};

/// Enum /Script/ResonanceAudio.EResonanceRenderMode
/// Size: 0x06
enum EResonanceRenderMode : uint8_t
{
	EResonanceRenderMode__StereoPanning0                                             = 0,
	EResonanceRenderMode__BinauralLowQuality1                                        = 1,
	EResonanceRenderMode__BinauralMediumQuality2                                     = 2,
	EResonanceRenderMode__BinauralHighQuality3                                       = 3,
	EResonanceRenderMode__RoomEffectsOnly4                                           = 4,
	EResonanceRenderMode__EResonanceRenderMode_MAX5                                  = 5
};

