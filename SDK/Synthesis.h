
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package Synthesis.

/// Struct /Script/Synthesis.Synth1PatchCable
/// Size: 0x0008 (0x000000 - 0x000008)
struct FSynth1PatchCable
{ 
	float                                              Depth;                                                      // 0x0000   (0x0004)  
	ESynth1PatchDestination                            Destination;                                                // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0005   (0x0003)  MISSED
};

/// Struct /Script/Synthesis.PatchId
/// Size: 0x0004 (0x000000 - 0x000004)
struct FPatchId
{ 
	int32_t                                            ID;                                                         // 0x0000   (0x0004)  
};

/// Struct /Script/Synthesis.EpicSynth1Patch
/// Size: 0x0018 (0x000000 - 0x000018)
struct FEpicSynth1Patch
{ 
	ESynth1PatchSource                                 PatchSource;                                                // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	TArray<FSynth1PatchCable>                          PatchCables;                                                // 0x0008   (0x0010)  
};

/// Struct /Script/Synthesis.ModularSynthPreset
/// Size: 0x00D8 (0x000008 - 0x0000E0)
struct FModularSynthPreset : FTableRowBase
{ 
	bool                                               bEnablePolyphony : 1;                                       // 0x0008:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x0009   (0x0003)  MISSED
	ESynth1OscType                                     Osc1Type;                                                   // 0x000C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x000D   (0x0003)  MISSED
	float                                              Osc1Gain;                                                   // 0x0010   (0x0004)  
	float                                              Osc1Octave;                                                 // 0x0014   (0x0004)  
	float                                              Osc1Semitones;                                              // 0x0018   (0x0004)  
	float                                              Osc1Cents;                                                  // 0x001C   (0x0004)  
	float                                              Osc1PulseWidth;                                             // 0x0020   (0x0004)  
	ESynth1OscType                                     Osc2Type;                                                   // 0x0024   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0025   (0x0003)  MISSED
	float                                              Osc2Gain;                                                   // 0x0028   (0x0004)  
	float                                              Osc2Octave;                                                 // 0x002C   (0x0004)  
	float                                              Osc2Semitones;                                              // 0x0030   (0x0004)  
	float                                              Osc2Cents;                                                  // 0x0034   (0x0004)  
	float                                              Osc2PulseWidth;                                             // 0x0038   (0x0004)  
	float                                              Portamento;                                                 // 0x003C   (0x0004)  
	bool                                               bEnableUnison : 1;                                          // 0x0040:0 (0x0001)  
	bool                                               bEnableOscillatorSync : 1;                                  // 0x0040:1 (0x0001)  
	unsigned char                                      UnknownData03_4[0x3];                                       // 0x0041   (0x0003)  MISSED
	float                                              Spread;                                                     // 0x0044   (0x0004)  
	float                                              Pan;                                                        // 0x0048   (0x0004)  
	float                                              LFO1Frequency;                                              // 0x004C   (0x0004)  
	float                                              LFO1Gain;                                                   // 0x0050   (0x0004)  
	ESynthLFOType                                      LFO1Type;                                                   // 0x0054   (0x0001)  
	ESynthLFOMode                                      LFO1Mode;                                                   // 0x0055   (0x0001)  
	ESynthLFOPatchType                                 LFO1PatchType;                                              // 0x0056   (0x0001)  
	unsigned char                                      UnknownData04_5[0x1];                                       // 0x0057   (0x0001)  MISSED
	float                                              LFO2Frequency;                                              // 0x0058   (0x0004)  
	float                                              LFO2Gain;                                                   // 0x005C   (0x0004)  
	ESynthLFOType                                      LFO2Type;                                                   // 0x0060   (0x0001)  
	ESynthLFOMode                                      LFO2Mode;                                                   // 0x0061   (0x0001)  
	ESynthLFOPatchType                                 LFO2PatchType;                                              // 0x0062   (0x0001)  
	unsigned char                                      UnknownData05_5[0x1];                                       // 0x0063   (0x0001)  MISSED
	float                                              GainDb;                                                     // 0x0064   (0x0004)  
	float                                              AttackTime;                                                 // 0x0068   (0x0004)  
	float                                              DecayTime;                                                  // 0x006C   (0x0004)  
	float                                              SustainGain;                                                // 0x0070   (0x0004)  
	float                                              ReleaseTime;                                                // 0x0074   (0x0004)  
	ESynthModEnvPatch                                  ModEnvPatchType;                                            // 0x0078   (0x0001)  
	ESynthModEnvBiasPatch                              ModEnvBiasPatchType;                                        // 0x0079   (0x0001)  
	unsigned char                                      UnknownData06_5[0x2];                                       // 0x007A   (0x0002)  MISSED
	bool                                               bInvertModulationEnvelope : 1;                              // 0x007C:0 (0x0001)  
	bool                                               bInvertModulationEnvelopeBias : 1;                          // 0x007C:1 (0x0001)  
	unsigned char                                      UnknownData07_4[0x3];                                       // 0x007D   (0x0003)  MISSED
	float                                              ModulationEnvelopeDepth;                                    // 0x0080   (0x0004)  
	float                                              ModulationEnvelopeAttackTime;                               // 0x0084   (0x0004)  
	float                                              ModulationEnvelopeDecayTime;                                // 0x0088   (0x0004)  
	float                                              ModulationEnvelopeSustainGain;                              // 0x008C   (0x0004)  
	float                                              ModulationEnvelopeReleaseTime;                              // 0x0090   (0x0004)  
	bool                                               bLegato : 1;                                                // 0x0094:0 (0x0001)  
	bool                                               bRetrigger : 1;                                             // 0x0094:1 (0x0001)  
	unsigned char                                      UnknownData08_4[0x3];                                       // 0x0095   (0x0003)  MISSED
	float                                              FilterFrequency;                                            // 0x0098   (0x0004)  
	float                                              FilterQ;                                                    // 0x009C   (0x0004)  
	ESynthFilterType                                   FilterType;                                                 // 0x00A0   (0x0001)  
	ESynthFilterAlgorithm                              FilterAlgorithm;                                            // 0x00A1   (0x0001)  
	unsigned char                                      UnknownData09_5[0x2];                                       // 0x00A2   (0x0002)  MISSED
	bool                                               bStereoDelayEnabled : 1;                                    // 0x00A4:0 (0x0001)  
	unsigned char                                      UnknownData10_4[0x3];                                       // 0x00A5   (0x0003)  MISSED
	ESynthStereoDelayMode                              StereoDelayMode;                                            // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData11_5[0x3];                                       // 0x00A9   (0x0003)  MISSED
	float                                              StereoDelayTime;                                            // 0x00AC   (0x0004)  
	float                                              StereoDelayFeedback;                                        // 0x00B0   (0x0004)  
	float                                              StereoDelayWetlevel;                                        // 0x00B4   (0x0004)  
	float                                              StereoDelayRatio;                                           // 0x00B8   (0x0004)  
	bool                                               bChorusEnabled : 1;                                         // 0x00BC:0 (0x0001)  
	unsigned char                                      UnknownData12_4[0x3];                                       // 0x00BD   (0x0003)  MISSED
	float                                              ChorusDepth;                                                // 0x00C0   (0x0004)  
	float                                              ChorusFeedback;                                             // 0x00C4   (0x0004)  
	float                                              ChorusFrequency;                                            // 0x00C8   (0x0004)  
	unsigned char                                      UnknownData13_5[0x4];                                       // 0x00CC   (0x0004)  MISSED
	TArray<FEpicSynth1Patch>                           Patches;                                                    // 0x00D0   (0x0010)  
};

/// Struct /Script/Synthesis.ModularSynthPresetBankEntry
/// Size: 0x00F0 (0x000000 - 0x0000F0)
struct FModularSynthPresetBankEntry
{ 
	FString                                            PresetName;                                                 // 0x0000   (0x0010)  
	FModularSynthPreset                                Preset;                                                     // 0x0010   (0x00E0)  
};

/// Struct /Script/Synthesis.SourceEffectBitCrusherBaseSettings
/// Size: 0x0008 (0x000000 - 0x000008)
struct FSourceEffectBitCrusherBaseSettings
{ 
	float                                              SampleRate;                                                 // 0x0000   (0x0004)  
	float                                              BitDepth;                                                   // 0x0004   (0x0004)  
};

/// Struct /Script/Synthesis.SourceEffectBitCrusherSettings
/// Size: 0x00D0 (0x000000 - 0x0000D0)
struct FSourceEffectBitCrusherSettings
{ 
	float                                              CrushedSampleRate;                                          // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	FSoundModulationDestinationSettings                SampleRateModulation;                                       // 0x0008   (0x0060)  
	float                                              CrushedBits;                                                // 0x0068   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x006C   (0x0004)  MISSED
	FSoundModulationDestinationSettings                BitModulation;                                              // 0x0070   (0x0060)  
};

/// Struct /Script/Synthesis.SourceEffectChorusBaseSettings
/// Size: 0x0018 (0x000000 - 0x000018)
struct FSourceEffectChorusBaseSettings
{ 
	float                                              Depth;                                                      // 0x0000   (0x0004)  
	float                                              Frequency;                                                  // 0x0004   (0x0004)  
	float                                              Feedback;                                                   // 0x0008   (0x0004)  
	float                                              WetLevel;                                                   // 0x000C   (0x0004)  
	float                                              DryLevel;                                                   // 0x0010   (0x0004)  
	float                                              Spread;                                                     // 0x0014   (0x0004)  
};

/// Struct /Script/Synthesis.SourceEffectChorusSettings
/// Size: 0x0258 (0x000000 - 0x000258)
struct FSourceEffectChorusSettings
{ 
	float                                              Depth;                                                      // 0x0000   (0x0004)  
	float                                              Frequency;                                                  // 0x0004   (0x0004)  
	float                                              Feedback;                                                   // 0x0008   (0x0004)  
	float                                              WetLevel;                                                   // 0x000C   (0x0004)  
	float                                              DryLevel;                                                   // 0x0010   (0x0004)  
	float                                              Spread;                                                     // 0x0014   (0x0004)  
	FSoundModulationDestinationSettings                DepthModulation;                                            // 0x0018   (0x0060)  
	FSoundModulationDestinationSettings                FrequencyModulation;                                        // 0x0078   (0x0060)  
	FSoundModulationDestinationSettings                FeedbackModulation;                                         // 0x00D8   (0x0060)  
	FSoundModulationDestinationSettings                WetModulation;                                              // 0x0138   (0x0060)  
	FSoundModulationDestinationSettings                DryModulation;                                              // 0x0198   (0x0060)  
	FSoundModulationDestinationSettings                SpreadModulation;                                           // 0x01F8   (0x0060)  
};

/// Struct /Script/Synthesis.SourceEffectConvolutionReverbSettings
/// Size: 0x0010 (0x000000 - 0x000010)
struct FSourceEffectConvolutionReverbSettings
{ 
	float                                              NormalizationVolumeDb;                                      // 0x0000   (0x0004)  
	float                                              WetVolumeDb;                                                // 0x0004   (0x0004)  
	float                                              DryVolumeDb;                                                // 0x0008   (0x0004)  
	bool                                               bBypass;                                                    // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x000D   (0x0003)  MISSED
};

/// Struct /Script/Synthesis.SourceEffectDynamicsProcessorSettings
/// Size: 0x0028 (0x000000 - 0x000028)
struct FSourceEffectDynamicsProcessorSettings
{ 
	ESourceEffectDynamicsProcessorType                 DynamicsProcessorType;                                      // 0x0000   (0x0001)  
	ESourceEffectDynamicsPeakMode                      PeakMode;                                                   // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0002   (0x0002)  MISSED
	float                                              LookAheadMsec;                                              // 0x0004   (0x0004)  
	float                                              AttackTimeMsec;                                             // 0x0008   (0x0004)  
	float                                              ReleaseTimeMsec;                                            // 0x000C   (0x0004)  
	float                                              ThresholdDb;                                                // 0x0010   (0x0004)  
	float                                              Ratio;                                                      // 0x0014   (0x0004)  
	float                                              KneeBandwidthDb;                                            // 0x0018   (0x0004)  
	float                                              InputGainDb;                                                // 0x001C   (0x0004)  
	float                                              OutputGainDb;                                               // 0x0020   (0x0004)  
	bool                                               bStereoLinked : 1;                                          // 0x0024:0 (0x0001)  
	bool                                               bAnalogMode : 1;                                            // 0x0024:1 (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0025   (0x0003)  MISSED
};

/// Struct /Script/Synthesis.SourceEffectEnvelopeFollowerSettings
/// Size: 0x000C (0x000000 - 0x00000C)
struct FSourceEffectEnvelopeFollowerSettings
{ 
	float                                              AttackTime;                                                 // 0x0000   (0x0004)  
	float                                              ReleaseTime;                                                // 0x0004   (0x0004)  
	EEnvelopeFollowerPeakMode                          PeakMode;                                                   // 0x0008   (0x0001)  
	bool                                               bIsAnalogMode;                                              // 0x0009   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x000A   (0x0002)  MISSED
};

