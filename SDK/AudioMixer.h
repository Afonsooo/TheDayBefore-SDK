
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package AudioMixer.

/// Struct /Script/AudioMixer.AudioOutputDeviceInfo
/// Size: 0x0048 (0x000000 - 0x000048)
struct FAudioOutputDeviceInfo
{ 
	FString                                            Name;                                                       // 0x0000   (0x0010)  
	FString                                            DeviceID;                                                   // 0x0010   (0x0010)  
	int32_t                                            NumChannels;                                                // 0x0020   (0x0004)  
	int32_t                                            SampleRate;                                                 // 0x0024   (0x0004)  
	EAudioMixerStreamDataFormatType                    Format;                                                     // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0029   (0x0007)  MISSED
	TArray<EAudioMixerChannelType>                     OutputChannelArray;                                         // 0x0030   (0x0010)  
	bool                                               bIsSystemDefault : 1;                                       // 0x0040:0 (0x0001)  
	bool                                               bIsCurrentDevice : 1;                                       // 0x0040:1 (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0041   (0x0007)  MISSED
};

/// Struct /Script/AudioMixer.SwapAudioOutputResult
/// Size: 0x0028 (0x000000 - 0x000028)
struct FSwapAudioOutputResult
{ 
	FString                                            CurrentDeviceId;                                            // 0x0000   (0x0010)  
	FString                                            RequestedDeviceId;                                          // 0x0010   (0x0010)  
	ESwapAudioOutputDeviceResultState                  Result;                                                     // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Struct /Script/AudioMixer.SubmixEffectDynamicProcessorFilterSettings
/// Size: 0x000C (0x000000 - 0x00000C)
struct FSubmixEffectDynamicProcessorFilterSettings
{ 
	bool                                               bEnabled : 1;                                               // 0x0000:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              Cutoff;                                                     // 0x0004   (0x0004)  
	float                                              GainDb;                                                     // 0x0008   (0x0004)  
};

/// Struct /Script/AudioMixer.SubmixEffectDynamicsProcessorSettings
/// Size: 0x0060 (0x000000 - 0x000060)
struct FSubmixEffectDynamicsProcessorSettings
{ 
	ESubmixEffectDynamicsProcessorType                 DynamicsProcessorType;                                      // 0x0000   (0x0001)  
	ESubmixEffectDynamicsPeakMode                      PeakMode;                                                   // 0x0001   (0x0001)  
	ESubmixEffectDynamicsChannelLinkMode               LinkMode;                                                   // 0x0002   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0003   (0x0001)  MISSED
	float                                              InputGainDb;                                                // 0x0004   (0x0004)  
	float                                              ThresholdDb;                                                // 0x0008   (0x0004)  
	float                                              Ratio;                                                      // 0x000C   (0x0004)  
	float                                              KneeBandwidthDb;                                            // 0x0010   (0x0004)  
	float                                              LookAheadMsec;                                              // 0x0014   (0x0004)  
	float                                              AttackTimeMsec;                                             // 0x0018   (0x0004)  
	float                                              ReleaseTimeMsec;                                            // 0x001C   (0x0004)  
	ESubmixEffectDynamicsKeySource                     KeySource;                                                  // 0x0020   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0021   (0x0007)  MISSED
	UAudioBus*                                         ExternalAudioBus;                                           // 0x0028   (0x0008)  
	USoundSubmix*                                      ExternalSubmix;                                             // 0x0030   (0x0008)  
	bool                                               bChannelLinked : 1;                                         // 0x0038:0 (0x0001)  
	bool                                               bAnalogMode : 1;                                            // 0x0038:1 (0x0001)  
	bool                                               bBypass : 1;                                                // 0x0038:2 (0x0001)  
	bool                                               bKeyAudition : 1;                                           // 0x0038:3 (0x0001)  
	unsigned char                                      UnknownData02_4[0x3];                                       // 0x0039   (0x0003)  MISSED
	float                                              KeyGainDb;                                                  // 0x003C   (0x0004)  
	float                                              OutputGainDb;                                               // 0x0040   (0x0004)  
	FSubmixEffectDynamicProcessorFilterSettings        KeyHighshelf;                                               // 0x0044   (0x000C)  
	FSubmixEffectDynamicProcessorFilterSettings        KeyLowshelf;                                                // 0x0050   (0x000C)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x005C   (0x0004)  MISSED
};

/// Struct /Script/AudioMixer.SubmixEffectEQBand
/// Size: 0x0010 (0x000000 - 0x000010)
struct FSubmixEffectEQBand
{ 
	float                                              Frequency;                                                  // 0x0000   (0x0004)  
	float                                              Bandwidth;                                                  // 0x0004   (0x0004)  
	float                                              GainDb;                                                     // 0x0008   (0x0004)  
	bool                                               bEnabled : 1;                                               // 0x000C:0 (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x000D   (0x0003)  MISSED
};

/// Struct /Script/AudioMixer.SubmixEffectSubmixEQSettings
/// Size: 0x0010 (0x000000 - 0x000010)
struct FSubmixEffectSubmixEQSettings
{ 
	TArray<FSubmixEffectEQBand>                        EQBands;                                                    // 0x0000   (0x0010)  
};

/// Struct /Script/AudioMixer.SubmixEffectReverbSettings
/// Size: 0x0040 (0x000000 - 0x000040)
struct FSubmixEffectReverbSettings
{ 
	bool                                               bBypassEarlyReflections;                                    // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              ReflectionsDelay;                                           // 0x0004   (0x0004)  
	float                                              GainHF;                                                     // 0x0008   (0x0004)  
	float                                              ReflectionsGain;                                            // 0x000C   (0x0004)  
	bool                                               bBypassLateReflections;                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0011   (0x0003)  MISSED
	float                                              LateDelay;                                                  // 0x0014   (0x0004)  
	float                                              DecayTime;                                                  // 0x0018   (0x0004)  
	float                                              Density;                                                    // 0x001C   (0x0004)  
	float                                              Diffusion;                                                  // 0x0020   (0x0004)  
	float                                              AirAbsorptionGainHF;                                        // 0x0024   (0x0004)  
	float                                              DecayHFRatio;                                               // 0x0028   (0x0004)  
	float                                              LateGain;                                                   // 0x002C   (0x0004)  
	float                                              Gain;                                                       // 0x0030   (0x0004)  
	float                                              WetLevel;                                                   // 0x0034   (0x0004)  
	float                                              DryLevel;                                                   // 0x0038   (0x0004)  
	bool                                               bBypass;                                                    // 0x003C   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x003D   (0x0003)  MISSED
};

/// Class /Script/AudioMixer.SynthComponent
/// Size: 0x04F0 (0x0002A0 - 0x000790)
class USynthComponent : public USceneComponent : USceneComponent
{ 
public:
	bool                                               bAutoDestroy : 1;                                           // 0x02A0:0 (0x0001)  
	bool                                               bStopWhenOwnerDestroyed : 1;                                // 0x02A0:1 (0x0001)  
	bool                                               bAllowSpatialization : 1;                                   // 0x02A0:2 (0x0001)  
	bool                                               bOverrideAttenuation : 1;                                   // 0x02A0:3 (0x0001)  
	unsigned char                                      UnknownData00_3[0x3];                                       // 0x02A1   (0x0003)  MISSED
	bool                                               bEnableBusSends : 1;                                        // 0x02A4:0 (0x0001)  
	bool                                               bEnableBaseSubmix : 1;                                      // 0x02A4:1 (0x0001)  
	bool                                               bEnableSubmixSends : 1;                                     // 0x02A4:2 (0x0001)  
	unsigned char                                      UnknownData01_4[0x3];                                       // 0x02A5   (0x0003)  MISSED
	USoundAttenuation*                                 AttenuationSettings;                                        // 0x02A8   (0x0008)  
	FSoundAttenuationSettings                          AttenuationOverrides;                                       // 0x02B0   (0x03C8)  
	USoundConcurrency*                                 ConcurrencySettings;                                        // 0x0678   (0x0008)  
	TSet<USoundConcurrency*>                           ConcurrencySet;                                             // 0x0680   (0x0050)  
	USoundClass*                                       SoundClass;                                                 // 0x06D0   (0x0008)  
	USoundEffectSourcePresetChain*                     SourceEffectChain;                                          // 0x06D8   (0x0008)  
	USoundSubmixBase*                                  SoundSubmix;                                                // 0x06E0   (0x0008)  
	TArray<FSoundSubmixSendInfo>                       SoundSubmixSends;                                           // 0x06E8   (0x0010)  
	TArray<FSoundSourceBusSendInfo>                    BusSends;                                                   // 0x06F8   (0x0010)  
	TArray<FSoundSourceBusSendInfo>                    PreEffectBusSends;                                          // 0x0708   (0x0010)  
	bool                                               bIsUISound : 1;                                             // 0x0718:0 (0x0001)  
	bool                                               bIsPreviewSound : 1;                                        // 0x0718:1 (0x0001)  
	unsigned char                                      UnknownData02_4[0x3];                                       // 0x0719   (0x0003)  MISSED
	int32_t                                            EnvelopeFollowerAttackTime;                                 // 0x071C   (0x0004)  
	int32_t                                            EnvelopeFollowerReleaseTime;                                // 0x0720   (0x0004)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x0724   (0x0004)  MISSED
	FMulticastInlineDelegate                           OnAudioEnvelopeValue;                                       // 0x0728   (0x0010)  
	unsigned char                                      UnknownData04_5[0x20];                                      // 0x0738   (0x0020)  MISSED
	USynthSound*                                       Synth;                                                      // 0x0758   (0x0008)  
	UAudioComponent*                                   AudioComponent;                                             // 0x0760   (0x0008)  
	unsigned char                                      UnknownData05_6[0x28];                                      // 0x0768   (0x0028)  MISSED


