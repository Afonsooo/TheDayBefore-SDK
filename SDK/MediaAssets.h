
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package MediaAssets.

/// Struct /Script/MediaAssets.MediaSoundComponentSpectralData
/// Size: 0x0008 (0x000000 - 0x000008)
struct FMediaSoundComponentSpectralData
{ 
	float                                              FrequencyHz;                                                // 0x0000   (0x0004)  
	float                                              Magnitude;                                                  // 0x0004   (0x0004)  
};

/// Struct /Script/MediaAssets.MediaSourceCacheSettings
/// Size: 0x0008 (0x000000 - 0x000008)
struct FMediaSourceCacheSettings
{ 
	bool                                               bOverride;                                                  // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              TimeToLookAhead;                                            // 0x0004   (0x0004)  
};

/// Struct /Script/MediaAssets.MediaCaptureDevice
/// Size: 0x0028 (0x000000 - 0x000028)
struct FMediaCaptureDevice
{ 
	FText                                              DisplayName;                                                // 0x0000   (0x0018)  
	FString                                            URL;                                                        // 0x0018   (0x0010)  
};

/// Class /Script/MediaAssets.MediaSource
/// Size: 0x0058 (0x000028 - 0x000080)
class UMediaSource : public UObject : UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x58];                                      // 0x0028   (0x0058)  MISSED
};

/// Class /Script/MediaAssets.BaseMediaSource
/// Size: 0x0008 (0x000080 - 0x000088)
class UBaseMediaSource : public UMediaSource : UMediaSource
{ 
public:
	FName                                              PlayerName;                                                 // 0x0080   (0x0008)  
};

/// Class /Script/MediaAssets.MediaSourceRendererInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UMediaSourceRendererInterface : public UInterface : UInterface
{ 
public:
};

/// Class /Script/MediaAssets.MediaTexture
/// Size: 0x00E0 (0x0001D0 - 0x0002B0)
class UMediaTexture : public UTexture : UTexture
{ 
public:
	TEnumAsByte<TextureAddress>                        AddressX;                                                   // 0x01C8   (0x0001)  
	TEnumAsByte<TextureAddress>                        AddressY;                                                   // 0x01C9   (0x0001)  
	bool                                               AutoClear;                                                  // 0x01CA   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x01CB   (0x0001)  MISSED
	FLinearColor                                       ClearColor;                                                 // 0x01CC   (0x0010)  
	bool                                               EnableGenMips;                                              // 0x01DC   (0x0001)  
	char                                               NumMips;                                                    // 0x01DD   (0x0001)  
	bool                                               NewStyleOutput;                                             // 0x01DE   (0x0001)  
	TEnumAsByte<MediaTextureOutputFormat>              OutputFormat;                                               // 0x01DF   (0x0001)  
	float                                              CurrentAspectRatio;                                         // 0x01E0   (0x0004)  
	TEnumAsByte<MediaTextureOrientation>               CurrentOrientation;                                         // 0x01E4   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x01E5   (0x0003)  MISSED
	UMediaPlayer*                                      MediaPlayer;                                                // 0x01E8   (0x0008)  
	unsigned char                                      UnknownData02_6[0xC0];                                      // 0x01F0   (0x00C0)  MISSED


	/// Functions
	// Function /Script/MediaAssets.MediaTexture.UpdateResource
	void UpdateResource();                                                                                                   // [0x3c58090] Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaTexture.SetMediaPlayer
	void SetMediaPlayer(UMediaPlayer* NewMediaPlayer);                                                                       // [0x3c57650] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaTexture.getWidth
	int32_t getWidth();                                                                                                      // [0x3c55000] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaTexture.GetTextureNumMips
	int32_t GetTextureNumMips();                                                                                             // [0x3c545c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaTexture.GetMediaPlayer
	UMediaPlayer* GetMediaPlayer();                                                                                          // [0x3c53aa0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaTexture.GetHeight
	int32_t GetHeight();                                                                                                     // [0x3c53900] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaTexture.GetAspectRatio
	float GetAspectRatio();                                                                                                  // [0x3c53540] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MediaAssets.FileMediaSource
/// Size: 0x0028 (0x000088 - 0x0000B0)
class UFileMediaSource : public UBaseMediaSource : UBaseMediaSource
{ 
public:
	FString                                            FilePath;                                                   // 0x0088   (0x0010)  
	bool                                               PrecacheFile;                                               // 0x0098   (0x0001)  
	unsigned char                                      UnknownData00_6[0x17];                                      // 0x0099   (0x0017)  MISSED


