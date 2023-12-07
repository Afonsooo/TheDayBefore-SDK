
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package MovieRenderPipelineCore.

/// Struct /Script/MovieRenderPipelineCore.MoviePipelineOutputData
/// Size: 0x0028 (0x000000 - 0x000028)
struct FMoviePipelineOutputData
{ 
	UMoviePipeline*                                    Pipeline;                                                   // 0x0000   (0x0008)  
	UMoviePipelineExecutorJob*                         Job;                                                        // 0x0008   (0x0008)  
	bool                                               bSuccess;                                                   // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0011   (0x0007)  MISSED
	TArray<FMoviePipelineShotOutputData>               ShotData;                                                   // 0x0018   (0x0010)  
};

/// Struct /Script/MovieRenderPipelineCore.MoviePipelineShotOutputData
/// Size: 0x0058 (0x000000 - 0x000058)
struct FMoviePipelineShotOutputData
{ 
	TWeakObjectPtr<UMoviePipelineExecutorShot*>        Shot;                                                       // 0x0000   (0x0008)  
	TMap<FMoviePipelinePassIdentifier, FMoviePipelineRenderPassOutputData> RenderPassData;                         // 0x0008   (0x0050)  
};

/// Struct /Script/MovieRenderPipelineCore.MoviePipelinePassIdentifier
/// Size: 0x0020 (0x000000 - 0x000020)
struct FMoviePipelinePassIdentifier
{ 
	FString                                            Name;                                                       // 0x0000   (0x0010)  
	FString                                            CameraName;                                                 // 0x0010   (0x0010)  
};

/// Struct /Script/MovieRenderPipelineCore.MoviePipelineRenderPassOutputData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FMoviePipelineRenderPassOutputData
{ 
	TArray<FString>                                    FilePaths;                                                  // 0x0000   (0x0010)  
};

/// Struct /Script/MovieRenderPipelineCore.MoviePipelineSidecarCamera
/// Size: 0x0028 (0x000000 - 0x000028)
struct FMoviePipelineSidecarCamera
{ 
	FGuid                                              BindingId;                                                  // 0x0000   (0x0010)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0010   (0x0008)  MISSED
	FString                                            Name;                                                       // 0x0018   (0x0010)  
};

/// Struct /Script/MovieRenderPipelineCore.MoviePipelineSegmentWorkMetrics
/// Size: 0x0028 (0x000000 - 0x000028)
struct FMoviePipelineSegmentWorkMetrics
{ 
	FString                                            SegmentName;                                                // 0x0000   (0x0010)  
	int32_t                                            OutputFrameIndex;                                           // 0x0010   (0x0004)  
	int32_t                                            TotalOutputFrameCount;                                      // 0x0014   (0x0004)  
	int32_t                                            OutputSubSampleIndex;                                       // 0x0018   (0x0004)  
	int32_t                                            TotalSubSampleCount;                                        // 0x001C   (0x0004)  
	int32_t                                            EngineWarmUpFrameIndex;                                     // 0x0020   (0x0004)  
	int32_t                                            TotalEngineWarmUpFrameCount;                                // 0x0024   (0x0004)  
};

/// Struct /Script/MovieRenderPipelineCore.MoviePipelineCameraCutInfo
/// Size: 0x00A8 (0x000000 - 0x0000A8)
struct FMoviePipelineCameraCutInfo
{ 
	unsigned char                                      UnknownData00_1[0xA8];                                      // 0x0000   (0x00A8)  MISSED
};

/// Struct /Script/MovieRenderPipelineCore.MoviePipelineFormatArgs
/// Size: 0x00A8 (0x000000 - 0x0000A8)
struct FMoviePipelineFormatArgs
{ 
	TMap<FString, FString>                             FilenameArguments;                                          // 0x0000   (0x0050)  
	TMap<FString, FString>                             FileMetadata;                                               // 0x0050   (0x0050)  
	UMoviePipelineExecutorJob*                         InJob;                                                      // 0x00A0   (0x0008)  
};

/// Struct /Script/MovieRenderPipelineCore.MoviePipelineFilenameResolveParams
/// Size: 0x0118 (0x000000 - 0x000118)
struct FMoviePipelineFilenameResolveParams
{ 
	int32_t                                            FrameNumber;                                                // 0x0000   (0x0004)  
	int32_t                                            FrameNumberShot;                                            // 0x0004   (0x0004)  
	int32_t                                            FrameNumberRel;                                             // 0x0008   (0x0004)  
	int32_t                                            FrameNumberShotRel;                                         // 0x000C   (0x0004)  
	FString                                            CameraNameOverride;                                         // 0x0010   (0x0010)  
	FString                                            ShotNameOverride;                                           // 0x0020   (0x0010)  
	int32_t                                            ZeroPadFrameNumberCount;                                    // 0x0030   (0x0004)  
	bool                                               bForceRelativeFrameNumbers;                                 // 0x0034   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0035   (0x0003)  MISSED
	FString                                            FileNameOverride;                                           // 0x0038   (0x0010)  
	TMap<FString, FString>                             FileNameFormatOverrides;                                    // 0x0048   (0x0050)  
	TMap<FString, FString>                             FileMetadata;                                               // 0x0098   (0x0050)  
	FDateTime                                          InitializationTime;                                         // 0x00E8   (0x0008)  
	int32_t                                            InitializationVersion;                                      // 0x00F0   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x00F4   (0x0004)  MISSED
	UMoviePipelineExecutorJob*                         Job;                                                        // 0x00F8   (0x0008)  
	unsigned char                                      UnknownData02_5[0x8];                                       // 0x0100   (0x0008)  MISSED
	UMoviePipelineExecutorShot*                        ShotOverride;                                               // 0x0108   (0x0008)  
	int32_t                                            AdditionalFrameNumberOffset;                                // 0x0110   (0x0004)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x0114   (0x0004)  MISSED
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineSetting
/// Size: 0x0020 (0x000028 - 0x000048)
class UMoviePipelineSetting : public UObject : UObject
{ 
public:
	TWeakObjectPtr<UMoviePipeline*>                    CachedPipeline;                                             // 0x0028   (0x0008)  
	bool                                               bEnabled;                                                   // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x17];                                      // 0x0031   (0x0017)  MISSED