	/// Functions
	// Function /Script/AudioMixer.SynthComponent.Stop
	void Stop();                                                                                                             // [0x3afff10] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.SynthComponent.Start
	void Start();                                                                                                            // [0x3aff6f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.SynthComponent.SetVolumeMultiplier
	void SetVolumeMultiplier(float VolumeMultiplier);                                                                        // [0x3aff660] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.SynthComponent.SetSubmixSend
	void SetSubmixSend(USoundSubmixBase* Submix, float SendLevel);                                                           // [0x3aff010] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.SynthComponent.SetOutputToBusOnly
	void SetOutputToBusOnly(bool bInOutputToBusOnly);                                                                        // [0x3afe6d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.SynthComponent.SetLowPassFilterFrequency
	void SetLowPassFilterFrequency(float InLowPassFilterFrequency);                                                          // [0x3afe390] Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.SynthComponent.SetLowPassFilterEnabled
	void SetLowPassFilterEnabled(bool InLowPassFilterEnabled);                                                               // [0x3afe300] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.SynthComponent.IsPlaying
	bool IsPlaying();                                                                                                        // [0x3afc240] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AudioMixer.SynthComponent.FadeOut
	void FadeOut(float FadeOutDuration, float FadeVolumeLevel, EAudioFaderCurve FadeCurve);                                  // [0x3afa7a0] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/AudioMixer.SynthComponent.FadeIn
	void FadeIn(float FadeInDuration, float FadeVolumeLevel, float StartTime, EAudioFaderCurve FadeCurve);                   // [0x3afa630] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/AudioMixer.SynthComponent.AdjustVolume
	void AdjustVolume(float AdjustVolumeDuration, float AdjustVolumeLevel, EAudioFaderCurve FadeCurve);                      // [0x3af9990] Final|Native|Public|BlueprintCallable|Const 
};

/// Class /Script/AudioMixer.AudioGenerator
/// Size: 0x0080 (0x000028 - 0x0000A8)
class UAudioGenerator : public UObject : UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x80];                                      // 0x0028   (0x0080)  MISSED
};