/// Struct /Script/Synthesis.SourceEffectEQBand
/// Size: 0x0010 (0x000000 - 0x000010)
struct FSourceEffectEQBand
{ 
	float                                              Frequency;                                                  // 0x0000   (0x0004)  
	float                                              Bandwidth;                                                  // 0x0004   (0x0004)  
	float                                              GainDb;                                                     // 0x0008   (0x0004)  
	bool                                               bEnabled : 1;                                               // 0x000C:0 (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x000D   (0x0003)  MISSED
};

/// Struct /Script/Synthesis.SourceEffectEQSettings
/// Size: 0x0010 (0x000000 - 0x000010)
struct FSourceEffectEQSettings
{ 
	TArray<FSourceEffectEQBand>                        EQBands;                                                    // 0x0000   (0x0010)  
};

/// Struct /Script/Synthesis.SourceEffectFilterAudioBusModulationSettings
/// Size: 0x0028 (0x000000 - 0x000028)
struct FSourceEffectFilterAudioBusModulationSettings
{ 
	UAudioBus*                                         AudioBus;                                                   // 0x0000   (0x0008)  
	int32_t                                            EnvelopeFollowerAttackTimeMsec;                             // 0x0008   (0x0004)  
	int32_t                                            EnvelopeFollowerReleaseTimeMsec;                            // 0x000C   (0x0004)  
	float                                              EnvelopeGainMultiplier;                                     // 0x0010   (0x0004)  
	ESourceEffectFilterParam                           FilterParam;                                                // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0015   (0x0003)  MISSED
	float                                              MinFrequencyModulation;                                     // 0x0018   (0x0004)  
	float                                              MaxFrequencyModulation;                                     // 0x001C   (0x0004)  
	float                                              MinResonanceModulation;                                     // 0x0020   (0x0004)  
	float                                              MaxResonanceModulation;                                     // 0x0024   (0x0004)  
};

/// Struct /Script/Synthesis.SourceEffectFilterSettings
/// Size: 0x0020 (0x000000 - 0x000020)
struct FSourceEffectFilterSettings
{ 
	ESourceEffectFilterCircuit                         FilterCircuit;                                              // 0x0000   (0x0001)  
	ESourceEffectFilterType                            FilterType;                                                 // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0002   (0x0002)  MISSED
	float                                              CutoffFrequency;                                            // 0x0004   (0x0004)  
	float                                              FilterQ;                                                    // 0x0008   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	TArray<FSourceEffectFilterAudioBusModulationSettings> AudioBusModulation;                                      // 0x0010   (0x0010)  
};

/// Struct /Script/Synthesis.SourceEffectFoldbackDistortionSettings
/// Size: 0x000C (0x000000 - 0x00000C)
struct FSourceEffectFoldbackDistortionSettings
{ 
	float                                              InputGainDb;                                                // 0x0000   (0x0004)  
	float                                              ThresholdDb;                                                // 0x0004   (0x0004)  
	float                                              OutputGainDb;                                               // 0x0008   (0x0004)  
};

/// Struct /Script/Synthesis.SourceEffectMidSideSpreaderSettings
/// Size: 0x0008 (0x000000 - 0x000008)
struct FSourceEffectMidSideSpreaderSettings
{ 
	float                                              SpreadAmount;                                               // 0x0000   (0x0004)  
	EStereoChannelMode                                 InputMode;                                                  // 0x0004   (0x0001)  
	EStereoChannelMode                                 OutputMode;                                                 // 0x0005   (0x0001)  
	bool                                               bEqualPower;                                                // 0x0006   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x0007   (0x0001)  MISSED
};

/// Struct /Script/Synthesis.SourceEffectIndividualFilterSettings
/// Size: 0x000C (0x000000 - 0x00000C)
struct FSourceEffectIndividualFilterSettings
{ 
	ESourceEffectMotionFilterCircuit                   FilterCircuit;                                              // 0x0000   (0x0001)  
	ESourceEffectMotionFilterType                      FilterType;                                                 // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0002   (0x0002)  MISSED
	float                                              CutoffFrequency;                                            // 0x0004   (0x0004)  
	float                                              FilterQ;                                                    // 0x0008   (0x0004)  
};

/// Struct /Script/Synthesis.SourceEffectMotionFilterModulationSettings
/// Size: 0x0040 (0x000000 - 0x000040)
struct FSourceEffectMotionFilterModulationSettings
{ 
	ESourceEffectMotionFilterModSource                 ModulationSource;                                           // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	FVector2D                                          ModulationInputRange;                                       // 0x0008   (0x0010)  
	FVector2D                                          ModulationOutputMinimumRange;                               // 0x0018   (0x0010)  
	FVector2D                                          ModulationOutputMaximumRange;                               // 0x0028   (0x0010)  
	float                                              UpdateEaseMS;                                               // 0x0038   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Struct /Script/Synthesis.SourceEffectMotionFilterSettings
/// Size: 0x0078 (0x000000 - 0x000078)
struct FSourceEffectMotionFilterSettings
{ 
	ESourceEffectMotionFilterTopology                  MotionFilterTopology;                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              MotionFilterMix;                                            // 0x0004   (0x0004)  
	FSourceEffectIndividualFilterSettings              FilterASettings;                                            // 0x0008   (0x000C)  
	FSourceEffectIndividualFilterSettings              FilterBSettings;                                            // 0x0014   (0x000C)  
	TMap<ESourceEffectMotionFilterModDestination, FSourceEffectMotionFilterModulationSettings> ModulationMappings; // 0x0020   (0x0050)  
	float                                              DryVolumeDb;                                                // 0x0070   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0074   (0x0004)  MISSED
};

/// Struct /Script/Synthesis.SourceEffectPannerSettings
/// Size: 0x0008 (0x000000 - 0x000008)
struct FSourceEffectPannerSettings
{ 
	float                                              Spread;                                                     // 0x0000   (0x0004)  
	float                                              Pan;                                                        // 0x0004   (0x0004)  
};

/// Struct /Script/Synthesis.SourceEffectPhaserSettings
/// Size: 0x0010 (0x000000 - 0x000010)
struct FSourceEffectPhaserSettings
{ 
	float                                              WetLevel;                                                   // 0x0000   (0x0004)  
	float                                              Frequency;                                                  // 0x0004   (0x0004)  
	float                                              Feedback;                                                   // 0x0008   (0x0004)  
	EPhaserLFOType                                     LFOType;                                                    // 0x000C   (0x0001)  
	bool                                               UseQuadraturePhase;                                         // 0x000D   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x000E   (0x0002)  MISSED
};

/// Struct /Script/Synthesis.SourceEffectRingModulationSettings
/// Size: 0x0020 (0x000000 - 0x000020)
struct FSourceEffectRingModulationSettings
{ 
	ERingModulatorTypeSourceEffect                     ModulatorType;                                              // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              Frequency;                                                  // 0x0004   (0x0004)  
	float                                              Depth;                                                      // 0x0008   (0x0004)  
	float                                              DryLevel;                                                   // 0x000C   (0x0004)  
	float                                              WetLevel;                                                   // 0x0010   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0014   (0x0004)  MISSED
	UAudioBus*                                         AudioBusModulator;                                          // 0x0018   (0x0008)  
};

/// Struct /Script/Synthesis.SourceEffectSimpleDelaySettings
/// Size: 0x0018 (0x000000 - 0x000018)
struct FSourceEffectSimpleDelaySettings
{ 
	float                                              SpeedOfSound;                                               // 0x0000   (0x0004)  
	float                                              DelayAmount;                                                // 0x0004   (0x0004)  
	float                                              DryAmount;                                                  // 0x0008   (0x0004)  
	float                                              WetAmount;                                                  // 0x000C   (0x0004)  
	float                                              Feedback;                                                   // 0x0010   (0x0004)  
	bool                                               bDelayBasedOnDistance : 1;                                  // 0x0014:0 (0x0001)  
	bool                                               bUseDistanceOverride : 1;                                   // 0x0014:1 (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0015   (0x0003)  MISSED
};

/// Struct /Script/Synthesis.SourceEffectStereoDelaySettings
/// Size: 0x0024 (0x000000 - 0x000024)
struct FSourceEffectStereoDelaySettings
{ 
	EStereoDelaySourceEffect                           DelayMode;                                                  // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              DelayTimeMsec;                                              // 0x0004   (0x0004)  
	float                                              Feedback;                                                   // 0x0008   (0x0004)  
	float                                              DelayRatio;                                                 // 0x000C   (0x0004)  
	float                                              WetLevel;                                                   // 0x0010   (0x0004)  
	float                                              DryLevel;                                                   // 0x0014   (0x0004)  
	bool                                               bFilterEnabled;                                             // 0x0018   (0x0001)  
	EStereoDelayFiltertype                             FilterType;                                                 // 0x0019   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x001A   (0x0002)  MISSED
	float                                              FilterFrequency;                                            // 0x001C   (0x0004)  
	float                                              FilterQ;                                                    // 0x0020   (0x0004)  
};

/// Struct /Script/Synthesis.SourceEffectWaveShaperSettings
/// Size: 0x0008 (0x000000 - 0x000008)
struct FSourceEffectWaveShaperSettings
{ 
	float                                              Amount;                                                     // 0x0000   (0x0004)  
	float                                              OutputGainDb;                                               // 0x0004   (0x0004)  
};

/// Struct /Script/Synthesis.SubmixEffectConvolutionReverbSettings
/// Size: 0x0030 (0x000000 - 0x000030)
struct FSubmixEffectConvolutionReverbSettings
{ 
	float                                              NormalizationVolumeDb;                                      // 0x0000   (0x0004)  
	float                                              WetVolumeDb;                                                // 0x0004   (0x0004)  
	float                                              DryVolumeDb;                                                // 0x0008   (0x0004)  
	bool                                               bBypass;                                                    // 0x000C   (0x0001)  
	bool                                               bMixInputChannelFormatToImpulseResponseFormat;              // 0x000D   (0x0001)  
	bool                                               bMixReverbOutputToOutputChannelFormat;                      // 0x000E   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x000F   (0x0001)  MISSED
	float                                              SurroundRearChannelBleedDb;                                 // 0x0010   (0x0004)  
	bool                                               bInvertRearChannelBleedPhase;                               // 0x0014   (0x0001)  
	bool                                               bSurroundRearChannelFlip;                                   // 0x0015   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x0016   (0x0002)  MISSED
	float                                              SurroundRearChannelBleedAmount;                             // 0x0018   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x001C   (0x0004)  MISSED
	UAudioImpulseResponse*                             ImpulseResponse;                                            // 0x0020   (0x0008)  
	bool                                               AllowHardwareAcceleration;                                  // 0x0028   (0x0001)  
	unsigned char                                      UnknownData03_6[0x7];                                       // 0x0029   (0x0007)  MISSED
};

/// Struct /Script/Synthesis.SubmixEffectDelaySettings
/// Size: 0x000C (0x000000 - 0x00000C)
struct FSubmixEffectDelaySettings
{ 
	float                                              MaximumDelayLength;                                         // 0x0000   (0x0004)  
	float                                              InterpolationTime;                                          // 0x0004   (0x0004)  
	float                                              DelayLength;                                                // 0x0008   (0x0004)  
};

/// Struct /Script/Synthesis.SubmixEffectFilterSettings
/// Size: 0x000C (0x000000 - 0x00000C)
struct FSubmixEffectFilterSettings
{ 
	ESubmixFilterType                                  FilterType;                                                 // 0x0000   (0x0001)  
	ESubmixFilterAlgorithm                             FilterAlgorithm;                                            // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0002   (0x0002)  MISSED
	float                                              FilterFrequency;                                            // 0x0004   (0x0004)  
	float                                              FilterQ;                                                    // 0x0008   (0x0004)  
};

/// Struct /Script/Synthesis.SubmixEffectFlexiverbSettings
/// Size: 0x0010 (0x000000 - 0x000010)
struct FSubmixEffectFlexiverbSettings
{ 
	float                                              PreDelay;                                                   // 0x0000   (0x0004)  
	float                                              DecayTime;                                                  // 0x0004   (0x0004)  
	float                                              RoomDampening;                                              // 0x0008   (0x0004)  
	int32_t                                            Complexity;                                                 // 0x000C   (0x0004)  
};

/// Struct /Script/Synthesis.DynamicsBandSettings
/// Size: 0x0020 (0x000000 - 0x000020)
struct FDynamicsBandSettings
{ 
	float                                              CrossoverTopFrequency;                                      // 0x0000   (0x0004)  
	float                                              AttackTimeMsec;                                             // 0x0004   (0x0004)  
	float                                              ReleaseTimeMsec;                                            // 0x0008   (0x0004)  
	float                                              ThresholdDb;                                                // 0x000C   (0x0004)  
	float                                              Ratio;                                                      // 0x0010   (0x0004)  
	float                                              KneeBandwidthDb;                                            // 0x0014   (0x0004)  
	float                                              InputGainDb;                                                // 0x0018   (0x0004)  
	float                                              OutputGainDb;                                               // 0x001C   (0x0004)  
};

/// Struct /Script/Synthesis.SubmixEffectMultibandCompressorSettings
/// Size: 0x0038 (0x000000 - 0x000038)
struct FSubmixEffectMultibandCompressorSettings
{ 
	ESubmixEffectDynamicsProcessorType                 DynamicsProcessorType;                                      // 0x0000   (0x0001)  
	ESubmixEffectDynamicsPeakMode                      PeakMode;                                                   // 0x0001   (0x0001)  
	ESubmixEffectDynamicsChannelLinkMode               LinkMode;                                                   // 0x0002   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0003   (0x0001)  MISSED
	float                                              LookAheadMsec;                                              // 0x0004   (0x0004)  
	bool                                               bAnalogMode;                                                // 0x0008   (0x0001)  
	bool                                               bFourPole;                                                  // 0x0009   (0x0001)  
	bool                                               bBypass;                                                    // 0x000A   (0x0001)  
	ESubmixEffectDynamicsKeySource                     KeySource;                                                  // 0x000B   (0x0001)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	UAudioBus*                                         ExternalAudioBus;                                           // 0x0010   (0x0008)  
	USoundSubmix*                                      ExternalSubmix;                                             // 0x0018   (0x0008)  
	float                                              KeyGainDb;                                                  // 0x0020   (0x0004)  
	bool                                               bKeyAudition;                                               // 0x0024   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0025   (0x0003)  MISSED
	TArray<FDynamicsBandSettings>                      Bands;                                                      // 0x0028   (0x0010)  
};

/// Struct /Script/Synthesis.SubmixEffectStereoDelaySettings
/// Size: 0x0024 (0x000000 - 0x000024)
struct FSubmixEffectStereoDelaySettings
{ 
	EStereoDelaySourceEffect                           DelayMode;                                                  // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              DelayTimeMsec;                                              // 0x0004   (0x0004)  
	float                                              Feedback;                                                   // 0x0008   (0x0004)  
	float                                              DelayRatio;                                                 // 0x000C   (0x0004)  
	float                                              WetLevel;                                                   // 0x0010   (0x0004)  
	float                                              DryLevel;                                                   // 0x0014   (0x0004)  
	bool                                               bFilterEnabled;                                             // 0x0018   (0x0001)  
	EStereoDelayFiltertype                             FilterType;                                                 // 0x0019   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x001A   (0x0002)  MISSED
	float                                              FilterFrequency;                                            // 0x001C   (0x0004)  
	float                                              FilterQ;                                                    // 0x0020   (0x0004)  
};

/// Struct /Script/Synthesis.SubmixEffectStereoToQuadSettings
/// Size: 0x0008 (0x000000 - 0x000008)
struct FSubmixEffectStereoToQuadSettings
{ 
	bool                                               bFlipChannels;                                              // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              RearChannelGain;                                            // 0x0004   (0x0004)  
};

/// Struct /Script/Synthesis.TapDelayInfo
/// Size: 0x0018 (0x000000 - 0x000018)
struct FTapDelayInfo
{ 
	ETapLineMode                                       TapLineMode;                                                // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              DelayLength;                                                // 0x0004   (0x0004)  
	float                                              Gain;                                                       // 0x0008   (0x0004)  
	int32_t                                            OutputChannel;                                              // 0x000C   (0x0004)  
	float                                              PanInDegrees;                                               // 0x0010   (0x0004)  
	int32_t                                            TapId;                                                      // 0x0014   (0x0004)  
};

/// Struct /Script/Synthesis.SubmixEffectTapDelaySettings
/// Size: 0x0018 (0x000000 - 0x000018)
struct FSubmixEffectTapDelaySettings
{ 
	float                                              MaximumDelayLength;                                         // 0x0000   (0x0004)  
	float                                              InterpolationTime;                                          // 0x0004   (0x0004)  
	TArray<FTapDelayInfo>                              Taps;                                                       // 0x0008   (0x0010)  
};

/// Struct /Script/Synthesis.Synth2DSliderStyle
/// Size: 0x0428 (0x000008 - 0x000430)
struct FSynth2DSliderStyle : FSlateWidgetStyle
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FSlateBrush                                        NormalThumbImage;                                           // 0x0010   (0x00D0)  
	FSlateBrush                                        DisabledThumbImage;                                         // 0x00E0   (0x00D0)  
	FSlateBrush                                        NormalBarImage;                                             // 0x01B0   (0x00D0)  
	FSlateBrush                                        DisabledBarImage;                                           // 0x0280   (0x00D0)  
	FSlateBrush                                        BackgroundImage;                                            // 0x0350   (0x00D0)  
	float                                              BarThickness;                                               // 0x0420   (0x0004)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x0424   (0x000C)  MISSED
};

