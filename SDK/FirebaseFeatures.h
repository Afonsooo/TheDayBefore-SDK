
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package FirebaseFeatures.

/// Struct /Script/FirebaseFeatures.Credential
/// Size: 0x0008 (0x000000 - 0x000008)
struct FCredential
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/FirebaseFeatures.FirestoreDocumentSnapshot
/// Size: 0x0010 (0x000000 - 0x000010)
struct FFirestoreDocumentSnapshot
{ 
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/FirebaseFeatures.FirestoreTransaction
/// Size: 0x0008 (0x000000 - 0x000008)
struct FFirestoreTransaction
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/FirebaseFeatures.AppleSignInCredential
/// Size: 0x0080 (0x000000 - 0x000080)
struct FAppleSignInCredential
{ 
	FString                                            IdentityToken;                                              // 0x0000   (0x0010)  
	FString                                            AuthorizationCode;                                          // 0x0010   (0x0010)  
	FString                                            State;                                                      // 0x0020   (0x0010)  
	FString                                            User;                                                       // 0x0030   (0x0010)  
	TArray<FString>                                    AuthorizedScopes;                                           // 0x0040   (0x0010)  
	FString                                            FullName;                                                   // 0x0050   (0x0010)  
	FString                                            Email;                                                      // 0x0060   (0x0010)  
	FString                                            Nonce;                                                      // 0x0070   (0x0010)  
};

/// Struct /Script/FirebaseFeatures.FirebaseStorageController
/// Size: 0x0001 (0x000000 - 0x000001)
struct FFirebaseStorageController
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/FirebaseFeatures.FirebaseVariant
/// Size: 0x0018 (0x000000 - 0x000018)
struct FFirebaseVariant
{ 
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0000   (0x0018)  MISSED
};

/// Struct /Script/FirebaseFeatures.GeneratedDynamicLink
/// Size: 0x0030 (0x000000 - 0x000030)
struct FGeneratedDynamicLink
{ 
	FString                                            URL;                                                        // 0x0000   (0x0010)  
	TArray<FString>                                    Warnings;                                                   // 0x0010   (0x0010)  
	FString                                            Error;                                                      // 0x0020   (0x0010)  
};

/// Struct /Script/FirebaseFeatures.FirebaseInstallationsAuthToken
/// Size: 0x0018 (0x000000 - 0x000018)
struct FFirebaseInstallationsAuthToken
{ 
	FString                                            AuthToken;                                                  // 0x0000   (0x0010)  
	FDateTime                                          Expiration;                                                 // 0x0010   (0x0008)  
};

/// Struct /Script/FirebaseFeatures.FirebaseMessage
/// Size: 0x01F0 (0x000000 - 0x0001F0)
struct FFirebaseMessage
{ 
	FString                                            From;                                                       // 0x0000   (0x0010)  
	FString                                            To;                                                         // 0x0010   (0x0010)  
	FString                                            CollapseKey;                                                // 0x0020   (0x0010)  
	TMap<FString, FString>                             Data;                                                       // 0x0030   (0x0050)  
	FString                                            RawData;                                                    // 0x0080   (0x0010)  
	FString                                            MessageId;                                                  // 0x0090   (0x0010)  
	FString                                            MessageType;                                                // 0x00A0   (0x0010)  
	FString                                            Priority;                                                   // 0x00B0   (0x0010)  
	int32_t                                            TimeToLive;                                                 // 0x00C0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00C4   (0x0004)  MISSED
	FString                                            Error;                                                      // 0x00C8   (0x0010)  
	FString                                            ErrorDescription;                                           // 0x00D8   (0x0010)  
	FFirebaseNotification                              Notification;                                               // 0x00E8   (0x00D0)  
	bool                                               bNotificationOpened;                                        // 0x01B8   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x01B9   (0x0007)  MISSED
	FString                                            Link;                                                       // 0x01C0   (0x0010)  
	FString                                            OriginalPriority;                                           // 0x01D0   (0x0010)  
	int64_t                                            SentTime;                                                   // 0x01E0   (0x0008)  
	bool                                               bIsValid;                                                   // 0x01E8   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x01E9   (0x0007)  MISSED
};

/// Struct /Script/FirebaseFeatures.FirebaseNotification
/// Size: 0x00D0 (0x000000 - 0x0000D0)
struct FFirebaseNotification
{ 
	FString                                            Title;                                                      // 0x0000   (0x0010)  
	FString                                            Body;                                                       // 0x0010   (0x0010)  
	FString                                            Icon;                                                       // 0x0020   (0x0010)  
	FString                                            Sound;                                                      // 0x0030   (0x0010)  
	FString                                            Badge;                                                      // 0x0040   (0x0010)  
	FString                                            Tag;                                                        // 0x0050   (0x0010)  
	FString                                            Color;                                                      // 0x0060   (0x0010)  
	FString                                            ClickAction;                                                // 0x0070   (0x0010)  
	FString                                            BodyLocKey;                                                 // 0x0080   (0x0010)  
	TArray<FString>                                    BodyLocArgs;                                                // 0x0090   (0x0010)  
	FString                                            TitleLocKey;                                                // 0x00A0   (0x0010)  
	TArray<FString>                                    TitleLocArgs;                                               // 0x00B0   (0x0010)  
	FFirebaseAndroidNotificationParams                 Android;                                                    // 0x00C0   (0x0010)  
};

/// Struct /Script/FirebaseFeatures.FirebaseAndroidNotificationParams
/// Size: 0x0010 (0x000000 - 0x000010)
struct FFirebaseAndroidNotificationParams
{ 
	FString                                            ChannelId;                                                  // 0x0000   (0x0010)  
};

/// Struct /Script/FirebaseFeatures.ProviderList
/// Size: 0x0010 (0x000000 - 0x000010)
struct FProviderList
{ 
	TArray<FString>                                    Providers;                                                  // 0x0000   (0x0010)  
};

/// Struct /Script/FirebaseFeatures.SignInResult
/// Size: 0x0090 (0x000000 - 0x000090)
struct FSignInResult
{ 
	UUser*                                             User;                                                       // 0x0000   (0x0008)  
	FAdditionalUserInfo                                Info;                                                       // 0x0008   (0x0078)  
	FUserMetadata                                      Meta;                                                       // 0x0080   (0x0010)  
};

/// Struct /Script/FirebaseFeatures.UserMetadata
/// Size: 0x0010 (0x000000 - 0x000010)
struct FUserMetadata
{ 
	int64_t                                            LastSignInTimestamp;                                        // 0x0000   (0x0008)  
	int64_t                                            CreationTtimestamp;                                         // 0x0008   (0x0008)  
};

/// Struct /Script/FirebaseFeatures.AdditionalUserInfo
/// Size: 0x0078 (0x000000 - 0x000078)
struct FAdditionalUserInfo
{ 
	FString                                            ProviderId;                                                 // 0x0000   (0x0010)  
	FString                                            UserName;                                                   // 0x0010   (0x0010)  
	TMap<FFirebaseVariant, FFirebaseVariant>           Profile;                                                    // 0x0020   (0x0050)  
	FCredential                                        UpdatedCredential;                                          // 0x0070   (0x0008)  
};

/// Struct /Script/FirebaseFeatures.FirebaseStorageMetadata
/// Size: 0x0001 (0x000000 - 0x000001)
struct FFirebaseStorageMetadata
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/FirebaseFeatures.MutableData
/// Size: 0x0001 (0x000000 - 0x000001)
struct FMutableData
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/FirebaseFeatures.ForceResendingToken
/// Size: 0x0008 (0x000000 - 0x000008)
struct FForceResendingToken
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/FirebaseFeatures.FederatedOAuthProviderData
/// Size: 0x0070 (0x000000 - 0x000070)
struct FFederatedOAuthProviderData
{ 
	FString                                            ProviderId;                                                 // 0x0000   (0x0010)  
	TArray<FString>                                    Scopes;                                                     // 0x0010   (0x0010)  
	TMap<FString, FString>                             CustomParameters;                                           // 0x0020   (0x0050)  
};

/// Struct /Script/FirebaseFeatures.FederatedAuthProvider
/// Size: 0x0010 (0x000000 - 0x000010)
struct FFederatedAuthProvider
{ 
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/FirebaseFeatures.FirebaseHttpsCallableReference
/// Size: 0x0008 (0x000000 - 0x000008)
struct FFirebaseHttpsCallableReference
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/FirebaseFeatures.FirestoreSnapshotMetadata
/// Size: 0x0002 (0x000000 - 0x000002)
struct FFirestoreSnapshotMetadata
{ 
	bool                                               bHasPendingWrites;                                          // 0x0000   (0x0001)  
	bool                                               bIsFromCache;                                               // 0x0001   (0x0001)  
};

/// Struct /Script/FirebaseFeatures.GoogleAnalyticsParameters
/// Size: 0x0050 (0x000000 - 0x000050)
struct FGoogleAnalyticsParameters
{ 
	FString                                            Source;                                                     // 0x0000   (0x0010)  
	FString                                            Medium;                                                     // 0x0010   (0x0010)  
	FString                                            Campaign;                                                   // 0x0020   (0x0010)  
	FString                                            Term;                                                       // 0x0030   (0x0010)  
	FString                                            Content;                                                    // 0x0040   (0x0010)  
};

/// Struct /Script/FirebaseFeatures.IOSParameters
/// Size: 0x0070 (0x000000 - 0x000070)
struct FIOSParameters
{ 
	FString                                            BundleId;                                                   // 0x0000   (0x0010)  
	FString                                            FallbackUrl;                                                // 0x0010   (0x0010)  
	FString                                            CustomScheme;                                               // 0x0020   (0x0010)  
	FString                                            IpadFallbackUrl;                                            // 0x0030   (0x0010)  
	FString                                            IpadBundleId;                                               // 0x0040   (0x0010)  
	FString                                            AppStoreId;                                                 // 0x0050   (0x0010)  
	FString                                            MinimumVersion;                                             // 0x0060   (0x0010)  
};

/// Struct /Script/FirebaseFeatures.ITunesConnectAnalyticsParameters
/// Size: 0x0030 (0x000000 - 0x000030)
struct FITunesConnectAnalyticsParameters
{ 
	FString                                            ProviderToken;                                              // 0x0000   (0x0010)  
	FString                                            AffiliateToken;                                             // 0x0010   (0x0010)  
	FString                                            CampaignToken;                                              // 0x0020   (0x0010)  
};

/// Struct /Script/FirebaseFeatures.AndroidParameters
/// Size: 0x0028 (0x000000 - 0x000028)
struct FAndroidParameters
{ 
	FString                                            PackageName;                                                // 0x0000   (0x0010)  
	FString                                            FallbackUrl;                                                // 0x0010   (0x0010)  
	int32_t                                            MinimumVersion;                                             // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/FirebaseFeatures.SocialMetaTagParameters
/// Size: 0x0030 (0x000000 - 0x000030)
struct FSocialMetaTagParameters
{ 
	FString                                            Title;                                                      // 0x0000   (0x0010)  
	FString                                            Description;                                                // 0x0010   (0x0010)  
	FString                                            ImageUrl;                                                   // 0x0020   (0x0010)  
};

/// Struct /Script/FirebaseFeatures.DynamicLinkOptions
/// Size: 0x0001 (0x000000 - 0x000001)
struct FDynamicLinkOptions
{ 
	EPathLength                                        PathLength;                                                 // 0x0000   (0x0001)  
};

/// Struct /Script/FirebaseFeatures.DynamicLinkComponents
/// Size: 0x0168 (0x000000 - 0x000168)
struct FDynamicLinkComponents
{ 
	FString                                            Link;                                                       // 0x0000   (0x0010)  
	FString                                            DomainUriPrefix;                                            // 0x0010   (0x0010)  
	FGoogleAnalyticsParameters                         GoogleAnalyticsParameters;                                  // 0x0020   (0x0050)  
	FIOSParameters                                     IOSParameters;                                              // 0x0070   (0x0070)  
	FITunesConnectAnalyticsParameters                  ITunesConnectAnalyticsParameters;                           // 0x00E0   (0x0030)  
	FAndroidParameters                                 AndroidParameters;                                          // 0x0110   (0x0028)  
	FSocialMetaTagParameters                           SocialMetaTagParameters;                                    // 0x0138   (0x0030)  
};

/// Struct /Script/FirebaseFeatures.AdSize
/// Size: 0x0008 (0x000000 - 0x000008)
struct FAdSize
{ 
	int32_t                                            Height;                                                     // 0x0000   (0x0004)  
	int32_t                                            Width;                                                      // 0x0004   (0x0004)  
};

/// Struct /Script/FirebaseFeatures.AdMobBoundingBox
/// Size: 0x0010 (0x000000 - 0x000010)
struct FAdMobBoundingBox
{ 
	int32_t                                            Height;                                                     // 0x0000   (0x0004)  
	int32_t                                            Width;                                                      // 0x0004   (0x0004)  
	int32_t                                            X;                                                          // 0x0008   (0x0004)  
	int32_t                                            Y;                                                          // 0x000C   (0x0004)  
};

/// Struct /Script/FirebaseFeatures.AdMobAdRequest
/// Size: 0x0080 (0x000000 - 0x000080)
struct FAdMobAdRequest
{ 
	TArray<FString>                                    TestDeviceIds;                                              // 0x0000   (0x0010)  
	TArray<FString>                                    Keywords;                                                   // 0x0010   (0x0010)  
	TMap<FString, FString>                             Extras;                                                     // 0x0020   (0x0050)  
	int32_t                                            BirthdayDay;                                                // 0x0070   (0x0004)  
	int32_t                                            BirthdayMonth;                                              // 0x0074   (0x0004)  
	int32_t                                            BirthdayYear;                                               // 0x0078   (0x0004)  
	EAdMobGender                                       Gender;                                                     // 0x007C   (0x0001)  
	EAdMobChildDirectedTreatmentState                  TaggedForChildDirectedTreatment;                            // 0x007D   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x007E   (0x0002)  MISSED
};

/// Struct /Script/FirebaseFeatures.AdMobRewardItem
/// Size: 0x0018 (0x000000 - 0x000018)
struct FAdMobRewardItem
{ 
	float                                              Amount;                                                     // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	FString                                            RewardType;                                                 // 0x0008   (0x0010)  
};

/// Struct /Script/FirebaseFeatures.FirestoreFieldPath
/// Size: 0x0008 (0x000000 - 0x000008)
struct FFirestoreFieldPath
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/FirebaseFeatures.FirestoreTimestamp
/// Size: 0x0010 (0x000000 - 0x000010)
struct FFirestoreTimestamp
{ 
	int64_t                                            Seconds;                                                    // 0x0000   (0x0008)  
	int32_t                                            Nanoseconds;                                                // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Struct /Script/FirebaseFeatures.FirestoreGeoPoint
/// Size: 0x0008 (0x000000 - 0x000008)
struct FFirestoreGeoPoint
{ 
	float                                              Latitude;                                                   // 0x0000   (0x0004)  
	float                                              Longitude;                                                  // 0x0004   (0x0004)  
};

/// Struct /Script/FirebaseFeatures.FirestoreFieldValue
/// Size: 0x0008 (0x000000 - 0x000008)
struct FFirestoreFieldValue
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/FirebaseFeatures.FirebaseAppOptions
/// Size: 0x0070 (0x000000 - 0x000070)
struct FFirebaseAppOptions
{ 
	FString                                            AppID;                                                      // 0x0000   (0x0010)  
	FString                                            APIKey;                                                     // 0x0010   (0x0010)  
	FString                                            MessagingSenderID;                                          // 0x0020   (0x0010)  
	FString                                            DatabaseURL;                                                // 0x0030   (0x0010)  
	FString                                            GATrackingID;                                               // 0x0040   (0x0010)  
	FString                                            StorageBucket;                                              // 0x0050   (0x0010)  
	FString                                            ProjectID;                                                  // 0x0060   (0x0010)  
};

/// Struct /Script/FirebaseFeatures.FirebaseTrace
/// Size: 0x0060 (0x000000 - 0x000060)
struct FFirebaseTrace
{ 
	unsigned char                                      UnknownData00_1[0x60];                                      // 0x0000   (0x0060)  MISSED
};

/// Struct /Script/FirebaseFeatures.FirestoreSettings
/// Size: 0x0018 (0x000000 - 0x000018)
struct FFirestoreSettings
{ 
	FString                                            Host;                                                       // 0x0000   (0x0010)  
	bool                                               bSslEnabled;                                                // 0x0010   (0x0001)  
	bool                                               bPersistenceEnabled;                                        // 0x0011   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0012   (0x0006)  MISSED
};

/// Struct /Script/FirebaseFeatures.FirestoreSetOptions
/// Size: 0x0008 (0x000000 - 0x000008)
struct FFirestoreSetOptions
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/FirebaseFeatures.WriteBatch
/// Size: 0x0008 (0x000000 - 0x000008)
struct FWriteBatch
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/FirebaseFeatures.QuerySnapshotListenerHandle
/// Size: 0x0018 (0x000000 - 0x000018)
struct FQuerySnapshotListenerHandle
{ 
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0000   (0x0018)  MISSED
};

/// Struct /Script/FirebaseFeatures.FirebaseConfigInfo
/// Size: 0x0018 (0x000000 - 0x000018)
struct FFirebaseConfigInfo
{ 
	int64_t                                            FetchTime;                                                  // 0x0000   (0x0008)  
	EFirebaseLastFetchStatus                           LastFetchStatus;                                            // 0x0008   (0x0001)  
	EFirebaseFetchFailureReason                        LastFetchFailureReason;                                     // 0x0009   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x000A   (0x0006)  MISSED
	int64_t                                            ThrottledEndTime;                                           // 0x0010   (0x0008)  
};

/// Struct /Script/FirebaseFeatures.FirebaseValueInfo
/// Size: 0x0002 (0x000000 - 0x000002)
struct FFirebaseValueInfo
{ 
	EFirebaseValueSource                               Source;                                                     // 0x0000   (0x0001)  
	bool                                               bConversionSuccessful;                                      // 0x0001   (0x0001)  
};

/// Struct /Script/FirebaseFeatures.FirebaseConfigKeyValue
/// Size: 0x0020 (0x000000 - 0x000020)
struct FFirebaseConfigKeyValue
{ 
	FString                                            Key;                                                        // 0x0000   (0x0010)  
	FString                                            Value;                                                      // 0x0010   (0x0010)  
};

/// Struct /Script/FirebaseFeatures.FirebaseConfigKeyValueVariant
/// Size: 0x0028 (0x000000 - 0x000028)
struct FFirebaseConfigKeyValueVariant
{ 
	FString                                            Key;                                                        // 0x0000   (0x0010)  
	FFirebaseVariant                                   Value;                                                      // 0x0010   (0x0018)  
};

/// Struct /Script/FirebaseFeatures.UserProfile
/// Size: 0x0030 (0x000000 - 0x000030)
struct FUserProfile
{ 
	FString                                            DisplayName;                                                // 0x0000   (0x0010)  
	bool                                               bResetDisplayName;                                          // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0011   (0x0007)  MISSED
	FString                                            PhotoUrl;                                                   // 0x0018   (0x0010)  
	bool                                               bResetPhotoUrl;                                             // 0x0028   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0029   (0x0007)  MISSED
};

/// Struct /Script/FirebaseFeatures.UserInfoInterface
/// Size: 0x0060 (0x000000 - 0x000060)
struct FUserInfoInterface
{ 
	FString                                            Uid;                                                        // 0x0000   (0x0010)  
	FString                                            Email;                                                      // 0x0010   (0x0010)  
	FString                                            DisplayName;                                                // 0x0020   (0x0010)  
	FString                                            PhotoUrl;                                                   // 0x0030   (0x0010)  
	FString                                            ProviderId;                                                 // 0x0040   (0x0010)  
	FString                                            PhoneNumber;                                                // 0x0050   (0x0010)  
};

/// Class /Script/FirebaseFeatures.AuthMiscLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UAuthMiscLibrary : public UBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/FirebaseFeatures.FetchProvidersForEmailProxy
/// Size: 0x0030 (0x000030 - 0x000060)
class UFetchProvidersForEmailProxy : public UBlueprintAsyncActionBase : UBlueprintAsyncActionBase
{ 
public:
	FMulticastInlineDelegate                           OnProvidersFetched;                                         // 0x0030   (0x0010)  
	FMulticastInlineDelegate                           OnError;                                                    // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0050   (0x0010)  MISSED


