
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package EasyVoiceChat.

/// Class /Script/EasyVoiceChat.VoiceFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UVoiceFunctionLibrary : public UBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/EasyVoiceChat.VoipAudioComponent
/// Size: 0x0020 (0x0007F0 - 0x000810)
class UVoipAudioComponent : public UVoipListenerSynthComponent : UVoipListenerSynthComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x07F0   (0x0020)  MISSED
};

/// Class /Script/EasyVoiceChat.VoipManagerComponent
/// Size: 0x00D8 (0x0000A0 - 0x000178)
class UVoipManagerComponent : public UActorComponent : UActorComponent
{ 
public:
	FMulticastInlineDelegate                           VoiceGenerated;                                             // 0x00A0   (0x0010)  
	FMulticastInlineDelegate                           PlayerTalking;                                              // 0x00B0   (0x0010)  
	FMulticastInlineDelegate                           PlayerStopTalking;                                          // 0x00C0   (0x0010)  
	unsigned char                                      UnknownData00_5[0x8C];                                      // 0x00D0   (0x008C)  MISSED
	float                                              StopTalkingThreshold;                                       // 0x015C   (0x0004)  
	bool                                               bAutoSetConsoleVariables;                                   // 0x0160   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0161   (0x0003)  MISSED
	float                                              SilenceDetectionThreshold;                                  // 0x0164   (0x0004)  
	float                                              NoiseGateThreshold;                                         // 0x0168   (0x0004)  
	float                                              VoiceBufferDelay;                                           // 0x016C   (0x0004)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0170   (0x0008)  MISSED


	/// Functions
	// Function /Script/EasyVoiceChat.VoipManagerComponent.OnVoiceGeneratedBP
	void OnVoiceGeneratedBP(TArray<char>& VoiceBuffer, float MicLevel);                                                      // [0x2407bf0] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/EasyVoiceChat.VoipManagerComponent.OnPlayerStopTalking
	void OnPlayerStopTalking();                                                                                              // [0x2407bf0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/EasyVoiceChat.VoipManagerComponent.OnPlayerStartTalking
	void OnPlayerStartTalking();                                                                                             // [0x2407bf0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/EasyVoiceChat.VoipManagerComponent.InitVoice
	bool InitVoice(AController* Controller);                                                                                 // [0xc13230] Final|Native|Public|BlueprintCallable 
	// Function /Script/EasyVoiceChat.VoipManagerComponent.GetCaptureDevices
	TArray<FString> GetCaptureDevices();                                                                                     // [0xc13150] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/EasyVoiceChat.VoipManagerComponent.ChangeAudioCaptureDevice
	bool ChangeAudioCaptureDevice(FString NewDeviceName);                                                                    // [0xc12ec0] Final|Native|Public|BlueprintCallable 
};