	/// Functions
	// Function /Script/MovieRenderPipelineCore.MoviePipelineSetting.SetIsEnabled
	void SetIsEnabled(bool bInEnabled);                                                                                      // [0x1526d90] Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineSetting.IsEnabled
	bool IsEnabled();                                                                                                        // [0x1525300] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineSetting.BuildNewProcessCommandLineArgs
	void BuildNewProcessCommandLineArgs(TArray<FString>& InOutUnrealURLParams, TArray<FString>& InOutCommandLineArgs, TArray<FString>& InOutDeviceProfileCvars, TArray<FString>& InOutExecCmds); // [0x1521520] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineSetting.BuildNewProcessCommandLine
	void BuildNewProcessCommandLine(FString& InOutUnrealURLParams, FString& InOutCommandLineArgs);                           // [0x1521400] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineCameraSetting
/// Size: 0x0010 (0x000048 - 0x000058)
class UMoviePipelineCameraSetting : public UMoviePipelineSetting : UMoviePipelineSetting
{ 
public:
	EMoviePipelineShutterTiming                        ShutterTiming;                                              // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0049   (0x0003)  MISSED
	float                                              OverscanPercentage;                                         // 0x004C   (0x0004)  
	bool                                               bRenderAllCameras;                                          // 0x0050   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0051   (0x0007)  MISSED
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineGameMode
/// Size: 0x0000 (0x000330 - 0x000330)
class AMoviePipelineGameMode : public AGameModeBase : AGameModeBase
{ 
public:
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineHighResSetting
/// Size: 0x0020 (0x000048 - 0x000068)
class UMoviePipelineHighResSetting : public UMoviePipelineSetting : UMoviePipelineSetting
{ 
public:
	int32_t                                            TileCount;                                                  // 0x0048   (0x0004)  
	float                                              TextureSharpnessBias;                                       // 0x004C   (0x0004)  
	float                                              OverlapRatio;                                               // 0x0050   (0x0004)  
	bool                                               bOverrideSubSurfaceScattering;                              // 0x0054   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0055   (0x0003)  MISSED
	int32_t                                            BurleySampleCount;                                          // 0x0058   (0x0004)  
	bool                                               bAllocateHistoryPerTile;                                    // 0x005C   (0x0001)  
	unsigned char                                      UnknownData01_6[0xB];                                       // 0x005D   (0x000B)  MISSED
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineInProcessExecutorSettings
/// Size: 0x0030 (0x000038 - 0x000068)
class UMoviePipelineInProcessExecutorSettings : public UDeveloperSettings : UDeveloperSettings
{ 
public:
	bool                                               bCloseEditor;                                               // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0039   (0x0007)  MISSED
	FString                                            AdditionalCommandLineArguments;                             // 0x0040   (0x0010)  
	FString                                            InheritedCommandLineArguments;                              // 0x0050   (0x0010)  
	int32_t                                            InitialDelayFrameCount;                                     // 0x0060   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0064   (0x0004)  MISSED
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineOutputBase
/// Size: 0x0000 (0x000048 - 0x000048)
class UMoviePipelineOutputBase : public UMoviePipelineSetting : UMoviePipelineSetting
{ 
public:
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineSetting_BlueprintBase
/// Size: 0x0020 (0x000048 - 0x000068)
class UMoviePipelineSetting_BlueprintBase : public UMoviePipelineSetting : UMoviePipelineSetting
{ 
public:
	FText                                              CategoryText;                                               // 0x0048   (0x0018)  
	bool                                               bIsValidOnPrimary;                                          // 0x0060   (0x0001)  
	bool                                               bIsValidOnShots;                                            // 0x0061   (0x0001)  
	bool                                               bCanBeDisabled;                                             // 0x0062   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x0063   (0x0005)  MISSED


