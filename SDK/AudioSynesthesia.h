
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package AudioSynesthesia.

/// Struct /Script/AudioSynesthesia.LoudnessResults
/// Size: 0x0010 (0x000000 - 0x000010)
struct FLoudnessResults
{ 
	float                                              Loudness;                                                   // 0x0000   (0x0004)  
	float                                              NormalizedLoudness;                                         // 0x0004   (0x0004)  
	float                                              PerceptualEnergy;                                           // 0x0008   (0x0004)  
	float                                              TimeSeconds;                                                // 0x000C   (0x0004)  
};

/// Struct /Script/AudioSynesthesia.MeterResults
/// Size: 0x0014 (0x000000 - 0x000014)
struct FMeterResults
{ 
	float                                              TimeSeconds;                                                // 0x0000   (0x0004)  
	float                                              MeterValue;                                                 // 0x0004   (0x0004)  
	float                                              PeakValue;                                                  // 0x0008   (0x0004)  
	int32_t                                            NumSamplesClipping;                                         // 0x000C   (0x0004)  
	float                                              ClippingValue;                                              // 0x0010   (0x0004)  
};

/// Struct /Script/AudioSynesthesia.SynesthesiaSpectrumResults
/// Size: 0x0018 (0x000000 - 0x000018)
struct FSynesthesiaSpectrumResults
{ 
	float                                              TimeSeconds;                                                // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<float>                                      SpectrumValues;                                             // 0x0008   (0x0010)  
};

/// Class /Script/AudioSynesthesia.AudioSynesthesiaSettings
/// Size: 0x0000 (0x000028 - 0x000028)
class UAudioSynesthesiaSettings : public UAudioAnalyzerSettings : UAudioAnalyzerSettings
{ 
public:
};

/// Class /Script/AudioSynesthesia.AudioSynesthesiaNRTSettings
/// Size: 0x0000 (0x000028 - 0x000028)
class UAudioSynesthesiaNRTSettings : public UAudioAnalyzerNRTSettings : UAudioAnalyzerNRTSettings
{ 
public:
};

/// Class /Script/AudioSynesthesia.AudioSynesthesiaNRT
/// Size: 0x0000 (0x000078 - 0x000078)
class UAudioSynesthesiaNRT : public UAudioAnalyzerNRT : UAudioAnalyzerNRT
{ 
public:
};

/// Class /Script/AudioSynesthesia.ConstantQNRTSettings
/// Size: 0x0020 (0x000028 - 0x000048)
class UConstantQNRTSettings : public UAudioSynesthesiaNRTSettings : UAudioSynesthesiaNRTSettings
{ 
public:
	float                                              StartingFrequency;                                          // 0x0028   (0x0004)  
	int32_t                                            NumBands;                                                   // 0x002C   (0x0004)  
	float                                              NumBandsPerOctave;                                          // 0x0030   (0x0004)  
	float                                              AnalysisPeriod;                                             // 0x0034   (0x0004)  
	bool                                               bDownmixToMono;                                             // 0x0038   (0x0001)  
	EConstantQFFTSizeEnum                              FFTSize;                                                    // 0x0039   (0x0001)  
	EFFTWindowType                                     WindowType;                                                 // 0x003A   (0x0001)  
	EAudioSpectrumType                                 SpectrumType;                                               // 0x003B   (0x0001)  
	float                                              BandWidthStretch;                                           // 0x003C   (0x0004)  
	EConstantQNormalizationEnum                        CQTNormalization;                                           // 0x0040   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0041   (0x0003)  MISSED
	float                                              NoiseFloorDb;                                               // 0x0044   (0x0004)  
};

/// Class /Script/AudioSynesthesia.ConstantQNRT
/// Size: 0x0008 (0x000078 - 0x000080)
class UConstantQNRT : public UAudioSynesthesiaNRT : UAudioSynesthesiaNRT
{ 
public:
	UConstantQNRTSettings*                             Settings;                                                   // 0x0078   (0x0008)  