	/// Functions
	// Function /Script/MediaAssets.FileMediaSource.SetFilePath
	void SetFilePath(FString Path);                                                                                          // [0x3c56c60] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MediaAssets.MediaComponent
/// Size: 0x0010 (0x0000A0 - 0x0000B0)
class UMediaComponent : public UActorComponent : UActorComponent
{ 
public:
	UMediaTexture*                                     MediaTexture;                                               // 0x00A0   (0x0008)  
	UMediaPlayer*                                      MediaPlayer;                                                // 0x00A8   (0x0008)  


	/// Functions
	// Function /Script/MediaAssets.MediaComponent.GetMediaTexture
	UMediaTexture* GetMediaTexture();                                                                                        // [0x3c53ae0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaComponent.GetMediaPlayer
	UMediaPlayer* GetMediaPlayer();                                                                                          // [0x3c53a40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MediaAssets.MediaTimeStampInfo
/// Size: 0x0010 (0x000028 - 0x000038)
class UMediaTimeStampInfo : public UObject : UObject
{ 
public:
	FTimespan                                          Time;                                                       // 0x0028   (0x0008)  
	int64_t                                            SequenceIndex;                                              // 0x0030   (0x0008)  
};

/// Class /Script/MediaAssets.MediaPlayer
/// Size: 0x0128 (0x000028 - 0x000150)
class UMediaPlayer : public UObject : UObject
{ 
public:
	FMulticastInlineDelegate                           OnEndReached;                                               // 0x0028   (0x0010)  
	FMulticastInlineDelegate                           OnMediaClosed;                                              // 0x0038   (0x0010)  
	FMulticastInlineDelegate                           OnMediaOpened;                                              // 0x0048   (0x0010)  
	FMulticastInlineDelegate                           OnMediaOpenFailed;                                          // 0x0058   (0x0010)  
	FMulticastInlineDelegate                           OnPlaybackResumed;                                          // 0x0068   (0x0010)  
	FMulticastInlineDelegate                           OnPlaybackSuspended;                                        // 0x0078   (0x0010)  
	FMulticastInlineDelegate                           OnSeekCompleted;                                            // 0x0088   (0x0010)  
	FMulticastInlineDelegate                           OnTracksChanged;                                            // 0x0098   (0x0010)  
	FMulticastInlineDelegate                           OnMetadataChanged;                                          // 0x00A8   (0x0010)  
	FTimespan                                          CacheAhead;                                                 // 0x00B8   (0x0008)  
	FTimespan                                          CacheBehind;                                                // 0x00C0   (0x0008)  
	FTimespan                                          CacheBehindGame;                                            // 0x00C8   (0x0008)  
	bool                                               NativeAudioOut;                                             // 0x00D0   (0x0001)  
	bool                                               PlayOnOpen;                                                 // 0x00D1   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x00D2   (0x0002)  MISSED
	bool                                               Shuffle : 1;                                                // 0x00D4:0 (0x0001)  
	bool                                               Loop : 1;                                                   // 0x00D4:1 (0x0001)  
	unsigned char                                      UnknownData01_4[0x3];                                       // 0x00D5   (0x0003)  MISSED
	UMediaPlaylist*                                    Playlist;                                                   // 0x00D8   (0x0008)  
	int32_t                                            PlaylistIndex;                                              // 0x00E0   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x00E4   (0x0004)  MISSED
	FTimespan                                          TimeDelay;                                                  // 0x00E8   (0x0008)  
	float                                              HorizontalFieldOfView;                                      // 0x00F0   (0x0004)  
	float                                              VerticalFieldOfView;                                        // 0x00F4   (0x0004)  
	FRotator                                           ViewRotation;                                               // 0x00F8   (0x0018)  
	unsigned char                                      UnknownData03_5[0x28];                                      // 0x0110   (0x0028)  MISSED
	FGuid                                              PlayerGuid;                                                 // 0x0138   (0x0010)  
	unsigned char                                      UnknownData04_6[0x8];                                       // 0x0148   (0x0008)  MISSED


