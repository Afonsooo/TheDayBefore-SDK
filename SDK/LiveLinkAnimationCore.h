
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package LiveLinkAnimationCore.

/// Struct /Script/LiveLinkAnimationCore.AnimNode_LiveLinkPose
/// Size: 0x0038 (0x000010 - 0x000048)
struct FAnimNode_LiveLinkPose : FAnimNode_Base
{ 
	FPoseLink                                          InputPose;                                                  // 0x0010   (0x0010)  
	FLiveLinkSubjectName                               LiveLinkSubjectName;                                        // 0x0020   (0x0008)  
	UClass*                                            RetargetAsset;                                              // 0x0028   (0x0008)  
	ULiveLinkRetargetAsset*                            CurrentRetargetAsset;                                       // 0x0030   (0x0008)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0038   (0x0010)  MISSED
};

/// Struct /Script/LiveLinkAnimationCore.LiveLinkInstanceProxy
/// Size: 0x0040 (0x000880 - 0x0008C0)
struct FLiveLinkInstanceProxy : FAnimInstanceProxy
{ 
	FAnimNode_LiveLinkPose                             PoseNode;                                                   // 0x0878   (0x0048)  
};

/// Class /Script/LiveLinkAnimationCore.LiveLinkRetargetAsset
/// Size: 0x0000 (0x000028 - 0x000028)
class ULiveLinkRetargetAsset : public UObject : UObject
{ 
public:
};

/// Class /Script/LiveLinkAnimationCore.LiveLinkInstance
/// Size: 0x0000 (0x000350 - 0x000350)
class ULiveLinkInstance : public UAnimInstance : UAnimInstance
{ 
public:


	/// Functions
	// Function /Script/LiveLinkAnimationCore.LiveLinkInstance.SetSubject
	void SetSubject(FLiveLinkSubjectName SubjectName);                                                                       // [0x49ff770] Final|Native|Public|BlueprintCallable 
	// Function /Script/LiveLinkAnimationCore.LiveLinkInstance.SetRetargetAsset
	void SetRetargetAsset(UClass* RetargetAsset);                                                                            // [0x49ff690] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/LiveLinkAnimationCore.LiveLinkRemapAsset
/// Size: 0x00A0 (0x000028 - 0x0000C8)
class ULiveLinkRemapAsset : public ULiveLinkRetargetAsset : ULiveLinkRetargetAsset
{ 
public:
	unsigned char                                      UnknownData00_1[0xA0];                                      // 0x0028   (0x00A0)  MISSED
};