/// Struct /Script/Synthesis.SynthKnobStyle
/// Size: 0x0358 (0x000008 - 0x000360)
struct FSynthKnobStyle : FSlateWidgetStyle
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FSlateBrush                                        LargeKnob;                                                  // 0x0010   (0x00D0)  
	FSlateBrush                                        LargeKnobOverlay;                                           // 0x00E0   (0x00D0)  
	FSlateBrush                                        MediumKnob;                                                 // 0x01B0   (0x00D0)  
	FSlateBrush                                        MediumKnobOverlay;                                          // 0x0280   (0x00D0)  
	float                                              MinValueAngle;                                              // 0x0350   (0x0004)  
	float                                              MaxValueAngle;                                              // 0x0354   (0x0004)  
	ESynthKnobSize                                     KnobSize;                                                   // 0x0358   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0359   (0x0007)  MISSED
};

/// Struct /Script/Synthesis.SynthSlateStyle
/// Size: 0x0008 (0x000008 - 0x000010)
struct FSynthSlateStyle : FSlateWidgetStyle
{ 
	ESynthSlateSizeType                                SizeType;                                                   // 0x0008   (0x0001)  
	ESynthSlateColorStyle                              ColorStyle;                                                 // 0x0009   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x000A   (0x0006)  MISSED
};

/// Class /Script/Synthesis.AudioImpulseResponse
/// Size: 0x0030 (0x000028 - 0x000058)
class UAudioImpulseResponse : public UObject : UObject
{ 
public:
	TArray<float>                                      ImpulseResponse;                                            // 0x0028   (0x0010)  
	int32_t                                            NumChannels;                                                // 0x0038   (0x0004)  
	int32_t                                            SampleRate;                                                 // 0x003C   (0x0004)  
	float                                              NormalizationVolumeDb;                                      // 0x0040   (0x0004)  
	bool                                               bTrueStereo;                                                // 0x0044   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0045   (0x0003)  MISSED
	TArray<float>                                      IRData;                                                     // 0x0048   (0x0010)  
};

/// Class /Script/Synthesis.ModularSynthPresetBank
/// Size: 0x0010 (0x000028 - 0x000038)
class UModularSynthPresetBank : public UObject : UObject
{ 
public:
	TArray<FModularSynthPresetBankEntry>               Presets;                                                    // 0x0028   (0x0010)  
};

/// Class /Script/Synthesis.ModularSynthLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UModularSynthLibrary : public UBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/Synthesis.ModularSynthComponent
/// Size: 0x06D0 (0x000790 - 0x000E60)
class UModularSynthComponent : public USynthComponent : USynthComponent
{ 
public:
	int32_t                                            VoiceCount;                                                 // 0x0790   (0x0004)  
	unsigned char                                      UnknownData00_6[0x6CC];                                     // 0x0794   (0x06CC)  MISSED


	/// Functions
	// Function /Script/Synthesis.ModularSynthComponent.SetSynthPreset
	void SetSynthPreset(FModularSynthPreset& SynthPreset);                                                                   // [0x20dd270] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetSustainGain
	void SetSustainGain(float SustainGain);                                                                                  // [0x20dd0d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetStereoDelayWetlevel
	void SetStereoDelayWetlevel(float DelayWetlevel);                                                                        // [0x20dcf30] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetStereoDelayTime
	void SetStereoDelayTime(float DelayTimeMsec);                                                                            // [0x20dce60] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetStereoDelayRatio
	void SetStereoDelayRatio(float DelayRatio);                                                                              // [0x20dcd90] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetStereoDelayMode
	void SetStereoDelayMode(ESynthStereoDelayMode StereoDelayMode);                                                          // [0x20dccc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetStereoDelayIsEnabled
	void SetStereoDelayIsEnabled(bool StereoDelayEnabled);                                                                   // [0x20dcbf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetStereoDelayFeedback
	void SetStereoDelayFeedback(float DelayFeedback);                                                                        // [0x20dcb20] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetSpread
	void SetSpread(float Spread);                                                                                            // [0x20dc620] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetReleaseTime
	void SetReleaseTime(float ReleaseTimeMsec);                                                                              // [0x20da760] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetPortamento
	void SetPortamento(float Portamento);                                                                                    // [0x20d9da0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetPitchBend
	void SetPitchBend(float PitchBend);                                                                                      // [0x20d9aa0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetPan
	void SetPan(float Pan);                                                                                                  // [0x20d98a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetOscType
	void SetOscType(int32_t OscIndex, ESynth1OscType OscType);                                                               // [0x20d9780] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetOscSync
	void SetOscSync(bool bIsSynced);                                                                                         // [0x20d96b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetOscSemitones
	void SetOscSemitones(int32_t OscIndex, float Semitones);                                                                 // [0x20d9580] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetOscPulsewidth
	void SetOscPulsewidth(int32_t OscIndex, float Pulsewidth);                                                               // [0x20d9450] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetOscOctave
	void SetOscOctave(int32_t OscIndex, float Octave);                                                                       // [0x20d9320] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetOscGainMod
	void SetOscGainMod(int32_t OscIndex, float OscGainMod);                                                                  // [0x20d91f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetOscGain
	void SetOscGain(int32_t OscIndex, float OscGain);                                                                        // [0x20d90c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetOscFrequencyMod
	void SetOscFrequencyMod(int32_t OscIndex, float OscFreqMod);                                                             // [0x20d8f90] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetOscCents
	void SetOscCents(int32_t OscIndex, float Cents);                                                                         // [0x20d8e60] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetModEnvSustainGain
	void SetModEnvSustainGain(float SustainGain);                                                                            // [0x20d8a00] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetModEnvReleaseTime
	void SetModEnvReleaseTime(float Release);                                                                                // [0x20d8930] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetModEnvPatch
	void SetModEnvPatch(ESynthModEnvPatch InPatchType);                                                                      // [0x20d8860] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetModEnvInvert
	void SetModEnvInvert(bool bInvert);                                                                                      // [0x20d8790] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetModEnvDepth
	void SetModEnvDepth(float Depth);                                                                                        // [0x20d86c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetModEnvDecayTime
	void SetModEnvDecayTime(float DecayTimeMsec);                                                                            // [0x20d85f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetModEnvBiasPatch
	void SetModEnvBiasPatch(ESynthModEnvBiasPatch InPatchType);                                                              // [0x20d8520] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetModEnvBiasInvert
	void SetModEnvBiasInvert(bool bInvert);                                                                                  // [0x20d8450] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetModEnvAttackTime
	void SetModEnvAttackTime(float AttackTimeMsec);                                                                          // [0x20d8380] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetLFOType
	void SetLFOType(int32_t LFOIndex, ESynthLFOType LFOType);                                                                // [0x20d7eb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetLFOPatch
	void SetLFOPatch(int32_t LFOIndex, ESynthLFOPatchType LFOPatchType);                                                     // [0x20d7d90] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetLFOMode
	void SetLFOMode(int32_t LFOIndex, ESynthLFOMode LFOMode);                                                                // [0x20d7c70] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetLFOGainMod
	void SetLFOGainMod(int32_t LFOIndex, float GainMod);                                                                     // [0x20d7b40] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetLFOGain
	void SetLFOGain(int32_t LFOIndex, float Gain);                                                                           // [0x20d7a10] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetLFOFrequencyMod
	void SetLFOFrequencyMod(int32_t LFOIndex, float FrequencyModHz);                                                         // [0x20d78e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetLFOFrequency
	void SetLFOFrequency(int32_t LFOIndex, float FrequencyHz);                                                               // [0x20d77b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetGainDb
	void SetGainDb(float GainDb);                                                                                            // [0x20d6ab0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetFilterType
	void SetFilterType(ESynthFilterType FilterType);                                                                         // [0x20d62f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetFilterQMod
	void SetFilterQMod(float FilterQ);                                                                                       // [0x20d6170] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetFilterQ
	void SetFilterQ(float FilterQ);                                                                                          // [0x20d5ff0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetFilterFrequencyMod
	void SetFilterFrequencyMod(float FilterFrequencyHz);                                                                     // [0x20d5f20] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetFilterFrequency
	void SetFilterFrequency(float FilterFrequencyHz);                                                                        // [0x20d5e50] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetFilterAlgorithm
	void SetFilterAlgorithm(ESynthFilterAlgorithm FilterAlgorithm);                                                          // [0x20d54f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetEnableUnison
	void SetEnableUnison(bool EnableUnison);                                                                                 // [0x20d5050] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetEnableRetrigger
	void SetEnableRetrigger(bool RetriggerEnabled);                                                                          // [0x20d4f80] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetEnablePolyphony
	void SetEnablePolyphony(bool bEnablePolyphony);                                                                          // [0x20d4eb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetEnablePatch
	bool SetEnablePatch(FPatchId PatchId, bool bIsEnabled);                                                                  // [0x20d4d20] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetEnableLegato
	void SetEnableLegato(bool LegatoEnabled);                                                                                // [0x20d4c50] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetDecayTime
	void SetDecayTime(float DecayTimeMsec);                                                                                  // [0x20d4310] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetChorusFrequency
	void SetChorusFrequency(float Frequency);                                                                                // [0x20d3d70] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetChorusFeedback
	void SetChorusFeedback(float Feedback);                                                                                  // [0x20d3ca0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetChorusEnabled
	void SetChorusEnabled(bool EnableChorus);                                                                                // [0x20d3bd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetChorusDepth
	void SetChorusDepth(float Depth);                                                                                        // [0x20d3b00] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetAttackTime
	void SetAttackTime(float AttackTimeMsec);                                                                                // [0x20d3660] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.NoteOn
	void NoteOn(float Note, int32_t Velocity, float Duration);                                                               // [0x20d27c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.NoteOff
	void NoteOff(float Note, bool bAllNotesOff, bool bKillAllNotes);                                                         // [0x20d23e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.CreatePatch
	FPatchId CreatePatch(ESynth1PatchSource PatchSource, TArray<FSynth1PatchCable>& PatchCables, bool bEnableByDefault);     // [0x20d14c0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Synthesis.SourceEffectBitCrusherPreset
/// Size: 0x01C8 (0x000068 - 0x000230)
class USourceEffectBitCrusherPreset : public USoundEffectSourcePreset : USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData00_2[0xF8];                                      // 0x0068   (0x00F8)  MISSED
	FSourceEffectBitCrusherSettings                    Settings;                                                   // 0x0160   (0x00D0)  