	/// Functions
	// Function /Script/MediaAssets.MediaPlayer.SupportsSeeking
	bool SupportsSeeking();                                                                                                  // [0x3c58050] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.SupportsScrubbing
	bool SupportsScrubbing();                                                                                                // [0x3c58010] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.SupportsRate
	bool SupportsRate(float Rate, bool Unthinned);                                                                           // [0x3c57f30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.SetViewRotation
	bool SetViewRotation(FRotator& Rotation, bool Absolute);                                                                 // [0x3c57df0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.SetViewField
	bool SetViewField(float Horizontal, float Vertical, bool Absolute);                                                      // [0x3c57ca0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.SetVideoTrackFrameRate
	bool SetVideoTrackFrameRate(int32_t TrackIndex, int32_t FormatIndex, float FrameRate);                                   // [0x3c57b90] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.SetTrackFormat
	bool SetTrackFormat(EMediaPlayerTrack TrackType, int32_t TrackIndex, int32_t FormatIndex);                               // [0x3c57a80] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.SetTimeDelay
	void SetTimeDelay(FTimespan TimeDelay);                                                                                  // [0x3c579f0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.SetRate
	bool SetRate(float Rate);                                                                                                // [0x3c57790] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.SetNativeVolume
	bool SetNativeVolume(float Volume);                                                                                      // [0x3c576f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.SetMediaOptions
	void SetMediaOptions(UMediaSource* Options);                                                                             // [0x3c57520] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.SetLooping
	bool SetLooping(bool Looping);                                                                                           // [0x3c56e90] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.SetDesiredPlayerName
	void SetDesiredPlayerName(FName PlayerName);                                                                             // [0x3c56930] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.SetBlockOnTime
	void SetBlockOnTime(FTimespan& Time);                                                                                    // [0x3c56890] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.SelectTrack
	bool SelectTrack(EMediaPlayerTrack TrackType, int32_t TrackIndex);                                                       // [0x3c567c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.Seek
	bool Seek(FTimespan& Time);                                                                                              // [0x3c56710] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.rewind
	bool rewind();                                                                                                           // [0x3c566d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.Reopen
	bool Reopen();                                                                                                           // [0x3c56580] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.Previous
	bool Previous();                                                                                                         // [0x3c562f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.PlayAndSeek
	void PlayAndSeek();                                                                                                      // [0x3c562d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.Play
	bool Play();                                                                                                             // [0x3c56290] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.Pause
	bool Pause();                                                                                                            // [0x3c56250] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.OpenUrl
	bool OpenUrl(FString URL);                                                                                               // [0x3c56040] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.OpenSourceWithOptions
	bool OpenSourceWithOptions(UMediaSource* MediaSource, FMediaPlayerOptions& Options);                                     // [0x3c55e20] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.OpenSourceLatent
	void OpenSourceLatent(UObject* WorldContextObject, FLatentActionInfo LatentInfo, UMediaSource* MediaSource, FMediaPlayerOptions& Options, bool& bSuccess); // [0x3c55c20] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.OpenSource
	bool OpenSource(UMediaSource* MediaSource);                                                                              // [0x3c55a80] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.OpenPlaylistIndex
	bool OpenPlaylistIndex(UMediaPlaylist* InPlaylist, int32_t Index);                                                       // [0x3c558d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.OpenPlaylist
	bool OpenPlaylist(UMediaPlaylist* InPlaylist);                                                                           // [0x3c55770] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.OpenFile
	bool OpenFile(FString FilePath);                                                                                         // [0x3c553b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.Next
	bool Next();                                                                                                             // [0x3c55380] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.IsReady
	bool IsReady();                                                                                                          // [0x3c55340] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.IsPreparing
	bool IsPreparing();                                                                                                      // [0x3c55300] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.IsPlaying
	bool IsPlaying();                                                                                                        // [0x3c552c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.IsPaused
	bool IsPaused();                                                                                                         // [0x3c55280] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.IsLooping
	bool IsLooping();                                                                                                        // [0x3c55240] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.IsConnecting
	bool IsConnecting();                                                                                                     // [0x3c55200] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.IsClosed
	bool IsClosed();                                                                                                         // [0x3c551c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.IsBuffering
	bool IsBuffering();                                                                                                      // [0x3c55180] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.HasError
	bool HasError();                                                                                                         // [0x3c55020] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetViewRotation
	FRotator GetViewRotation();                                                                                              // [0x3c54f80] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetVideoTrackType
	FString GetVideoTrackType(int32_t TrackIndex, int32_t FormatIndex);                                                      // [0x3c54e60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetVideoTrackFrameRates
	FFloatRange GetVideoTrackFrameRates(int32_t TrackIndex, int32_t FormatIndex);                                            // [0x3c54d80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetVideoTrackFrameRate
	float GetVideoTrackFrameRate(int32_t TrackIndex, int32_t FormatIndex);                                                   // [0x3c54cb0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetVideoTrackDimensions
	FIntPoint GetVideoTrackDimensions(int32_t TrackIndex, int32_t FormatIndex);                                              // [0x3c54bd0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetVideoTrackAspectRatio
	float GetVideoTrackAspectRatio(int32_t TrackIndex, int32_t FormatIndex);                                                 // [0x3c54b00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetVerticalFieldOfView
	float GetVerticalFieldOfView();                                                                                          // [0x3c54a80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetUrl
	FString GetUrl();                                                                                                        // [0x3c54a50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetTrackLanguage
	FString GetTrackLanguage(EMediaPlayerTrack TrackType, int32_t TrackIndex);                                               // [0x3c54930] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetTrackFormat
	int32_t GetTrackFormat(EMediaPlayerTrack TrackType, int32_t TrackIndex);                                                 // [0x3c54860] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetTrackDisplayName
	FText GetTrackDisplayName(EMediaPlayerTrack TrackType, int32_t TrackIndex);                                              // [0x3c54730] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetTimeStamp
	UMediaTimeStampInfo* GetTimeStamp();                                                                                     // [0x3c54650] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetTimeDelay
	FTimespan GetTimeDelay();                                                                                                // [0x3c54620] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetTime
	FTimespan GetTime();                                                                                                     // [0x3c545e0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetSupportedRates
	void GetSupportedRates(TArray<FFloatRange>& OutRates, bool Unthinned);                                                   // [0x3c54460] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetSelectedTrack
	int32_t GetSelectedTrack(EMediaPlayerTrack TrackType);                                                                   // [0x3c541f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetRate
	float GetRate();                                                                                                         // [0x3c541b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetPlaylistIndex
	int32_t GetPlaylistIndex();                                                                                              // [0x3c54000] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetPlaylist
	UMediaPlaylist* GetPlaylist();                                                                                           // [0x3c53f60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetPlayerName
	FName GetPlayerName();                                                                                                   // [0x3c53f20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetNumTracks
	int32_t GetNumTracks(EMediaPlayerTrack TrackType);                                                                       // [0x3c53e90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetNumTrackFormats
	int32_t GetNumTrackFormats(EMediaPlayerTrack TrackType, int32_t TrackIndex);                                             // [0x3c53dc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetMediaName
	FText GetMediaName();                                                                                                    // [0x3c539a0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetHorizontalFieldOfView
	float GetHorizontalFieldOfView();                                                                                        // [0x3c53920] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetDuration
	FTimespan GetDuration();                                                                                                 // [0x3c53880] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetDesiredPlayerName
	FName GetDesiredPlayerName();                                                                                            // [0x3c53850] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetAudioTrackType
	FString GetAudioTrackType(int32_t TrackIndex, int32_t FormatIndex);                                                      // [0x3c53730] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetAudioTrackSampleRate
	int32_t GetAudioTrackSampleRate(int32_t TrackIndex, int32_t FormatIndex);                                                // [0x3c53660] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetAudioTrackChannels
	int32_t GetAudioTrackChannels(int32_t TrackIndex, int32_t FormatIndex);                                                  // [0x3c53590] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.Close
	void Close();                                                                                                            // [0x3c53010] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.CanPlayUrl
	bool CanPlayUrl(FString URL);                                                                                            // [0x3c52f20] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.CanPlaySource
	bool CanPlaySource(UMediaSource* MediaSource);                                                                           // [0x3c52e30] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.CanPause
	bool CanPause();                                                                                                         // [0x3c52df0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MediaAssets.MediaPlayerProxyInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UMediaPlayerProxyInterface : public UInterface : UInterface
{ 
public:
};

/// Class /Script/MediaAssets.MediaPlaylist
/// Size: 0x0010 (0x000028 - 0x000038)
class UMediaPlaylist : public UObject : UObject
{ 
public:
	TArray<UMediaSource*>                              Items;                                                      // 0x0028   (0x0010)  


