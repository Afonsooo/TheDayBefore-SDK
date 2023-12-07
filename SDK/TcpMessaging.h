
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package TcpMessaging.

/// Class /Script/TcpMessaging.TcpMessagingSettings
/// Size: 0x0038 (0x000028 - 0x000060)
class UTcpMessagingSettings : public UObject : UObject
{ 
public:
	bool                                               EnableTransport;                                            // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0029   (0x0007)  MISSED
	FString                                            ListenEndpoint;                                             // 0x0030   (0x0010)  
	TArray<FString>                                    ConnectToEndpoints;                                         // 0x0040   (0x0010)  
	int32_t                                            ConnectionRetryDelay;                                       // 0x0050   (0x0004)  
	int32_t                                            ConnectionRetryPeriod;                                      // 0x0054   (0x0004)  
	bool                                               bStopServiceWhenAppDeactivates;                             // 0x0058   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0059   (0x0007)  MISSED
};

