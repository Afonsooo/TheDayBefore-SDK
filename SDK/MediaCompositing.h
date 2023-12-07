
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package MediaCompositing.

/// Struct /Script/MediaCompositing.MovieSceneMediaPlayerPropertySectionTemplate
/// Size: 0x0010 (0x000038 - 0x000048)
struct FMovieSceneMediaPlayerPropertySectionTemplate : FMovieScenePropertySectionTemplate
{ 
	UMediaSource*                                      MediaSource;                                                // 0x0038   (0x0008)  
	FFrameNumber                                       SectionStartFrame;                                          // 0x0040   (0x0004)  
	bool                                               bLoop;                                                      // 0x0044   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0045   (0x0003)  MISSED
};

/// Struct /Script/MediaCompositing.MovieSceneMediaSectionParams
/// Size: 0x0160 (0x000000 - 0x000160)
struct FMovieSceneMediaSectionParams
{ 
	UMediaSoundComponent*                              MediaSoundComponent;                                        // 0x0000   (0x0008)  
	UMediaSource*                                      MediaSource;                                                // 0x0008   (0x0008)  
	FMovieSceneObjectBindingID                         MediaSourceProxy;                                           // 0x0010   (0x0018)  
	int32_t                                            MediaSourceProxyIndex;                                      // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x002C   (0x0004)  MISSED
	UMediaTexture*                                     MediaTexture;                                               // 0x0030   (0x0008)  
	UMediaPlayer*                                      MediaPlayer;                                                // 0x0038   (0x0008)  
	FFrameNumber                                       SectionStartFrame;                                          // 0x0040   (0x0004)  
	FFrameNumber                                       SectionEndFrame;                                            // 0x0044   (0x0004)  
	bool                                               bLooping;                                                   // 0x0048   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0049   (0x0003)  MISSED
	FFrameNumber                                       StartFrameOffset;                                           // 0x004C   (0x0004)  
	FMovieSceneFloatChannel                            ProxyTextureBlend;                                          // 0x0050   (0x0110)  
};

/// Struct /Script/MediaCompositing.MovieSceneMediaSectionTemplate
/// Size: 0x0168 (0x000020 - 0x000188)
struct FMovieSceneMediaSectionTemplate : FMovieSceneEvalTemplate
{ 
	FMovieSceneMediaSectionParams                      Params;                                                     // 0x0020   (0x0160)  
	UMovieSceneMediaSection*                           MediaSection;                                               // 0x0180   (0x0008)  
};

/// Class /Script/MediaCompositing.MovieSceneMediaPlayerPropertySection
/// Size: 0x0010 (0x0000F0 - 0x000100)
class UMovieSceneMediaPlayerPropertySection : public UMovieSceneSection : UMovieSceneSection
{ 
public:
	UMediaSource*                                      MediaSource;                                                // 0x00F0   (0x0008)  
	bool                                               bLoop;                                                      // 0x00F8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00F9   (0x0007)  MISSED
};

/// Class /Script/MediaCompositing.MovieSceneMediaPlayerPropertyTrack
/// Size: 0x0008 (0x0000C8 - 0x0000D0)
class UMovieSceneMediaPlayerPropertyTrack : public UMovieScenePropertyTrack : UMovieScenePropertyTrack
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00C8   (0x0008)  MISSED
};

/// Class /Script/MediaCompositing.MovieSceneMediaSection
/// Size: 0x0060 (0x0000F0 - 0x000150)
class UMovieSceneMediaSection : public UMovieSceneSection : UMovieSceneSection
{ 
public:
	UMediaSource*                                      MediaSource;                                                // 0x00F0   (0x0008)  
	int32_t                                            MediaSourceProxyIndex;                                      // 0x00F8   (0x0004)  
	bool                                               bLooping;                                                   // 0x00FC   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00FD   (0x0003)  MISSED
	FFrameNumber                                       StartFrameOffset;                                           // 0x0100   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0104   (0x0004)  MISSED
	UMediaTexture*                                     MediaTexture;                                               // 0x0108   (0x0008)  
	UMediaSoundComponent*                              MediaSoundComponent;                                        // 0x0110   (0x0008)  
	bool                                               bUseExternalMediaPlayer;                                    // 0x0118   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0119   (0x0007)  MISSED
	UMediaPlayer*                                      ExternalMediaPlayer;                                        // 0x0120   (0x0008)  
	FMediaSourceCacheSettings                          CacheSettings;                                              // 0x0128   (0x0008)  
	int32_t                                            TextureIndex;                                               // 0x0130   (0x0004)  
	bool                                               bHasMediaPlayerProxy;                                       // 0x0134   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0135   (0x0003)  MISSED
	FMovieSceneObjectBindingID                         MediaSourceProxyBindingID;                                  // 0x0138   (0x0018)  
};

/// Class /Script/MediaCompositing.MovieSceneMediaTrack
/// Size: 0x0018 (0x000098 - 0x0000B0)
class UMovieSceneMediaTrack : public UMovieSceneNameableTrack : UMovieSceneNameableTrack
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0098   (0x0008)  MISSED
	TArray<UMovieSceneSection*>                        MediaSections;                                              // 0x00A0   (0x0010)  
};