	/// Functions
	// Function /Script/FirebaseFeatures.FetchProvidersForEmailProxy.FetchProvidersForEmail
	UFetchProvidersForEmailProxy* FetchProvidersForEmail(FString Email);                                                     // [0x15d5210] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/FirebaseFeatures.SignInWithCustomTokenProxy
/// Size: 0x0030 (0x000030 - 0x000060)
class USignInWithCustomTokenProxy : public UBlueprintAsyncActionBase : UBlueprintAsyncActionBase
{ 
public:
	FMulticastInlineDelegate                           OnSignedIn;                                                 // 0x0030   (0x0010)  
	FMulticastInlineDelegate                           OnError;                                                    // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0050   (0x0010)  MISSED


	/// Functions
	// Function /Script/FirebaseFeatures.SignInWithCustomTokenProxy.SignInWithCustomToken
	USignInWithCustomTokenProxy* SignInWithCustomToken(FString Token);                                                       // [0x15d6ef0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/FirebaseFeatures.SignInWithCredentialProxy
/// Size: 0x0028 (0x000030 - 0x000058)
class USignInWithCredentialProxy : public UBlueprintAsyncActionBase : UBlueprintAsyncActionBase
{ 
public:
	FMulticastInlineDelegate                           OnSignedIn;                                                 // 0x0030   (0x0010)  
	FMulticastInlineDelegate                           OnError;                                                    // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0050   (0x0008)  MISSED


	/// Functions
	// Function /Script/FirebaseFeatures.SignInWithCredentialProxy.SignInWithCredential
	USignInWithCredentialProxy* SignInWithCredential(FCredential& Credential);                                               // [0x15d6e40] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/FirebaseFeatures.SignInWithProviderProxy
/// Size: 0x0030 (0x000030 - 0x000060)
class USignInWithProviderProxy : public UBlueprintAsyncActionBase : UBlueprintAsyncActionBase
{ 
public:
	FMulticastInlineDelegate                           OnSignedIn;                                                 // 0x0030   (0x0010)  
	FMulticastInlineDelegate                           OnError;                                                    // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0050   (0x0010)  MISSED


	/// Functions
	// Function /Script/FirebaseFeatures.SignInWithProviderProxy.SignInWithProvider
	USignInWithProviderProxy* SignInWithProvider(FFederatedAuthProvider& AuthProvider);                                      // [0x15d7090] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/FirebaseFeatures.SignInAndRetrieveDataWithCredentialProxy
/// Size: 0x0028 (0x000030 - 0x000058)
class USignInAndRetrieveDataWithCredentialProxy : public UBlueprintAsyncActionBase : UBlueprintAsyncActionBase
{ 
public:
	FMulticastInlineDelegate                           OnSignedIn;                                                 // 0x0030   (0x0010)  
	FMulticastInlineDelegate                           OnError;                                                    // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0050   (0x0008)  MISSED


	/// Functions
	// Function /Script/FirebaseFeatures.SignInAndRetrieveDataWithCredentialProxy.SignInAndRetrieveDataWithCredential
	USignInAndRetrieveDataWithCredentialProxy* SignInAndRetrieveDataWithCredential(FCredential& Credential);                 // [0x15d6d60] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/FirebaseFeatures.SignInAnonymouslyProxy
/// Size: 0x0020 (0x000030 - 0x000050)
class USignInAnonymouslyProxy : public UBlueprintAsyncActionBase : UBlueprintAsyncActionBase
{ 
public:
	FMulticastInlineDelegate                           OnSignedIn;                                                 // 0x0030   (0x0010)  
	FMulticastInlineDelegate                           OnError;                                                    // 0x0040   (0x0010)  


	/// Functions
	// Function /Script/FirebaseFeatures.SignInAnonymouslyProxy.SignInAnonymously
	USignInAnonymouslyProxy* SignInAnonymously();                                                                            // [0x15d6e10] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/FirebaseFeatures.SignInWithEmailAndPasswordProxy
/// Size: 0x0040 (0x000030 - 0x000070)
class USignInWithEmailAndPasswordProxy : public UBlueprintAsyncActionBase : UBlueprintAsyncActionBase
{ 
public:
	FMulticastInlineDelegate                           OnSignedIn;                                                 // 0x0030   (0x0010)  
	FMulticastInlineDelegate                           OnError;                                                    // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0050   (0x0020)  MISSED


	/// Functions
	// Function /Script/FirebaseFeatures.SignInWithEmailAndPasswordProxy.SignInWithEmailAndPassword
	USignInWithEmailAndPasswordProxy* SignInWithEmailAndPassword(FString Email, FString Password);                           // [0x15d6f90] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/FirebaseFeatures.CreateUserWithEmailAndPasswordProxy
/// Size: 0x0040 (0x000030 - 0x000070)
class UCreateUserWithEmailAndPasswordProxy : public UBlueprintAsyncActionBase : UBlueprintAsyncActionBase
{ 
public:
	FMulticastInlineDelegate                           OnUserCreated;                                              // 0x0030   (0x0010)  
	FMulticastInlineDelegate                           OnError;                                                    // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0050   (0x0020)  MISSED


	/// Functions
	// Function /Script/FirebaseFeatures.CreateUserWithEmailAndPasswordProxy.CreateUserWithEmailAndPassword
	UCreateUserWithEmailAndPasswordProxy* CreateUserWithEmailAndPassword(FString Email, FString Password);                   // [0x15d50b0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/FirebaseFeatures.SendPasswordResetEmailProxy
/// Size: 0x0030 (0x000030 - 0x000060)
class USendPasswordResetEmailProxy : public UBlueprintAsyncActionBase : UBlueprintAsyncActionBase
{ 
public:
	FMulticastInlineDelegate                           OnEmailSent;                                                // 0x0030   (0x0010)  
	FMulticastInlineDelegate                           OnError;                                                    // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0050   (0x0010)  MISSED


	/// Functions
	// Function /Script/FirebaseFeatures.SendPasswordResetEmailProxy.SendPasswordResetEmail
	USendPasswordResetEmailProxy* SendPasswordResetEmail(FString Email);                                                     // [0x15d6720] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/FirebaseFeatures.ListenAuthEventsProxy
/// Size: 0x0020 (0x000030 - 0x000050)
class UListenAuthEventsProxy : public UBlueprintAsyncActionBase : UBlueprintAsyncActionBase
{ 
public:
	FMulticastInlineDelegate                           OnAuthChanged;                                              // 0x0030   (0x0010)  
	FMulticastInlineDelegate                           OnIdTokenChanged;                                           // 0x0040   (0x0010)  


	/// Functions
	// Function /Script/FirebaseFeatures.ListenAuthEventsProxy.ListenAuthEvents
	UListenAuthEventsProxy* ListenAuthEvents();                                                                              // [0x15d6440] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/FirebaseFeatures.AppleSignInGetCred
/// Size: 0x0030 (0x000030 - 0x000060)
class UAppleSignInGetCred : public UBlueprintAsyncActionBase : UBlueprintAsyncActionBase
{ 
public:
	FMulticastInlineDelegate                           OnSuccess;                                                  // 0x0030   (0x0010)  
	FMulticastInlineDelegate                           OnError;                                                    // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0050   (0x0010)  MISSED


	/// Functions
	// Function /Script/FirebaseFeatures.AppleSignInGetCred.GetCredential
	UAppleSignInGetCred* GetCredential(FString Nonce);                                                                       // [0x15d5600] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/FirebaseFeatures.AppleSignInGetNativeCred
/// Size: 0x0030 (0x000030 - 0x000060)
class UAppleSignInGetNativeCred : public UBlueprintAsyncActionBase : UBlueprintAsyncActionBase
{ 
public:
	FMulticastInlineDelegate                           OnSuccess;                                                  // 0x0030   (0x0010)  
	FMulticastInlineDelegate                           OnError;                                                    // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0050   (0x0010)  MISSED


	/// Functions
	// Function /Script/FirebaseFeatures.AppleSignInGetNativeCred.GetCredential
	UAppleSignInGetNativeCred* GetCredential(FString Nonce);                                                                 // [0x15d56f0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/FirebaseFeatures.FirestoreQuery
/// Size: 0x0008 (0x000028 - 0x000030)
class UFirestoreQuery : public UObject : UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/FirebaseFeatures.FirestoreCollectionReference
/// Size: 0x0000 (0x000030 - 0x000030)
class UFirestoreCollectionReference : public UFirestoreQuery : UFirestoreQuery
{ 
public:
};

/// Class /Script/FirebaseFeatures.CrashlyticsLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UCrashlyticsLibrary : public UBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/FirebaseFeatures.CredentialLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UCredentialLibrary : public UBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/FirebaseFeatures.GetCredentialFromGameCenterProxy
/// Size: 0x0020 (0x000030 - 0x000050)
class UGetCredentialFromGameCenterProxy : public UBlueprintAsyncActionBase : UBlueprintAsyncActionBase
{ 
public:
	FMulticastInlineDelegate                           OnSuccess;                                                  // 0x0030   (0x0010)  
	FMulticastInlineDelegate                           OnError;                                                    // 0x0040   (0x0010)  


	/// Functions
	// Function /Script/FirebaseFeatures.GetCredentialFromGameCenterProxy.GetCredentialFromGameCenter
	UGetCredentialFromGameCenterProxy* GetCredentialFromGameCenter();                                                        // [0x15da8d0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/FirebaseFeatures.VerifyPhoneNumberProxy
/// Size: 0x0060 (0x000030 - 0x000090)
class UVerifyPhoneNumberProxy : public UBlueprintAsyncActionBase : UBlueprintAsyncActionBase
{ 
public:
	FMulticastInlineDelegate                           OnVerificationCompleted;                                    // 0x0030   (0x0010)  
	FMulticastInlineDelegate                           OnVerificationFailed;                                       // 0x0040   (0x0010)  
	FMulticastInlineDelegate                           OnCodeSent;                                                 // 0x0050   (0x0010)  
	FMulticastInlineDelegate                           OnCodeRetrievalTimeout;                                     // 0x0060   (0x0010)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0070   (0x0020)  MISSED


	/// Functions
	// Function /Script/FirebaseFeatures.VerifyPhoneNumberProxy.VerifyPhoneNumber
	UVerifyPhoneNumberProxy* VerifyPhoneNumber(FString PhoneNumber, int64_t AutoVerifyTimeoutInMilliseconds, FForceResendingToken& ForceResendingToken); // [0x15dbe70] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/FirebaseFeatures.Database
/// Size: 0x0010 (0x000028 - 0x000038)
class UDatabase : public UObject : UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED
};

/// Class /Script/FirebaseFeatures.FirebaseDatabaseLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UFirebaseDatabaseLibrary : public UBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/FirebaseFeatures.DisconnectionHandlerProxybase
/// Size: 0x0008 (0x000030 - 0x000038)
class UDisconnectionHandlerProxybase : public UBlueprintAsyncActionBase : UBlueprintAsyncActionBase
{ 
public:
	UDisconnectionHandler*                             Handler;                                                    // 0x0030   (0x0008)  
};

/// Class /Script/FirebaseFeatures.DisconnectionCancelProxy
/// Size: 0x0020 (0x000038 - 0x000058)
class UDisconnectionCancelProxy : public UDisconnectionHandlerProxybase : UDisconnectionHandlerProxybase
{ 
public:
	FMulticastInlineDelegate                           OnCanceled;                                                 // 0x0038   (0x0010)  
	FMulticastInlineDelegate                           OnError;                                                    // 0x0048   (0x0010)  


	/// Functions
	// Function /Script/FirebaseFeatures.DisconnectionCancelProxy.Cancel
	UDisconnectionCancelProxy* Cancel(UDisconnectionHandler* DisconnectionHandler);                                          // [0x15da3d0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/FirebaseFeatures.DisconnectionRemoveValueProxy
/// Size: 0x0020 (0x000038 - 0x000058)
class UDisconnectionRemoveValueProxy : public UDisconnectionHandlerProxybase : UDisconnectionHandlerProxybase
{ 
public:
	FMulticastInlineDelegate                           OnRemoved;                                                  // 0x0038   (0x0010)  
	FMulticastInlineDelegate                           OnError;                                                    // 0x0048   (0x0010)  


