
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package LiveLinkMovieScene.

/// Struct /Script/LiveLinkMovieScene.MovieSceneLiveLinkSectionTemplate
/// Size: 0x0080 (0x000038 - 0x0000B8)
struct FMovieSceneLiveLinkSectionTemplate : FMovieScenePropertySectionTemplate
{ 
	FLiveLinkSubjectPreset                             SubjectPreset;                                              // 0x0038   (0x0038)  
	TArray<bool>                                       ChannelMask;                                                // 0x0070   (0x0010)  
	TArray<FLiveLinkSubSectionData>                    SubSectionsData;                                            // 0x0080   (0x0010)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x0090   (0x0028)  MISSED
};

/// Struct /Script/LiveLinkMovieScene.LiveLinkSubSectionData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FLiveLinkSubSectionData
{ 
	TArray<FLiveLinkPropertyData>                      Properties;                                                 // 0x0000   (0x0010)  
};

/// Struct /Script/LiveLinkMovieScene.LiveLinkPropertyData
/// Size: 0x0058 (0x000000 - 0x000058)
struct FLiveLinkPropertyData
{ 
	FName                                              PropertyName;                                               // 0x0000   (0x0008)  
	TArray<FMovieSceneFloatChannel>                    FloatChannel;                                               // 0x0008   (0x0010)  
	TArray<FMovieSceneStringChannel>                   StringChannel;                                              // 0x0018   (0x0010)  
	TArray<FMovieSceneIntegerChannel>                  IntegerChannel;                                             // 0x0028   (0x0010)  
	TArray<FMovieSceneBoolChannel>                     BoolChannel;                                                // 0x0038   (0x0010)  
	TArray<FMovieSceneByteChannel>                     ByteChannel;                                                // 0x0048   (0x0010)  
};

/// Class /Script/LiveLinkMovieScene.MovieSceneLiveLinkSection
/// Size: 0x0140 (0x0000F0 - 0x000230)
class UMovieSceneLiveLinkSection : public UMovieSceneSection : UMovieSceneSection
{ 
public:
	FLiveLinkSubjectPreset                             SubjectPreset;                                              // 0x00F0   (0x0038)  
	TArray<bool>                                       ChannelMask;                                                // 0x0128   (0x0010)  
	TArray<UMovieSceneLiveLinkSubSection*>             SubSections;                                                // 0x0138   (0x0010)  
	unsigned char                                      UnknownData00_5[0x10];                                      // 0x0148   (0x0010)  MISSED
	FName                                              SubjectName;                                                // 0x0158   (0x0008)  
	FLiveLinkFrameData                                 TemplateToPush;                                             // 0x0160   (0x0090)  
	FLiveLinkRefSkeleton                               RefSkeleton;                                                // 0x01F0   (0x0020)  
	TArray<FName>                                      CurveNames;                                                 // 0x0210   (0x0010)  
	TArray<FMovieSceneFloatChannel>                    PropertyFloatChannels;                                      // 0x0220   (0x0010)  
};

/// Class /Script/LiveLinkMovieScene.MovieSceneLiveLinkSubSection
/// Size: 0x0028 (0x000028 - 0x000050)
class UMovieSceneLiveLinkSubSection : public UObject : UObject
{ 
public:
	FLiveLinkSubSectionData                            SubSectionData;                                             // 0x0028   (0x0010)  
	UClass*                                            SubjectRole;                                                // 0x0038   (0x0008)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0040   (0x0010)  MISSED
};

/// Class /Script/LiveLinkMovieScene.MovieSceneLiveLinkSubSectionAnimation
/// Size: 0x0010 (0x000050 - 0x000060)
class UMovieSceneLiveLinkSubSectionAnimation : public UMovieSceneLiveLinkSubSection : UMovieSceneLiveLinkSubSection
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0050   (0x0010)  MISSED
};

/// Class /Script/LiveLinkMovieScene.MovieSceneLiveLinkSubSectionBasicRole
/// Size: 0x0010 (0x000050 - 0x000060)
class UMovieSceneLiveLinkSubSectionBasicRole : public UMovieSceneLiveLinkSubSection : UMovieSceneLiveLinkSubSection
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0050   (0x0010)  MISSED
};

/// Class /Script/LiveLinkMovieScene.MovieSceneLiveLinkSubSectionProperties
/// Size: 0x0010 (0x000050 - 0x000060)
class UMovieSceneLiveLinkSubSectionProperties : public UMovieSceneLiveLinkSubSection : UMovieSceneLiveLinkSubSection
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0050   (0x0010)  MISSED
};

/// Class /Script/LiveLinkMovieScene.MovieSceneLiveLinkTrack
/// Size: 0x0010 (0x0000C8 - 0x0000D8)
class UMovieSceneLiveLinkTrack : public UMovieScenePropertyTrack : UMovieScenePropertyTrack
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x00C8   (0x0008)  MISSED
	UClass*                                            TrackRole;                                                  // 0x00D0   (0x0008)  
};