	/// Functions
	// Function /Script/MediaAssets.MediaPlaylist.Replace
	bool Replace(int32_t Index, UMediaSource* Replacement);                                                                  // [0x3c565d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlaylist.RemoveAt
	bool RemoveAt(int32_t Index);                                                                                            // [0x3c564b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlaylist.Remove
	bool Remove(UMediaSource* MediaSource);                                                                                  // [0x3c56320] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlaylist.Num
	int32_t Num();                                                                                                           // [0x19cc5c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlaylist.Insert
	void Insert(UMediaSource* MediaSource, int32_t Index);                                                                   // [0x3c55060] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlaylist.GetRandom
	UMediaSource* GetRandom(int32_t& OutIndex);                                                                              // [0x3c54100] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlaylist.GetPrevious
	UMediaSource* GetPrevious(int32_t& InOutIndex);                                                                          // [0x3c54020] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlaylist.GetNext
	UMediaSource* GetNext(int32_t& InOutIndex);                                                                              // [0x3c53b00] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlaylist.Get
	UMediaSource* Get(int32_t Index);                                                                                        // [0x3c53480] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlaylist.AddUrl
	bool AddUrl(FString URL);                                                                                                // [0x3c52a20] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlaylist.AddFile
	bool AddFile(FString FilePath);                                                                                          // [0x3c526e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlaylist.Add
	bool Add(UMediaSource* MediaSource);                                                                                     // [0x3c52620] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MediaAssets.MediaSoundComponent
/// Size: 0x00E0 (0x000790 - 0x000870)
class UMediaSoundComponent : public USynthComponent : USynthComponent
{ 
public:
	EMediaSoundChannels                                Channels;                                                   // 0x0790   (0x0004)  
	bool                                               DynamicRateAdjustment;                                      // 0x0794   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0795   (0x0003)  MISSED
	float                                              RateAdjustmentFactor;                                       // 0x0798   (0x0004)  
	FFloatRange                                        RateAdjustmentRange;                                        // 0x079C   (0x0010)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x07AC   (0x0004)  MISSED
	UMediaPlayer*                                      MediaPlayer;                                                // 0x07B0   (0x0008)  
	unsigned char                                      UnknownData02_6[0xB8];                                      // 0x07B8   (0x00B8)  MISSED