	/// Functions
	// Function /Script/AudioSynesthesia.ConstantQNRT.GetNormalizedChannelConstantQAtTime
	void GetNormalizedChannelConstantQAtTime(float InSeconds, int32_t InChannel, TArray<float>& OutConstantQ);               // [0x205f050] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AudioSynesthesia.ConstantQNRT.GetChannelConstantQAtTime
	void GetChannelConstantQAtTime(float InSeconds, int32_t InChannel, TArray<float>& OutConstantQ);                         // [0x205e9f0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AudioSynesthesia.LoudnessSettings
/// Size: 0x0018 (0x000028 - 0x000040)
class ULoudnessSettings : public UAudioSynesthesiaSettings : UAudioSynesthesiaSettings
{ 
public:
	float                                              AnalysisPeriod;                                             // 0x0028   (0x0004)  
	float                                              MinimumFrequency;                                           // 0x002C   (0x0004)  
	float                                              MaximumFrequency;                                           // 0x0030   (0x0004)  
	ELoudnessCurveTypeEnum                             CurveType;                                                  // 0x0034   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0035   (0x0003)  MISSED
	float                                              NoiseFloorDb;                                               // 0x0038   (0x0004)  
	float                                              ExpectedMaxLoudness;                                        // 0x003C   (0x0004)  
};

/// Class /Script/AudioSynesthesia.LoudnessAnalyzer
/// Size: 0x0048 (0x000090 - 0x0000D8)
class ULoudnessAnalyzer : public UAudioAnalyzer : UAudioAnalyzer
{ 
public:
	ULoudnessSettings*                                 Settings;                                                   // 0x0090   (0x0008)  
	FMulticastInlineDelegate                           OnOverallLoudnessResults;                                   // 0x0098   (0x0010)  
	FMulticastInlineDelegate                           OnPerChannelLoudnessResults;                                // 0x00A8   (0x0010)  
	FMulticastInlineDelegate                           OnLatestOverallLoudnessResults;                             // 0x00B8   (0x0010)  
	FMulticastInlineDelegate                           OnLatestPerChannelLoudnessResults;                          // 0x00C8   (0x0010)  
};

/// Class /Script/AudioSynesthesia.LoudnessNRTSettings
/// Size: 0x0018 (0x000028 - 0x000040)
class ULoudnessNRTSettings : public UAudioSynesthesiaNRTSettings : UAudioSynesthesiaNRTSettings
{ 
public:
	float                                              AnalysisPeriod;                                             // 0x0028   (0x0004)  
	float                                              MinimumFrequency;                                           // 0x002C   (0x0004)  
	float                                              MaximumFrequency;                                           // 0x0030   (0x0004)  
	ELoudnessNRTCurveTypeEnum                          CurveType;                                                  // 0x0034   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0035   (0x0003)  MISSED
	float                                              NoiseFloorDb;                                               // 0x0038   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Class /Script/AudioSynesthesia.LoudnessNRT
/// Size: 0x0008 (0x000078 - 0x000080)
class ULoudnessNRT : public UAudioSynesthesiaNRT : UAudioSynesthesiaNRT
{ 
public:
	ULoudnessNRTSettings*                              Settings;                                                   // 0x0078   (0x0008)  