/// Class /Script/AudioMixer.AudioBusSubsystem
/// Size: 0x0060 (0x000030 - 0x000090)
class UAudioBusSubsystem : public UAudioEngineSubsystem : UAudioEngineSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x60];                                      // 0x0030   (0x0060)  MISSED
};

/// Class /Script/AudioMixer.AudioDeviceNotificationSubsystem
/// Size: 0x00F8 (0x000030 - 0x000128)
class UAudioDeviceNotificationSubsystem : public UEngineSubsystem : UEngineSubsystem
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0030   (0x0008)  MISSED
	FMulticastInlineDelegate                           DefaultCaptureDeviceChanged;                                // 0x0038   (0x0010)  
	unsigned char                                      UnknownData01_5[0x18];                                      // 0x0048   (0x0018)  MISSED
	FMulticastInlineDelegate                           DefaultRenderDeviceChanged;                                 // 0x0060   (0x0010)  
	unsigned char                                      UnknownData02_5[0x18];                                      // 0x0070   (0x0018)  MISSED
	FMulticastInlineDelegate                           DeviceAdded;                                                // 0x0088   (0x0010)  
	unsigned char                                      UnknownData03_5[0x18];                                      // 0x0098   (0x0018)  MISSED
	FMulticastInlineDelegate                           DeviceRemoved;                                              // 0x00B0   (0x0010)  
	unsigned char                                      UnknownData04_5[0x18];                                      // 0x00C0   (0x0018)  MISSED
	FMulticastInlineDelegate                           DeviceStateChanged;                                         // 0x00D8   (0x0010)  
	unsigned char                                      UnknownData05_5[0x18];                                      // 0x00E8   (0x0018)  MISSED
	FMulticastInlineDelegate                           DeviceSwitched;                                             // 0x0100   (0x0010)  
	unsigned char                                      UnknownData06_6[0x18];                                      // 0x0110   (0x0018)  MISSED
};

