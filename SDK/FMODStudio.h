
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package FMODStudio.

/// Struct /Script/FMODStudio.FMODAssetLookupRow
/// Size: 0x0020 (0x000008 - 0x000028)
struct FFMODAssetLookupRow : FTableRowBase
{ 
	FString                                            PackageName;                                                // 0x0008   (0x0010)  
	FString                                            AssetName;                                                  // 0x0018   (0x0010)  
};

/// Struct /Script/FMODStudio.FMODAttenuationDetails
/// Size: 0x000C (0x000000 - 0x00000C)
struct FFMODAttenuationDetails
{ 
	bool                                               bOverrideAttenuation : 1;                                   // 0x0000:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              MinimumDistance;                                            // 0x0004   (0x0004)  
	float                                              MaximumDistance;                                            // 0x0008   (0x0004)  
};

/// Struct /Script/FMODStudio.FMODOcclusionDetails
/// Size: 0x0003 (0x000000 - 0x000003)
struct FFMODOcclusionDetails
{ 
	bool                                               bEnableOcclusion;                                           // 0x0000   (0x0001)  
	TEnumAsByte<ECollisionChannel>                     OcclusionTraceChannel;                                      // 0x0001   (0x0001)  
	bool                                               bUseComplexCollisionForOcclusion;                           // 0x0002   (0x0001)  
};

/// Struct /Script/FMODStudio.FMODLocalizedBankRow
/// Size: 0x0010 (0x000008 - 0x000018)
struct FFMODLocalizedBankRow : FTableRowBase
{ 
	FString                                            Path;                                                       // 0x0008   (0x0010)  
};

/// Struct /Script/FMODStudio.FMODLocalizedBankTable
/// Size: 0x0008 (0x000008 - 0x000010)
struct FFMODLocalizedBankTable : FTableRowBase
{ 
	UDataTable*                                        Banks;                                                      // 0x0008   (0x0008)  
};

/// Struct /Script/FMODStudio.FMODEventInstance
/// Size: 0x0008 (0x000000 - 0x000008)
struct FFMODEventInstance
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/FMODStudio.FMODEventControlChannel
/// Size: 0x0000 (0x000108 - 0x000108)
struct FFMODEventControlChannel : FMovieSceneByteChannel
{ 
};

/// Struct /Script/FMODStudio.FMODEventControlSectionTemplate
/// Size: 0x0110 (0x000020 - 0x000130)
struct FFMODEventControlSectionTemplate : FMovieSceneEvalTemplate
{ 
	FFMODEventControlChannel                           ControlKeys;                                                // 0x0020   (0x0108)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0128   (0x0008)  MISSED
};

/// Struct /Script/FMODStudio.FMODEventParameterSectionTemplate
/// Size: 0x0000 (0x000080 - 0x000080)
struct FFMODEventParameterSectionTemplate : FMovieSceneParameterSectionTemplate
{ 
};

/// Struct /Script/FMODStudio.CustomPoolSizes
/// Size: 0x0014 (0x000000 - 0x000014)
struct FCustomPoolSizes
{ 
	int32_t                                            Desktop;                                                    // 0x0000   (0x0004)  
	int32_t                                            Mobile;                                                     // 0x0004   (0x0004)  
	int32_t                                            PS4;                                                        // 0x0008   (0x0004)  
	int32_t                                            SWITCH;                                                     // 0x000C   (0x0004)  
	int32_t                                            XBoxOne;                                                    // 0x0010   (0x0004)  
};

/// Struct /Script/FMODStudio.FMODPlatformSettings
/// Size: 0x0060 (0x000000 - 0x000060)
struct FFMODPlatformSettings
{ 
	int32_t                                            RealChannelCount;                                           // 0x0000   (0x0004)  
	int32_t                                            SampleRate;                                                 // 0x0004   (0x0004)  
	TEnumAsByte<EFMODSpeakerMode>                      SpeakerMode;                                                // 0x0008   (0x0001)  
	TEnumAsByte<EFMODOutput>                           OutputType;                                                 // 0x0009   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x000A   (0x0002)  MISSED
	int32_t                                            CustomPoolSize;                                             // 0x000C   (0x0004)  
	TMap<TEnumAsByte, int32_t>                         Codecs;                                                     // 0x0010   (0x0050)  
};

