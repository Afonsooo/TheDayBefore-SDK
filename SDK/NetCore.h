
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package NetCore.

/// Struct /Script/NetCore.FastArraySerializerItem
/// Size: 0x000C (0x000000 - 0x00000C)
struct FFastArraySerializerItem
{ 
	int32_t                                            ReplicationID;                                              // 0x0000   (0x0004)  
	int32_t                                            ReplicationKey;                                             // 0x0004   (0x0004)  
	int32_t                                            MostRecentArrayReplicationKey;                              // 0x0008   (0x0004)  
};

/// Struct /Script/NetCore.FastArraySerializer
/// Size: 0x0108 (0x000000 - 0x000108)
struct FFastArraySerializer
{ 
	unsigned char                                      UnknownData00_2[0x54];                                      // 0x0000   (0x0054)  MISSED
	int32_t                                            ArrayReplicationKey;                                        // 0x0054   (0x0004)  
	unsigned char                                      UnknownData01_5[0xA8];                                      // 0x0058   (0x00A8)  MISSED
	EFastArraySerializerDeltaFlags                     DeltaFlags;                                                 // 0x0100   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0101   (0x0007)  MISSED
};

/// Struct /Script/NetCore.NetAnalyticsDataConfig
/// Size: 0x000C (0x000000 - 0x00000C)
struct FNetAnalyticsDataConfig
{ 
	FName                                              DataName;                                                   // 0x0000   (0x0008)  
	bool                                               bEnabled;                                                   // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0009   (0x0003)  MISSED
};

/// Struct /Script/NetCore.StateStruct
/// Size: 0x0018 (0x000000 - 0x000018)
struct FStateStruct
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
	FString                                            StateName;                                                  // 0x0008   (0x0010)  
};

/// Struct /Script/NetCore.EscalationState
/// Size: 0x0018 (0x000018 - 0x000030)
struct FEscalationState : FStateStruct
{ 
	bool                                               bLogEscalate;                                               // 0x0018   (0x0001)  
	bool                                               bDormant;                                                   // 0x0019   (0x0001)  
	int16_t                                            CooloffTime;                                                // 0x001A   (0x0002)  
	int16_t                                            AutoEscalateTime;                                           // 0x001C   (0x0002)  
	int8_t                                             HighestTimePeriod;                                          // 0x001E   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x001F   (0x0001)  MISSED
	TArray<int8_t>                                     AllTimePeriods;                                             // 0x0020   (0x0010)  
};

/// Struct /Script/NetCore.NetFaultState
/// Size: 0x0010 (0x000030 - 0x000040)
struct FNetFaultState : FEscalationState
{ 
	bool                                               bCloseConnection;                                           // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0031   (0x0001)  MISSED
	int16_t                                            EscalateQuotaFaultsPerPeriod;                               // 0x0032   (0x0002)  
	int8_t                                             EscalateQuotaFaultPercentPerPeriod;                         // 0x0034   (0x0001)  
	unsigned char                                      UnknownData01_5[0x1];                                       // 0x0035   (0x0001)  MISSED
	int16_t                                            DescalateQuotaFaultsPerPeriod;                              // 0x0036   (0x0002)  
	int8_t                                             DescalateQuotaFaultPercentPerPeriod;                        // 0x0038   (0x0001)  
	int8_t                                             EscalateQuotaTimePeriod;                                    // 0x0039   (0x0001)  
	unsigned char                                      UnknownData02_6[0x6];                                       // 0x003A   (0x0006)  MISSED
};

/// Class /Script/NetCore.NetAnalyticsAggregatorConfig
/// Size: 0x0010 (0x000028 - 0x000038)
class UNetAnalyticsAggregatorConfig : public UObject : UObject
{ 
public:
	TArray<FNetAnalyticsDataConfig>                    NetAnalyticsData;                                           // 0x0028   (0x0010)  
};

/// Class /Script/NetCore.StatePerObjectConfig
/// Size: 0x0040 (0x000028 - 0x000068)
class UStatePerObjectConfig : public UObject : UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x28];                                      // 0x0028   (0x0028)  MISSED
	FString                                            PerObjectConfigSection;                                     // 0x0050   (0x0010)  
	bool                                               bEnabled;                                                   // 0x0060   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0061   (0x0007)  MISSED
};

/// Class /Script/NetCore.EscalationManagerConfig
/// Size: 0x0020 (0x000068 - 0x000088)
class UEscalationManagerConfig : public UStatePerObjectConfig : UStatePerObjectConfig
{ 
public:
	TArray<FString>                                    EscalationSeverity;                                         // 0x0068   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0078   (0x0010)  MISSED
};