	/// Functions
	// Function /Script/FirebaseFeatures.DisconnectionRemoveValueProxy.RemoveValue
	UDisconnectionRemoveValueProxy* RemoveValue(UDisconnectionHandler* DisconnectionHandler);                                // [0x15db140] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/FirebaseFeatures.DisconnectionSetValueProxy
/// Size: 0x0038 (0x000038 - 0x000070)
class UDisconnectionSetValueProxy : public UDisconnectionHandlerProxybase : UDisconnectionHandlerProxybase
{ 
public:
	FMulticastInlineDelegate                           OnSet;                                                      // 0x0038   (0x0010)  
	FMulticastInlineDelegate                           OnError;                                                    // 0x0048   (0x0010)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0058   (0x0018)  MISSED


	/// Functions
	// Function /Script/FirebaseFeatures.DisconnectionSetValueProxy.SetValue
	UDisconnectionSetValueProxy* SetValue(UDisconnectionHandler* DisconnectionHandler, FFirebaseVariant& Value);             // [0x15db5b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/FirebaseFeatures.DisconnectionSetValueAndPriorityProxy
/// Size: 0x0050 (0x000038 - 0x000088)
class UDisconnectionSetValueAndPriorityProxy : public UDisconnectionHandlerProxybase : UDisconnectionHandlerProxybase
{ 
public:
	FMulticastInlineDelegate                           OnSet;                                                      // 0x0038   (0x0010)  
	FMulticastInlineDelegate                           OnError;                                                    // 0x0048   (0x0010)  
	unsigned char                                      UnknownData00_6[0x30];                                      // 0x0058   (0x0030)  MISSED


	/// Functions
	// Function /Script/FirebaseFeatures.DisconnectionSetValueAndPriorityProxy.SetValueAndPriority
	UDisconnectionSetValueAndPriorityProxy* SetValueAndPriority(UDisconnectionHandler* DisconnectionHandler, FFirebaseVariant& Value, FFirebaseVariant& Priority); // [0x15db7d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/FirebaseFeatures.DisconnectionUpdateChildrenProxy
/// Size: 0x0038 (0x000038 - 0x000070)
class UDisconnectionUpdateChildrenProxy : public UDisconnectionHandlerProxybase : UDisconnectionHandlerProxybase
{ 
public:
	FMulticastInlineDelegate                           OnUpdated;                                                  // 0x0038   (0x0010)  
	FMulticastInlineDelegate                           OnError;                                                    // 0x0048   (0x0010)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0058   (0x0018)  MISSED


	/// Functions
	// Function /Script/FirebaseFeatures.DisconnectionUpdateChildrenProxy.UpdateChildren
	UDisconnectionUpdateChildrenProxy* UpdateChildren(UDisconnectionHandler* DisconnectionHandler, FFirebaseVariant& Value); // [0x15dbc50] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/FirebaseFeatures.DatabaseQueryGetValue
/// Size: 0x0028 (0x000030 - 0x000058)
class UDatabaseQueryGetValue : public UBlueprintAsyncActionBase : UBlueprintAsyncActionBase
{ 
public:
	FMulticastInlineDelegate                           OnDataReceived;                                             // 0x0030   (0x0010)  
	FMulticastInlineDelegate                           OnError;                                                    // 0x0040   (0x0010)  
	UDatabaseQuery*                                    Query;                                                      // 0x0050   (0x0008)  


	/// Functions
	// Function /Script/FirebaseFeatures.DatabaseQueryGetValue.GetValue
	UDatabaseQueryGetValue* GetValue(UDatabaseQuery* DatabaseQuery);                                                         // [0x15daa30] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/FirebaseFeatures.DatabaseReferenceProxyBase
/// Size: 0x0008 (0x000030 - 0x000038)
class UDatabaseReferenceProxyBase : public UBlueprintAsyncActionBase : UBlueprintAsyncActionBase
{ 
public:
	UDatabaseReference*                                Reference;                                                  // 0x0030   (0x0008)  
};

/// Class /Script/FirebaseFeatures.RemoveValueProxy
/// Size: 0x0020 (0x000038 - 0x000058)
class URemoveValueProxy : public UDatabaseReferenceProxyBase : UDatabaseReferenceProxyBase
{ 
public:
	FMulticastInlineDelegate                           OnRemoved;                                                  // 0x0038   (0x0010)  
	FMulticastInlineDelegate                           OnError;                                                    // 0x0048   (0x0010)  


	/// Functions
	// Function /Script/FirebaseFeatures.RemoveValueProxy.RemoveValue
	URemoveValueProxy* RemoveValue(UDatabaseReference* DatabaseReference);                                                   // [0x15db1d0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/FirebaseFeatures.RunTransactionProxy
/// Size: 0x0038 (0x000038 - 0x000070)
class URunTransactionProxy : public UDatabaseReferenceProxyBase : UDatabaseReferenceProxyBase
{ 
public:
	FMulticastInlineDelegate                           OnTrasactionOver;                                           // 0x0038   (0x0010)  
	FMulticastInlineDelegate                           OnError;                                                    // 0x0048   (0x0010)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0058   (0x0018)  MISSED


	/// Functions
	// Function /Script/FirebaseFeatures.RunTransactionProxy.RunTransaction
	URunTransactionProxy* RunTransaction(UDatabaseReference* DatabaseReference, bool bTriggerLocalEvents, FDelegateProperty& TransactionFunction); // [0x15db260] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/FirebaseFeatures.SetPriorityProxy
/// Size: 0x0038 (0x000038 - 0x000070)
class USetPriorityProxy : public UDatabaseReferenceProxyBase : UDatabaseReferenceProxyBase
{ 
public:
	FMulticastInlineDelegate                           OnSet;                                                      // 0x0038   (0x0010)  
	FMulticastInlineDelegate                           OnError;                                                    // 0x0048   (0x0010)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0058   (0x0018)  MISSED


	/// Functions
	// Function /Script/FirebaseFeatures.SetPriorityProxy.SetPriority
	USetPriorityProxy* SetPriority(UDatabaseReference* DatabaseReference, FFirebaseVariant& Priority);                       // [0x15db4a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/FirebaseFeatures.SetValueProxy
/// Size: 0x0038 (0x000038 - 0x000070)
class USetValueProxy : public UDatabaseReferenceProxyBase : UDatabaseReferenceProxyBase
{ 
public:
	FMulticastInlineDelegate                           OnSet;                                                      // 0x0038   (0x0010)  
	FMulticastInlineDelegate                           OnError;                                                    // 0x0048   (0x0010)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0058   (0x0018)  MISSED


	/// Functions
	// Function /Script/FirebaseFeatures.SetValueProxy.SetValue
	USetValueProxy* SetValue(UDatabaseReference* DatabaseReference, FFirebaseVariant& Value);                                // [0x15db6c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/FirebaseFeatures.SetValueAndPriorityProxy
/// Size: 0x0050 (0x000038 - 0x000088)
class USetValueAndPriorityProxy : public UDatabaseReferenceProxyBase : UDatabaseReferenceProxyBase
{ 
public:
	FMulticastInlineDelegate                           OnSet;                                                      // 0x0038   (0x0010)  
	FMulticastInlineDelegate                           OnError;                                                    // 0x0048   (0x0010)  
	unsigned char                                      UnknownData00_6[0x30];                                      // 0x0058   (0x0030)  MISSED


	/// Functions
	// Function /Script/FirebaseFeatures.SetValueAndPriorityProxy.SetValueAndPriority
	USetValueAndPriorityProxy* SetValueAndPriority(UDatabaseReference* DatabaseReference, FFirebaseVariant& Priority, FFirebaseVariant& Value); // [0x15db940] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/FirebaseFeatures.UpdateChildrenProxy
/// Size: 0x0038 (0x000038 - 0x000070)
class UUpdateChildrenProxy : public UDatabaseReferenceProxyBase : UDatabaseReferenceProxyBase
{ 
public:
	FMulticastInlineDelegate                           OnUpdated;                                                  // 0x0038   (0x0010)  
	FMulticastInlineDelegate                           OnError;                                                    // 0x0048   (0x0010)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0058   (0x0018)  MISSED


	/// Functions
	// Function /Script/FirebaseFeatures.UpdateChildrenProxy.UpdateChildren
	UUpdateChildrenProxy* UpdateChildren(UDatabaseReference* DatabaseReference, FFirebaseVariant& Value);                    // [0x15dbd60] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/FirebaseFeatures.DataSnapshot
/// Size: 0x0000 (0x000028 - 0x000028)
class UDataSnapshot : public UObject : UObject
{ 
public:
};

/// Class /Script/FirebaseFeatures.DisconnectionHandler
/// Size: 0x0000 (0x000028 - 0x000028)
class UDisconnectionHandler : public UObject : UObject
{ 
public:
};

/// Class /Script/FirebaseFeatures.DatabaseQuery
/// Size: 0x0060 (0x000028 - 0x000088)
class UDatabaseQuery : public UObject : UObject
{ 
public:
	FMulticastInlineDelegate                           OnChildAdded;                                               // 0x0028   (0x0010)  
	FMulticastInlineDelegate                           OnChildChanged;                                             // 0x0038   (0x0010)  
	FMulticastInlineDelegate                           OnChildMoved;                                               // 0x0048   (0x0010)  
	FMulticastInlineDelegate                           OnChildRemoved;                                             // 0x0058   (0x0010)  
	FMulticastInlineDelegate                           OnCancelled;                                                // 0x0068   (0x0010)  
	FMulticastInlineDelegate                           OnValueChanged;                                             // 0x0078   (0x0010)  


	/// Functions
	// Function /Script/FirebaseFeatures.DatabaseQuery.StartAtKey
	UDatabaseQuery* StartAtKey(FFirebaseVariant OrderValue, FString ChildKey);                                               // [0x15dbab0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FirebaseFeatures.DatabaseQuery.StartAt
	UDatabaseQuery* StartAt(FFirebaseVariant& OrderValue);                                                                   // [0x15da640] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FirebaseFeatures.DatabaseQuery.SetupListeners
	void SetupListeners();                                                                                                   // [0x15da620] Final|Native|Public|BlueprintCallable 
	// Function /Script/FirebaseFeatures.DatabaseQuery.SetKeepSynchronized
	void SetKeepSynchronized(bool bKeepSync);                                                                                // [0x15db390] Final|Native|Public|BlueprintCallable 
	// Function /Script/FirebaseFeatures.DatabaseQuery.OrderByValue
	UDatabaseQuery* OrderByValue();                                                                                          // [0x15da5f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FirebaseFeatures.DatabaseQuery.OrderByPriority
	UDatabaseQuery* OrderByPriority();                                                                                       // [0x15da5f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FirebaseFeatures.DatabaseQuery.OrderByKey
	UDatabaseQuery* OrderByKey();                                                                                            // [0x15da5f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FirebaseFeatures.DatabaseQuery.OrderByChild
	UDatabaseQuery* OrderByChild(FString Path);                                                                              // [0x15da460] Final|Native|Public|BlueprintCallable 
	// Function /Script/FirebaseFeatures.DatabaseQuery.LimitToLast
	UDatabaseQuery* LimitToLast(int64_t Limit);                                                                              // [0x15dab70] Final|Native|Public|BlueprintCallable 
	// Function /Script/FirebaseFeatures.DatabaseQuery.LimitToFirst
	UDatabaseQuery* LimitToFirst(int64_t Limit);                                                                             // [0x15dab70] Final|Native|Public|BlueprintCallable 
	// Function /Script/FirebaseFeatures.DatabaseQuery.IsValid
	bool IsValid();                                                                                                          // [0xbfa9a0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FirebaseFeatures.DatabaseQuery.GetReference
	UDatabaseReference* GetReference();                                                                                      // [0x15da5f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FirebaseFeatures.DatabaseQuery.EqualToKey
	UDatabaseQuery* EqualToKey(FFirebaseVariant& OrderValue, FString ChildKey);                                              // [0x15da700] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FirebaseFeatures.DatabaseQuery.EqualTo
	UDatabaseQuery* EqualTo(FFirebaseVariant& OrderValue);                                                                   // [0x15da640] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FirebaseFeatures.DatabaseQuery.EndAtKey
	UDatabaseQuery* EndAtKey(FFirebaseVariant& OrderValue, FString ChildKey);                                                // [0x15da700] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FirebaseFeatures.DatabaseQuery.EndAt
	UDatabaseQuery* EndAt(FFirebaseVariant& OrderValue);                                                                     // [0x15da640] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FirebaseFeatures.DatabaseQuery.ClearListeners
	void ClearListeners();                                                                                                   // [0x15da620] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/FirebaseFeatures.DatabaseReference
/// Size: 0x0000 (0x000088 - 0x000088)
class UDatabaseReference : public UDatabaseQuery : UDatabaseQuery
{ 
public:
};

/// Class /Script/FirebaseFeatures.FirestoreDocumentChange
/// Size: 0x0008 (0x000028 - 0x000030)
class UFirestoreDocumentChange : public UObject : UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/FirebaseFeatures.FirestoreDocumentReference
/// Size: 0x0010 (0x000028 - 0x000038)
class UFirestoreDocumentReference : public UObject : UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED
};

/// Class /Script/FirebaseFeatures.FirebaseAdMobLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UFirebaseAdMobLibrary : public UBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/FirebaseFeatures.ShowRewardedVideo
/// Size: 0x0020 (0x000030 - 0x000050)
class UShowRewardedVideo : public UBlueprintAsyncActionBase : UBlueprintAsyncActionBase
{ 
public:
	FMulticastInlineDelegate                           OnVideoShown;                                               // 0x0030   (0x0010)  
	FMulticastInlineDelegate                           OnError;                                                    // 0x0040   (0x0010)  


	/// Functions
	// Function /Script/FirebaseFeatures.ShowRewardedVideo.ShowRewardedVideo
	UShowRewardedVideo* ShowRewardedVideo();                                                                                 // [0x15e0790] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/FirebaseFeatures.LoadRewardedVideoAd
/// Size: 0x00B0 (0x000030 - 0x0000E0)
class ULoadRewardedVideoAd : public UBlueprintAsyncActionBase : UBlueprintAsyncActionBase
{ 
public:
	FMulticastInlineDelegate                           OnAdLoaded;                                                 // 0x0030   (0x0010)  
	FMulticastInlineDelegate                           OnError;                                                    // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0x90];                                      // 0x0050   (0x0090)  MISSED


	/// Functions
	// Function /Script/FirebaseFeatures.LoadRewardedVideoAd.LoadRewardedVideoAd
	ULoadRewardedVideoAd* LoadRewardedVideoAd(FString AdUnitId, FAdMobAdRequest& AdRequest);                                 // [0x15e0130] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/FirebaseFeatures.PauseRewardedVideo
/// Size: 0x0020 (0x000030 - 0x000050)
class UPauseRewardedVideo : public UBlueprintAsyncActionBase : UBlueprintAsyncActionBase
{ 
public:
	FMulticastInlineDelegate                           OnVideoPaused;                                              // 0x0030   (0x0010)  
	FMulticastInlineDelegate                           OnError;                                                    // 0x0040   (0x0010)  


	/// Functions
	// Function /Script/FirebaseFeatures.PauseRewardedVideo.PauseRewardedVideo
	UPauseRewardedVideo* PauseRewardedVideo();                                                                               // [0x15e0580] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/FirebaseFeatures.ResumeRewardedVideo
/// Size: 0x0020 (0x000030 - 0x000050)
class UResumeRewardedVideo : public UBlueprintAsyncActionBase : UBlueprintAsyncActionBase
{ 
public:
	FMulticastInlineDelegate                           OnVideoResumed;                                             // 0x0030   (0x0010)  
	FMulticastInlineDelegate                           OnError;                                                    // 0x0040   (0x0010)  


	/// Functions
	// Function /Script/FirebaseFeatures.ResumeRewardedVideo.ResumeRewardedVideo
	UResumeRewardedVideo* ResumeRewardedVideo();                                                                             // [0x15e0640] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/FirebaseFeatures.CreateBannerView
/// Size: 0x0040 (0x000030 - 0x000070)
class UCreateBannerView : public UBlueprintAsyncActionBase : UBlueprintAsyncActionBase
{ 
public:
	FMulticastInlineDelegate                           OnBannerViewCreated;                                        // 0x0030   (0x0010)  
	FMulticastInlineDelegate                           OnError;                                                    // 0x0040   (0x0010)  
	UBannerView*                                       Banner;                                                     // 0x0050   (0x0008)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0058   (0x0018)  MISSED