	/// Functions
	// Function /Script/MovieRenderPipelineCore.MoviePipelineSetting_BlueprintBase.ReceiveTeardownForPipelineImpl
	void ReceiveTeardownForPipelineImpl(UMoviePipeline* InPipeline);                                                         // [0x2407bf0] Event|Public|BlueprintEvent 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineSetting_BlueprintBase.ReceiveSetupForPipelineImpl
	void ReceiveSetupForPipelineImpl(UMoviePipeline* InPipeline);                                                            // [0x2407bf0] Event|Public|BlueprintEvent 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineSetting_BlueprintBase.ReceiveGetFormatArguments
	FMoviePipelineFormatArgs ReceiveGetFormatArguments(FMoviePipelineFormatArgs& InOutFormatArgs);                           // [0x1525780] Native|Event|Public|HasOutParms|BlueprintEvent|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineSetting_BlueprintBase.OnEngineTickBeginFrame
	void OnEngineTickBeginFrame();                                                                                           // [0x2407bf0] Event|Public|BlueprintEvent 
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineViewFamilySetting
/// Size: 0x0000 (0x000048 - 0x000048)
class UMoviePipelineViewFamilySetting : public UMoviePipelineSetting : UMoviePipelineSetting
{ 
public:
};

/// Class /Script/MovieRenderPipelineCore.MovieRenderDebugWidget
/// Size: 0x0000 (0x000280 - 0x000280)
class UMovieRenderDebugWidget : public UUserWidget : UUserWidget
{ 
public:
};

/// Class /Script/MovieRenderPipelineCore.MoviePipeline
/// Size: 0x03E8 (0x000028 - 0x000410)
class UMoviePipeline : public UObject : UObject
{ 
public:
	FMulticastInlineDelegate                           OnMoviePipelineFinishedDelegate;                            // 0x0028   (0x0010)  
	FMulticastInlineDelegate                           OnMoviePipelineWorkFinishedDelegate;                        // 0x0038   (0x0010)  
	FMulticastInlineDelegate                           OnMoviePipelineShotWorkFinishedDelegate;                    // 0x0048   (0x0010)  
	UMoviePipelineCustomTimeStep*                      CustomTimeStep;                                             // 0x0058   (0x0008)  
	unsigned char                                      UnknownData00_5[0x10];                                      // 0x0060   (0x0010)  MISSED
	UEngineCustomTimeStep*                             CachedPrevCustomTimeStep;                                   // 0x0070   (0x0008)  
	ULevelSequence*                                    TargetSequence;                                             // 0x0078   (0x0008)  
	ALevelSequenceActor*                               LevelSequenceActor;                                         // 0x0080   (0x0008)  
	UMovieRenderDebugWidget*                           DebugWidget;                                                // 0x0088   (0x0008)  
	UTexture*                                          PreviewTexture;                                             // 0x0090   (0x0008)  
	unsigned char                                      UnknownData01_5[0x288];                                     // 0x0098   (0x0288)  MISSED
	UClass*                                            DebugWidgetClass;                                           // 0x0320   (0x0008)  
	UMoviePipelineExecutorJob*                         CurrentJob;                                                 // 0x0328   (0x0008)  
	unsigned char                                      UnknownData02_6[0xE0];                                      // 0x0330   (0x00E0)  MISSED


	/// Functions
	// Function /Script/MovieRenderPipelineCore.MoviePipeline.Shutdown
	void Shutdown(bool bError);                                                                                              // [0x1527940] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipeline.SetInitializationTime
	void SetInitializationTime(FDateTime& InDateTime);                                                                       // [0x1526c60] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipeline.RequestShutdown
	void RequestShutdown(bool bIsError);                                                                                     // [0x1525e80] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipeline.OnMoviePipelineFinishedImpl
	void OnMoviePipelineFinishedImpl();                                                                                      // [0x15256d0] Native|Protected|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipeline.IsShutdownRequested
	bool IsShutdownRequested();                                                                                              // [0x15253f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipeline.Initialize
	void Initialize(UMoviePipelineExecutorJob* InJob);                                                                       // [0x15251f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipeline.GetPreviewTexture
	UTexture* GetPreviewTexture();                                                                                           // [0xd0b540] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipeline.GetPipelinePrimaryConfig
	UMoviePipelinePrimaryConfig* GetPipelinePrimaryConfig();                                                                 // [0x1524cf0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipeline.GetPipelineMasterConfig
	UMoviePipelinePrimaryConfig* GetPipelineMasterConfig();                                                                  // [0x1524cf0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipeline.GetInitializationTime
	FDateTime GetInitializationTime();                                                                                       // [0x1524240] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipeline.GetCurrentJob
	UMoviePipelineExecutorJob* GetCurrentJob();                                                                              // [0x15233c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineCustomTimeStep
/// Size: 0x0010 (0x000028 - 0x000038)
class UMoviePipelineCustomTimeStep : public UEngineCustomTimeStep : UEngineCustomTimeStep
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineAntiAliasingSetting
/// Size: 0x0020 (0x000048 - 0x000068)
class UMoviePipelineAntiAliasingSetting : public UMoviePipelineSetting : UMoviePipelineSetting
{ 
public:
	int32_t                                            SpatialSampleCount;                                         // 0x0048   (0x0004)  
	int32_t                                            TemporalSampleCount;                                        // 0x004C   (0x0004)  
	bool                                               bOverrideAntiAliasing;                                      // 0x0050   (0x0001)  
	TEnumAsByte<EAntiAliasingMethod>                   AntiAliasingMethod;                                         // 0x0051   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0052   (0x0002)  MISSED
	int32_t                                            RenderWarmUpCount;                                          // 0x0054   (0x0004)  
	bool                                               bUseCameraCutForWarmUp;                                     // 0x0058   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0059   (0x0003)  MISSED
	int32_t                                            EngineWarmUpCount;                                          // 0x005C   (0x0004)  
	bool                                               bRenderWarmUpFrames;                                        // 0x0060   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0061   (0x0007)  MISSED
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UMoviePipelineBlueprintLibrary : public UBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineColorSetting
/// Size: 0x00A8 (0x000048 - 0x0000F0)
class UMoviePipelineColorSetting : public UMoviePipelineSetting : UMoviePipelineSetting
{ 
public:
	FOpenColorIODisplayConfiguration                   OCIOConfiguration;                                          // 0x0048   (0x00A0)  
	bool                                               bDisableToneCurve;                                          // 0x00E8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00E9   (0x0007)  MISSED
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineCommandLineEncoder
/// Size: 0x0040 (0x000048 - 0x000088)
class UMoviePipelineCommandLineEncoder : public UMoviePipelineSetting : UMoviePipelineSetting
{ 
public:
	FString                                            FileNameFormatOverride;                                     // 0x0048   (0x0010)  
	EMoviePipelineEncodeQuality                        Quality;                                                    // 0x0058   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0059   (0x0007)  MISSED
	FString                                            AdditionalCommandLineArgs;                                  // 0x0060   (0x0010)  
	bool                                               bDeleteSourceFiles;                                         // 0x0070   (0x0001)  
	bool                                               bSkipEncodeOnRenderCanceled;                                // 0x0071   (0x0001)  
	bool                                               bWriteEachFrameDuration;                                    // 0x0072   (0x0001)  
	unsigned char                                      UnknownData01_6[0x15];                                      // 0x0073   (0x0015)  MISSED
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineCommandLineEncoderSettings
/// Size: 0x00C8 (0x000038 - 0x000100)
class UMoviePipelineCommandLineEncoderSettings : public UDeveloperSettings : UDeveloperSettings
{ 
public:
	FString                                            ExecutablePath;                                             // 0x0038   (0x0010)  
	FText                                              CodecHelpText;                                              // 0x0048   (0x0018)  
	FString                                            VideoCodec;                                                 // 0x0060   (0x0010)  
	FString                                            AudioCodec;                                                 // 0x0070   (0x0010)  
	FString                                            OutputFileExtension;                                        // 0x0080   (0x0010)  
	FString                                            CommandLineFormat;                                          // 0x0090   (0x0010)  
	FString                                            VideoInputStringFormat;                                     // 0x00A0   (0x0010)  
	FString                                            AudioInputStringFormat;                                     // 0x00B0   (0x0010)  
	FString                                            EncodeSettings_Low;                                         // 0x00C0   (0x0010)  
	FString                                            EncodeSettings_Med;                                         // 0x00D0   (0x0010)  
	FString                                            EncodeSettings_High;                                        // 0x00E0   (0x0010)  
	FString                                            EncodeSettings_Epic;                                        // 0x00F0   (0x0010)  
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineConfigBase
/// Size: 0x0058 (0x000028 - 0x000080)
class UMoviePipelineConfigBase : public UObject : UObject
{ 
public:
	FString                                            DisplayName;                                                // 0x0028   (0x0010)  
	TArray<UMoviePipelineSetting*>                     Settings;                                                   // 0x0038   (0x0010)  
	TWeakObjectPtr<UMoviePipelineConfigBase*>          ConfigOrigin;                                               // 0x0048   (0x0030)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0078   (0x0008)  MISSED