/// Enum /Script/NetCore.ENetworkFailure
/// Size: 0x12
enum ENetworkFailure : uint8_t
{
	ENetworkFailure__NetDriverAlreadyExists0                                         = 0,
	ENetworkFailure__NetDriverCreateFailure1                                         = 1,
	ENetworkFailure__NetDriverListenFailure2                                         = 2,
	ENetworkFailure__ConnectionLost3                                                 = 3,
	ENetworkFailure__ConnectionTimeout4                                              = 4,
	ENetworkFailure__FailureReceived5                                                = 5,
	ENetworkFailure__OutdatedClient6                                                 = 6,
	ENetworkFailure__OutdatedServer7                                                 = 7,
	ENetworkFailure__PendingConnectionFailure8                                       = 8,
	ENetworkFailure__NetGuidMismatch9                                                = 9,
	ENetworkFailure__NetChecksumMismatch10                                           = 10,
	ENetworkFailure__ENetworkFailure_MAX11                                           = 11
};

/// Enum /Script/NetCore.EFastArraySerializerDeltaFlags
/// Size: 0x05
enum EFastArraySerializerDeltaFlags : uint8_t
{
	EFastArraySerializerDeltaFlags__None0                                            = 0,
	EFastArraySerializerDeltaFlags__HasBeenSerialized1                               = 1,
	EFastArraySerializerDeltaFlags__HasDeltaBeenRequested2                           = 2,
	EFastArraySerializerDeltaFlags__IsUsingDeltaSerialization3                       = 4,
	EFastArraySerializerDeltaFlags__EFastArraySerializerDeltaFlags_MAX4              = 5
};