	/// Functions
	// Function /Script/FirebaseFeatures.CreateBannerView.CreateBannerView
	UCreateBannerView* CreateBannerView(FString AdUnitId, FAdSize& AdSize);                                                  // [0x15df870] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/FirebaseFeatures.LoadAdBannerView
/// Size: 0x00A8 (0x000030 - 0x0000D8)
class ULoadAdBannerView : public UBlueprintAsyncActionBase : UBlueprintAsyncActionBase
{ 
public:
	FMulticastInlineDelegate                           OnAdLoaded;                                                 // 0x0030   (0x0010)  
	FMulticastInlineDelegate                           OnError;                                                    // 0x0040   (0x0010)  
	UBannerView*                                       Banner;                                                     // 0x0050   (0x0008)  
	unsigned char                                      UnknownData00_6[0x80];                                      // 0x0058   (0x0080)  MISSED


	/// Functions
	// Function /Script/FirebaseFeatures.LoadAdBannerView.LoadAd
	ULoadAdBannerView* LoadAd(UBannerView* BannerView, FAdMobAdRequest& AdRequest);                                          // [0x15dfd90] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/FirebaseFeatures.HideAdBannerView
/// Size: 0x0028 (0x000030 - 0x000058)
class UHideAdBannerView : public UBlueprintAsyncActionBase : UBlueprintAsyncActionBase
{ 
public:
	FMulticastInlineDelegate                           OnHidden;                                                   // 0x0030   (0x0010)  
	FMulticastInlineDelegate                           OnError;                                                    // 0x0040   (0x0010)  
	UBannerView*                                       Banner;                                                     // 0x0050   (0x0008)  


	/// Functions
	// Function /Script/FirebaseFeatures.HideAdBannerView.Hide
	UHideAdBannerView* Hide(UBannerView* BannerView);                                                                        // [0x15dfcd0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/FirebaseFeatures.ShowBannerView
/// Size: 0x0028 (0x000030 - 0x000058)
class UShowBannerView : public UBlueprintAsyncActionBase : UBlueprintAsyncActionBase
{ 
public:
	FMulticastInlineDelegate                           OnShown;                                                    // 0x0030   (0x0010)  
	FMulticastInlineDelegate                           OnError;                                                    // 0x0040   (0x0010)  
	UBannerView*                                       Banner;                                                     // 0x0050   (0x0008)  


	/// Functions
	// Function /Script/FirebaseFeatures.ShowBannerView.Show
	UShowBannerView* Show(UBannerView* BannerView);                                                                          // [0x15e0670] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/FirebaseFeatures.PauseBannerView
/// Size: 0x0028 (0x000030 - 0x000058)
class UPauseBannerView : public UBlueprintAsyncActionBase : UBlueprintAsyncActionBase
{ 
public:
	FMulticastInlineDelegate                           OnPaused;                                                   // 0x0030   (0x0010)  
	FMulticastInlineDelegate                           OnError;                                                    // 0x0040   (0x0010)  
	UBannerView*                                       Banner;                                                     // 0x0050   (0x0008)  


	/// Functions
	// Function /Script/FirebaseFeatures.PauseBannerView.Pause
	UPauseBannerView* Pause(UBannerView* BannerView);                                                                        // [0x15e04f0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/FirebaseFeatures.ResumeBannerView
/// Size: 0x0028 (0x000030 - 0x000058)
class UResumeBannerView : public UBlueprintAsyncActionBase : UBlueprintAsyncActionBase
{ 
public:
	FMulticastInlineDelegate                           OnResumed;                                                  // 0x0030   (0x0010)  
	FMulticastInlineDelegate                           OnError;                                                    // 0x0040   (0x0010)  
	UBannerView*                                       Banner;                                                     // 0x0050   (0x0008)  


	/// Functions
	// Function /Script/FirebaseFeatures.ResumeBannerView.Resume
	UResumeBannerView* Resume(UBannerView* BannerView);                                                                      // [0x15e05b0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/FirebaseFeatures.MoveToPositionBannerView
/// Size: 0x0030 (0x000030 - 0x000060)
class UMoveToPositionBannerView : public UBlueprintAsyncActionBase : UBlueprintAsyncActionBase
{ 
public:
	FMulticastInlineDelegate                           OnMoved;                                                    // 0x0030   (0x0010)  
	FMulticastInlineDelegate                           OnError;                                                    // 0x0040   (0x0010)  
	UBannerView*                                       Banner;                                                     // 0x0050   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0058   (0x0008)  MISSED


	/// Functions
	// Function /Script/FirebaseFeatures.MoveToPositionBannerView.MoveTo
	UMoveToPositionBannerView* MoveTo(UBannerView* BannerView, EAdMobBannerViewPosition Position);                           // [0x15e0420] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/FirebaseFeatures.MoveToBannerView
/// Size: 0x0030 (0x000030 - 0x000060)
class UMoveToBannerView : public UBlueprintAsyncActionBase : UBlueprintAsyncActionBase
{ 
public:
	FMulticastInlineDelegate                           OnMoved;                                                    // 0x0030   (0x0010)  
	FMulticastInlineDelegate                           OnError;                                                    // 0x0040   (0x0010)  
	UBannerView*                                       Banner;                                                     // 0x0050   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0058   (0x0008)  MISSED


	/// Functions
	// Function /Script/FirebaseFeatures.MoveToBannerView.MoveTo
	UMoveToBannerView* MoveTo(UBannerView* BannerView, int32_t X, int32_t Y);                                                // [0x15e0320] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/FirebaseFeatures.CreateInterstitialAd
/// Size: 0x0038 (0x000030 - 0x000068)
class UCreateInterstitialAd : public UBlueprintAsyncActionBase : UBlueprintAsyncActionBase
{ 
public:
	FMulticastInlineDelegate                           OnInterstitialAdCreated;                                    // 0x0030   (0x0010)  
	FMulticastInlineDelegate                           OnError;                                                    // 0x0040   (0x0010)  
	UInterstitialAd*                                   Interstitial;                                               // 0x0050   (0x0008)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0058   (0x0010)  MISSED


	/// Functions
	// Function /Script/FirebaseFeatures.CreateInterstitialAd.CreateInterstitialAd
	UCreateInterstitialAd* CreateInterstitialAd(FString AdUnitId);                                                           // [0x15df970] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/FirebaseFeatures.LoadAdInterstitial
/// Size: 0x00A8 (0x000030 - 0x0000D8)
class ULoadAdInterstitial : public UBlueprintAsyncActionBase : UBlueprintAsyncActionBase
{ 
public:
	FMulticastInlineDelegate                           OnAdLoaded;                                                 // 0x0030   (0x0010)  
	FMulticastInlineDelegate                           OnError;                                                    // 0x0040   (0x0010)  
	UInterstitialAd*                                   Interstitial;                                               // 0x0050   (0x0008)  
	unsigned char                                      UnknownData00_6[0x80];                                      // 0x0058   (0x0080)  MISSED


	/// Functions
	// Function /Script/FirebaseFeatures.LoadAdInterstitial.LoadAd
	ULoadAdInterstitial* LoadAd(UInterstitialAd* InterstitialAd, FAdMobAdRequest& AdRequest);                                // [0x15dff60] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/FirebaseFeatures.ShowInterstitial
/// Size: 0x0028 (0x000030 - 0x000058)
class UShowInterstitial : public UBlueprintAsyncActionBase : UBlueprintAsyncActionBase
{ 
public:
	FMulticastInlineDelegate                           OnShown;                                                    // 0x0030   (0x0010)  
	FMulticastInlineDelegate                           OnError;                                                    // 0x0040   (0x0010)  
	UInterstitialAd*                                   Interstitial;                                               // 0x0050   (0x0008)  


	/// Functions
	// Function /Script/FirebaseFeatures.ShowInterstitial.Show
	UShowInterstitial* Show(UInterstitialAd* InterstitialAd);                                                                // [0x15e0700] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/FirebaseFeatures.BannerView
/// Size: 0x0000 (0x000028 - 0x000028)
class UBannerView : public UObject : UObject
{ 
public:
};

/// Class /Script/FirebaseFeatures.InterstitialAd
/// Size: 0x0038 (0x000028 - 0x000060)
class UInterstitialAd : public UObject : UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x38];                                      // 0x0028   (0x0038)  MISSED
};

/// Class /Script/FirebaseFeatures.FirebaseAnalyticsLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UFirebaseAnalyticsLibrary : public UBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/FirebaseFeatures.GetAnalyticsInstanceIdProxy
/// Size: 0x0010 (0x000030 - 0x000040)
class UGetAnalyticsInstanceIdProxy : public UBlueprintAsyncActionBase : UBlueprintAsyncActionBase
{ 
public:
	FMulticastInlineDelegate                           OnInstanceIdReceived;                                       // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/FirebaseFeatures.GetAnalyticsInstanceIdProxy.GetAnalyticsInstanceId
	UGetAnalyticsInstanceIdProxy* GetAnalyticsInstanceId();                                                                  // [0x15e3190] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/FirebaseFeatures.FirebaseApiConfig
/// Size: 0x0010 (0x000028 - 0x000038)
class UFirebaseApiConfig : public UObject : UObject
{ 
public:
	FString                                            GoogleServicesJson;                                         // 0x0028   (0x0010)  
};

/// Class /Script/FirebaseFeatures.FirebaseAppCheckLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UFirebaseAppCheckLibrary : public UObject : UObject
{ 
public:
};

/// Class /Script/FirebaseFeatures.FirebaseConfig
/// Size: 0x0058 (0x000028 - 0x000080)
class UFirebaseConfig : public UObject : UObject
{ 
public:
	bool                                               bEnableAuth;                                                // 0x0028   (0x0001)  
	bool                                               bEnableAppCheck;                                            // 0x0029   (0x0001)  
	bool                                               bEnableFirestore;                                           // 0x002A   (0x0001)  
	bool                                               bEnableDatabase;                                            // 0x002B   (0x0001)  
	bool                                               bEnableAdMob;                                               // 0x002C   (0x0001)  
	bool                                               bEnableAnalytics;                                           // 0x002D   (0x0001)  
	bool                                               bEnableFunctions;                                           // 0x002E   (0x0001)  
	bool                                               bEnableMessaging;                                           // 0x002F   (0x0001)  
	bool                                               bEnableRemoteConfig;                                        // 0x0030   (0x0001)  
	bool                                               bEnableStorage;                                             // 0x0031   (0x0001)  
	bool                                               bEnableCrashlytics;                                         // 0x0032   (0x0001)  
	bool                                               bEnablePerformances;                                        // 0x0033   (0x0001)  
	int32_t                                            FirebaseAnalyticsSessionTimeoutDuration;                    // 0x0034   (0x0004)  
	bool                                               bSuppressNotificationPermissionPrompt;                      // 0x0038   (0x0001)  
	bool                                               bTokenRegistrationOnInit;                                   // 0x0039   (0x0001)  
	bool                                               bEnableGoogleSignIn;                                        // 0x003A   (0x0001)  
	unsigned char                                      UnknownData00_5[0x5];                                       // 0x003B   (0x0005)  MISSED
	FString                                            GoogleClientId;                                             // 0x0040   (0x0010)  
	FString                                            GoogleReversedClientId;                                     // 0x0050   (0x0010)  
	bool                                               bEnableGooglePlayGamesSignIn;                               // 0x0060   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0061   (0x0007)  MISSED
	FString                                            Host;                                                       // 0x0068   (0x0010)  
	bool                                               bSslEnabled;                                                // 0x0078   (0x0001)  
	bool                                               bPersistenceEnabled;                                        // 0x0079   (0x0001)  
	bool                                               bRequestReadPhoneStatePermission;                           // 0x007A   (0x0001)  
	bool                                               bRequestAccessCoarseLocation;                               // 0x007B   (0x0001)  
	bool                                               bFirebaseAppStoreReceiptURLCheckEnabled;                    // 0x007C   (0x0001)  
	EAppCheckProvider                                  AndroidAppCheckProvider;                                    // 0x007D   (0x0001)  
	EAppCheckProvider                                  iOSAppCheckProvider;                                        // 0x007E   (0x0001)  
	EAppCheckProvider                                  DesktopAppCheckProvider;                                    // 0x007F   (0x0001)  
};

/// Class /Script/FirebaseFeatures.FirebaseDynamicLinksBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UFirebaseDynamicLinksBlueprintLibrary : public UBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/FirebaseFeatures.BlueprintFirebaseDynamicLinksProxy
/// Size: 0x0010 (0x000030 - 0x000040)
class UBlueprintFirebaseDynamicLinksProxy : public UBlueprintAsyncActionBase : UBlueprintAsyncActionBase
{ 
public:
	FMulticastInlineDelegate                           OnDynamicLinkReceived;                                      // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/FirebaseFeatures.BlueprintFirebaseDynamicLinksProxy.OnLink
	void OnLink(FString URL, ELinkMatchStrength MatchStrength);                                                              // [0x15e3fc0] Final|Native|Private 
	// Function /Script/FirebaseFeatures.BlueprintFirebaseDynamicLinksProxy.ListenOnDynamicLinkReceived
	UBlueprintFirebaseDynamicLinksProxy* ListenOnDynamicLinkReceived();                                                      // [0x15e3800] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/FirebaseFeatures.DynamicLinksGetShortLinkBase
/// Size: 0x0020 (0x000030 - 0x000050)
class UDynamicLinksGetShortLinkBase : public UBlueprintAsyncActionBase : UBlueprintAsyncActionBase
{ 
public:
	FMulticastInlineDelegate                           Success;                                                    // 0x0030   (0x0010)  
	FMulticastInlineDelegate                           Failed;                                                     // 0x0040   (0x0010)  
};

/// Class /Script/FirebaseFeatures.DynamicLinksGetShortLinkWithComponents
/// Size: 0x0168 (0x000050 - 0x0001B8)
class UDynamicLinksGetShortLinkWithComponents : public UDynamicLinksGetShortLinkBase : UDynamicLinksGetShortLinkBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x168];                                     // 0x0050   (0x0168)  MISSED
};

/// Class /Script/FirebaseFeatures.DynamicLinksGetShortLinkWithComponentsAndOptions
/// Size: 0x0170 (0x000050 - 0x0001C0)
class UDynamicLinksGetShortLinkWithComponentsAndOptions : public UDynamicLinksGetShortLinkBase : UDynamicLinksGetShortLinkBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x170];                                     // 0x0050   (0x0170)  MISSED
};

/// Class /Script/FirebaseFeatures.DynamicLinksGetShortLinkWithString
/// Size: 0x0010 (0x000050 - 0x000060)
class UDynamicLinksGetShortLinkWithString : public UDynamicLinksGetShortLinkBase : UDynamicLinksGetShortLinkBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0050   (0x0010)  MISSED
};

/// Class /Script/FirebaseFeatures.DynamicLinksGetShortLinkWithStringAndOptions
/// Size: 0x0018 (0x000050 - 0x000068)
class UDynamicLinksGetShortLinkWithStringAndOptions : public UDynamicLinksGetShortLinkBase : UDynamicLinksGetShortLinkBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0050   (0x0018)  MISSED
};

/// Class /Script/FirebaseFeatures.FirebaseInstallations
/// Size: 0x0000 (0x000028 - 0x000028)
class UFirebaseInstallations : public UBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/FirebaseFeatures.FirebaseGetInstallationIDProxy
/// Size: 0x0020 (0x000030 - 0x000050)
class UFirebaseGetInstallationIDProxy : public UBlueprintAsyncActionBase : UBlueprintAsyncActionBase
{ 
public:
	FMulticastInlineDelegate                           Done;                                                       // 0x0030   (0x0010)  
	FMulticastInlineDelegate                           Failed;                                                     // 0x0040   (0x0010)  


	/// Functions
	// Function /Script/FirebaseFeatures.FirebaseGetInstallationIDProxy.GetInstallationID
	UFirebaseGetInstallationIDProxy* GetInstallationID();                                                                    // [0x15ecf50] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/FirebaseFeatures.FirebaseGetInstallationAuthTokenProxy
/// Size: 0x0028 (0x000030 - 0x000058)
class UFirebaseGetInstallationAuthTokenProxy : public UBlueprintAsyncActionBase : UBlueprintAsyncActionBase
{ 
public:
	FMulticastInlineDelegate                           Done;                                                       // 0x0030   (0x0010)  
	FMulticastInlineDelegate                           Failed;                                                     // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0050   (0x0008)  MISSED