	/// Functions
	// Function /Script/Synthesis.SourceEffectBitCrusherPreset.SetSettings
	void SetSettings(FSourceEffectBitCrusherBaseSettings& Settings);                                                         // [0x20dae30] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectBitCrusherPreset.SetSampleRateModulators
	void SetSampleRateModulators(TSet<USoundModulatorBase*>& InModulators);                                                  // [0x20daa60] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectBitCrusherPreset.SetSampleRateModulator
	void SetSampleRateModulator(USoundModulatorBase* Modulator);                                                             // [0x20da9b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectBitCrusherPreset.SetSampleRate
	void SetSampleRate(float SampleRate);                                                                                    // [0x20da900] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectBitCrusherPreset.SetModulationSettings
	void SetModulationSettings(FSourceEffectBitCrusherSettings& ModulationSettings);                                         // [0x20d8ad0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectBitCrusherPreset.SetBits
	void SetBits(float Bits);                                                                                                // [0x20d3a50] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectBitCrusherPreset.SetBitModulators
	void SetBitModulators(TSet<USoundModulatorBase*>& InModulators);                                                         // [0x20d38f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectBitCrusherPreset.SetBitModulator
	void SetBitModulator(USoundModulatorBase* Modulator);                                                                    // [0x20d3840] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/Synthesis.SourceEffectChorusPreset
/// Size: 0x04D8 (0x000068 - 0x000540)
class USourceEffectChorusPreset : public USoundEffectSourcePreset : USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData00_2[0x280];                                     // 0x0068   (0x0280)  MISSED
	FSourceEffectChorusSettings                        Settings;                                                   // 0x02E8   (0x0258)  


	/// Functions
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetWetModulators
	void SetWetModulators(TSet<USoundModulatorBase*>& Modulators);                                                           // [0x20ddb00] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetWetModulator
	void SetWetModulator(USoundModulatorBase* Modulator);                                                                    // [0x20dda50] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetWet
	void SetWet(float WetAmount);                                                                                            // [0x20dd9a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetSpreadModulators
	void SetSpreadModulators(TSet<USoundModulatorBase*>& Modulators);                                                        // [0x20dc850] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetSpreadModulator
	void SetSpreadModulator(USoundModulatorBase* Modulator);                                                                 // [0x20dc7a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetSpread
	void SetSpread(float Spread);                                                                                            // [0x20dc6f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetSettings
	void SetSettings(FSourceEffectChorusBaseSettings& Settings);                                                             // [0x20daf10] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetModulationSettings
	void SetModulationSettings(FSourceEffectChorusSettings& ModulationSettings);                                             // [0x20d8d60] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetFrequencyModulators
	void SetFrequencyModulators(TSet<USoundModulatorBase*>& Modulators);                                                     // [0x20d6780] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetFrequencyModulator
	void SetFrequencyModulator(USoundModulatorBase* Modulator);                                                              // [0x20d66d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetFrequency
	void SetFrequency(float Frequency);                                                                                      // [0x20d6470] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetFeedbackModulators
	void SetFeedbackModulators(TSet<USoundModulatorBase*>& Modulators);                                                      // [0x20d5390] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetFeedbackModulator
	void SetFeedbackModulator(USoundModulatorBase* Modulator);                                                               // [0x20d52e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetFeedback
	void SetFeedback(float Feedback);                                                                                        // [0x20d5230] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetDryModulators
	void SetDryModulators(TSet<USoundModulatorBase*>& Modulators);                                                           // [0x20d4af0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetDryModulator
	void SetDryModulator(USoundModulatorBase* Modulator);                                                                    // [0x20d4a40] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetDry
	void SetDry(float DryAmount);                                                                                            // [0x20d4990] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetDepthModulators
	void SetDepthModulators(TSet<USoundModulatorBase*>& Modulators);                                                         // [0x20d4830] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetDepthModulator
	void SetDepthModulator(USoundModulatorBase* Modulator);                                                                  // [0x20d4780] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetDepth
	void SetDepth(float Depth);                                                                                              // [0x20d46d0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/Synthesis.SourceEffectConvolutionReverbPreset
/// Size: 0x0058 (0x000068 - 0x0000C0)
class USourceEffectConvolutionReverbPreset : public USoundEffectSourcePreset : USoundEffectSourcePreset
{ 
public:
	UAudioImpulseResponse*                             ImpulseResponse;                                            // 0x0068   (0x0008)  
	FSourceEffectConvolutionReverbSettings             Settings;                                                   // 0x0070   (0x0010)  
	ESubmixEffectConvolutionReverbBlockSize            BlockSize;                                                  // 0x0080   (0x0001)  
	bool                                               bEnableHardwareAcceleration;                                // 0x0081   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3E];                                      // 0x0082   (0x003E)  MISSED


	/// Functions
	// Function /Script/Synthesis.SourceEffectConvolutionReverbPreset.SetSettings
	void SetSettings(FSourceEffectConvolutionReverbSettings& InSettings);                                                    // [0x20db000] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectConvolutionReverbPreset.SetImpulseResponse
	void SetImpulseResponse(UAudioImpulseResponse* InImpulseResponse);                                                       // [0x20d72f0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/Synthesis.SourceEffectDynamicsProcessorPreset
/// Size: 0x0078 (0x000068 - 0x0000E0)
class USourceEffectDynamicsProcessorPreset : public USoundEffectSourcePreset : USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData00_2[0x50];                                      // 0x0068   (0x0050)  MISSED
	FSourceEffectDynamicsProcessorSettings             Settings;                                                   // 0x00B8   (0x0028)  


	/// Functions
	// Function /Script/Synthesis.SourceEffectDynamicsProcessorPreset.SetSettings
	void SetSettings(FSourceEffectDynamicsProcessorSettings& InSettings);                                                    // [0x20db0f0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Synthesis.EnvelopeFollowerListener
/// Size: 0x0020 (0x0000A0 - 0x0000C0)
class UEnvelopeFollowerListener : public UActorComponent : UActorComponent
{ 
public:
	FMulticastInlineDelegate                           OnEnvelopeFollowerUpdate;                                   // 0x00A0   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x00B0   (0x0010)  MISSED
};

/// Class /Script/Synthesis.SourceEffectEnvelopeFollowerPreset
/// Size: 0x0040 (0x000068 - 0x0000A8)
class USourceEffectEnvelopeFollowerPreset : public USoundEffectSourcePreset : USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData00_2[0x34];                                      // 0x0068   (0x0034)  MISSED
	FSourceEffectEnvelopeFollowerSettings              Settings;                                                   // 0x009C   (0x000C)  


	/// Functions
	// Function /Script/Synthesis.SourceEffectEnvelopeFollowerPreset.UnregisterEnvelopeFollowerListener
	void UnregisterEnvelopeFollowerListener(UEnvelopeFollowerListener* EnvelopeFollowerListener);                            // [0x20ddc60] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectEnvelopeFollowerPreset.SetSettings
	void SetSettings(FSourceEffectEnvelopeFollowerSettings& InSettings);                                                     // [0x20db2d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectEnvelopeFollowerPreset.RegisterEnvelopeFollowerListener
	void RegisterEnvelopeFollowerListener(UEnvelopeFollowerListener* EnvelopeFollowerListener);                              // [0x20d2b50] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/Synthesis.SourceEffectEQPreset
/// Size: 0x0048 (0x000068 - 0x0000B0)
class USourceEffectEQPreset : public USoundEffectSourcePreset : USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData00_2[0x38];                                      // 0x0068   (0x0038)  MISSED
	FSourceEffectEQSettings                            Settings;                                                   // 0x00A0   (0x0010)  


	/// Functions
	// Function /Script/Synthesis.SourceEffectEQPreset.SetSettings
	void SetSettings(FSourceEffectEQSettings& InSettings);                                                                   // [0x20db1f0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Synthesis.SourceEffectFilterPreset
/// Size: 0x0068 (0x000068 - 0x0000D0)
class USourceEffectFilterPreset : public USoundEffectSourcePreset : USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData00_2[0x48];                                      // 0x0068   (0x0048)  MISSED
	FSourceEffectFilterSettings                        Settings;                                                   // 0x00B0   (0x0020)  


	/// Functions
	// Function /Script/Synthesis.SourceEffectFilterPreset.SetSettings
	void SetSettings(FSourceEffectFilterSettings& InSettings);                                                               // [0x20db3b0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Synthesis.SourceEffectFoldbackDistortionPreset
/// Size: 0x0040 (0x000068 - 0x0000A8)
class USourceEffectFoldbackDistortionPreset : public USoundEffectSourcePreset : USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData00_2[0x34];                                      // 0x0068   (0x0034)  MISSED
	FSourceEffectFoldbackDistortionSettings            Settings;                                                   // 0x009C   (0x000C)  


	/// Functions
	// Function /Script/Synthesis.SourceEffectFoldbackDistortionPreset.SetSettings
	void SetSettings(FSourceEffectFoldbackDistortionSettings& InSettings);                                                   // [0x20db4a0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Synthesis.SourceEffectMidSideSpreaderPreset
/// Size: 0x0038 (0x000068 - 0x0000A0)
class USourceEffectMidSideSpreaderPreset : public USoundEffectSourcePreset : USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData00_2[0x30];                                      // 0x0068   (0x0030)  MISSED
	FSourceEffectMidSideSpreaderSettings               Settings;                                                   // 0x0098   (0x0008)  


	/// Functions
	// Function /Script/Synthesis.SourceEffectMidSideSpreaderPreset.SetSettings
	void SetSettings(FSourceEffectMidSideSpreaderSettings& InSettings);                                                      // [0x20db580] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Synthesis.SourceEffectMotionFilterPreset
/// Size: 0x0118 (0x000068 - 0x000180)
class USourceEffectMotionFilterPreset : public USoundEffectSourcePreset : USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData00_2[0xA0];                                      // 0x0068   (0x00A0)  MISSED
	FSourceEffectMotionFilterSettings                  Settings;                                                   // 0x0108   (0x0078)  


	/// Functions
	// Function /Script/Synthesis.SourceEffectMotionFilterPreset.SetSettings
	void SetSettings(FSourceEffectMotionFilterSettings& InSettings);                                                         // [0x20db650] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Synthesis.SourceEffectPannerPreset
/// Size: 0x0038 (0x000068 - 0x0000A0)
class USourceEffectPannerPreset : public USoundEffectSourcePreset : USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData00_2[0x30];                                      // 0x0068   (0x0030)  MISSED
	FSourceEffectPannerSettings                        Settings;                                                   // 0x0098   (0x0008)  


	/// Functions
	// Function /Script/Synthesis.SourceEffectPannerPreset.SetSettings
	void SetSettings(FSourceEffectPannerSettings& InSettings);                                                               // [0x20db7c0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Synthesis.SourceEffectPhaserPreset
/// Size: 0x0048 (0x000068 - 0x0000B0)
class USourceEffectPhaserPreset : public USoundEffectSourcePreset : USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData00_2[0x38];                                      // 0x0068   (0x0038)  MISSED
	FSourceEffectPhaserSettings                        Settings;                                                   // 0x00A0   (0x0010)  


	/// Functions
	// Function /Script/Synthesis.SourceEffectPhaserPreset.SetSettings
	void SetSettings(FSourceEffectPhaserSettings& InSettings);                                                               // [0x20db890] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Synthesis.SourceEffectRingModulationPreset
/// Size: 0x0068 (0x000068 - 0x0000D0)
class USourceEffectRingModulationPreset : public USoundEffectSourcePreset : USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData00_2[0x48];                                      // 0x0068   (0x0048)  MISSED
	FSourceEffectRingModulationSettings                Settings;                                                   // 0x00B0   (0x0020)  