	/// Functions
	// Function /Script/AudioSynesthesia.LoudnessNRT.GetNormalizedLoudnessAtTime
	void GetNormalizedLoudnessAtTime(float InSeconds, float& OutLoudness);                                                   // [0x205f580] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AudioSynesthesia.LoudnessNRT.GetNormalizedChannelLoudnessAtTime
	void GetNormalizedChannelLoudnessAtTime(float InSeconds, int32_t InChannel, float& OutLoudness);                         // [0x205f190] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AudioSynesthesia.LoudnessNRT.GetLoudnessAtTime
	void GetLoudnessAtTime(float InSeconds, float& OutLoudness);                                                             // [0x205ef60] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AudioSynesthesia.LoudnessNRT.GetChannelLoudnessAtTime
	void GetChannelLoudnessAtTime(float InSeconds, int32_t InChannel, float& OutLoudness);                                   // [0x205ebc0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AudioSynesthesia.MeterSettings
/// Size: 0x0018 (0x000028 - 0x000040)
class UMeterSettings : public UAudioSynesthesiaSettings : UAudioSynesthesiaSettings
{ 
public:
	float                                              AnalysisPeriod;                                             // 0x0028   (0x0004)  
	EMeterPeakType                                     PeakMode;                                                   // 0x002C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x002D   (0x0003)  MISSED
	int32_t                                            MeterAttackTime;                                            // 0x0030   (0x0004)  
	int32_t                                            MeterReleaseTime;                                           // 0x0034   (0x0004)  
	int32_t                                            PeakHoldTime;                                               // 0x0038   (0x0004)  
	float                                              ClippingThreshold;                                          // 0x003C   (0x0004)  
};

/// Class /Script/AudioSynesthesia.MeterAnalyzer
/// Size: 0x00A8 (0x000090 - 0x000138)
class UMeterAnalyzer : public UAudioAnalyzer : UAudioAnalyzer
{ 
public:
	UMeterSettings*                                    Settings;                                                   // 0x0090   (0x0008)  
	FMulticastInlineDelegate                           OnOverallMeterResults;                                      // 0x0098   (0x0010)  
	unsigned char                                      UnknownData00_5[0x18];                                      // 0x00A8   (0x0018)  MISSED
	FMulticastInlineDelegate                           OnPerChannelMeterResults;                                   // 0x00C0   (0x0010)  
	unsigned char                                      UnknownData01_5[0x18];                                      // 0x00D0   (0x0018)  MISSED
	FMulticastInlineDelegate                           OnLatestOverallMeterResults;                                // 0x00E8   (0x0010)  
	unsigned char                                      UnknownData02_5[0x18];                                      // 0x00F8   (0x0018)  MISSED
	FMulticastInlineDelegate                           OnLatestPerChannelMeterResults;                             // 0x0110   (0x0010)  
	unsigned char                                      UnknownData03_6[0x18];                                      // 0x0120   (0x0018)  MISSED
};

/// Class /Script/AudioSynesthesia.OnsetNRTSettings
/// Size: 0x0018 (0x000028 - 0x000040)
class UOnsetNRTSettings : public UAudioSynesthesiaNRTSettings : UAudioSynesthesiaNRTSettings
{ 
public:
	bool                                               bDownmixToMono;                                             // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0029   (0x0003)  MISSED
	float                                              GranularityInSeconds;                                       // 0x002C   (0x0004)  
	float                                              Sensitivity;                                                // 0x0030   (0x0004)  
	float                                              MinimumFrequency;                                           // 0x0034   (0x0004)  
	float                                              MaximumFrequency;                                           // 0x0038   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Class /Script/AudioSynesthesia.OnsetNRT
/// Size: 0x0008 (0x000078 - 0x000080)
class UOnsetNRT : public UAudioSynesthesiaNRT : UAudioSynesthesiaNRT
{ 
public:
	UOnsetNRTSettings*                                 Settings;                                                   // 0x0078   (0x0008)  


	/// Functions
	// Function /Script/AudioSynesthesia.OnsetNRT.GetNormalizedChannelOnsetsBetweenTimes
	void GetNormalizedChannelOnsetsBetweenTimes(float InStartSeconds, float InEndSeconds, int32_t InChannel, TArray<float>& OutOnsetTimestamps, TArray<float>& OutOnsetStrengths); // [0x205f2b0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AudioSynesthesia.OnsetNRT.GetChannelOnsetsBetweenTimes
	void GetChannelOnsetsBetweenTimes(float InStartSeconds, float InEndSeconds, int32_t InChannel, TArray<float>& OutOnsetTimestamps, TArray<float>& OutOnsetStrengths); // [0x205ece0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AudioSynesthesia.SynesthesiaSpectrumAnalysisSettings
/// Size: 0x0008 (0x000028 - 0x000030)
class USynesthesiaSpectrumAnalysisSettings : public UAudioSynesthesiaSettings : UAudioSynesthesiaSettings
{ 
public:
	float                                              AnalysisPeriod;                                             // 0x0028   (0x0004)  
	EFFTSize                                           FFTSize;                                                    // 0x002C   (0x0001)  
	EAudioSpectrumType                                 SpectrumType;                                               // 0x002D   (0x0001)  
	EFFTWindowType                                     WindowType;                                                 // 0x002E   (0x0001)  
	bool                                               bDownmixToMono;                                             // 0x002F   (0x0001)  
};

/// Class /Script/AudioSynesthesia.SynesthesiaSpectrumAnalyzer
/// Size: 0x0058 (0x000090 - 0x0000E8)
class USynesthesiaSpectrumAnalyzer : public UAudioAnalyzer : UAudioAnalyzer
{ 
public:
	USynesthesiaSpectrumAnalysisSettings*              Settings;                                                   // 0x0090   (0x0008)  
	FMulticastInlineDelegate                           OnSpectrumResults;                                          // 0x0098   (0x0010)  
	unsigned char                                      UnknownData00_5[0x18];                                      // 0x00A8   (0x0018)  MISSED
	FMulticastInlineDelegate                           OnLatestSpectrumResults;                                    // 0x00C0   (0x0010)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x00D0   (0x0018)  MISSED