	/// Functions
	// Function /Script/FirebaseFeatures.FirebaseGetInstallationAuthTokenProxy.GetInstallationAuthToken
	UFirebaseGetInstallationAuthTokenProxy* GetInstallationAuthToken(bool bForceRefresh);                                    // [0x15ecec0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/FirebaseFeatures.FirebaseDeleteInstallationProxy
/// Size: 0x0020 (0x000030 - 0x000050)
class UFirebaseDeleteInstallationProxy : public UBlueprintAsyncActionBase : UBlueprintAsyncActionBase
{ 
public:
	FMulticastInlineDelegate                           Done;                                                       // 0x0030   (0x0010)  
	FMulticastInlineDelegate                           Failed;                                                     // 0x0040   (0x0010)  


	/// Functions
	// Function /Script/FirebaseFeatures.FirebaseDeleteInstallationProxy.DeleteInstallation
	UFirebaseDeleteInstallationProxy* DeleteInstallation();                                                                  // [0x15ea8c0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/FirebaseFeatures.FirebasePerformanceLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UFirebasePerformanceLibrary : public UBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/FirebaseFeatures.FirebaseSDKLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UFirebaseSDKLibrary : public UBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/FirebaseFeatures.FirebaseInitializationProxy
/// Size: 0x0010 (0x000030 - 0x000040)
class UFirebaseInitializationProxy : public UBlueprintAsyncActionBase : UBlueprintAsyncActionBase
{ 
public:
	FMulticastInlineDelegate                           FirebaseInitialized;                                        // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/FirebaseFeatures.FirebaseInitializationProxy.WaitForInitialization
	UFirebaseInitializationProxy* WaitForInitialization();                                                                   // [0x15ef5d0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/FirebaseFeatures.VariantLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UVariantLibrary : public UBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/FirebaseFeatures.Firestore
/// Size: 0x0000 (0x000028 - 0x000028)
class UFirestore : public UBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/FirebaseFeatures.FirestoreLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UFirestoreLibrary : public UBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/FirebaseFeatures.WriteBatchCommitProxy
/// Size: 0x0020 (0x000030 - 0x000050)
class UWriteBatchCommitProxy : public UBlueprintAsyncActionBase : UBlueprintAsyncActionBase
{ 
public:
	FMulticastInlineDelegate                           OnCommitted;                                                // 0x0030   (0x0010)  
	FMulticastInlineDelegate                           OnError;                                                    // 0x0040   (0x0010)  


	/// Functions
	// Function /Script/FirebaseFeatures.WriteBatchCommitProxy.Commit
	UWriteBatchCommitProxy* Commit(FWriteBatch& WriteBatch);                                                                 // [0x15ea380] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/FirebaseFeatures.FirestoreRunTransactionProxy
/// Size: 0x0030 (0x000030 - 0x000060)
class UFirestoreRunTransactionProxy : public UBlueprintAsyncActionBase : UBlueprintAsyncActionBase
{ 
public:
	FMulticastInlineDelegate                           OnRun;                                                      // 0x0030   (0x0010)  
	FMulticastInlineDelegate                           OnError;                                                    // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0050   (0x0010)  MISSED


	/// Functions
	// Function /Script/FirebaseFeatures.FirestoreRunTransactionProxy.RunTransaction
	UFirestoreRunTransactionProxy* RunTransaction(FDelegateProperty& TransactionFunction);                                   // [0x15edce0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/FirebaseFeatures.DisableNetworkProxy
/// Size: 0x0020 (0x000030 - 0x000050)
class UDisableNetworkProxy : public UBlueprintAsyncActionBase : UBlueprintAsyncActionBase
{ 
public:
	FMulticastInlineDelegate                           OnDisabled;                                                 // 0x0030   (0x0010)  
	FMulticastInlineDelegate                           OnError;                                                    // 0x0040   (0x0010)  


	/// Functions
	// Function /Script/FirebaseFeatures.DisableNetworkProxy.DisableNetwork
	UDisableNetworkProxy* DisableNetwork();                                                                                  // [0x15ea8f0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/FirebaseFeatures.EnableNetworkProxy
/// Size: 0x0020 (0x000030 - 0x000050)
class UEnableNetworkProxy : public UBlueprintAsyncActionBase : UBlueprintAsyncActionBase
{ 
public:
	FMulticastInlineDelegate                           OnEnabled;                                                  // 0x0030   (0x0010)  
	FMulticastInlineDelegate                           OnError;                                                    // 0x0040   (0x0010)  


	/// Functions
	// Function /Script/FirebaseFeatures.EnableNetworkProxy.DisableNetwork
	UEnableNetworkProxy* DisableNetwork();                                                                                   // [0x15ea920] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/FirebaseFeatures.WaitForPendingWritesProxy
/// Size: 0x0020 (0x000030 - 0x000050)
class UWaitForPendingWritesProxy : public UBlueprintAsyncActionBase : UBlueprintAsyncActionBase
{ 
public:
	FMulticastInlineDelegate                           OnPendingWritesOver;                                        // 0x0030   (0x0010)  
	FMulticastInlineDelegate                           OnError;                                                    // 0x0040   (0x0010)  


	/// Functions
	// Function /Script/FirebaseFeatures.WaitForPendingWritesProxy.DisableNetwork
	UWaitForPendingWritesProxy* DisableNetwork();                                                                            // [0x15ea950] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/FirebaseFeatures.DocumentReferenceAsyncBase
/// Size: 0x0008 (0x000030 - 0x000038)
class UDocumentReferenceAsyncBase : public UBlueprintAsyncActionBase : UBlueprintAsyncActionBase
{ 
public:
	UFirestoreDocumentReference*                       Reference;                                                  // 0x0030   (0x0008)  
};

/// Class /Script/FirebaseFeatures.DocumentReferenceGetProxy
/// Size: 0x0028 (0x000038 - 0x000060)
class UDocumentReferenceGetProxy : public UDocumentReferenceAsyncBase : UDocumentReferenceAsyncBase
{ 
public:
	FMulticastInlineDelegate                           OnGot;                                                      // 0x0038   (0x0010)  
	FMulticastInlineDelegate                           OnError;                                                    // 0x0048   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0058   (0x0008)  MISSED


	/// Functions
	// Function /Script/FirebaseFeatures.DocumentReferenceGetProxy.Get
	UDocumentReferenceGetProxy* Get(UFirestoreDocumentReference* DocumentReference, EFirestoreSource Source);                // [0x15ec760] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/FirebaseFeatures.DocumentReferenceSetProxy
/// Size: 0x0080 (0x000038 - 0x0000B8)
class UDocumentReferenceSetProxy : public UDocumentReferenceAsyncBase : UDocumentReferenceAsyncBase
{ 
public:
	FMulticastInlineDelegate                           OnSet;                                                      // 0x0038   (0x0010)  
	FMulticastInlineDelegate                           OnError;                                                    // 0x0048   (0x0010)  
	unsigned char                                      UnknownData00_6[0x60];                                      // 0x0058   (0x0060)  MISSED


	/// Functions
	// Function /Script/FirebaseFeatures.DocumentReferenceSetProxy.Set
	UDocumentReferenceSetProxy* Set(UFirestoreDocumentReference* DocumentReference, TMap<FString, FFirestoreFieldValue>& Data, FFirestoreSetOptions& Options); // [0x15ede50] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/FirebaseFeatures.DocumentReferenceUpdateProxy
/// Size: 0x0078 (0x000038 - 0x0000B0)
class UDocumentReferenceUpdateProxy : public UDocumentReferenceAsyncBase : UDocumentReferenceAsyncBase
{ 
public:
	FMulticastInlineDelegate                           OnUpdated;                                                  // 0x0038   (0x0010)  
	FMulticastInlineDelegate                           OnError;                                                    // 0x0048   (0x0010)  
	unsigned char                                      UnknownData00_6[0x58];                                      // 0x0058   (0x0058)  MISSED


	/// Functions
	// Function /Script/FirebaseFeatures.DocumentReferenceUpdateProxy.Update
	UDocumentReferenceUpdateProxy* Update(UFirestoreDocumentReference* DocumentReference, TMap<FString, FFirestoreFieldValue>& Data); // [0x15eef70] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/FirebaseFeatures.DocumentReferenceUpdateWithPathProxy
/// Size: 0x0078 (0x000038 - 0x0000B0)
class UDocumentReferenceUpdateWithPathProxy : public UDocumentReferenceAsyncBase : UDocumentReferenceAsyncBase
{ 
public:
	FMulticastInlineDelegate                           OnUpdated;                                                  // 0x0038   (0x0010)  
	FMulticastInlineDelegate                           OnError;                                                    // 0x0048   (0x0010)  
	unsigned char                                      UnknownData00_6[0x58];                                      // 0x0058   (0x0058)  MISSED


	/// Functions
	// Function /Script/FirebaseFeatures.DocumentReferenceUpdateWithPathProxy.UpdateWithPath
	UDocumentReferenceUpdateWithPathProxy* UpdateWithPath(UFirestoreDocumentReference* DocumentReference, TMap<FFirestoreFieldPath, FFirestoreFieldValue>& Data); // [0x15ef460] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/FirebaseFeatures.DocumentReferenceDeleteProxy
/// Size: 0x0020 (0x000038 - 0x000058)
class UDocumentReferenceDeleteProxy : public UDocumentReferenceAsyncBase : UDocumentReferenceAsyncBase
{ 
public:
	FMulticastInlineDelegate                           OnDeleted;                                                  // 0x0038   (0x0010)  
	FMulticastInlineDelegate                           OnError;                                                    // 0x0048   (0x0010)  


	/// Functions
	// Function /Script/FirebaseFeatures.DocumentReferenceDeleteProxy.Delete
	UDocumentReferenceDeleteProxy* Delete(UFirestoreDocumentReference* DocumentReference);                                   // [0x15ea740] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/FirebaseFeatures.CollectionReferenceAddProxy
/// Size: 0x0078 (0x000030 - 0x0000A8)
class UCollectionReferenceAddProxy : public UBlueprintAsyncActionBase : UBlueprintAsyncActionBase
{ 
public:
	FMulticastInlineDelegate                           OnAdded;                                                    // 0x0030   (0x0010)  
	FMulticastInlineDelegate                           OnError;                                                    // 0x0040   (0x0010)  
	UFirestoreCollectionReference*                     Reference;                                                  // 0x0050   (0x0008)  
	unsigned char                                      UnknownData00_6[0x50];                                      // 0x0058   (0x0050)  MISSED


	/// Functions
	// Function /Script/FirebaseFeatures.CollectionReferenceAddProxy.Add
	UCollectionReferenceAddProxy* Add(UFirestoreCollectionReference* DocumentReference, TMap<FString, FFirestoreFieldValue> Data); // [0x15e99b0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/FirebaseFeatures.QueryGetProxy
/// Size: 0x0030 (0x000030 - 0x000060)
class UQueryGetProxy : public UBlueprintAsyncActionBase : UBlueprintAsyncActionBase
{ 
public:
	FMulticastInlineDelegate                           OnGot;                                                      // 0x0030   (0x0010)  
	FMulticastInlineDelegate                           OnError;                                                    // 0x0040   (0x0010)  
	UFirestoreQuery*                                   Query;                                                      // 0x0050   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0058   (0x0008)  MISSED


	/// Functions
	// Function /Script/FirebaseFeatures.QueryGetProxy.Get
	UQueryGetProxy* Get(UFirestoreQuery* Query, EFirestoreSource Source);                                                    // [0x15eca20] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/FirebaseFeatures.FirebaseFunctionsLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UFirebaseFunctionsLibrary : public UBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/FirebaseFeatures.FirebaseFunctionsBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UFirebaseFunctionsBlueprintLibrary : public UBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/FirebaseFeatures.CallHttpsFunctionsProxy
/// Size: 0x0028 (0x000030 - 0x000058)
class UCallHttpsFunctionsProxy : public UBlueprintAsyncActionBase : UBlueprintAsyncActionBase
{ 
public:
	FMulticastInlineDelegate                           OnCalled;                                                   // 0x0030   (0x0010)  
	FMulticastInlineDelegate                           OnError;                                                    // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0050   (0x0008)  MISSED


	/// Functions
	// Function /Script/FirebaseFeatures.CallHttpsFunctionsProxy.Call
	UCallHttpsFunctionsProxy* Call(FFirebaseHttpsCallableReference& HttpsCallable);                                          // [0x15f2f30] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/FirebaseFeatures.CallHttpsFunctionsWithDataProxy
/// Size: 0x0040 (0x000030 - 0x000070)
class UCallHttpsFunctionsWithDataProxy : public UBlueprintAsyncActionBase : UBlueprintAsyncActionBase
{ 
public:
	FMulticastInlineDelegate                           OnCalled;                                                   // 0x0030   (0x0010)  
	FMulticastInlineDelegate                           OnError;                                                    // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0050   (0x0020)  MISSED


	/// Functions
	// Function /Script/FirebaseFeatures.CallHttpsFunctionsWithDataProxy.CallWithData
	UCallHttpsFunctionsWithDataProxy* CallWithData(FFirebaseHttpsCallableReference& HttpsCallable, FFirebaseVariant& Data);  // [0x15f2fe0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/FirebaseFeatures.FbGoogleSignInProxy
/// Size: 0x0038 (0x000030 - 0x000068)
class UFbGoogleSignInProxy : public UBlueprintAsyncActionBase : UBlueprintAsyncActionBase
{ 
public:
	FMulticastInlineDelegate                           SignedIn;                                                   // 0x0030   (0x0010)  
	FMulticastInlineDelegate                           Failed;                                                     // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0050   (0x0018)  MISSED


	/// Functions
	// Function /Script/FirebaseFeatures.FbGoogleSignInProxy.SignIn
	UFbGoogleSignInProxy* SignIn(FString ServerClientID, bool bSkipIfSigned, bool bUseSilentSignIn);                         // [0x15f4130] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/FirebaseFeatures.GetLeaderboardScoreProxy
/// Size: 0x0030 (0x000030 - 0x000060)
class UGetLeaderboardScoreProxy : public UBlueprintAsyncActionBase : UBlueprintAsyncActionBase
{ 
public:
	FMulticastInlineDelegate                           ScoreRead;                                                  // 0x0030   (0x0010)  
	FMulticastInlineDelegate                           Failed;                                                     // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0050   (0x0010)  MISSED


	/// Functions
	// Function /Script/FirebaseFeatures.GetLeaderboardScoreProxy.GetScore
	UGetLeaderboardScoreProxy* GetScore(FString LeaderboardID);                                                              // [0x15f3b10] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/FirebaseFeatures.GoogleSignInCredentialProxy
/// Size: 0x0038 (0x000030 - 0x000068)
class UGoogleSignInCredentialProxy : public UBlueprintAsyncActionBase : UBlueprintAsyncActionBase
{ 
public:
	FMulticastInlineDelegate                           Success;                                                    // 0x0030   (0x0010)  
	FMulticastInlineDelegate                           Failed;                                                     // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0050   (0x0018)  MISSED


	/// Functions
	// Function /Script/FirebaseFeatures.GoogleSignInCredentialProxy.GetCredentialFromPlayGames
	UGoogleSignInCredentialProxy* GetCredentialFromPlayGames(FString ServerClientID, bool bUseSilentSignIn, bool bSkipIfSigned); // [0x15f36d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/FirebaseFeatures.GoogleSignInCredentialProxy.GetCredential
	UGoogleSignInCredentialProxy* GetCredential(FString ServerClientID, bool bUseSilentSignIn, bool bSkipIfSigned);          // [0x15f3540] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/FirebaseFeatures.GoogleServicesLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UGoogleServicesLibrary : public UBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/FirebaseFeatures.FirebaseMesssagingBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UFirebaseMesssagingBlueprintLibrary : public UBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/FirebaseFeatures.RequestPermissionProxy
/// Size: 0x0020 (0x000030 - 0x000050)
class URequestPermissionProxy : public UBlueprintAsyncActionBase : UBlueprintAsyncActionBase
{ 
public:
	FMulticastInlineDelegate                           OnRequestOver;                                              // 0x0030   (0x0010)  
	FMulticastInlineDelegate                           OnError;                                                    // 0x0040   (0x0010)  