	/// Functions
	// Function /Script/Synthesis.SourceEffectRingModulationPreset.SetSettings
	void SetSettings(FSourceEffectRingModulationSettings& InSettings);                                                       // [0x20db970] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Synthesis.SourceEffectSimpleDelayPreset
/// Size: 0x0058 (0x000068 - 0x0000C0)
class USourceEffectSimpleDelayPreset : public USoundEffectSourcePreset : USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData00_2[0x40];                                      // 0x0068   (0x0040)  MISSED
	FSourceEffectSimpleDelaySettings                   Settings;                                                   // 0x00A8   (0x0018)  


	/// Functions
	// Function /Script/Synthesis.SourceEffectSimpleDelayPreset.SetSettings
	void SetSettings(FSourceEffectSimpleDelaySettings& InSettings);                                                          // [0x20dba50] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Synthesis.SourceEffectStereoDelayPreset
/// Size: 0x0070 (0x000068 - 0x0000D8)
class USourceEffectStereoDelayPreset : public USoundEffectSourcePreset : USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData00_2[0x4C];                                      // 0x0068   (0x004C)  MISSED
	FSourceEffectStereoDelaySettings                   Settings;                                                   // 0x00B4   (0x0024)  


	/// Functions
	// Function /Script/Synthesis.SourceEffectStereoDelayPreset.SetSettings
	void SetSettings(FSourceEffectStereoDelaySettings& InSettings);                                                          // [0x20dbb30] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Synthesis.SourceEffectWaveShaperPreset
/// Size: 0x0038 (0x000068 - 0x0000A0)
class USourceEffectWaveShaperPreset : public USoundEffectSourcePreset : USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData00_2[0x30];                                      // 0x0068   (0x0030)  MISSED
	FSourceEffectWaveShaperSettings                    Settings;                                                   // 0x0098   (0x0008)  


	/// Functions
	// Function /Script/Synthesis.SourceEffectWaveShaperPreset.SetSettings
	void SetSettings(FSourceEffectWaveShaperSettings& InSettings);                                                           // [0x20db7c0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Synthesis.SubmixEffectConvolutionReverbPreset
/// Size: 0x0098 (0x000068 - 0x000100)
class USubmixEffectConvolutionReverbPreset : public USoundEffectSubmixPreset : USoundEffectSubmixPreset
{ 
public:
	UAudioImpulseResponse*                             ImpulseResponse;                                            // 0x0068   (0x0008)  
	FSubmixEffectConvolutionReverbSettings             Settings;                                                   // 0x0070   (0x0030)  
	ESubmixEffectConvolutionReverbBlockSize            BlockSize;                                                  // 0x00A0   (0x0001)  
	bool                                               bEnableHardwareAcceleration;                                // 0x00A1   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5E];                                      // 0x00A2   (0x005E)  MISSED


	/// Functions
	// Function /Script/Synthesis.SubmixEffectConvolutionReverbPreset.SetSettings
	void SetSettings(FSubmixEffectConvolutionReverbSettings& InSettings);                                                    // [0x20dbc30] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectConvolutionReverbPreset.SetImpulseResponse
	void SetImpulseResponse(UAudioImpulseResponse* InImpulseResponse);                                                       // [0x20d7390] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/Synthesis.SubmixEffectDelayStatics
/// Size: 0x0000 (0x000028 - 0x000028)
class USubmixEffectDelayStatics : public UBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/Synthesis.SubmixEffectDelayPreset
/// Size: 0x0050 (0x000068 - 0x0000B8)
class USubmixEffectDelayPreset : public USoundEffectSubmixPreset : USoundEffectSubmixPreset
{ 
public:
	unsigned char                                      UnknownData00_2[0x34];                                      // 0x0068   (0x0034)  MISSED
	FSubmixEffectDelaySettings                         Settings;                                                   // 0x009C   (0x000C)  
	FSubmixEffectDelaySettings                         DynamicSettings;                                            // 0x00A8   (0x000C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00B4   (0x0004)  MISSED


	/// Functions
	// Function /Script/Synthesis.SubmixEffectDelayPreset.SetSettings
	void SetSettings(FSubmixEffectDelaySettings& InSettings);                                                                // [0x20dbd70] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectDelayPreset.SetInterpolationTime
	void SetInterpolationTime(float Time);                                                                                   // [0x20d7510] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectDelayPreset.SetDelay
	void SetDelay(float Length);                                                                                             // [0x20d44f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectDelayPreset.SetDefaultSettings
	void SetDefaultSettings(FSubmixEffectDelaySettings& InSettings);                                                         // [0x20d43e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectDelayPreset.GetMaxDelayInMilliseconds
	float GetMaxDelayInMilliseconds();                                                                                       // [0x20d1de0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Synthesis.SubmixEffectFilterPreset
/// Size: 0x0040 (0x000068 - 0x0000A8)
class USubmixEffectFilterPreset : public USoundEffectSubmixPreset : USoundEffectSubmixPreset
{ 
public:
	unsigned char                                      UnknownData00_2[0x34];                                      // 0x0068   (0x0034)  MISSED
	FSubmixEffectFilterSettings                        Settings;                                                   // 0x009C   (0x000C)  


	/// Functions
	// Function /Script/Synthesis.SubmixEffectFilterPreset.SetSettings
	void SetSettings(FSubmixEffectFilterSettings& InSettings);                                                               // [0x20dbe70] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectFilterPreset.SetFilterType
	void SetFilterType(ESubmixFilterType InType);                                                                            // [0x20d63c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectFilterPreset.SetFilterQMod
	void SetFilterQMod(float InQ);                                                                                           // [0x20d6240] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectFilterPreset.SetFilterQ
	void SetFilterQ(float InQ);                                                                                              // [0x20d60c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectFilterPreset.SetFilterCutoffFrequencyMod
	void SetFilterCutoffFrequencyMod(float InFrequency);                                                                     // [0x20d5720] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectFilterPreset.SetFilterCutoffFrequency
	void SetFilterCutoffFrequency(float InFrequency);                                                                        // [0x20d5670] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectFilterPreset.SetFilterAlgorithm
	void SetFilterAlgorithm(ESubmixFilterAlgorithm InAlgorithm);                                                             // [0x20d55c0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/Synthesis.SubmixEffectFlexiverbPreset
/// Size: 0x0048 (0x000068 - 0x0000B0)
class USubmixEffectFlexiverbPreset : public USoundEffectSubmixPreset : USoundEffectSubmixPreset
{ 
public:
	unsigned char                                      UnknownData00_2[0x38];                                      // 0x0068   (0x0038)  MISSED
	FSubmixEffectFlexiverbSettings                     Settings;                                                   // 0x00A0   (0x0010)  


	/// Functions
	// Function /Script/Synthesis.SubmixEffectFlexiverbPreset.SetSettings
	void SetSettings(FSubmixEffectFlexiverbSettings& InSettings);                                                            // [0x20dbf50] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Synthesis.SubmixEffectMultibandCompressorPreset
/// Size: 0x0098 (0x000068 - 0x000100)
class USubmixEffectMultibandCompressorPreset : public USoundEffectSubmixPreset : USoundEffectSubmixPreset
{ 
public:
	unsigned char                                      UnknownData00_2[0x60];                                      // 0x0068   (0x0060)  MISSED
	FSubmixEffectMultibandCompressorSettings           Settings;                                                   // 0x00C8   (0x0038)  


	/// Functions
	// Function /Script/Synthesis.SubmixEffectMultibandCompressorPreset.SetSettings
	void SetSettings(FSubmixEffectMultibandCompressorSettings& InSettings);                                                  // [0x20dc030] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectMultibandCompressorPreset.SetExternalSubmix
	void SetExternalSubmix(USoundSubmix* Submix);                                                                            // [0x20d5120] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectMultibandCompressorPreset.SetAudioBus
	void SetAudioBus(UAudioBus* AudioBus);                                                                                   // [0x20d3730] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectMultibandCompressorPreset.ResetKey
	void ResetKey();                                                                                                         // [0x20d2d50] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/Synthesis.SubmixEffectStereoDelayPreset
/// Size: 0x0070 (0x000068 - 0x0000D8)
class USubmixEffectStereoDelayPreset : public USoundEffectSubmixPreset : USoundEffectSubmixPreset
{ 
public:
	unsigned char                                      UnknownData00_2[0x4C];                                      // 0x0068   (0x004C)  MISSED
	FSubmixEffectStereoDelaySettings                   Settings;                                                   // 0x00B4   (0x0024)  


	/// Functions
	// Function /Script/Synthesis.SubmixEffectStereoDelayPreset.SetSettings
	void SetSettings(FSubmixEffectStereoDelaySettings& InSettings);                                                          // [0x20dbb30] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Synthesis.SubmixEffectStereoToQuadPreset
/// Size: 0x0038 (0x000068 - 0x0000A0)
class USubmixEffectStereoToQuadPreset : public USoundEffectSubmixPreset : USoundEffectSubmixPreset
{ 
public:
	unsigned char                                      UnknownData00_2[0x30];                                      // 0x0068   (0x0030)  MISSED
	FSubmixEffectStereoToQuadSettings                  Settings;                                                   // 0x0098   (0x0008)  


	/// Functions
	// Function /Script/Synthesis.SubmixEffectStereoToQuadPreset.SetSettings
	void SetSettings(FSubmixEffectStereoToQuadSettings& InSettings);                                                         // [0x20dc180] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Synthesis.SubmixEffectTapDelayPreset
/// Size: 0x0070 (0x000068 - 0x0000D8)
class USubmixEffectTapDelayPreset : public USoundEffectSubmixPreset : USoundEffectSubmixPreset
{ 
public:
	unsigned char                                      UnknownData00_2[0x40];                                      // 0x0068   (0x0040)  MISSED
	FSubmixEffectTapDelaySettings                      Settings;                                                   // 0x00A8   (0x0018)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x00C0   (0x0018)  MISSED


	/// Functions
	// Function /Script/Synthesis.SubmixEffectTapDelayPreset.SetTap
	void SetTap(int32_t TapId, FTapDelayInfo& TapInfo);                                                                      // [0x20dd3e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectTapDelayPreset.SetSettings
	void SetSettings(FSubmixEffectTapDelaySettings& InSettings);                                                             // [0x20dc250] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectTapDelayPreset.SetInterpolationTime
	void SetInterpolationTime(float Time);                                                                                   // [0x20d76f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectTapDelayPreset.RemoveTap
	void RemoveTap(int32_t TapId);                                                                                           // [0x20d2bf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectTapDelayPreset.GetTapIds
	void GetTapIds(TArray<int32_t>& TapIds);                                                                                 // [0x20d2030] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectTapDelayPreset.GetTap
	void GetTap(int32_t TapId, FTapDelayInfo& TapInfo);                                                                      // [0x20d1ef0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectTapDelayPreset.GetMaxDelayInMilliseconds
	float GetMaxDelayInMilliseconds();                                                                                       // [0x20d1e00] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectTapDelayPreset.AddTap
	void AddTap(int32_t& TapId);                                                                                             // [0x20d1370] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Synthesis.GranularSynth
/// Size: 0x03E0 (0x000790 - 0x000B70)
class UGranularSynth : public USynthComponent : USynthComponent
{ 
public:
	USoundWave*                                        GranulatedSoundWave;                                        // 0x0790   (0x0008)  
	unsigned char                                      UnknownData00_6[0x3D8];                                     // 0x0798   (0x03D8)  MISSED