	/// Functions
	// Function /Script/MovieRenderPipelineCore.MoviePipelineConfigBase.SetConfigOrigin
	void SetConfigOrigin(UMoviePipelineConfigBase* InConfig);                                                                // [0x1526940] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineConfigBase.RemoveSetting
	void RemoveSetting(UMoviePipelineSetting* InSetting);                                                                    // [0x1525a20] Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineConfigBase.GetUserSettings
	TArray<UMoviePipelineSetting*> GetUserSettings();                                                                        // [0x1525030] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineConfigBase.GetConfigOrigin
	UMoviePipelineConfigBase* GetConfigOrigin();                                                                             // [0x1522f40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineConfigBase.FindSettingsByClass
	TArray<UMoviePipelineSetting*> FindSettingsByClass(UClass* InClass, bool bIncludeDisabledSettings, bool bExactMatch);    // [0x1522900] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineConfigBase.FindSettingByClass
	UMoviePipelineSetting* FindSettingByClass(UClass* InClass, bool bIncludeDisabledSettings, bool bExactMatch);             // [0x1522640] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineConfigBase.FindOrAddSettingByClass
	UMoviePipelineSetting* FindOrAddSettingByClass(UClass* InClass, bool bIncludeDisabledSettings, bool bExactMatch);        // [0x1522100] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineConfigBase.CopyFrom
	void CopyFrom(UMoviePipelineConfigBase* InConfig);                                                                       // [0xba5140] Native|Public|BlueprintCallable 
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineDebugSettings
/// Size: 0x0010 (0x000048 - 0x000058)
class UMoviePipelineDebugSettings : public UMoviePipelineSetting : UMoviePipelineSetting
{ 
public:
	bool                                               bWriteAllSamples;                                           // 0x0048   (0x0001)  
	bool                                               bCaptureFramesWithRenderDoc;                                // 0x0049   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x004A   (0x0002)  MISSED
	int32_t                                            CaptureFrame;                                               // 0x004C   (0x0004)  
	bool                                               bCaptureUnrealInsightsTrace;                                // 0x0050   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0051   (0x0007)  MISSED
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase
/// Size: 0x00F0 (0x000028 - 0x000118)
class UMoviePipelineExecutorBase : public UObject : UObject
{ 
public:
	FMulticastInlineDelegate                           OnExecutorFinishedDelegate;                                 // 0x0028   (0x0010)  
	unsigned char                                      UnknownData00_5[0x18];                                      // 0x0038   (0x0018)  MISSED
	FMulticastInlineDelegate                           OnExecutorErroredDelegate;                                  // 0x0050   (0x0010)  
	unsigned char                                      UnknownData01_5[0x20];                                      // 0x0060   (0x0020)  MISSED
	FMulticastInlineDelegate                           SocketMessageRecievedDelegate;                              // 0x0080   (0x0010)  
	FMulticastInlineDelegate                           HTTPResponseRecievedDelegate;                               // 0x0090   (0x0010)  
	UClass*                                            DebugWidgetClass;                                           // 0x00A0   (0x0008)  
	unsigned char                                      UnknownData02_5[0x10];                                      // 0x00A8   (0x0010)  MISSED
	FString                                            UserData;                                                   // 0x00B8   (0x0010)  
	UClass*                                            TargetPipelineClass;                                        // 0x00C8   (0x0008)  
	unsigned char                                      UnknownData03_6[0x48];                                      // 0x00D0   (0x0048)  MISSED