	/// Functions
	// Function /Script/FirebaseFeatures.RequestPermissionProxy.RequestPermission
	URequestPermissionProxy* RequestPermission();                                                                            // [0x15f4040] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/FirebaseFeatures.SubscribeProxy
/// Size: 0x0030 (0x000030 - 0x000060)
class USubscribeProxy : public UBlueprintAsyncActionBase : UBlueprintAsyncActionBase
{ 
public:
	FMulticastInlineDelegate                           OnSubscribed;                                               // 0x0030   (0x0010)  
	FMulticastInlineDelegate                           OnError;                                                    // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0050   (0x0010)  MISSED


	/// Functions
	// Function /Script/FirebaseFeatures.SubscribeProxy.Subscribe
	USubscribeProxy* Subscribe(FString Topic);                                                                               // [0x15f4600] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/FirebaseFeatures.UnsubscribeProxy
/// Size: 0x0030 (0x000030 - 0x000060)
class UUnsubscribeProxy : public UBlueprintAsyncActionBase : UBlueprintAsyncActionBase
{ 
public:
	FMulticastInlineDelegate                           OnUnsubscribed;                                             // 0x0030   (0x0010)  
	FMulticastInlineDelegate                           OnError;                                                    // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0050   (0x0010)  MISSED


	/// Functions
	// Function /Script/FirebaseFeatures.UnsubscribeProxy.Unsubscribe
	UUnsubscribeProxy* Unsubscribe(FString Topic);                                                                           // [0x15f46a0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/FirebaseFeatures.MessagingEventsProxy
/// Size: 0x0030 (0x000030 - 0x000060)
class UMessagingEventsProxy : public UBlueprintAsyncActionBase : UBlueprintAsyncActionBase
{ 
public:
	FMulticastInlineDelegate                           OnMessage;                                                  // 0x0030   (0x0010)  
	FMulticastInlineDelegate                           OnTokenReceived;                                            // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0050   (0x0010)  MISSED


	/// Functions
	// Function /Script/FirebaseFeatures.MessagingEventsProxy.ListenForMessagingEvents
	UMessagingEventsProxy* ListenForMessagingEvents();                                                                       // [0x15f3e20] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/FirebaseFeatures.FirebaseRemoteConfig
/// Size: 0x0000 (0x000028 - 0x000028)
class UFirebaseRemoteConfig : public UBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/FirebaseFeatures.FetchProxy
/// Size: 0x0020 (0x000030 - 0x000050)
class UFetchProxy : public UBlueprintAsyncActionBase : UBlueprintAsyncActionBase
{ 
public:
	FMulticastInlineDelegate                           OnFetched;                                                  // 0x0030   (0x0010)  
	FMulticastInlineDelegate                           OnFailed;                                                   // 0x0040   (0x0010)  


	/// Functions
	// Function /Script/FirebaseFeatures.FetchProxy.Fetch
	UFetchProxy* Fetch();                                                                                                    // [0x15f9210] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/FirebaseFeatures.FetchWithCacheExpirationProxy
/// Size: 0x0028 (0x000030 - 0x000058)
class UFetchWithCacheExpirationProxy : public UBlueprintAsyncActionBase : UBlueprintAsyncActionBase
{ 
public:
	FMulticastInlineDelegate                           OnFetched;                                                  // 0x0030   (0x0010)  
	FMulticastInlineDelegate                           OnFailed;                                                   // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0050   (0x0008)  MISSED


	/// Functions
	// Function /Script/FirebaseFeatures.FetchWithCacheExpirationProxy.FetchWithCacheExpiration
	UFetchWithCacheExpirationProxy* FetchWithCacheExpiration(int32_t CacheExpirationInSeconds);                              // [0x15f9240] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/FirebaseFeatures.FirebaseStorage
/// Size: 0x0000 (0x000028 - 0x000028)
class UFirebaseStorage : public UBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/FirebaseFeatures.StorageBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UStorageBlueprintLibrary : public UBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/FirebaseFeatures.FirebaseStorageNodeProxyBase
/// Size: 0x0008 (0x000030 - 0x000038)
class UFirebaseStorageNodeProxyBase : public UBlueprintAsyncActionBase : UBlueprintAsyncActionBase
{ 
public:
	UFirebaseStorageReference*                         _Reference;                                                 // 0x0030   (0x0008)  
};

/// Class /Script/FirebaseFeatures.StorageDeleteProxy
/// Size: 0x0020 (0x000038 - 0x000058)
class UStorageDeleteProxy : public UFirebaseStorageNodeProxyBase : UFirebaseStorageNodeProxyBase
{ 
public:
	FMulticastInlineDelegate                           OnDeleted;                                                  // 0x0038   (0x0010)  
	FMulticastInlineDelegate                           OnError;                                                    // 0x0048   (0x0010)  


	/// Functions
	// Function /Script/FirebaseFeatures.StorageDeleteProxy.Delete
	UStorageDeleteProxy* Delete(UFirebaseStorageReference* StorageReference);                                                // [0x15f9180] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/FirebaseFeatures.StorageGetFileProxy
/// Size: 0x0058 (0x000038 - 0x000090)
class UStorageGetFileProxy : public UFirebaseStorageNodeProxyBase : UFirebaseStorageNodeProxyBase
{ 
public:
	FMulticastInlineDelegate                           OnFileDownloaded;                                           // 0x0038   (0x0010)  
	FMulticastInlineDelegate                           OnProgress;                                                 // 0x0048   (0x0010)  
	FMulticastInlineDelegate                           OnPaused;                                                   // 0x0058   (0x0010)  
	FMulticastInlineDelegate                           OnError;                                                    // 0x0068   (0x0010)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0078   (0x0018)  MISSED


	/// Functions
	// Function /Script/FirebaseFeatures.StorageGetFileProxy.GetFile
	UStorageGetFileProxy* GetFile(UFirebaseStorageReference* StorageReference, FString Path);                                // [0x15f99f0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/FirebaseFeatures.StorageGetBytesProxy
/// Size: 0x0050 (0x000038 - 0x000088)
class UStorageGetBytesProxy : public UFirebaseStorageNodeProxyBase : UFirebaseStorageNodeProxyBase
{ 
public:
	FMulticastInlineDelegate                           OnFileDownloaded;                                           // 0x0038   (0x0010)  
	FMulticastInlineDelegate                           OnProgress;                                                 // 0x0048   (0x0010)  
	FMulticastInlineDelegate                           OnPaused;                                                   // 0x0058   (0x0010)  
	FMulticastInlineDelegate                           OnError;                                                    // 0x0068   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0078   (0x0010)  MISSED


	/// Functions
	// Function /Script/FirebaseFeatures.StorageGetBytesProxy.GetBytes
	UStorageGetBytesProxy* GetBytes(UFirebaseStorageReference* StorageReference, int64_t BufferSize);                        // [0x15f9460] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/FirebaseFeatures.StorageGetDownloadUrlProxy
/// Size: 0x0020 (0x000038 - 0x000058)
class UStorageGetDownloadUrlProxy : public UFirebaseStorageNodeProxyBase : UFirebaseStorageNodeProxyBase
{ 
public:
	FMulticastInlineDelegate                           OnUrlReceived;                                              // 0x0038   (0x0010)  
	FMulticastInlineDelegate                           OnError;                                                    // 0x0048   (0x0010)  


	/// Functions
	// Function /Script/FirebaseFeatures.StorageGetDownloadUrlProxy.GetDownloadUrl
	UStorageGetDownloadUrlProxy* GetDownloadUrl(UFirebaseStorageReference* StorageReference);                                // [0x15f9960] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/FirebaseFeatures.StorageGetMetadataProxy
/// Size: 0x0020 (0x000038 - 0x000058)
class UStorageGetMetadataProxy : public UFirebaseStorageNodeProxyBase : UFirebaseStorageNodeProxyBase
{ 
public:
	FMulticastInlineDelegate                           OnMetadataReceived;                                         // 0x0038   (0x0010)  
	FMulticastInlineDelegate                           OnError;                                                    // 0x0048   (0x0010)  


	/// Functions
	// Function /Script/FirebaseFeatures.StorageGetMetadataProxy.GetMetadata
	UStorageGetMetadataProxy* GetMetadata(UFirebaseStorageReference* StorageReference);                                      // [0x15f9fc0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/FirebaseFeatures.StorageUpdateMetadataProxy
/// Size: 0x0028 (0x000038 - 0x000060)
class UStorageUpdateMetadataProxy : public UFirebaseStorageNodeProxyBase : UFirebaseStorageNodeProxyBase
{ 
public:
	FMulticastInlineDelegate                           OnMetadataUpdated;                                          // 0x0038   (0x0010)  
	FMulticastInlineDelegate                           OnError;                                                    // 0x0048   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0058   (0x0008)  MISSED


	/// Functions
	// Function /Script/FirebaseFeatures.StorageUpdateMetadataProxy.UpdateMetadata
	UStorageUpdateMetadataProxy* UpdateMetadata(UFirebaseStorageReference* StorageReference, FFirebaseStorageMetadata& Metadata); // [0x15faa70] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/FirebaseFeatures.StoragePutBytesProxy
/// Size: 0x0058 (0x000038 - 0x000090)
class UStoragePutBytesProxy : public UFirebaseStorageNodeProxyBase : UFirebaseStorageNodeProxyBase
{ 
public:
	FMulticastInlineDelegate                           OnBytesUploaded;                                            // 0x0038   (0x0010)  
	FMulticastInlineDelegate                           OnProgress;                                                 // 0x0048   (0x0010)  
	FMulticastInlineDelegate                           OnPaused;                                                   // 0x0058   (0x0010)  
	FMulticastInlineDelegate                           OnError;                                                    // 0x0068   (0x0010)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0078   (0x0018)  MISSED


	/// Functions
	// Function /Script/FirebaseFeatures.StoragePutBytesProxy.PutBytes
	UStoragePutBytesProxy* PutBytes(UFirebaseStorageReference* StorageReference, TArray<char>& Bytes);                       // [0x15fa0f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/FirebaseFeatures.StoragePutBytesWithMetadataProxy
/// Size: 0x0058 (0x000038 - 0x000090)
class UStoragePutBytesWithMetadataProxy : public UFirebaseStorageNodeProxyBase : UFirebaseStorageNodeProxyBase
{ 
public:
	FMulticastInlineDelegate                           OnBytesUploaded;                                            // 0x0038   (0x0010)  
	FMulticastInlineDelegate                           OnProgress;                                                 // 0x0048   (0x0010)  
	FMulticastInlineDelegate                           OnPaused;                                                   // 0x0058   (0x0010)  
	FMulticastInlineDelegate                           OnError;                                                    // 0x0068   (0x0010)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0078   (0x0018)  MISSED


	/// Functions
	// Function /Script/FirebaseFeatures.StoragePutBytesWithMetadataProxy.PutBytesWithMetadata
	UStoragePutBytesWithMetadataProxy* PutBytesWithMetadata(UFirebaseStorageReference* StorageReference, TArray<char>& Bytes, FFirebaseStorageMetadata& Metadata); // [0x15fa1e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/FirebaseFeatures.StoragePutFileProxy
/// Size: 0x0058 (0x000038 - 0x000090)
class UStoragePutFileProxy : public UFirebaseStorageNodeProxyBase : UFirebaseStorageNodeProxyBase
{ 
public:
	FMulticastInlineDelegate                           OnFileUploaded;                                             // 0x0038   (0x0010)  
	FMulticastInlineDelegate                           OnProgress;                                                 // 0x0048   (0x0010)  
	FMulticastInlineDelegate                           OnPaused;                                                   // 0x0058   (0x0010)  
	FMulticastInlineDelegate                           OnError;                                                    // 0x0068   (0x0010)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0078   (0x0018)  MISSED


	/// Functions
	// Function /Script/FirebaseFeatures.StoragePutFileProxy.PutFile
	UStoragePutFileProxy* PutFile(UFirebaseStorageReference* StorageReference, FString Path);                                // [0x15fa330] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/FirebaseFeatures.StoragePutFileWithMetadataProxy
/// Size: 0x0060 (0x000038 - 0x000098)
class UStoragePutFileWithMetadataProxy : public UFirebaseStorageNodeProxyBase : UFirebaseStorageNodeProxyBase
{ 
public:
	FMulticastInlineDelegate                           OnFileUploaded;                                             // 0x0038   (0x0010)  
	FMulticastInlineDelegate                           OnProgress;                                                 // 0x0048   (0x0010)  
	FMulticastInlineDelegate                           OnPaused;                                                   // 0x0058   (0x0010)  
	FMulticastInlineDelegate                           OnError;                                                    // 0x0068   (0x0010)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0078   (0x0020)  MISSED


	/// Functions
	// Function /Script/FirebaseFeatures.StoragePutFileWithMetadataProxy.PutFileWithMetadata
	UStoragePutFileWithMetadataProxy* PutFileWithMetadata(UFirebaseStorageReference* StorageReference, FString Path, FFirebaseStorageMetadata& Metadata); // [0x15fa550] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FirebaseFeatures.StoragePutFileWithMetadataProxy.PutFileUFS
	UStoragePutFileWithMetadataProxy* PutFileUFS(UFirebaseStorageReference* StorageReference, FString Path, FFirebaseStorageMetadata& Metadata); // [0x15fa410] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/FirebaseFeatures.FirebaseStorageReference
/// Size: 0x0000 (0x000028 - 0x000028)
class UFirebaseStorageReference : public UObject : UObject
{ 
public:
};

/// Class /Script/FirebaseFeatures.User
/// Size: 0x0008 (0x000028 - 0x000030)
class UUser : public UObject : UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/FirebaseFeatures.UserNodeBase
/// Size: 0x0008 (0x000030 - 0x000038)
class UUserNodeBase : public UBlueprintAsyncActionBase : UBlueprintAsyncActionBase
{ 
public:
	UUser*                                             _User;                                                      // 0x0030   (0x0008)  
};

/// Class /Script/FirebaseFeatures.GetTokenProxy
/// Size: 0x0028 (0x000038 - 0x000060)
class UGetTokenProxy : public UUserNodeBase : UUserNodeBase
{ 
public:
	FMulticastInlineDelegate                           OnTokenReceived;                                            // 0x0038   (0x0010)  
	FMulticastInlineDelegate                           OnError;                                                    // 0x0048   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0058   (0x0008)  MISSED


	/// Functions
	// Function /Script/FirebaseFeatures.GetTokenProxy.GetToken
	UGetTokenProxy* GetToken(UUser* User, bool bForceRefresh);                                                               // [0x160c4e0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/FirebaseFeatures.UpdateEmailProxy
/// Size: 0x0030 (0x000038 - 0x000068)
class UUpdateEmailProxy : public UUserNodeBase : UUserNodeBase
{ 
public:
	FMulticastInlineDelegate                           OnEmailUpdated;                                             // 0x0038   (0x0010)  
	FMulticastInlineDelegate                           OnError;                                                    // 0x0048   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0058   (0x0010)  MISSED


	/// Functions
	// Function /Script/FirebaseFeatures.UpdateEmailProxy.UpdateEmail
	UUpdateEmailProxy* UpdateEmail(UUser* User, FString Email);                                                              // [0x160d2d0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/FirebaseFeatures.UpdatePasswordProxy
/// Size: 0x0030 (0x000038 - 0x000068)
class UUpdatePasswordProxy : public UUserNodeBase : UUserNodeBase
{ 
public:
	FMulticastInlineDelegate                           OnPasswordUpdated;                                          // 0x0038   (0x0010)  
	FMulticastInlineDelegate                           OnError;                                                    // 0x0048   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0058   (0x0010)  MISSED


	/// Functions
	// Function /Script/FirebaseFeatures.UpdatePasswordProxy.UpdatePassword
	UUpdatePasswordProxy* UpdatePassword(UUser* User, FString Password);                                                     // [0x160d3b0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/FirebaseFeatures.ReauthenticateProxy
/// Size: 0x0028 (0x000038 - 0x000060)
class UReauthenticateProxy : public UUserNodeBase : UUserNodeBase
{ 
public:
	FMulticastInlineDelegate                           OnReauthenticated;                                          // 0x0038   (0x0010)  
	FMulticastInlineDelegate                           OnError;                                                    // 0x0048   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0058   (0x0008)  MISSED


