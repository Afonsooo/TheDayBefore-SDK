
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package MediaPlate.

/// Class /Script/MediaPlate.MediaPlate
/// Size: 0x0010 (0x000290 - 0x0002A0)
class AMediaPlate : public AActor : AActor
{ 
public:
	UMediaPlateComponent*                              MediaPlateComponent;                                        // 0x0290   (0x0008)  
	UStaticMeshComponent*                              StaticMeshComponent;                                        // 0x0298   (0x0008)  
};

/// Class /Script/MediaPlate.MediaPlateAssetUserData
/// Size: 0x0010 (0x000028 - 0x000038)
class UMediaPlateAssetUserData : public UAssetUserData : UAssetUserData
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED
};

/// Class /Script/MediaPlate.MediaPlateComponent
/// Size: 0x00C8 (0x0000A0 - 0x000168)
class UMediaPlateComponent : public UActorComponent : UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x00A0   (0x0008)  MISSED
	bool                                               bPlayOnOpen;                                                // 0x00A8   (0x0001)  
	bool                                               bAutoPlay;                                                  // 0x00A9   (0x0001)  
	bool                                               bEnableAudio;                                               // 0x00AA   (0x0001)  
	unsigned char                                      UnknownData01_5[0x1];                                       // 0x00AB   (0x0001)  MISSED
	float                                              StartTime;                                                  // 0x00AC   (0x0004)  
	UMediaSoundComponent*                              SoundComponent;                                             // 0x00B0   (0x0008)  
	UStaticMeshComponent*                              StaticMeshComponent;                                        // 0x00B8   (0x0008)  
	TArray<UStaticMeshComponent*>                      Letterboxes;                                                // 0x00C0   (0x0010)  
	UMediaPlaylist*                                    MediaPlaylist;                                              // 0x00D0   (0x0008)  
	int32_t                                            PlaylistIndex;                                              // 0x00D8   (0x0004)  
	FMediaSourceCacheSettings                          CacheSettings;                                              // 0x00DC   (0x0008)  
	bool                                               bIsMediaPlatePlaying;                                       // 0x00E4   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x00E5   (0x0007)  MISSED
	bool                                               bPlayOnlyWhenVisible;                                       // 0x00EC   (0x0001)  
	bool                                               bLoop;                                                      // 0x00ED   (0x0001)  
	EMediaTextureVisibleMipsTiles                      VisibleMipsTilesCalculations;                               // 0x00EE   (0x0001)  
	unsigned char                                      UnknownData03_5[0x1];                                       // 0x00EF   (0x0001)  MISSED
	float                                              MipMapBias;                                                 // 0x00F0   (0x0004)  
	bool                                               bIsAspectRatioAuto;                                         // 0x00F4   (0x0001)  
	bool                                               bEnableMipMapUpscaling;                                     // 0x00F5   (0x0001)  
	unsigned char                                      UnknownData04_5[0x2];                                       // 0x00F6   (0x0002)  MISSED
	int32_t                                            MipLevelToUpscale;                                          // 0x00F8   (0x0004)  
	float                                              LetterboxAspectRatio;                                       // 0x00FC   (0x0004)  
	unsigned char                                      UnknownData05_5[0x8];                                       // 0x0100   (0x0008)  MISSED
	FVector2D                                          MeshRange;                                                  // 0x0108   (0x0010)  
	TArray<UMediaTexture*>                             MediaTextures;                                              // 0x0118   (0x0010)  
	UMediaPlayer*                                      MediaPlayer;                                                // 0x0128   (0x0008)  
	unsigned char                                      UnknownData06_6[0x38];                                      // 0x0130   (0x0038)  MISSED


	/// Functions
	// Function /Script/MediaPlate.MediaPlateComponent.SetPlayOnlyWhenVisible
	void SetPlayOnlyWhenVisible(bool bInPlayOnlyWhenVisible);                                                                // [0x1b35fe0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaPlate.MediaPlateComponent.SetMeshRange
	void SetMeshRange(FVector2D InMeshRange);                                                                                // [0x1b35f50] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MediaPlate.MediaPlateComponent.SetLoop
	void SetLoop(bool bInLoop);                                                                                              // [0x1b35eb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaPlate.MediaPlateComponent.SetLetterboxAspectRatio
	void SetLetterboxAspectRatio(float AspectRatio);                                                                         // [0x1b35d90] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaPlate.MediaPlateComponent.SetIsAspectRatioAuto
	void SetIsAspectRatioAuto(bool bInIsAspectRatioAuto);                                                                    // [0x1b35cf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaPlate.MediaPlateComponent.Seek
	bool Seek(FTimespan& Time);                                                                                              // [0x1b35c40] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MediaPlate.MediaPlateComponent.rewind
	bool rewind();                                                                                                           // [0x1b35bf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaPlate.MediaPlateComponent.Play
	void Play();                                                                                                             // [0x1b35bb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaPlate.MediaPlateComponent.Pause
	void Pause();                                                                                                            // [0x1b35b70] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaPlate.MediaPlateComponent.Open
	void Open();                                                                                                             // [0x1b35b50] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaPlate.MediaPlateComponent.OnMediaOpened
	void OnMediaOpened(FString DeviceUrl);                                                                                   // [0x1b35a30] Final|Native|Private 
	// Function /Script/MediaPlate.MediaPlateComponent.OnMediaEnd
	void OnMediaEnd();                                                                                                       // [0x1b359c0] Final|Native|Private 
	// Function /Script/MediaPlate.MediaPlateComponent.IsMediaPlatePlaying
	bool IsMediaPlatePlaying();                                                                                              // [0x1b359a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaPlate.MediaPlateComponent.GetMeshRange
	FVector2D GetMeshRange();                                                                                                // [0x1b35970] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaPlate.MediaPlateComponent.GetMediaTexture
	UMediaTexture* GetMediaTexture(int32_t Index);                                                                           // [0x1b358b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaPlate.MediaPlateComponent.GetMediaPlayer
	UMediaPlayer* GetMediaPlayer();                                                                                          // [0x1524650] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaPlate.MediaPlateComponent.GetLoop
	bool GetLoop();                                                                                                          // [0x1b35890] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MediaPlate.MediaPlateComponent.GetLetterboxAspectRatio
	float GetLetterboxAspectRatio();                                                                                         // [0x1b35870] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaPlate.MediaPlateComponent.GetIsAspectRatioAuto
	bool GetIsAspectRatioAuto();                                                                                             // [0x1b35850] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaPlate.MediaPlateComponent.Close
	void Close();                                                                                                            // [0x1b357f0] Final|Native|Public|BlueprintCallable 
};

/// Enum /Script/MediaPlate.EMediaPlateEventState
/// Size: 0x08
enum EMediaPlateEventState : uint8_t
{
	EMediaPlateEventState__Play0                                                     = 0,
	EMediaPlateEventState__Open1                                                     = 1,
	EMediaPlateEventState__Close2                                                    = 2,
	EMediaPlateEventState__Pause3                                                    = 3,
	EMediaPlateEventState__Reverse4                                                  = 4,
	EMediaPlateEventState__Forward5                                                  = 5,
	EMediaPlateEventState__Rewind6                                                   = 6,
	EMediaPlateEventState__MAX7                                                      = 7
};

