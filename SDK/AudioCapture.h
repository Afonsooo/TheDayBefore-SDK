
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package AudioCapture.

/// Struct /Script/AudioCapture.AudioInputDeviceInfo
/// Size: 0x0030 (0x000000 - 0x000030)
struct FAudioInputDeviceInfo
{ 
	FString                                            DeviceName;                                                 // 0x0000   (0x0010)  
	FString                                            DeviceID;                                                   // 0x0010   (0x0010)  
	int32_t                                            InputChannels;                                              // 0x0020   (0x0004)  
	int32_t                                            PreferredSampleRate;                                        // 0x0024   (0x0004)  
	bool                                               bSupportsHardwareAEC : 1;                                   // 0x0028:0 (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0029   (0x0007)  MISSED
};

/// Struct /Script/AudioCapture.AudioCaptureDeviceInfo
/// Size: 0x0010 (0x000000 - 0x000010)
struct FAudioCaptureDeviceInfo
{ 
	FName                                              DeviceName;                                                 // 0x0000   (0x0008)  
	int32_t                                            NumInputChannels;                                           // 0x0008   (0x0004)  
	int32_t                                            SampleRate;                                                 // 0x000C   (0x0004)  
};

/// Class /Script/AudioCapture.AudioCapture
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UAudioCapture : public UAudioGenerator : UAudioGenerator
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00A8   (0x0008)  MISSED
};

/// Class /Script/AudioCapture.AudioCaptureFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UAudioCaptureFunctionLibrary : public UBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/AudioCapture.AudioCaptureBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UAudioCaptureBlueprintLibrary : public UBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/AudioCapture.AudioCaptureComponent
/// Size: 0x00C0 (0x000790 - 0x000850)
class UAudioCaptureComponent : public USynthComponent : USynthComponent
{ 
public:
	int32_t                                            JitterLatencyFrames;                                        // 0x0790   (0x0004)  
	unsigned char                                      UnknownData00_6[0xBC];                                      // 0x0794   (0x00BC)  MISSED
};