	/// Functions
	// Function /Script/Synthesis.GranularSynth.SetSustainGain
	void SetSustainGain(float SustainGain);                                                                                  // [0x20dd000] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.SetSoundWave
	void SetSoundWave(USoundWave* InSoundWave);                                                                              // [0x20dc410] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.SetScrubMode
	void SetScrubMode(bool bScrubMode);                                                                                      // [0x20dabc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.SetReleaseTimeMsec
	void SetReleaseTimeMsec(float ReleaseTimeMsec);                                                                          // [0x20da830] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.SetPlayheadTime
	void SetPlayheadTime(float InPositionSec, float LerpTimeSec, EGranularSynthSeekType SeekType);                           // [0x20d9c40] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.SetPlaybackSpeed
	void SetPlaybackSpeed(float InPlayheadRate);                                                                             // [0x20d9b70] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.SetGrainVolume
	void SetGrainVolume(float BaseVolume, FVector2D VolumeRange);                                                            // [0x20d70e0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.SetGrainsPerSecond
	void SetGrainsPerSecond(float InGrainsPerSecond);                                                                        // [0x20d7220] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.SetGrainProbability
	void SetGrainProbability(float InGrainProbability);                                                                      // [0x20d7010] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.SetGrainPitch
	void SetGrainPitch(float BasePitch, FVector2D PitchRange);                                                               // [0x20d6ed0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.SetGrainPan
	void SetGrainPan(float BasePan, FVector2D PanRange);                                                                     // [0x20d6d90] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.SetGrainEnvelopeType
	void SetGrainEnvelopeType(EGranularSynthEnvelopeType EnvelopeType);                                                      // [0x20d6cc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.SetGrainDuration
	void SetGrainDuration(float BaseDurationMsec, FVector2D DurationRange);                                                  // [0x20d6b80] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.SetDecayTime
	void SetDecayTime(float DecayTimeMsec);                                                                                  // [0x20d3590] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.SetAttackTime
	void SetAttackTime(float AttackTimeMsec);                                                                                // [0x20d3590] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.NoteOn
	void NoteOn(float Note, int32_t Velocity, float Duration);                                                               // [0x20d2660] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.NoteOff
	void NoteOff(float Note, bool bKill);                                                                                    // [0x20d22b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.IsLoaded
	bool IsLoaded();                                                                                                         // [0x20d2270] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Synthesis.GranularSynth.GetSampleDuration
	float GetSampleDuration();                                                                                               // [0x20d1e90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Synthesis.GranularSynth.GetCurrentPlayheadTime
	float GetCurrentPlayheadTime();                                                                                          // [0x20d16c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Synthesis.MonoWaveTableSynthPreset
/// Size: 0x0148 (0x000028 - 0x000170)
class UMonoWaveTableSynthPreset : public UObject : UObject
{ 
public:
	FString                                            PresetName;                                                 // 0x0028   (0x0010)  
	bool                                               bLockKeyframesToGridBool : 1;                               // 0x0038:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x0039   (0x0003)  MISSED
	int32_t                                            LockKeyframesToGrid;                                        // 0x003C   (0x0004)  
	int32_t                                            WaveTableResolution;                                        // 0x0040   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0044   (0x0004)  MISSED
	TArray<FRuntimeFloatCurve>                         WaveTable;                                                  // 0x0048   (0x0010)  
	bool                                               bNormalizeWaveTables : 1;                                   // 0x0058:0 (0x0001)  
	unsigned char                                      UnknownData02_6[0x117];                                     // 0x0059   (0x0117)  MISSED
};

/// Class /Script/Synthesis.SynthComponentMonoWaveTable
/// Size: 0x0750 (0x000790 - 0x000EE0)
class USynthComponentMonoWaveTable : public USynthComponent : USynthComponent
{ 
public:
	FMulticastInlineDelegate                           OnTableAltered;                                             // 0x0790   (0x0010)  
	FMulticastInlineDelegate                           OnNumTablesChanged;                                         // 0x07A0   (0x0010)  
	UMonoWaveTableSynthPreset*                         CurrentPreset;                                              // 0x07B0   (0x0008)  
	unsigned char                                      UnknownData00_6[0x728];                                     // 0x07B8   (0x0728)  MISSED


	/// Functions
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetWaveTablePosition
	void SetWaveTablePosition(float InPosition);                                                                             // [0x20dd8d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetSustainPedalState
	void SetSustainPedalState(bool InSustainPedalState);                                                                     // [0x20dd1a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPosLfoType
	void SetPosLfoType(ESynthLFOType InLfoType);                                                                             // [0x20da010] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPosLfoFrequency
	void SetPosLfoFrequency(float InLfoFrequency);                                                                           // [0x20d9f40] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPosLfoDepth
	void SetPosLfoDepth(float InLfoDepth);                                                                                   // [0x20d9e70] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeSustainGain
	void SetPositionEnvelopeSustainGain(float InSustainGain);                                                                // [0x20da690] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeReleaseTime
	void SetPositionEnvelopeReleaseTime(float InReleaseTimeMsec);                                                            // [0x20da5c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeInvert
	void SetPositionEnvelopeInvert(bool bInInvert);                                                                          // [0x20da4f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeDepth
	void SetPositionEnvelopeDepth(float InDepth);                                                                            // [0x20da420] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeDecayTime
	void SetPositionEnvelopeDecayTime(float InDecayTimeMsec);                                                                // [0x20da350] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeBiasInvert
	void SetPositionEnvelopeBiasInvert(bool bInBiasInvert);                                                                  // [0x20da280] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeBiasDepth
	void SetPositionEnvelopeBiasDepth(float InDepth);                                                                        // [0x20da1b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeAttackTime
	void SetPositionEnvelopeAttackTime(float InAttackTimeMsec);                                                              // [0x20da0e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetLowPassFilterResonance
	void SetLowPassFilterResonance(float InNewQ);                                                                            // [0x20d8190] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFrequencyWithMidiNote
	void SetFrequencyWithMidiNote(float InMidiNote);                                                                         // [0x20d69b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFrequencyPitchBend
	void SetFrequencyPitchBend(float FrequencyOffsetCents);                                                                  // [0x20d68e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFrequency
	void SetFrequency(float FrequencyHz);                                                                                    // [0x20d6520] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeSustainGain
	void SetFilterEnvelopeSustainGain(float InSustainGain);                                                                  // [0x20d5cb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeReleaseTime
	void SetFilterEnvelopeReleaseTime(float InReleaseTimeMsec);                                                              // [0x20d5be0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopenDecayTime
	void SetFilterEnvelopenDecayTime(float InDecayTimeMsec);                                                                 // [0x20d5d80] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeInvert
	void SetFilterEnvelopeInvert(bool bInInvert);                                                                            // [0x20d5b10] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeDepth
	void SetFilterEnvelopeDepth(float InDepth);                                                                              // [0x20d5a40] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeBiasInvert
	void SetFilterEnvelopeBiasInvert(bool bInBiasInvert);                                                                    // [0x20d5970] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeBiasDepth
	void SetFilterEnvelopeBiasDepth(float InDepth);                                                                          // [0x20d58a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeAttackTime
	void SetFilterEnvelopeAttackTime(float InAttackTimeMsec);                                                                // [0x20d57d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetCurveValue
	bool SetCurveValue(int32_t TableIndex, int32_t KeyframeIndex, float NewValue);                                           // [0x20d4180] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetCurveTangent
	bool SetCurveTangent(int32_t TableIndex, float InNewTangent);                                                            // [0x20d3fc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetCurveInterpolationType
	bool SetCurveInterpolationType(CurveInterpolationType InterpolationType, int32_t TableIndex);                            // [0x20d3e40] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeSustainGain
	void SetAmpEnvelopeSustainGain(float InSustainGain);                                                                     // [0x20d34c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeReleaseTime
	void SetAmpEnvelopeReleaseTime(float InReleaseTimeMsec);                                                                 // [0x20d33f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeInvert
	void SetAmpEnvelopeInvert(bool bInInvert);                                                                               // [0x20d3320] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeDepth
	void SetAmpEnvelopeDepth(float InDepth);                                                                                 // [0x20d3250] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeDecayTime
	void SetAmpEnvelopeDecayTime(float InDecayTimeMsec);                                                                     // [0x20d3180] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeBiasInvert
	void SetAmpEnvelopeBiasInvert(bool bInBiasInvert);                                                                       // [0x20d30b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeBiasDepth
	void SetAmpEnvelopeBiasDepth(float InDepth);                                                                             // [0x20d2fe0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeAttackTime
	void SetAmpEnvelopeAttackTime(float InAttackTimeMsec);                                                                   // [0x20d2f10] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.RefreshWaveTable
	void RefreshWaveTable(int32_t Index);                                                                                    // [0x20d2ac0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.RefreshAllWaveTables
	void RefreshAllWaveTables();                                                                                             // [0x20d2aa0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.NoteOn
	void NoteOn(float InMidiNote, float InVelocity);                                                                         // [0x20d2920] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.NoteOff
	void NoteOff(float InMidiNote);                                                                                          // [0x20d2560] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.GetNumTableEntries
	int32_t GetNumTableEntries();                                                                                            // [0x20d1e60] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.GetMaxTableIndex
	int32_t GetMaxTableIndex();                                                                                              // [0x20d1e20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.GetKeyFrameValuesForTable
	TArray<float> GetKeyFrameValuesForTable(float TableIndex);                                                               // [0x20d17d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.GetCurveTangent
	float GetCurveTangent(int32_t TableIndex);                                                                               // [0x20d1700] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/Synthesis.SynthComponentToneGenerator
/// Size: 0x00F0 (0x000790 - 0x000880)
class USynthComponentToneGenerator : public USynthComponent : USynthComponent
{ 
public:
	float                                              Frequency;                                                  // 0x0790   (0x0004)  
	float                                              Volume;                                                     // 0x0794   (0x0004)  
	FRuntimeFloatCurve                                 DistanceAttenuationCurve;                                   // 0x0798   (0x0088)  
	FVector2D                                          DistanceRange;                                              // 0x0820   (0x0010)  
	float                                              AttenuationDbAtMaxRange;                                    // 0x0830   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4C];                                      // 0x0834   (0x004C)  MISSED


	/// Functions
	// Function /Script/Synthesis.SynthComponentToneGenerator.SetVolume
	void SetVolume(float InVolume);                                                                                          // [0x20dd7f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentToneGenerator.SetFrequency
	void SetFrequency(float InFrequency);                                                                                    // [0x20d65f0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/Synthesis.SynthSamplePlayer
/// Size: 0x0130 (0x000790 - 0x0008C0)
class USynthSamplePlayer : public USynthComponent : USynthComponent
{ 
public:
	USoundWave*                                        SoundWave;                                                  // 0x0790   (0x0008)  
	FMulticastInlineDelegate                           OnSampleLoaded;                                             // 0x0798   (0x0010)  
	FMulticastInlineDelegate                           OnSamplePlaybackProgress;                                   // 0x07A8   (0x0010)  
	unsigned char                                      UnknownData00_6[0x108];                                     // 0x07B8   (0x0108)  MISSED


	/// Functions
	// Function /Script/Synthesis.SynthSamplePlayer.SetSoundWave
	void SetSoundWave(USoundWave* InSoundWave);                                                                              // [0x20dc580] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthSamplePlayer.SetScrubTimeWidth
	void SetScrubTimeWidth(float InScrubTimeWidthSec);                                                                       // [0x20dad60] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthSamplePlayer.SetScrubMode
	void SetScrubMode(bool bScrubMode);                                                                                      // [0x20dac90] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthSamplePlayer.SetPitch
	void SetPitch(float InPitch, float TimeSec);                                                                             // [0x20d9970] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthSamplePlayer.SeekToTime
	void SeekToTime(float TimeSec, ESamplePlayerSeekType SeekType, bool bWrap);                                              // [0x20d2da0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthSamplePlayer.IsLoaded
	bool IsLoaded();                                                                                                         // [0x20d2290] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Synthesis.SynthSamplePlayer.GetSampleDuration
	float GetSampleDuration();                                                                                               // [0x20d1ed0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Synthesis.SynthSamplePlayer.GetCurrentPlaybackProgressTime
	float GetCurrentPlaybackProgressTime();                                                                                  // [0x20d16a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Synthesis.SynthSamplePlayer.GetCurrentPlaybackProgressPercent
	float GetCurrentPlaybackProgressPercent();                                                                               // [0x20d1660] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Synthesis.SynthesisUtilitiesBlueprintFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class USynthesisUtilitiesBlueprintFunctionLibrary : public UBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/Synthesis.Synth2DSlider
/// Size: 0x04F0 (0x000150 - 0x000640)
class USynth2DSlider : public UWidget : UWidget
{ 
public:
	float                                              ValueX;                                                     // 0x0150   (0x0004)  
	float                                              ValueY;                                                     // 0x0154   (0x0004)  
	FDelegateProperty                                  ValueXDelegate;                                             // 0x0158   (0x0010)  
	FDelegateProperty                                  ValueYDelegate;                                             // 0x0168   (0x0010)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0178   (0x0008)  MISSED
	FSynth2DSliderStyle                                WidgetStyle;                                                // 0x0180   (0x0430)  
	FLinearColor                                       SliderHandleColor;                                          // 0x05B0   (0x0010)  
	bool                                               IndentHandle;                                               // 0x05C0   (0x0001)  
	bool                                               Locked;                                                     // 0x05C1   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x05C2   (0x0002)  MISSED
	float                                              StepSize;                                                   // 0x05C4   (0x0004)  
	bool                                               IsFocusable;                                                // 0x05C8   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x05C9   (0x0007)  MISSED
	FMulticastInlineDelegate                           OnMouseCaptureBegin;                                        // 0x05D0   (0x0010)  
	FMulticastInlineDelegate                           OnMouseCaptureEnd;                                          // 0x05E0   (0x0010)  
	FMulticastInlineDelegate                           OnControllerCaptureBegin;                                   // 0x05F0   (0x0010)  
	FMulticastInlineDelegate                           OnControllerCaptureEnd;                                     // 0x0600   (0x0010)  
	FMulticastInlineDelegate                           OnValueChangedX;                                            // 0x0610   (0x0010)  
	FMulticastInlineDelegate                           OnValueChangedY;                                            // 0x0620   (0x0010)  
	unsigned char                                      UnknownData03_6[0x10];                                      // 0x0630   (0x0010)  MISSED