	/// Functions
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase.SetStatusProgress
	void SetStatusProgress(float InProgress);                                                                                // [0x1527800] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase.SetStatusMessage
	void SetStatusMessage(FString InStatus);                                                                                 // [0x15276c0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase.SetMoviePipelineClass
	void SetMoviePipelineClass(UClass* InPipelineClass);                                                                     // [0x1526fe0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase.SendSocketMessage
	bool SendSocketMessage(FString InMessage);                                                                               // [0x15267b0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase.SendHTTPRequest
	int32_t SendHTTPRequest(FString InURL, FString InVerb, FString InMessage, TMap<FString, FString>& InHeaders);            // [0x15265a0] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase.OnExecutorFinishedImpl
	void OnExecutorFinishedImpl();                                                                                           // [0x15256d0] Native|Protected|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase.OnExecutorErroredImpl
	void OnExecutorErroredImpl(UMoviePipeline* ErroredPipeline, bool bFatal, FText ErrorReason);                             // [0x1525550] Native|Protected|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase.OnBeginFrame
	void OnBeginFrame();                                                                                                     // [0x1525510] Native|Event|Public|BlueprintEvent 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase.IsSocketConnected
	bool IsSocketConnected();                                                                                                // [0x1525420] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase.IsRendering
	bool IsRendering();                                                                                                      // [0x1525330] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase.GetStatusProgress
	float GetStatusProgress();                                                                                               // [0xbafde0] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase.GetStatusMessage
	FString GetStatusMessage();                                                                                              // [0x1524f30] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase.Execute
	void Execute(UMoviePipelineQueue* InPipelineQueue);                                                                      // [0x1521fe0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase.DisconnectSocket
	void DisconnectSocket();                                                                                                 // [0x1521b00] Final|Native|Protected|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase.ConnectSocket
	bool ConnectSocket(FString InHostName, int32_t InPort);                                                                  // [0x15217f0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase.CancelCurrentJob
	void CancelCurrentJob();                                                                                                 // [0x15217d0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase.CancelAllJobs
	void CancelAllJobs();                                                                                                    // [0x15217b0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineFCPXMLExporter
/// Size: 0x0038 (0x000048 - 0x000080)
class UMoviePipelineFCPXMLExporter : public UMoviePipelineOutputBase : UMoviePipelineOutputBase
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0048   (0x0008)  MISSED
	FString                                            FileNameFormatOverride;                                     // 0x0050   (0x0010)  
	FCPXMLExportDataSource                             DataSource;                                                 // 0x0060   (0x0001)  
	unsigned char                                      UnknownData01_6[0x1F];                                      // 0x0061   (0x001F)  MISSED
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineGameOverrideSetting
/// Size: 0x00E8 (0x000048 - 0x000130)
class UMoviePipelineGameOverrideSetting : public UMoviePipelineSetting : UMoviePipelineSetting
{ 
public:
	UClass*                                            GameModeOverride;                                           // 0x0048   (0x0008)  
	bool                                               bCinematicQualitySettings;                                  // 0x0050   (0x0001)  
	EMoviePipelineTextureStreamingMethod               TextureStreaming;                                           // 0x0051   (0x0001)  
	bool                                               bUseLODZero;                                                // 0x0052   (0x0001)  
	bool                                               bDisableHLODs;                                              // 0x0053   (0x0001)  
	bool                                               bUseHighQualityShadows;                                     // 0x0054   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0055   (0x0003)  MISSED
	int32_t                                            ShadowDistanceScale;                                        // 0x0058   (0x0004)  
	float                                              ShadowRadiusThreshold;                                      // 0x005C   (0x0004)  
	bool                                               bOverrideViewDistanceScale;                                 // 0x0060   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0061   (0x0003)  MISSED
	int32_t                                            ViewDistanceScale;                                          // 0x0064   (0x0004)  
	bool                                               bFlushGrassStreaming;                                       // 0x0068   (0x0001)  
	bool                                               bFlushStreamingManagers;                                    // 0x0069   (0x0001)  
	bool                                               bOverrideVirtualTextureFeedbackFactor;                      // 0x006A   (0x0001)  
	unsigned char                                      UnknownData02_5[0x1];                                       // 0x006B   (0x0001)  MISSED
	int32_t                                            VirtualTextureFeedbackFactor;                               // 0x006C   (0x0004)  
	unsigned char                                      UnknownData03_6[0xC0];                                      // 0x0070   (0x00C0)  MISSED
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineLinearExecutorBase
/// Size: 0x0028 (0x000118 - 0x000140)
class UMoviePipelineLinearExecutorBase : public UMoviePipelineExecutorBase : UMoviePipelineExecutorBase
{ 
public:
	UMoviePipelineQueue*                               Queue;                                                      // 0x0118   (0x0008)  
	UMoviePipeline*                                    ActiveMoviePipeline;                                        // 0x0120   (0x0008)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0128   (0x0018)  MISSED
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineInProcessExecutor
/// Size: 0x0050 (0x000140 - 0x000190)
class UMoviePipelineInProcessExecutor : public UMoviePipelineLinearExecutorBase : UMoviePipelineLinearExecutorBase
{ 
public:
	bool                                               bUseCurrentLevel;                                           // 0x0140   (0x0001)  
	unsigned char                                      UnknownData00_6[0x4F];                                      // 0x0141   (0x004F)  MISSED
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineOutputSetting
/// Size: 0x0068 (0x000048 - 0x0000B0)
class UMoviePipelineOutputSetting : public UMoviePipelineSetting : UMoviePipelineSetting
{ 
public:
	FDirectoryPath                                     OutputDirectory;                                            // 0x0048   (0x0010)  
	FString                                            FileNameFormat;                                             // 0x0058   (0x0010)  
	FIntPoint                                          OutputResolution;                                           // 0x0068   (0x0008)  
	bool                                               bUseCustomFrameRate;                                        // 0x0070   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0071   (0x0003)  MISSED
	FFrameRate                                         OutputFrameRate;                                            // 0x0074   (0x0008)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x007C   (0x0004)  MISSED
	bool                                               bOverrideExistingOutput;                                    // 0x0080   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0081   (0x0003)  MISSED
	int32_t                                            HandleFrameCount;                                           // 0x0084   (0x0004)  
	int32_t                                            OutputFrameStep;                                            // 0x0088   (0x0004)  
	bool                                               bUseCustomPlaybackRange;                                    // 0x008C   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x008D   (0x0003)  MISSED
	int32_t                                            CustomStartFrame;                                           // 0x0090   (0x0004)  
	int32_t                                            CustomEndFrame;                                             // 0x0094   (0x0004)  
	int32_t                                            VersionNumber;                                              // 0x0098   (0x0004)  
	bool                                               bAutoVersion;                                               // 0x009C   (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x009D   (0x0003)  MISSED
	int32_t                                            ZeroPadFrameNumbers;                                        // 0x00A0   (0x0004)  
	int32_t                                            FrameNumberOffset;                                          // 0x00A4   (0x0004)  
	bool                                               bFlushDiskWritesPerShot;                                    // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData05_6[0x7];                                       // 0x00A9   (0x0007)  MISSED
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelinePrimaryConfig
/// Size: 0x0068 (0x000080 - 0x0000E8)
class UMoviePipelinePrimaryConfig : public UMoviePipelineConfigBase : UMoviePipelineConfigBase
{ 
public:
	TMap<FString, UMoviePipelineShotConfig*>           PerShotConfigMapping;                                       // 0x0080   (0x0050)  
	UMoviePipelineOutputSetting*                       OutputSetting;                                              // 0x00D0   (0x0008)  
	TArray<UMoviePipelineSetting*>                     TransientSettings;                                          // 0x00D8   (0x0010)  