	/// Functions
	// Function /Script/FirebaseFeatures.ReauthenticateProxy.Reauthenticate
	UReauthenticateProxy* Reauthenticate(UUser* User, FCredential& Credential);                                              // [0x160ccd0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/FirebaseFeatures.ReauthenticateAndRetrieveDataProxy
/// Size: 0x0028 (0x000038 - 0x000060)
class UReauthenticateAndRetrieveDataProxy : public UUserNodeBase : UUserNodeBase
{ 
public:
	FMulticastInlineDelegate                           OnReauthenticated;                                          // 0x0038   (0x0010)  
	FMulticastInlineDelegate                           OnError;                                                    // 0x0048   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0058   (0x0008)  MISSED


	/// Functions
	// Function /Script/FirebaseFeatures.ReauthenticateAndRetrieveDataProxy.ReauthenticateAndRetrieveData
	UReauthenticateAndRetrieveDataProxy* ReauthenticateAndRetrieveData(UUser* User, FCredential& Credential);                // [0x160ce00] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/FirebaseFeatures.ReauthenticateWithProviderProxy
/// Size: 0x0030 (0x000038 - 0x000068)
class UReauthenticateWithProviderProxy : public UUserNodeBase : UUserNodeBase
{ 
public:
	FMulticastInlineDelegate                           OnReauthenticated;                                          // 0x0038   (0x0010)  
	FMulticastInlineDelegate                           OnError;                                                    // 0x0048   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0058   (0x0010)  MISSED


	/// Functions
	// Function /Script/FirebaseFeatures.ReauthenticateWithProviderProxy.ReauthenticateWithProvider
	UReauthenticateWithProviderProxy* ReauthenticateWithProvider(UUser* User, FFederatedAuthProvider& Provider);             // [0x160cf30] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/FirebaseFeatures.SendEmailVerificationProxy
/// Size: 0x0020 (0x000038 - 0x000058)
class USendEmailVerificationProxy : public UUserNodeBase : UUserNodeBase
{ 
public:
	FMulticastInlineDelegate                           OnEmailSent;                                                // 0x0038   (0x0010)  
	FMulticastInlineDelegate                           OnError;                                                    // 0x0048   (0x0010)  


	/// Functions
	// Function /Script/FirebaseFeatures.SendEmailVerificationProxy.SendEmailVerification
	USendEmailVerificationProxy* SendEmailVerification(UUser* User);                                                         // [0x160d0e0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/FirebaseFeatures.UpdateUserProfileProxy
/// Size: 0x0050 (0x000038 - 0x000088)
class UUpdateUserProfileProxy : public UUserNodeBase : UUserNodeBase
{ 
public:
	FMulticastInlineDelegate                           OnProfileUpdated;                                           // 0x0038   (0x0010)  
	FMulticastInlineDelegate                           OnError;                                                    // 0x0048   (0x0010)  
	unsigned char                                      UnknownData00_6[0x30];                                      // 0x0058   (0x0030)  MISSED


	/// Functions
	// Function /Script/FirebaseFeatures.UpdateUserProfileProxy.UpdateUserProfile
	UUpdateUserProfileProxy* UpdateUserProfile(UUser* User, FUserProfile& Profile);                                          // [0x160d5c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/FirebaseFeatures.LinkWithCredentialProxy
/// Size: 0x0028 (0x000038 - 0x000060)
class ULinkWithCredentialProxy : public UUserNodeBase : UUserNodeBase
{ 
public:
	FMulticastInlineDelegate                           OnLinked;                                                   // 0x0038   (0x0010)  
	FMulticastInlineDelegate                           OnError;                                                    // 0x0048   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0058   (0x0008)  MISSED


	/// Functions
	// Function /Script/FirebaseFeatures.LinkWithCredentialProxy.LinkWithCredential
	ULinkWithCredentialProxy* LinkWithCredential(UUser* User, FCredential& Credential);                                      // [0x160c740] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/FirebaseFeatures.LinkAndRetrieveDataWithCredentialProxy
/// Size: 0x0028 (0x000038 - 0x000060)
class ULinkAndRetrieveDataWithCredentialProxy : public UUserNodeBase : UUserNodeBase
{ 
public:
	FMulticastInlineDelegate                           OnLinked;                                                   // 0x0038   (0x0010)  
	FMulticastInlineDelegate                           OnError;                                                    // 0x0048   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0058   (0x0008)  MISSED


	/// Functions
	// Function /Script/FirebaseFeatures.LinkAndRetrieveDataWithCredentialProxy.LinkAndRetrieveDataWithCredential
	ULinkAndRetrieveDataWithCredentialProxy* LinkAndRetrieveDataWithCredential(UUser* User, FCredential& Credential);        // [0x160c610] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/FirebaseFeatures.LinkWithProviderProxy
/// Size: 0x0030 (0x000038 - 0x000068)
class ULinkWithProviderProxy : public UUserNodeBase : UUserNodeBase
{ 
public:
	FMulticastInlineDelegate                           OnLinked;                                                   // 0x0038   (0x0010)  
	FMulticastInlineDelegate                           OnError;                                                    // 0x0048   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0058   (0x0010)  MISSED


	/// Functions
	// Function /Script/FirebaseFeatures.LinkWithProviderProxy.LinkWithProvider
	ULinkWithProviderProxy* LinkWithProvider(UUser* User, FFederatedAuthProvider& Provider);                                 // [0x160c870] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/FirebaseFeatures.UnlinkProxy
/// Size: 0x0030 (0x000038 - 0x000068)
class UUnlinkProxy : public UUserNodeBase : UUserNodeBase
{ 
public:
	FMulticastInlineDelegate                           OnUnlinked;                                                 // 0x0038   (0x0010)  
	FMulticastInlineDelegate                           OnError;                                                    // 0x0048   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0058   (0x0010)  MISSED


	/// Functions
	// Function /Script/FirebaseFeatures.UnlinkProxy.Unlink
	UUnlinkProxy* Unlink(UUser* User, FString Provider);                                                                     // [0x160d1f0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/FirebaseFeatures.UpdatePhoneNumberCredentialProxy
/// Size: 0x0028 (0x000038 - 0x000060)
class UUpdatePhoneNumberCredentialProxy : public UUserNodeBase : UUserNodeBase
{ 
public:
	FMulticastInlineDelegate                           OnUpdated;                                                  // 0x0038   (0x0010)  
	FMulticastInlineDelegate                           OnError;                                                    // 0x0048   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0058   (0x0008)  MISSED


	/// Functions
	// Function /Script/FirebaseFeatures.UpdatePhoneNumberCredentialProxy.UpdatePhoneNumberCredential
	UUpdatePhoneNumberCredentialProxy* UpdatePhoneNumberCredential(UUser* User, FCredential& Credential);                    // [0x160d490] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/FirebaseFeatures.ReloadProxy
/// Size: 0x0020 (0x000038 - 0x000058)
class UReloadProxy : public UUserNodeBase : UUserNodeBase
{ 
public:
	FMulticastInlineDelegate                           OnReloaded;                                                 // 0x0038   (0x0010)  
	FMulticastInlineDelegate                           OnError;                                                    // 0x0048   (0x0010)  


	/// Functions
	// Function /Script/FirebaseFeatures.ReloadProxy.Reload
	UReloadProxy* Reload(UUser* User);                                                                                       // [0x160d050] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/FirebaseFeatures.DeleteProxy
/// Size: 0x0020 (0x000038 - 0x000058)
class UDeleteProxy : public UUserNodeBase : UUserNodeBase
{ 
public:
	FMulticastInlineDelegate                           OnDeleted;                                                  // 0x0038   (0x0010)  
	FMulticastInlineDelegate                           OnError;                                                    // 0x0048   (0x0010)  