/// Enum /Script/NetCore.ENetCloseResult
/// Size: 0x110
enum ENetCloseResult : uint8_t
{
	ENetCloseResult__NetDriverAlreadyExists0                                         = 0,
	ENetCloseResult__NetDriverCreateFailure1                                         = 1,
	ENetCloseResult__NetDriverListenFailure2                                         = 2,
	ENetCloseResult__ConnectionLost3                                                 = 3,
	ENetCloseResult__ConnectionTimeout4                                              = 4,
	ENetCloseResult__FailureReceived5                                                = 5,
	ENetCloseResult__OutdatedClient6                                                 = 6,
	ENetCloseResult__OutdatedServer7                                                 = 7,
	ENetCloseResult__PendingConnectionFailure8                                       = 8,
	ENetCloseResult__NetGuidMismatch9                                                = 9,
	ENetCloseResult__NetChecksumMismatch10                                           = 10,
	ENetCloseResult__SecurityMalformedPacket11                                       = 11,
	ENetCloseResult__SecurityInvalidData12                                           = 12,
	ENetCloseResult__SecurityClosed13                                                = 13,
	ENetCloseResult__Unknown14                                                       = 14,
	ENetCloseResult__Success15                                                       = 15,
	ENetCloseResult__Extended16                                                      = 16,
	ENetCloseResult__HostClosedConnection17                                          = 17,
	ENetCloseResult__Disconnect18                                                    = 18,
	ENetCloseResult__Upgrade19                                                       = 19,
	ENetCloseResult__PreLoginFailure20                                               = 20,
	ENetCloseResult__JoinFailure21                                                   = 21,
	ENetCloseResult__JoinSplitFailure22                                              = 22,
	ENetCloseResult__AddressResolutionFailed23                                       = 23,
	ENetCloseResult__RPCDoS24                                                        = 24,
	ENetCloseResult__Cleanup25                                                       = 25,
	ENetCloseResult__MissingLevelPackage26                                           = 26,
	ENetCloseResult__PacketHandlerIncomingError27                                    = 27,
	ENetCloseResult__ZeroLastByte28                                                  = 28,
	ENetCloseResult__ZeroSize29                                                      = 29,
	ENetCloseResult__ReadHeaderFail30                                                = 30,
	ENetCloseResult__ReadHeaderExtraFail31                                           = 31,
	ENetCloseResult__AckSequenceMismatch32                                           = 32,
	ENetCloseResult__BunchBadChannelIndex33                                          = 33,
	ENetCloseResult__BunchChannelNameFail34                                          = 34,
	ENetCloseResult__BunchWrongChannelType35                                         = 35,
	ENetCloseResult__BunchHeaderOverflow36                                           = 36,
	ENetCloseResult__BunchDataOverflow37                                             = 37,
	ENetCloseResult__BunchServerPackageMapExports38                                  = 38,
	ENetCloseResult__BunchPrematureControlChannel39                                  = 39,
	ENetCloseResult__BunchPrematureChannel40                                         = 40,
	ENetCloseResult__BunchPrematureControlClose41                                    = 41,
	ENetCloseResult__UnknownChannelType42                                            = 42,
	ENetCloseResult__PrematureSend43                                                 = 43,
	ENetCloseResult__CorruptData44                                                   = 44,
	ENetCloseResult__SocketSendFailure45                                             = 45,
	ENetCloseResult__BadChildConnectionIndex46                                       = 46,
	ENetCloseResult__LogLimitInstant47                                               = 47,
	ENetCloseResult__LogLimitSustained48                                             = 48,
	ENetCloseResult__EncryptionFailure49                                             = 49,
	ENetCloseResult__EncryptionTokenMissing50                                        = 50,
	ENetCloseResult__ReceivedNetGUIDBunchFail51                                      = 51,
	ENetCloseResult__MaxReliableExceeded52                                           = 52,
	ENetCloseResult__ReceivedNextBunchFail53                                         = 53,
	ENetCloseResult__ReceivedNextBunchQueueFail54                                    = 54,
	ENetCloseResult__PartialInitialReliableDestroy55                                 = 55,
	ENetCloseResult__PartialMergeReliableDestroy56                                   = 56,
	ENetCloseResult__PartialInitialNonByteAligned57                                  = 57,
	ENetCloseResult__PartialNonByteAligned58                                         = 58,
	ENetCloseResult__PartialFinalPackageMapExports59                                 = 59,
	ENetCloseResult__PartialTooLarge60                                               = 60,
	ENetCloseResult__AlreadyOpen61                                                   = 61,
	ENetCloseResult__ReliableBeforeOpen62                                            = 62,
	ENetCloseResult__ReliableBufferOverflow63                                        = 63,
	ENetCloseResult__RPCReliableBufferOverflow64                                     = 64,
	ENetCloseResult__ControlChannelClose65                                           = 65,
	ENetCloseResult__ControlChannelEndianCheck66                                     = 66,
	ENetCloseResult__ControlChannelPlayerChannelFail67                               = 67,
	ENetCloseResult__ControlChannelMessageUnknown68                                  = 68,
	ENetCloseResult__ControlChannelMessageFail69                                     = 69,
	ENetCloseResult__ControlChannelMessagePayloadFail70                              = 70,
	ENetCloseResult__ControlChannelBunchOverflowed71                                 = 71,
	ENetCloseResult__ControlChannelQueueBunchOverflowed72                            = 72,
	ENetCloseResult__ClientHasMustBeMappedGUIDs73                                    = 73,
	ENetCloseResult__ClientSentDestructionInfo74                                     = 74,
	ENetCloseResult__UnregisteredMustBeMappedGUID75                                  = 75,
	ENetCloseResult__ObjectReplicatorReceivedBunchFail76                             = 76,
	ENetCloseResult__ContentBlockFail77                                              = 77,
	ENetCloseResult__ContentBlockHeaderRepLayoutFail78                               = 78,
	ENetCloseResult__ContentBlockHeaderIsActorFail79                                 = 79,
	ENetCloseResult__ContentBlockHeaderObjFail80                                     = 80,
	ENetCloseResult__ContentBlockHeaderPrematureEnd81                                = 81,
	ENetCloseResult__ContentBlockHeaderSubObjectActor82                              = 82,
	ENetCloseResult__ContentBlockHeaderBadParent83                                   = 83,
	ENetCloseResult__ContentBlockHeaderInvalidCreate84                               = 84,
	ENetCloseResult__ContentBlockHeaderStablyNamedFail85                             = 85,
	ENetCloseResult__ContentBlockHeaderNoSubObjectClass86                            = 86,
	ENetCloseResult__ContentBlockHeaderUObjectSubObject87                            = 87,
	ENetCloseResult__ContentBlockHeaderAActorSubObject88                             = 88,
	ENetCloseResult__ContentBlockHeaderFail89                                        = 89,
	ENetCloseResult__ContentBlockPayloadBitsFail90                                   = 90,
	ENetCloseResult__FieldHeaderRepIndex91                                           = 91,
	ENetCloseResult__FieldHeaderBadRepIndex92                                        = 92,
	ENetCloseResult__FieldHeaderPayloadBitsFail93                                    = 93,
	ENetCloseResult__FieldPayloadFail94                                              = 94,
	ENetCloseResult__BeaconControlFlowError95                                        = 95,
	ENetCloseResult__BeaconUnableToParsePacket96                                     = 96,
	ENetCloseResult__BeaconAuthenticationFailure97                                   = 97,
	ENetCloseResult__BeaconLoginInvalidIdError98                                     = 98,
	ENetCloseResult__BeaconLoginInvalidAuthHandlerError99                            = 99,
	ENetCloseResult__BeaconAuthError100                                              = 100,
	ENetCloseResult__BeaconSpawnClientWorldPackageNameError101                       = 101,
	ENetCloseResult__BeaconSpawnExistingActorError102                                = 102,
	ENetCloseResult__BeaconSpawnFailureError103                                      = 103,
	ENetCloseResult__BeaconSpawnNetGUIDAckNoActor104                                 = 104,
	ENetCloseResult__BeaconSpawnNetGUIDAckNoHost105                                  = 105,
	ENetCloseResult__BeaconSpawnUnexpectedError106                                   = 106,
	ENetCloseResult__FaultDisconnect107                                              = 107,
	ENetCloseResult__NotRecoverable108                                               = 108,
	ENetCloseResult__ENetCloseResult_MAX109                                          = 109
};