	/// Functions
	// Function /Script/AudioSynesthesia.SynesthesiaSpectrumAnalyzer.GetNumCenterFrequencies
	int32_t GetNumCenterFrequencies();                                                                                       // [0x205f670] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AudioSynesthesia.SynesthesiaSpectrumAnalyzer.GetCenterFrequencies
	void GetCenterFrequencies(float InSampleRate, TArray<float>& OutCenterFrequencies);                                      // [0x205e900] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Enum /Script/AudioSynesthesia.EConstantQNormalizationEnum
/// Size: 0x04
enum EConstantQNormalizationEnum : uint8_t
{
	EConstantQNormalizationEnum__EqualEuclideanNorm0                                 = 0,
	EConstantQNormalizationEnum__EqualEnergy1                                        = 1,
	EConstantQNormalizationEnum__EqualAmplitude2                                     = 2,
	EConstantQNormalizationEnum__EConstantQNormalizationEnum_MAX3                    = 3
};

/// Enum /Script/AudioSynesthesia.EConstantQFFTSizeEnum
/// Size: 0x09
enum EConstantQFFTSizeEnum : uint8_t
{
	EConstantQFFTSizeEnum__Min0                                                      = 0,
	EConstantQFFTSizeEnum__XXSmall1                                                  = 1,
	EConstantQFFTSizeEnum__XSmall2                                                   = 2,
	EConstantQFFTSizeEnum__Small3                                                    = 3,
	EConstantQFFTSizeEnum__Medium4                                                   = 4,
	EConstantQFFTSizeEnum__Large5                                                    = 5,
	EConstantQFFTSizeEnum__XLarge6                                                   = 6,
	EConstantQFFTSizeEnum__XXLarge7                                                  = 7,
	EConstantQFFTSizeEnum__Max8                                                      = 8
};

/// Enum /Script/AudioSynesthesia.ELoudnessCurveTypeEnum
/// Size: 0x06
enum ELoudnessCurveTypeEnum : uint8_t
{
	ELoudnessCurveTypeEnum__A0                                                       = 0,
	ELoudnessCurveTypeEnum__B1                                                       = 1,
	ELoudnessCurveTypeEnum__C2                                                       = 2,
	ELoudnessCurveTypeEnum__D3                                                       = 3,
	ELoudnessCurveTypeEnum__None4                                                    = 4,
	ELoudnessCurveTypeEnum__ELoudnessCurveTypeEnum_MAX5                              = 5
};

/// Enum /Script/AudioSynesthesia.ELoudnessNRTCurveTypeEnum
/// Size: 0x06
enum ELoudnessNRTCurveTypeEnum : uint8_t
{
	ELoudnessNRTCurveTypeEnum__A0                                                    = 0,
	ELoudnessNRTCurveTypeEnum__B1                                                    = 1,
	ELoudnessNRTCurveTypeEnum__C2                                                    = 2,
	ELoudnessNRTCurveTypeEnum__D3                                                    = 3,
	ELoudnessNRTCurveTypeEnum__None4                                                 = 4,
	ELoudnessNRTCurveTypeEnum__ELoudnessNRTCurveTypeEnum_MAX5                        = 5
};

/// Enum /Script/AudioSynesthesia.EMeterPeakType
/// Size: 0x05
enum EMeterPeakType : uint8_t
{
	EMeterPeakType__MeanSquared0                                                     = 0,
	EMeterPeakType__RootMeanSquared1                                                 = 1,
	EMeterPeakType__Peak2                                                            = 2,
	EMeterPeakType__Count3                                                           = 3,
	EMeterPeakType__EMeterPeakType_MAX4                                              = 4
};