/// Struct /Script/FMODStudio.FMODProjectLocale
/// Size: 0x0028 (0x000000 - 0x000028)
struct FFMODProjectLocale
{ 
	FString                                            LocaleName;                                                 // 0x0000   (0x0010)  
	FString                                            LocaleCode;                                                 // 0x0010   (0x0010)  
	bool                                               bDefault;                                                   // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Class /Script/FMODStudio.FMODAmbientSound
/// Size: 0x0008 (0x000290 - 0x000298)
class AFMODAmbientSound : public AActor : AActor
{ 
public:
	UFMODAudioComponent*                               AudioComponent;                                             // 0x0290   (0x0008)  
};

/// Class /Script/FMODStudio.FMODAnimNotifyPlay
/// Size: 0x0020 (0x000038 - 0x000058)
class UFMODAnimNotifyPlay : public UAnimNotify : UAnimNotify
{ 
public:
	bool                                               bFollow : 1;                                                // 0x0038:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x7];                                       // 0x0039   (0x0007)  MISSED
	FString                                            AttachName;                                                 // 0x0040   (0x0010)  
	UFMODEvent*                                        Event;                                                      // 0x0050   (0x0008)  
};

/// Class /Script/FMODStudio.FMODAsset
/// Size: 0x0010 (0x000028 - 0x000038)
class UFMODAsset : public UObject : UObject
{ 
public:
	FGuid                                              AssetGuid;                                                  // 0x0028   (0x0010)  
};

/// Class /Script/FMODStudio.FMODAudioComponent
/// Size: 0x01A0 (0x0002A0 - 0x000440)
class UFMODAudioComponent : public USceneComponent : USceneComponent
{ 
public:
	UFMODEvent*                                        Event;                                                      // 0x02A0   (0x0008)  
	TMap<FName, float>                                 ParameterCache;                                             // 0x02A8   (0x0050)  
	FString                                            ProgrammerSoundName;                                        // 0x02F8   (0x0010)  
	bool                                               bEnableTimelineCallbacks : 1;                               // 0x0308:0 (0x0001)  
	bool                                               bAutoDestroy : 1;                                           // 0x0308:1 (0x0001)  
	bool                                               bStopWhenOwnerDestroyed : 1;                                // 0x0308:2 (0x0001)  
	unsigned char                                      UnknownData00_4[0x7];                                       // 0x0309   (0x0007)  MISSED
	FMulticastInlineDelegate                           OnEventStopped;                                             // 0x0310   (0x0010)  
	FMulticastInlineDelegate                           OnSoundStopped;                                             // 0x0320   (0x0010)  
	FMulticastInlineDelegate                           OnTimelineMarker;                                           // 0x0330   (0x0010)  
	FMulticastInlineDelegate                           OnTimelineBeat;                                             // 0x0340   (0x0010)  
	FFMODAttenuationDetails                            AttenuationDetails;                                         // 0x0350   (0x000C)  
	FFMODOcclusionDetails                              OcclusionDetails;                                           // 0x035C   (0x0003)  
	unsigned char                                      UnknownData01_6[0xE1];                                      // 0x035F   (0x00E1)  MISSED