/// Class /Script/AudioMixer.AudioMixerBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UAudioMixerBlueprintLibrary : public UBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/AudioMixer.SynthSound
/// Size: 0x0020 (0x0004A0 - 0x0004C0)
class USynthSound : public USoundWaveProcedural : USoundWaveProcedural
{ 
public:
	TWeakObjectPtr<USynthComponent*>                   OwningSynthComponent;                                       // 0x04A0   (0x0008)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x04A8   (0x0018)  MISSED
};

/// Class /Script/AudioMixer.SubmixEffectDynamicsProcessorPreset
/// Size: 0x00E8 (0x000068 - 0x000150)
class USubmixEffectDynamicsProcessorPreset : public USoundEffectSubmixPreset : USoundEffectSubmixPreset
{ 
public:
	unsigned char                                      UnknownData00_2[0x88];                                      // 0x0068   (0x0088)  MISSED
	FSubmixEffectDynamicsProcessorSettings             Settings;                                                   // 0x00F0   (0x0060)  


	/// Functions
	// Function /Script/AudioMixer.SubmixEffectDynamicsProcessorPreset.SetSettings
	void SetSettings(FSubmixEffectDynamicsProcessorSettings& Settings);                                                      // [0x3afea10] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioMixer.SubmixEffectDynamicsProcessorPreset.SetExternalSubmix
	void SetExternalSubmix(USoundSubmix* Submix);                                                                            // [0x3afe1f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.SubmixEffectDynamicsProcessorPreset.SetAudioBus
	void SetAudioBus(UAudioBus* AudioBus);                                                                                   // [0x3afdc00] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.SubmixEffectDynamicsProcessorPreset.ResetKey
	void ResetKey();                                                                                                         // [0x3afd560] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AudioMixer.SubmixEffectSubmixEQPreset
/// Size: 0x0048 (0x000068 - 0x0000B0)
class USubmixEffectSubmixEQPreset : public USoundEffectSubmixPreset : USoundEffectSubmixPreset
{ 
public:
	unsigned char                                      UnknownData00_2[0x38];                                      // 0x0068   (0x0038)  MISSED
	FSubmixEffectSubmixEQSettings                      Settings;                                                   // 0x00A0   (0x0010)  


	/// Functions
	// Function /Script/AudioMixer.SubmixEffectSubmixEQPreset.SetSettings
	void SetSettings(FSubmixEffectSubmixEQSettings& InSettings);                                                             // [0x20db1f0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/AudioMixer.SubmixEffectReverbPreset
/// Size: 0x00A8 (0x000068 - 0x000110)
class USubmixEffectReverbPreset : public USoundEffectSubmixPreset : USoundEffectSubmixPreset
{ 
public:
	unsigned char                                      UnknownData00_2[0x68];                                      // 0x0068   (0x0068)  MISSED
	FSubmixEffectReverbSettings                        Settings;                                                   // 0x00D0   (0x0040)  


