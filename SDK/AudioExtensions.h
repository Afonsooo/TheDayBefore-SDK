
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package AudioExtensions.

/// Struct /Script/AudioExtensions.AudioParameter
/// Size: 0x00A0 (0x000000 - 0x0000A0)
struct FAudioParameter
{ 
	FName                                              ParamName;                                                  // 0x0000   (0x0008)  
	float                                              FloatParam;                                                 // 0x0008   (0x0004)  
	bool                                               BoolParam;                                                  // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x000D   (0x0003)  MISSED
	int32_t                                            IntParam;                                                   // 0x0010   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0014   (0x0004)  MISSED
	UObject*                                           ObjectParam;                                                // 0x0018   (0x0008)  
	FString                                            StringParam;                                                // 0x0020   (0x0010)  
	TArray<float>                                      ArrayFloatParam;                                            // 0x0030   (0x0010)  
	TArray<bool>                                       ArrayBoolParam;                                             // 0x0040   (0x0010)  
	TArray<int32_t>                                    ArrayIntParam;                                              // 0x0050   (0x0010)  
	TArray<UObject*>                                   ArrayObjectParam;                                           // 0x0060   (0x0010)  
	TArray<FString>                                    ArrayStringParam;                                           // 0x0070   (0x0010)  
	EAudioParameterType                                ParamType;                                                  // 0x0080   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0081   (0x0003)  MISSED
	FName                                              TypeName;                                                   // 0x0084   (0x0008)  
	unsigned char                                      UnknownData03_6[0x14];                                      // 0x008C   (0x0014)  MISSED
};

/// Class /Script/AudioExtensions.SoundfieldEncodingSettingsBase
/// Size: 0x0000 (0x000028 - 0x000028)
class USoundfieldEncodingSettingsBase : public UObject : UObject
{ 
public:
};

/// Class /Script/AudioExtensions.SpatializationPluginSourceSettingsBase
/// Size: 0x0000 (0x000028 - 0x000028)
class USpatializationPluginSourceSettingsBase : public UObject : UObject
{ 
public:
};

/// Class /Script/AudioExtensions.SourceDataOverridePluginSourceSettingsBase
/// Size: 0x0000 (0x000028 - 0x000028)
class USourceDataOverridePluginSourceSettingsBase : public UObject : UObject
{ 
public:
};

/// Class /Script/AudioExtensions.OcclusionPluginSourceSettingsBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UOcclusionPluginSourceSettingsBase : public UObject : UObject
{ 
public:
};

/// Class /Script/AudioExtensions.ReverbPluginSourceSettingsBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UReverbPluginSourceSettingsBase : public UObject : UObject
{ 
public:
};

/// Class /Script/AudioExtensions.AudioParameterControllerInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UAudioParameterControllerInterface : public UInterface : UInterface
{ 
public:
};

/// Class /Script/AudioExtensions.AudioCodecEncoderSettings
/// Size: 0x0008 (0x000028 - 0x000030)
class UAudioCodecEncoderSettings : public UObject : UObject
{ 
public:
	int32_t                                            Version;                                                    // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Class /Script/AudioExtensions.AudioEndpointSettingsBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UAudioEndpointSettingsBase : public UObject : UObject
{ 
public:
};

/// Class /Script/AudioExtensions.DummyEndpointSettings
/// Size: 0x0000 (0x000028 - 0x000028)
class UDummyEndpointSettings : public UAudioEndpointSettingsBase : UAudioEndpointSettingsBase
{ 
public:
};

/// Class /Script/AudioExtensions.SoundModulatorBase
/// Size: 0x0008 (0x000028 - 0x000030)
class USoundModulatorBase : public UObject : UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/AudioExtensions.SoundfieldEndpointSettingsBase
/// Size: 0x0000 (0x000028 - 0x000028)
class USoundfieldEndpointSettingsBase : public UObject : UObject
{ 
public:
};

/// Class /Script/AudioExtensions.SoundfieldEffectSettingsBase
/// Size: 0x0000 (0x000028 - 0x000028)
class USoundfieldEffectSettingsBase : public UObject : UObject
{ 
public:
};

/// Class /Script/AudioExtensions.SoundfieldEffectBase
/// Size: 0x0008 (0x000028 - 0x000030)
class USoundfieldEffectBase : public UObject : UObject
{ 
public:
	USoundfieldEffectSettingsBase*                     Settings;                                                   // 0x0028   (0x0008)  
};

/// Class /Script/AudioExtensions.WaveformTransformationBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UWaveformTransformationBase : public UObject : UObject
{ 
public:
};

/// Class /Script/AudioExtensions.WaveformTransformationChain
/// Size: 0x0010 (0x000028 - 0x000038)
class UWaveformTransformationChain : public UObject : UObject
{ 
public:
	TArray<UWaveformTransformationBase*>               Transformations;                                            // 0x0028   (0x0010)  
};

/// Class /Script/AudioExtensions.AudioPcmEncoderSettings
/// Size: 0x0008 (0x000030 - 0x000038)
class UAudioPcmEncoderSettings : public UAudioCodecEncoderSettings : UAudioCodecEncoderSettings
{ 
public:
	EPcmBitDepthConversion                             BitDepthConversion;                                         // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Enum /Script/AudioExtensions.EAudioParameterType
/// Size: 0x15
enum EAudioParameterType : uint8_t
{
	EAudioParameterType__None0                                                       = 0,
	EAudioParameterType__Boolean1                                                    = 1,
	EAudioParameterType__Integer2                                                    = 2,
	EAudioParameterType__Float3                                                      = 3,
	EAudioParameterType__String4                                                     = 4,
	EAudioParameterType__Object5                                                     = 5,
	EAudioParameterType__NoneArray6                                                  = 6,
	EAudioParameterType__BooleanArray7                                               = 7,
	EAudioParameterType__IntegerArray8                                               = 8,
	EAudioParameterType__FloatArray9                                                 = 9,
	EAudioParameterType__StringArray10                                               = 10,
	EAudioParameterType__ObjectArray11                                               = 11,
	EAudioParameterType__Trigger12                                                   = 12,
	EAudioParameterType__COUNT13                                                     = 13,
	EAudioParameterType__EAudioParameterType_MAX14                                   = 14
};

/// Enum /Script/AudioExtensions.EPcmBitDepthConversion
/// Size: 0x04
enum EPcmBitDepthConversion : uint8_t
{
	EPcmBitDepthConversion__SameAsSource0                                            = 0,
	EPcmBitDepthConversion__Int161                                                   = 1,
	EPcmBitDepthConversion__Float322                                                 = 2,
	EPcmBitDepthConversion__EPcmBitDepthConversion_MAX3                              = 3
};