	/// Functions
	// Function /Script/MovieRenderPipelineCore.MoviePipelinePrimaryConfig.InitializeTransientSettings
	void InitializeTransientSettings();                                                                                      // [0x1525280] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelinePrimaryConfig.GetTransientSettings
	TArray<UMoviePipelineSetting*> GetTransientSettings();                                                                   // [0x1525130] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelinePrimaryConfig.GetEffectiveFrameRate
	FFrameRate GetEffectiveFrameRate(ULevelSequence* InSequence);                                                            // [0x1523b20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelinePrimaryConfig.GetAllSettings
	TArray<UMoviePipelineSetting*> GetAllSettings(bool bIncludeDisabledSettings, bool bIncludeTransientSettings);            // [0x1522bb0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelinePythonHostExecutor
/// Size: 0x0018 (0x000118 - 0x000130)
class UMoviePipelinePythonHostExecutor : public UMoviePipelineExecutorBase : UMoviePipelineExecutorBase
{ 
public:
	UClass*                                            ExecutorClass;                                              // 0x0118   (0x0008)  
	UMoviePipelineQueue*                               PipelineQueue;                                              // 0x0120   (0x0008)  
	UWorld*                                            LastLoadedWorld;                                            // 0x0128   (0x0008)  


	/// Functions
	// Function /Script/MovieRenderPipelineCore.MoviePipelinePythonHostExecutor.OnMapLoad
	void OnMapLoad(UWorld* InWorld);                                                                                         // [0x15256f0] Native|Event|Public|BlueprintEvent 
	// Function /Script/MovieRenderPipelineCore.MoviePipelinePythonHostExecutor.GetLastLoadedWorld
	UWorld* GetLastLoadedWorld();                                                                                            // [0x1524650] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelinePythonHostExecutor.ExecuteDelayed
	void ExecuteDelayed(UMoviePipelineQueue* InPipelineQueue);                                                               // [0x1522070] Native|Event|Public|BlueprintEvent 
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineExecutorShot
/// Size: 0x0130 (0x000028 - 0x000158)
class UMoviePipelineExecutorShot : public UObject : UObject
{ 
public:
	bool                                               bEnabled;                                                   // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0029   (0x0007)  MISSED
	FString                                            OuterName;                                                  // 0x0030   (0x0010)  
	FString                                            InnerName;                                                  // 0x0040   (0x0010)  
	TArray<FMoviePipelineSidecarCamera>                SidecarCameras;                                             // 0x0050   (0x0010)  
	unsigned char                                      UnknownData01_5[0xA8];                                      // 0x0060   (0x00A8)  MISSED
	float                                              Progress;                                                   // 0x0108   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x010C   (0x0004)  MISSED
	FString                                            StatusMessage;                                              // 0x0110   (0x0010)  
	UMoviePipelineShotConfig*                          ShotOverrideConfig;                                         // 0x0120   (0x0008)  
	TWeakObjectPtr<UMoviePipelineShotConfig*>          ShotOverridePresetOrigin;                                   // 0x0128   (0x0030)  