	/// Functions
	// Function /Script/AudioMixer.SubmixEffectReverbPreset.SetSettingsWithReverbEffect
	void SetSettingsWithReverbEffect(UReverbEffect* InReverbEffect, float WetLevel, float DryLevel);                         // [0x3afecd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.SubmixEffectReverbPreset.SetSettings
	void SetSettings(FSubmixEffectReverbSettings& InSettings);                                                               // [0x3afeba0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/AudioMixer.QuartzClockHandle
/// Size: 0x01C0 (0x000028 - 0x0001E8)
class UQuartzClockHandle : public UObject : UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x1C0];                                     // 0x0028   (0x01C0)  MISSED
};

/// Class /Script/AudioMixer.QuartzSubsystem
/// Size: 0x0020 (0x000040 - 0x000060)
class UQuartzSubsystem : public UTickableWorldSubsystem : UTickableWorldSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0040   (0x0020)  MISSED
};

/// Enum /Script/AudioMixer.EAudioDeviceChangedRole
/// Size: 0x06
enum EAudioDeviceChangedRole : uint8_t
{
	EAudioDeviceChangedRole__Invalid0                                                = 0,
	EAudioDeviceChangedRole__Console1                                                = 1,
	EAudioDeviceChangedRole__Multimedia2                                             = 2,
	EAudioDeviceChangedRole__Communications3                                         = 3,
	EAudioDeviceChangedRole__Count4                                                  = 4,
	EAudioDeviceChangedRole__EAudioDeviceChangedRole_MAX5                            = 5
};

/// Enum /Script/AudioMixer.EAudioDeviceChangedState
/// Size: 0x07
enum EAudioDeviceChangedState : uint8_t
{
	EAudioDeviceChangedState__Invalid0                                               = 0,
	EAudioDeviceChangedState__Active1                                                = 1,
	EAudioDeviceChangedState__Disabled2                                              = 2,
	EAudioDeviceChangedState__NotPresent3                                            = 3,
	EAudioDeviceChangedState__Unplugged4                                             = 4,
	EAudioDeviceChangedState__Count5                                                 = 5,
	EAudioDeviceChangedState__EAudioDeviceChangedState_MAX6                          = 6
};

/// Enum /Script/AudioMixer.EAudioMixerChannelType
/// Size: 0x22
enum EAudioMixerChannelType : uint8_t
{
	EAudioMixerChannelType__FrontLeft0                                               = 0,
	EAudioMixerChannelType__FrontRight1                                              = 1,
	EAudioMixerChannelType__FrontCenter2                                             = 2,
	EAudioMixerChannelType__LowFrequency3                                            = 3,
	EAudioMixerChannelType__BackLeft4                                                = 4,
	EAudioMixerChannelType__BackRight5                                               = 5,
	EAudioMixerChannelType__FrontLeftOfCenter6                                       = 6,
	EAudioMixerChannelType__FrontRightOfCenter7                                      = 7,
	EAudioMixerChannelType__BackCenter8                                              = 8,
	EAudioMixerChannelType__SideLeft9                                                = 9,
	EAudioMixerChannelType__SideRight10                                              = 10,
	EAudioMixerChannelType__TopCenter11                                              = 11,
	EAudioMixerChannelType__TopFrontLeft12                                           = 12,
	EAudioMixerChannelType__TopFrontCenter13                                         = 13,
	EAudioMixerChannelType__TopFrontRight14                                          = 14,
	EAudioMixerChannelType__TopBackLeft15                                            = 15,
	EAudioMixerChannelType__TopBackCenter16                                          = 16,
	EAudioMixerChannelType__TopBackRight17                                           = 17,
	EAudioMixerChannelType__Unknown18                                                = 18,
	EAudioMixerChannelType__ChannelTypeCount19                                       = 19,
	EAudioMixerChannelType__DefaultChannel20                                         = 0,
	EAudioMixerChannelType__EAudioMixerChannelType_MAX21                             = 20
};

/// Enum /Script/AudioMixer.EAudioMixerStreamDataFormatType
/// Size: 0x05
enum EAudioMixerStreamDataFormatType : uint8_t
{
	EAudioMixerStreamDataFormatType__Unknown0                                        = 0,
	EAudioMixerStreamDataFormatType__Float1                                          = 1,
	EAudioMixerStreamDataFormatType__Int162                                          = 2,
	EAudioMixerStreamDataFormatType__Unsupported3                                    = 3,
	EAudioMixerStreamDataFormatType__EAudioMixerStreamDataFormatType_MAX4            = 4
};