	/// Functions
	// Function /Script/FMODStudio.FMODAudioComponent.Stop
	void Stop();                                                                                                             // [0xbc1710] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMODStudio.FMODAudioComponent.SetVolume
	void SetVolume(float Volume);                                                                                            // [0xbc1690] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMODStudio.FMODAudioComponent.SetTimelinePosition
	void SetTimelinePosition(int32_t Time);                                                                                  // [0xbc1600] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMODStudio.FMODAudioComponent.SetProperty
	void SetProperty(TEnumAsByte<EFMODEventProperty> Property, float Value);                                                 // [0xbc1530] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMODStudio.FMODAudioComponent.SetProgrammerSoundName
	void SetProgrammerSoundName(FString Value);                                                                              // [0xbc1440] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMODStudio.FMODAudioComponent.SetPitch
	void SetPitch(float Pitch);                                                                                              // [0xbc13c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMODStudio.FMODAudioComponent.SetPaused
	void SetPaused(bool paused);                                                                                             // [0xbc1330] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMODStudio.FMODAudioComponent.SetParameter
	void SetParameter(FName Name, float Value);                                                                              // [0xbc1260] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMODStudio.FMODAudioComponent.SetEvent
	void SetEvent(UFMODEvent* NewEvent);                                                                                     // [0xbc11d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMODStudio.FMODAudioComponent.Release
	void Release();                                                                                                          // [0xbc11b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMODStudio.FMODAudioComponent.Play
	void Play();                                                                                                             // [0xbc1190] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMODStudio.FMODAudioComponent.KeyOff
	void KeyOff();                                                                                                           // [0xbc1170] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMODStudio.FMODAudioComponent.IsPlaying
	bool IsPlaying();                                                                                                        // [0xbc1140] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMODStudio.FMODAudioComponent.GetTimelinePosition
	int32_t GetTimelinePosition();                                                                                           // [0xbc1110] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMODStudio.FMODAudioComponent.GetProperty
	float GetProperty(TEnumAsByte<EFMODEventProperty> Property);                                                             // [0xbc1080] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMODStudio.FMODAudioComponent.GetParameterValue
	void GetParameterValue(FName Name, float& UserValue, float& FinalValue);                                                 // [0xbc0f50] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FMODStudio.FMODAudioComponent.GetParameter
	float GetParameter(FName Name);                                                                                          // [0xbc0eb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMODStudio.FMODAudioComponent.GetLength
	int32_t GetLength();                                                                                                     // [0xbc0e80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/FMODStudio.FMODBank
/// Size: 0x0000 (0x000038 - 0x000038)
class UFMODBank : public UFMODAsset : UFMODAsset
{ 
public:
};

/// Class /Script/FMODStudio.FMODBankLookup
/// Size: 0x0038 (0x000028 - 0x000060)
class UFMODBankLookup : public UObject : UObject
{ 
public:
	UDataTable*                                        DataTable;                                                  // 0x0028   (0x0008)  
	FString                                            MasterBankPath;                                             // 0x0030   (0x0010)  
	FString                                            MasterAssetsBankPath;                                       // 0x0040   (0x0010)  
	FString                                            MasterStringsBankPath;                                      // 0x0050   (0x0010)  
};

/// Class /Script/FMODStudio.FMODBlueprintStatics
/// Size: 0x0000 (0x000028 - 0x000028)
class UFMODBlueprintStatics : public UBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/FMODStudio.FMODBus
/// Size: 0x0000 (0x000038 - 0x000038)
class UFMODBus : public UFMODAsset : UFMODAsset
{ 
public:
};

/// Class /Script/FMODStudio.FMODEvent
/// Size: 0x0000 (0x000038 - 0x000038)
class UFMODEvent : public UFMODAsset : UFMODAsset
{ 
public:
};

/// Class /Script/FMODStudio.FMODEventControlSection
/// Size: 0x0108 (0x0000F0 - 0x0001F8)
class UFMODEventControlSection : public UMovieSceneSection : UMovieSceneSection
{ 
public:
	FFMODEventControlChannel                           ControlKeys;                                                // 0x00F0   (0x0108)  
};

/// Class /Script/FMODStudio.FMODEventControlTrack
/// Size: 0x0018 (0x000098 - 0x0000B0)
class UFMODEventControlTrack : public UMovieSceneNameableTrack : UMovieSceneNameableTrack
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0098   (0x0008)  MISSED
	TArray<UMovieSceneSection*>                        ControlSections;                                            // 0x00A0   (0x0010)  
};

/// Class /Script/FMODStudio.FMODEventParameterTrack
/// Size: 0x0018 (0x000098 - 0x0000B0)
class UFMODEventParameterTrack : public UMovieSceneNameableTrack : UMovieSceneNameableTrack
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0098   (0x0008)  MISSED
	TArray<UMovieSceneSection*>                        Sections;                                                   // 0x00A0   (0x0010)  
};

/// Class /Script/FMODStudio.FMODPort
/// Size: 0x0000 (0x000038 - 0x000038)
class UFMODPort : public UFMODAsset : UFMODAsset
{ 
public:
};