	/// Functions
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorShot.ShouldRender
	bool ShouldRender();                                                                                                     // [0x1527920] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorShot.SetStatusProgress
	void SetStatusProgress(float InProgress);                                                                                // [0x1527890] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorShot.SetStatusMessage
	void SetStatusMessage(FString InStatus);                                                                                 // [0x1527760] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorShot.SetShotOverridePresetOrigin
	void SetShotOverridePresetOrigin(UMoviePipelineShotConfig* InPreset);                                                    // [0x15274e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorShot.SetShotOverrideConfiguration
	void SetShotOverrideConfiguration(UMoviePipelineShotConfig* InPreset);                                                   // [0x15273f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorShot.GetStatusProgress
	float GetStatusProgress();                                                                                               // [0x15250f0] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorShot.GetStatusMessage
	FString GetStatusMessage();                                                                                              // [0x1525030] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorShot.GetShotOverridePresetOrigin
	UMoviePipelineShotConfig* GetShotOverridePresetOrigin();                                                                 // [0x1524f00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorShot.GetShotOverrideConfiguration
	UMoviePipelineShotConfig* GetShotOverrideConfiguration();                                                                // [0x1524ee0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorShot.GetCameraName
	FString GetCameraName(int32_t InCameraIndex);                                                                            // [0x1522ce0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorShot.AllocateNewShotOverrideConfig
	UMoviePipelineShotConfig* AllocateNewShotOverrideConfig(UClass* InConfigType);                                           // [0x1521360] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineExecutorJob
/// Size: 0x00E8 (0x000028 - 0x000110)
class UMoviePipelineExecutorJob : public UObject : UObject
{ 
public:
	FString                                            JobName;                                                    // 0x0028   (0x0010)  
	FSoftObjectPath                                    Sequence;                                                   // 0x0038   (0x0020)  
	FSoftObjectPath                                    Map;                                                        // 0x0058   (0x0020)  
	FString                                            Author;                                                     // 0x0078   (0x0010)  
	FString                                            Comment;                                                    // 0x0088   (0x0010)  
	TArray<UMoviePipelineExecutorShot*>                ShotInfo;                                                   // 0x0098   (0x0010)  
	FString                                            UserData;                                                   // 0x00A8   (0x0010)  
	FString                                            StatusMessage;                                              // 0x00B8   (0x0010)  
	float                                              StatusProgress;                                             // 0x00C8   (0x0004)  
	bool                                               bIsConsumed;                                                // 0x00CC   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00CD   (0x0003)  MISSED
	UMoviePipelinePrimaryConfig*                       Configuration;                                              // 0x00D0   (0x0008)  
	TWeakObjectPtr<UMoviePipelinePrimaryConfig*>       PresetOrigin;                                               // 0x00D8   (0x0030)  
	bool                                               bEnabled;                                                   // 0x0108   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0109   (0x0007)  MISSED


	/// Functions
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorJob.SetStatusProgress
	void SetStatusProgress(float InProgress);                                                                                // [0x1527890] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorJob.SetStatusMessage
	void SetStatusMessage(FString InStatus);                                                                                 // [0x1527760] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorJob.SetSequence
	void SetSequence(FSoftObjectPath InSequence);                                                                            // [0x15272f0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorJob.SetPresetOrigin
	void SetPresetOrigin(UMoviePipelinePrimaryConfig* InPreset);                                                             // [0x1527070] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorJob.SetIsEnabled
	void SetIsEnabled(bool bInEnabled);                                                                                      // [0x1526d00] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorJob.SetConsumed
	void SetConsumed(bool bInConsumed);                                                                                      // [0x1526bd0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorJob.SetConfiguration
	void SetConfiguration(UMoviePipelinePrimaryConfig* InPreset);                                                            // [0x1526a30] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorJob.OnDuplicated
	void OnDuplicated();                                                                                                     // [0x1525530] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorJob.IsEnabled
	bool IsEnabled();                                                                                                        // [0x15252d0] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorJob.IsConsumed
	bool IsConsumed();                                                                                                       // [0x15252a0] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorJob.GetStatusProgress
	float GetStatusProgress();                                                                                               // [0x15250b0] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorJob.GetStatusMessage
	FString GetStatusMessage();                                                                                              // [0x1524fb0] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorJob.GetPresetOrigin
	UMoviePipelinePrimaryConfig* GetPresetOrigin();                                                                          // [0x1524dc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorJob.GetConfiguration
	UMoviePipelinePrimaryConfig* GetConfiguration();                                                                         // [0x1522fc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineQueue
/// Size: 0x0048 (0x000028 - 0x000070)
class UMoviePipelineQueue : public UObject : UObject
{ 
public:
	TArray<UMoviePipelineExecutorJob*>                 Jobs;                                                       // 0x0028   (0x0010)  
	TWeakObjectPtr<UMoviePipelineQueue*>               QueueOrigin;                                                // 0x0038   (0x0030)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0068   (0x0008)  MISSED


	/// Functions
	// Function /Script/MovieRenderPipelineCore.MoviePipelineQueue.SetQueueOrigin
	void SetQueueOrigin(UMoviePipelineQueue* InConfig);                                                                      // [0x1527200] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineQueue.SetJobIndex
	void SetJobIndex(UMoviePipelineExecutorJob* InJob, int32_t Index);                                                       // [0x1526e20] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineQueue.GetQueueOrigin
	UMoviePipelineQueue* GetQueueOrigin();                                                                                   // [0x1524e60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineQueue.GetJobs
	TArray<UMoviePipelineExecutorJob*> GetJobs();                                                                            // [0x1524590] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineQueue.DuplicateJob
	UMoviePipelineExecutorJob* DuplicateJob(UMoviePipelineExecutorJob* InJob);                                               // [0x1521b40] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineQueue.DeleteJob
	void DeleteJob(UMoviePipelineExecutorJob* InJob);                                                                        // [0x1521a60] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineQueue.DeleteAllJobs
	void DeleteAllJobs();                                                                                                    // [0x1521a20] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineQueue.CopyFrom
	void CopyFrom(UMoviePipelineQueue* InQueue);                                                                             // [0x15218e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineQueue.AllocateNewJob
	UMoviePipelineExecutorJob* AllocateNewJob(UClass* InJobType);                                                            // [0x15212c0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem
/// Size: 0x0060 (0x000030 - 0x000090)
class UMoviePipelineQueueEngineSubsystem : public UEngineSubsystem : UEngineSubsystem
{ 
public:
	FMulticastInlineDelegate                           OnRenderFinished;                                           // 0x0030   (0x0010)  
	UMoviePipelineExecutorBase*                        ActiveExecutor;                                             // 0x0040   (0x0008)  
	UMoviePipelineQueue*                               CurrentQueue;                                               // 0x0048   (0x0008)  
	unsigned char                                      UnknownData00_6[0x40];                                      // 0x0050   (0x0040)  MISSED