	/// Functions
	// Function /Script/MediaAssets.MediaSoundComponent.SetSpectralAnalysisSettings
	void SetSpectralAnalysisSettings(TArray<float> InFrequenciesToAnalyze, EMediaSoundComponentFFTSize InFFTSize);           // [0x3c57830] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaSoundComponent.SetMediaPlayer
	void SetMediaPlayer(UMediaPlayer* NewMediaPlayer);                                                                       // [0x3c575c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaSoundComponent.SetEnvelopeFollowingsettings
	void SetEnvelopeFollowingsettings(int32_t AttackTimeMsec, int32_t ReleaseTimeMsec);                                      // [0x3c56b50] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaSoundComponent.SetEnableSpectralAnalysis
	void SetEnableSpectralAnalysis(bool bInSpectralAnalysisEnabled);                                                         // [0x3c56a90] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaSoundComponent.SetEnableEnvelopeFollowing
	void SetEnableEnvelopeFollowing(bool bInEnvelopeFollowing);                                                              // [0x3c569c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaSoundComponent.GetSpectralData
	TArray<FMediaSoundComponentSpectralData> GetSpectralData();                                                              // [0x3c54280] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaSoundComponent.GetNormalizedSpectralData
	TArray<FMediaSoundComponentSpectralData> GetNormalizedSpectralData();                                                    // [0x3c53be0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaSoundComponent.GetMediaPlayer
	UMediaPlayer* GetMediaPlayer();                                                                                          // [0x3c53a60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaSoundComponent.GetEnvelopeValue
	float GetEnvelopeValue();                                                                                                // [0x3c538c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaSoundComponent.BP_GetAttenuationSettingsToApply
	bool BP_GetAttenuationSettingsToApply(FSoundAttenuationSettings& OutAttenuationSettings);                                // [0x3c52ba0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/MediaAssets.PlatformMediaSource
/// Size: 0x0008 (0x000080 - 0x000088)
class UPlatformMediaSource : public UMediaSource : UMediaSource
{ 
public:
	UMediaSource*                                      MediaSource;                                                // 0x0080   (0x0008)  
};

/// Class /Script/MediaAssets.StreamMediaSource
/// Size: 0x0010 (0x000088 - 0x000098)
class UStreamMediaSource : public UBaseMediaSource : UBaseMediaSource
{ 
public:
	FString                                            StreamUrl;                                                  // 0x0088   (0x0010)  
};

/// Class /Script/MediaAssets.TimeSynchronizableMediaSource
/// Size: 0x0018 (0x000088 - 0x0000A0)
class UTimeSynchronizableMediaSource : public UBaseMediaSource : UBaseMediaSource
{ 
public:
	bool                                               bUseTimeSynchronization;                                    // 0x0088   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0089   (0x0003)  MISSED
	int32_t                                            FrameDelay;                                                 // 0x008C   (0x0004)  
	double                                             TimeDelay;                                                  // 0x0090   (0x0008)  
	bool                                               bAutoDetectInput;                                           // 0x0098   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0099   (0x0007)  MISSED
};

/// Class /Script/MediaAssets.MediaBlueprintFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UMediaBlueprintFunctionLibrary : public UBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{ 
public:
};

/// Enum /Script/MediaAssets.MediaTextureOutputFormat
/// Size: 0x03
enum MediaTextureOutputFormat : uint8_t
{
	MTOF_Default0                                                                    = 0,
	MTOF_SRGB_LINOUT1                                                                = 1,
	MTOF_MAX2                                                                        = 2
};

/// Enum /Script/MediaAssets.MediaTextureOrientation
/// Size: 0x05
enum MediaTextureOrientation : uint8_t
{
	MTORI_Original0                                                                  = 0,
	MTORI_CW901                                                                      = 1,
	MTORI_CW1802                                                                     = 2,
	MTORI_CW2703                                                                     = 3,
	MTORI_MAX4                                                                       = 4
};

/// Enum /Script/MediaAssets.EMediaPlayerTrack
/// Size: 0x08
enum EMediaPlayerTrack : uint8_t
{
	EMediaPlayerTrack__Audio0                                                        = 0,
	EMediaPlayerTrack__Caption1                                                      = 1,
	EMediaPlayerTrack__Metadata2                                                     = 2,
	EMediaPlayerTrack__Script3                                                       = 3,
	EMediaPlayerTrack__Subtitle4                                                     = 4,
	EMediaPlayerTrack__Text5                                                         = 5,
	EMediaPlayerTrack__Video6                                                        = 6,
	EMediaPlayerTrack__EMediaPlayerTrack_MAX7                                        = 7
};

/// Enum /Script/MediaAssets.EMediaSoundChannels
/// Size: 0x04
enum EMediaSoundChannels : uint8_t
{
	EMediaSoundChannels__Mono0                                                       = 0,
	EMediaSoundChannels__Stereo1                                                     = 1,
	EMediaSoundChannels__Surround2                                                   = 2,
	EMediaSoundChannels__EMediaSoundChannels_MAX3                                    = 3
};

/// Enum /Script/MediaAssets.EMediaSoundComponentFFTSize
/// Size: 0x05
enum EMediaSoundComponentFFTSize : uint8_t
{
	EMediaSoundComponentFFTSize__Min0                                                = 0,
	EMediaSoundComponentFFTSize__Small1                                              = 1,
	EMediaSoundComponentFFTSize__Medium2                                             = 2,
	EMediaSoundComponentFFTSize__Large3                                              = 3,
	EMediaSoundComponentFFTSize__EMediaSoundComponentFFTSize_MAX4                    = 4
};

/// Enum /Script/MediaAssets.EMediaTextureVisibleMipsTiles
/// Size: 0x04
enum EMediaTextureVisibleMipsTiles : uint8_t
{
	EMediaTextureVisibleMipsTiles__None0                                             = 0,
	EMediaTextureVisibleMipsTiles__Plane1                                            = 1,
	EMediaTextureVisibleMipsTiles__Sphere2                                           = 2,
	EMediaTextureVisibleMipsTiles__EMediaTextureVisibleMipsTiles_MAX3                = 3
};

/// Enum /Script/MediaAssets.EMediaAudioCaptureDeviceFilter
/// Size: 0x06
enum EMediaAudioCaptureDeviceFilter : uint8_t
{
	EMediaAudioCaptureDeviceFilter__None0                                            = 0,
	EMediaAudioCaptureDeviceFilter__Card1                                            = 1,
	EMediaAudioCaptureDeviceFilter__Microphone2                                      = 2,
	EMediaAudioCaptureDeviceFilter__Software3                                        = 4,
	EMediaAudioCaptureDeviceFilter__Unknown4                                         = 8,
	EMediaAudioCaptureDeviceFilter__EMediaAudioCaptureDeviceFilter_MAX5              = 9
};

/// Enum /Script/MediaAssets.EMediaVideoCaptureDeviceFilter
/// Size: 0x06
enum EMediaVideoCaptureDeviceFilter : uint8_t
{
	EMediaVideoCaptureDeviceFilter__None0                                            = 0,
	EMediaVideoCaptureDeviceFilter__Card1                                            = 1,
	EMediaVideoCaptureDeviceFilter__Software2                                        = 2,
	EMediaVideoCaptureDeviceFilter__Unknown3                                         = 4,
	EMediaVideoCaptureDeviceFilter__Webcam4                                          = 8,
	EMediaVideoCaptureDeviceFilter__EMediaVideoCaptureDeviceFilter_MAX5              = 9
};

/// Enum /Script/MediaAssets.EMediaWebcamCaptureDeviceFilter
/// Size: 0x06
enum EMediaWebcamCaptureDeviceFilter : uint8_t
{
	EMediaWebcamCaptureDeviceFilter__None0                                           = 0,
	EMediaWebcamCaptureDeviceFilter__DepthSensor1                                    = 1,
	EMediaWebcamCaptureDeviceFilter__Front2                                          = 2,
	EMediaWebcamCaptureDeviceFilter__Rear3                                           = 4,
	EMediaWebcamCaptureDeviceFilter__Unknown4                                        = 8,
	EMediaWebcamCaptureDeviceFilter__EMediaWebcamCaptureDeviceFilter_MAX5            = 9
};