/// Class /Script/FMODStudio.FMODSettings
/// Size: 0x0198 (0x000028 - 0x0001C0)
class UFMODSettings : public UObject : UObject
{ 
public:
	bool                                               bLoadAllBanks;                                              // 0x0028   (0x0001)  
	bool                                               bLoadAllSampleData;                                         // 0x0029   (0x0001)  
	bool                                               bEnableLiveUpdate;                                          // 0x002A   (0x0001)  
	bool                                               bEnableEditorLiveUpdate;                                    // 0x002B   (0x0001)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x002C   (0x0004)  MISSED
	FDirectoryPath                                     BankOutputDirectory;                                        // 0x0030   (0x0010)  
	TEnumAsByte<EFMODSpeakerMode>                      OutputFormat;                                               // 0x0040   (0x0001)  
	TEnumAsByte<EFMODOutput>                           OutputType;                                                 // 0x0041   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x0042   (0x0006)  MISSED
	TArray<FFMODProjectLocale>                         Locales;                                                    // 0x0048   (0x0010)  
	float                                              Vol0VirtualLevel;                                           // 0x0058   (0x0004)  
	int32_t                                            SampleRate;                                                 // 0x005C   (0x0004)  
	bool                                               bMatchHardwareSampleRate;                                   // 0x0060   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0061   (0x0003)  MISSED
	int32_t                                            RealChannelCount;                                           // 0x0064   (0x0004)  
	int32_t                                            TotalChannelCount;                                          // 0x0068   (0x0004)  
	int32_t                                            DSPBufferLength;                                            // 0x006C   (0x0004)  
	int32_t                                            DSPBufferCount;                                             // 0x0070   (0x0004)  
	int32_t                                            FileBufferSize;                                             // 0x0074   (0x0004)  
	int32_t                                            StudioUpdatePeriod;                                         // 0x0078   (0x0004)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x007C   (0x0004)  MISSED
	FString                                            InitialOutputDriverName;                                    // 0x0080   (0x0010)  
	bool                                               bLockAllBuses;                                              // 0x0090   (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x0091   (0x0003)  MISSED
	FCustomPoolSizes                                   MemoryPoolSizes;                                            // 0x0094   (0x0014)  
	int32_t                                            LiveUpdatePort;                                             // 0x00A8   (0x0004)  
	int32_t                                            EditorLiveUpdatePort;                                       // 0x00AC   (0x0004)  
	int32_t                                            ReloadBanksDelay;                                           // 0x00B0   (0x0004)  
	bool                                               bEnableAPIErrorLogging;                                     // 0x00B4   (0x0001)  
	bool                                               bEnableMemoryTracking;                                      // 0x00B5   (0x0001)  
	unsigned char                                      UnknownData05_5[0x2];                                       // 0x00B6   (0x0002)  MISSED
	TArray<FString>                                    PluginFiles;                                                // 0x00B8   (0x0010)  
	FString                                            ContentBrowserPrefix;                                       // 0x00C8   (0x0010)  
	FString                                            ForcePlatformName;                                          // 0x00D8   (0x0010)  
	FString                                            MasterBankName;                                             // 0x00E8   (0x0010)  
	FString                                            SkipLoadBankName;                                           // 0x00F8   (0x0010)  
	FString                                            StudioBankKey;                                              // 0x0108   (0x0010)  
	FString                                            WavWriterPath;                                              // 0x0118   (0x0010)  
	TEnumAsByte<EFMODLogging>                          LoggingLevel;                                               // 0x0128   (0x0001)  
	unsigned char                                      UnknownData06_5[0x7];                                       // 0x0129   (0x0007)  MISSED
	FString                                            OcclusionParameter;                                         // 0x0130   (0x0010)  
	FString                                            AmbientVolumeParameter;                                     // 0x0140   (0x0010)  
	FString                                            AmbientLPFParameter;                                        // 0x0150   (0x0010)  
	TMap<TEnumAsByte, FFMODPlatformSettings>           Platforms;                                                  // 0x0160   (0x0050)  
	unsigned char                                      UnknownData07_6[0x10];                                      // 0x01B0   (0x0010)  MISSED
};

/// Class /Script/FMODStudio.FMODSnapshot
/// Size: 0x0000 (0x000038 - 0x000038)
class UFMODSnapshot : public UFMODEvent : UFMODEvent
{ 
public:
};

/// Class /Script/FMODStudio.FMODSnapshotReverb
/// Size: 0x0010 (0x000060 - 0x000070)
class UFMODSnapshotReverb : public UReverbEffect : UReverbEffect
{ 
public:
	FGuid                                              AssetGuid;                                                  // 0x0060   (0x0010)  
};

/// Class /Script/FMODStudio.FMODVCA
/// Size: 0x0000 (0x000038 - 0x000038)
class UFMODVCA : public UFMODAsset : UFMODAsset
{ 
public:
};

/// Enum /Script/FMODStudio.EFMODEventProperty
/// Size: 0x07
enum EFMODEventProperty : uint8_t
{
	EFMODEventProperty__ChannelPriority0                                             = 0,
	EFMODEventProperty__ScheduleDelay1                                               = 1,
	EFMODEventProperty__ScheduleLookahead2                                           = 2,
	EFMODEventProperty__MinimumDistance3                                             = 3,
	EFMODEventProperty__MaximumDistance4                                             = 4,
	EFMODEventProperty__Count5                                                       = 5,
	EFMODEventProperty__EFMODEventProperty_MAX6                                      = 6
};