	/// Functions
	// Function /Script/MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.SetConfiguration
	void SetConfiguration(UClass* InProgressWidgetClass, bool bRenderPlayerViewport);                                        // [0x1526b00] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.RenderQueueWithExecutorInstance
	void RenderQueueWithExecutorInstance(UMoviePipelineExecutorBase* InExecutor);                                            // [0x1525df0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.RenderQueueWithExecutor
	UMoviePipelineExecutorBase* RenderQueueWithExecutor(UClass* InExecutorType);                                             // [0x1525cb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.RenderJob
	void RenderJob(UMoviePipelineExecutorJob* InJob);                                                                        // [0x1525ab0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.IsRendering
	bool IsRendering();                                                                                                      // [0x1525360] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.GetQueue
	UMoviePipelineQueue* GetQueue();                                                                                         // [0x1524e40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.GetActiveExecutor
	UMoviePipelineExecutorBase* GetActiveExecutor();                                                                         // [0x1522b90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.AllocateJob
	UMoviePipelineExecutorJob* AllocateJob(ULevelSequence* InSequence);                                                      // [0x1521020] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineRenderPass
/// Size: 0x0000 (0x000048 - 0x000048)
class UMoviePipelineRenderPass : public UMoviePipelineSetting : UMoviePipelineSetting
{ 
public:
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineShotConfig
/// Size: 0x0000 (0x000080 - 0x000080)
class UMoviePipelineShotConfig : public UMoviePipelineConfigBase : UMoviePipelineConfigBase
{ 
public:
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineVideoOutputBase
/// Size: 0x0048 (0x000048 - 0x000090)
class UMoviePipelineVideoOutputBase : public UMoviePipelineOutputBase : UMoviePipelineOutputBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x48];                                      // 0x0048   (0x0048)  MISSED
};

/// Enum /Script/MovieRenderPipelineCore.EMoviePipelineEncodeQuality
/// Size: 0x05
enum EMoviePipelineEncodeQuality : uint8_t
{
	EMoviePipelineEncodeQuality__Low0                                                = 0,
	EMoviePipelineEncodeQuality__Medium1                                             = 1,
	EMoviePipelineEncodeQuality__High2                                               = 2,
	EMoviePipelineEncodeQuality__Epic3                                               = 3,
	EMoviePipelineEncodeQuality__EMoviePipelineEncodeQuality_MAX4                    = 4
};

/// Enum /Script/MovieRenderPipelineCore.FCPXMLExportDataSource
/// Size: 0x03
enum FCPXMLExportDataSource : uint8_t
{
	FCPXMLExportDataSource__OutputMetadata0                                          = 0,
	FCPXMLExportDataSource__SequenceData1                                            = 1,
	FCPXMLExportDataSource__FCPXMLExportDataSource_MAX2                              = 2
};

/// Enum /Script/MovieRenderPipelineCore.EMoviePipelineTextureStreamingMethod
/// Size: 0x04
enum EMoviePipelineTextureStreamingMethod : uint8_t
{
	EMoviePipelineTextureStreamingMethod__None0                                      = 0,
	EMoviePipelineTextureStreamingMethod__Disabled1                                  = 1,
	EMoviePipelineTextureStreamingMethod__FullyLoad2                                 = 2,
	EMoviePipelineTextureStreamingMethod__EMoviePipelineTextureStreamingMethod_MAX3  = 3
};

/// Enum /Script/MovieRenderPipelineCore.EMovieRenderPipelineState
/// Size: 0x06
enum EMovieRenderPipelineState : uint8_t
{
	EMovieRenderPipelineState__Uninitialized0                                        = 0,
	EMovieRenderPipelineState__ProducingFrames1                                      = 1,
	EMovieRenderPipelineState__Finalize2                                             = 2,
	EMovieRenderPipelineState__Export3                                               = 3,
	EMovieRenderPipelineState__Finished4                                             = 4,
	EMovieRenderPipelineState__EMovieRenderPipelineState_MAX5                        = 5
};

/// Enum /Script/MovieRenderPipelineCore.EMovieRenderShotState
/// Size: 0x06
enum EMovieRenderShotState : uint8_t
{
	EMovieRenderShotState__Uninitialized0                                            = 0,
	EMovieRenderShotState__WarmingUp1                                                = 1,
	EMovieRenderShotState__MotionBlur2                                               = 2,
	EMovieRenderShotState__Rendering3                                                = 3,
	EMovieRenderShotState__Finished4                                                 = 4,
	EMovieRenderShotState__EMovieRenderShotState_MAX5                                = 5
};

/// Enum /Script/MovieRenderPipelineCore.EMoviePipelineShutterTiming
/// Size: 0x04
enum EMoviePipelineShutterTiming : uint8_t
{
	EMoviePipelineShutterTiming__FrameOpen0                                          = 0,
	EMoviePipelineShutterTiming__FrameCenter1                                        = 1,
	EMoviePipelineShutterTiming__FrameClose2                                         = 2,
	EMoviePipelineShutterTiming__EMoviePipelineShutterTiming_MAX3                    = 3
};