	/// Functions
	// Function /Script/Synthesis.Synth2DSlider.SetValue
	void SetValue(FVector2D InValue);                                                                                        // [0x20dd5b0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Synthesis.Synth2DSlider.SetStepSize
	void SetStepSize(float InValue);                                                                                         // [0x20dc9b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.Synth2DSlider.SetSliderHandleColor
	void SetSliderHandleColor(FLinearColor InValue);                                                                         // [0x20dc370] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Synthesis.Synth2DSlider.SetLocked
	void SetLocked(bool InValue);                                                                                            // [0x20d7fd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.Synth2DSlider.SetIndentHandle
	void SetIndentHandle(bool InValue);                                                                                      // [0x20d7430] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.Synth2DSlider.GetValue
	FVector2D GetValue();                                                                                                    // [0x20d2120] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Synthesis.SynthKnob
/// Size: 0x0430 (0x000150 - 0x000580)
class USynthKnob : public UWidget : UWidget
{ 
public:
	float                                              Value;                                                      // 0x0150   (0x0004)  
	float                                              StepSize;                                                   // 0x0154   (0x0004)  
	float                                              MouseSpeed;                                                 // 0x0158   (0x0004)  
	float                                              MouseFineTuneSpeed;                                         // 0x015C   (0x0004)  
	bool                                               ShowTooltipInfo : 1;                                        // 0x0160:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x7];                                       // 0x0161   (0x0007)  MISSED
	FText                                              ParameterName;                                              // 0x0168   (0x0018)  
	FText                                              ParameterUnits;                                             // 0x0180   (0x0018)  
	FDelegateProperty                                  ValueDelegate;                                              // 0x0198   (0x0010)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x01A8   (0x0008)  MISSED
	FSynthKnobStyle                                    WidgetStyle;                                                // 0x01B0   (0x0360)  
	bool                                               Locked;                                                     // 0x0510   (0x0001)  
	bool                                               IsFocusable;                                                // 0x0511   (0x0001)  
	unsigned char                                      UnknownData02_5[0x6];                                       // 0x0512   (0x0006)  MISSED
	FMulticastInlineDelegate                           OnMouseCaptureBegin;                                        // 0x0518   (0x0010)  
	FMulticastInlineDelegate                           OnMouseCaptureEnd;                                          // 0x0528   (0x0010)  
	FMulticastInlineDelegate                           OnControllerCaptureBegin;                                   // 0x0538   (0x0010)  
	FMulticastInlineDelegate                           OnControllerCaptureEnd;                                     // 0x0548   (0x0010)  
	FMulticastInlineDelegate                           OnValueChanged;                                             // 0x0558   (0x0010)  
	unsigned char                                      UnknownData03_6[0x18];                                      // 0x0568   (0x0018)  MISSED


