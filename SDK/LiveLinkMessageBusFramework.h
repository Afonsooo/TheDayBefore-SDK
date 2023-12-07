
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package LiveLinkMessageBusFramework.

/// Struct /Script/LiveLinkMessageBusFramework.LiveLinkPingMessage
/// Size: 0x0014 (0x000000 - 0x000014)
struct FLiveLinkPingMessage
{ 
	FGuid                                              PollRequest;                                                // 0x0000   (0x0010)  
	int32_t                                            LiveLinkVersion;                                            // 0x0010   (0x0004)  
};

/// Struct /Script/LiveLinkMessageBusFramework.LiveLinkPongMessage
/// Size: 0x0040 (0x000000 - 0x000040)
struct FLiveLinkPongMessage
{ 
	FString                                            ProviderName;                                               // 0x0000   (0x0010)  
	FString                                            MachineName;                                                // 0x0010   (0x0010)  
	FGuid                                              PollRequest;                                                // 0x0020   (0x0010)  
	int32_t                                            LiveLinkVersion;                                            // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0034   (0x0004)  MISSED
	double                                             CreationPlatformTime;                                       // 0x0038   (0x0008)  
};

/// Struct /Script/LiveLinkMessageBusFramework.LiveLinkConnectMessage
/// Size: 0x0004 (0x000000 - 0x000004)
struct FLiveLinkConnectMessage
{ 
	int32_t                                            LiveLinkVersion;                                            // 0x0000   (0x0004)  
};

/// Struct /Script/LiveLinkMessageBusFramework.LiveLinkHeartbeatMessage
/// Size: 0x0001 (0x000000 - 0x000001)
struct FLiveLinkHeartbeatMessage
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/LiveLinkMessageBusFramework.LiveLinkClearSubject
/// Size: 0x0008 (0x000000 - 0x000008)
struct FLiveLinkClearSubject
{ 
	FName                                              SubjectName;                                                // 0x0000   (0x0008)  
};

/// Struct /Script/LiveLinkMessageBusFramework.LiveLinkSubjectDataMessage
/// Size: 0x0028 (0x000000 - 0x000028)
struct FLiveLinkSubjectDataMessage
{ 
	FLiveLinkRefSkeleton                               RefSkeleton;                                                // 0x0000   (0x0020)  
	FName                                              SubjectName;                                                // 0x0020   (0x0008)  
};

/// Struct /Script/LiveLinkMessageBusFramework.LiveLinkSubjectFrameMessage
/// Size: 0x0090 (0x000000 - 0x000090)
struct FLiveLinkSubjectFrameMessage
{ 
	FName                                              SubjectName;                                                // 0x0000   (0x0008)  
	TArray<FTransform>                                 Transforms;                                                 // 0x0008   (0x0010)  
	TArray<FLiveLinkCurveElement>                      Curves;                                                     // 0x0018   (0x0010)  
	FLiveLinkMetaData                                  Metadata;                                                   // 0x0028   (0x0060)  
	double                                             Time;                                                       // 0x0088   (0x0008)  
};

