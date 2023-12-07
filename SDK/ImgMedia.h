
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package ImgMedia.

/// Struct /Script/ImgMedia.ImgMediaSourceCustomizationSequenceProxy
/// Size: 0x0001 (0x000000 - 0x000001)
struct FImgMediaSourceCustomizationSequenceProxy
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Class /Script/ImgMedia.ImgMediaSource
/// Size: 0x0048 (0x000088 - 0x0000D0)
class UImgMediaSource : public UBaseMediaSource : UBaseMediaSource
{ 
public:
	bool                                               IsPathRelativeToProjectRoot;                                // 0x0088   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0089   (0x0003)  MISSED
	FFrameRate                                         FrameRateOverride;                                          // 0x008C   (0x0008)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0094   (0x0004)  MISSED
	FString                                            ProxyOverride;                                              // 0x0098   (0x0010)  
	bool                                               bFillGapsInSequence;                                        // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x00A9   (0x0007)  MISSED
	FDirectoryPath                                     SequencePath;                                               // 0x00B0   (0x0010)  
	unsigned char                                      UnknownData03_6[0x10];                                      // 0x00C0   (0x0010)  MISSED


	/// Functions
	// Function /Script/ImgMedia.ImgMediaSource.SetTokenizedSequencePath
	void SetTokenizedSequencePath(FString Path);                                                                             // [0x1b2aa90] Final|Native|Public|BlueprintCallable 
	// Function /Script/ImgMedia.ImgMediaSource.SetSequencePath
	void SetSequencePath(FString Path);                                                                                      // [0x1b2a9f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ImgMedia.ImgMediaSource.SetMipLevelDistance
	void SetMipLevelDistance(float Distance);                                                                                // [0x1b2a980] Final|Native|Public|BlueprintCallable 
	// Function /Script/ImgMedia.ImgMediaSource.RemoveTargetObject
	void RemoveTargetObject(AActor* InActor);                                                                                // [0x1b2a810] Final|Native|Public|BlueprintCallable 
	// Function /Script/ImgMedia.ImgMediaSource.RemoveGlobalCamera
	void RemoveGlobalCamera(AActor* InActor);                                                                                // [0x1b2a540] Final|Native|Public|BlueprintCallable 
	// Function /Script/ImgMedia.ImgMediaSource.GetSequencePath
	FString GetSequencePath();                                                                                               // [0x1b2a7a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ImgMedia.ImgMediaSource.GetProxies
	void GetProxies(TArray<FString>& OutProxies);                                                                            // [0x1b2a620] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ImgMedia.ImgMediaSource.AddTargetObject
	void AddTargetObject(AActor* InActor);                                                                                   // [0x1b2a5b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ImgMedia.ImgMediaSource.AddGlobalCamera
	void AddGlobalCamera(AActor* InActor);                                                                                   // [0x1b2a540] Final|Native|Public|BlueprintCallable 
};