	/// Functions
	// Function /Script/Synthesis.SynthKnob.SetValue
	void SetValue(float InValue);                                                                                            // [0x20dd710] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthKnob.SetStepSize
	void SetStepSize(float InValue);                                                                                         // [0x20dca90] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthKnob.SetLocked
	void SetLocked(bool InValue);                                                                                            // [0x20d80b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthKnob.GetValue
	float GetValue();                                                                                                        // [0x20d2220] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Enum /Script/Synthesis.ESynth1OscType
/// Size: 0x07
enum ESynth1OscType : uint8_t
{
	ESynth1OscType__Sine0                                                            = 0,
	ESynth1OscType__Saw1                                                             = 1,
	ESynth1OscType__Triangle2                                                        = 2,
	ESynth1OscType__Square3                                                          = 3,
	ESynth1OscType__Noise4                                                           = 4,
	ESynth1OscType__Count5                                                           = 5,
	ESynth1OscType__ESynth1OscType_MAX6                                              = 6
};

/// Enum /Script/Synthesis.ESynthLFOType
/// Size: 0x09
enum ESynthLFOType : uint8_t
{
	ESynthLFOType__Sine0                                                             = 0,
	ESynthLFOType__UpSaw1                                                            = 1,
	ESynthLFOType__DownSaw2                                                          = 2,
	ESynthLFOType__Square3                                                           = 3,
	ESynthLFOType__Triangle4                                                         = 4,
	ESynthLFOType__Exponential5                                                      = 5,
	ESynthLFOType__RandomSampleHold6                                                 = 6,
	ESynthLFOType__Count7                                                            = 7,
	ESynthLFOType__ESynthLFOType_MAX8                                                = 8
};

/// Enum /Script/Synthesis.ESynthLFOMode
/// Size: 0x05
enum ESynthLFOMode : uint8_t
{
	ESynthLFOMode__Sync0                                                             = 0,
	ESynthLFOMode__OneShot1                                                          = 1,
	ESynthLFOMode__Free2                                                             = 2,
	ESynthLFOMode__Count3                                                            = 3,
	ESynthLFOMode__ESynthLFOMode_MAX4                                                = 4
};

/// Enum /Script/Synthesis.ESynthLFOPatchType
/// Size: 0x11
enum ESynthLFOPatchType : uint8_t
{
	ESynthLFOPatchType__PatchToNone0                                                 = 0,
	ESynthLFOPatchType__PatchToGain1                                                 = 1,
	ESynthLFOPatchType__PatchToOscFreq2                                              = 2,
	ESynthLFOPatchType__PatchToFilterFreq3                                           = 3,
	ESynthLFOPatchType__PatchToFilterQ4                                              = 4,
	ESynthLFOPatchType__PatchToOscPulseWidth5                                        = 5,
	ESynthLFOPatchType__PatchToOscPan6                                               = 6,
	ESynthLFOPatchType__PatchLFO1ToLFO2Frequency7                                    = 7,
	ESynthLFOPatchType__PatchLFO1ToLFO2Gain8                                         = 8,
	ESynthLFOPatchType__Count9                                                       = 9,
	ESynthLFOPatchType__ESynthLFOPatchType_MAX10                                     = 10
};

/// Enum /Script/Synthesis.ESynthModEnvPatch
/// Size: 0x10
enum ESynthModEnvPatch : uint8_t
{
	ESynthModEnvPatch__PatchToNone0                                                  = 0,
	ESynthModEnvPatch__PatchToOscFreq1                                               = 1,
	ESynthModEnvPatch__PatchToFilterFreq2                                            = 2,
	ESynthModEnvPatch__PatchToFilterQ3                                               = 3,
	ESynthModEnvPatch__PatchToLFO1Gain4                                              = 4,
	ESynthModEnvPatch__PatchToLFO2Gain5                                              = 5,
	ESynthModEnvPatch__PatchToLFO1Freq6                                              = 6,
	ESynthModEnvPatch__PatchToLFO2Freq7                                              = 7,
	ESynthModEnvPatch__Count8                                                        = 8,
	ESynthModEnvPatch__ESynthModEnvPatch_MAX9                                        = 9
};

/// Enum /Script/Synthesis.ESynthModEnvBiasPatch
/// Size: 0x10
enum ESynthModEnvBiasPatch : uint8_t
{
	ESynthModEnvBiasPatch__PatchToNone0                                              = 0,
	ESynthModEnvBiasPatch__PatchToOscFreq1                                           = 1,
	ESynthModEnvBiasPatch__PatchToFilterFreq2                                        = 2,
	ESynthModEnvBiasPatch__PatchToFilterQ3                                           = 3,
	ESynthModEnvBiasPatch__PatchToLFO1Gain4                                          = 4,
	ESynthModEnvBiasPatch__PatchToLFO2Gain5                                          = 5,
	ESynthModEnvBiasPatch__PatchToLFO1Freq6                                          = 6,
	ESynthModEnvBiasPatch__PatchToLFO2Freq7                                          = 7,
	ESynthModEnvBiasPatch__Count8                                                    = 8,
	ESynthModEnvBiasPatch__ESynthModEnvBiasPatch_MAX9                                = 9
};

/// Enum /Script/Synthesis.ESynthFilterType
/// Size: 0x06
enum ESynthFilterType : uint8_t
{
	ESynthFilterType__LowPass0                                                       = 0,
	ESynthFilterType__HighPass1                                                      = 1,
	ESynthFilterType__BandPass2                                                      = 2,
	ESynthFilterType__BandStop3                                                      = 3,
	ESynthFilterType__Count4                                                         = 4,
	ESynthFilterType__ESynthFilterType_MAX5                                          = 5
};

/// Enum /Script/Synthesis.ESynthFilterAlgorithm
/// Size: 0x05
enum ESynthFilterAlgorithm : uint8_t
{
	ESynthFilterAlgorithm__OnePole0                                                  = 0,
	ESynthFilterAlgorithm__StateVariable1                                            = 1,
	ESynthFilterAlgorithm__Ladder2                                                   = 2,
	ESynthFilterAlgorithm__Count3                                                    = 3,
	ESynthFilterAlgorithm__ESynthFilterAlgorithm_MAX4                                = 4
};

/// Enum /Script/Synthesis.ESynthStereoDelayMode
/// Size: 0x05
enum ESynthStereoDelayMode : uint8_t
{
	ESynthStereoDelayMode__Normal0                                                   = 0,
	ESynthStereoDelayMode__Cross1                                                    = 1,
	ESynthStereoDelayMode__PingPong2                                                 = 2,
	ESynthStereoDelayMode__Count3                                                    = 3,
	ESynthStereoDelayMode__ESynthStereoDelayMode_MAX4                                = 4
};

/// Enum /Script/Synthesis.ESynth1PatchSource
/// Size: 0x06
enum ESynth1PatchSource : uint8_t
{
	ESynth1PatchSource__LFO10                                                        = 0,
	ESynth1PatchSource__LFO21                                                        = 1,
	ESynth1PatchSource__Envelope2                                                    = 2,
	ESynth1PatchSource__BiasEnvelope3                                                = 3,
	ESynth1PatchSource__Count4                                                       = 4,
	ESynth1PatchSource__ESynth1PatchSource_MAX5                                      = 5
};

/// Enum /Script/Synthesis.ESynth1PatchDestination
/// Size: 0x16
enum ESynth1PatchDestination : uint8_t
{
	ESynth1PatchDestination__Osc1Gain0                                               = 0,
	ESynth1PatchDestination__Osc1Frequency1                                          = 1,
	ESynth1PatchDestination__Osc1Pulsewidth2                                         = 2,
	ESynth1PatchDestination__Osc2Gain3                                               = 3,
	ESynth1PatchDestination__Osc2Frequency4                                          = 4,
	ESynth1PatchDestination__Osc2Pulsewidth5                                         = 5,
	ESynth1PatchDestination__FilterFrequency6                                        = 6,
	ESynth1PatchDestination__FilterQ7                                                = 7,
	ESynth1PatchDestination__Gain8                                                   = 8,
	ESynth1PatchDestination__Pan9                                                    = 9,
	ESynth1PatchDestination__LFO1Frequency10                                         = 10,
	ESynth1PatchDestination__LFO1Gain11                                              = 11,
	ESynth1PatchDestination__LFO2Frequency12                                         = 12,
	ESynth1PatchDestination__LFO2Gain13                                              = 13,
	ESynth1PatchDestination__Count14                                                 = 14,
	ESynth1PatchDestination__ESynth1PatchDestination_MAX15                           = 15
};

/// Enum /Script/Synthesis.ESubmixEffectConvolutionReverbBlockSize
/// Size: 0x04
enum ESubmixEffectConvolutionReverbBlockSize : uint8_t
{
	ESubmixEffectConvolutionReverbBlockSize__BlockSize2560                           = 0,
	ESubmixEffectConvolutionReverbBlockSize__BlockSize5121                           = 1,
	ESubmixEffectConvolutionReverbBlockSize__BlockSize10242                          = 2,
	ESubmixEffectConvolutionReverbBlockSize__ESubmixEffectConvolutionReverbBlockSize_MAX3 = 3
};

/// Enum /Script/Synthesis.ESourceEffectDynamicsProcessorType
/// Size: 0x07
enum ESourceEffectDynamicsProcessorType : uint8_t
{
	ESourceEffectDynamicsProcessorType__Compressor0                                  = 0,
	ESourceEffectDynamicsProcessorType__Limiter1                                     = 1,
	ESourceEffectDynamicsProcessorType__Expander2                                    = 2,
	ESourceEffectDynamicsProcessorType__Gate3                                        = 3,
	ESourceEffectDynamicsProcessorType__UpwardsCompressor4                           = 4,
	ESourceEffectDynamicsProcessorType__Count5                                       = 5,
	ESourceEffectDynamicsProcessorType__ESourceEffectDynamicsProcessorType_MAX6      = 6
};

/// Enum /Script/Synthesis.ESourceEffectDynamicsPeakMode
/// Size: 0x05
enum ESourceEffectDynamicsPeakMode : uint8_t
{
	ESourceEffectDynamicsPeakMode__MeanSquared0                                      = 0,
	ESourceEffectDynamicsPeakMode__RootMeanSquared1                                  = 1,
	ESourceEffectDynamicsPeakMode__Peak2                                             = 2,
	ESourceEffectDynamicsPeakMode__Count3                                            = 3,
	ESourceEffectDynamicsPeakMode__ESourceEffectDynamicsPeakMode_MAX4                = 4
};

/// Enum /Script/Synthesis.EEnvelopeFollowerPeakMode
/// Size: 0x05
enum EEnvelopeFollowerPeakMode : uint8_t
{
	EEnvelopeFollowerPeakMode__MeanSquared0                                          = 0,
	EEnvelopeFollowerPeakMode__RootMeanSquared1                                      = 1,
	EEnvelopeFollowerPeakMode__Peak2                                                 = 2,
	EEnvelopeFollowerPeakMode__Count3                                                = 3,
	EEnvelopeFollowerPeakMode__EEnvelopeFollowerPeakMode_MAX4                        = 4
};

/// Enum /Script/Synthesis.ESourceEffectFilterCircuit
/// Size: 0x05
enum ESourceEffectFilterCircuit : uint8_t
{
	ESourceEffectFilterCircuit__OnePole0                                             = 0,
	ESourceEffectFilterCircuit__StateVariable1                                       = 1,
	ESourceEffectFilterCircuit__Ladder2                                              = 2,
	ESourceEffectFilterCircuit__Count3                                               = 3,
	ESourceEffectFilterCircuit__ESourceEffectFilterCircuit_MAX4                      = 4
};

/// Enum /Script/Synthesis.ESourceEffectFilterType
/// Size: 0x06
enum ESourceEffectFilterType : uint8_t
{
	ESourceEffectFilterType__LowPass0                                                = 0,
	ESourceEffectFilterType__HighPass1                                               = 1,
	ESourceEffectFilterType__BandPass2                                               = 2,
	ESourceEffectFilterType__BandStop3                                               = 3,
	ESourceEffectFilterType__Count4                                                  = 4,
	ESourceEffectFilterType__ESourceEffectFilterType_MAX5                            = 5
};

/// Enum /Script/Synthesis.ESourceEffectFilterParam
/// Size: 0x04
enum ESourceEffectFilterParam : uint8_t
{
	ESourceEffectFilterParam__FilterFrequency0                                       = 0,
	ESourceEffectFilterParam__FilterResonance1                                       = 1,
	ESourceEffectFilterParam__Count2                                                 = 2,
	ESourceEffectFilterParam__ESourceEffectFilterParam_MAX3                          = 3
};

/// Enum /Script/Synthesis.EStereoChannelMode
/// Size: 0x04
enum EStereoChannelMode : uint8_t
{
	EStereoChannelMode__MidSide0                                                     = 0,
	EStereoChannelMode__LeftRight1                                                   = 1,
	EStereoChannelMode__count2                                                       = 2,
	EStereoChannelMode__EStereoChannelMode_MAX3                                      = 3
};

/// Enum /Script/Synthesis.ESourceEffectMotionFilterModSource
/// Size: 0x07
enum ESourceEffectMotionFilterModSource : uint8_t
{
	ESourceEffectMotionFilterModSource__DistanceFromListener0                        = 0,
	ESourceEffectMotionFilterModSource__SpeedRelativeToListener1                     = 1,
	ESourceEffectMotionFilterModSource__SpeedOfSourceEmitter2                        = 2,
	ESourceEffectMotionFilterModSource__SpeedOfListener3                             = 3,
	ESourceEffectMotionFilterModSource__SpeedOfAngleDelta4                           = 4,
	ESourceEffectMotionFilterModSource__Count5                                       = 5,
	ESourceEffectMotionFilterModSource__ESourceEffectMotionFilterModSource_MAX6      = 6
};

/// Enum /Script/Synthesis.ESourceEffectMotionFilterModDestination
/// Size: 0x09
enum ESourceEffectMotionFilterModDestination : uint8_t
{
	ESourceEffectMotionFilterModDestination__FilterACutoffFrequency0                 = 0,
	ESourceEffectMotionFilterModDestination__FilterAResonance1                       = 1,
	ESourceEffectMotionFilterModDestination__FilterAOutputVolumeDB2                  = 2,
	ESourceEffectMotionFilterModDestination__FilterBCutoffFrequency3                 = 3,
	ESourceEffectMotionFilterModDestination__FilterBResonance4                       = 4,
	ESourceEffectMotionFilterModDestination__FilterBOutputVolumeDB5                  = 5,
	ESourceEffectMotionFilterModDestination__FilterMix6                              = 6,
	ESourceEffectMotionFilterModDestination__Count7                                  = 7,
	ESourceEffectMotionFilterModDestination__ESourceEffectMotionFilterModDestination_MAX8 = 8
};

/// Enum /Script/Synthesis.ESourceEffectMotionFilterTopology
/// Size: 0x04
enum ESourceEffectMotionFilterTopology : uint8_t
{
	ESourceEffectMotionFilterTopology__SerialMode0                                   = 0,
	ESourceEffectMotionFilterTopology__ParallelMode1                                 = 1,
	ESourceEffectMotionFilterTopology__Count2                                        = 2,
	ESourceEffectMotionFilterTopology__ESourceEffectMotionFilterTopology_MAX3        = 3
};

/// Enum /Script/Synthesis.ESourceEffectMotionFilterCircuit
/// Size: 0x05
enum ESourceEffectMotionFilterCircuit : uint8_t
{
	ESourceEffectMotionFilterCircuit__OnePole0                                       = 0,
	ESourceEffectMotionFilterCircuit__StateVariable1                                 = 1,
	ESourceEffectMotionFilterCircuit__Ladder2                                        = 2,
	ESourceEffectMotionFilterCircuit__Count3                                         = 3,
	ESourceEffectMotionFilterCircuit__ESourceEffectMotionFilterCircuit_MAX4          = 4
};

/// Enum /Script/Synthesis.ESourceEffectMotionFilterType
/// Size: 0x06
enum ESourceEffectMotionFilterType : uint8_t
{
	ESourceEffectMotionFilterType__LowPass0                                          = 0,
	ESourceEffectMotionFilterType__HighPass1                                         = 1,
	ESourceEffectMotionFilterType__BandPass2                                         = 2,
	ESourceEffectMotionFilterType__BandStop3                                         = 3,
	ESourceEffectMotionFilterType__Count4                                            = 4,
	ESourceEffectMotionFilterType__ESourceEffectMotionFilterType_MAX5                = 5
};

/// Enum /Script/Synthesis.EPhaserLFOType
/// Size: 0x09
enum EPhaserLFOType : uint8_t
{
	EPhaserLFOType__Sine0                                                            = 0,
	EPhaserLFOType__UpSaw1                                                           = 1,
	EPhaserLFOType__DownSaw2                                                         = 2,
	EPhaserLFOType__Square3                                                          = 3,
	EPhaserLFOType__Triangle4                                                        = 4,
	EPhaserLFOType__Exponential5                                                     = 5,
	EPhaserLFOType__RandomSampleHold6                                                = 6,
	EPhaserLFOType__Count7                                                           = 7,
	EPhaserLFOType__EPhaserLFOType_MAX8                                              = 8
};

/// Enum /Script/Synthesis.ERingModulatorTypeSourceEffect
/// Size: 0x06
enum ERingModulatorTypeSourceEffect : uint8_t
{
	ERingModulatorTypeSourceEffect__Sine0                                            = 0,
	ERingModulatorTypeSourceEffect__Saw1                                             = 1,
	ERingModulatorTypeSourceEffect__Triangle2                                        = 2,
	ERingModulatorTypeSourceEffect__Square3                                          = 3,
	ERingModulatorTypeSourceEffect__Count4                                           = 4,
	ERingModulatorTypeSourceEffect__ERingModulatorTypeSourceEffect_MAX5              = 5
};

/// Enum /Script/Synthesis.EStereoDelaySourceEffect
/// Size: 0x05
enum EStereoDelaySourceEffect : uint8_t
{
	EStereoDelaySourceEffect__Normal0                                                = 0,
	EStereoDelaySourceEffect__Cross1                                                 = 1,
	EStereoDelaySourceEffect__PingPong2                                              = 2,
	EStereoDelaySourceEffect__Count3                                                 = 3,
	EStereoDelaySourceEffect__EStereoDelaySourceEffect_MAX4                          = 4
};

/// Enum /Script/Synthesis.EStereoDelayFiltertype
/// Size: 0x06
enum EStereoDelayFiltertype : uint8_t
{
	EStereoDelayFiltertype__Lowpass0                                                 = 0,
	EStereoDelayFiltertype__Highpass1                                                = 1,
	EStereoDelayFiltertype__Bandpass2                                                = 2,
	EStereoDelayFiltertype__Notch3                                                   = 3,
	EStereoDelayFiltertype__Count4                                                   = 4,
	EStereoDelayFiltertype__EStereoDelayFiltertype_MAX5                              = 5
};

/// Enum /Script/Synthesis.ESubmixFilterType
/// Size: 0x06
enum ESubmixFilterType : uint8_t
{
	ESubmixFilterType__LowPass0                                                      = 0,
	ESubmixFilterType__HighPass1                                                     = 1,
	ESubmixFilterType__BandPass2                                                     = 2,
	ESubmixFilterType__BandStop3                                                     = 3,
	ESubmixFilterType__Count4                                                        = 4,
	ESubmixFilterType__ESubmixFilterType_MAX5                                        = 5
};

/// Enum /Script/Synthesis.ESubmixFilterAlgorithm
/// Size: 0x05
enum ESubmixFilterAlgorithm : uint8_t
{
	ESubmixFilterAlgorithm__OnePole0                                                 = 0,
	ESubmixFilterAlgorithm__StateVariable1                                           = 1,
	ESubmixFilterAlgorithm__Ladder2                                                  = 2,
	ESubmixFilterAlgorithm__Count3                                                   = 3,
	ESubmixFilterAlgorithm__ESubmixFilterAlgorithm_MAX4                              = 4
};

/// Enum /Script/Synthesis.ETapLineMode
/// Size: 0x04
enum ETapLineMode : uint8_t
{
	ETapLineMode__SendToChannel0                                                     = 0,
	ETapLineMode__Panning1                                                           = 1,
	ETapLineMode__Disabled2                                                          = 2,
	ETapLineMode__ETapLineMode_MAX3                                                  = 3
};

/// Enum /Script/Synthesis.EGranularSynthEnvelopeType
/// Size: 0x16
enum EGranularSynthEnvelopeType : uint8_t
{
	EGranularSynthEnvelopeType__Rectangular0                                         = 0,
	EGranularSynthEnvelopeType__Triangle1                                            = 1,
	EGranularSynthEnvelopeType__DownwardTriangle2                                    = 2,
	EGranularSynthEnvelopeType__UpwardTriangle3                                      = 3,
	EGranularSynthEnvelopeType__ExponentialDecay4                                    = 4,
	EGranularSynthEnvelopeType__ExponentialIncrease5                                 = 5,
	EGranularSynthEnvelopeType__Gaussian6                                            = 6,
	EGranularSynthEnvelopeType__Hanning7                                             = 7,
	EGranularSynthEnvelopeType__Lanczos8                                             = 8,
	EGranularSynthEnvelopeType__Cosine9                                              = 9,
	EGranularSynthEnvelopeType__CosineSquared10                                      = 10,
	EGranularSynthEnvelopeType__Welch11                                              = 11,
	EGranularSynthEnvelopeType__Blackman12                                           = 12,
	EGranularSynthEnvelopeType__BlackmanHarris13                                     = 13,
	EGranularSynthEnvelopeType__Count14                                              = 14,
	EGranularSynthEnvelopeType__EGranularSynthEnvelopeType_MAX15                     = 15
};

/// Enum /Script/Synthesis.EGranularSynthSeekType
/// Size: 0x04
enum EGranularSynthSeekType : uint8_t
{
	EGranularSynthSeekType__FromBeginning0                                           = 0,
	EGranularSynthSeekType__FromCurrentPosition1                                     = 1,
	EGranularSynthSeekType__Count2                                                   = 2,
	EGranularSynthSeekType__EGranularSynthSeekType_MAX3                              = 3
};

/// Enum /Script/Synthesis.CurveInterpolationType
/// Size: 0x04
enum CurveInterpolationType : uint8_t
{
	CurveInterpolationType__AUTOINTERP0                                              = 0,
	CurveInterpolationType__LINEAR1                                                  = 1,
	CurveInterpolationType__CONSTANT2                                                = 2,
	CurveInterpolationType__CurveInterpolationType_MAX3                              = 3
};

/// Enum /Script/Synthesis.ESamplePlayerSeekType
/// Size: 0x05
enum ESamplePlayerSeekType : uint8_t
{
	ESamplePlayerSeekType__FromBeginning0                                            = 0,
	ESamplePlayerSeekType__FromCurrentPosition1                                      = 1,
	ESamplePlayerSeekType__FromEnd2                                                  = 2,
	ESamplePlayerSeekType__Count3                                                    = 3,
	ESamplePlayerSeekType__ESamplePlayerSeekType_MAX4                                = 4
};

/// Enum /Script/Synthesis.ESynthKnobSize
/// Size: 0x04
enum ESynthKnobSize : uint8_t
{
	ESynthKnobSize__Medium0                                                          = 0,
	ESynthKnobSize__Large1                                                           = 1,
	ESynthKnobSize__Count2                                                           = 2,
	ESynthKnobSize__ESynthKnobSize_MAX3                                              = 3
};

/// Enum /Script/Synthesis.ESynthSlateSizeType
/// Size: 0x05
enum ESynthSlateSizeType : uint8_t
{
	ESynthSlateSizeType__Small0                                                      = 0,
	ESynthSlateSizeType__Medium1                                                     = 1,
	ESynthSlateSizeType__Large2                                                      = 2,
	ESynthSlateSizeType__Count3                                                      = 3,
	ESynthSlateSizeType__ESynthSlateSizeType_MAX4                                    = 4
};

/// Enum /Script/Synthesis.ESynthSlateColorStyle
/// Size: 0x04
enum ESynthSlateColorStyle : uint8_t
{
	ESynthSlateColorStyle__Light0                                                    = 0,
	ESynthSlateColorStyle__Dark1                                                     = 1,
	ESynthSlateColorStyle__Count2                                                    = 2,
	ESynthSlateColorStyle__ESynthSlateColorStyle_MAX3                                = 3
};