/// Enum /Script/FMODStudio.EFMOD_STUDIO_STOP_MODE
/// Size: 0x03
enum EFMOD_STUDIO_STOP_MODE : uint8_t
{
	ALLOWFADEOUT0                                                                    = 0,
	Immediate1                                                                       = 1,
	EFMOD_STUDIO_STOP_MODE_MAX2                                                      = 2
};

/// Enum /Script/FMODStudio.EFMODEventControlKey
/// Size: 0x03
enum EFMODEventControlKey : uint8_t
{
	EFMODEventControlKey__Stop0                                                      = 0,
	EFMODEventControlKey__Play1                                                      = 1,
	EFMODEventControlKey__EFMODEventControlKey_MAX2                                  = 2
};

/// Enum /Script/FMODStudio.EFMODLogging
/// Size: 0x05
enum EFMODLogging : uint8_t
{
	LEVEL_NONE0                                                                      = 0,
	LEVEL_ERROR1                                                                     = 1,
	LEVEL_WARNING2                                                                   = 2,
	LEVEL_LOG3                                                                       = 4,
	LEVEL_MAX4                                                                       = 5
};

/// Enum /Script/FMODStudio.EFMODSpeakerMode
/// Size: 0x05
enum EFMODSpeakerMode : uint8_t
{
	EFMODSpeakerMode__Stereo0                                                        = 0,
	EFMODSpeakerMode__Surround_51                                                    = 1,
	EFMODSpeakerMode__Surround_72                                                    = 2,
	EFMODSpeakerMode__Surround_7_13                                                  = 3,
	EFMODSpeakerMode__EFMODSpeakerMode_MAX4                                          = 4
};

/// Enum /Script/FMODStudio.EFMODOutput
/// Size: 0x15
enum EFMODOutput : uint8_t
{
	EFMODOutput__TYPE_AUTODETECT0                                                    = 0,
	EFMODOutput__TYPE_NOSOUND1                                                       = 1,
	EFMODOutput__TYPE_WASAPI2                                                        = 2,
	EFMODOutput__TYPE_ASIO3                                                          = 3,
	EFMODOutput__TYPE_PULSEAUDIO4                                                    = 4,
	EFMODOutput__TYPE_ALSA5                                                          = 5,
	EFMODOutput__TYPE_COREAUDIO6                                                     = 6,
	EFMODOutput__TYPE_AUDIOTRACK7                                                    = 7,
	EFMODOutput__TYPE_OPENSL8                                                        = 8,
	EFMODOutput__TYPE_AUDIOOUT9                                                      = 9,
	EFMODOutput__TYPE_AUDIO3D10                                                      = 10,
	EFMODOutput__TYPE_NNAUDIO11                                                      = 11,
	EFMODOutput__TYPE_WINSONIC12                                                     = 12,
	EFMODOutput__TYPE_AAUDIO13                                                       = 13,
	EFMODOutput__TYPE_MAX14                                                          = 14
};

/// Enum /Script/FMODStudio.EFMODPlatforms
/// Size: 0x13
enum EFMODPlatforms : uint8_t
{
	EFMODPlatforms__Windows0                                                         = 0,
	EFMODPlatforms__Linux1                                                           = 1,
	EFMODPlatforms__Mac2                                                             = 2,
	EFMODPlatforms__Android3                                                         = 3,
	EFMODPlatforms__IOS4                                                             = 4,
	EFMODPlatforms__PS45                                                             = 5,
	EFMODPlatforms__PS56                                                             = 6,
	EFMODPlatforms__Deprecated7                                                      = 7,
	EFMODPlatforms__Switch8                                                          = 8,
	EFMODPlatforms__XboxOne9                                                         = 9,
	EFMODPlatforms__XSX10                                                            = 10,
	EFMODPlatforms__Editor11                                                         = 11,
	EFMODPlatforms__EFMODPlatforms_MAX12                                             = 12
};

/// Enum /Script/FMODStudio.EFMODCodec
/// Size: 0x06
enum EFMODCodec : uint8_t
{
	EFMODCodec__VORBIS0                                                              = 0,
	EFMODCodec__FADPCM1                                                              = 1,
	EFMODCodec__OPUS2                                                                = 2,
	EFMODCodec__XMA3                                                                 = 3,
	EFMODCodec__AT94                                                                 = 4,
	EFMODCodec__EFMODCodec_MAX5                                                      = 5
};