	/// Functions
	// Function /Script/FirebaseFeatures.DeleteProxy.Delete
	UDeleteProxy* Delete(UUser* User);                                                                                       // [0x160c350] Final|Native|Static|Public|BlueprintCallable 
};

/// Enum /Script/FirebaseFeatures.EAdMobPresentationState
/// Size: 0x05
enum EAdMobPresentationState : uint8_t
{
	EAdMobPresentationState__Hidden0                                                 = 0,
	EAdMobPresentationState__CoveringUI1                                             = 1,
	EAdMobPresentationState__VideoHasStarted2                                        = 2,
	EAdMobPresentationState__VideoHasCompleted3                                      = 3,
	EAdMobPresentationState__EAdMobPresentationState_MAX4                            = 4
};

/// Enum /Script/FirebaseFeatures.EFirestoreError
/// Size: 0x18
enum EFirestoreError : uint8_t
{
	EFirestoreError__Ok0                                                             = 0,
	EFirestoreError__Cancelled1                                                      = 1,
	EFirestoreError__Unknown2                                                        = 2,
	EFirestoreError__InvalidArgument3                                                = 3,
	EFirestoreError__DeadlineExceeded4                                               = 4,
	EFirestoreError__NotFound5                                                       = 5,
	EFirestoreError__AlreadyExists6                                                  = 6,
	EFirestoreError__PermissionDenied7                                               = 7,
	EFirestoreError__ResourceExhausted8                                              = 8,
	EFirestoreError__FailedPrecondition9                                             = 9,
	EFirestoreError__Aborted10                                                       = 10,
	EFirestoreError__OutOfRange11                                                    = 11,
	EFirestoreError__Unimplemented12                                                 = 12,
	EFirestoreError__Internal13                                                      = 13,
	EFirestoreError__Unavailable14                                                   = 14,
	EFirestoreError__DataLoss15                                                      = 15,
	EFirestoreError__Unauthenticated16                                               = 16,
	EFirestoreError__EFirestoreError_MAX17                                           = 17
};

/// Enum /Script/FirebaseFeatures.EFbAdMobError
/// Size: 0x10
enum EFbAdMobError : uint8_t
{
	EFbAdMobError__None0                                                             = 0,
	EFbAdMobError__Uninitialized1                                                    = 1,
	EFbAdMobError__AlreadyInitialized2                                               = 2,
	EFbAdMobError__LoadInProgress3                                                   = 3,
	EFbAdMobError__InternalError4                                                    = 4,
	EFbAdMobError__InvalidRequest5                                                   = 5,
	EFbAdMobError__NetworkError6                                                     = 6,
	EFbAdMobError__NoFill7                                                           = 7,
	EFbAdMobError__NoWindowToken8                                                    = 8,
	EFbAdMobError__EFbAdMobError_MAX9                                                = 9
};

/// Enum /Script/FirebaseFeatures.EFirebaseStorageError
/// Size: 0x14
enum EFirebaseStorageError : uint8_t
{
	EFirebaseStorageError__None0                                                     = 0,
	EFirebaseStorageError__Unknown1                                                  = 1,
	EFirebaseStorageError__ObjectNotFound2                                           = 2,
	EFirebaseStorageError__BucketNotFound3                                           = 3,
	EFirebaseStorageError__ProjectNotFound4                                          = 4,
	EFirebaseStorageError__QuotaExceeded5                                            = 5,
	EFirebaseStorageError__Unauthenticated6                                          = 6,
	EFirebaseStorageError__Unauthorized7                                             = 7,
	EFirebaseStorageError__RetryLimitExceeded8                                       = 8,
	EFirebaseStorageError__NonMatchingChecksum9                                      = 9,
	EFirebaseStorageError__DownloadSizeExceeded10                                    = 10,
	EFirebaseStorageError__Cancelled11                                               = 11,
	EFirebaseStorageError__FileNotFound12                                            = 100,
	EFirebaseStorageError__EFirebaseStorageError_MAX13                               = 101
};

/// Enum /Script/FirebaseFeatures.EFirebaseFunctionsError
/// Size: 0x18
enum EFirebaseFunctionsError : uint8_t
{
	EFirebaseFunctionsError__None0                                                   = 0,
	EFirebaseFunctionsError__Cancelled1                                              = 1,
	EFirebaseFunctionsError__Unknown2                                                = 2,
	EFirebaseFunctionsError__InvalidArgument3                                        = 3,
	EFirebaseFunctionsError__DeadlineExceeded4                                       = 4,
	EFirebaseFunctionsError__NotFound5                                               = 5,
	EFirebaseFunctionsError__AlreadyExists6                                          = 6,
	EFirebaseFunctionsError__PermissionDenied7                                       = 7,
	EFirebaseFunctionsError__Unauthenticated8                                        = 16,
	EFirebaseFunctionsError__ResourceExhausted9                                      = 8,
	EFirebaseFunctionsError__FailedPrecondition10                                    = 9,
	EFirebaseFunctionsError__Aborted11                                               = 10,
	EFirebaseFunctionsError__OutOfRange12                                            = 11,
	EFirebaseFunctionsError__Unimplemented13                                         = 12,
	EFirebaseFunctionsError__Internal14                                              = 13,
	EFirebaseFunctionsError__Unavailable15                                           = 14,
	EFirebaseFunctionsError__DataLoss16                                              = 15,
	EFirebaseFunctionsError__EFirebaseFunctionsError_MAX17                           = 17
};

/// Enum /Script/FirebaseFeatures.EFirebaseDatabaseError
/// Size: 0x16
enum EFirebaseDatabaseError : uint8_t
{
	EFirebaseDatabaseError__None0                                                    = 0,
	EFirebaseDatabaseError__Disconnected1                                            = 1,
	EFirebaseDatabaseError__ExpiredToken2                                            = 2,
	EFirebaseDatabaseError__InvalidToken3                                            = 3,
	EFirebaseDatabaseError__MaxRetries4                                              = 4,
	EFirebaseDatabaseError__NetworkError5                                            = 5,
	EFirebaseDatabaseError__OperationFailed6                                         = 6,
	EFirebaseDatabaseError__OverriddenBySet7                                         = 7,
	EFirebaseDatabaseError__PermissionDenied8                                        = 8,
	EFirebaseDatabaseError__Unavailable9                                             = 9,
	EFirebaseDatabaseError__UnknownError10                                           = 10,
	EFirebaseDatabaseError__WriteCanceled11                                          = 11,
	EFirebaseDatabaseError__InvalidVariantType12                                     = 12,
	EFirebaseDatabaseError__ConflictingOperationInProgress13                         = 13,
	EFirebaseDatabaseError__TransactionAbortedByUser14                               = 14,
	EFirebaseDatabaseError__EFirebaseDatabaseError_MAX15                             = 15
};

/// Enum /Script/FirebaseFeatures.EFirebaseAuthError
/// Size: 0x81
enum EFirebaseAuthError : uint8_t
{
	EFirebaseAuthError__None0                                                        = 0,
	EFirebaseAuthError__Unimplemented1                                               = 255,
	EFirebaseAuthError__Failure2                                                     = 1,
	EFirebaseAuthError__InvalidCustomToken3                                          = 2,
	EFirebaseAuthError__CustomTokenMismatch4                                         = 3,
	EFirebaseAuthError__InvalidCredential5                                           = 4,
	EFirebaseAuthError__UserDisabled6                                                = 5,
	EFirebaseAuthError__AccountExistsWithDifferentCredentials7                       = 6,
	EFirebaseAuthError__OperationNotAllowed8                                         = 7,
	EFirebaseAuthError__EmailAlreadyInUse9                                           = 8,
	EFirebaseAuthError__RequiresRecentLogin10                                        = 9,
	EFirebaseAuthError__CredentialAlreadyInUse11                                     = 10,
	EFirebaseAuthError__InvalidEmail12                                               = 11,
	EFirebaseAuthError__WrongPassword13                                              = 12,
	EFirebaseAuthError__TooManyRequests14                                            = 13,
	EFirebaseAuthError__UserNotFound15                                               = 14,
	EFirebaseAuthError__ProviderAlreadyLinked16                                      = 15,
	EFirebaseAuthError__NoSuchProvider17                                             = 16,
	EFirebaseAuthError__InvalidUserToken18                                           = 17,
	EFirebaseAuthError__UserTokenExpired19                                           = 18,
	EFirebaseAuthError__NetworkRequestFailed20                                       = 19,
	EFirebaseAuthError__InvalidApiKey21                                              = 20,
	EFirebaseAuthError__AppNotAuthorized22                                           = 21,
	EFirebaseAuthError__UserMismatch23                                               = 22,
	EFirebaseAuthError__WeakPassword24                                               = 23,
	EFirebaseAuthError__NoSignedInUser25                                             = 24,
	EFirebaseAuthError__ApiNotAvailable26                                            = 25,
	EFirebaseAuthError__ExpiredActionCode27                                          = 26,
	EFirebaseAuthError__InvalidActionCode28                                          = 27,
	EFirebaseAuthError__InvalidMessagePayload29                                      = 28,
	EFirebaseAuthError__InvalidPhoneNumber30                                         = 29,
	EFirebaseAuthError__MissingPhoneNumber31                                         = 30,
	EFirebaseAuthError__InvalidRecipientEmail32                                      = 31,
	EFirebaseAuthError__InvalidSender33                                              = 32,
	EFirebaseAuthError__InvalidVerificationCode34                                    = 33,
	EFirebaseAuthError__InvalidVerificationId35                                      = 34,
	EFirebaseAuthError__MissingVerificationCode36                                    = 35,
	EFirebaseAuthError__MissingVerificationId37                                      = 36,
	EFirebaseAuthError__MissingEmail38                                               = 37,
	EFirebaseAuthError__MissingPassword39                                            = 38,
	EFirebaseAuthError__QuotaExceeded40                                              = 39,
	EFirebaseAuthError__RetryPhoneAuth41                                             = 40,
	EFirebaseAuthError__SessionExpired42                                             = 41,
	EFirebaseAuthError__AppNotVerified43                                             = 42,
	EFirebaseAuthError__AppVerificationFailed44                                      = 43,
	EFirebaseAuthError__CaptchaCheckFailed45                                         = 44,
	EFirebaseAuthError__InvalidAppCredential46                                       = 45,
	EFirebaseAuthError__MissingAppCredential47                                       = 46,
	EFirebaseAuthError__InvalidClientId48                                            = 47,
	EFirebaseAuthError__InvalidContinueUri49                                         = 48,
	EFirebaseAuthError__MissingContinueUri50                                         = 49,
	EFirebaseAuthError__KeychainError51                                              = 50,
	EFirebaseAuthError__MissingAppToken52                                            = 51,
	EFirebaseAuthError__MissingIosBundleId53                                         = 52,
	EFirebaseAuthError__NotificationNotForwarded54                                   = 53,
	EFirebaseAuthError__UnauthorizedDomain55                                         = 54,
	EFirebaseAuthError__WebContextAlreadyPresented56                                 = 55,
	EFirebaseAuthError__WebContextCancelled57                                        = 56,
	EFirebaseAuthError__DynamicLinkNotActivated58                                    = 57,
	EFirebaseAuthError__Cancelled59                                                  = 58,
	EFirebaseAuthError__InvalidProviderId60                                          = 59,
	EFirebaseAuthError__WebInternalError61                                           = 60,
	EFirebaseAuthError__WebStorateUnsupported62                                      = 61,
	EFirebaseAuthError__TenantIdMismatch63                                           = 62,
	EFirebaseAuthError__UnsupportedTenantOperation64                                 = 63,
	EFirebaseAuthError__InvalidLinkDomain65                                          = 64,
	EFirebaseAuthError__RejectedCredential66                                         = 65,
	EFirebaseAuthError__PhoneNumberNotFound67                                        = 66,
	EFirebaseAuthError__InvalidTenantId68                                            = 67,
	EFirebaseAuthError__MissingClientIdentifier69                                    = 68,
	EFirebaseAuthError__MissingMultiFactorSession70                                  = 69,
	EFirebaseAuthError__MissingMultiFactorInfo71                                     = 70,
	EFirebaseAuthError__InvalidMultiFactorSession72                                  = 71,
	EFirebaseAuthError__MultiFactorInfoNotFound73                                    = 72,
	EFirebaseAuthError__AdminRestrictedOperation74                                   = 73,
	EFirebaseAuthError__UnverifiedEmail75                                            = 74,
	EFirebaseAuthError__SecondFactorAlreadyEnrolled76                                = 75,
	EFirebaseAuthError__MaximumSecondFactorCountExceeded77                           = 76,
	EFirebaseAuthError__UnsupportedFirstFactor78                                     = 77,
	EFirebaseAuthError__EmailChangeNeedsVerification79                               = 78,
	EFirebaseAuthError__EFirebaseAuthError_MAX80                                     = 256
};

/// Enum /Script/FirebaseFeatures.EFirebaseMessagingError
/// Size: 0x06
enum EFirebaseMessagingError : uint8_t
{
	EFirebaseMessagingError__None0                                                   = 0,
	EFirebaseMessagingError__FailedToRegisterForRemoteNotifications1                 = 1,
	EFirebaseMessagingError__InvalidTopicName2                                       = 2,
	EFirebaseMessagingError__NoRegistrationToken3                                    = 3,
	EFirebaseMessagingError__Unknown4                                                = 4,
	EFirebaseMessagingError__EFirebaseMessagingError_MAX5                            = 5
};

/// Enum /Script/FirebaseFeatures.ELinkMatchStrength
/// Size: 0x05
enum ELinkMatchStrength : uint8_t
{
	ELinkMatchStrength__NoMatch0                                                     = 0,
	ELinkMatchStrength__WeakMatch1                                                   = 1,
	ELinkMatchStrength__StrongMatch2                                                 = 2,
	ELinkMatchStrength__PerfectMatch3                                                = 3,
	ELinkMatchStrength__ELinkMatchStrength_MAX4                                      = 4
};

/// Enum /Script/FirebaseFeatures.ETransactionResult
/// Size: 0x03
enum ETransactionResult : uint8_t
{
	ETransactionResult__Success0                                                     = 0,
	ETransactionResult__Abort1                                                       = 1,
	ETransactionResult__ETransactionResult_MAX2                                      = 2
};

/// Enum /Script/FirebaseFeatures.EDatabaseLogLevel
/// Size: 0x07
enum EDatabaseLogLevel : uint8_t
{
	EDatabaseLogLevel__Verbose0                                                      = 0,
	EDatabaseLogLevel__Debug1                                                        = 1,
	EDatabaseLogLevel__Info2                                                         = 2,
	EDatabaseLogLevel__Warning3                                                      = 3,
	EDatabaseLogLevel__Error4                                                        = 4,
	EDatabaseLogLevel__Assert5                                                       = 5,
	EDatabaseLogLevel__EDatabaseLogLevel_MAX6                                        = 6
};

/// Enum /Script/FirebaseFeatures.EDocumentChangeType
/// Size: 0x04
enum EDocumentChangeType : uint8_t
{
	EDocumentChangeType__Added0                                                      = 0,
	EDocumentChangeType__Modified1                                                   = 1,
	EDocumentChangeType__Removed2                                                    = 2,
	EDocumentChangeType__EDocumentChangeType_MAX3                                    = 3
};

/// Enum /Script/FirebaseFeatures.EFirestoreServerTimestampBehavior
/// Size: 0x04
enum EFirestoreServerTimestampBehavior : uint8_t
{
	EFirestoreServerTimestampBehavior__Estimate0                                     = 1,
	EFirestoreServerTimestampBehavior__Previous1                                     = 2,
	EFirestoreServerTimestampBehavior__Default2                                      = 0,
	EFirestoreServerTimestampBehavior__EFirestoreServerTimestampBehavior_MAX3        = 3
};

/// Enum /Script/FirebaseFeatures.EPathLength
/// Size: 0x04
enum EPathLength : uint8_t
{
	EPathLength__PathLengthDefault0                                                  = 0,
	EPathLength__PathLengthShort1                                                    = 1,
	EPathLength__PathLengthUnguessable2                                              = 2,
	EPathLength__EPathLength_MAX3                                                    = 3
};

/// Enum /Script/FirebaseFeatures.EAdMobGender
/// Size: 0x04
enum EAdMobGender : uint8_t
{
	EAdMobGender__Unknown0                                                           = 0,
	EAdMobGender__Male1                                                              = 1,
	EAdMobGender__Female2                                                            = 2,
	EAdMobGender__EAdMobGender_MAX3                                                  = 3
};

/// Enum /Script/FirebaseFeatures.EAdMobChildDirectedTreatmentState
/// Size: 0x04
enum EAdMobChildDirectedTreatmentState : uint8_t
{
	EAdMobChildDirectedTreatmentState__Unknown0                                      = 0,
	EAdMobChildDirectedTreatmentState__Tagged1                                       = 1,
	EAdMobChildDirectedTreatmentState__NotTagged2                                    = 2,
	EAdMobChildDirectedTreatmentState__EAdMobChildDirectedTreatmentState_MAX3        = 3
};

/// Enum /Script/FirebaseFeatures.EAdMobBannerViewPosition
/// Size: 0x07
enum EAdMobBannerViewPosition : uint8_t
{
	EAdMobBannerViewPosition__Top0                                                   = 0,
	EAdMobBannerViewPosition__Bottom1                                                = 1,
	EAdMobBannerViewPosition__TopLeft2                                               = 2,
	EAdMobBannerViewPosition__TopRight3                                              = 3,
	EAdMobBannerViewPosition__BottomLeft4                                            = 4,
	EAdMobBannerViewPosition__BottomRight5                                           = 5,
	EAdMobBannerViewPosition__EAdMobBannerViewPosition_MAX6                          = 6
};

/// Enum /Script/FirebaseFeatures.EAdMobInterstitialAdPresentationState
/// Size: 0x03
enum EAdMobInterstitialAdPresentationState : uint8_t
{
	EAdMobInterstitialAdPresentationState__PresentationStateHidden0                  = 0,
	EAdMobInterstitialAdPresentationState__PresentationStateCoveringUI1              = 1,
	EAdMobInterstitialAdPresentationState__EAdMobInterstitialAdPresentationState_MAX2 = 2
};

/// Enum /Script/FirebaseFeatures.EFirestoreFieldValueType
/// Size: 0x12
enum EFirestoreFieldValueType : uint8_t
{
	EFirestoreFieldValueType__Null0                                                  = 0,
	EFirestoreFieldValueType__Boolean1                                               = 1,
	EFirestoreFieldValueType__Integer2                                               = 2,
	EFirestoreFieldValueType__Double3                                                = 3,
	EFirestoreFieldValueType__Timestamp4                                             = 4,
	EFirestoreFieldValueType__String5                                                = 5,
	EFirestoreFieldValueType__Blob6                                                  = 6,
	EFirestoreFieldValueType__Reference7                                             = 7,
	EFirestoreFieldValueType__GeoPoint8                                              = 8,
	EFirestoreFieldValueType__Array9                                                 = 9,
	EFirestoreFieldValueType__Map10                                                  = 10,
	EFirestoreFieldValueType__EFirestoreFieldValueType_MAX11                         = 11
};

/// Enum /Script/FirebaseFeatures.EAppCheckProvider
/// Size: 0x06
enum EAppCheckProvider : uint8_t
{
	EAppCheckProvider__None0                                                         = 0,
	EAppCheckProvider__PlayIntegrity1                                                = 1,
	EAppCheckProvider__DeviceCheck2                                                  = 2,
	EAppCheckProvider__AppAttest3                                                    = 3,
	EAppCheckProvider__Debug4                                                        = 4,
	EAppCheckProvider__EAppCheckProvider_MAX5                                        = 5
};

/// Enum /Script/FirebaseFeatures.EFirebaseSDKCreateApp
/// Size: 0x03
enum EFirebaseSDKCreateApp : uint8_t
{
	EFirebaseSDKCreateApp__Success0                                                  = 0,
	EFirebaseSDKCreateApp__Failed1                                                   = 1,
	EFirebaseSDKCreateApp__EFirebaseSDKCreateApp_MAX2                                = 2
};

/// Enum /Script/FirebaseFeatures.EFirebaseVariantType
/// Size: 0x11
enum EFirebaseVariantType : uint8_t
{
	EFirebaseVariantType__Null0                                                      = 0,
	EFirebaseVariantType__Int641                                                     = 1,
	EFirebaseVariantType__Double2                                                    = 2,
	EFirebaseVariantType__Bool3                                                      = 3,
	EFirebaseVariantType__StaticString4                                              = 4,
	EFirebaseVariantType__MutableString5                                             = 5,
	EFirebaseVariantType__Vector6                                                    = 6,
	EFirebaseVariantType__Map7                                                       = 7,
	EFirebaseVariantType__StaticBlob8                                                = 8,
	EFirebaseVariantType__MutableBlob9                                               = 9,
	EFirebaseVariantType__EFirebaseVariantType_MAX10                                 = 10
};

/// Enum /Script/FirebaseFeatures.EFirestoreSetOptionsType
/// Size: 0x04
enum EFirestoreSetOptionsType : uint8_t
{
	EFirestoreSetOptionsType__Overwrite0                                             = 0,
	EFirestoreSetOptionsType__MergeAll1                                              = 1,
	EFirestoreSetOptionsType__MergeSpecific2                                         = 2,
	EFirestoreSetOptionsType__EFirestoreSetOptionsType_MAX3                          = 3
};

/// Enum /Script/FirebaseFeatures.EFirestoreSource
/// Size: 0x04
enum EFirestoreSource : uint8_t
{
	EFirestoreSource__Default0                                                       = 0,
	EFirestoreSource__Server1                                                        = 1,
	EFirestoreSource__Cache2                                                         = 2,
	EFirestoreSource__EFirestoreSource_MAX3                                          = 3
};

/// Enum /Script/FirebaseFeatures.EFirestoreQueryDirection
/// Size: 0x03
enum EFirestoreQueryDirection : uint8_t
{
	EFirestoreQueryDirection__Ascending0                                             = 0,
	EFirestoreQueryDirection__Descending1                                            = 1,
	EFirestoreQueryDirection__EFirestoreQueryDirection_MAX2                          = 2
};

/// Enum /Script/FirebaseFeatures.EFirebaseConfigFetchActivationBranch
/// Size: 0x03
enum EFirebaseConfigFetchActivationBranch : uint8_t
{
	EFirebaseConfigFetchActivationBranch__Activated0                                 = 0,
	EFirebaseConfigFetchActivationBranch__NotActivated1                              = 1,
	EFirebaseConfigFetchActivationBranch__EFirebaseConfigFetchActivationBranch_MAX2  = 2
};

/// Enum /Script/FirebaseFeatures.EFirebaseValueSource
/// Size: 0x04
enum EFirebaseValueSource : uint8_t
{
	EFirebaseValueSource__StaticValue0                                               = 0,
	EFirebaseValueSource__RemoteValue1                                               = 1,
	EFirebaseValueSource__DefaultValue2                                              = 2,
	EFirebaseValueSource__EFirebaseValueSource_MAX3                                  = 3
};

/// Enum /Script/FirebaseFeatures.EFirebaseLastFetchStatus
/// Size: 0x04
enum EFirebaseLastFetchStatus : uint8_t
{
	EFirebaseLastFetchStatus__Success0                                               = 0,
	EFirebaseLastFetchStatus__Failure1                                               = 1,
	EFirebaseLastFetchStatus__Pending2                                               = 2,
	EFirebaseLastFetchStatus__EFirebaseLastFetchStatus_MAX3                          = 3
};

/// Enum /Script/FirebaseFeatures.EFirebaseFetchFailureReason
/// Size: 0x04
enum EFirebaseFetchFailureReason : uint8_t
{
	EFirebaseFetchFailureReason__Invalid0                                            = 0,
	EFirebaseFetchFailureReason__Throttled1                                          = 1,
	EFirebaseFetchFailureReason__Error2                                              = 2,
	EFirebaseFetchFailureReason__EFirebaseFetchFailureReason_MAX3                    = 3
};

/// Enum /Script/FirebaseFeatures.EFirebaseConfigSetting
/// Size: 0x02
enum EFirebaseConfigSetting : uint8_t
{
	EFirebaseConfigSetting__SettingDeveloperMode0                                    = 0,
	EFirebaseConfigSetting__EFirebaseConfigSetting_MAX1                              = 1
};

/// Enum /Script/FirebaseFeatures.EFetchFailureReason
/// Size: 0x04
enum EFetchFailureReason : uint8_t
{
	EFetchFailureReason__Invalid0                                                    = 0,
	EFetchFailureReason__Throttled1                                                  = 1,
	EFetchFailureReason__Error2                                                      = 2,
	EFetchFailureReason__EFetchFailureReason_MAX3                                    = 3
};

/// Enum /Script/FirebaseFeatures.EFirebaseStorageBlueprintExecutionPin
/// Size: 0x03
enum EFirebaseStorageBlueprintExecutionPin : uint8_t
{
	EFirebaseStorageBlueprintExecutionPin__Success0                                  = 0,
	EFirebaseStorageBlueprintExecutionPin__Failed1                                   = 1,
	EFirebaseStorageBlueprintExecutionPin__EFirebaseStorageBlueprintExecutionPin_MAX2 = 2
};

