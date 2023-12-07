
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package TakeMovieScene.

/// Class /Script/TakeMovieScene.MovieSceneTakeSection
/// Size: 0x0620 (0x0000F0 - 0x000710)
class UMovieSceneTakeSection : public UMovieSceneSection : UMovieSceneSection
{ 
public:
	FMovieSceneIntegerChannel                          HoursCurve;                                                 // 0x00F0   (0x0100)  
	FMovieSceneIntegerChannel                          MinutesCurve;                                               // 0x01F0   (0x0100)  
	FMovieSceneIntegerChannel                          SecondsCurve;                                               // 0x02F0   (0x0100)  
	FMovieSceneIntegerChannel                          FramesCurve;                                                // 0x03F0   (0x0100)  
	FMovieSceneFloatChannel                            SubFramesCurve;                                             // 0x04F0   (0x0110)  
	FMovieSceneStringChannel                           Slate;                                                      // 0x0600   (0x0110)  
};

/// Class /Script/TakeMovieScene.MovieSceneTakeSettings
/// Size: 0x0060 (0x000028 - 0x000088)
class UMovieSceneTakeSettings : public UObject : UObject
{ 
public:
	FString                                            HoursName;                                                  // 0x0028   (0x0010)  
	FString                                            MinutesName;                                                // 0x0038   (0x0010)  
	FString                                            SecondsName;                                                // 0x0048   (0x0010)  
	FString                                            FramesName;                                                 // 0x0058   (0x0010)  
	FString                                            SubFramesName;                                              // 0x0068   (0x0010)  
	FString                                            SlateName;                                                  // 0x0078   (0x0010)  
};

/// Class /Script/TakeMovieScene.MovieSceneTakeTrack
/// Size: 0x0010 (0x000098 - 0x0000A8)
class UMovieSceneTakeTrack : public UMovieSceneNameableTrack : UMovieSceneNameableTrack
{ 
public:
	TArray<UMovieSceneSection*>                        Sections;                                                   // 0x0098   (0x0010)  
};