/// Enum /Script/AudioMixer.ESwapAudioOutputDeviceResultState
/// Size: 0x04
enum ESwapAudioOutputDeviceResultState : uint8_t
{
	ESwapAudioOutputDeviceResultState__Failure0                                      = 0,
	ESwapAudioOutputDeviceResultState__Success1                                      = 1,
	ESwapAudioOutputDeviceResultState__None2                                         = 2,
	ESwapAudioOutputDeviceResultState__ESwapAudioOutputDeviceResultState_MAX3        = 3
};

/// Enum /Script/AudioMixer.EMusicalNoteName
/// Size: 0x13
enum EMusicalNoteName : uint8_t
{
	EMusicalNoteName__C0                                                             = 0,
	EMusicalNoteName__Db1                                                            = 1,
	EMusicalNoteName__D2                                                             = 2,
	EMusicalNoteName__Eb3                                                            = 3,
	EMusicalNoteName__E4                                                             = 4,
	EMusicalNoteName__F5                                                             = 5,
	EMusicalNoteName__Gb6                                                            = 6,
	EMusicalNoteName__G7                                                             = 7,
	EMusicalNoteName__Ab8                                                            = 8,
	EMusicalNoteName__A9                                                             = 9,
	EMusicalNoteName__Bb10                                                           = 10,
	EMusicalNoteName__B11                                                            = 11,
	EMusicalNoteName__EMusicalNoteName_MAX12                                         = 12
};

/// Enum /Script/AudioMixer.ESubmixEffectDynamicsProcessorType
/// Size: 0x07
enum ESubmixEffectDynamicsProcessorType : uint8_t
{
	ESubmixEffectDynamicsProcessorType__Compressor0                                  = 0,
	ESubmixEffectDynamicsProcessorType__Limiter1                                     = 1,
	ESubmixEffectDynamicsProcessorType__Expander2                                    = 2,
	ESubmixEffectDynamicsProcessorType__Gate3                                        = 3,
	ESubmixEffectDynamicsProcessorType__UpwardsCompressor4                           = 4,
	ESubmixEffectDynamicsProcessorType__Count5                                       = 5,
	ESubmixEffectDynamicsProcessorType__ESubmixEffectDynamicsProcessorType_MAX6      = 6
};

/// Enum /Script/AudioMixer.ESubmixEffectDynamicsPeakMode
/// Size: 0x05
enum ESubmixEffectDynamicsPeakMode : uint8_t
{
	ESubmixEffectDynamicsPeakMode__MeanSquared0                                      = 0,
	ESubmixEffectDynamicsPeakMode__RootMeanSquared1                                  = 1,
	ESubmixEffectDynamicsPeakMode__Peak2                                             = 2,
	ESubmixEffectDynamicsPeakMode__Count3                                            = 3,
	ESubmixEffectDynamicsPeakMode__ESubmixEffectDynamicsPeakMode_MAX4                = 4
};

/// Enum /Script/AudioMixer.ESubmixEffectDynamicsChannelLinkMode
/// Size: 0x05
enum ESubmixEffectDynamicsChannelLinkMode : uint8_t
{
	ESubmixEffectDynamicsChannelLinkMode__Disabled0                                  = 0,
	ESubmixEffectDynamicsChannelLinkMode__Average1                                   = 1,
	ESubmixEffectDynamicsChannelLinkMode__Peak2                                      = 2,
	ESubmixEffectDynamicsChannelLinkMode__Count3                                     = 3,
	ESubmixEffectDynamicsChannelLinkMode__ESubmixEffectDynamicsChannelLinkMode_MAX4  = 4
};

/// Enum /Script/AudioMixer.ESubmixEffectDynamicsKeySource
/// Size: 0x05
enum ESubmixEffectDynamicsKeySource : uint8_t
{
	ESubmixEffectDynamicsKeySource__Default0                                         = 0,
	ESubmixEffectDynamicsKeySource__AudioBus1                                        = 1,
	ESubmixEffectDynamicsKeySource__Submix2                                          = 2,
	ESubmixEffectDynamicsKeySource__Count3                                           = 3,
	ESubmixEffectDynamicsKeySource__ESubmixEffectDynamicsKeySource_MAX4              = 4
};

