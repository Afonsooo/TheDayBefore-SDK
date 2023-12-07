
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package SurvivalPlayer.

/// Class /Game/SurvivalPlayer.SurvivalPlayer_C
/// Size: 0x2F89 (0x0007B0 - 0x003739)
class ASurvivalPlayer_C : public ACharacterHeadStim : ACharacterHeadStim
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x07B0   (0x0008)  
	UBoxComponent*                                     Box;                                                        // 0x07B8   (0x0008)  
	UBPC_BarPlayerComponent_C*                         BPC_BarPlayerComponent;                                     // 0x07C0   (0x0008)  
	UFMODAudioComponent*                               BreathSprint;                                               // 0x07C8   (0x0008)  
	UFMODAudioComponent*                               BreathSystem;                                               // 0x07D0   (0x0008)  
	UBPC_BreathSystemReplication_C*                    BPC_BreathSystemReplication;                                // 0x07D8   (0x0008)  
	UPlayerInventoryCollector_C*                       PlayerInventoryCollector;                                   // 0x07E0   (0x0008)  
	UAC_SurvQuestInteract_C*                           AC_SurvQuestInteract;                                       // 0x07E8   (0x0008)  
	UBPC_Binoculars_C*                                 BPC_Binoculars;                                             // 0x07F0   (0x0008)  
	UBPC_NegativeEffects_C*                            BPC_NegativeEffects;                                        // 0x07F8   (0x0008)  
	USceneComponent*                                   GpsSocket;                                                  // 0x0800   (0x0008)  
	USurvivalATPCCameraComponent_C*                    ATPCCamera;                                                 // 0x0808   (0x0008)  
	USceneComponent*                                   CameraSceneSocket;                                          // 0x0810   (0x0008)  
	UWidgetComponent*                                  SquadMemberWidget;                                          // 0x0818   (0x0008)  
	UBPC_WeaponAttachments_C*                          BPC_WeaponAttachmentsSystem;                                // 0x0820   (0x0008)  
	USceneComponent*                                   PointToInteract;                                            // 0x0828   (0x0008)  
	UCameraComponent*                                  Camera;                                                     // 0x0830   (0x0008)  
	UStaticMeshComponent*                              Sphere;                                                     // 0x0838   (0x0008)  
	USceneComponent*                                   CompasSocket;                                               // 0x0840   (0x0008)  
	USkeletalMeshComponent*                            beard;                                                      // 0x0848   (0x0008)  
	UChildActorComponent*                              PistolWP;                                                   // 0x0850   (0x0008)  
	UBPC_SharpSync_C*                                  SharpSync;                                                  // 0x0858   (0x0008)  
	UChildActorComponent*                              FP_WP;                                                      // 0x0860   (0x0008)  
	UBP_WeaponWithOwnFOV_C*                            FPMeshNew;                                                  // 0x0868   (0x0008)  
	UPostProcessComponent*                             PostProcess;                                                // 0x0870   (0x0008)  
	UChildActorComponent*                              SecondaryWP;                                                // 0x0878   (0x0008)  
	UChildActorComponent*                              PrimaryWP;                                                  // 0x0880   (0x0008)  
	UStaticMeshComponent*                              Sphere1;                                                    // 0x0888   (0x0008)  
	USceneComponent*                                   FPSocket;                                                   // 0x0890   (0x0008)  
	UBPC_PlayerStatsComponent_C*                       BPC_PlayerStatsComponent;                                   // 0x0898   (0x0008)  
	UBPC_PerkSystem_C*                                 BPC_PerkSystem;                                             // 0x08A0   (0x0008)  
	UVoipAudioComponent*                               RadioVOIP;                                                  // 0x08A8   (0x0008)  
	UVoipAudioComponent*                               TeamVOIP;                                                   // 0x08B0   (0x0008)  
	UVoipManagerComponent*                             VoipManager;                                                // 0x08B8   (0x0008)  
	UBP_QuestComponent_C*                              QuestComponentV4;                                           // 0x08C0   (0x0008)  
	UQuestSystemComp_C*                                QuestSystemComp;                                            // 0x08C8   (0x0008)  
	UADSDialoguePartecipantComponent*                  ADSDialoguePartecipant;                                     // 0x08D0   (0x0008)  
	UBPC_TAAManager_C*                                 BPC_TAAManager;                                             // 0x08D8   (0x0008)  
	USGInventoryWorker_C*                              SGInventoryWorker;                                          // 0x08E0   (0x0008)  
	UFMODAudioComponent*                               _breath_stealth_aim_idle;                                   // 0x08E8   (0x0008)  
	UFMODAudioComponent*                               _breath_idle;                                               // 0x08F0   (0x0008)  
	USpringArmComponent*                               FlashlightArm;                                              // 0x08F8   (0x0008)  
	UBPC_AlarmSystem_C*                                BPC_AlarmSystem;                                            // 0x0900   (0x0008)  
	UChildActorComponent*                              NeckPercept;                                                // 0x0908   (0x0008)  
	UFootprintComponent_C*                             FootprintComponent;                                         // 0x0910   (0x0008)  
	ULocalPhycisContraint_C*                           LocalPhycisContraint;                                       // 0x0918   (0x0008)  
	UStaticMeshComponent*                              SecondarySM;                                                // 0x0920   (0x0008)  
	UStaticMeshComponent*                              PrimarySM;                                                  // 0x0928   (0x0008)  
	UStaticMeshComponent*                              SecondaryPhysicsSM;                                         // 0x0930   (0x0008)  
	UStaticMeshComponent*                              PrimaryPhysicsSM;                                           // 0x0938   (0x0008)  
	UPhysicsConstraintComponent*                       UpperBack1PC;                                               // 0x0940   (0x0008)  
	UPhysicsConstraintComponent*                       UpperBack2PC;                                               // 0x0948   (0x0008)  
	UStaticMeshComponent*                              UpperBack2Root;                                             // 0x0950   (0x0008)  
	UStaticMeshComponent*                              UpperBack1Root;                                             // 0x0958   (0x0008)  
	UStaticMeshComponent*                              WeaponSlots;                                                // 0x0960   (0x0008)  
	UStaticMeshComponent*                              Pistol;                                                     // 0x0968   (0x0008)  
	UBP_CampClient_C*                                  BP_CampClient;                                              // 0x0970   (0x0008)  
	UWoundComponent_C*                                 WoundComponentPants;                                        // 0x0978   (0x0008)  
	UWoundComponent_C*                                 WoundComponentArmor;                                        // 0x0980   (0x0008)  
	UWoundComponent_C*                                 WoundComponentOuterwear;                                    // 0x0988   (0x0008)  
	UWoundComponent_C*                                 WoundComponentHelmet;                                       // 0x0990   (0x0008)  
	UWoundComponent_C*                                 WoundComponentHair;                                         // 0x0998   (0x0008)  
	UWoundComponent_C*                                 WoundComponentHead;                                         // 0x09A0   (0x0008)  
	USkeletalMeshComponent*                            BackpackSlot;                                               // 0x09A8   (0x0008)  
	USpawnManagerChild_C*                              SpawnManagerChild;                                          // 0x09B0   (0x0008)  
	UParticleSystemComponent*                          ParticleSystem;                                             // 0x09B8   (0x0008)  
	UAIPerceptionStimuliSourceComponent*               AIPerceptionStimuliSource;                                  // 0x09C0   (0x0008)  
	USpotLightComponent*                               flashlight;                                                 // 0x09C8   (0x0008)  
	USceneComponent*                                   FlashlightHolder;                                           // 0x09D0   (0x0008)  
	UBP_TrailComponent_C*                              PerceptActor;                                               // 0x09D8   (0x0008)  
	USkeletalMeshComponent*                            Hair2;                                                      // 0x09E0   (0x0008)  
	USkeletalMeshComponent*                            Hair1;                                                      // 0x09E8   (0x0008)  
	USkeletalMeshComponent*                            OuterwearSlot;                                              // 0x09F0   (0x0008)  
	USkeletalMeshComponent*                            PantsSlot;                                                  // 0x09F8   (0x0008)  
	USkeletalMeshComponent*                            HelmetSlot;                                                 // 0x0A00   (0x0008)  
	USkeletalMeshComponent*                            ArmorSlot;                                                  // 0x0A08   (0x0008)  
	UBPC_Equipment_C*                                  BPC_Equipment;                                              // 0x0A10   (0x0008)  
	float                                              InventoryOpenTimeline_Alpha_0D552CD3483F465436E2D395614F6698; // 0x0A18   (0x0004)  
	TEnumAsByte<ETimelineDirection>                    InventoryOpenTimeline__Direction_0D552CD3483F465436E2D395614F6698; // 0x0A1C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0A1D   (0x0003)  MISSED
	UTimelineComponent*                                InventoryOpenTimeline;                                      // 0x0A20   (0x0008)  
	float                                              ZoomGpsOffset_NewTrack_0_F16046D9475E3F9E4D62E0B91BFB8F76;  // 0x0A28   (0x0004)  
	TEnumAsByte<ETimelineDirection>                    ZoomGpsOffset__Direction_F16046D9475E3F9E4D62E0B91BFB8F76;  // 0x0A2C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0A2D   (0x0003)  MISSED
	UTimelineComponent*                                ZoomGpsOffset;                                              // 0x0A30   (0x0008)  
	float                                              ZoomGpsTL_NewTrack_0_76930A324240D4BB48A1EC939B450BFD;      // 0x0A38   (0x0004)  
	TEnumAsByte<ETimelineDirection>                    ZoomGpsTL__Direction_76930A324240D4BB48A1EC939B450BFD;      // 0x0A3C   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0A3D   (0x0003)  MISSED
	UTimelineComponent*                                ZoomGpsTL;                                                  // 0x0A40   (0x0008)  
	FVector                                            CrouchingWeaponOffsetTimeline_TPP_8596FEEC4522E8EF541DEBB9F5364653; // 0x0A48   (0x0018)  
	FVector                                            CrouchingWeaponOffsetTimeline_FPP_8596FEEC4522E8EF541DEBB9F5364653; // 0x0A60   (0x0018)  
	TEnumAsByte<ETimelineDirection>                    CrouchingWeaponOffsetTimeline__Direction_8596FEEC4522E8EF541DEBB9F5364653; // 0x0A78   (0x0001)  
	unsigned char                                      UnknownData03_5[0x7];                                       // 0x0A79   (0x0007)  MISSED
	UTimelineComponent*                                CrouchingWeaponOffsetTimeline;                              // 0x0A80   (0x0008)  
	float                                              Timeline_5_MinusStep_AB5EDB5449E8A99969AB0D98804B65D2;      // 0x0A88   (0x0004)  
	float                                              Timeline_5_PlusStep_AB5EDB5449E8A99969AB0D98804B65D2;       // 0x0A8C   (0x0004)  
	TEnumAsByte<ETimelineDirection>                    Timeline_5__Direction_AB5EDB5449E8A99969AB0D98804B65D2;     // 0x0A90   (0x0001)  
	unsigned char                                      UnknownData04_5[0x7];                                       // 0x0A91   (0x0007)  MISSED
	UTimelineComponent*                                Timeline;                                                   // 0x0A98   (0x0008)  
	float                                              Timeline_4_MinusStep_AF9523B64D162AD9062C1088AD0A0F37;      // 0x0AA0   (0x0004)  
	float                                              Timeline_4_PlusStep_AF9523B64D162AD9062C1088AD0A0F37;       // 0x0AA4   (0x0004)  
	TEnumAsByte<ETimelineDirection>                    Timeline_4__Direction_AF9523B64D162AD9062C1088AD0A0F37;     // 0x0AA8   (0x0001)  
	unsigned char                                      UnknownData05_5[0x7];                                       // 0x0AA9   (0x0007)  MISSED
	UTimelineComponent*                                Timeline;                                                   // 0x0AB0   (0x0008)  
	float                                              Timeline_3_MinusStep_FF79EBD5449BBDFB00C2E09DBB8C4A99;      // 0x0AB8   (0x0004)  
	float                                              Timeline_3_PlusStep_FF79EBD5449BBDFB00C2E09DBB8C4A99;       // 0x0ABC   (0x0004)  
	TEnumAsByte<ETimelineDirection>                    Timeline_3__Direction_FF79EBD5449BBDFB00C2E09DBB8C4A99;     // 0x0AC0   (0x0001)  
	unsigned char                                      UnknownData06_5[0x7];                                       // 0x0AC1   (0x0007)  MISSED
	UTimelineComponent*                                Timeline;                                                   // 0x0AC8   (0x0008)  
	float                                              Timeline_MinusStep_ADE4E7A14E7F37E8EB76518D4ACB3E27;        // 0x0AD0   (0x0004)  
	float                                              Timeline_PlusStep_ADE4E7A14E7F37E8EB76518D4ACB3E27;         // 0x0AD4   (0x0004)  
	TEnumAsByte<ETimelineDirection>                    Timeline__Direction_ADE4E7A14E7F37E8EB76518D4ACB3E27;       // 0x0AD8   (0x0001)  
	unsigned char                                      UnknownData07_5[0x7];                                       // 0x0AD9   (0x0007)  MISSED
	UTimelineComponent*                                Timeline;                                                   // 0x0AE0   (0x0008)  
	float                                              StepZoom_MinusStep_22D1EB3A47026D398A712F97C3B4CD1C;        // 0x0AE8   (0x0004)  
	float                                              StepZoom_PlusStep_22D1EB3A47026D398A712F97C3B4CD1C;         // 0x0AEC   (0x0004)  
	TEnumAsByte<ETimelineDirection>                    StepZoom__Direction_22D1EB3A47026D398A712F97C3B4CD1C;       // 0x0AF0   (0x0001)  
	unsigned char                                      UnknownData08_5[0x7];                                       // 0x0AF1   (0x0007)  MISSED
	UTimelineComponent*                                StepZoom;                                                   // 0x0AF8   (0x0008)  
	FVector                                            FPPAimingTimeline_PosOffset_598E03BA48E7AA7161D8DF82FCE7AA94; // 0x0B00   (0x0018)  
	TEnumAsByte<ETimelineDirection>                    FPPAimingTimeline__Direction_598E03BA48E7AA7161D8DF82FCE7AA94; // 0x0B18   (0x0001)  
	unsigned char                                      UnknownData09_5[0x7];                                       // 0x0B19   (0x0007)  MISSED
	UTimelineComponent*                                FPPAimingTimeline;                                          // 0x0B20   (0x0008)  
	float                                              TimelineRoundProgressBar_Value_104D1EB246CFE05F6BC415A3852AB95F; // 0x0B28   (0x0004)  
	TEnumAsByte<ETimelineDirection>                    TimelineRoundProgressBar__Direction_104D1EB246CFE05F6BC415A3852AB95F; // 0x0B2C   (0x0001)  
	unsigned char                                      UnknownData10_5[0x3];                                       // 0x0B2D   (0x0003)  MISSED
	UTimelineComponent*                                TimelineRoundProgressBar;                                   // 0x0B30   (0x0008)  
	float                                              Timeline_2_Alpha_605DDD0B45EAF290B8305B8955E406E5;          // 0x0B38   (0x0004)  
	TEnumAsByte<ETimelineDirection>                    Timeline_2__Direction_605DDD0B45EAF290B8305B8955E406E5;     // 0x0B3C   (0x0001)  
	unsigned char                                      UnknownData11_5[0x3];                                       // 0x0B3D   (0x0003)  MISSED
	UTimelineComponent*                                Timeline;                                                   // 0x0B40   (0x0008)  
	float                                              StandingPitchOffsetIfAim_Alpha_AAA5D8FD41D97A76DB7660BF124ADECE; // 0x0B48   (0x0004)  
	TEnumAsByte<ETimelineDirection>                    StandingPitchOffsetIfAim__Direction_AAA5D8FD41D97A76DB7660BF124ADECE; // 0x0B4C   (0x0001)  
	unsigned char                                      UnknownData12_5[0x3];                                       // 0x0B4D   (0x0003)  MISSED
	UTimelineComponent*                                StandingPitchOffsetIfAim;                                   // 0x0B50   (0x0008)  
	float                                              ReverseCtiticalDamage_Alpha_B1C0DBCF4A2A6CB7DED66BA0F8E8B840; // 0x0B58   (0x0004)  
	TEnumAsByte<ETimelineDirection>                    ReverseCtiticalDamage__Direction_B1C0DBCF4A2A6CB7DED66BA0F8E8B840; // 0x0B5C   (0x0001)  
	unsigned char                                      UnknownData13_5[0x3];                                       // 0x0B5D   (0x0003)  MISSED
	UTimelineComponent*                                ReverseCtiticalDamage;                                      // 0x0B60   (0x0008)  
	float                                              ApplyCriticalHealthEffect_Alpha_248CC6F74F49976102E37D8E3465ECFE; // 0x0B68   (0x0004)  
	TEnumAsByte<ETimelineDirection>                    ApplyCriticalHealthEffect__Direction_248CC6F74F49976102E37D8E3465ECFE; // 0x0B6C   (0x0001)  
	unsigned char                                      UnknownData14_5[0x3];                                       // 0x0B6D   (0x0003)  MISSED
	UTimelineComponent*                                ApplyCriticalHealthEffect;                                  // 0x0B70   (0x0008)  
	float                                              Food_Water_Timeline_Lerp_BDE0461C49A0C1ABE61BF092C7BE3949;  // 0x0B78   (0x0004)  
	TEnumAsByte<ETimelineDirection>                    Food_Water_Timeline__Direction_BDE0461C49A0C1ABE61BF092C7BE3949; // 0x0B7C   (0x0001)  
	unsigned char                                      UnknownData15_5[0x3];                                       // 0x0B7D   (0x0003)  MISSED
	UTimelineComponent*                                Food_Water_Timeline;                                        // 0x0B80   (0x0008)  
	float                                              Timeline_0_Alpha_FD98DB784BA58F75186AD4A5AE18FD83;          // 0x0B88   (0x0004)  
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_FD98DB784BA58F75186AD4A5AE18FD83;     // 0x0B8C   (0x0001)  
	unsigned char                                      UnknownData16_5[0x3];                                       // 0x0B8D   (0x0003)  MISSED
	UTimelineComponent*                                Timeline;                                                   // 0x0B90   (0x0008)  
	float                                              CrouchPitchOffsetIfAim_Alpha_309DEB5540B9A8CB2AF1198AFAB6F9A4; // 0x0B98   (0x0004)  
	TEnumAsByte<ETimelineDirection>                    CrouchPitchOffsetIfAim__Direction_309DEB5540B9A8CB2AF1198AFAB6F9A4; // 0x0B9C   (0x0001)  
	unsigned char                                      UnknownData17_5[0x3];                                       // 0x0B9D   (0x0003)  MISSED
	UTimelineComponent*                                CrouchPitchOffsetIfAim;                                     // 0x0BA0   (0x0008)  
	float                                              WeaponLerpToCamera_Alpha_9FB5FA2E4DAC3AD991EB8BB4E2FCFBDC;  // 0x0BA8   (0x0004)  
	TEnumAsByte<ETimelineDirection>                    WeaponLerpToCamera__Direction_9FB5FA2E4DAC3AD991EB8BB4E2FCFBDC; // 0x0BAC   (0x0001)  
	unsigned char                                      UnknownData18_5[0x3];                                       // 0x0BAD   (0x0003)  MISSED
	UTimelineComponent*                                WeaponLerpToCamera;                                         // 0x0BB0   (0x0008)  
	float                                              DrunkLerpTimeline_Lerp_E2ABB22B478363CAD9F965A492C4228C;    // 0x0BB8   (0x0004)  
	TEnumAsByte<ETimelineDirection>                    DrunkLerpTimeline__Direction_E2ABB22B478363CAD9F965A492C4228C; // 0x0BBC   (0x0001)  
	unsigned char                                      UnknownData19_5[0x3];                                       // 0x0BBD   (0x0003)  MISSED
	UTimelineComponent*                                DrunkLerpTimeline;                                          // 0x0BC0   (0x0008)  
	float                                              subSpecular_Specular_492A2C9041B4BE2B1F9600997169C5D3;      // 0x0BC8   (0x0004)  
	TEnumAsByte<ETimelineDirection>                    subSpecular__Direction_492A2C9041B4BE2B1F9600997169C5D3;    // 0x0BCC   (0x0001)  
	unsigned char                                      UnknownData20_5[0x3];                                       // 0x0BCD   (0x0003)  MISSED
	UTimelineComponent*                                subSpecular;                                                // 0x0BD0   (0x0008)  
	float                                              addSpecular_Specular_C281FEFD490A8C0C078B3B9F5199D966;      // 0x0BD8   (0x0004)  
	TEnumAsByte<ETimelineDirection>                    addSpecular__Direction_C281FEFD490A8C0C078B3B9F5199D966;    // 0x0BDC   (0x0001)  
	unsigned char                                      UnknownData21_5[0x3];                                       // 0x0BDD   (0x0003)  MISSED
	UTimelineComponent*                                addSpecular;                                                // 0x0BE0   (0x0008)  
	float                                              Timeline_1_NewTrack_0_5F3164A24415440657770EA588273E3D;     // 0x0BE8   (0x0004)  
	TEnumAsByte<ETimelineDirection>                    Timeline_1__Direction_5F3164A24415440657770EA588273E3D;     // 0x0BEC   (0x0001)  
	unsigned char                                      UnknownData22_5[0x3];                                       // 0x0BED   (0x0003)  MISSED
	UTimelineComponent*                                Timeline;                                                   // 0x0BF0   (0x0008)  
	float                                              HealPPEffectTimeline_Value_348BF1474C2A25BCE6CD1F9848BEFE41; // 0x0BF8   (0x0004)  
	TEnumAsByte<ETimelineDirection>                    HealPPEffectTimeline__Direction_348BF1474C2A25BCE6CD1F9848BEFE41; // 0x0BFC   (0x0001)  
	unsigned char                                      UnknownData23_5[0x3];                                       // 0x0BFD   (0x0003)  MISSED
	UTimelineComponent*                                HealPPEffectTimeline;                                       // 0x0C00   (0x0008)  
	float                                              KillPPEffectTimeline_Value_337A9F5C4A0B548F36628AA137A19FA1; // 0x0C08   (0x0004)  
	TEnumAsByte<ETimelineDirection>                    KillPPEffectTimeline__Direction_337A9F5C4A0B548F36628AA137A19FA1; // 0x0C0C   (0x0001)  
	unsigned char                                      UnknownData24_5[0x3];                                       // 0x0C0D   (0x0003)  MISSED
	UTimelineComponent*                                KillPPEffectTimeline;                                       // 0x0C10   (0x0008)  
	float                                              DamageCameraEffects_Timer_2ACA4AC949FC90C95D646C9371AFBB35; // 0x0C18   (0x0004)  
	TEnumAsByte<ETimelineDirection>                    DamageCameraEffects__Direction_2ACA4AC949FC90C95D646C9371AFBB35; // 0x0C1C   (0x0001)  
	unsigned char                                      UnknownData25_5[0x3];                                       // 0x0C1D   (0x0003)  MISSED
	UTimelineComponent*                                DamageCameraEffects;                                        // 0x0C20   (0x0008)  
	float                                              SprintAccelTimeline_NewTrack_0_7DAFCF24433D791EF122378A18118860; // 0x0C28   (0x0004)  
	TEnumAsByte<ETimelineDirection>                    SprintAccelTimeline__Direction_7DAFCF24433D791EF122378A18118860; // 0x0C2C   (0x0001)  
	unsigned char                                      UnknownData26_5[0x3];                                       // 0x0C2D   (0x0003)  MISSED
	UTimelineComponent*                                SprintAccelTimeline;                                        // 0x0C30   (0x0008)  
	float                                              CameraLerpSpring_CameraAlpha_AC22FE9D45845585B98DF79542149C69; // 0x0C38   (0x0004)  
	TEnumAsByte<ETimelineDirection>                    CameraLerpSpring__Direction_AC22FE9D45845585B98DF79542149C69; // 0x0C3C   (0x0001)  
	unsigned char                                      UnknownData27_5[0x3];                                       // 0x0C3D   (0x0003)  MISSED
	UTimelineComponent*                                CameraLerpSpring;                                           // 0x0C40   (0x0008)  
	UAnimInstance*                                     Animator;                                                   // 0x0C48   (0x0008)  
	bool                                               IsAiming;                                                   // 0x0C50   (0x0001)  
	bool                                               IsGrounded;                                                 // 0x0C51   (0x0001)  
	unsigned char                                      UnknownData28_5[0x6];                                       // 0x0C52   (0x0006)  MISSED
	FVector2D                                          RotationInput;                                              // 0x0C58   (0x0010)  
	FRotator                                           TargetRotation;                                             // 0x0C68   (0x0018)  
	TEnumAsByte<MovementType>                          PreviousMoveType;                                           // 0x0C80   (0x0001)  
	TEnumAsByte<MovementType>                          MovementType;                                               // 0x0C81   (0x0001)  
	unsigned char                                      UnknownData29_5[0x6];                                       // 0x0C82   (0x0006)  MISSED
	double                                             WalkFSpeed;                                                 // 0x0C88   (0x0008)  
	double                                             WalkFRLSpeed;                                               // 0x0C90   (0x0008)  
	double                                             WalkBRLSpeed;                                               // 0x0C98   (0x0008)  
	double                                             WalkBSpeed;                                                 // 0x0CA0   (0x0008)  
	double                                             JogFSpeed;                                                  // 0x0CA8   (0x0008)  
	double                                             JogBSpeed;                                                  // 0x0CB0   (0x0008)  
	double                                             JogFRLSpeed;                                                // 0x0CB8   (0x0008)  
	double                                             JogBRLSpeed;                                                // 0x0CC0   (0x0008)  
	double                                             CrouchSpeed;                                                // 0x0CC8   (0x0008)  
	double                                             RunSpeed;                                                   // 0x0CD0   (0x0008)  
	TEnumAsByte<StanceState>                           StanceType;                                                 // 0x0CD8   (0x0001)  
	unsigned char                                      UnknownData30_5[0x7];                                       // 0x0CD9   (0x0007)  MISSED
	double                                             TimeDilation;                                               // 0x0CE0   (0x0008)  
	double                                             JogAccel;                                                   // 0x0CE8   (0x0008)  
	double                                             JogDecel;                                                   // 0x0CF0   (0x0008)  
	double                                             WalkAccel;                                                  // 0x0CF8   (0x0008)  
	double                                             WalkDecel;                                                  // 0x0D00   (0x0008)  
	double                                             RunAccel;                                                   // 0x0D08   (0x0008)  
	double                                             RunDecel;                                                   // 0x0D10   (0x0008)  
	TEnumAsByte<BPE_Weapon_Type>                       WeaponType;                                                 // 0x0D18   (0x0001)  
	unsigned char                                      UnknownData31_5[0x7];                                       // 0x0D19   (0x0007)  MISSED
	double                                             DefaultSpringLength;                                        // 0x0D20   (0x0008)  
	double                                             AimSpringLength;                                            // 0x0D28   (0x0008)  
	UCurveFloat*                                       AimCameraLerpCurve;                                         // 0x0D30   (0x0008)  
	UCurveFloat*                                       SprintCameraLerpCurve;                                      // 0x0D38   (0x0008)  
	FCameraSettings                                    CurrentCameraSettings;                                      // 0x0D40   (0x0028)  
	FCameraSettings                                    SprintCameraSettings;                                       // 0x0D68   (0x0028)  
	FCameraSettings                                    AimCameraSettings;                                          // 0x0D90   (0x0028)  
	FCameraSettings                                    DefaultCameraSettings;                                      // 0x0DB8   (0x0028)  
	UCurveFloat*                                       CurrentCurve;                                               // 0x0DE0   (0x0008)  
	double                                             MoveInput_VelocityDiff;                                     // 0x0DE8   (0x0008)  
	TArray<FSBP_ItemsData>                             Inventory;                                                  // 0x0DF0   (0x0010)  
	bool                                               InCar;                                                      // 0x0E00   (0x0001)  
	TEnumAsByte<CardinalDirections>                    CardinalDirection;                                          // 0x0E01   (0x0001)  
	unsigned char                                      UnknownData32_5[0x6];                                       // 0x0E02   (0x0006)  MISSED
	double                                             RotationOffset;                                             // 0x0E08   (0x0008)  
	UCurveVector*                                      RotationLerpCurve;                                          // 0x0E10   (0x0008)  
	FCameraSettings                                    CrouchCameraSettings;                                       // 0x0E18   (0x0028)  
	FCameraSettings                                    AimCrouchCameraSettings;                                    // 0x0E40   (0x0028)  
	FCameraSettings                                    AimCrouchCameraSettings;                                    // 0x0E68   (0x0028)  
	FCharSpeedSettings                                 CharSpeedSettings;                                          // 0x0E90   (0x00B8)  
	bool                                               SprintPressed;                                              // 0x0F48   (0x0001)  
	unsigned char                                      UnknownData33_5[0x7];                                       // 0x0F49   (0x0007)  MISSED
	FMulticastInlineDelegate                           AmmoChangedEvent;                                           // 0x0F50   (0x0010)  
	FMulticastInlineDelegate                           AimStateEvent;                                              // 0x0F60   (0x0010)  
	FMulticastInlineDelegate                           ShootEvent;                                                 // 0x0F70   (0x0010)  
	FMulticastInlineDelegate                           ShootHitEvent;                                              // 0x0F80   (0x0010)  
	FMulticastInlineDelegate                           ReloadEvent;                                                // 0x0F90   (0x0010)  
	FMulticastInlineDelegate                           InCarEvent;                                                 // 0x0FA0   (0x0010)  
	bool                                               AimPressed;                                                 // 0x0FB0   (0x0001)  
	bool                                               isShooting;                                                 // 0x0FB1   (0x0001)  
	bool                                               IsReloading;                                                // 0x0FB2   (0x0001)  
	unsigned char                                      UnknownData34_5[0x5];                                       // 0x0FB3   (0x0005)  MISSED
	FVector                                            NormalDirection;                                            // 0x0FB8   (0x0018)  
	bool                                               CanSprint;                                                  // 0x0FD0   (0x0001)  
	unsigned char                                      UnknownData35_5[0x7];                                       // 0x0FD1   (0x0007)  MISSED
	FRotator                                           SyncedRotation;                                             // 0x0FD8   (0x0018)  
	bool                                               InventoryOpened;                                            // 0x0FF0   (0x0001)  
	bool                                               IsPassenger;                                                // 0x0FF1   (0x0001)  
	unsigned char                                      UnknownData36_5[0x6];                                       // 0x0FF2   (0x0006)  MISSED
	UUIW_PlayerMain_C*                                 PlayerGUI;                                                  // 0x0FF8   (0x0008)  
	FTimerHandle                                       PressInteractTimerHandle;                                   // 0x1000   (0x0008)  
	bool                                               CanInteract;                                                // 0x1008   (0x0001)  
	unsigned char                                      UnknownData37_5[0x7];                                       // 0x1009   (0x0007)  MISSED
	double                                             LateTime;                                                   // 0x1010   (0x0008)  
	TEnumAsByte<E_InteractType>                        InteractType;                                               // 0x1018   (0x0001)  
	unsigned char                                      UnknownData38_5[0x7];                                       // 0x1019   (0x0007)  MISSED
	FMulticastInlineDelegate                           LateInteractStart;                                          // 0x1020   (0x0010)  
	FMulticastInlineDelegate                           LateInteractFinish;                                         // 0x1030   (0x0010)  
	FMulticastInlineDelegate                           LateInteractCancel;                                         // 0x1040   (0x0010)  
	double                                             ViewPitchMin;                                               // 0x1050   (0x0008)  
	double                                             ViewPitchMax;                                               // 0x1058   (0x0008)  
	FName                                              PelvisBone;                                                 // 0x1060   (0x0008)  
	bool                                               LootPointOpened;                                            // 0x1068   (0x0001)  
	bool                                               PrepareAim;                                                 // 0x1069   (0x0001)  
	unsigned char                                      UnknownData39_5[0x6];                                       // 0x106A   (0x0006)  MISSED
	FTimerHandle                                       PressDurabilityButtonTimerHandle;                           // 0x1070   (0x0008)  
	FMulticastInlineDelegate                           DurabilityButtonStart;                                      // 0x1078   (0x0010)  
	FMulticastInlineDelegate                           DurabilityButtonFinish;                                     // 0x1088   (0x0010)  
	FMulticastInlineDelegate                           DurabilityButtonCancel;                                     // 0x1098   (0x0010)  
	USoundCue*                                         StepSounds;                                                 // 0x10A8   (0x0008)  
	ABP_Canister_C*                                    AttachedCanister;                                           // 0x10B0   (0x0008)  
	FTimerHandle                                       PressFuelButtonTimerHandle;                                 // 0x10B8   (0x0008)  
	FMulticastInlineDelegate                           FuelButtonStart;                                            // 0x10C0   (0x0010)  
	FMulticastInlineDelegate                           FuelButtonFinish;                                           // 0x10D0   (0x0010)  
	FMulticastInlineDelegate                           FuelButtonCancel;                                           // 0x10E0   (0x0010)  
	bool                                               BattleMode;                                                 // 0x10F0   (0x0001)  
	unsigned char                                      UnknownData40_5[0x7];                                       // 0x10F1   (0x0007)  MISSED
	UMPInGameInventory_C*                              InventoryRef;                                               // 0x10F8   (0x0008)  
	UJSIContainer_C*                                   BackpackContainer;                                          // 0x1100   (0x0008)  
	UJSIContainer_C*                                   SkillContainer;                                             // 0x1108   (0x0008)  
	UJSIContainer_C*                                   ArmorContainer;                                             // 0x1110   (0x0008)  
	UJSIContainer_C*                                   OutfitContainer;                                            // 0x1118   (0x0008)  
	UJSIContainer_C*                                   PantsContainer;                                             // 0x1120   (0x0008)  
	AStatM_MainPickupClass_C*                          InteractingItem;                                            // 0x1128   (0x0008)  
	FEquipmentStatus                                   EquipmentStatus;                                            // 0x1130   (0x000B)  
	TEnumAsByte<PlayerSlots>                           CurrentActiveSlot;                                          // 0x113B   (0x0001)  
	unsigned char                                      UnknownData41_5[0x4];                                       // 0x113C   (0x0004)  MISSED
	UJSI_Slot_C*                                       JSISlotPrimaryWeapon;                                       // 0x1140   (0x0008)  
	UJSI_Slot_C*                                       MeleeWeaponSlot;                                            // 0x1148   (0x0008)  
	UJSI_Slot_C*                                       JSISlotSecondaryWeapon;                                     // 0x1150   (0x0008)  
	UJSI_Slot_C*                                       JSISlotPistolWeapon;                                        // 0x1158   (0x0008)  
	TArray<FContainerPickupsInfo>                      ContainersData;                                             // 0x1160   (0x0010)  
	TArray<FContainerPickupsInfo>                      ContainerItems;                                             // 0x1170   (0x0010)  
	TArray<UJSIContainer_C*>                           DynamicContainers;                                          // 0x1180   (0x0010)  
	AMPMainContainerBox_C*                             CurrentFocusedContainer;                                    // 0x1190   (0x0008)  
	UJSIContainer_C*                                   MPContainerWidget;                                          // 0x1198   (0x0008)  
	AA_Item_C*                                         CurrentFocusedItem;                                         // 0x11A0   (0x0008)  
	FTimerHandle                                       WaitToUIDHandle;                                            // 0x11A8   (0x0008)  
	bool                                               IsDriver;                                                   // 0x11B0   (0x0001)  
	unsigned char                                      UnknownData42_5[0x7];                                       // 0x11B1   (0x0007)  MISSED
	double                                             CameraCurrentFOV;                                           // 0x11B8   (0x0008)  
	double                                             MoveRightAxis;                                              // 0x11C0   (0x0008)  
	double                                             MoveForwardAxis;                                            // 0x11C8   (0x0008)  
	double                                             CurrentCameraLagMaxDistance;                                // 0x11D0   (0x0008)  
	TArray<AHouseBox_C*>                               HouseBoxes;                                                 // 0x11D8   (0x0010)  
	ALevelStreamer_C*                                  LevelStreamer;                                              // 0x11E8   (0x0008)  
	bool                                               TakingDamage;                                               // 0x11F0   (0x0001)  
	unsigned char                                      UnknownData43_5[0x7];                                       // 0x11F1   (0x0007)  MISSED
	FVector                                            LastHitLocation;                                            // 0x11F8   (0x0018)  
	UAnimMontage*                                      LastPlayingPainMontage;                                     // 0x1210   (0x0008)  
	FVector                                            EntrancePoint;                                              // 0x1218   (0x0018)  
	bool                                               InBunker;                                                   // 0x1230   (0x0001)  
	unsigned char                                      UnknownData44_5[0x7];                                       // 0x1231   (0x0007)  MISSED
	FTimerHandle                                       BunkerEntranceHandle;                                       // 0x1238   (0x0008)  
	UJSI_Slot_C*                                       JSISlotHelmet;                                              // 0x1240   (0x0008)  
	UJSI_Slot_C*                                       JSISlotArmor;                                               // 0x1248   (0x0008)  
	UObject*                                           BigMapWidget;                                               // 0x1250   (0x0008)  
	APawn*                                             Vehicle;                                                    // 0x1258   (0x0008)  
	FVector                                            MeleeSwingBegin;                                            // 0x1260   (0x0018)  
	FVector                                            MeleeSwingEnd;                                              // 0x1278   (0x0018)  
	TScriptInterface<BlueprintGeneratedClass>          QuestEventListener;                                         // 0x1290   (0x0010)  
	bool                                               RefillOil;                                                  // 0x12A0   (0x0001)  
	bool                                               AllowRefillOil;                                             // 0x12A1   (0x0001)  
	unsigned char                                      UnknownData45_5[0x6];                                       // 0x12A2   (0x0006)  MISSED
	USceneComponent*                                   GasolineSocket;                                             // 0x12A8   (0x0008)  
	bool                                               CanSkipDamageAnim;                                          // 0x12B0   (0x0001)  
	unsigned char                                      UnknownData46_5[0x7];                                       // 0x12B1   (0x0007)  MISSED
	TScriptInterface<BlueprintGeneratedClass>          PlayerListener;                                             // 0x12B8   (0x0010)  
	ASurvivalPlayer_C*                                 Qostuil;                                                    // 0x12C8   (0x0008)  
	TArray<FContainerPickupsInfo>                      RequestsForUID;                                             // 0x12D0   (0x0010)  
	bool                                               IsUsingItem;                                                // 0x12E0   (0x0001)  
	unsigned char                                      UnknownData47_5[0x7];                                       // 0x12E1   (0x0007)  MISSED
	TArray<UEffectMain_C*>                             Effects;                                                    // 0x12E8   (0x0010)  
	TArray<UJSI_Slot_C*>                               RequestsForUID_Slots;                                       // 0x12F8   (0x0010)  
	FCameraSettings                                    InHouseCameraSettings;                                      // 0x1308   (0x0028)  
	TArray<TScriptInterface>                           PlayerListeners;                                            // 0x1330   (0x0010)  
	FCameraSettings                                    InCarCameraSettings;                                        // 0x1340   (0x0028)  
	bool                                               LocalPlayer;                                                // 0x1368   (0x0001)  
	unsigned char                                      UnknownData48_5[0x7];                                       // 0x1369   (0x0007)  MISSED
	TArray<bool>                                       _;                                                          // 0x1370   (0x0010)  
	bool                                               InFirewatch;                                                // 0x1380   (0x0001)  
	unsigned char                                      UnknownData49_5[0x7];                                       // 0x1381   (0x0007)  MISSED
	UJSIContainer_C*                                   PocketContainer;                                            // 0x1388   (0x0008)  
	UClass*                                            CurrentCameraShake;                                         // 0x1390   (0x0008)  
	UCameraShakeBase*                                  LastCameraShake;                                            // 0x1398   (0x0008)  
	TMap<USkeletalMeshComponent*, FMaterialArray>      EquipmentMaterials;                                         // 0x13A0   (0x0050)  
	FName                                              ArmorName;                                                  // 0x13F0   (0x0008)  
	FName                                              OuterwearName;                                              // 0x13F8   (0x0008)  
	FName                                              BackpackName;                                               // 0x1400   (0x0008)  
	FName                                              HelmetName;                                                 // 0x1408   (0x0008)  
	ABP_FogController_C*                               FogController;                                              // 0x1410   (0x0008)  
	int32_t                                            PlayerIndex;                                                // 0x1418   (0x0004)  
	bool                                               IsDamageable;                                               // 0x141C   (0x0001)  
	unsigned char                                      UnknownData50_5[0x3];                                       // 0x141D   (0x0003)  MISSED
	FCameraSettings                                    NightSceneCameraSettings;                                   // 0x1420   (0x0028)  
	bool                                               InCutscene;                                                 // 0x1448   (0x0001)  
	unsigned char                                      UnknownData51_5[0x3];                                       // 0x1449   (0x0003)  MISSED
	int32_t                                            ToSlotIndex;                                                // 0x144C   (0x0004)  
	FMulticastInlineDelegate                           DeathEvent;                                                 // 0x1450   (0x0010)  
	TArray<FName>                                      JacketsToWearForTrailer;                                    // 0x1460   (0x0010)  
	TArray<int32_t>                                    ToWearIncrement;                                            // 0x1470   (0x0010)  
	TArray<FName>                                      HelmetsToWearForTrailer;                                    // 0x1480   (0x0010)  
	TArray<FName>                                      PantsToWearForTrailer;                                      // 0x1490   (0x0010)  
	TArray<FName>                                      StartItems;                                                 // 0x14A0   (0x0010)  
	double                                             MouseSense;                                                 // 0x14B0   (0x0008)  
	bool                                               DropItemsWhenDie;                                           // 0x14B8   (0x0001)  
	bool                                               IsEnabledInventorySync;                                     // 0x14B9   (0x0001)  
	unsigned char                                      UnknownData52_5[0x6];                                       // 0x14BA   (0x0006)  MISSED
	double                                             SpeedScale;                                                 // 0x14C0   (0x0008)  
	int64_t                                            CountFrags;                                                 // 0x14C8   (0x0008)  
	int32_t                                            CountDeaths;                                                // 0x14D0   (0x0004)  
	int32_t                                            HitCounter;                                                 // 0x14D4   (0x0004)  
	bool                                               ClimbPrepare;                                               // 0x14D8   (0x0001)  
	bool                                               Ragdoll;                                                    // 0x14D9   (0x0001)  
	unsigned char                                      UnknownData53_5[0x2];                                       // 0x14DA   (0x0002)  MISSED
	FName                                              PantsName;                                                  // 0x14DC   (0x0008)  
	FName                                              WeaponName;                                                 // 0x14E4   (0x0008)  
	bool                                               InventoryInited;                                            // 0x14EC   (0x0001)  
	unsigned char                                      UnknownData54_5[0x3];                                       // 0x14ED   (0x0003)  MISSED
	TArray<FName>                                      OnRessurectItems;                                           // 0x14F0   (0x0010)  
	AActor*                                            HighlightedActor;                                           // 0x1500   (0x0008)  
	UPDA_ChanceModifier_C*                             LootChanceModAsset;                                         // 0x1508   (0x0008)  
	TMap<TEnumAsByte, TEnumAsByte>                     DefaultCollisionResponse;                                   // 0x1510   (0x0050)  
	TArray<AA_Item_C*>                                 ItemsOnGround;                                              // 0x1560   (0x0010)  
	FMulticastInlineDelegate                           HouseEnterEvent;                                            // 0x1570   (0x0010)  
	FMulticastInlineDelegate                           HouseLeaveEvent;                                            // 0x1580   (0x0010)  
	int32_t                                            OnGroundSlotIndex;                                          // 0x1590   (0x0004)  
	unsigned char                                      UnknownData55_5[0x4];                                       // 0x1594   (0x0004)  MISSED
	FContainerPickupsInfo                              ItemInfo;                                                   // 0x1598   (0x0068)  
	AZombieTriggerSpawner_C*                           TriggerSpawner;                                             // 0x1600   (0x0008)  
	TEnumAsByte<EFootprintStyle>                       CurrentFootwear;                                            // 0x1608   (0x0001)  
	unsigned char                                      UnknownData56_5[0x3];                                       // 0x1609   (0x0003)  MISSED
	int32_t                                            SitIndex;                                                   // 0x160C   (0x0004)  
	double                                             UrovenShuma;                                                // 0x1610   (0x0008)  
	FTimerHandle                                       UrovenShumaTimer;                                           // 0x1618   (0x0008)  
	double                                             LootingHeight;                                              // 0x1620   (0x0008)  
	UJSIContainer_C*                                   OneContainerToRule;                                         // 0x1628   (0x0008)  
	int32_t                                            SitIndexTemp;                                               // 0x1630   (0x0004)  
	bool                                               InClimb;                                                    // 0x1634   (0x0001)  
	bool                                               IsInteracting;                                              // 0x1635   (0x0001)  
	unsigned char                                      UnknownData57_5[0x2];                                       // 0x1636   (0x0002)  MISSED
	TArray<FContainerPickupsInfo>                      ItemsToDelete;                                              // 0x1638   (0x0010)  
	TEnumAsByte<CraftState>                            CraftState;                                                 // 0x1648   (0x0001)  
	bool                                               InWater;                                                    // 0x1649   (0x0001)  
	unsigned char                                      UnknownData58_5[0x6];                                       // 0x164A   (0x0006)  MISSED
	double                                             FallingDamage;                                              // 0x1650   (0x0008)  
	bool                                               AimOnHold;                                                  // 0x1658   (0x0001)  
	unsigned char                                      UnknownData59_5[0x7];                                       // 0x1659   (0x0007)  MISSED
	UObject*                                           ShopWidget;                                                 // 0x1660   (0x0008)  
	int32_t                                            CashMoney;                                                  // 0x1668   (0x0004)  
	unsigned char                                      UnknownData60_5[0x4];                                       // 0x166C   (0x0004)  MISSED
	TArray<UJSI_Slot_C*>                               ItemsToTrade;                                               // 0x1670   (0x0010)  
	bool                                               UseRadio;                                                   // 0x1680   (0x0001)  
	bool                                               AllowVoice;                                                 // 0x1681   (0x0001)  
	unsigned char                                      UnknownData61_5[0x6];                                       // 0x1682   (0x0006)  MISSED
	UJSI_Slot_C*                                       JSISlotBackpack;                                            // 0x1688   (0x0008)  
	UJSI_Slot_C*                                       JSISlotOutfit;                                              // 0x1690   (0x0008)  
	UJSI_Slot_C*                                       JSISlotPants;                                               // 0x1698   (0x0008)  
	UJSI_Slot_C*                                       JSISlotPocket;                                              // 0x16A0   (0x0008)  
	bool                                               Sneaky;                                                     // 0x16A8   (0x0001)  
	bool                                               CanHoldWeapon;                                              // 0x16A9   (0x0001)  
	unsigned char                                      UnknownData62_5[0x6];                                       // 0x16AA   (0x0006)  MISSED
	ALootPoint_C*                                      LootPoint;                                                  // 0x16B0   (0x0008)  
	bool                                               NearlyLanded;                                               // 0x16B8   (0x0001)  
	unsigned char                                      UnknownData63_5[0x7];                                       // 0x16B9   (0x0007)  MISSED
	double                                             InteractDistance;                                           // 0x16C0   (0x0008)  
	bool                                               JumpAllowed;                                                // 0x16C8   (0x0001)  
	unsigned char                                      UnknownData64_5[0x7];                                       // 0x16C9   (0x0007)  MISSED
	AWalkableArea_C*                                   NewVar;                                                     // 0x16D0   (0x0008)  
	bool                                               CrouchAllowed;                                              // 0x16D8   (0x0001)  
	bool                                               PlayerHided;                                                // 0x16D9   (0x0001)  
	TEnumAsByte<E_QuestBackpackState>                  QuestBkPkState;                                             // 0x16DA   (0x0001)  
	TEnumAsByte<BinocularState>                        BinocularState;                                             // 0x16DB   (0x0001)  
	unsigned char                                      UnknownData65_5[0x4];                                       // 0x16DC   (0x0004)  MISSED
	TArray<FString>                                    CustomInputBlockers;                                        // 0x16E0   (0x0010)  
	bool                                               HighlightActors;                                            // 0x16F0   (0x0001)  
	unsigned char                                      UnknownData66_5[0x7];                                       // 0x16F1   (0x0007)  MISSED
	ASurvPC_C*                                         SurvPC;                                                     // 0x16F8   (0x0008)  
	AHouseBox_C*                                       BunkerHouseBox;                                             // 0x1700   (0x0008)  
	TArray<UW_Mark_C*>                                 HiddenQuestMarks;                                           // 0x1708   (0x0010)  
	bool                                               SurvPlayerBeginPlayFinished;                                // 0x1718   (0x0001)  
	unsigned char                                      UnknownData67_5[0x7];                                       // 0x1719   (0x0007)  MISSED
	UW_Mark_C*                                         TerminalMark;                                               // 0x1720   (0x0008)  
	UW_Mark_C*                                         BunkerEntryMark;                                            // 0x1728   (0x0008)  
	TArray<FVector>                                    BunkerMarksLocations;                                       // 0x1730   (0x0010)  
	TArray<UW_Mark_C*>                                 BunkerMarks;                                                // 0x1740   (0x0010)  
	FTimerHandle                                       BunkerCheckTimer;                                           // 0x1750   (0x0008)  
	bool                                               MarkInBunker;                                               // 0x1758   (0x0001)  
	unsigned char                                      UnknownData68_5[0x7];                                       // 0x1759   (0x0007)  MISSED
	TMap<TEnumAsByte, TEnumAsByte>                     DefaultCollisionResponse_Capsule;                           // 0x1760   (0x0050)  
	FFMODEventInstance                                 Reverb;                                                     // 0x17B0   (0x0008)  
	bool                                               IsPaused;                                                   // 0x17B8   (0x0001)  
	bool                                               ClientLeftGame_;                                            // 0x17B9   (0x0001)  
	unsigned char                                      UnknownData69_5[0x6];                                       // 0x17BA   (0x0006)  MISSED
	TArray<FDropItemEntry>                             ClientLeftLoot;                                             // 0x17C0   (0x0010)  
	double                                             TimeForAutoDestroy;                                         // 0x17D0   (0x0008)  
	FTimerHandle                                       DummyCharacterDestructionTimer;                             // 0x17D8   (0x0008)  
	TWeakObjectPtr<UFMODEvent*>                        BlizzardWarningSound;                                       // 0x17E0   (0x0030)  
	FVector                                            InputRightVector;                                           // 0x1810   (0x0018)  
	FVector                                            InputForwardVector;                                         // 0x1828   (0x0018)  
	double                                             Delta_Seconds;                                              // 0x1840   (0x0008)  
	double                                             MicrophoneLevel;                                            // 0x1848   (0x0008)  
	double                                             RecievedAudioLevel;                                         // 0x1850   (0x0008)  
	double                                             VoiceVolumeMultiplier;                                      // 0x1858   (0x0008)  
	bool                                               Crawling;                                                   // 0x1860   (0x0001)  
	unsigned char                                      UnknownData70_5[0x7];                                       // 0x1861   (0x0007)  MISSED
	APS_TDB_C*                                         PS_TDB;                                                     // 0x1868   (0x0008)  
	bool                                               InitialInventoryInited;                                     // 0x1870   (0x0001)  
	unsigned char                                      UnknownData71_5[0x7];                                       // 0x1871   (0x0007)  MISSED
	TMap<EItemType, double>                            ItemTypePlayRate;                                           // 0x1878   (0x0050)  
	FPoseSnapshot                                      Snapshot;                                                   // 0x18C8   (0x0038)  
	FVector                                            BunkerPlayerStart;                                          // 0x1900   (0x0018)  
	double                                             LootTimeMultiplier;                                         // 0x1918   (0x0008)  
	FMulticastInlineDelegate                           OnSprint;                                                   // 0x1920   (0x0010)  
	double                                             SprintSpeedMultiplier;                                      // 0x1930   (0x0008)  
	double                                             SwimSpeedMultiplier;                                        // 0x1938   (0x0008)  
	double                                             CrouchSpeedMultiplier;                                      // 0x1940   (0x0008)  
	ASurvivalPlayer_V2_C*                              Inviter;                                                    // 0x1948   (0x0008)  
	FWeightedBlendable                                 AimPP;                                                      // 0x1950   (0x0010)  
	bool                                               IsReadyToTrade;                                             // 0x1960   (0x0001)  
	unsigned char                                      UnknownData72_5[0x7];                                       // 0x1961   (0x0007)  MISSED
	TArray<FFItemInfo>                                 TradeItems;                                                 // 0x1968   (0x0010)  
	ASurvivalPlayer_C*                                 Trader;                                                     // 0x1978   (0x0008)  
	TWeakObjectPtr<USkeletalMesh*>                     DefaultLegs;                                                // 0x1980   (0x0030)  
	bool                                               EnoughSpaceForTrade;                                        // 0x19B0   (0x0001)  
	bool                                               CheckedForSpace;                                            // 0x19B1   (0x0001)  
	bool                                               EnoughSpaceLocally;                                         // 0x19B2   (0x0001)  
	unsigned char                                      UnknownData73_5[0x5];                                       // 0x19B3   (0x0005)  MISSED
	TWeakObjectPtr<USkeletalMesh*>                     DefaultBody;                                                // 0x19B8   (0x0030)  
	bool                                               BlockChangingCamera;                                        // 0x19E8   (0x0001)  
	char                                               DLSSMode;                                                   // 0x19E9   (0x0001)  
	unsigned char                                      UnknownData74_5[0x6];                                       // 0x19EA   (0x0006)  MISSED
	FText                                              DLSSModeTxt;                                                // 0x19F0   (0x0018)  
	int32_t                                            DLSSNumber;                                                 // 0x1A08   (0x0004)  
	unsigned char                                      UnknownData75_5[0x4];                                       // 0x1A0C   (0x0004)  MISSED
	UMaterialInstanceDynamic*                          AimPPMAterial;                                              // 0x1A10   (0x0008)  
	unsigned char                                      UnknownData76_5[0x8];                                       // 0x1A18   (0x0008)  MISSED
	FPostProcessSettings                               InitialPostProcessSettings;                                 // 0x1A20   (0x06E0)  
	FMulticastInlineDelegate                           DLSSModeChanged;                                            // 0x2100   (0x0010)  
	UMaterialInstanceDynamic*                          Drunk_PP_Material;                                          // 0x2110   (0x0008)  
	double                                             TempVar_Blur;                                               // 0x2118   (0x0008)  
	double                                             TempVar_Saturation;                                         // 0x2120   (0x0008)  
	bool                                               SevereIntoxication;                                         // 0x2128   (0x0001)  
	unsigned char                                      UnknownData77_5[0x7];                                       // 0x2129   (0x0007)  MISSED
	double                                             TempVarDrunk_Enabled;                                       // 0x2130   (0x0008)  
	bool                                               LoadInventoryFailed;                                        // 0x2138   (0x0001)  
	unsigned char                                      UnknownData78_5[0x7];                                       // 0x2139   (0x0007)  MISSED
	FRotator                                           BunkerPlayerStartRot;                                       // 0x2140   (0x0018)  
	UMaterialInstanceDynamic*                          CollimatorPP;                                               // 0x2158   (0x0008)  
	int32_t                                            ArmorTier;                                                  // 0x2160   (0x0004)  
	int32_t                                            HelmetTier;                                                 // 0x2164   (0x0004)  
	FMulticastInlineDelegate                           UpdateKDCounter;                                            // 0x2168   (0x0010)  
	UCurveFloat*                                       SensCurve;                                                  // 0x2178   (0x0008)  
	double                                             FovSenseMultiplier;                                         // 0x2180   (0x0008)  
	bool                                               BlockAim;                                                   // 0x2188   (0x0001)  
	unsigned char                                      UnknownData79_5[0x7];                                       // 0x2189   (0x0007)  MISSED
	double                                             ChangeDirectionAngle;                                       // 0x2190   (0x0008)  
	bool                                               IsDirectionChanged;                                         // 0x2198   (0x0001)  
	unsigned char                                      UnknownData80_5[0x3];                                       // 0x2199   (0x0003)  MISSED
	int32_t                                            NewDirection;                                               // 0x219C   (0x0004)  
	TEnumAsByte<PlayerSlots>                           PreviousActiveSlot;                                         // 0x21A0   (0x0001)  
	unsigned char                                      UnknownData81_5[0x7];                                       // 0x21A1   (0x0007)  MISSED
	FVector2D                                          MoveInputLastSended;                                        // 0x21A8   (0x0010)  
	UJSIContainer_C*                                   From__ContainerToContainer__;                               // 0x21B8   (0x0008)  
	UJSIContainer_C*                                   To__ContainerToContainer___;                                // 0x21C0   (0x0008)  
	UJSI_Slot_C*                                       From_Slot_Ref__ContainerToContainer__;                      // 0x21C8   (0x0008)  
	UJSI_Slot_C*                                       To_Slot_Ref__ContainerToContainer__;                        // 0x21D0   (0x0008)  
	UJSIContainer_C*                                   Container__OnSlotDoubleClick__;                             // 0x21D8   (0x0008)  
	UJSI_Slot_C*                                       Slot_Ref__OnSlotDoubleClick__;                              // 0x21E0   (0x0008)  
	UJSI_Slot_C*                                       Slot_Receiver__ItemsCombined__;                             // 0x21E8   (0x0008)  
	UJSI_Slot_C*                                       Slot_Dropped__ItemsCombined__;                              // 0x21F0   (0x0008)  
	UJSIContainer_C*                                   Container__MouseClickInPlayerInventory__;                   // 0x21F8   (0x0008)  
	UJSI_Slot_C*                                       Slot_Ref__MouseClickInPlayerInventory__;                    // 0x2200   (0x0008)  
	FContainerPickupsInfo                              Pickups_Info__MouseClickInPlayerInventory__;                // 0x2208   (0x0068)  
	TArray<FContainerPickupsInfo>                      Added_Data__MouseClickInPlayerInventory__;                  // 0x2270   (0x0010)  
	TArray<FContainerPickupsInfo>                      Added_Items__MouseClickInPlayerInventory__;                 // 0x2280   (0x0010)  
	int32_t                                            Slot_Index__MouseClickInPlayerInventory__;                  // 0x2290   (0x0004)  
	unsigned char                                      UnknownData82_5[0x4];                                       // 0x2294   (0x0004)  MISSED
	double                                             BrokenArmorCoef;                                            // 0x2298   (0x0008)  
	TArray<ASkylightModifier_C*>                       SkyLightModifiers;                                          // 0x22A0   (0x0010)  
	AWeaponPlaceholder_C*                              WeaponPlaceholderPrimary;                                   // 0x22B0   (0x0008)  
	AWeaponPlaceholder_C*                              WeaponPlaceholderSecondary;                                 // 0x22B8   (0x0008)  
	bool                                               IsKnockedDown;                                              // 0x22C0   (0x0001)  
	bool                                               IsKilled;                                                   // 0x22C1   (0x0001)  
	unsigned char                                      UnknownData83_5[0x2];                                       // 0x22C2   (0x0002)  MISSED
	int32_t                                            KnockdownCounter;                                           // 0x22C4   (0x0004)  
	UFMODEvent*                                        Sound_Event_Radial_Damage;                                  // 0x22C8   (0x0008)  
	FFMODEventInstance                                 ContusionFmodSnapshot;                                      // 0x22D0   (0x0008)  
	bool                                               TimerGranadeActive;                                         // 0x22D8   (0x0001)  
	bool                                               AimGrenade;                                                 // 0x22D9   (0x0001)  
	unsigned char                                      UnknownData84_5[0x6];                                       // 0x22DA   (0x0006)  MISSED
	AActor*                                            DeadBody;                                                   // 0x22E0   (0x0008)  
	bool                                               GrenadeSelected;                                            // 0x22E8   (0x0001)  
	unsigned char                                      UnknownData85_5[0x7];                                       // 0x22E9   (0x0007)  MISSED
	TArray<FFItemInfo>                                 DeadBodyItems;                                              // 0x22F0   (0x0010)  
	FFMODEventInstance                                 F_Contusion_Fmod;                                           // 0x2300   (0x0008)  
	bool                                               IsFireDamage;                                               // 0x2308   (0x0001)  
	bool                                               IsRadialDamage;                                             // 0x2309   (0x0001)  
	unsigned char                                      UnknownData86_5[0x6];                                       // 0x230A   (0x0006)  MISSED
	AWeaponPlaceholder_C*                              InitedWeaponPlaceholder;                                    // 0x2310   (0x0008)  
	FString                                            GrenadeWeaponNameEquip;                                     // 0x2318   (0x0010)  
	AFake_Grenade_C*                                   SpawningGrenade;                                            // 0x2328   (0x0008)  
	bool                                               IsDamageMolotov;                                            // 0x2330   (0x0001)  
	bool                                               ThrowGrenade;                                               // 0x2331   (0x0001)  
	unsigned char                                      UnknownData87_5[0x6];                                       // 0x2332   (0x0006)  MISSED
	UFMODEvent*                                        Sound_Event_Fire_Damage;                                    // 0x2338   (0x0008)  
	FFMODEventInstance                                 Contusion_F;                                                // 0x2340   (0x0008)  
	FWeaponUniqueInfo                                  CurrentWeaponItemInfo;                                      // 0x2348   (0x0028)  
	TEnumAsByte<Enum_PlayerState>                      PlayerStateBreathing;                                       // 0x2370   (0x0001)  
	unsigned char                                      UnknownData88_5[0x7];                                       // 0x2371   (0x0007)  MISSED
	AWeaponPlaceholder_C*                              TempWP;                                                     // 0x2378   (0x0008)  
	UFMODAudioComponent*                               FMODBreathingDefault;                                       // 0x2380   (0x0008)  
	UFMODEvent*                                        FModEventBreathingDefault;                                  // 0x2388   (0x0008)  
	UUIW_FlashGrenade_C*                               FlashWidjet;                                                // 0x2390   (0x0008)  
	bool                                               Contusion_;                                                 // 0x2398   (0x0001)  
	bool                                               ExplosionGrenadeInHand;                                     // 0x2399   (0x0001)  
	bool                                               BoomGrenadeInHand;                                          // 0x239A   (0x0001)  
	unsigned char                                      UnknownData89_5[0x5];                                       // 0x239B   (0x0005)  MISSED
	UMPInGameInventory_C*                              Inventory_Ref;                                              // 0x23A0   (0x0008)  
	FVector                                            CameraLocation;                                             // 0x23A8   (0x0018)  
	double                                             FrameWeight;                                                // 0x23C0   (0x0008)  
	double                                             Sharpen;                                                    // 0x23C8   (0x0008)  
	FTimerHandle                                       TimerStopFlashEffect;                                       // 0x23D0   (0x0008)  
	UMaterialInstanceDynamic*                          FlashMaterial;                                              // 0x23D8   (0x0008)  
	TArray<FString>                                    Familiarity;                                                // 0x23E0   (0x0010)  
	bool                                               FPSMode;                                                    // 0x23F0   (0x0001)  
	unsigned char                                      UnknownData90_5[0x7];                                       // 0x23F1   (0x0007)  MISSED
	double                                             DistanceToExplosion;                                        // 0x23F8   (0x0008)  
	UClass*                                            ShakeGrenadeMiddle;                                         // 0x2400   (0x0008)  
	UClass*                                            ShakeGrenadeF1;                                             // 0x2408   (0x0008)  
	double                                             DistanceNearShake;                                          // 0x2410   (0x0008)  
	UGrenadeF1ShakeDefault_C*                          GrenadeF1CameraShakeRef;                                    // 0x2418   (0x0008)  
	UClass*                                            ShakeGrenade333;                                            // 0x2420   (0x0008)  
	double                                             DistanceToExplosionLong;                                    // 0x2428   (0x0008)  
	double                                             DistanceToExplosionMiddle;                                  // 0x2430   (0x0008)  
	UClass*                                            ShakeGrenadeNear;                                           // 0x2438   (0x0008)  
	UClass*                                            CurrentGrenade;                                             // 0x2440   (0x0008)  
	ALootPoint_C*                                      DropBoxRef;                                                 // 0x2448   (0x0008)  
	TArray<UJSIContainer_C*>                           EquipContainers;                                            // 0x2450   (0x0010)  
	FMulticastInlineDelegate                           OnKnockdownStart;                                           // 0x2460   (0x0010)  
	bool                                               WeaponAimAnimFinished;                                      // 0x2470   (0x0001)  
	bool                                               IsDeathAnimEnded;                                           // 0x2471   (0x0001)  
	unsigned char                                      UnknownData91_5[0x6];                                       // 0x2472   (0x0006)  MISSED
	AWeaponPlaceholder_C*                              WeaponPlaceholderShadow;                                    // 0x2478   (0x0008)  
	bool                                               InCraftstation;                                             // 0x2480   (0x0001)  
	unsigned char                                      UnknownData92_5[0x7];                                       // 0x2481   (0x0007)  MISSED
	double                                             ResRadius;                                                  // 0x2488   (0x0008)  
	TEnumAsByte<EMovementMode>                         LastMovementMode;                                           // 0x2490   (0x0001)  
	unsigned char                                      UnknownData93_5[0x7];                                       // 0x2491   (0x0007)  MISSED
	AActor*                                            DeadCamera;                                                 // 0x2498   (0x0008)  
	FName                                              LastHittBoneName;                                           // 0x24A0   (0x0008)  
	double                                             LastHitAngle;                                               // 0x24A8   (0x0008)  
	FVector                                            LastHitDirection;                                           // 0x24B0   (0x0018)  
	bool                                               IsGrenadeDamage;                                            // 0x24C8   (0x0001)  
	bool                                               TabIsOpened;                                                // 0x24C9   (0x0001)  
	unsigned char                                      UnknownData94_5[0x6];                                       // 0x24CA   (0x0006)  MISSED
	AActor*                                            Highlighted_Actor;                                          // 0x24D0   (0x0008)  
	double                                             FullFlashDuration;                                          // 0x24D8   (0x0008)  
	double                                             FadeInterval;                                               // 0x24E0   (0x0008)  
	double                                             FlashIntensity;                                             // 0x24E8   (0x0008)  
	double                                             FlashFadeSpeed;                                             // 0x24F0   (0x0008)  
	double                                             AfterimageIntensity;                                        // 0x24F8   (0x0008)  
	double                                             RingingVolume;                                              // 0x2500   (0x0008)  
	double                                             RingingFadeSpeed;                                           // 0x2508   (0x0008)  
	UAudioComponent*                                   Ringing;                                                    // 0x2510   (0x0008)  
	UMaterialInstanceDynamic*                          PP_Flashbang_Dynamic;                                       // 0x2518   (0x0008)  
	bool                                               bFadingFlashEffect;                                         // 0x2520   (0x0001)  
	unsigned char                                      UnknownData95_5[0x7];                                       // 0x2521   (0x0007)  MISSED
	UTextureRenderTarget2D*                            RenderTexture;                                              // 0x2528   (0x0008)  
	USceneCaptureComponent2D*                          SceneCaptureComponent2D;                                    // 0x2530   (0x0008)  
	bool                                               IsSprinting;                                                // 0x2538   (0x0001)  
	bool                                               ToSync;                                                     // 0x2539   (0x0001)  
	unsigned char                                      UnknownData96_5[0x2];                                       // 0x253A   (0x0002)  MISSED
	FName                                              Primary_Weapon_Slot;                                        // 0x253C   (0x0008)  
	FName                                              Secondary_Weapon_Slot;                                      // 0x2544   (0x0008)  
	bool                                               ShowUI;                                                     // 0x254C   (0x0001)  
	unsigned char                                      UnknownData97_5[0x3];                                       // 0x254D   (0x0003)  MISSED
	AWeaponPlaceholder_C*                              ActiveWeaponPlaceholder;                                    // 0x2550   (0x0008)  
	bool                                               ShopInteract;                                               // 0x2558   (0x0001)  
	unsigned char                                      UnknownData98_5[0x7];                                       // 0x2559   (0x0007)  MISSED
	TArray<ASurvivalPlayer_C*>                         ShopActors;                                                 // 0x2560   (0x0010)  
	FMulticastInlineDelegate                           ShopStart;                                                  // 0x2570   (0x0010)  
	FMulticastInlineDelegate                           ShopEnd;                                                    // 0x2580   (0x0010)  
	bool                                               Has_Reset_Timer;                                            // 0x2590   (0x0001)  
	unsigned char                                      UnknownData99_5[0x7];                                       // 0x2591   (0x0007)  MISSED
	FTimerHandle                                       Timer_by_reset;                                             // 0x2598   (0x0008)  
	float                                              Food_desaturation;                                          // 0x25A0   (0x0004)  
	float                                              Water_blur;                                                 // 0x25A4   (0x0004)  
	float                                              Water_Blur_Radius;                                          // 0x25A8   (0x0004)  
	float                                              Water_Density;                                              // 0x25AC   (0x0004)  
	UMaterialInstanceDynamic*                          Food_PP;                                                    // 0x25B0   (0x0008)  
	bool                                               Shop;                                                       // 0x25B8   (0x0001)  
	unsigned char                                      UnknownData100_5[0x3];                                      // 0x25B9   (0x0003)  MISSED
	float                                              FoodWaterPP_Destruaction;                                   // 0x25BC   (0x0004)  
	float                                              WaterPP_blur_alpha;                                         // 0x25C0   (0x0004)  
	float                                              HitPP_Alpha;                                                // 0x25C4   (0x0004)  
	float                                              FoodWaterPP_Water_Blur_Radius;                              // 0x25C8   (0x0004)  
	unsigned char                                      UnknownData101_5[0x4];                                      // 0x25CC   (0x0004)  MISSED
	UMaterialInstanceDynamic*                          Water_PP;                                                   // 0x25D0   (0x0008)  
	UCameraShakeBase*                                  CurrentShopShake;                                           // 0x25D8   (0x0008)  
	FRotator                                           FlashlighRotation;                                          // 0x25E0   (0x0018)  
	UMaterialInstanceDynamic*                          Blood_PP;                                                   // 0x25F8   (0x0008)  
	UMaterialInstanceDynamic*                          Hit_PP;                                                     // 0x2600   (0x0008)  
	float                                              Blood_PP_lerp;                                              // 0x2608   (0x0004)  
	unsigned char                                      UnknownData102_5[0x4];                                      // 0x260C   (0x0004)  MISSED
	double                                             Blood_PP_random_value;                                      // 0x2610   (0x0008)  
	double                                             BloodPP_midle_value;                                        // 0x2618   (0x0008)  
	double                                             BloodPPMinValue;                                            // 0x2620   (0x0008)  
	FMulticastInlineDelegate                           ReloadEventLocaly;                                          // 0x2628   (0x0010)  
	FMulticastInlineDelegate                           PressReloadWeapon;                                          // 0x2638   (0x0010)  
	FMulticastInlineDelegate                           ChangeWeaponActiveSlot;                                     // 0x2648   (0x0010)  
	FTimerHandle                                       HandlerBloodEffect;                                         // 0x2658   (0x0008)  
	FFMODEventInstance                                 House_Ambient_Off;                                          // 0x2660   (0x0008)  
	UMaterialInstanceDynamic*                          M_HitBlurPP;                                                // 0x2668   (0x0008)  
	float                                              HitBlurPPLerp;                                              // 0x2670   (0x0004)  
	bool                                               SprintByToggle;                                             // 0x2674   (0x0001)  
	unsigned char                                      UnknownData103_5[0x3];                                      // 0x2675   (0x0003)  MISSED
	UGameSettings_C*                                   GameSettings;                                               // 0x2678   (0x0008)  
	APP_Effects_C*                                     PP_Effects;                                                 // 0x2680   (0x0008)  
	int32_t                                            PrimaryPointId;                                             // 0x2688   (0x0004)  
	int32_t                                            SecondaryPointId;                                           // 0x268C   (0x0004)  
	bool                                               AddBunkerMarks;                                             // 0x2690   (0x0001)  
	unsigned char                                      UnknownData104_5[0x7];                                      // 0x2691   (0x0007)  MISSED
	AActor*                                            DeadBodyV2;                                                 // 0x2698   (0x0008)  
	bool                                               forceHidden;                                                // 0x26A0   (0x0001)  
	bool                                               CrouchScopeAnimInProcess;                                   // 0x26A1   (0x0001)  
	unsigned char                                      UnknownData105_5[0x6];                                      // 0x26A2   (0x0006)  MISSED
	AWeaponPlaceholder_C*                              WeaponPlaceholderPistol;                                    // 0x26A8   (0x0008)  
	FName                                              PistolWeaponSlotName;                                       // 0x26B0   (0x0008)  
	bool                                               Self_healing;                                               // 0x26B8   (0x0001)  
	unsigned char                                      UnknownData106_5[0x7];                                      // 0x26B9   (0x0007)  MISSED
	FTimerHandle                                       Self_healingTimerHandle;                                    // 0x26C0   (0x0008)  
	UCameraShakeBase*                                  TpsToFpsCameraShake;                                        // 0x26C8   (0x0008)  
	FFMODEventInstance                                 RoomTone;                                                   // 0x26D0   (0x0008)  
	FFMODEventInstance                                 RoomReverb;                                                 // 0x26D8   (0x0008)  
	bool                                               LoadingActor;                                               // 0x26E0   (0x0001)  
	bool                                               CanMoveWhileUsingItem;                                      // 0x26E1   (0x0001)  
	unsigned char                                      UnknownData107_5[0x6];                                      // 0x26E2   (0x0006)  MISSED
	TArray<FFItemInfo>                                 ItemsCache;                                                 // 0x26E8   (0x0010)  
	bool                                               Eating;                                                     // 0x26F8   (0x0001)  
	unsigned char                                      UnknownData108_5[0x7];                                      // 0x26F9   (0x0007)  MISSED
	UFMODAudioComponent*                               FMODAudioContusion;                                         // 0x2700   (0x0008)  
	bool                                               FreeLook_Active;                                            // 0x2708   (0x0001)  
	unsigned char                                      UnknownData109_5[0x7];                                      // 0x2709   (0x0007)  MISSED
	FRotator                                           NeedToDelete_SavedFinalRotation_FreeLook;                   // 0x2710   (0x0018)  
	FRotator                                           NeedToDelete_SavedStarterRotation_FreeLook;                 // 0x2728   (0x0018)  
	bool                                               GrenadeOpened;                                              // 0x2740   (0x0001)  
	unsigned char                                      UnknownData110_5[0x7];                                      // 0x2741   (0x0007)  MISSED
	FRotator                                           RememberOldRotation;                                        // 0x2748   (0x0018)  
	bool                                               Scope_WallOffset_Check;                                     // 0x2760   (0x0001)  
	unsigned char                                      UnknownData111_5[0x7];                                      // 0x2761   (0x0007)  MISSED
	FMulticastInlineDelegate                           OnDeath;                                                    // 0x2768   (0x0010)  
	double                                             TargetInteractDistance;                                     // 0x2778   (0x0008)  
	AActorRecording_C*                                 3DCharacter;                                                // 0x2780   (0x0008)  
	double                                             DistanceToInteractable;                                     // 0x2788   (0x0008)  
	bool                                               RoomBuilding;                                               // 0x2790   (0x0001)  
	unsigned char                                      UnknownData112_5[0x7];                                      // 0x2791   (0x0007)  MISSED
	FS_SaveStructure                                   GI_Character_Save_Ref;                                      // 0x2798   (0x01B0)  
	bool                                               InteractiveActorInFocus;                                    // 0x2948   (0x0001)  
	bool                                               IsInHouseBool;                                              // 0x2949   (0x0001)  
	unsigned char                                      UnknownData113_5[0x6];                                      // 0x294A   (0x0006)  MISSED
	FString                                            MainLightSource;                                            // 0x2950   (0x0010)  
	UMaterialInstanceDynamic*                          ChooseCharacterDynMat;                                      // 0x2960   (0x0008)  
	bool                                               IsFemale;                                                   // 0x2968   (0x0001)  
	unsigned char                                      UnknownData114_5[0x7];                                      // 0x2969   (0x0007)  MISSED
	UJSI_Slot_C*                                       NewVar_JSI_Sl;                                              // 0x2970   (0x0008)  
	UJSIContainer_C*                                   NewVar_Cont;                                                // 0x2978   (0x0008)  
	bool                                               BlockVoiceChat;                                             // 0x2980   (0x0001)  
	unsigned char                                      UnknownData115_5[0x7];                                      // 0x2981   (0x0007)  MISSED
	UJSIContainer_C*                                   HelmetContainer;                                            // 0x2988   (0x0008)  
	bool                                               bCompasEquip;                                               // 0x2990   (0x0001)  
	unsigned char                                      UnknownData116_5[0x7];                                      // 0x2991   (0x0007)  MISSED
	FVector                                            OnDeathVelocity;                                            // 0x2998   (0x0018)  
	ABP_Compass_C*                                     CompasRef;                                                  // 0x29B0   (0x0008)  
	bool                                               IsInSauna;                                                  // 0x29B8   (0x0001)  
	bool                                               bStartProgressBar;                                          // 0x29B9   (0x0001)  
	bool                                               bItemLifeTime6sec;                                          // 0x29BA   (0x0001)  
	unsigned char                                      UnknownData117_5[0x5];                                      // 0x29BB   (0x0005)  MISSED
	UWBP_AttachmentCell_C*                             SavedCell;                                                  // 0x29C0   (0x0008)  
	bool                                               CompasState;                                                // 0x29C8   (0x0001)  
	bool                                               StopHiddingMe;                                              // 0x29C9   (0x0001)  
	bool                                               StopUsingItem;                                              // 0x29CA   (0x0001)  
	bool                                               LootDelayBlock;                                             // 0x29CB   (0x0001)  
	unsigned char                                      UnknownData118_5[0x4];                                      // 0x29CC   (0x0004)  MISSED
	FTimerHandle                                       LootDelayBlockTimer;                                        // 0x29D0   (0x0008)  
	double                                             LootDelayBlockFloat;                                        // 0x29D8   (0x0008)  
	TArray<UJSI_Slot_C*>                               SelectedSlot;                                               // 0x29E0   (0x0010)  
	bool                                               Delay;                                                      // 0x29F0   (0x0001)  
	unsigned char                                      UnknownData119_5[0x7];                                      // 0x29F1   (0x0007)  MISSED
	UMaterialInstanceDynamic*                          DM_BodyMan;                                                 // 0x29F8   (0x0008)  
	UMaterialInstanceDynamic*                          DM_LegsMan;                                                 // 0x2A00   (0x0008)  
	UMaterialInstanceDynamic*                          DM_LegsGirl;                                                // 0x2A08   (0x0008)  
	UMaterialInstanceDynamic*                          DW_BodyGirl;                                                // 0x2A10   (0x0008)  
	UMaterialInstanceDynamic*                          FemaleFPHands;                                              // 0x2A18   (0x0008)  
	UMaterialInstanceDynamic*                          MaleLHand;                                                  // 0x2A20   (0x0008)  
	UMaterialInstanceDynamic*                          MaleRHand;                                                  // 0x2A28   (0x0008)  
	float                                              Time;                                                       // 0x2A30   (0x0004)  
	unsigned char                                      UnknownData120_5[0x4];                                      // 0x2A34   (0x0004)  MISSED
	FTimerHandle                                       FinishRoundProgressBarTimerHandle;                          // 0x2A38   (0x0008)  
	bool                                               BlockUsingItemCanceling;                                    // 0x2A40   (0x0001)  
	bool                                               StartTimelineRoundBar;                                      // 0x2A41   (0x0001)  
	bool                                               MoveInput3Frames;                                           // 0x2A42   (0x0001)  
	unsigned char                                      UnknownData121_5[0x5];                                      // 0x2A43   (0x0005)  MISSED
	UJSI_Slot_C*                                       Slot_Ref__For_Using_Item_;                                  // 0x2A48   (0x0008)  
	bool                                               BlockCompas;                                                // 0x2A50   (0x0001)  
	unsigned char                                      UnknownData122_5[0x7];                                      // 0x2A51   (0x0007)  MISSED
	UJSIContainer_C*                                   ProtectiveCaseContainer;                                    // 0x2A58   (0x0008)  
	FName                                              KnockedTag;                                                 // 0x2A60   (0x0008)  
	UWBP_Surrender_C*                                  WBP_Surrender;                                              // 0x2A68   (0x0008)  
	bool                                               ReviveAnim;                                                 // 0x2A70   (0x0001)  
	unsigned char                                      UnknownData123_5[0x3];                                      // 0x2A71   (0x0003)  MISSED
	FName                                              In_Bone_Name;                                               // 0x2A74   (0x0008)  
	unsigned char                                      UnknownData124_5[0x4];                                      // 0x2A7C   (0x0004)  MISSED
	FVector                                            Linear_Velocity;                                            // 0x2A80   (0x0018)  
	bool                                               Ragdolling;                                                 // 0x2A98   (0x0001)  
	unsigned char                                      UnknownData125_5[0x7];                                      // 0x2A99   (0x0007)  MISSED
	FVector                                            CapsuleLocation;                                            // 0x2AA0   (0x0018)  
	FVector                                            PlayerMeshOffset;                                           // 0x2AB8   (0x0018)  
	bool                                               IsOnBack;                                                   // 0x2AD0   (0x0001)  
	unsigned char                                      UnknownData126_5[0x3];                                      // 0x2AD1   (0x0003)  MISSED
	float                                              SurrenderTime;                                              // 0x2AD4   (0x0004)  
	FTimerHandle                                       SurrenderTimer;                                             // 0x2AD8   (0x0008)  
	FTimerHandle                                       KnockdownTimer;                                             // 0x2AE0   (0x0008)  
	double                                             ReviveTime;                                                 // 0x2AE8   (0x0008)  
	FTimerHandle                                       UpdateCapsuleTimer;                                         // 0x2AF0   (0x0008)  
	ASurvivalPlayer_C*                                 Reviver;                                                    // 0x2AF8   (0x0008)  
	FVector                                            cameraLoc;                                                  // 0x2B00   (0x0018)  
	UCurveVector*                                      PosOffsetCurve;                                             // 0x2B18   (0x0008)  
	UCurveFloat*                                       EventMeshCurve;                                             // 0x2B20   (0x0008)  
	bool                                               Drop_Item_when_Die;                                         // 0x2B28   (0x0001)  
	unsigned char                                      UnknownData127_5[0x7];                                      // 0x2B29   (0x0007)  MISSED
	TArray<FDropItemEntry>                             Drop;                                                       // 0x2B30   (0x0010)  
	bool                                               Is_Radial_Damage;                                           // 0x2B40   (0x0001)  
	unsigned char                                      UnknownData128_5[0x7];                                      // 0x2B41   (0x0007)  MISSED
	APawn*                                             Killer;                                                     // 0x2B48   (0x0008)  
	FName                                              Bone_Name;                                                  // 0x2B50   (0x0008)  
	FVector                                            Hit_location;                                               // 0x2B58   (0x0018)  
	double                                             Hit_Angle;                                                  // 0x2B70   (0x0008)  
	bool                                               GPSEquip;                                                   // 0x2B78   (0x0001)  
	bool                                               GPSState;                                                   // 0x2B79   (0x0001)  
	unsigned char                                      UnknownData129_5[0x6];                                      // 0x2B7A   (0x0006)  MISSED
	ABP_GPS_C*                                         GPSRef;                                                     // 0x2B80   (0x0008)  
	FFMODEventInstance                                 KnockedSnapShot;                                            // 0x2B88   (0x0008)  
	FVector                                            PlayerLocation;                                             // 0x2B90   (0x0018)  
	FTimerHandle                                       TravelTimer;                                                // 0x2BA8   (0x0008)  
	double                                             TravelDistance;                                             // 0x2BB0   (0x0008)  
	double                                             Dealt_Damage;                                               // 0x2BB8   (0x0008)  
	int32_t                                            Shot_Count;                                                 // 0x2BC0   (0x0004)  
	int32_t                                            RegisteredHit;                                              // 0x2BC4   (0x0004)  
	double                                             HitPercentage;                                              // 0x2BC8   (0x0008)  
	bool                                               BlockGPS;                                                   // 0x2BD0   (0x0001)  
	unsigned char                                      UnknownData130_5[0x7];                                      // 0x2BD1   (0x0007)  MISSED
	UCurveVector*                                      PosReverseOffsetCurve;                                      // 0x2BD8   (0x0008)  
	UCurveFloat*                                       EventReverseMeshCurve;                                      // 0x2BE0   (0x0008)  
	int64_t                                            StatFood;                                                   // 0x2BE8   (0x0008)  
	int64_t                                            StatDrink;                                                  // 0x2BF0   (0x0008)  
	int64_t                                            StatAid;                                                    // 0x2BF8   (0x0008)  
	int64_t                                            StatZombieKilled;                                           // 0x2C00   (0x0008)  
	int64_t                                            Seconds;                                                    // 0x2C08   (0x0008)  
	int64_t                                            Minutes;                                                    // 0x2C10   (0x0008)  
	int32_t                                            Hours;                                                      // 0x2C18   (0x0004)  
	unsigned char                                      UnknownData131_5[0x4];                                      // 0x2C1C   (0x0004)  MISSED
	double                                             StatHeadShotDistance;                                       // 0x2C20   (0x0008)  
	double                                             StatTookDmg;                                                // 0x2C28   (0x0008)  
	UWDG_Map_C*                                        GPSWidgetMapRef;                                            // 0x2C30   (0x0008)  
	float                                              InclineAxisValue;                                           // 0x2C38   (0x0004)  
	unsigned char                                      UnknownData132_5[0x4];                                      // 0x2C3C   (0x0004)  MISSED
	FVector                                            Pos;                                                        // 0x2C40   (0x0018)  
	FRotator                                           rot;                                                        // 0x2C58   (0x0018)  
	UJSI_Slot_C*                                       Source_Slot_Ref;                                            // 0x2C70   (0x0008)  
	int32_t                                            CountSlideGPS;                                              // 0x2C78   (0x0004)  
	unsigned char                                      UnknownData133_5[0x4];                                      // 0x2C7C   (0x0004)  MISSED
	TArray<FString>                                    CarsNames;                                                  // 0x2C80   (0x0010)  
	TArray<FString>                                    StatSave;                                                   // 0x2C90   (0x0010)  
	FTimerHandle                                       LoopSaveStatTimer;                                          // 0x2CA0   (0x0008)  
	FMulticastInlineDelegate                           OnSaveStats;                                                // 0x2CA8   (0x0010)  
	FMulticastInlineDelegate                           OnLoadStats;                                                // 0x2CB8   (0x0010)  
	bool                                               InHub;                                                      // 0x2CC8   (0x0001)  
	unsigned char                                      UnknownData134_5[0x7];                                      // 0x2CC9   (0x0007)  MISSED
	TArray<int64_t>                                    TempStatSaveArray;                                          // 0x2CD0   (0x0010)  
	FMulticastInlineDelegate                           OnAiming;                                                   // 0x2CE0   (0x0010)  
	int32_t                                            EquipmentTier;                                              // 0x2CF0   (0x0004)  
	unsigned char                                      UnknownData135_5[0x4];                                      // 0x2CF4   (0x0004)  MISSED
	FMulticastInlineDelegate                           OnSetCarCount;                                              // 0x2CF8   (0x0010)  
	FString                                            HouseName;                                                  // 0x2D08   (0x0010)  
	FMulticastInlineDelegate                           OnSaveHouse;                                                // 0x2D18   (0x0010)  
	FMulticastInlineDelegate                           OnLoadHouse;                                                // 0x2D28   (0x0010)  
	FTimerHandle                                       InputReloadTimer;                                           // 0x2D38   (0x0008)  
	UCurveVector*                                      FPPCrouchingWepOffsetCurve;                                 // 0x2D40   (0x0008)  
	UCurveVector*                                      TPPCrouchingWepOffsetCurve;                                 // 0x2D48   (0x0008)  
	UCurveVector*                                      FPPStandingWepOffsetCurve;                                  // 0x2D50   (0x0008)  
	UCurveVector*                                      TPPStandingWepOffsetCurve;                                  // 0x2D58   (0x0008)  
	bool                                               InTrainGym;                                                 // 0x2D60   (0x0001)  
	bool                                               Sit;                                                        // 0x2D61   (0x0001)  
	unsigned char                                      UnknownData136_5[0x6];                                      // 0x2D62   (0x0006)  MISSED
	FString                                            HomeNameArray;                                              // 0x2D68   (0x0010)  
	FMulticastInlineDelegate                           OnSetHomeCount;                                             // 0x2D78   (0x0010)  
	FMulticastInlineDelegate                           OnCarSold;                                                  // 0x2D88   (0x0010)  
	FMulticastInlineDelegate                           OnHomeSold;                                                 // 0x2D98   (0x0010)  
	TEnumAsByte<BPE_AmmoClass>                         DamagedAmmoClass;                                           // 0x2DA8   (0x0001)  
	unsigned char                                      UnknownData137_5[0x3];                                      // 0x2DA9   (0x0003)  MISSED
	int32_t                                            RPoints;                                                    // 0x2DAC   (0x0004)  
	FMulticastInlineDelegate                           SetRPointsCount;                                            // 0x2DB0   (0x0010)  
	bool                                               UsingVending;                                               // 0x2DC0   (0x0001)  
	unsigned char                                      UnknownData138_5[0x7];                                      // 0x2DC1   (0x0007)  MISSED
	FMulticastInlineDelegate                           CarsStats;                                                  // 0x2DC8   (0x0010)  
	TArray<FString>                                    CarsStat;                                                   // 0x2DD8   (0x0010)  
	bool                                               SitTrain_;                                                  // 0x2DE8   (0x0001)  
	unsigned char                                      UnknownData139_5[0x3];                                      // 0x2DE9   (0x0003)  MISSED
	int32_t                                            MySquadIndex;                                               // 0x2DEC   (0x0004)  
	FTimerHandle                                       Gymhandle;                                                  // 0x2DF0   (0x0008)  
	AActor*                                            HightlightChair;                                            // 0x2DF8   (0x0008)  
	double                                             SprintDistanceTraveled;                                     // 0x2E00   (0x0008)  
	double                                             SprintDistanceNeedToTrain;                                  // 0x2E08   (0x0008)  
	double                                             TravelDistanceWeighted;                                     // 0x2E10   (0x0008)  
	int32_t                                            GetHitedCount;                                              // 0x2E18   (0x0004)  
	int32_t                                            RevivingCount;                                              // 0x2E1C   (0x0004)  
	int32_t                                            MoneyCycleCount;                                            // 0x2E20   (0x0004)  
	bool                                               bIsBinocularsEquip;                                         // 0x2E24   (0x0001)  
	unsigned char                                      UnknownData140_5[0x3];                                      // 0x2E25   (0x0003)  MISSED
	int32_t                                            ShotCountPistol;                                            // 0x2E28   (0x0004)  
	int32_t                                            CarStealNumber;                                             // 0x2E2C   (0x0004)  
	int32_t                                            CarRepairCount;                                             // 0x2E30   (0x0004)  
	int32_t                                            RefuelCount;                                                // 0x2E34   (0x0004)  
	bool                                               PlayerSit;                                                  // 0x2E38   (0x0001)  
	bool                                               BlockedCompassInTutorial;                                   // 0x2E39   (0x0001)  
	bool                                               BlockedGPSInTutorial;                                       // 0x2E3A   (0x0001)  
	bool                                               SitOnBar;                                                   // 0x2E3B   (0x0001)  
	unsigned char                                      UnknownData141_5[0x4];                                      // 0x2E3C   (0x0004)  MISSED
	AActor*                                            HightlightBar;                                              // 0x2E40   (0x0008)  
	ABarParent_C*                                      BarParentCall;                                              // 0x2E48   (0x0008)  
	bool                                               SitChair;                                                   // 0x2E50   (0x0001)  
	unsigned char                                      UnknownData142_5[0x7];                                      // 0x2E51   (0x0007)  MISSED
	AA_Food_C*                                         FoodRef;                                                    // 0x2E58   (0x0008)  
	bool                                               bMuteMicrophone;                                            // 0x2E60   (0x0001)  
	unsigned char                                      UnknownData143_5[0x3];                                      // 0x2E61   (0x0003)  MISSED
	int32_t                                            ReloadCountPistol;                                          // 0x2E64   (0x0004)  
	bool                                               TranzitIsOpened;                                            // 0x2E68   (0x0001)  
	unsigned char                                      UnknownData144_5[0x7];                                      // 0x2E69   (0x0007)  MISSED
	FMulticastInlineDelegate                           OnInCarChanged;                                             // 0x2E70   (0x0010)  
	bool                                               Burnt;                                                      // 0x2E80   (0x0001)  
	bool                                               InBase;                                                     // 0x2E81   (0x0001)  
	bool                                               BlockedInputInTutorial;                                     // 0x2E82   (0x0001)  
	bool                                               BlockLeftHandEffector;                                      // 0x2E83   (0x0001)  
	unsigned char                                      UnknownData145_5[0x4];                                      // 0x2E84   (0x0004)  MISSED
	TArray<ABP_QuestAreaIcon_C*>                       QuestArea;                                                  // 0x2E88   (0x0010)  
	TArray<FName>                                      Selected_Traits;                                            // 0x2E98   (0x0010)  
	UCharacterCreateSave_C*                            GI_Character_Save_Ref_0bject;                               // 0x2EA8   (0x0008)  
	TArray<FString>                                    Quest_Items;                                                // 0x2EB0   (0x0010)  
	TArray<int32_t>                                    Quest_Items_Counts;                                         // 0x2EC0   (0x0010)  
	UWBP_FurnitureShopButtons_C*                       FurnitureCatalog;                                           // 0x2ED0   (0x0008)  
	APlayerRoomBP_C*                                   RoomReference;                                              // 0x2ED8   (0x0008)  
	FMulticastInlineDelegate                           OnGPSStateChanged;                                          // 0x2EE0   (0x0010)  
	FMulticastInlineDelegate                           OnCompassStateChanged;                                      // 0x2EF0   (0x0010)  
	AActor*                                            CurrentTable;                                               // 0x2F00   (0x0008)  
	ASurvivalPlayer_C*                                 Player;                                                     // 0x2F08   (0x0008)  
	UWBP_MenuBarShop_C*                                WidgetRef;                                                  // 0x2F10   (0x0008)  
	AA_Knife_C*                                        KnifeRef;                                                   // 0x2F18   (0x0008)  
	AA_Fork_C*                                         ForkRef;                                                    // 0x2F20   (0x0008)  
	AActor*                                            ActiveTable;                                                // 0x2F28   (0x0008)  
	ASurvivalPlayer_C*                                 Player_Bar;                                                 // 0x2F30   (0x0008)  
	USceneComponent*                                   OutputPlaceFood;                                            // 0x2F38   (0x0008)  
	int32_t                                            OutputPlaceFoodIndex;                                       // 0x2F40   (0x0004)  
	unsigned char                                      UnknownData146_5[0x4];                                      // 0x2F44   (0x0004)  MISSED
	FMulticastInlineDelegate                           OnExitBar;                                                  // 0x2F48   (0x0010)  
	FMulticastInlineDelegate                           OnFinishFood;                                               // 0x2F58   (0x0010)  
	FMulticastInlineDelegate                           EnterToBase;                                                // 0x2F68   (0x0010)  
	UJSI_Slot_C*                                       UsedJSISlot;                                                // 0x2F78   (0x0008)  
	FTransform                                         ResHouseLoc;                                                // 0x2F80   (0x0060)  
	bool                                               ZanyatoChair;                                               // 0x2FE0   (0x0001)  
	unsigned char                                      UnknownData147_5[0x7];                                      // 0x2FE1   (0x0007)  MISSED
	AActor*                                            ActiveChair;                                                // 0x2FE8   (0x0008)  
	FMulticastInlineDelegate                           OnDiscountUpdated;                                          // 0x2FF0   (0x0010)  
	AA_Alhocol_C*                                      BottleRef;                                                  // 0x3000   (0x0008)  
	int32_t                                            PaidLoan;                                                   // 0x3008   (0x0004)  
	unsigned char                                      UnknownData148_5[0x4];                                      // 0x300C   (0x0004)  MISSED
	FMulticastInlineDelegate                           OnLoanPaid;                                                 // 0x3010   (0x0010)  
	AA_Menu_C*                                         MenuRef;                                                    // 0x3020   (0x0008)  
	bool                                               BlockMenu;                                                  // 0x3028   (0x0001)  
	bool                                               InventoryOpenAnim;                                          // 0x3029   (0x0001)  
	unsigned char                                      UnknownData149_5[0x6];                                      // 0x302A   (0x0006)  MISSED
	FMulticastInlineDelegate                           OnBlockOpenMenu;                                            // 0x3030   (0x0010)  
	FMulticastInlineDelegate                           OnGymExit;                                                  // 0x3040   (0x0010)  
	bool                                               BlockInputAnim;                                             // 0x3050   (0x0001)  
	bool                                               bIsInElevator;                                              // 0x3051   (0x0001)  
	bool                                               InventoryCameraBlock;                                       // 0x3052   (0x0001)  
	bool                                               Recover;                                                    // 0x3053   (0x0001)  
	unsigned char                                      UnknownData150_5[0x4];                                      // 0x3054   (0x0004)  MISSED
	TArray<FString>                                    Aliases;                                                    // 0x3058   (0x0010)  
	FMulticastInlineDelegate                           OnSetAliases;                                               // 0x3068   (0x0010)  
	FMulticastInlineDelegate                           OnPocketChanged;                                            // 0x3078   (0x0010)  
	float                                              New_Rotation_X__Roll_;                                      // 0x3088   (0x0004)  
	float                                              InventoryOpenAnimAlpha;                                     // 0x308C   (0x0004)  
	bool                                               JumpBlock;                                                  // 0x3090   (0x0001)  
	unsigned char                                      UnknownData151_5[0x7];                                      // 0x3091   (0x0007)  MISSED
	FMulticastInlineDelegate                           RoomInsidesSave;                                            // 0x3098   (0x0010)  
	TArray<FString>                                    RoomInsideSave;                                             // 0x30A8   (0x0010)  
	TArray<FString>                                    ServerStruct;                                               // 0x30B8   (0x0010)  
	FRotator                                           GpsRotation;                                                // 0x30C8   (0x0018)  
	FMulticastInlineDelegate                           OnBackPackChanged;                                          // 0x30E0   (0x0010)  
	FMulticastInlineDelegate                           OnChangeAmmoClass;                                          // 0x30F0   (0x0010)  
	float                                              ChangeAmmoTypeTime;                                         // 0x3100   (0x0004)  
	unsigned char                                      UnknownData152_5[0x4];                                      // 0x3104   (0x0004)  MISSED
	FFMODEventInstance                                 KnockedSnapShot3d;                                          // 0x3108   (0x0008)  
	UFMODAudioComponent*                               LastReplicatedSound;                                        // 0x3110   (0x0008)  
	UFMODAudioComponent*                               SupportSound;                                               // 0x3118   (0x0008)  
	UFMODAudioComponent*                               KnockedSnap3d;                                              // 0x3120   (0x0008)  
	bool                                               BlockCallMenu;                                              // 0x3128   (0x0001)  
	unsigned char                                      UnknownData153_5[0x7];                                      // 0x3129   (0x0007)  MISSED
	FMulticastInlineDelegate                           OnMeetNPC;                                                  // 0x3130   (0x0010)  
	bool                                               MenuOpen_;                                                  // 0x3140   (0x0001)  
	unsigned char                                      UnknownData154_5[0x7];                                      // 0x3141   (0x0007)  MISSED
	AA_Menu_C*                                         MenuRef;                                                    // 0x3148   (0x0008)  
	int32_t                                            GPSPage;                                                    // 0x3150   (0x0004)  
	unsigned char                                      UnknownData155_5[0x4];                                      // 0x3154   (0x0004)  MISSED
	ABP_GPS_FP_C*                                      GPSRef_FP;                                                  // 0x3158   (0x0008)  
	TMap<FString, TEnumAsByte>                         CarSaveMap;                                                 // 0x3160   (0x0050)  
	bool                                               BlockFIK;                                                   // 0x31B0   (0x0001)  
	bool                                               bMouseInverse;                                              // 0x31B1   (0x0001)  
	unsigned char                                      UnknownData156_5[0x6];                                      // 0x31B2   (0x0006)  MISSED
	UQuest*                                            TrackedQuest;                                               // 0x31B8   (0x0008)  
	FRotator                                           SyncedLookRotatation;                                       // 0x31C0   (0x0018)  
	bool                                               BlockedBinocularsInTutorial;                                // 0x31D8   (0x0001)  
	unsigned char                                      UnknownData157_5[0x7];                                      // 0x31D9   (0x0007)  MISSED
	ABP_TrainingApp_C*                                 As_BP_Training_App;                                         // 0x31E0   (0x0008)  
	TEnumAsByte<WE_NewDeathScreenState>                Ressurect_Place;                                            // 0x31E8   (0x0001)  
	bool                                               DeviceSwitcherBlock;                                        // 0x31E9   (0x0001)  
	bool                                               Teleping;                                                   // 0x31EA   (0x0001)  
	unsigned char                                      UnknownData158_5[0x1];                                      // 0x31EB   (0x0001)  MISSED
	int32_t                                            Received_Reputation_Points;                                 // 0x31EC   (0x0004)  
	bool                                               bShowInteractDebugTrace;                                    // 0x31F0   (0x0001)  
	bool                                               BarEating;                                                  // 0x31F1   (0x0001)  
	unsigned char                                      UnknownData159_5[0x6];                                      // 0x31F2   (0x0006)  MISSED
	FTimerHandle                                       DoOnce;                                                     // 0x31F8   (0x0008)  
	TMap<TEnumAsByte, TEnumAsByte>                     DefaultCollisionResponse_New;                               // 0x3200   (0x0050)  
	FText                                              CurrentCarName;                                             // 0x3250   (0x0018)  
	FVector                                            PrevTickLocation;                                           // 0x3268   (0x0018)  
	bool                                               GrenadeBlock;                                               // 0x3280   (0x0001)  
	bool                                               MeleeAnim;                                                  // 0x3281   (0x0001)  
	bool                                               EasyTrainEnable;                                            // 0x3282   (0x0001)  
	bool                                               SwitchAnim;                                                 // 0x3283   (0x0001)  
	TEnumAsByte<CarTipe>                               CarTipe;                                                    // 0x3284   (0x0001)  
	unsigned char                                      UnknownData160_5[0x3];                                      // 0x3285   (0x0003)  MISSED
	int32_t                                            ReloadCountAssault;                                         // 0x3288   (0x0004)  
	int32_t                                            ReloadCountShotgun;                                         // 0x328C   (0x0004)  
	int32_t                                            ReloadCountCarbine;                                         // 0x3290   (0x0004)  
	int32_t                                            ShotCountAssault;                                           // 0x3294   (0x0004)  
	int32_t                                            ShotCountShotgun;                                           // 0x3298   (0x0004)  
	int32_t                                            ShotCountCarbine;                                           // 0x329C   (0x0004)  
	TArray<FString>                                    Missing_Car_Names;                                          // 0x32A0   (0x0010)  
	FMulticastInlineDelegate                           MissingCarSave;                                             // 0x32B0   (0x0010)  
	bool                                               Is_Beginner;                                                // 0x32C0   (0x0001)  
	bool                                               ExitGPSBlock;                                               // 0x32C1   (0x0001)  
	bool                                               ShopNow;                                                    // 0x32C2   (0x0001)  
	unsigned char                                      UnknownData161_5[0x5];                                      // 0x32C3   (0x0005)  MISSED
	TArray<TEnumAsByte>                                TrainCD;                                                    // 0x32C8   (0x0010)  
	bool                                               HungerDamage;                                               // 0x32D8   (0x0001)  
	unsigned char                                      UnknownData162_5[0x7];                                      // 0x32D9   (0x0007)  MISSED
	FFItemInfo                                         receiverInfo;                                               // 0x32E0   (0x0220)  
	FFItemInfo                                         DroppedInfo;                                                // 0x3500   (0x0220)  
	bool                                               FPPWeapon;                                                  // 0x3720   (0x0001)  
	bool                                               NewVar;                                                     // 0x3721   (0x0001)  
	unsigned char                                      UnknownData163_5[0x2];                                      // 0x3722   (0x0002)  MISSED
	int32_t                                            TrainCost;                                                  // 0x3724   (0x0004)  
	bool                                               CtrlHolded;                                                 // 0x3728   (0x0001)  
	bool                                               ShiftHolded;                                                // 0x3729   (0x0001)  
	bool                                               FreeLookPressed;                                            // 0x372A   (0x0001)  
	unsigned char                                      UnknownData164_5[0x1];                                      // 0x372B   (0x0001)  MISSED
	int32_t                                            BackpackChangeCount;                                        // 0x372C   (0x0004)  
	UObject*                                           ShopWidget;                                                 // 0x3730   (0x0008)  
	bool                                               bBlockingAfterRessurect;                                    // 0x3738   (0x0001)  


	/// Functions
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.IsLocked?
	void IsLocked?(bool& Result);                                                                                            // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.GetActorType
	void GetActorType(TEnumAsByte<E_ActorType>& ActorType);                                                                  // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnFocused
	void OnFocused(APawn* Player, AActor* HighlightActor, UActorComponent* HighlightActorComponent, TEnumAsByte<E_InteractType>& InteractType, double& LateTime); // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.IsDead?
	void IsDead?(bool& IsDead?);                                                                                             // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.IsZombie?
	void IsZombie?(bool& IsZombie?, APawn*& Zombie);                                                                         // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.IsBandit?
	void IsBandit?(bool& IsBandit?);                                                                                         // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.StopEffectByRef
	void StopEffectByRef(UEffectMain_C* NewParam, bool& Return);                                                             // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.StopEffectByName
	void StopEffectByName(TArray<FText>& EffectName, TEnumAsByte<E_WeakeningEffect> WeakeningEffects, bool RemoveAll, bool& Return); // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.GetStatsComponent
	void GetStatsComponent(UBPC_PlayerStatsComponent_C*& PlayerStats);                                                       // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SetPlayerCollisionInCar
	void SetPlayerCollisionInCar(bool NewEnable);                                                                            // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.IsInWater
	void IsInWater(bool& InWater);                                                                                           // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.IsPlayer
	void IsPlayer(bool& IsPlayer);                                                                                           // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SetEnableSmoothSync
	void SetEnableSmoothSync(bool NewEnable, bool& Success);                                                                 // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.PlayerItemCountByName
	void PlayerItemCountByName(FString ItemName, int32_t& Count);                                                            // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.PlayerGetMesh
	void PlayerGetMesh(USkeletalMeshComponent*& Mesh);                                                                       // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.PlayerAddItem
	void PlayerAddItem(FFItemInfo ItemInfo, UWBP_AttachmentCell_C* ActiveCell, bool& Added);                                 // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.WP_HasWeaponOrBroken
	void WP_HasWeaponOrBroken(bool& Value);                                                                                  // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.WP_GetWeaponType
	void WP_GetWeaponType(TEnumAsByte<BPE_Weapon_Type>& WeaponType);                                                         // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.WP_GetLefHandEffectorTransform
	void WP_GetLefHandEffectorTransform(FTransform& Transform, bool& HasEffector);                                           // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.WP_GetRotationInput
	void WP_GetRotationInput(FVector2D& NewParam);                                                                           // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.WP_GetShootDirection
	void WP_GetShootDirection(FVector& ShootDirection);                                                                      // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.WP_GetSkeletalMesh
	void WP_GetSkeletalMesh(USkeletalMeshComponent*& SkinnedMesh, bool& Success);                                            // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.WP_GetAimCamera
	void WP_GetAimCamera(UCameraComponent*& Camera);                                                                         // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.GetSurvController
	void GetSurvController(ASurvPC_C*& SurvPC);                                                                              // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.CheckEndEat
	void CheckEndEat(bool& Eat?);                                                                                            // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.GetCameraOffset
	void GetCameraOffset(FVector& PelvisOffset, FVector& InterpOffset);                                                      // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnCloseTabsWindowsFromPC
	void OnCloseTabsWindowsFromPC();                                                                                         // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.Remove from Container
	void Remove from Container(UJSI_Slot_C* Slot);                                                                           // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.Add Item Items
	void Add Item Items(FContainerPickupsInfo Index);                                                                        // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.Add Item Data
	void Add Item Data(FContainerPickupsInfo Index);                                                                         // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.Remove Index Data
	void Remove Index Data(int32_t Index);                                                                                   // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.Remove Index Items
	void Remove Index Items(int32_t Index);                                                                                  // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.getItemsInventory
	void getItemsInventory(TArray<FContainerPickupsInfo>& ContainerItems, TArray<FContainerPickupsInfo>& ContainersData);    // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnRep_Is Beginner
	void OnRep_Is Beginner();                                                                                                // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.UpdateInventoryContainers
	void UpdateInventoryContainers();                                                                                        // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnRep_As BP Training App
	void OnRep_As BP Training App();                                                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.DecodeCarSave
	FName DecodeCarSave(TArray<FString>& Array);                                                                             // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.CarSaveUpdate
	void CarSaveUpdate();                                                                                                    // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnRep_BarParentCall
	void OnRep_BarParentCall();                                                                                              // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.CheckMoveTypeBySpeed
	void CheckMoveTypeBySpeed();                                                                                             // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SetCustomizeFace2
	void SetCustomizeFace2();                                                                                                // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.LinetraceToHighlightActor
	void LinetraceToHighlightActor(UObject* TestObject, bool& HitResult, AActor*& HitActor, UPrimitiveComponent*& HitComponent); // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SetDefaultClothes
	void SetDefaultClothes(FString& Out, FString& Pan);                                                                      // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.FocusHighlightedActor
	void FocusHighlightedActor(AActor* CheckActor, AActor*& HighlightedActor);                                               // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.GetGPSPage
	int32_t GetGPSPage();                                                                                                    // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SetGPSPage
	void SetGPSPage(int32_t InputPin, bool& bPageChanged);                                                                   // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ZombieSpawnTriggerSettings
	void ZombieSpawnTriggerSettings();                                                                                       // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnRep_RPoints
	void OnRep_RPoints();                                                                                                    // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.MeetNPC
	void MeetNPC(FString& NPCName);                                                                                          // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.DestroyChildActors
	void DestroyChildActors();                                                                                               // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.DeleteFromContainer
	void DeleteFromContainer(AMPMainContainerBox_C* MpContainerRef, int32_t ItemUID, int32_t ItemsLeft, bool bContainer, bool bShop, bool& bSuccess, FContainerPickupsInfo& ItemInfo); // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.Get Change Ammo Type Time
	void Get Change Ammo Type Time(float& ChangeAmmoTypeTime);                                                               // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.Set Struct Save
	void Set Struct Save(FS_SaveStructure Struct);                                                                           // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.CalculateItemsLeftAfterAddOrEquip
	void CalculateItemsLeftAfterAddOrEquip(FFItemInfo Item, int32_t& OutputPin);                                             // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ValidateArr Drop Box (Only Server)
	void ValidateArr Drop Box (Only Server)(FFItemInfo DropItem, FVector Location, TArray<FFItemInfo>& Arr, bool& Result);   // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ChangeSitsIfinCar
	void ChangeSitsIfinCar(APawn* Vehicle, APawn* Player, int32_t DesireSitIndex);                                           // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.BlockMenuFunc
	void BlockMenuFunc(bool Block?);                                                                                         // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnRep_CompasState
	void OnRep_CompasState();                                                                                                // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.GetItemsByType
	void GetItemsByType(TEnumAsByte<JSItemType> Type, TArray<FString>& Items, TArray<int32_t>& Counts);                      // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ExitBar
	void ExitBar();                                                                                                          // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.EatItemSelect
	UAnimSequence* EatItemSelect(FS_EatPlayerInformation& S_EatPlayerInformation, bool& _CanMove, bool& _HasStandAnimation, bool& _WepNotHiding); // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.GetItemWeight
	void GetItemWeight(FName Name, double InputWeight, double& Weight);                                                      // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.MoneyCycle
	void MoneyCycle(int32_t MoneyCycle);                                                                                     // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ReviveCount
	void ReviveCount();                                                                                                      // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SetCarstStat
	void SetCarstStat(TArray<FString>& Stats);                                                                               // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.GetCarsStat
	void GetCarsStat(TArray<FString>& Stats);                                                                                // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.JSDropItemByInfo
	void JSDropItemByInfo(FFItemInfo Info);                                                                                  // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ShotgunZombieDamage
	void ShotgunZombieDamage(TArray<FBPS_DamageInfo>& DamageInfoArray);                                                      // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.Clear End Gamestats
	void Clear End Gamestats();                                                                                              // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.Get End Gamestats
	void Get End Gamestats(TMap<TEnumAsByte, int64_t>& EndGameStat);                                                         // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.HasGrenade
	void HasGrenade(bool& Has);                                                                                              // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ActionInputsOn/Off
	void ActionInputsOn/Off(bool On?);                                                                                       // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.Set Hit Percentage
	void Set Hit Percentage(bool HitReg);                                                                                    // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.FPPScopeCrouch
	void FPPScopeCrouch(bool Crouch);                                                                                        // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnRep_GPSEquip
	void OnRep_GPSEquip();                                                                                                   // [0x2407bf0] HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SetDurabilityItem
	void SetDurabilityItem(int32_t ItemId, int32_t ItemServerID, double NewDurability);                                      // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.GetReviveTime
	void GetReviveTime(double& ReviveTime);                                                                                  // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.GetSurrenderTime
	void GetSurrenderTime(float& SurrenderTime);                                                                             // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.Set Default Suit from Create
	void Set Default Suit from Create(UInventoryWorker_C* Ref);                                                              // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.FindMeshOrient
	void FindMeshOrient();                                                                                                   // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SetCapsuleOrient
	void SetCapsuleOrient();                                                                                                 // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.GetMeshOffset
	void GetMeshOffset();                                                                                                    // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.CapsuleChaseWhileRagdolling
	void CapsuleChaseWhileRagdolling(FVector& CapsuleLoc);                                                                   // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.Crawl Ragdolling
	void Crawl Ragdolling(double HitAngle, FVector HitLocation);                                                             // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.CheckHoveredSlot
	void CheckHoveredSlot();                                                                                                 // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnChangeProtectiveCase
	void OnChangeProtectiveCase(UJSIContainer_C* FromContainer, UJSIContainer_C* ToContainer, UJSI_Slot_C* slotRef, bool Equipped?, bool ToPockets?); // [0x2407bf0] Private|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.CheckLegsColor
	void CheckLegsColor();                                                                                                   // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.CheckSkinTone
	void CheckSkinTone();                                                                                                    // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.LootDelayBlockFloatCalc
	void LootDelayBlockFloatCalc();                                                                                          // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnRep_bCompasEquip
	void OnRep_bCompasEquip();                                                                                               // [0x2407bf0] HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.JSDropItems
	void JSDropItems(TArray<FContainerPickupsInfo>& PickUp's);                                                               // [0x2407bf0] Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.JSFillContainer
	void JSFillContainer(UJSIContainer_C* Container, TArray<FContainerPickupsInfo>& PickUp's, bool ClearContainer, TArray<FContainerPickupsInfo>& Added, TArray<FContainerPickupsInfo>& NotAdded, TArray<FContainerPickupsInfo>& Ignored); // [0x2407bf0] Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.GetContainerByUID
	void GetContainerByUID(int32_t ContainerUID, bool& Result, UJSIContainer_C*& Container);                                 // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnChangePocket
	void OnChangePocket(UJSIContainer_C* FromContainer, UJSIContainer_C* ToContainer, UJSI_Slot_C* slotRef, bool Equipped?, bool ToPockets?); // [0x2407bf0] Private|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnChangePistolWeapon
	void OnChangePistolWeapon(UJSIContainer_C* FromContainer, UJSIContainer_C* ToContainer, UJSI_Slot_C* slotRef, bool Equipped?, bool ToPockets?); // [0x2407bf0] Private|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnChangeSecondaryWeapon
	void OnChangeSecondaryWeapon(UJSIContainer_C* FromContainer, UJSIContainer_C* ToContainer, UJSI_Slot_C* slotRef, bool Equipped?, bool ToPockets?); // [0x2407bf0] Private|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.IsValidItem
	void IsValidItem(FFItemInfo Item, bool& Result);                                                                         // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnChangePrimaryWeapon
	void OnChangePrimaryWeapon(UJSIContainer_C* FromContainer, UJSIContainer_C* ToContainer, UJSI_Slot_C* slotRef, bool Equipped?, bool ToPockets?); // [0x2407bf0] Private|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnChangeHelmet
	void OnChangeHelmet(UJSIContainer_C* FromContainer, UJSIContainer_C* ToContainer, UJSI_Slot_C* slotRef, bool Equipped?, bool ToPockets?); // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnChangePants
	void OnChangePants(UJSIContainer_C* FromContainer, UJSIContainer_C* ToContainer, UJSI_Slot_C* slotRef, bool Equipped?, bool ToPockets?); // [0x2407bf0] Private|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnChangeTacticalRig
	void OnChangeTacticalRig(UJSIContainer_C* FromContainer, UJSIContainer_C* ToContainer, UJSI_Slot_C* slotRef, bool Equipped?, bool ToPockets?); // [0x2407bf0] Private|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.JSAddItemFromGround
	void JSAddItemFromGround(FContainerPickupsInfo NewPickUp, bool& Result);                                                 // [0x2407bf0] Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.JSRefreshInventory
	void JSRefreshInventory(FContainerPickupsInfo NewPickUp, bool& Result);                                                  // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.GetItemByID (Constant)
	void GetItemByID (Constant)(int32_t ItemId, bool& Result, FFItemInfo& Item);                                             // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.GetEquipmentContainer
	void GetEquipmentContainer(int32_t ItemId, bool& Result, UJSIContainer_C*& Container);                                   // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.IsItemCanBeEquipped
	void IsItemCanBeEquipped(int32_t ItemId, bool& Result);                                                                  // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.GetInventoryItemByUID
	void GetInventoryItemByUID(int32_t ItemUID, bool& Result, bool& Container, FContainerPickupsInfo& Item);                 // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SetNaked
	void SetNaked(bool IsNaked);                                                                                             // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.InfoAboutDamage
	void InfoAboutDamage(AActor* Target, FName BoneName, double Damage);                                                     // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnRep_IsFemale
	void OnRep_IsFemale();                                                                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SetCusomizeFace
	void SetCusomizeFace();                                                                                                  // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnRep_DeadBodyV2
	void OnRep_DeadBodyV2();                                                                                                 // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.PrintDebug (Items)
	void PrintDebug (Items)(double Duration);                                                                                // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ChangeMaterialParamColor
	void ChangeMaterialParamColor(TArray<USkeletalMeshComponent*>& Array, FName ParameterName, FLinearColor Value);          // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.RestoreDefaultMaterials
	void RestoreDefaultMaterials();                                                                                          // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.FindItems (Weapons)
	void FindItems (Weapons)(bool& Result, TArray<FFItemInfo>& ValidItems);                                                  // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ParserSave
	void ParserSave(UCharacterCreateSave_C* Save, FS_SaveStructure& Struct);                                                 // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.UpdateCharacter
	void UpdateCharacter(FS_SaveStructure Target);                                                                           // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.Get XYBy Angle
	void Get XYBy Angle(double angle, double& X, double& Y);                                                                 // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.RestoreDefaultRot_FreeAim
	void RestoreDefaultRot_FreeAim();                                                                                        // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.GetNames_CheckBlendShapes
	void GetNames_CheckBlendShapes();                                                                                        // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.DirectionalLightSwitch
	void DirectionalLightSwitch(FString LightName);                                                                          // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.JSStopEffect (byGroup)
	void JSStopEffect (byGroup)(FName Group);                                                                                // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.Validate Drop Box (Only Server)
	void Validate Drop Box (Only Server)(FFItemInfo DropItem, FVector Location, bool& Result);                               // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.AddItemToDropBox
	void AddItemToDropBox(FFItemInfo Item, bool& Result);                                                                    // [0x2407bf0] Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.InitialHideWeaponMotionBlur
	void InitialHideWeaponMotionBlur();                                                                                      // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SetMoveType
	void SetMoveType(TEnumAsByte<MovementType> MoveType);                                                                    // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.NewFunction
	void NewFunction(ABP_Weapon_C* WeaponRef);                                                                               // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.GetDefaultCameraTag
	void GetDefaultCameraTag(FGameplayTag& CameraModeTag);                                                                   // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.StopTpsToFpsCamShake
	void StopTpsToFpsCamShake();                                                                                             // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.Self-healingTimerHandler
	void Self-healingTimerHandler();                                                                                         // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.IsHemorrhage
	void IsHemorrhage(int32_t NumberOfHits, AActor* DamageCauser, bool RandomApply, bool& Result);                           // [0x2407bf0] Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.RemoveItemFromPlayerContainer
	void RemoveItemFromPlayerContainer(UJSI_Slot_C* Item);                                                                   // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.Set Visible and Collision
	void Set Visible and Collision(bool IsActive);                                                                           // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.IfShopClose
	void IfShopClose();                                                                                                      // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.CheckWeaponSlotPoint
	void CheckWeaponSlotPoint(int32_t PrimaryId, int32_t SecondaryId, bool& NonSync);                                        // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SaveGameSettings
	void SaveGameSettings();                                                                                                 // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.LoadGameSettings
	void LoadGameSettings();                                                                                                 // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.FlashlightRotation
	void FlashlightRotation();                                                                                               // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.BindingEventsBeginPlay
	void BindingEventsBeginPlay();                                                                                           // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.RessurectPlace
	FVector RessurectPlace(TEnumAsByte<WE_NewDeathScreenState> Where, APlayerStart*& OutItem, FRotator& Return Value Rotation); // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.TryToAddItemToStashContainer
	void TryToAddItemToStashContainer(UJSIContainer_C* StashContainerRef, UJSI_Slot_C* SendSlotRef, bool& Locaked);          // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.TryToGetStashContainer
	void TryToGetStashContainer(UJSIContainer_C*& MainInventoryContainer);                                                   // [0x2407bf0] Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.Weapon Sync
	void Weapon Sync(int32_t PrimaryId, int32_t SecondaryId);                                                                // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnRep_WeaponPlaceholderShadow
	void OnRep_WeaponPlaceholderShadow();                                                                                    // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnRep_Secondary Weapon Slot
	void OnRep_Secondary Weapon Slot();                                                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnRep_Primary Weapon Slot
	void OnRep_Primary Weapon Slot();                                                                                        // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.VisFunc
	void VisFunc(bool InputPin);                                                                                             // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.HiddenInGameCheck
	void HiddenInGameCheck(bool HiddenInGame, bool LootPointOpened, bool bLockMovement, bool Crawling);                      // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.VisToggleForHiddenShadowComponents
	void VisToggleForHiddenShadowComponents(bool Vis);                                                                       // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.InitializeFlash
	void InitializeFlash(FSFlashInstance Instance);                                                                          // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.FadeFlash
	void FadeFlash(bool& FinishedFading);                                                                                    // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnRep_DeadBody
	void OnRep_DeadBody();                                                                                                   // [0x2407bf0] HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.GetResLocation
	void GetResLocation(AActor* StartPoint, FVector& Vector);                                                                // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.CastShadowsCurrentWP
	void CastShadowsCurrentWP(bool Cast?);                                                                                   // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.CopyDataToShadowWP
	void CopyDataToShadowWP(AWeaponPlaceholder_C* SourceWP);                                                                 // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ShowWPFakeShadow
	void ShowWPFakeShadow(bool NewCastHiddenShadow);                                                                         // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.UpdateWeightMaxItems
	void UpdateWeightMaxItems();                                                                                             // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.Update Weight Items
	void Update Weight Items();                                                                                              // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.AddItemToPocketFromMPC
	void AddItemToPocketFromMPC(UJSIContainer_C* FromContainer, UJSI_Slot_C* DroppedSlotRef);                                // [0x2407bf0] Protected|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.GetWeaponNamesFromSlots
	void GetWeaponNamesFromSlots(FName& PrimaryWeaponName, FName& SecondaryWeaponName, FName& PistolWeaponName, FName& MeleeWeaponName); // [0x2407bf0] Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.RestoreItems
	void RestoreItems();                                                                                                     // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SetUnactiveForAllWeapons
	void SetUnactiveForAllWeapons();                                                                                         // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SetAttachments
	void SetAttachments(AWeaponPlaceholder_C* WeaponPlaceholder, FFItemInfo& FItemInfo);                                     // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.UpdateWeaponStructure
	void UpdateWeaponStructure(FFItemInfo NewWeaponInfo, bool& bResult);                                                     // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ClearGrenadeVars
	void ClearGrenadeVars();                                                                                                 // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.FlashGrenadeOffCamera
	void FlashGrenadeOffCamera(double Distance);                                                                             // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.FlashGrenadeOnCamera
	void FlashGrenadeOnCamera(double Distance);                                                                              // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.BreathingDefault
	void BreathingDefault();                                                                                                 // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.RemoveInventoryItemByUID
	void RemoveInventoryItemByUID(int32_t Uid, bool OnlyItem, bool& ItemRemoved);                                            // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SwapWeaponPlaceholders
	void SwapWeaponPlaceholders();                                                                                           // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.Get Hit Impulse
	void Get Hit Impulse(FName BoneName, double HitAngle, FVector HitLocation, bool IsRadialDamage, FVector& HitImpulse);    // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnRep_Hit Bone Name
	void OnRep_Hit Bone Name();                                                                                              // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnRep_Hit Impulse
	void OnRep_Hit Impulse();                                                                                                // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnRep_Hit Location
	void OnRep_Hit Location();                                                                                               // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.EquipThrowable
	void EquipThrowable(bool Equip);                                                                                         // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.GetDeadBodyItems
	void GetDeadBodyItems();                                                                                                 // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.CheckBandages
	void CheckBandages(bool& HaveBandage);                                                                                   // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnChangeArmor
	void OnChangeArmor(UJSIContainer_C* FromContainer, UJSIContainer_C* ToContainer, UJSI_Slot_C* slotRef, bool Equipped?, bool ToPockets?); // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SwitchBackpack
	void SwitchBackpack(UJSI_Slot_C* ItemReceiver, UJSI_Slot_C* ItemDropped, UJSIContainer_C* ItemReceiverContainer, UJSIContainer_C* ItemDroppedContainer); // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnChangeBackpack
	void OnChangeBackpack(UJSIContainer_C* FromContainer, UJSIContainer_C* ToContainer, UJSI_Slot_C* slotRef, bool Equipped?, bool ToPockets?); // [0x2407bf0] Private|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnChangeEquipment (General)
	void OnChangeEquipment (General)(UJSIContainer_C* FromContainer, UJSIContainer_C* ToContainer, UJSI_Slot_C* slotRef, bool Equipped?, bool ToPockets?); // [0x2407bf0] Private|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.DestroyAllAttachmentsInWP
	void DestroyAllAttachmentsInWP(AWeaponPlaceholder_C* WeaponPlaceholder);                                                 // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.GetKnockdownTime
	void GetKnockdownTime(double& KnockdownTime);                                                                            // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.EndKnockDown
	void EndKnockDown();                                                                                                     // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SetCurrentPlaceholder
	void SetCurrentPlaceholder(TEnumAsByte<PlayerSlots> Slot);                                                               // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.InitWeaponPlaceholders
	void InitWeaponPlaceholders();                                                                                           // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.HideHairUnderHelmet
	void HideHairUnderHelmet(bool Hide);                                                                                     // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.PlayHeadHitSound
	void PlayHeadHitSound();                                                                                                 // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.CalculateDmgWithArmor
	double CalculateDmgWithArmor(FName BoneName, double Damage);                                                             // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.CrashEquipment
	void CrashEquipment();                                                                                                   // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.CalculateArmorAndHelmetDurability
	void CalculateArmorAndHelmetDurability(FName BoneName, double Damage);                                                   // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ClearStateVars
	void ClearStateVars();                                                                                                   // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ClearRotationVars
	void ClearRotationVars();                                                                                                // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SetSensitivityMultiplier
	void SetSensitivityMultiplier();                                                                                         // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.IncrFragCounter
	void IncrFragCounter();                                                                                                  // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.IncrDeathCounter
	void IncrDeathCounter();                                                                                                 // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ToggleGaussianBlur
	void ToggleGaussianBlur(bool On);                                                                                        // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.GetStartItems
	void GetStartItems(TArray<FName>& StartItems);                                                                           // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnRep_Ragdoll
	void OnRep_Ragdoll();                                                                                                    // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.HideMeshesDuringAim
	void HideMeshesDuringAim(bool bNewOwnerNoSee);                                                                           // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SetCameraLockOnTarget
	void SetCameraLockOnTarget(FGameplayTag CameraModeTag);                                                                  // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SetEquipmentTier
	void SetEquipmentTier(TEnumAsByte<EquipmentSlot> EquipmentSlot, FName EquipmentName, int32_t Tier);                      // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.GetEquipmentTier
	void GetEquipmentTier(TEnumAsByte<EquipmentSlot> EquipmentSlot, int32_t& EquipmentTier);                                 // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SetAIMPPPArameters
	void SetAIMPPPArameters(double BlurDist, double BlurRadius, double Density);                                             // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.AddAimPP
	void AddAimPP();                                                                                                         // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.Change Money Count
	void Change Money Count(int32_t Sum);                                                                                    // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.GetTotalMoneyCount
	void GetTotalMoneyCount(int32_t& ReturnedCount);                                                                         // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SetSkeletalCloth
	void SetSkeletalCloth(USkinnedMeshComponent* SkeletalMesh, TWeakObjectPtr<USkeletalMesh*> NewMesh);                      // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.GetWeaponCameraTag
	FGameplayTag GetWeaponCameraTag();                                                                                       // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.BuildContainerDataToWidget_v2
	void BuildContainerDataToWidget_v2(TArray<FContainerPickupsInfo>& ItemData_Containers, TArray<FContainerPickupsInfo>& ItemData_Items, AMPMainContainerBox_C* MainContainer, TArray<FString>& NewParam); // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.CanAddItems
	void CanAddItems(TArray<FFItemInfo>& Items, bool& Can, int32_t& ItemsLeft);                                              // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ConfigureTradeInventory
	void ConfigureTradeInventory();                                                                                          // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.AimWithScope
	void AimWithScope(double FOV);                                                                                           // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnRep_WeaponName
	void OnRep_WeaponName();                                                                                                 // [0x2407bf0] HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnRep_PantsName
	void OnRep_PantsName();                                                                                                  // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnRep_BackpackName
	void OnRep_BackpackName();                                                                                               // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnRep_HelmetName
	void OnRep_HelmetName();                                                                                                 // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnRep_OuterwearName
	void OnRep_OuterwearName();                                                                                              // [0x2407bf0] HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnRep_ArmorName
	void OnRep_ArmorName();                                                                                                  // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.GetUltraSky
	void GetUltraSky(AUltra_Dynamic_Sky_C*& Output);                                                                         // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ItemUsingPlayRate
	void ItemUsingPlayRate(EItemType ItemType, double& PlayRate);                                                            // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.Resize Main Container
	void Resize Main Container(int32_t Columns, int32_t Rows);                                                               // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ManualBeginPlay
	void ManualBeginPlay();                                                                                                  // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.RemoveAllItems
	void RemoveAllItems();                                                                                                   // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ZombieAvoid
	void ZombieAvoid();                                                                                                      // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.UpdateWeaponDurability
	void UpdateWeaponDurability(int32_t Uid, double Durability, double MaxDurability, bool ChangeMaxDurability, UJSI_Slot_C* Slot); // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.Took Dummy Damage
	void Took Dummy Damage(double Damage, FVector DDLocation, FName BoneName, FVector HitLocation, bool DontAnimate, bool Bleed, APawn* Killer); // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.UnequipAllItems
	void UnequipAllItems();                                                                                                  // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.Fade
	void Fade(bool bToFade, double Duration);                                                                                // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.FindClosestBunkerMark
	void FindClosestBunkerMark(UW_Mark_C*& Array Element);                                                                   // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ShowBunkerMarks
	void ShowBunkerMarks(ESlateVisibility InVisibility);                                                                     // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SpawnBunkerMarks
	void SpawnBunkerMarks();                                                                                                 // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.CheckIfMarkInBunker
	void CheckIfMarkInBunker(UW_Mark_C* Mark);                                                                               // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ConfigureContainerInventory
	void ConfigureContainerInventory(AMPMainContainerBox_C* CurrentFocusedContainer);                                        // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.HidePlayer
	void HidePlayer(bool PlayerHided);                                                                                       // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.GetAllItemsToDrop
	void GetAllItemsToDrop(TArray<FDropItemEntry>& Result);                                                                  // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ClearInventory
	void ClearInventory();                                                                                                   // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SetSpeedByWeapon
	void SetSpeedByWeapon(FName RowName);                                                                                    // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.IsInHouse
	bool IsInHouse();                                                                                                        // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.CheckForBreathIdle
	void CheckForBreathIdle();                                                                                               // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnRep_Vehicle
	void OnRep_Vehicle();                                                                                                    // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ATPCCameraMode
	void ATPCCameraMode(FGameplayTag CameraModeTag, bool bWithInterpolation, bool WithTransit, double TransitTime, bool SharpTransition, bool bForceSet); // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnRep_Lootpoint
	void OnRep_Lootpoint();                                                                                                  // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.TransferTradeItemsToCont
	void TransferTradeItemsToCont(TArray<UJSI_Slot_C*>& Array);                                                              // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.IsEquippedByUID
	bool IsEquippedByUID(int32_t ItemUID);                                                                                   // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.Count Prices
	void Count Prices(TArray<UJSI_Slot_C*>& ItemsToBuy, double& Prices);                                                     // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.IsEnoughMoney
	bool IsEnoughMoney(int32_t Sum);                                                                                         // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.IsInputAllowed
	bool IsInputAllowed(bool ExcludeGrounded, bool ExcludeSauna, bool ExcludeRoomEdit, bool InTrainingGym, bool SitBar, bool Vending, bool ChairBar); // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.GetItemCountByJSItemType
	void GetItemCountByJSItemType(TEnumAsByte<JSItemType> Type, int32_t& ReturnedCount);                                     // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ChangeCameraMode
	void ChangeCameraMode(FGameplayTag CameraModeTag, bool bWithInterpolation);                                              // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.AddPitchInput
	void AddPitchInput(double AxisValue);                                                                                    // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.AddYawInput
	void AddYawInput(double AxisValue);                                                                                      // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnRep_InCar
	void OnRep_InCar();                                                                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.FindItemOnGround
	void FindItemOnGround(UJSI_Slot_C* Slot, AA_Item_C*& AItem, bool& Found);                                                // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.FindItemsOnTheGround
	void FindItemsOnTheGround(TArray<AA_Item_C*>& ItemsOnGround);                                                            // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.StoreCollisionSettings
	void StoreCollisionSettings();                                                                                           // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.GetItemCountByType
	void GetItemCountByType(EItemType Type, int32_t& ReturnedCount);                                                         // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SetUnactiveWeaponsMesh
	void SetUnactiveWeaponsMesh(FName PrimaryWeaponSlot, FName SecondaryWeaponSlot, FName PistolWeaponSlot, FName MeleeWeaponSlot); // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SetWeaponSlotMesh
	void SetWeaponSlotMesh(UPrimitiveComponent* PhysicsSM, USceneComponent* Root, USceneComponent* WeaponPoint, AWeaponPlaceholder_C* WeaponPlaceholder); // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.AfterFullHeal
	void AfterFullHeal();                                                                                                    // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.AddItems
	void AddItems(TArray<FName>& Array);                                                                                     // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.VisualizeEquipmentUnlocal
	void VisualizeEquipmentUnlocal(USkinnedMeshComponent* Target, FName RowName, TWeakObjectPtr<USkeletalMesh*> DefaultMesh); // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.InitUnlocalEquipment
	void InitUnlocalEquipment();                                                                                             // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.CheckBleeding
	void CheckBleeding(FText EffectName, double BleedingDuration, bool& BleedingActive);                                     // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.InFlatSurface
	void InFlatSurface(bool& Value);                                                                                         // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.IsSpineMontage
	void IsSpineMontage(bool& Value);                                                                                        // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.HasCamp
	void HasCamp(bool& Has);                                                                                                 // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.HasItem
	void HasItem(FString ItemName, bool& Has);                                                                               // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.WoundDamage
	void WoundDamage(FName BoneName, FVector HitLocation);                                                                   // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SimpleCreateDynMat
	void SimpleCreateDynMat(USkeletalMeshComponent* SkeletalMesh, TArray<UMaterialInstanceDynamic*>& Materials);             // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.InitializeWoundComponent
	void InitializeWoundComponent(int32_t MeshType, TArray<UMaterialInstanceDynamic*>& OriginalMaterials);                   // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.DropAllItems
	void DropAllItems();                                                                                                     // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.DropItemBySlot
	void DropItemBySlot(UJSI_Slot_C* Slot);                                                                                  // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnRep_CampingActor
	void OnRep_CampingActor();                                                                                               // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SetEnableTrails
	void SetEnableTrails(bool Enable);                                                                                       // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.CallEatAnim
	void CallEatAnim(FName Hightlight);                                                                                      // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.JSFindContainerID
	void JSFindContainerID(int32_t Uid, int32_t& ContainerID);                                                               // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.CreateDynMateral
	void CreateDynMateral(USkeletalMeshComponent* SkeletalMesh);                                                             // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.CheckBlendshapes
	void CheckBlendshapes();                                                                                                 // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.PlayCameraShake
	void PlayCameraShake();                                                                                                  // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.JSUseItemInInventory
	void JSUseItemInInventory(UJSI_Slot_C* Slot, UJSIContainer_C* SlotContainer);                                            // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.InitLocalPlayer
	void InitLocalPlayer();                                                                                                  // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.NotifyInventoryUpdate
	void NotifyInventoryUpdate();                                                                                            // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.RemovePlayerListener
	void RemovePlayerListener(TScriptInterface<BlueprintGeneratedClass> Listener);                                           // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.AddPlayerListener
	void AddPlayerListener(TScriptInterface<BlueprintGeneratedClass> Listener);                                              // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SkipDamageAnim
	void SkipDamageAnim();                                                                                                   // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.TakedDamage
	void TakedDamage(double Damage, FVector DDLocation, FName BoneName, FVector HitLocation, bool DontAnimate, APawn* Killer, bool IsRadialDamage, bool IsFireDamage, double DistanceToExplosion, AActor* DamageCauser, bool EffectDamage, bool HungerDamage, UNegativeEffectDamageType NegativeEffectDamageType); // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.Can Add or Equip Item
	void Can Add or Equip Item(FFItemInfo& FItemInfo, bool OnlyAdd, bool& Return);                                           // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.JSAddItemToSpecificContainer
	void JSAddItemToSpecificContainer(FFItemInfo ItemInfo, UJSIContainer_C* ToContainer, int32_t ToSlotIndex, UJSI_Slot_C* slotRef); // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.StopAllFuckdEffects
	void StopAllFuckdEffects();                                                                                              // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.NotifyPlayerDead
	void NotifyPlayerDead();                                                                                                 // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SetPlayerListener
	void SetPlayerListener(TScriptInterface<BlueprintGeneratedClass> Listener);                                              // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.TestTimer
	void TestTimer();                                                                                                        // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.NotifyQuestEvent
	void NotifyQuestEvent(FString quest_event);                                                                              // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SetQuestEventListener
	void SetQuestEventListener(TScriptInterface<BlueprintGeneratedClass> Listener);                                          // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.HouseLeaved
	void HouseLeaved(AHouseBox_C* HouseBox);                                                                                 // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.HouseEntered
	void HouseEntered(AHouseBox_C* NewBox);                                                                                  // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.CallCraft
	void CallCraft(bool Craft?);                                                                                             // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.FindItemCountByName
	void FindItemCountByName(FString ItemName, int32_t NeededItemCount, bool& Success, int32_t& NeedCount, int32_t& NewParam, FString& Item); // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.FlashlightController
	void FlashlightController();                                                                                             // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.CorrectCameraOffsetByPelvis
	void CorrectCameraOffsetByPelvis();                                                                                      // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.HasWeaponOrBroken
	void HasWeaponOrBroken(bool& Bonus);                                                                                     // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.StaminaHit
	void StaminaHit(double hit, double HitTime);                                                                             // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.UpdateItemInfo
	void UpdateItemInfo(int32_t Uid, int32_t Count, bool isContainer, UJSI_Slot_C* Slot, double Durability);                 // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ClientFunc_OnDistanceCloseContainer
	void ClientFunc_OnDistanceCloseContainer();                                                                              // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.UpdateItemCount
	void UpdateItemCount(int32_t UniqueId, int32_t Count);                                                                   // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.GetEquipSlotByCID
	void GetEquipSlotByCID(int32_t CID, TEnumAsByte<EquipmentSlot>& Slot);                                                   // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.GetEquipInfoBySlot
	void GetEquipInfoBySlot(TEnumAsByte<EquipmentSlot> Slot, bool& Equipped);                                                // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ContainerEventHandle
	void ContainerEventHandle(UJSIContainer_C* FromContainer, UJSIContainer_C* ToContainer, UJSI_Slot_C* DroppedSlotRef, UJSI_Slot_C* SlotReceiveRef, int32_t ToSlotIndex); // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.JSAddItem
	void JSAddItem(AActor* InteractItem, TArray<FContainerPickupsInfo>& PickContItems, TArray<FContainerPickupsInfo>& PickContData, FFItemInfo ItemInfo, int32_t Index, bool boolBlockStack?, bool& Ad); // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.DeleteDynamicContainer
	void DeleteDynamicContainer(int32_t Uid);                                                                                // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.TransferItemsToActor
	void TransferItemsToActor(FContainerPickupsInfo ContainerInfo, int32_t ContainerIndex, bool& Success, TArray<FContainerPickupsInfo>& Data, TArray<FContainerPickupsInfo>& Items); // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.BuildContainerDataToWidget
	void BuildContainerDataToWidget(TArray<FContainerPickupsInfo>& ItemData_Containers, TArray<FContainerPickupsInfo>& ItemData_Items, UJSIContainer_C* MainContainer, TArray<UJSIContainer_C*>& CreatedContainerList); // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.AddItemsToPickup
	void AddItemsToPickup(FFItemInfo& FItemInfo, TArray<FContainerPickupsInfo>& AddedData1, TArray<FContainerPickupsInfo>& AddedItems1); // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.JSUpdateInventory
	void JSUpdateInventory(int32_t Uid, int32_t Index, int32_t ContainerMotherID, bool isContainer, FFItemInfo Info, bool& Updated); // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.CanAddItem
	void CanAddItem(UJSIContainer_C* Container, FFItemInfo& FItemInfo, bool blockStack, bool& Can, int32_t& SlotIndex, bool& Canstack, UJSI_Slot_C*& ItemRef); // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SurvGetUniqueID
	void SurvGetUniqueID(int32_t& UniqueId);                                                                                 // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.JSDropItem
	void JSDropItem(UJSI_Slot_C* Item);                                                                                      // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.GetItemCountByName
	void GetItemCountByName(FString Name, int32_t& ReturnedCount);                                                           // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.GetItemByName
	void GetItemByName(FString Name, int32_t Count, int32_t& ReturnedCount);                                                 // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SetEquipStatusBySlot
	void SetEquipStatusBySlot(TEnumAsByte<EquipmentSlot> Slot, bool Value);                                                  // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.GetEquipStatusBySlot
	void GetEquipStatusBySlot(TEnumAsByte<PlayerSlots> Slot, bool& Equipped);                                                // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.JSStartEffect
	void JSStartEffect(FName EffectKey, TArray<UEffect_C*>& Effectt);                                                        // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.JSUseItem
	void JSUseItem(UJSI_Slot_C* Slot, bool Equiped);                                                                         // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.HasCanister
	void HasCanister(bool& HasCanister);                                                                                     // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SetWeapon
	void SetWeapon(FName WeaponName, UJSI_Slot_C* ItemState, TEnumAsByte<PlayerSlots> CurrentActive, FFItemInfo Weapon_ItemInfo, bool WithoutAnimation); // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.UnblockSprint
	void UnblockSprint();                                                                                                    // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SetAiming
	void SetAiming(bool isAim, bool FPS, bool NotReplicate);                                                                 // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.CalcAccelDeccelCustom
	void CalcAccelDeccelCustom(double Accel, double Deccel);                                                                 // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.CalcAccelDeccel
	void CalcAccelDeccel();                                                                                                  // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.CalculateSpeed
	void CalculateSpeed();                                                                                                   // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SetStance
	void SetStance(TEnumAsByte<StanceState> NewStance);                                                                      // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.LimitRotationOnLookingOffset
	void LimitRotationOnLookingOffset(double YawLimit, FRotator Rotation, FRotator& ExitRotator);                            // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.MovingRotation
	void MovingRotation();                                                                                                   // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.CheckSlotsToPlace
	void CheckSlotsToPlace(FSBP_ItemsData Item, int32_t& SlotID, bool& Stack, bool& Full);                                   // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.CheckSlotsToRemove
	void CheckSlotsToRemove(int32_t& SlotID, bool& NoItem);                                                                  // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.PlaceItem
	void PlaceItem(FSBP_ItemsData Item);                                                                                     // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.HighlightActor
	void HighlightActor();                                                                                                   // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.CallInteract
	void CallInteract();                                                                                                     // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SetSprint
	void SetSprint(bool SprintActive);                                                                                       // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.AddCharRotation
	void AddCharRotation(FRotator Amount);                                                                                   // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SetCharacterRotation
	void SetCharacterRotation(FRotator TargetRotation_Yaw, bool Interp, bool isShooting);                                    // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.LimitRotation
	void LimitRotation(double AimYawLimit, double InterpSpeed, FRotator Rotator, bool Lerp);                                 // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.CalculateVariables
	void CalculateVariables();                                                                                               // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.UserConstructionScript
	void UserConstructionScript();                                                                                           // [0x2407bf0] Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.CameraLerpSpring__FinishedFunc
	void CameraLerpSpring__FinishedFunc();                                                                                   // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.CameraLerpSpring__UpdateFunc
	void CameraLerpSpring__UpdateFunc();                                                                                     // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SprintAccelTimeline__FinishedFunc
	void SprintAccelTimeline__FinishedFunc();                                                                                // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SprintAccelTimeline__UpdateFunc
	void SprintAccelTimeline__UpdateFunc();                                                                                  // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.DamageCameraEffects__FinishedFunc
	void DamageCameraEffects__FinishedFunc();                                                                                // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.DamageCameraEffects__UpdateFunc
	void DamageCameraEffects__UpdateFunc();                                                                                  // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.KillPPEffectTimeline__FinishedFunc
	void KillPPEffectTimeline__FinishedFunc();                                                                               // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.KillPPEffectTimeline__UpdateFunc
	void KillPPEffectTimeline__UpdateFunc();                                                                                 // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.HealPPEffectTimeline__FinishedFunc
	void HealPPEffectTimeline__FinishedFunc();                                                                               // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.HealPPEffectTimeline__UpdateFunc
	void HealPPEffectTimeline__UpdateFunc();                                                                                 // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.Timeline_1__FinishedFunc
	void Timeline_1__FinishedFunc();                                                                                         // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.Timeline_1__UpdateFunc
	void Timeline_1__UpdateFunc();                                                                                           // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.addSpecular__FinishedFunc
	void addSpecular__FinishedFunc();                                                                                        // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.addSpecular__UpdateFunc
	void addSpecular__UpdateFunc();                                                                                          // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.subSpecular__FinishedFunc
	void subSpecular__FinishedFunc();                                                                                        // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.subSpecular__UpdateFunc
	void subSpecular__UpdateFunc();                                                                                          // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.DrunkLerpTimeline__FinishedFunc
	void DrunkLerpTimeline__FinishedFunc();                                                                                  // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.DrunkLerpTimeline__UpdateFunc
	void DrunkLerpTimeline__UpdateFunc();                                                                                    // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.WeaponLerpToCamera__FinishedFunc
	void WeaponLerpToCamera__FinishedFunc();                                                                                 // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.WeaponLerpToCamera__UpdateFunc
	void WeaponLerpToCamera__UpdateFunc();                                                                                   // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.Food_Water_Timeline__FinishedFunc
	void Food_Water_Timeline__FinishedFunc();                                                                                // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.Food_Water_Timeline__UpdateFunc
	void Food_Water_Timeline__UpdateFunc();                                                                                  // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.StepZoom__FinishedFunc
	void StepZoom__FinishedFunc();                                                                                           // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.StepZoom__UpdateFunc
	void StepZoom__UpdateFunc();                                                                                             // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.Timeline__FinishedFunc
	void Timeline__FinishedFunc();                                                                                           // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.Timeline__UpdateFunc
	void Timeline__UpdateFunc();                                                                                             // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.Timeline_3__FinishedFunc
	void Timeline_3__FinishedFunc();                                                                                         // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.Timeline_3__UpdateFunc
	void Timeline_3__UpdateFunc();                                                                                           // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.Timeline_4__FinishedFunc
	void Timeline_4__FinishedFunc();                                                                                         // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.Timeline_4__UpdateFunc
	void Timeline_4__UpdateFunc();                                                                                           // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.Timeline_5__FinishedFunc
	void Timeline_5__FinishedFunc();                                                                                         // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.Timeline_5__UpdateFunc
	void Timeline_5__UpdateFunc();                                                                                           // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ZoomGpsTL__FinishedFunc
	void ZoomGpsTL__FinishedFunc();                                                                                          // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ZoomGpsTL__UpdateFunc
	void ZoomGpsTL__UpdateFunc();                                                                                            // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ZoomGpsOffset__FinishedFunc
	void ZoomGpsOffset__FinishedFunc();                                                                                      // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ZoomGpsOffset__UpdateFunc
	void ZoomGpsOffset__UpdateFunc();                                                                                        // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.InventoryOpenTimeline__FinishedFunc
	void InventoryOpenTimeline__FinishedFunc();                                                                              // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.InventoryOpenTimeline__UpdateFunc
	void InventoryOpenTimeline__UpdateFunc();                                                                                // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.CrouchingWeaponOffsetTimeline__FinishedFunc
	void CrouchingWeaponOffsetTimeline__FinishedFunc();                                                                      // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.CrouchingWeaponOffsetTimeline__UpdateFunc
	void CrouchingWeaponOffsetTimeline__UpdateFunc();                                                                        // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.Timeline_2__FinishedFunc
	void Timeline_2__FinishedFunc();                                                                                         // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.Timeline_2__UpdateFunc
	void Timeline_2__UpdateFunc();                                                                                           // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.StandingPitchOffsetIfAim__FinishedFunc
	void StandingPitchOffsetIfAim__FinishedFunc();                                                                           // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.StandingPitchOffsetIfAim__UpdateFunc
	void StandingPitchOffsetIfAim__UpdateFunc();                                                                             // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ReverseCtiticalDamage__FinishedFunc
	void ReverseCtiticalDamage__FinishedFunc();                                                                              // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ReverseCtiticalDamage__UpdateFunc
	void ReverseCtiticalDamage__UpdateFunc();                                                                                // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ApplyCriticalHealthEffect__FinishedFunc
	void ApplyCriticalHealthEffect__FinishedFunc();                                                                          // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ApplyCriticalHealthEffect__UpdateFunc
	void ApplyCriticalHealthEffect__UpdateFunc();                                                                            // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.Timeline_0__FinishedFunc
	void Timeline_0__FinishedFunc();                                                                                         // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.Timeline_0__UpdateFunc
	void Timeline_0__UpdateFunc();                                                                                           // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.CrouchPitchOffsetIfAim__FinishedFunc
	void CrouchPitchOffsetIfAim__FinishedFunc();                                                                             // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.CrouchPitchOffsetIfAim__UpdateFunc
	void CrouchPitchOffsetIfAim__UpdateFunc();                                                                               // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.TimelineRoundProgressBar__FinishedFunc
	void TimelineRoundProgressBar__FinishedFunc();                                                                           // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.TimelineRoundProgressBar__UpdateFunc
	void TimelineRoundProgressBar__UpdateFunc();                                                                             // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.FPPAimingTimeline__FinishedFunc
	void FPPAimingTimeline__FinishedFunc();                                                                                  // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.FPPAimingTimeline__UpdateFunc
	void FPPAimingTimeline__UpdateFunc();                                                                                    // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.FPPAimingTimeline__EventHead__EventFunc
	void FPPAimingTimeline__EventHead__EventFunc();                                                                          // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.FPPAimingTimeline__EventMesh__EventFunc
	void FPPAimingTimeline__EventMesh__EventFunc();                                                                          // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.InpActEvt_TurnLights_K2Node_InputActionEvent
	void InpActEvt_TurnLights_K2Node_InputActionEvent(FKey Key);                                                             // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnNotifyEnd_4C6CB7084C1D71CB46E50C84C5E9872E
	void OnNotifyEnd_4C6CB7084C1D71CB46E50C84C5E9872E(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnNotifyBegin_4C6CB7084C1D71CB46E50C84C5E9872E
	void OnNotifyBegin_4C6CB7084C1D71CB46E50C84C5E9872E(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnInterrupted_4C6CB7084C1D71CB46E50C84C5E9872E
	void OnInterrupted_4C6CB7084C1D71CB46E50C84C5E9872E(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnBlendOut_4C6CB7084C1D71CB46E50C84C5E9872E
	void OnBlendOut_4C6CB7084C1D71CB46E50C84C5E9872E(FName NotifyName);                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnCompleted_4C6CB7084C1D71CB46E50C84C5E9872E
	void OnCompleted_4C6CB7084C1D71CB46E50C84C5E9872E(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnLoaded_5CD9B23A43AB48516BD1F5B66ABD36D3
	void OnLoaded_5CD9B23A43AB48516BD1F5B66ABD36D3(UObject* Loaded);                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.InpActEvt_BroadcastToRadio_K2Node_InputActionEvent
	void InpActEvt_BroadcastToRadio_K2Node_InputActionEvent(FKey Key);                                                       // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.InpActEvt_EquipGPS_K2Node_InputActionEvent
	void InpActEvt_EquipGPS_K2Node_InputActionEvent(FKey Key);                                                               // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnNotifyEnd_81739B6F41B7A1B1F11B54B7017C38A5
	void OnNotifyEnd_81739B6F41B7A1B1F11B54B7017C38A5(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnNotifyBegin_81739B6F41B7A1B1F11B54B7017C38A5
	void OnNotifyBegin_81739B6F41B7A1B1F11B54B7017C38A5(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnInterrupted_81739B6F41B7A1B1F11B54B7017C38A5
	void OnInterrupted_81739B6F41B7A1B1F11B54B7017C38A5(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnBlendOut_81739B6F41B7A1B1F11B54B7017C38A5
	void OnBlendOut_81739B6F41B7A1B1F11B54B7017C38A5(FName NotifyName);                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnCompleted_81739B6F41B7A1B1F11B54B7017C38A5
	void OnCompleted_81739B6F41B7A1B1F11B54B7017C38A5(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnNotifyEnd_FCCF662C425749BAADE9A6870DC3D002
	void OnNotifyEnd_FCCF662C425749BAADE9A6870DC3D002(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnNotifyBegin_FCCF662C425749BAADE9A6870DC3D002
	void OnNotifyBegin_FCCF662C425749BAADE9A6870DC3D002(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnInterrupted_FCCF662C425749BAADE9A6870DC3D002
	void OnInterrupted_FCCF662C425749BAADE9A6870DC3D002(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnBlendOut_FCCF662C425749BAADE9A6870DC3D002
	void OnBlendOut_FCCF662C425749BAADE9A6870DC3D002(FName NotifyName);                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnCompleted_FCCF662C425749BAADE9A6870DC3D002
	void OnCompleted_FCCF662C425749BAADE9A6870DC3D002(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnLoaded_810F71654DB385D40EF73499A75D748E
	void OnLoaded_810F71654DB385D40EF73499A75D748E(UObject* Loaded);                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnLoaded_92C6BAF64C7B420C867441B910C4243E
	void OnLoaded_92C6BAF64C7B420C867441B910C4243E(UObject* Loaded);                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnLoaded_E7B4E5A94ED38731D0814885C2AB1506
	void OnLoaded_E7B4E5A94ED38731D0814885C2AB1506(UObject* Loaded);                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnLoaded_B232A1334DA1D0793B230AA860BD28A5
	void OnLoaded_B232A1334DA1D0793B230AA860BD28A5(UObject* Loaded);                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnLoaded_55EB9A624CA08E69230E14B21112EA18
	void OnLoaded_55EB9A624CA08E69230E14B21112EA18(UObject* Loaded);                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnLoaded_4506C7EF4C0B30B0F17B0D98CB8CFA4A
	void OnLoaded_4506C7EF4C0B30B0F17B0D98CB8CFA4A(UObject* Loaded);                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnLoaded_4E7F2B5448E6D118F9FE60B85CC1F40B
	void OnLoaded_4E7F2B5448E6D118F9FE60B85CC1F40B(UObject* Loaded);                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnLoaded_47F1905546A9AAA4586355AB6B502922
	void OnLoaded_47F1905546A9AAA4586355AB6B502922(UObject* Loaded);                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnLoaded_5AE14A1545C1C842FFFB45BFF7D8E764
	void OnLoaded_5AE14A1545C1C842FFFB45BFF7D8E764(UObject* Loaded);                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnNotifyEnd_E6F9F3CA446308C32E9E1FA24C33AD00
	void OnNotifyEnd_E6F9F3CA446308C32E9E1FA24C33AD00(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnNotifyBegin_E6F9F3CA446308C32E9E1FA24C33AD00
	void OnNotifyBegin_E6F9F3CA446308C32E9E1FA24C33AD00(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnInterrupted_E6F9F3CA446308C32E9E1FA24C33AD00
	void OnInterrupted_E6F9F3CA446308C32E9E1FA24C33AD00(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnBlendOut_E6F9F3CA446308C32E9E1FA24C33AD00
	void OnBlendOut_E6F9F3CA446308C32E9E1FA24C33AD00(FName NotifyName);                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnCompleted_E6F9F3CA446308C32E9E1FA24C33AD00
	void OnCompleted_E6F9F3CA446308C32E9E1FA24C33AD00(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.InpActEvt_OpenJournal_K2Node_InputActionEvent
	void InpActEvt_OpenJournal_K2Node_InputActionEvent(FKey Key);                                                            // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnNotifyEnd_41F0B058443240805DDF4082AA1C084E
	void OnNotifyEnd_41F0B058443240805DDF4082AA1C084E(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnNotifyBegin_41F0B058443240805DDF4082AA1C084E
	void OnNotifyBegin_41F0B058443240805DDF4082AA1C084E(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnInterrupted_41F0B058443240805DDF4082AA1C084E
	void OnInterrupted_41F0B058443240805DDF4082AA1C084E(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnBlendOut_41F0B058443240805DDF4082AA1C084E
	void OnBlendOut_41F0B058443240805DDF4082AA1C084E(FName NotifyName);                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnCompleted_41F0B058443240805DDF4082AA1C084E
	void OnCompleted_41F0B058443240805DDF4082AA1C084E(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnNotifyEnd_4EFC55D740DA054494F6FAA05F35567B
	void OnNotifyEnd_4EFC55D740DA054494F6FAA05F35567B(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnNotifyBegin_4EFC55D740DA054494F6FAA05F35567B
	void OnNotifyBegin_4EFC55D740DA054494F6FAA05F35567B(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnInterrupted_4EFC55D740DA054494F6FAA05F35567B
	void OnInterrupted_4EFC55D740DA054494F6FAA05F35567B(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnBlendOut_4EFC55D740DA054494F6FAA05F35567B
	void OnBlendOut_4EFC55D740DA054494F6FAA05F35567B(FName NotifyName);                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnCompleted_4EFC55D740DA054494F6FAA05F35567B
	void OnCompleted_4EFC55D740DA054494F6FAA05F35567B(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnLoaded_D6FB4F9A45BFCCA8E8B708ACB823659C
	void OnLoaded_D6FB4F9A45BFCCA8E8B708ACB823659C(UObject* Loaded);                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnLoaded_23ECBC7D460CD16AE7C00CBB0F10F506
	void OnLoaded_23ECBC7D460CD16AE7C00CBB0F10F506(UObject* Loaded);                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnLoaded_B15FAC164A153822688EA58C4EC998CD
	void OnLoaded_B15FAC164A153822688EA58C4EC998CD(UObject* Loaded);                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnLoaded_F84F590E47EE940402D035984C86398A
	void OnLoaded_F84F590E47EE940402D035984C86398A(UObject* Loaded);                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnLoaded_E97B583D48429BEB6D397EB253297F35
	void OnLoaded_E97B583D48429BEB6D397EB253297F35(UClass* Loaded);                                                          // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnLoaded_41937A594715D1D529A1AA8CE3095ED6
	void OnLoaded_41937A594715D1D529A1AA8CE3095ED6(UClass* Loaded);                                                          // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnLoaded_10A6DDA7453F72F622B3FBBCEA3CBEEF
	void OnLoaded_10A6DDA7453F72F622B3FBBCEA3CBEEF(UClass* Loaded);                                                          // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnLoaded_500F295F4DF4FD2EC488138B070B5777
	void OnLoaded_500F295F4DF4FD2EC488138B070B5777(UObject* Loaded);                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnLoaded_23D190774BE7442EE9A890A468F59077
	void OnLoaded_23D190774BE7442EE9A890A468F59077(UObject* Loaded);                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnLoaded_B80A924342535454DCA1F4B4BA49815C
	void OnLoaded_B80A924342535454DCA1F4B4BA49815C(UObject* Loaded);                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnLoaded_17617C814C4065CE1B39D5951D04746E
	void OnLoaded_17617C814C4065CE1B39D5951D04746E(UObject* Loaded);                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnLoaded_EE6454EC4657EC853CFECC88801FF4B2
	void OnLoaded_EE6454EC4657EC853CFECC88801FF4B2(UObject* Loaded);                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnLoaded_EF1B48F349DD6E05CC624199DEAF4E2D
	void OnLoaded_EF1B48F349DD6E05CC624199DEAF4E2D(UObject* Loaded);                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnLoaded_D236227944CBCDE4D96753B70B28658A
	void OnLoaded_D236227944CBCDE4D96753B70B28658A(UObject* Loaded);                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.InpActEvt_ChangeSitToPassengerRF_K2Node_InputActionEvent
	void InpActEvt_ChangeSitToPassengerRF_K2Node_InputActionEvent(FKey Key);                                                 // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.InpActEvt_ChangeSitToPassengerRB_K2Node_InputActionEvent
	void InpActEvt_ChangeSitToPassengerRB_K2Node_InputActionEvent(FKey Key);                                                 // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.InpActEvt_ChangeSitToPassengerLB_K2Node_InputActionEvent
	void InpActEvt_ChangeSitToPassengerLB_K2Node_InputActionEvent(FKey Key);                                                 // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.InpActEvt_ChangeSitToDriver_K2Node_InputActionEvent
	void InpActEvt_ChangeSitToDriver_K2Node_InputActionEvent(FKey Key);                                                      // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnNotifyEnd_EECCE00741DCDDF6605EC5B0ED9F0A45
	void OnNotifyEnd_EECCE00741DCDDF6605EC5B0ED9F0A45(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnNotifyBegin_EECCE00741DCDDF6605EC5B0ED9F0A45
	void OnNotifyBegin_EECCE00741DCDDF6605EC5B0ED9F0A45(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnInterrupted_EECCE00741DCDDF6605EC5B0ED9F0A45
	void OnInterrupted_EECCE00741DCDDF6605EC5B0ED9F0A45(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnBlendOut_EECCE00741DCDDF6605EC5B0ED9F0A45
	void OnBlendOut_EECCE00741DCDDF6605EC5B0ED9F0A45(FName NotifyName);                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnCompleted_EECCE00741DCDDF6605EC5B0ED9F0A45
	void OnCompleted_EECCE00741DCDDF6605EC5B0ED9F0A45(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnNotifyEnd_4486567545FEEDDDC96AEA9DB8839CCD
	void OnNotifyEnd_4486567545FEEDDDC96AEA9DB8839CCD(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnNotifyBegin_4486567545FEEDDDC96AEA9DB8839CCD
	void OnNotifyBegin_4486567545FEEDDDC96AEA9DB8839CCD(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnInterrupted_4486567545FEEDDDC96AEA9DB8839CCD
	void OnInterrupted_4486567545FEEDDDC96AEA9DB8839CCD(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnBlendOut_4486567545FEEDDDC96AEA9DB8839CCD
	void OnBlendOut_4486567545FEEDDDC96AEA9DB8839CCD(FName NotifyName);                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnCompleted_4486567545FEEDDDC96AEA9DB8839CCD
	void OnCompleted_4486567545FEEDDDC96AEA9DB8839CCD(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnNotifyEnd_BD6442C748C03BF872A3BC8FEB26E38C
	void OnNotifyEnd_BD6442C748C03BF872A3BC8FEB26E38C(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnNotifyBegin_BD6442C748C03BF872A3BC8FEB26E38C
	void OnNotifyBegin_BD6442C748C03BF872A3BC8FEB26E38C(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnInterrupted_BD6442C748C03BF872A3BC8FEB26E38C
	void OnInterrupted_BD6442C748C03BF872A3BC8FEB26E38C(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnBlendOut_BD6442C748C03BF872A3BC8FEB26E38C
	void OnBlendOut_BD6442C748C03BF872A3BC8FEB26E38C(FName NotifyName);                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnCompleted_BD6442C748C03BF872A3BC8FEB26E38C
	void OnCompleted_BD6442C748C03BF872A3BC8FEB26E38C(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnNotifyEnd_1BFF31C440B74DD72A36D4830CDE6F82
	void OnNotifyEnd_1BFF31C440B74DD72A36D4830CDE6F82(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnNotifyBegin_1BFF31C440B74DD72A36D4830CDE6F82
	void OnNotifyBegin_1BFF31C440B74DD72A36D4830CDE6F82(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnInterrupted_1BFF31C440B74DD72A36D4830CDE6F82
	void OnInterrupted_1BFF31C440B74DD72A36D4830CDE6F82(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnBlendOut_1BFF31C440B74DD72A36D4830CDE6F82
	void OnBlendOut_1BFF31C440B74DD72A36D4830CDE6F82(FName NotifyName);                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnCompleted_1BFF31C440B74DD72A36D4830CDE6F82
	void OnCompleted_1BFF31C440B74DD72A36D4830CDE6F82(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnNotifyEnd_9AEE572044B59192DA3407A70F2DBC43
	void OnNotifyEnd_9AEE572044B59192DA3407A70F2DBC43(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnNotifyBegin_9AEE572044B59192DA3407A70F2DBC43
	void OnNotifyBegin_9AEE572044B59192DA3407A70F2DBC43(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnInterrupted_9AEE572044B59192DA3407A70F2DBC43
	void OnInterrupted_9AEE572044B59192DA3407A70F2DBC43(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnBlendOut_9AEE572044B59192DA3407A70F2DBC43
	void OnBlendOut_9AEE572044B59192DA3407A70F2DBC43(FName NotifyName);                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnCompleted_9AEE572044B59192DA3407A70F2DBC43
	void OnCompleted_9AEE572044B59192DA3407A70F2DBC43(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnNotifyEnd_833B381D46C11C255A1C38B33DD241E6
	void OnNotifyEnd_833B381D46C11C255A1C38B33DD241E6(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnNotifyBegin_833B381D46C11C255A1C38B33DD241E6
	void OnNotifyBegin_833B381D46C11C255A1C38B33DD241E6(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnInterrupted_833B381D46C11C255A1C38B33DD241E6
	void OnInterrupted_833B381D46C11C255A1C38B33DD241E6(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnBlendOut_833B381D46C11C255A1C38B33DD241E6
	void OnBlendOut_833B381D46C11C255A1C38B33DD241E6(FName NotifyName);                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnCompleted_833B381D46C11C255A1C38B33DD241E6
	void OnCompleted_833B381D46C11C255A1C38B33DD241E6(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnNotifyEnd_36DECDC24F3488802CADFBB647ACDF21
	void OnNotifyEnd_36DECDC24F3488802CADFBB647ACDF21(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnNotifyBegin_36DECDC24F3488802CADFBB647ACDF21
	void OnNotifyBegin_36DECDC24F3488802CADFBB647ACDF21(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnInterrupted_36DECDC24F3488802CADFBB647ACDF21
	void OnInterrupted_36DECDC24F3488802CADFBB647ACDF21(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnBlendOut_36DECDC24F3488802CADFBB647ACDF21
	void OnBlendOut_36DECDC24F3488802CADFBB647ACDF21(FName NotifyName);                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnCompleted_36DECDC24F3488802CADFBB647ACDF21
	void OnCompleted_36DECDC24F3488802CADFBB647ACDF21(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnNotifyEnd_9E3E90B644884EAEDE196AB60CDC9F84
	void OnNotifyEnd_9E3E90B644884EAEDE196AB60CDC9F84(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnNotifyBegin_9E3E90B644884EAEDE196AB60CDC9F84
	void OnNotifyBegin_9E3E90B644884EAEDE196AB60CDC9F84(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnInterrupted_9E3E90B644884EAEDE196AB60CDC9F84
	void OnInterrupted_9E3E90B644884EAEDE196AB60CDC9F84(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnBlendOut_9E3E90B644884EAEDE196AB60CDC9F84
	void OnBlendOut_9E3E90B644884EAEDE196AB60CDC9F84(FName NotifyName);                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnCompleted_9E3E90B644884EAEDE196AB60CDC9F84
	void OnCompleted_9E3E90B644884EAEDE196AB60CDC9F84(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnNotifyEnd_DC75E00748713B632BAC18B8C1F7D712
	void OnNotifyEnd_DC75E00748713B632BAC18B8C1F7D712(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnNotifyBegin_DC75E00748713B632BAC18B8C1F7D712
	void OnNotifyBegin_DC75E00748713B632BAC18B8C1F7D712(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnInterrupted_DC75E00748713B632BAC18B8C1F7D712
	void OnInterrupted_DC75E00748713B632BAC18B8C1F7D712(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnBlendOut_DC75E00748713B632BAC18B8C1F7D712
	void OnBlendOut_DC75E00748713B632BAC18B8C1F7D712(FName NotifyName);                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnCompleted_DC75E00748713B632BAC18B8C1F7D712
	void OnCompleted_DC75E00748713B632BAC18B8C1F7D712(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnNotifyEnd_1414204D48D5B2CBC491D6BE41DD6D38
	void OnNotifyEnd_1414204D48D5B2CBC491D6BE41DD6D38(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnNotifyBegin_1414204D48D5B2CBC491D6BE41DD6D38
	void OnNotifyBegin_1414204D48D5B2CBC491D6BE41DD6D38(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnInterrupted_1414204D48D5B2CBC491D6BE41DD6D38
	void OnInterrupted_1414204D48D5B2CBC491D6BE41DD6D38(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnBlendOut_1414204D48D5B2CBC491D6BE41DD6D38
	void OnBlendOut_1414204D48D5B2CBC491D6BE41DD6D38(FName NotifyName);                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnCompleted_1414204D48D5B2CBC491D6BE41DD6D38
	void OnCompleted_1414204D48D5B2CBC491D6BE41DD6D38(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnNotifyEnd_DD01F4BB4CF7056905366AA4CCA50835
	void OnNotifyEnd_DD01F4BB4CF7056905366AA4CCA50835(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnNotifyBegin_DD01F4BB4CF7056905366AA4CCA50835
	void OnNotifyBegin_DD01F4BB4CF7056905366AA4CCA50835(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnInterrupted_DD01F4BB4CF7056905366AA4CCA50835
	void OnInterrupted_DD01F4BB4CF7056905366AA4CCA50835(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnBlendOut_DD01F4BB4CF7056905366AA4CCA50835
	void OnBlendOut_DD01F4BB4CF7056905366AA4CCA50835(FName NotifyName);                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnCompleted_DD01F4BB4CF7056905366AA4CCA50835
	void OnCompleted_DD01F4BB4CF7056905366AA4CCA50835(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnNotifyEnd_1A48E0F54D3604F7F2269EB6140AB695
	void OnNotifyEnd_1A48E0F54D3604F7F2269EB6140AB695(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnNotifyBegin_1A48E0F54D3604F7F2269EB6140AB695
	void OnNotifyBegin_1A48E0F54D3604F7F2269EB6140AB695(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnInterrupted_1A48E0F54D3604F7F2269EB6140AB695
	void OnInterrupted_1A48E0F54D3604F7F2269EB6140AB695(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnBlendOut_1A48E0F54D3604F7F2269EB6140AB695
	void OnBlendOut_1A48E0F54D3604F7F2269EB6140AB695(FName NotifyName);                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnCompleted_1A48E0F54D3604F7F2269EB6140AB695
	void OnCompleted_1A48E0F54D3604F7F2269EB6140AB695(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.InpActEvt_Walk_K2Node_InputActionEvent
	void InpActEvt_Walk_K2Node_InputActionEvent(FKey Key);                                                                   // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.InpActEvt_Walk_K2Node_InputActionEvent
	void InpActEvt_Walk_K2Node_InputActionEvent(FKey Key);                                                                   // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.InpActEvt_FreeLook_K2Node_InputActionEvent
	void InpActEvt_FreeLook_K2Node_InputActionEvent(FKey Key);                                                               // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.InpActEvt_FreeLook_K2Node_InputActionEvent
	void InpActEvt_FreeLook_K2Node_InputActionEvent(FKey Key);                                                               // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.InpActEvt_Jump_K2Node_InputActionEvent
	void InpActEvt_Jump_K2Node_InputActionEvent(FKey Key);                                                                   // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.InpActEvt_Jump_K2Node_InputActionEvent
	void InpActEvt_Jump_K2Node_InputActionEvent(FKey Key);                                                                   // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.InpActEvt_Unarm_K2Node_InputActionEvent
	void InpActEvt_Unarm_K2Node_InputActionEvent(FKey Key);                                                                  // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.InpActEvt_WeaponSlot3_K2Node_InputActionEvent
	void InpActEvt_WeaponSlot3_K2Node_InputActionEvent(FKey Key);                                                            // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.InpActEvt_WeaponSlot2_K2Node_InputActionEvent
	void InpActEvt_WeaponSlot2_K2Node_InputActionEvent(FKey Key);                                                            // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.InpActEvt_WeaponSlot1_K2Node_InputActionEvent
	void InpActEvt_WeaponSlot1_K2Node_InputActionEvent(FKey Key);                                                            // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.InpActEvt_MouseScrollUp_K2Node_InputKeyEvent
	void InpActEvt_MouseScrollUp_K2Node_InputKeyEvent(FKey Key);                                                             // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.InpActEvt_MouseScrollDown_K2Node_InputKeyEvent
	void InpActEvt_MouseScrollDown_K2Node_InputKeyEvent(FKey Key);                                                           // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.InpActEvt_PlayerReload_K2Node_InputActionEvent
	void InpActEvt_PlayerReload_K2Node_InputActionEvent(FKey Key);                                                           // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.InpActEvt_PlayerReload_K2Node_InputActionEvent
	void InpActEvt_PlayerReload_K2Node_InputActionEvent(FKey Key);                                                           // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.InpActEvt_Sprint_K2Node_InputActionEvent
	void InpActEvt_Sprint_K2Node_InputActionEvent(FKey Key);                                                                 // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.InpActEvt_Sprint_K2Node_InputActionEvent
	void InpActEvt_Sprint_K2Node_InputActionEvent(FKey Key);                                                                 // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.InpActEvt_PlayerFire_K2Node_InputActionEvent
	void InpActEvt_PlayerFire_K2Node_InputActionEvent(FKey Key);                                                             // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.InpActEvt_PlayerFire_K2Node_InputActionEvent
	void InpActEvt_PlayerFire_K2Node_InputActionEvent(FKey Key);                                                             // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.InpActEvt_PlayerAim_K2Node_InputActionEvent
	void InpActEvt_PlayerAim_K2Node_InputActionEvent(FKey Key);                                                              // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.InpActEvt_PlayerAim_K2Node_InputActionEvent
	void InpActEvt_PlayerAim_K2Node_InputActionEvent(FKey Key);                                                              // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.InpActEvt_Use/Interact_K2Node_InputActionEvent
	void InpActEvt_Use/Interact_K2Node_InputActionEvent(FKey Key);                                                           // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.InpActEvt_Use/Interact_K2Node_InputActionEvent
	void InpActEvt_Use/Interact_K2Node_InputActionEvent(FKey Key);                                                           // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.InpActEvt_OpenInventory_K2Node_InputActionEvent
	void InpActEvt_OpenInventory_K2Node_InputActionEvent(FKey Key);                                                          // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.InpActEvt_Crouch_K2Node_InputActionEvent
	void InpActEvt_Crouch_K2Node_InputActionEvent(FKey Key);                                                                 // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnLocalInteract
	void OnLocalInteract(APawn* Player);                                                                                     // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnInteractVehicle
	void OnInteractVehicle(APawn* Player, int32_t SitIndex, bool SkipAnimation);                                             // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnStopInteract
	void OnStopInteract(APawn* Player);                                                                                      // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.Run Lockpicking
	void Run Lockpicking();                                                                                                  // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnSquadCheckComplete
	void OnSquadCheckComplete();                                                                                             // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.Set3DWidgetVisibility
	void Set3DWidgetVisibility(bool Visible);                                                                                // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SetTutorial3DWidgetVisibility
	void SetTutorial3DWidgetVisibility(bool Visible);                                                                        // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.DestroyInteractable
	void DestroyInteractable();                                                                                              // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.AIInteract
	void AIInteract(ABP_Door_C* Door, UArrowComponent* Arrow);                                                               // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.EndDoorAttack
	void EndDoorAttack();                                                                                                    // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.AvoidFire
	void AvoidFire();                                                                                                        // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.BeginOverlap
	void BeginOverlap();                                                                                                     // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.EndOverlap
	void EndOverlap();                                                                                                       // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.GI_TileLoaded
	void GI_TileLoaded(FName TileName);                                                                                      // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.GI_TileUnloaded
	void GI_TileUnloaded(FName TileName);                                                                                    // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.Craft
	void Craft(APawn* Player);                                                                                               // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.HeatUpBonfire
	void HeatUpBonfire(APawn* Player);                                                                                       // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.Interact
	void Interact(bool NewParam);                                                                                            // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.WP_Anim_Weapon_Equiped
	void WP_Anim_Weapon_Equiped(ABP_Weapon_C* NewParam);                                                                     // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.WP_Aiming
	void WP_Aiming(bool Aim);                                                                                                // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.WP_SetRecoilPower
	void WP_SetRecoilPower(double RecoilPower);                                                                              // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.WP_PlayGunTail
	void WP_PlayGunTail(UFMODEvent* TailSound);                                                                              // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.AnimNotifyTurningInPlace
	void AnimNotifyTurningInPlace(UAnimMontage* TurnIPMontage, bool ShouldTurn, bool TurningIP, bool TurningRight);          // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.MovementModeChanged
	void MovementModeChanged(TEnumAsByte<EMovementMode> NewParam);                                                           // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.PlayMontage
	void PlayMontage(UAnimMontage* AnimMontage, bool IsHipfire, bool Reloading, double PlayRate, double StartTime);          // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SetReloadState
	void SetReloadState(bool State);                                                                                         // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.CallEatMesh
	void CallEatMesh(FName ItemType, double DurationAttached, double AnimDelay, double DissappearDelay, double PlayRate);    // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SetItemUsingAnim
	void SetItemUsingAnim(UAnimSequence* Anim, bool SpecialItem, bool CanMove, bool HasStandAnim, bool WepNotHiding);        // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ResetItemUsingAnim
	void ResetItemUsingAnim();                                                                                               // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.CheckZombieSpawnInCar_Server
	void CheckZombieSpawnInCar_Server(ABP_CarWithZombie_C* CarWithZombie);                                                   // [0x2407bf0] Net|NetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SaveEndGameStat
	void SaveEndGameStat();                                                                                                  // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.LoadEndGameStat
	void LoadEndGameStat(TArray<FString>& StatSave);                                                                         // [0x2407bf0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.LoopSaveStat
	void LoopSaveStat();                                                                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SetEndgameStatFromSave
	void SetEndgameStatFromSave(TArray<int64_t>& EGSSave);                                                                   // [0x2407bf0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SavePlayerLocation
	void SavePlayerLocation();                                                                                               // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.TSaveLoc
	void TSaveLoc();                                                                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.LocationPrint
	void LocationPrint(FTransform NewParam);                                                                                 // [0x2407bf0] Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SavePlayerStats
	void SavePlayerStats();                                                                                                  // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.FootprintBeginPlay
	void FootprintBeginPlay();                                                                                               // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SpawnFootprintDecal
	void SpawnFootprintDecal(FName SocketName, bool Right, bool Left);                                                       // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ChangeFootState
	void ChangeFootState(TEnumAsByte<EFootState> New Style);                                                                 // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ReceiveBeginPlay
	void ReceiveBeginPlay();                                                                                                 // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.AddCharacterRotation
	void AddCharacterRotation(FRotator Amount);                                                                              // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.K2_OnMovementModeChanged
	void K2_OnMovementModeChanged(TEnumAsByte<EMovementMode> PrevMovementMode, TEnumAsByte<EMovementMode> NewMovementMode, char PrevCustomMode, char NewCustomMode); // [0x2407bf0] Event|Public|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.CameraLerpAction
	void CameraLerpAction(UCurveFloat* Curve);                                                                               // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.BPI_CameraShake
	void BPI_CameraShake(UClass* ShakeClass, bool NeedChangeScale, double Scale);                                            // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.WP_EquipWeapon
	void WP_EquipWeapon(FName WeaponName);                                                                                   // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SprintAccelAction
	void SprintAccelAction();                                                                                                // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.MaxWalkSpeedChanged(Server)
	void MaxWalkSpeedChanged(Server)(double MaxWalkSpeed);                                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.AccelChanged(Server)
	void AccelChanged(Server)(double Accel, double Deccel);                                                                  // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.MovementInputSync(Server)
	void MovementInputSync(Server)(bool HasMoveInput);                                                                       // [0x2407bf0] Net|NetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.LookingRotationSync(Server)
	void LookingRotationSync(Server)(FVector2D LookingRotation);                                                             // [0x2407bf0] Net|NetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.CharRotationSync(Server)
	void CharRotationSync(Server)(FRotator CharRotation);                                                                    // [0x2407bf0] Net|NetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.CharRotationSync(Multicast)
	void CharRotationSync(Multicast)(FVector2D CharRotation);                                                                // [0x2407bf0] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.AccelChanged(Multicast)
	void AccelChanged(Multicast)(double Accel, double Deccel);                                                               // [0x2407bf0] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.MaxWalkSpeedChanged(Multicast)
	void MaxWalkSpeedChanged(Multicast)(double MaxWalkSpeed);                                                                // [0x2407bf0] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ChangeStance(Server)
	void ChangeStance(Server)(TEnumAsByte<StanceState> Stance);                                                              // [0x2407bf0] Net|NetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ChangeAimState(Server)
	void ChangeAimState(Server)(bool isAim, bool IsFPS);                                                                     // [0x2407bf0] Net|NetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ChangeStance(Multicast)
	void ChangeStance(Multicast)(TEnumAsByte<StanceState> Stance);                                                           // [0x2407bf0] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ChangeAimState(Multicast)
	void ChangeAimState(Multicast)(bool isAim, bool IsFPS);                                                                  // [0x2407bf0] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ChangeWeapon(Server)
	void ChangeWeapon(Server)(FName WeaponName, FWeaponUniqueInfo Weapon_ItemInfo);                                          // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ChangeWeapon(Multicast)
	void ChangeWeapon(Multicast)(FName WeaponName, UJSI_Slot_C* ItemState, FFItemInfo Weapon_ItemInfo);                      // [0x2407bf0] Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.Fire(Server)
	void Fire(Server)(TArray<FBPS_DamageInfo>& HitInfo, bool fire);                                                          // [0x2407bf0] Net|NetReliableNetServer|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.Fire(Multicast)
	void Fire(Multicast)(TArray<FBPS_DamageInfo>& HitInfo, bool fire);                                                       // [0x2407bf0] Net|NetReliableNetMulticast|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ReloadEvent(Server)
	void ReloadEvent(Server)(bool bIsFastReloadMulti);                                                                       // [0x2407bf0] Net|NetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ReloadEvent(Multicast)
	void ReloadEvent(Multicast)(bool bIsFastReloadMulti);                                                                    // [0x2407bf0] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.MoveInputSync(Server)
	void MoveInputSync(Server)(FVector2D MoveInput);                                                                         // [0x2407bf0] Net|NetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.CallDisableInput
	void CallDisableInput();                                                                                                 // [0x2407bf0] Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.CallEnableInput
	void CallEnableInput();                                                                                                  // [0x2407bf0] Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ServerCallOpenLoot
	void ServerCallOpenLoot(ALootPoint_C* LootPoint);                                                                        // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ServerCallCloseLoot
	void ServerCallCloseLoot(ALootPoint_C* LootPoint);                                                                       // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.MultiChangeHealth
	void MultiChangeHealth(double Health, UBPC_PlayerStatsComponent_C* StatComponent, FVector DDLocation, FName BoneName, FVector HitLocation, bool DontAnimate, APawn* HitFrom); // [0x2407bf0] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.MultiDeathRagdoll
	void MultiDeathRagdoll(double HitAngle, FVector HitLocation, FName BoneName);                                            // [0x2407bf0] Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.Serv+Health
	void Serv+Health(double ChangedHealth, FVector DDLocation, FName BoneName, FVector HitLocation, bool DontAnimate, APawn* HitFrom); // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SendDamage
	void SendDamage(TArray<FBPS_DamageInfo>& DamageInfo);                                                                    // [0x2407bf0] Net|NetReliableNetServer|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ServerCallTurnDoor
	void ServerCallTurnDoor(ABP_Door_C* Door, bool IsOpen);                                                                  // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.MultiCallTurnDoor
	void MultiCallTurnDoor(ABP_Door_C* Door, bool IsOpen);                                                                   // [0x2407bf0] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.Ressurect
	void Ressurect(FVector Pos, FRotator rot, TEnumAsByte<WE_NewDeathScreenState> RessurectPlace);                           // [0x2407bf0] Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.RessurectServer
	void RessurectServer();                                                                                                  // [0x2407bf0] Net|NetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.WP_MeleeActivation
	void WP_MeleeActivation(bool State);                                                                                     // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ClientDied
	void ClientDied(double HitAngle, FVector HitLocation, FName BoneName, APawn* Killer, bool IsRadialDamage, TArray<FDropItemEntry>& Drop, bool DropItemWhenDie, bool HungerDamage); // [0x2407bf0] Net|NetReliableNetServer|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.TakedDamageEvent
	void TakedDamageEvent(double Damage, FVector DDLocation, FName BoneName, FVector HitLocation, bool DontAnimate, APawn* Killer, bool IsRadialDamage, bool IsFireDamage, double DistanceToExplosion, AActor* DamageCauser, bool StaminaDecrease, bool Zombie?, TEnumAsByte<BPE_AmmoClass> AmmoClass, UNegativeEffectDamageType NegativeEffectDamageType); // [0x2407bf0] Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.EquipArmor(Server)
	void EquipArmor(Server)(FName ItemId);                                                                                   // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.EquipArmor(Multicast)
	void EquipArmor(Multicast)(FName ItemId);                                                                                // [0x2407bf0] Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.EquipHelmet(Server)
	void EquipHelmet(Server)(FName ItemId);                                                                                  // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.EquipHelmet(Multicast)
	void EquipHelmet(Multicast)(FName ItemId);                                                                               // [0x2407bf0] Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.EquipBackpack(Server)
	void EquipBackpack(Server)(FName ItemId);                                                                                // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.EquipBackpack(Multicast)
	void EquipBackpack(Multicast)(FName ItemId);                                                                             // [0x2407bf0] Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.Step
	void Step();                                                                                                             // [0x2407bf0] Net|NetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.CarEnter
	void CarEnter();                                                                                                         // [0x2407bf0] Net|NetClient|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.CarExit
	void CarExit();                                                                                                          // [0x2407bf0] Net|NetClient|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.HouseExit
	void HouseExit();                                                                                                        // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.HouseEnter
	void HouseEnter();                                                                                                       // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.EquipPants(server)
	void EquipPants(server)(FName ItemId);                                                                                   // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.EquipPants(multicast)
	void EquipPants(multicast)(FName ItemId);                                                                                // [0x2407bf0] Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.EquipOuterwear(server)
	void EquipOuterwear(server)(FName nameId);                                                                               // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.EquipOuterwear(multicast)
	void EquipOuterwear(multicast)(FName ItemId);                                                                            // [0x2407bf0] Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ClientLevelLoaded
	void ClientLevelLoaded(FName LevelName);                                                                                 // [0x2407bf0] Net|NetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnLevelLoaded
	void OnLevelLoaded(FName LevelName);                                                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnLevelUnloaded
	void OnLevelUnloaded(FName LevelName);                                                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ClientLevelUnloaded
	void ClientLevelUnloaded(FName LevelName);                                                                               // [0x2407bf0] Net|NetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ServerCallIncreaseFuel
	void ServerCallIncreaseFuel(ABP_RB_Vehicle_C* Vehicle);                                                                  // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.MultiCallIncreaseFuel
	void MultiCallIncreaseFuel(ABP_Canister_C* Canister, ABP_RB_Vehicle_C* Vehicle);                                         // [0x2407bf0] Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ServerCallIncreaseDurability
	void ServerCallIncreaseDurability(AActor* Vehicle);                                                                      // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.MultiCallIncreaseDurability
	void MultiCallIncreaseDurability(AActor* Vehicle);                                                                       // [0x2407bf0] Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.CustomDamageFX
	void CustomDamageFX(TEnumAsByte<EPhysicalSurface> Enumerator, FVector InputPin, FVector Forward);                        // [0x2407bf0] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.CustomDamageFXServer
	void CustomDamageFXServer(TEnumAsByte<EPhysicalSurface> Enumerator, FVector InputPin, FVector Forward);                  // [0x2407bf0] Net|NetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.HouseBoxEntered
	void HouseBoxEntered(AHouseBox_C* HouseBox);                                                                             // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.HouseBoxLeaved
	void HouseBoxLeaved(AHouseBox_C* HouseBox);                                                                              // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ServerCallInteract
	void ServerCallInteract(AActor* InteractiveActor);                                                                       // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ReceivePointDamage
	void ReceivePointDamage(float Damage, UDamageType* DamageType, FVector HitLocation, FVector hitNormal, UPrimitiveComponent* HitComponent, FName BoneName, FVector ShotFromDirection, AController* InstigatedBy, AActor* DamageCauser, FHitResult& HitInfo); // [0x2407bf0] BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ResurrectServerAtLocation
	void ResurrectServerAtLocation(FVector Location, FRotator rot, TEnumAsByte<WE_NewDeathScreenState> RessurectPlace);      // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ResurrectAtLocation
	void ResurrectAtLocation(FVector Location, FRotator rot, TEnumAsByte<WE_NewDeathScreenState> RessurectPlace);            // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ShowBigText
	void ShowBigText(FString Text, FVector NewLocation);                                                                     // [0x2407bf0] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SetUsingItem
	void SetUsingItem(bool UsingItem, bool CanMove, bool NotWepHide);                                                        // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.PickupEnvItem-server
	void PickupEnvItem-server(ABP_DefaultPIckableEnv_C* EnvItem);                                                            // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.PickupEnvItem-client
	void PickupEnvItem-client(ABP_DefaultPIckableEnv_C* EnvItem, int32_t Uid);                                               // [0x2407bf0] Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.PickupEnvStatus
	void PickupEnvStatus(ABP_DefaultPIckableEnv_C* EnvItem, bool Added);                                                     // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ColdDecreaseSet
	void ColdDecreaseSet(double DecreaseSpeed);                                                                              // [0x2407bf0] Net|NetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ColdDecreaseSet_MULTI
	void ColdDecreaseSet_MULTI(double DecreaseSpeed);                                                                        // [0x2407bf0] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ReceiveRadialDamage
	void ReceiveRadialDamage(float DamageReceived, UDamageType* DamageType, FVector Origin, FHitResult& HitInfo, AController* InstigatedBy, AActor* DamageCauser); // [0x2407bf0] BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.HitMarkerUI
	void HitMarkerUI(bool Killed);                                                                                           // [0x2407bf0] Net|NetClient|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ShotgunReloadEvent
	void ShotgunReloadEvent(bool BulletIn_);                                                                                 // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SeatAsPassanger
	void SeatAsPassanger();                                                                                                  // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ServerCallSetFlashlightEnabled
	void ServerCallSetFlashlightEnabled(bool NewEnabled);                                                                    // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.MultiCallSetFlashlightEnabled
	void MultiCallSetFlashlightEnabled(bool NewEnabled);                                                                     // [0x2407bf0] Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.KillPPEffect
	void KillPPEffect();                                                                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ShowSimpleText
	void ShowSimpleText(FString Text);                                                                                       // [0x2407bf0] Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.HealPPEffect
	void HealPPEffect();                                                                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.StartCinematic
	void StartCinematic();                                                                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ReceiveDestroyed
	void ReceiveDestroyed();                                                                                                 // [0x2407bf0] Event|Public|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.BunkerSceneEnter
	void BunkerSceneEnter(ACutSceneTrigger_C* ViewTargetA);                                                                  // [0x2407bf0] Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SetDamageable
	void SetDamageable(bool Damageable);                                                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SetDamageableServ
	void SetDamageableServ(bool Damageable);                                                                                 // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ServerCallExitVehicle
	void ServerCallExitVehicle(AActor* Vehicle, bool SkipAnimation, bool SkipExitOnLocation, bool IgnoreSpeedLimits);        // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ReceivePossessed
	void ReceivePossessed(AController* NewController);                                                                       // [0x2407bf0] BlueprintAuthorityOnly|Event|Public|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.MoveInputSync(Multicast)
	void MoveInputSync(Multicast)(FVector2D MoveInput);                                                                      // [0x2407bf0] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.enableSmoothSync
	void enableSmoothSync(bool Enable, bool ZeroOnDisable);                                                                  // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ActivateBattleMode
	void ActivateBattleMode(bool Enable);                                                                                    // [0x2407bf0] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.DelayingBattleMode
	void DelayingBattleMode();                                                                                               // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.IncrKillCounter
	void IncrKillCounter();                                                                                                  // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.PlayEventFMODOWn
	void PlayEventFMODOWn(UFMODEvent* Event);                                                                                // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.InventoryInitedServer
	void InventoryInitedServer();                                                                                            // [0x2407bf0] Net|NetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.InventoryInitedMult
	void InventoryInitedMult();                                                                                              // [0x2407bf0] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ServDropItems
	void ServDropItems(TArray<FDropItemEntry>& ItemList);                                                                    // [0x2407bf0] Net|NetReliableNetServer|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ServerUnactiveWeapons
	void ServerUnactiveWeapons(FName PrimaryWeaponSlot, FName SecondaryWeaponSlot, FName PistolWeaponSlot, FName MeleeWeaponSlot, bool IgnoreLocal); // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.MultiUnactiveWeapons
	void MultiUnactiveWeapons(FName PrimaryWeaponSlot, FName SecondaryWeaponSlot, FName PistolWeaponSlot, FName MeleeWeaponSlot, bool IgnoreLocal); // [0x2407bf0] Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ServerSetCurrentActive
	void ServerSetCurrentActive(TEnumAsByte<PlayerSlots> CurrentActiveSlot);                                                 // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.MultiSetCurrentActive
	void MultiSetCurrentActive(TEnumAsByte<PlayerSlots> CurrentActiveSlot);                                                  // [0x2407bf0] Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ShotgunReloadMulti
	void ShotgunReloadMulti(bool BulletIn);                                                                                  // [0x2407bf0] Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.GetDamageLogic
	void GetDamageLogic(double Health, UBPC_PlayerStatsComponent_C* StatComp, FVector DDLocation, FName BoneName, FVector HitLocation, bool DontAnimate, UObject* HitFrom, bool DDLocal); // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.Vis
	void Vis(bool bNewVisibility);                                                                                           // [0x2407bf0] Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.VisServ
	void VisServ(bool bNewVisibility);                                                                                       // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SpawnTruppe
	void SpawnTruppe(FVector Impulse, FVector Location, FName BoneName);                                                     // [0x2407bf0] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.AfterFullHealthServer
	void AfterFullHealthServer();                                                                                            // [0x2407bf0] Net|NetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.AfterFullHealthMulticast
	void AfterFullHealthMulticast();                                                                                         // [0x2407bf0] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.AfterFullHealthImpl
	void AfterFullHealthImpl();                                                                                              // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ReceiveUnpossessed
	void ReceiveUnpossessed(AController* OldController);                                                                     // [0x2407bf0] BlueprintAuthorityOnly|Event|Public|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SetAttachementsVisibility
	void SetAttachementsVisibility(bool bNewVisibility);                                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.AnotherPlayerKilled
	void AnotherPlayerKilled();                                                                                              // [0x2407bf0] Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ServerCallInteractVehicle
	void ServerCallInteractVehicle(UObject* InteractiveActor, int32_t SitIndex, bool SkipAnimation);                         // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.Timer_UrovenShuma
	void Timer_UrovenShuma();                                                                                                // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SetLooting
	void SetLooting(bool Looting, double LootHeight);                                                                        // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SetLootingMulticast
	void SetLootingMulticast(bool Looting, double LootHeight);                                                               // [0x2407bf0] Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ChangeCameraOffset
	void ChangeCameraOffset(bool Reset, FVector& NewSocketOffset, double InterpSpeed);                                       // [0x2407bf0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ReceiveEndPlay
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);                                                          // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.WaitToLoadingLevel
	void WaitToLoadingLevel();                                                                                               // [0x2407bf0] Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.LevelsLoaded
	void LevelsLoaded();                                                                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.GotoWater
	void GotoWater();                                                                                                        // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.GooutWater
	void GooutWater();                                                                                                       // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.UnlocalCrouch
	void UnlocalCrouch(bool Crouch);                                                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SetAnimInWater
	void SetAnimInWater(bool InWater);                                                                                       // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SprintCamera
	void SprintCamera();                                                                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SpawnZombie
	void SpawnZombie(FVector InVec);                                                                                         // [0x2407bf0] Net|NetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.Craft Camera Proc
	void Craft Camera Proc();                                                                                                // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.BndEvt__VoipManager_K2Node_ComponentBoundEvent_0_VoiceGenerated__DelegateSignature
	void BndEvt__VoipManager_K2Node_ComponentBoundEvent_0_VoiceGenerated__DelegateSignature(TArray<char>& VoiceData, float MicLevel); // [0x2407bf0] HasOutParms|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SendVoiceData
	void SendVoiceData(bool UseRadio, TArray<char>& CompressedVoiceData);                                                    // [0x2407bf0] Net|NetReliableNetServer|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ReceiveVoice
	void ReceiveVoice(ASurvivalPlayer_C* Player, TArray<char>& CompressedVoiceData, bool radio);                             // [0x2407bf0] Net|NetReliableHasOutParms|NetClient|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ServSetCanHoldWeapon
	void ServSetCanHoldWeapon(bool CanHoldWeapon);                                                                           // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.Set Timer
	void Set Timer(bool Condition);                                                                                          // [0x2407bf0] Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ReceiveActorBeginOverlap
	void ReceiveActorBeginOverlap(AActor* OtherActor);                                                                       // [0x2407bf0] Event|Public|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.CallLootAnim
	void CallLootAnim(double LootingHeight, bool LootPointOpened);                                                           // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OpenLootRPC
	void OpenLootRPC(ALootPoint_C* LootPoint);                                                                               // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ShowSimpleUIText
	void ShowSimpleUIText(FString String);                                                                                   // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OpenDoorRPC
	void OpenDoorRPC(ABP_Door_C* Door, bool IsOpen);                                                                         // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.DelayedCameraMode
	void DelayedCameraMode(FGameplayTag CameraModeTag, bool bWithInterpolation, double Duration, bool CancelDelay);          // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.CampBuildInstant
	void CampBuildInstant();                                                                                                 // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.CampPlaceEnd
	void CampPlaceEnd();                                                                                                     // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.CampPlaceBegin
	void CampPlaceBegin();                                                                                                   // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnPlayerDeadClient
	void OnPlayerDeadClient(FVector Location, FVector Impulse, FName BoneName, double HitAngle, APawn* Killer);              // [0x2407bf0] Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SpawnDeadBodyWithDrop
	void SpawnDeadBodyWithDrop(TArray<FDropItemEntry>& Drop, FVector HitLocation, FVector OnDeathVelocity, FName HitBoneName, bool RadialDamage, APawn* Killer, bool Animed); // [0x2407bf0] Net|NetReliableNetMulticast|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnRootObjCollectionActivated
	void OnRootObjCollectionActivated(UBP_Objective_C* RootObjectiveCollection);                                             // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.CustomEvent
	void CustomEvent(UBP_Objective_C* Objective);                                                                            // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.CheckForClosestBunkerMark
	void CheckForClosestBunkerMark();                                                                                        // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.CustomEvent
	void CustomEvent();                                                                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.HidePlayerServer
	void HidePlayerServer(bool PlayerHided);                                                                                 // [0x2407bf0] Net|NetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.HidePlayerMulticast
	void HidePlayerMulticast(bool PlayerHided);                                                                              // [0x2407bf0] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SetWeaponType
	void SetWeaponType(TEnumAsByte<BPE_Weapon_Type> WeaponType);                                                             // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SaveLootWhenLeave_Server
	void SaveLootWhenLeave_Server(double TimeToDestroyDummyCharacter, TArray<FDropItemEntry>& Loot);                         // [0x2407bf0] Net|NetReliableNetServer|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SaveLootWhenLeave_Client
	void SaveLootWhenLeave_Client(double TimeToDestroyDummyCharacter);                                                       // [0x2407bf0] Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.TookDummyDamageEvent
	void TookDummyDamageEvent(double Damage, FVector DDLocation, FName BoneName, FVector HitLocation, bool DontAnimate, bool Bleed, APawn* Killer); // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.DummyClientDied
	void DummyClientDied(double HitAngle, FVector HitLocation, FName BoneName, APawn* Killer);                               // [0x2407bf0] Net|NetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.DestroyPawn
	void DestroyPawn();                                                                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.BlizzardWarning
	void BlizzardWarning();                                                                                                  // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.BunkerEnter
	void BunkerEnter();                                                                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.BunkerExit
	void BunkerExit();                                                                                                       // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ReInit
	void ReInit();                                                                                                           // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ReinitLevelStreamer
	void ReinitLevelStreamer();                                                                                              // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.BndEvt__SurvivalPlayer_LocalVOIP_K2Node_ComponentBoundEvent_2_OnSynthEnvelopeValue__DelegateSignature
	void BndEvt__SurvivalPlayer_LocalVOIP_K2Node_ComponentBoundEvent_2_OnSynthEnvelopeValue__DelegateSignature(float EnvelopeValue); // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.AddInviteWidget
	void AddInviteWidget(int32_t SquadIndex, FString PlayerName, ASurvPC_C* Target);                                         // [0x2407bf0] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SetCrawling
	void SetCrawling(bool Crawling);                                                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SetCrawlingServer
	void SetCrawlingServer(bool Crawling);                                                                                   // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SetCrawlingMulticast
	void SetCrawlingMulticast(bool Crawling);                                                                                // [0x2407bf0] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ExecutePlayer
	void ExecutePlayer(ASurvivalPlayer_C* OtherPlayer);                                                                      // [0x2407bf0] Net|NetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.CatchUpPlayer
	void CatchUpPlayer(ASurvivalPlayer_C* Target);                                                                           // [0x2407bf0] Net|NetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.PauseLootpointDestroy
	void PauseLootpointDestroy(ALootPoint_C* LootPoint);                                                                     // [0x2407bf0] Net|NetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.UnpauseLootpointDestroy
	void UnpauseLootpointDestroy(ALootPoint_C* LootPoint);                                                                   // [0x2407bf0] Net|NetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnPlayerExecuted
	void OnPlayerExecuted(ASurvivalPlayer_C* Killer);                                                                        // [0x2407bf0] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SetInventoryInited
	void SetInventoryInited();                                                                                               // [0x2407bf0] Net|NetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnAcceptInvitation
	void OnAcceptInvitation(int32_t SquadId);                                                                                // [0x2407bf0] Net|NetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnDeclineInvitation
	void OnDeclineInvitation(int32_t& Key);                                                                                  // [0x2407bf0] Net|NetServer|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ServerCallTrade
	void ServerCallTrade(ASurvivalPlayer_C* OtherPlayer);                                                                    // [0x2407bf0] Net|NetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ServerCallInvite
	void ServerCallInvite(ASurvivalPlayer_C* OtherPlayer);                                                                   // [0x2407bf0] Net|NetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnInvite
	void OnInvite(UObject* Inviter);                                                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnTrade
	void OnTrade(ASurvivalPlayer_C* TradeOfferer);                                                                           // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.AddTradeOfferWidget
	void AddTradeOfferWidget(FString PlayerNameOfferer, ASurvivalPlayer_C* TradeOfferer);                                    // [0x2407bf0] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ConfigureTradeInventory_Server
	void ConfigureTradeInventory_Server(ASurvivalPlayer_C* TradeOfferer);                                                    // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ConfigureTradeInventory_Multicast
	void ConfigureTradeInventory_Multicast();                                                                                // [0x2407bf0] Net|NetClient|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnAcceptTrade
	void OnAcceptTrade(ASurvivalPlayer_C* TradeOfferer);                                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SetReadyToTrade_Server
	void SetReadyToTrade_Server(TArray<FFItemInfo>& InputPin);                                                               // [0x2407bf0] Net|NetServer|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SetTraderOnServer
	void SetTraderOnServer(ASurvivalPlayer_C* Trader);                                                                       // [0x2407bf0] Net|NetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.CheckForJsiSlotArray
	void CheckForJsiSlotArray(TArray<FFItemInfo>& NewParam);                                                                 // [0x2407bf0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.AddTradeitemsToInventory
	void AddTradeitemsToInventory();                                                                                         // [0x2407bf0] Net|NetClient|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ResetParamsAfterTrade
	void ResetParamsAfterTrade();                                                                                            // [0x2407bf0] Net|NetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SetParamsBeforeTrade
	void SetParamsBeforeTrade(TArray<FFItemInfo>& TradeItems);                                                               // [0x2407bf0] Net|NetServer|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.CheckForSpaceInInventory
	void CheckForSpaceInInventory();                                                                                         // [0x2407bf0] Net|NetClient|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SetCheckedForSpace
	void SetCheckedForSpace(bool EnoughSpace);                                                                               // [0x2407bf0] Net|NetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ChangeDrunk_PP_Parameters
	void ChangeDrunk_PP_Parameters(double Blur, double Saturation, double Enabled);                                          // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.InitVars
	void InitVars();                                                                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SpawnProjectile_server
	void SpawnProjectile_server(UClass* Class, FVector Spawn Transform Location, FRotator Spawn Transform Rotation, FVector Spawn Transform Scale, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, AActor* Owner, FBPS_WeaponData WeaponData, bool ShowTrace, APawn* Instigator, TEnumAsByte<BPE_AmmoType> AmmoType); // [0x2407bf0] Net|NetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.InitVOIP
	void InitVOIP();                                                                                                         // [0x2407bf0] Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.BoltAction_Stop(Server)
	void BoltAction_Stop(Server)();                                                                                          // [0x2407bf0] Net|NetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.BoltAction_Stop(Multicast)
	void BoltAction_Stop(Multicast)();                                                                                       // [0x2407bf0] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.BoltAction_Resume(Server)
	void BoltAction_Resume(Server)();                                                                                        // [0x2407bf0] Net|NetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.BoltAction_Resume(Multicast)
	void BoltAction_Resume(Multicast)();                                                                                     // [0x2407bf0] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SprintPenalty
	void SprintPenalty();                                                                                                    // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SaveSnapshot
	void SaveSnapshot();                                                                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.KnockedDown
	void KnockedDown(APawn* Killer);                                                                                         // [0x2407bf0] Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.KnockedDownMulticast
	void KnockedDownMulticast(double HitAngle, bool CancelKnockDown, bool Ressurected);                                      // [0x2407bf0] Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.InitWeaponPlaceholder
	void InitWeaponPlaceholder(bool Primary, FFItemInfo& FItemInfo, TEnumAsByte<PlayerSlots> Slot);                          // [0x2407bf0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.FlashBang
	void FlashBang(bool ViewCameraOnFlash, double Distance);                                                                 // [0x2407bf0] Net|NetClient|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.CatchUpPlayerClient
	void CatchUpPlayerClient(ASurvivalPlayer_C* Target);                                                                     // [0x2407bf0] Net|NetClient|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.CallFallDamage
	void CallFallDamage(double Damage);                                                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.DelaySoundDamage
	void DelaySoundDamage();                                                                                                 // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.GrenadeAdd
	void GrenadeAdd(FString WeaponName);                                                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.grenadedrop
	void grenadedrop(FString WeaponName);                                                                                    // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.DestroyFakeGrenade(Multicast)
	void DestroyFakeGrenade(Multicast)(bool HasGrenade, bool OnlyDestroy);                                                   // [0x2407bf0] Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.DestroyFakeGrenadeServer
	void DestroyFakeGrenadeServer(bool HasGrenade, bool OnlyDestroy);                                                        // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnDeathTimerEnd
	void OnDeathTimerEnd(TEnumAsByte<WE_NewDeathScreenState> RessurectPlace);                                                // [0x2407bf0] Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ExecutePlayerOnClient
	void ExecutePlayerOnClient(ASurvivalPlayer_C* OtherPlayer);                                                              // [0x2407bf0] Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnUpdateDeathScreenState
	void OnUpdateDeathScreenState(TEnumAsByte<WE_NewDeathScreenState> NewScreenState);                                       // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnKnockdownStart_Event
	void OnKnockdownStart_Event();                                                                                           // [0x2407bf0] Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.VisInClient
	void VisInClient(bool NewVisibility);                                                                                    // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.StartFlashFade
	void StartFlashFade();                                                                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.Server_DisableCloseDoor
	void Server_DisableCloseDoor(ALootPoint_C* LootPoint);                                                                   // [0x2407bf0] Net|NetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.CheckBlendshapesDelay
	void CheckBlendshapesDelay(float Duration);                                                                              // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ChangeHunger_PP_Parameters
	void ChangeHunger_PP_Parameters(double Food Desaturation, double Water blur, double Water blur radius, double Water density); // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.StopShopCameraShake
	void StopShopCameraShake();                                                                                              // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ShopCameraShake
	void ShopCameraShake();                                                                                                  // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SpawnDeadBodyV2
	void SpawnDeadBodyV2();                                                                                                  // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ServResetPosition
	void ServResetPosition();                                                                                                // [0x2407bf0] Net|NetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.MultiResetPosition
	void MultiResetPosition();                                                                                               // [0x2407bf0] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.MultiTeleport
	void MultiTeleport();                                                                                                    // [0x2407bf0] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.FireSound_Server
	void FireSound_Server(bool fire);                                                                                        // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.FireSound_Multicast
	void FireSound_Multicast(bool fire);                                                                                     // [0x2407bf0] Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.MoveType_Multi
	void MoveType_Multi(TEnumAsByte<MovementType> MoveType);                                                                 // [0x2407bf0] Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.MoveType_Serv
	void MoveType_Serv(TEnumAsByte<MovementType> MoveType);                                                                  // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.LoadingScreen
	void LoadingScreen();                                                                                                    // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.DestroyWidget
	void DestroyWidget();                                                                                                    // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.NotifyItemUsing
	void NotifyItemUsing();                                                                                                  // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ToggleWeaponClip
	void ToggleWeaponClip(bool On?);                                                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SaveMeshes
	void SaveMeshes();                                                                                                       // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.UpdateSaveCharactersServer
	void UpdateSaveCharactersServer(FS_SaveStructure GI Character Save Ref);                                                 // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.UpdateSaveCharactersMulticast
	void UpdateSaveCharactersMulticast(FS_SaveStructure GI Character Save Ref);                                              // [0x2407bf0] Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.GetSaveCharactersServer
	void GetSaveCharactersServer(ASurvivalPlayer_C* Character);                                                              // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SetSaveCharacterOnOwningClient
	void SetSaveCharacterOnOwningClient(ASurvivalPlayer_C* Character, FS_SaveStructure GI Character Save Ref);               // [0x2407bf0] Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.CallServerEvent
	void CallServerEvent(ASurvivalPlayer_C* Character);                                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SetIsInHouse
	void SetIsInHouse(bool IsInHouseBool);                                                                                   // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.Serv_SetFemale
	void Serv_SetFemale();                                                                                                   // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.StartRespawn
	void StartRespawn();                                                                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.InfoAboutDamageOwning
	void InfoAboutDamageOwning(double RealDamage, bool isHeadshot, bool IsTargetDead);                                       // [0x2407bf0] Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.EquipCompasServer
	void EquipCompasServer(bool Equip);                                                                                      // [0x2407bf0] Net|NetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SpawnCompasServer
	void SpawnCompasServer();                                                                                                // [0x2407bf0] Net|NetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SpawnCompasMulticast
	void SpawnCompasMulticast();                                                                                             // [0x2407bf0] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.DestroyCompasMulticast
	void DestroyCompasMulticast();                                                                                           // [0x2407bf0] Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.BndEvt__SurvivalPlayer_CompasRef_K2Node_ComponentBoundEvent_0_ActorOnInputTouchEndSignature__DelegateSignature
	void BndEvt__SurvivalPlayer_CompasRef_K2Node_ComponentBoundEvent_0_ActorOnInputTouchEndSignature__DelegateSignature(TEnumAsByte<ETouchIndex> FingerIndex, AActor* TouchedActor); // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.HideCompas
	void HideCompas();                                                                                                       // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SetCameraCompas
	void SetCameraCompas();                                                                                                  // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.BackToStandin
	void BackToStandin();                                                                                                    // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.HideWeapons
	void HideWeapons(bool Show);                                                                                             // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.RemoveFPCompas
	void RemoveFPCompas();                                                                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.HidePlayerWithDelay
	void HidePlayerWithDelay(bool GPS?);                                                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.BackToTppFromCompas
	void BackToTppFromCompas();                                                                                              // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ExitCompasDied
	void ExitCompasDied();                                                                                                   // [0x2407bf0] Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.PerexodCompas
	void PerexodCompas();                                                                                                    // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.LootDelayBlockTimerEvent
	void LootDelayBlockTimerEvent(double Time);                                                                              // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.LootDelayBlockTimerClearEvent
	void LootDelayBlockTimerClearEvent();                                                                                    // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.LootDelayBlockEvent
	void LootDelayBlockEvent();                                                                                              // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.EquipCompas
	void EquipCompas(bool Equip);                                                                                            // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.Serv_InSauna
	void Serv_InSauna(bool InSauna);                                                                                         // [0x2407bf0] Net|NetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.MC_InSauna
	void MC_InSauna(bool InSauna);                                                                                           // [0x2407bf0] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnSurrender
	void OnSurrender(bool Animed, bool DieInCarExplosion);                                                                   // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnInteract
	void OnInteract(APawn* Player);                                                                                          // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SurrMessMulti
	void SurrMessMulti();                                                                                                    // [0x2407bf0] Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnInteract3
	void OnInteract3(APawn* Player);                                                                                         // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnInteract2
	void OnInteract2(APawn* Player);                                                                                         // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnBeginInteract
	void OnBeginInteract(APawn* Player);                                                                                     // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnSeen
	void OnSeen(APawn* Player);                                                                                              // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnLostFocus
	void OnLostFocus(APawn* Player);                                                                                         // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.Revive
	void Revive();                                                                                                           // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ReviveLocal
	void ReviveLocal(ASurvivalPlayer_C* Ref);                                                                                // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.CrawlingState
	void CrawlingState();                                                                                                    // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.CrawlingStateBegan
	void CrawlingStateBegan();                                                                                               // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SurrenderLocal
	void SurrenderLocal(bool Burnt, bool DieInCarExplosion);                                                                 // [0x2407bf0] Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.WP_UnequipWeapon
	void WP_UnequipWeapon();                                                                                                 // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ClearStates
	void ClearStates();                                                                                                      // [0x2407bf0] Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.EquipGpsServer
	void EquipGpsServer(bool Equip);                                                                                         // [0x2407bf0] Net|NetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.EquipGPS
	void EquipGPS(bool Equip);                                                                                               // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.DestroyGPSMulticast
	void DestroyGPSMulticast();                                                                                              // [0x2407bf0] Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SpawnGPSServer
	void SpawnGPSServer();                                                                                                   // [0x2407bf0] Net|NetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SpawnGPSMulticast
	void SpawnGPSMulticast();                                                                                                // [0x2407bf0] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.PerexodGPS
	void PerexodGPS();                                                                                                       // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SetCameraGPS
	void SetCameraGPS();                                                                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.BackToStandinGPS
	void BackToStandinGPS();                                                                                                 // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.RemoveFPGPS
	void RemoveFPGPS();                                                                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.BackToTppFromGPS
	void BackToTppFromGPS();                                                                                                 // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ExitGPSDied
	void ExitGPSDied();                                                                                                      // [0x2407bf0] Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.TurnModulatorUp
	void TurnModulatorUp();                                                                                                  // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.TurnModulatorDown
	void TurnModulatorDown();                                                                                                // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.DistanceTraveled
	void DistanceTraveled();                                                                                                 // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.TDistanceCalculate
	void TDistanceCalculate();                                                                                               // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.Unarmgps
	void Unarmgps();                                                                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.HitPercentUpdate
	void HitPercentUpdate(bool Hit reg);                                                                                     // [0x2407bf0] Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.DamageStatClient
	void DamageStatClient(double Dmg);                                                                                       // [0x2407bf0] Net|NetClient|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.StepW
	void StepW();                                                                                                            // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.steps
	void steps();                                                                                                            // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.StepA
	void StepA();                                                                                                            // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.StepD
	void StepD();                                                                                                            // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.WInputActionRespawn
	void WInputActionRespawn();                                                                                              // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.PlaySoundServer
	void PlaySoundServer(UFMODEvent* FMod, USceneComponent* Attach to, ASurvivalPlayer_V2_C* Causer);                        // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.PlaySoundMulti
	void PlaySoundMulti(UFMODEvent* FMod, USceneComponent* Attach to, ASurvivalPlayer_V2_C* Actor, ASurvivalPlayer_V2_C* Causer); // [0x2407bf0] Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.BuyCar_Serv
	void BuyCar_Serv(FString CarName);                                                                                       // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.BuyCar_Owning
	void BuyCar_Owning(FString CarName);                                                                                     // [0x2407bf0] Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SellCar_Serv
	void SellCar_Serv(FString CarName);                                                                                      // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SellCar_Owning
	void SellCar_Owning(FString CarName);                                                                                    // [0x2407bf0] Net|NetClient|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.BuyHouseServ
	void BuyHouseServ(FString HouseName);                                                                                    // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.BuyHouseOwning
	void BuyHouseOwning(FString HouseName);                                                                                  // [0x2407bf0] Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SellHouseServ
	void SellHouseServ(FString HouseName);                                                                                   // [0x2407bf0] Net|NetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SellHouseOwning
	void SellHouseOwning(FString HouseName);                                                                                 // [0x2407bf0] Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ServerCallInviteToHome
	void ServerCallInviteToHome(APS_TDB_C* OtherPlayer);                                                                     // [0x2407bf0] Net|NetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnInviteHome
	void OnInviteHome(UObject* Inviter);                                                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.AddInviteHomeWidget
	void AddInviteHomeWidget(int32_t InviteIndex, FString PlayerNameOfferer, ASurvPC_C* Target);                             // [0x2407bf0] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.BuyHome_Serv
	void BuyHome_Serv(FString HomeName);                                                                                     // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.BuyHomeOwning
	void BuyHomeOwning(FString HomeName);                                                                                    // [0x2407bf0] Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SellHome_Serv
	void SellHome_Serv(FString HomeName);                                                                                    // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SellHomeOwning
	void SellHomeOwning(FString HomeName);                                                                                   // [0x2407bf0] Net|NetClient|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.AddRPoints_Serv
	void AddRPoints_Serv(int32_t RPoints);                                                                                   // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ServerRefillGasVehicle
	void ServerRefillGasVehicle(UObject* InteractiveActor);                                                                  // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ServerRepairVehicle
	void ServerRepairVehicle(UObject* InteractiveActor);                                                                     // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.KilledByGrenadeDamageNotificationClient
	void KilledByGrenadeDamageNotificationClient(UClass* ExplosionClass, APawn* DamageInstigator);                           // [0x2407bf0] Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.NegativeEffectClient
	void NegativeEffectClient(UNegativeEffectType NegativeEffects);                                                          // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ChangeBinocularsEquipState
	void ChangeBinocularsEquipState();                                                                                       // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.CarStealCount
	void CarStealCount();                                                                                                    // [0x2407bf0] Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.CarRepair
	void CarRepair();                                                                                                        // [0x2407bf0] Net|NetClient|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.RefuelC
	void RefuelC();                                                                                                          // [0x2407bf0] Net|NetClient|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ChangeBinocularsEquipStateServer
	void ChangeBinocularsEquipStateServer();                                                                                 // [0x2407bf0] Net|NetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnRPZoneInteracted_Multi
	void OnRPZoneInteracted_Multi(FF_RPZoneInfo RPZoneStruct);                                                               // [0x2407bf0] Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ReloadC
	void ReloadC(TEnumAsByte<E_TrainStatType> StatTrain);                                                                    // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.StatPrint
	void StatPrint();                                                                                                        // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.BurntSurrender
	void BurntSurrender();                                                                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.BurntEnd
	void BurntEnd();                                                                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SetDieWithAnim
	void SetDieWithAnim(bool Burnt?);                                                                                        // [0x2407bf0] Net|NetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.BaseEntered
	void BaseEntered(bool Enter);                                                                                            // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SpawnQuestIcons
	void SpawnQuestIcons(bool ForceUpdate);                                                                                  // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.RemoveQuestIcons
	void RemoveQuestIcons(bool ForceUpdate);                                                                                 // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ServerDealDamageToZombie
	void ServerDealDamageToZombie(TEnumAsByte<BPE_Weapon_Type> WeaponTyp, AZombie_C*& Zombie, double BaseDamag, FVector HitFromDirection, FHitResult& HitInfo); // [0x2407bf0] Net|NetReliableNetServer|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.CustomEvent
	void CustomEvent(AActor* Hightlight);                                                                                    // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.CustomEvent
	void CustomEvent(AActor* Hightlight);                                                                                    // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.CustomEvent
	void CustomEvent(AActor* Hightlight);                                                                                    // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.PayLoan_Serv
	void PayLoan_Serv(int32_t Money);                                                                                        // [0x2407bf0] Net|NetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.GymTrainTravel
	void GymTrainTravel();                                                                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SetIsInElevator
	void SetIsInElevator(bool bIsInElevator);                                                                                // [0x2407bf0] Net|NetClient|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.DestroyInteractableItem
	void DestroyInteractableItem(UObject* ItemRef);                                                                          // [0x2407bf0] Net|NetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.Serv_TeleportAt
	void Serv_TeleportAt(FVector NewLocation);                                                                               // [0x2407bf0] Net|NetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.MC_TeleportAt
	void MC_TeleportAt(FVector NewLocation);                                                                                 // [0x2407bf0] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.DestroyGPSWidget
	void DestroyGPSWidget(UWDG_Map_C* Widget);                                                                               // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ZoomGps
	void ZoomGps(bool In);                                                                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.Recovering
	void Recovering();                                                                                                       // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.DisableInp
	void DisableInp();                                                                                                       // [0x2407bf0] Net|NetClient|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.BuyPlayerStatus_Serv
	void BuyPlayerStatus_Serv(FString Aliases);                                                                              // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.BuyPlayerStatus_Owning
	void BuyPlayerStatus_Owning(FString Aliases);                                                                            // [0x2407bf0] Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.RemovePlayerStatus_Serv
	void RemovePlayerStatus_Serv(FString Aliases);                                                                           // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.RemovePlayerStatus_Owning
	void RemovePlayerStatus_Owning(FString Aliases);                                                                         // [0x2407bf0] Net|NetClient|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.CompasEvent
	void CompasEvent();                                                                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.GPSEvent
	void GPSEvent();                                                                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.DeviceSwitcher
	void DeviceSwitcher(FString Device);                                                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SurrenderShowEnd
	void SurrenderShowEnd();                                                                                                 // [0x2407bf0] Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.AddRPoints
	void AddRPoints(int32_t RPoints);                                                                                        // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.LocalHitEvent
	void LocalHitEvent(TArray<FBPS_DamageInfo>& DmgInfo);                                                                    // [0x2407bf0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.LoadCarOwning
	void LoadCarOwning(TArray<FString>& CarName);                                                                            // [0x2407bf0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnClosedSlidesTutorial
	void OnClosedSlidesTutorial();                                                                                           // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.WipeSpeed
	void WipeSpeed(bool ResetDoOnce);                                                                                        // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SetInventoryInitedLocal
	void SetInventoryInitedLocal();                                                                                          // [0x2407bf0] Net|NetClient|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.CollisionEnable
	void CollisionEnable();                                                                                                  // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.AddDesiredItem
	void AddDesiredItem(int32_t ItemId, int32_t Count);                                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.DoOnceTimer
	void DoOnceTimer(double Time);                                                                                           // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.InvalidateDoOnce
	void InvalidateDoOnce();                                                                                                 // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ServSetDamageable
	void ServSetDamageable(bool On);                                                                                         // [0x2407bf0] Net|NetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.EasyTrain
	void EasyTrain();                                                                                                        // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.MissingUpdate
	void MissingUpdate();                                                                                                    // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ReplicateCarInfoToServ
	void ReplicateCarInfoToServ(TMap<FString, TEnumAsByte> CarSaveMap);                                                      // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.CarToAvailableUpdate
	void CarToAvailableUpdate();                                                                                             // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.CarMapPrint
	void CarMapPrint();                                                                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.UnarmForce
	void UnarmForce();                                                                                                       // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.IsBeginnerUpdate
	void IsBeginnerUpdate();                                                                                                 // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.PlayerLeft
	void PlayerLeft(UObject* Object);                                                                                        // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.LoadCarServer
	void LoadCarServer(TArray<FString>& Array);                                                                              // [0x2407bf0] Net|NetReliableNetServer|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnCharLoaded_Event
	void OnCharLoaded_Event();                                                                                               // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SitOnBarLocal
	void SitOnBarLocal(AActor* Hightlight, bool Sit);                                                                        // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SitOnChairLocal
	void SitOnChairLocal(AActor* Hightlight, bool Sit);                                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.TrainCDTip
	void TrainCDTip();                                                                                                       // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.TrainEndCD
	void TrainEndCD();                                                                                                       // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SetShopNow
	void SetShopNow(bool ShopNow);                                                                                           // [0x2407bf0] Net|NetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.CrouchCustom
	void CrouchCustom();                                                                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.NomoneyGym
	void NomoneyGym();                                                                                                       // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SelectWeaponSlot
	void SelectWeaponSlot(int32_t Slot);                                                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.GymMulti
	void GymMulti(bool Sit, ASurvivalPlayer_C* Surv, ABP_TrainingApp_C* Train);                                              // [0x2407bf0] Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.Multi_SyncInclineAxis
	void Multi_SyncInclineAxis(float InclineAxisValue);                                                                      // [0x2407bf0] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.InclineEvent
	void InclineEvent(double Axis);                                                                                          // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.EventFamiliarity_Serv
	void EventFamiliarity_Serv(FString& FamiliarityNPCName);                                                                 // [0x2407bf0] Net|NetServer|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.FinishTraining
	void FinishTraining(TEnumAsByte<E_Training> TrainingType);                                                               // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.InventoryOpenAnimEventMulti
	void InventoryOpenAnimEventMulti(bool Open?);                                                                            // [0x2407bf0] Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.InventoryOpenAnimEventServer
	void InventoryOpenAnimEventServer(bool Open?);                                                                           // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.InventoryOpenAnimEvent
	void InventoryOpenAnimEvent(bool Open?);                                                                                 // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.BackpackVisibilitySwitcher
	void BackpackVisibilitySwitcher(bool Visible);                                                                           // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SpawnMenuChair
	void SpawnMenuChair(AActor* Actor);                                                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.DestroyAllBarBindMulti
	void DestroyAllBarBindMulti();                                                                                           // [0x2407bf0] Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.DestroyAllBarBindServer
	void DestroyAllBarBindServer();                                                                                          // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.DestroyAllBarBind
	void DestroyAllBarBind();                                                                                                // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.PlayAnimMenuMulti
	void PlayAnimMenuMulti();                                                                                                // [0x2407bf0] Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.PlayAnimMenuServer
	void PlayAnimMenuServer();                                                                                               // [0x2407bf0] Net|NetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.DestroyAllBarTab
	void DestroyAllBarTab();                                                                                                 // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SpawnMenuMulticast
	void SpawnMenuMulticast();                                                                                               // [0x2407bf0] Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SpawnMenu
	void SpawnMenu(AActor* Table);                                                                                           // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SpawnBottleMulticast
	void SpawnBottleMulticast(UStaticMesh* Bottle);                                                                          // [0x2407bf0] Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SpawnBottleServer
	void SpawnBottleServer(UStaticMesh* Bottle);                                                                             // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ExitChair
	void ExitChair(bool Sit, AActor* Hightlight);                                                                            // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ExitChairMulti
	void ExitChairMulti(bool Sit, AActor* Hightlight);                                                                       // [0x2407bf0] Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ExitChairServer
	void ExitChairServer(bool Sit, AActor* Hightlight);                                                                      // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.EatingFoodV
	void EatingFoodV(FF_MenuBarShopItem SelectedSlot, AActor* ActiveTable);                                                  // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.EatingFoodMultiV
	void EatingFoodMultiV(FF_MenuBarShopItem SelectedSlot, AActor* ActiveTable);                                             // [0x2407bf0] Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.EatingFoodServerV
	void EatingFoodServerV(FF_MenuBarShopItem SelectedSlot, AActor* ActiveTable);                                            // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.StartEatingV
	void StartEatingV(UWBP_MenuBarShopSlot_C* CurrentSelectedSlot);                                                          // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OpenMenuV
	void OpenMenuV(AActor* Hightlight);                                                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.UseChairServer
	void UseChairServer(AActor* Hightlight);                                                                                 // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.UseChairMulti
	void UseChairMulti(AActor* Hightlight);                                                                                  // [0x2407bf0] Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.UseChair
	void UseChair(AActor* Hightlight);                                                                                       // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.DestroyForkKnifeMulti
	void DestroyForkKnifeMulti();                                                                                            // [0x2407bf0] Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.DestroyForkKnifeServer
	void DestroyForkKnifeServer();                                                                                           // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SpawnForkKnifeMulti
	void SpawnForkKnifeMulti();                                                                                              // [0x2407bf0] Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SpawnForkKnifeServer
	void SpawnForkKnifeServer();                                                                                             // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.EatingFood
	void EatingFood(FF_MenuBarShopItem SelectedSlot, AActor* ActiveTable);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.EatingFoodMulti
	void EatingFoodMulti(FF_MenuBarShopItem SelectedSlot, AActor* ActiveTable);                                              // [0x2407bf0] Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.EatingFoodServer
	void EatingFoodServer(FF_MenuBarShopItem SelectedSlot, AActor* ActiveTable);                                             // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.StartEating
	void StartEating(UWBP_MenuBarShopSlot_C* CurrentSelectedSlot);                                                           // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OpenMenu
	void OpenMenu(AActor* Hightlight);                                                                                       // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.UseTable
	void UseTable(AActor* Hightlight);                                                                                       // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.UseTableMulti
	void UseTableMulti(AActor* Hightlight);                                                                                  // [0x2407bf0] Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ExitSofa
	void ExitSofa();                                                                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ExitSofaMulti
	void ExitSofaMulti();                                                                                                    // [0x2407bf0] Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ExitSofaServer
	void ExitSofaServer();                                                                                                   // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.UseBarStojkaServer
	void UseBarStojkaServer(AActor* Hightlight);                                                                             // [0x2407bf0] Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SitOnChairServer
	void SitOnChairServer(AActor* Hightlight, bool Sit);                                                                     // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ServerContainerBoxClosed
	void ServerContainerBoxClosed(AMPMainContainerBox_C* FocusedContainer);                                                  // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.UseTableServer
	void UseTableServer(AActor* Hightlight);                                                                                 // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.StopInteract
	void StopInteract();                                                                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.StartInteract
	void StartInteract();                                                                                                    // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.BusyTraining
	void BusyTraining();                                                                                                     // [0x2407bf0] Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ExitGym
	void ExitGym();                                                                                                          // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.UsingTraining
	void UsingTraining(ABP_TrainingApp_C* TrainApp);                                                                         // [0x2407bf0] Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SitOnGymServer
	void SitOnGymServer(AActor* Hightlight, bool Sit);                                                                       // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SitOnBarServer
	void SitOnBarServer(AActor* Hightlight, bool Sit);                                                                       // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ServerOnBeginInteract
	void ServerOnBeginInteract(AActor* InteractedActor);                                                                     // [0x2407bf0] Net|NetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.CrouchingWeaponOffset
	void CrouchingWeaponOffset(bool Crouch?);                                                                                // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ChangeAmmoClass
	void ChangeAmmoClass();                                                                                                  // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.Serv_SyncInclineAxis
	void Serv_SyncInclineAxis(float InclineAxisValue);                                                                       // [0x2407bf0] Net|NetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.InvSoundMulti
	void InvSoundMulti(bool Open?, USkeletalMeshComponent* AttachComponent);                                                 // [0x2407bf0] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.InvSoundServer
	void InvSoundServer(bool Open?, USkeletalMeshComponent* AttachComponent);                                                // [0x2407bf0] Net|NetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.CrouchDelay
	void CrouchDelay();                                                                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.RevivingStopMulti
	void RevivingStopMulti(ASurvivalPlayer_C* Reviver);                                                                      // [0x2407bf0] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.RevivingStop
	void RevivingStop(ASurvivalPlayer_C* Reviver);                                                                           // [0x2407bf0] Net|NetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.CrawlingUpdateClient
	void CrawlingUpdateClient(bool bRevive, APS_TDB_C* RevivingPlayerPS);                                                    // [0x2407bf0] Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.StopSurrender
	void StopSurrender();                                                                                                    // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.CrawlingTagUpdMulti
	void CrawlingTagUpdMulti(bool Revive?, ASurvivalPlayer_C* CrawlingActor, ASurvivalPlayer_C* Reviver);                    // [0x2407bf0] Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.CrawlingTagUpdate
	void CrawlingTagUpdate(bool Revive?, AActor* CrawlingActor, ASurvivalPlayer_C* SelfRef);                                 // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.StartStand
	void StartStand();                                                                                                       // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.StandPlayerEvent
	void StandPlayerEvent();                                                                                                 // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.CancelFire
	void CancelFire();                                                                                                       // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.StopSprint
	void StopSprint();                                                                                                       // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.Unarm_unarm
	void Unarm_unarm(TEnumAsByte<PlayerSlots> Slot, bool WithoutAnimation);                                                  // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.Validate3DCharacter
	void Validate3DCharacter();                                                                                              // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.Spawn3Character
	void Spawn3Character();                                                                                                  // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.GrenadeInput
	void GrenadeInput(bool Pressed);                                                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.Self-healingPressed
	void Self-healingPressed();                                                                                              // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.Self-healingReleased
	void Self-healingReleased();                                                                                             // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.StopCrouchAimTimelines
	void StopCrouchAimTimelines();                                                                                           // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.Apply_TakeDamage_Camera_Shake
	void Apply_TakeDamage_Camera_Shake(FVector Vector, bool Zombie?);                                                        // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.TimeStartBloodEffect
	void TimeStartBloodEffect();                                                                                             // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.StopCriticalDamageEffect
	void StopCriticalDamageEffect();                                                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.CriticalDamageEffect
	void CriticalDamageEffect(float Length, UCurveFloat* NewFloatCurve, double BloodPP midle value);                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.CameraDefault
	void CameraDefault();                                                                                                    // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.Reset Tips Timer
	void Reset Tips Timer();                                                                                                 // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.Reset Timer For Tip
	void Reset Timer For Tip();                                                                                              // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.CloseInventory
	void CloseInventory();                                                                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OpenInventoryFromCar
	void OpenInventoryFromCar();                                                                                             // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ResetInteract
	void ResetInteract();                                                                                                    // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SetCraftState
	void SetCraftState(TEnumAsByte<CraftState> State);                                                                       // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnDirectionChange
	void OnDirectionChange(int32_t Direction);                                                                               // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.StopAim
	void StopAim();                                                                                                          // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OpenInventoryManually
	void OpenInventoryManually();                                                                                            // [0x2407bf0] Net|NetClient|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OpenInventoryRemotely
	void OpenInventoryRemotely(ASurvivalPlayer_C* SurvivalPlayer);                                                           // [0x2407bf0] Net|NetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.CancelInteractionByMouse
	void CancelInteractionByMouse();                                                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SetActiveWeaponSlot
	void SetActiveWeaponSlot(TEnumAsByte<PlayerSlots> Slot);                                                                 // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.MULT_JumpSync
	void MULT_JumpSync();                                                                                                    // [0x2407bf0] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SERV_JumpSync
	void SERV_JumpSync();                                                                                                    // [0x2407bf0] Net|NetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.PlayerCanisterAction
	void PlayerCanisterAction(bool Attach, ABP_Canister_C* Canister);                                                        // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OpenTrailerInventory
	void OpenTrailerInventory();                                                                                             // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.UnarmPlayerEvent
	void UnarmPlayerEvent(bool WithoutAnimation);                                                                            // [0x2407bf0] Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.GameFocusCam
	void GameFocusCam();                                                                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnTabsClosed
	void OnTabsClosed();                                                                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ChangePants
	void ChangePants();                                                                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ChangeJacket
	void ChangeJacket();                                                                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.Change Helmet
	void Change Helmet();                                                                                                    // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.EquipSomething
	void EquipSomething(UJSIContainer_C* Target, FName RowName);                                                             // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.WatchToGasoline
	void WatchToGasoline();                                                                                                  // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.(MULC)SerRefill
	void (MULC)SerRefill(bool refill);                                                                                       // [0x2407bf0] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.(Serv)SetRefill
	void (Serv)SetRefill(bool refill);                                                                                       // [0x2407bf0] Net|NetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.CallFuelIncreaseEvent
	void CallFuelIncreaseEvent();                                                                                            // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.MultiCallDetachCanister
	void MultiCallDetachCanister();                                                                                          // [0x2407bf0] Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ServerCallDetachCanister
	void ServerCallDetachCanister();                                                                                         // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.DetachCanister
	void DetachCanister();                                                                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.MultiCallAttachCanister
	void MultiCallAttachCanister(ABP_Canister_C* Canister);                                                                  // [0x2407bf0] Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ServerCallAttachCanister
	void ServerCallAttachCanister(ABP_Canister_C* Canister);                                                                 // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.AttachCanister
	void AttachCanister(ABP_Canister_C* Canister);                                                                           // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.CallDurabilityIncreaseEvent
	void CallDurabilityIncreaseEvent();                                                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.CallInteractEvent
	void CallInteractEvent();                                                                                                // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.BndEvt__BPC_PlayerStatsComponent_K2Node_ComponentBoundEvent_15_StaminaEnd__DelegateSignature
	void BndEvt__BPC_PlayerStatsComponent_K2Node_ComponentBoundEvent_15_StaminaEnd__DelegateSignature();                     // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ShootNoiseForAI
	void ShootNoiseForAI();                                                                                                  // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent
	void InpAxisEvt_MoveRight_K2Node_InputAxisEvent(float AxisValue);                                                        // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent
	void InpAxisEvt_MoveForward_K2Node_InputAxisEvent(float AxisValue);                                                      // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ReloadEnded
	void ReloadEnded();                                                                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent
	void InpAxisEvt_LookUp_K2Node_InputAxisEvent(float AxisValue);                                                           // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.InpAxisEvt_Turn_K2Node_InputAxisEvent
	void InpAxisEvt_Turn_K2Node_InputAxisEvent(float AxisValue);                                                             // [0x2407bf0] BlueprintEvent       
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.PrintContainer
	void PrintContainer();                                                                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.Multi_SetCarAnim
	void Multi_SetCarAnim(bool InCar, bool Driver, TEnumAsByte<CarTipe> CarTipe, int32_t SitIndex);                          // [0x2407bf0] Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.Serv_SetCarAnim
	void Serv_SetCarAnim(bool InCar, bool Driver, TEnumAsByte<CarTipe> CarTipe, int32_t SitIndex);                           // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ChangeBackpackBindEvent
	void ChangeBackpackBindEvent(UJSIContainer_C* FromContainer, UJSIContainer_C* ToContainer, UJSI_Slot_C* slotRef, bool Equipped?, bool ToPockets?); // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OpenKeyDoorMulti
	void OpenKeyDoorMulti(bool bHasKey, ABP_Door_C* KeyDoor);                                                                // [0x2407bf0] Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.AddItemToPlayer_Client
	void AddItemToPlayer_Client(FFItemInfo ItemInfo);                                                                        // [0x2407bf0] Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.Server_deleteFromContainerAddToPlayer
	void Server_deleteFromContainerAddToPlayer(int32_t ItemUID, AMPMainContainerBox_C* MpContainerRef, bool IsContainer?, bool Shop, int32_t ItemsLeft); // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.StartTimerEating
	void StartTimerEating();                                                                                                 // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ShowItemsList
	void ShowItemsList();                                                                                                    // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.FromProtectiveCaseToInventory
	void FromProtectiveCaseToInventory(UJSIContainer_C* Container, UJSI_Slot_C* slotRef, FKey Button);                       // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OpenKeyDoorServer
	void OpenKeyDoorServer(bool bHasKey, ABP_Door_C* KeyDoor);                                                               // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OpenKeyDoorLocal
	void OpenKeyDoorLocal(FString KeyID, ABP_Door_C* KeyDoor);                                                               // [0x2407bf0] Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SplitOnGround
	void SplitOnGround(UJSI_Slot_C* SourceSlotRef, UJSI_Slot_C* NewSplitSlotRef, UJSIContainer_C* ContainerSource, UJSIContainer_C* ContainerReceiver, int32_t SplitAmount, int32_t AmountRemaining); // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SplitInContainer
	void SplitInContainer(UJSI_Slot_C* SourceSlotRef, UJSI_Slot_C* NewSplitSlotRef, UJSIContainer_C* ContainerSource, UJSIContainer_C* ContainerReceiver, int32_t SplitAmount, int32_t AmountRemaining); // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ItemsChangedInContainer
	void ItemsChangedInContainer(UJSIContainer_C* FromContainer, UJSIContainer_C* ToContainer, UJSI_Slot_C* SlotReceiver, UJSI_Slot_C* SlotDropped, bool SlotDroppedRemoved?); // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ServerItemUpdateInContainer
	void ServerItemUpdateInContainer(AMPMainContainerBox_C* Target, FContainerPickupsInfo ItemPInfo);                        // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ItemsOnGroundCombined
	void ItemsOnGroundCombined(UJSIContainer_C* FromContainer, UJSIContainer_C* ToContainer, UJSI_Slot_C* SlotReceiver, UJSI_Slot_C* SlotDropped, bool SlotDroppedRemoved?); // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.UpdateOnGroundItemInfo
	void UpdateOnGroundItemInfo(AA_Item_C* Target, FFItemInfo ItemInfo);                                                     // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.StopUseItemEvent
	void StopUseItemEvent();                                                                                                 // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.HideRoundProgressBar
	void HideRoundProgressBar();                                                                                             // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.FinishRoundProgressBar
	void FinishRoundProgressBar();                                                                                           // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.StopTimelineProgressBar
	void StopTimelineProgressBar();                                                                                          // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.TimelineProgressBar
	void TimelineProgressBar(UJSI_Slot_C* JSI_Slot);                                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.CustomEvent
	void CustomEvent(UJSIContainer_C* Container);                                                                            // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.StopBleedingMulti
	void StopBleedingMulti();                                                                                                // [0x2407bf0] Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.StopBleedingServ
	void StopBleedingServ();                                                                                                 // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.StopBleeding
	void StopBleeding();                                                                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.WeaponsToggle
	void WeaponsToggle(bool OnOrOff, bool WithoutAnimation);                                                                 // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.EatAnimResetMu
	void EatAnimResetMu();                                                                                                   // [0x2407bf0] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.EatAnimResetServ
	void EatAnimResetServ();                                                                                                 // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.DisarmPlayer
	void DisarmPlayer();                                                                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.InitWP_Multicast
	void InitWP_Multicast(bool Primary, FFItemInfo& FItemInfo, TEnumAsByte<PlayerSlots> Slot);                               // [0x2407bf0] Net|NetMulticast|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.InitWP_Server
	void InitWP_Server(bool Primary, FFItemInfo& FItemInfo, TEnumAsByte<PlayerSlots> Slot);                                  // [0x2407bf0] Net|NetReliableNetServer|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.LocalChangeBudget
	void LocalChangeBudget(int32_t Sum);                                                                                     // [0x2407bf0] Net|NetClient|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SwitchLootBoxEquipped_v2
	void SwitchLootBoxEquipped_v2(UJSI_Slot_C* ReceiverSlotRef, UJSIContainer_C* ReceiverContainerRef, UWBP_LootEntry_C* DroppedEntryRef); // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ContainerDropped
	void ContainerDropped(UJSIContainer_C* FromContainerRef, UJSI_Slot_C* FromSlotRef, UWBP_LootEntry_C* ToEntryRef, UJSI_Slot_C* ToSlotRef); // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SwitchGroundEquipped
	void SwitchGroundEquipped(UJSI_Slot_C* ItemReceiver, UJSI_Slot_C* ItemDropped, UJSIContainer_C* Item Receiver Container, UJSIContainer_C* Item Dropped Container); // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ServerItemsAddedToContainer
	void ServerItemsAddedToContainer(AMPMainContainerBox_C* Target, TArray<int32_t>& SlotIndex, TArray<FContainerPickupsInfo>& ItemPInfo); // [0x2407bf0] Net|NetReliableNetServer|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.TransferItems
	void TransferItems();                                                                                                    // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ShopContOnContUnhandled
	void ShopContOnContUnhandled(UJSIContainer_C* FromContainer, UJSIContainer_C* ToContainer, UJSI_Slot_C* DroppedSlotRef, UJSI_Slot_C* SlotReceiverRef, int32_t ToSlotIndex, bool Rotated?, bool RightMouseButton); // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ServSyncInvStash
	void ServSyncInvStash(AInventoryStash_C* InvStash, bool InvFetched, TArray<FDefaultItemInfo>& FetchedItems);             // [0x2407bf0] Net|NetReliableNetServer|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ClientBuildShopData
	void ClientBuildShopData(AMPMainContainerBox_C* Container, FMpContentRep Data);                                          // [0x2407bf0] Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ServerRequestShopContent
	void ServerRequestShopContent(AMPMainContainerBox_C* Container);                                                         // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.RequestShopContent
	void RequestShopContent();                                                                                               // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.TableDoubleClick
	void TableDoubleClick(UJSIContainer_C* Container, UJSI_Slot_C* slotRef, FKey Button);                                    // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ShopDoubleClick
	void ShopDoubleClick(UJSIContainer_C* Container, UJSI_Slot_C* slotRef, FKey Button);                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ShopRotChanged
	void ShopRotChanged(UJSIContainer_C* Container, UJSI_Slot_C* slotRef, int32_t NewIndex, bool Rotated);                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ShopContToCont
	void ShopContToCont(UJSIContainer_C* From, UJSIContainer_C* To, UJSI_Slot_C* FromSlotRef, UJSI_Slot_C* ToSlotRef, bool ToEmptySlot?, bool MovedAll?); // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.HandleShopJSIContEvents
	void HandleShopJSIContEvents();                                                                                          // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SellItems
	void SellItems(FContainerPickupsInfo Item);                                                                              // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.BuyItems
	void BuyItems(FContainerPickupsInfo Item, int32_t A);                                                                    // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ServChangeBudget
	void ServChangeBudget(int32_t Sum);                                                                                      // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.TableMouseBtnDown
	void TableMouseBtnDown(UJSIContainer_C* Container, UJSI_Slot_C* slotRef, FKey Button);                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ItemSlotChanged
	void ItemSlotChanged(UJSIContainer_C* Container, UJSI_Slot_C* slotRef, int32_t NewIndex, bool Rotated);                  // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.TableContToCont
	void TableContToCont(UJSIContainer_C* From, UJSIContainer_C* To, UJSI_Slot_C* FromSlotRef, UJSI_Slot_C* ToSlotRef, bool ToEmptySlot?, bool MovedAll?); // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.HandleTableJSIContEvents
	void HandleTableJSIContEvents();                                                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.WeaponsUnactive
	void WeaponsUnactive();                                                                                                  // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.FillPockets
	void FillPockets(bool AddItems, bool AddContainers);                                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.AddingContainersToPockets
	void AddingContainersToPockets();                                                                                        // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.AddingItemsToPockets
	void AddingItemsToPockets();                                                                                             // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.RightMouseClickEquipped
	void RightMouseClickEquipped(UJSIContainer_C* Container, UJSI_Slot_C* slotRef, FKey Button);                             // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.RightClickOnGound
	void RightClickOnGound(UJSIContainer_C* Container, UJSI_Slot_C* slotRef, FKey Button);                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.AddToGroundItems
	void AddToGroundItems(AA_Item_C*& NewItem);                                                                              // [0x2407bf0] Net|NetMulticast|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.MouseClickInPlayerInventory
	void MouseClickInPlayerInventory(UJSIContainer_C* Container, UJSI_Slot_C* slotRef, FKey Button);                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.RightButtonMouseDown
	void RightButtonMouseDown(UJSIContainer_C* Container, UJSI_Slot_C* slotRef, FKey Button);                                // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ChangeContainerMother
	void ChangeContainerMother(int32_t ContainerMotherID, int32_t UniqueId, int32_t SlotIndex);                              // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.AddDroppedItemToGround
	void AddDroppedItemToGround(FFItemInfo& FItemInfo);                                                                      // [0x2407bf0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.DoubleClickItemOnGround
	void DoubleClickItemOnGround(UJSIContainer_C* Container, UJSI_Slot_C* slotRef, FKey Button);                             // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.DropItemOnGround
	void DropItemOnGround(UJSIContainer_C* From, UJSIContainer_C* To, UJSI_Slot_C* FromSlotRef, UJSI_Slot_C* ToSlotRef, bool ToEmptySlot?, bool MovedAll?); // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.HandleJSIEventsOnGround
	void HandleJSIEventsOnGround();                                                                                          // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnInventoryContentChanged
	void OnInventoryContentChanged(bool WithoutDelay);                                                                       // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SwitchInventoryEquipped
	void SwitchInventoryEquipped(UJSI_Slot_C* ItemReceiver, UJSI_Slot_C* Item Dropped, UJSIContainer_C* ItemReceiverContainer, UJSIContainer_C* ItemDroppedContainer); // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SwitchLootBoxEquipped
	void SwitchLootBoxEquipped(UJSI_Slot_C* ItemReceiver, UJSI_Slot_C* ItemDropped, UJSIContainer_C* ItemReceiverContainer, UJSIContainer_C* ItemDroppedConatiner); // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ServerDeleteAndAddItem
	void ServerDeleteAndAddItem(bool DeleteIsContainer, int32_t DeleteItemUID, AMPMainContainerBox_C* DeleteMPContainerRef, FContainerPickupsInfo AddItemPInfo, int32_t AddToSlotIndex, TArray<FContainerPickupsInfo>& AddContainerData, TArray<FContainerPickupsInfo>& AddContainerItems, bool AddIsContainer); // [0x2407bf0] Net|NetServer|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SwitchEquippedItems
	void SwitchEquippedItems(UJSI_Slot_C* ItemReceiver, UJSI_Slot_C* ItemDropped, UJSIContainer_C* ItemReceiverContainer, UJSIContainer_C* ItemDroppedContainer); // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.HandleLootBoxInventoryItems
	void HandleLootBoxInventoryItems(UJSIContainer_C* FromContainer, UJSIContainer_C* ToContainer, UJSI_Slot_C* DroppedSlotRef, UJSI_Slot_C* SlotReceiverRef); // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.TestSwitch
	void TestSwitch(UJSI_Slot_C* Item Reciever, UJSI_Slot_C* Item Dropped, UJSIContainer_C* Item Receiver Container, UJSIContainer_C* Item Dropped Container); // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SwitchJacket
	void SwitchJacket(UJSI_Slot_C* ItemReceiver, UJSI_Slot_C* ItemDropped, UJSIContainer_C* ItemReceiverContainer, UJSIContainer_C* ItemDroppedContainer); // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SwitchPants
	void SwitchPants(UJSI_Slot_C* ItemReceiver, UJSI_Slot_C* ItemDropped, UJSIContainer_C* ItemReceiverContainer, UJSIContainer_C* ItemDroppedContainer); // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SwitchMeleeWeapon
	void SwitchMeleeWeapon(UJSI_Slot_C* ItemReceiver, UJSI_Slot_C* ItemDropped, UJSIContainer_C* ItemReceiverContainer, UJSIContainer_C* ItemDroppedContainer); // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SwitchWeapon
	void SwitchWeapon(UJSI_Slot_C* ItemReceiver, UJSI_Slot_C* ItemDropped, UJSIContainer_C* ItemReceiverContainer, UJSIContainer_C* ItemDroppedContainer); // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SwitchArmor
	void SwitchArmor(UJSI_Slot_C* ItemReceiver, UJSI_Slot_C* ItemDropped, UJSIContainer_C* ItemReceiverContainer, UJSIContainer_C* ItemDroppedContainer); // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SwitchHelmets
	void SwitchHelmets(UJSI_Slot_C* ItemReceiver, UJSI_Slot_C* ItemDropped, UJSIContainer_C* ItemReceiverContainer, UJSIContainer_C* ItemDroppedContainer); // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.EatAnimMu
	void EatAnimMu(FName RowName, double PlayRate);                                                                          // [0x2407bf0] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.EatAnimServ
	void EatAnimServ(FName RowName, double PlayRate);                                                                        // [0x2407bf0] Net|NetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.CheckForContainerDrop
	void CheckForContainerDrop(UJSIContainer_C* FromContainer, UJSIContainer_C* ToContainer, UJSI_Slot_C* slotRef, bool Equipped?, bool ToPockets?); // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ServerItemAddedToContainer
	void ServerItemAddedToContainer(AMPMainContainerBox_C* Target, int32_t ToSlotIndex, FContainerPickupsInfo ItemPInfo, TArray<FContainerPickupsInfo>& ContainerData, TArray<FContainerPickupsInfo>& ContainerItems); // [0x2407bf0] Net|NetReliableNetServer|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnItemAddedToContainer
	void OnItemAddedToContainer(UJSIContainer_C* From, UJSIContainer_C* To, UJSI_Slot_C* FromSlotRef, UJSI_Slot_C* ToSlotRef, bool ToEmptySlot?, bool MovedAll?); // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ServerMoveItemContainer
	void ServerMoveItemContainer(int32_t ToSlotIndex, int32_t ItemUID, int32_t ToContainerUID, bool isContainer, AMPMainContainerBox_C* Container, bool Shop); // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnItemSlotChanged
	void OnItemSlotChanged(UJSIContainer_C* Container, UJSI_Slot_C* slotRef, int32_t NewIndex, bool Rotated);                // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ItemsCombined
	void ItemsCombined(UJSIContainer_C* FromContainer, UJSIContainer_C* ToContainer, UJSI_Slot_C* SlotReceiver, UJSI_Slot_C* SlotDropped, bool SlotDroppedRemoved); // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.DropInfo_SplitPerformed
	void DropInfo_SplitPerformed(UJSI_Slot_C* SourceSlotRef, UJSI_Slot_C* NewSplitSlotRef, UJSIContainer_C* ContainerSource, UJSIContainer_C* ContainerReceiver, int32_t SplitAmount, int32_t AmountRemaining); // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnContainerSlotDoubleClick
	void OnContainerSlotDoubleClick(UJSIContainer_C* Container, UJSI_Slot_C* slotRef, FKey Button);                          // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ItemDropRequest
	void ItemDropRequest(UJSI_Slot_C* ItemRef, FFItemInfo ItemInfo, int32_t Count, UJSIContainer_C* Container);              // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ClientResponseUID
	void ClientResponseUID(int32_t Uid, bool ForSlot);                                                                       // [0x2407bf0] Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.RequestUID
	void RequestUID(bool ForSlot);                                                                                           // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnSlotDoubleClick
	void OnSlotDoubleClick(UJSIContainer_C* Container, UJSI_Slot_C* slotRef, FKey Button);                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.WaitToUID
	void WaitToUID();                                                                                                        // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.DestroyReplicatedActor
	void DestroyReplicatedActor(AA_Item_C* TargetActor);                                                                     // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SpawnDropItem
	void SpawnDropItem(FVector Position, FFItemInfo Info, TArray<FContainerPickupsInfo>& ContainersData, TArray<FContainerPickupsInfo>& ContainerItems, bool Massive, TArray<FFItemInfo>& InfoArr); // [0x2407bf0] Net|NetReliableNetServer|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ClientAddItem
	void ClientAddItem();                                                                                                    // [0x2407bf0] Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ServerConfigureUniqItem
	void ServerConfigureUniqItem(AA_Item_C* Item);                                                                           // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.UnHandleJSContainerEvents
	void UnHandleJSContainerEvents();                                                                                        // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.MPC_HandleBackpackContainerMPCEvent
	void MPC_HandleBackpackContainerMPCEvent(UJSIContainer_C* containerRef);                                                 // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnMPCToBackpackContainer
	void OnMPCToBackpackContainer(UJSIContainer_C* FromContainer, UJSIContainer_C* ToContainer, UJSI_Slot_C* DroppedSlotRef, UJSI_Slot_C* SlotReceiverRef, int32_t ToSlotIndex, bool Rotated?, bool RightMouseButton); // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.Server_deleteFromContainer
	void Server_deleteFromContainer(int32_t ItemUID, AMPMainContainerBox_C* MpContainerRef, bool IsContainer?, bool Shop, int32_t ItemsLeft); // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnEquipOrAddToPocketFromMPC
	void OnEquipOrAddToPocketFromMPC(UJSIContainer_C* FromContainer, UJSIContainer_C* ToContainer, UJSI_Slot_C* DroppedSlotRef, UJSI_Slot_C* SlotReceiverRef, int32_t ToSlotIndex, bool Rotated?, bool RightMouseButton); // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.HandleMPCToEquipment
	void HandleMPCToEquipment();                                                                                             // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.Client_BuildMPContainerData
	void Client_BuildMPContainerData(AMPMainContainerBox_C* Container, FMpContentRep Data);                                  // [0x2407bf0] Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SERVER_RequestContainerData
	void SERVER_RequestContainerData(AMPMainContainerBox_C* Container, FS_LootChanceModifier LootChanceMod, TArray<FString>& Quest Items, TArray<int32_t>& Quest Items Counts); // [0x2407bf0] Net|NetReliableNetServer|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.RequestContainerContent
	void RequestContainerContent();                                                                                          // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SERVER_MPContainerMoveItem
	void SERVER_MPContainerMoveItem(int32_t ContainerUID, int32_t ItemSlotIndex, int32_t ToSlotIndex, int32_t UnqiueID, bool Rotated?, AMPMainContainerBox_C* MpContainerRef, bool isContainer); // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnContainerAction
	void OnContainerAction(UJSIContainer_C* FromContainer, UJSIContainer_C* ToContainer, UJSI_Slot_C* DroppedSlotRef, UJSI_Slot_C* SlotReceiverRef, int32_t ToSlotIndex, bool DroppedRotated?); // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.HandleJSContainerEvents
	void HandleJSContainerEvents();                                                                                          // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.UnhandleJSEvents
	void UnhandleJSEvents(UJSIContainer_C* Container);                                                                       // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.DropInfo_ContainerToContainer
	void DropInfo_ContainerToContainer(UJSIContainer_C* From, UJSIContainer_C* To, UJSI_Slot_C* FromSlotRef, UJSI_Slot_C* ToSlotRef, bool ToEmptySlot?, bool MovedAll?); // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.EventOnIndexChanged
	void EventOnIndexChanged(UJSIContainer_C* Container, UJSI_Slot_C* slotRef, int32_t NewIndex, bool Rotated);              // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.HandleContainerEvents
	void HandleContainerEvents(UJSIContainer_C* Container);                                                                  // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnMWSlot
	void OnMWSlot(UJSIContainer_C* FromContainer, UJSIContainer_C* ToContainer, UJSI_Slot_C* slotRef, bool Equipped?, bool ToPockets?); // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.HandleJSIEvent
	void HandleJSIEvent();                                                                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.MultiSetIgnorePawn
	void MultiSetIgnorePawn();                                                                                               // [0x2407bf0] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ServSetIgnorePawn
	void ServSetIgnorePawn();                                                                                                // [0x2407bf0] Net|NetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SetIgnorePawn
	void SetIgnorePawn();                                                                                                    // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.GPSEquipFP
	void GPSEquipFP();                                                                                                       // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.CrouchBag
	void CrouchBag();                                                                                                        // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.FPPAimingCurveUpdate
	void FPPAimingCurveUpdate(bool Reverse?);                                                                                // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.FPPAimingSwitcher
	void FPPAimingSwitcher(bool Activate?);                                                                                  // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.FPSOff
	void FPSOff();                                                                                                           // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.FPSModeOff
	void FPSModeOff();                                                                                                       // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.FlashlightRotationServer
	void FlashlightRotationServer(FRotator rot);                                                                             // [0x2407bf0] Net|NetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.InteractShopEnd
	void InteractShopEnd();                                                                                                  // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.InteractShop
	void InteractShop();                                                                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.InteractShopPulse
	void InteractShopPulse();                                                                                                // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SyncCheckMulti
	void SyncCheckMulti(bool HiddenInGame, bool LootPointOpened, bool bLockMovement, bool Crawling, int32_t Primary, int32_t Secondary); // [0x2407bf0] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SyncTickServer
	void SyncTickServer(bool HiddenInGame, bool LootPointOpened, bool bLockMovement, bool Crawling, int32_t Primary, int32_t Secondary); // [0x2407bf0] Net|NetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SyncTick
	void SyncTick();                                                                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnStandRotation
	void OnStandRotation();                                                                                                  // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ReceiveTick
	void ReceiveTick(float DeltaSeconds);                                                                                    // [0x2407bf0] Event|Public|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ChangeSits_Server
	void ChangeSits_Server(APawn* Vehicle, int32_t DesireSitIndex, APawn* Player);                                           // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.PlayerMoveAndRotate
	void PlayerMoveAndRotate(FVector NewLocation, FRotator NewRotation);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SetSaveCarsStats
	void SetSaveCarsStats(TArray<FString>& Stats);                                                                           // [0x2407bf0] Net|NetReliableNetServer|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.CheckIfDiedInCar_Client
	void CheckIfDiedInCar_Client();                                                                                          // [0x2407bf0] Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ExecuteUbergraph_SurvivalPlayer
	void ExecuteUbergraph_SurvivalPlayer(int32_t EntryPoint);                                                                // [0x2407bf0] Final|HasDefaults    
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.MissingCarSave__DelegateSignature
	void MissingCarSave__DelegateSignature(TArray<FString>& MissingCarArray);                                                // [0x2407bf0] Public|Delegate|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnMeetNPC__DelegateSignature
	void OnMeetNPC__DelegateSignature(TArray<FString>& FamiliarityNPS);                                                      // [0x2407bf0] Public|Delegate|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnChangeAmmoClass__DelegateSignature
	void OnChangeAmmoClass__DelegateSignature(bool bStart);                                                                  // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnBackPackChanged__DelegateSignature
	void OnBackPackChanged__DelegateSignature(UJSIContainer_C* Backpack);                                                    // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.RoomInsidesSave__DelegateSignature
	void RoomInsidesSave__DelegateSignature(TArray<FString>& RoomInsides);                                                   // [0x2407bf0] Public|Delegate|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnPocketChanged__DelegateSignature
	void OnPocketChanged__DelegateSignature(UJSIContainer_C* Pocket);                                                        // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnSetAliases__DelegateSignature
	void OnSetAliases__DelegateSignature(TArray<FString>& Aliases);                                                          // [0x2407bf0] Public|Delegate|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnGymExit__DelegateSignature
	void OnGymExit__DelegateSignature();                                                                                     // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnBlockOpenMenu__DelegateSignature
	void OnBlockOpenMenu__DelegateSignature(bool Block?);                                                                    // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnLoanPaid__DelegateSignature
	void OnLoanPaid__DelegateSignature(int32_t PaidMoney);                                                                   // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnDiscountUpdated__DelegateSignature
	void OnDiscountUpdated__DelegateSignature();                                                                             // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.EnterToBase__DelegateSignature
	void EnterToBase__DelegateSignature(bool Enter);                                                                         // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnFinishFood__DelegateSignature
	void OnFinishFood__DelegateSignature(int32_t Index);                                                                     // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnExitBar__DelegateSignature
	void OnExitBar__DelegateSignature(int32_t PlaceIndex);                                                                   // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnCompassStateChanged__DelegateSignature
	void OnCompassStateChanged__DelegateSignature();                                                                         // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnGPSStateChanged__DelegateSignature
	void OnGPSStateChanged__DelegateSignature();                                                                             // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnInCarChanged__DelegateSignature
	void OnInCarChanged__DelegateSignature();                                                                                // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.CarsStats__DelegateSignature
	void CarsStats__DelegateSignature(TArray<FString>& CarStats);                                                            // [0x2407bf0] Public|Delegate|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.SetRPointsCount__DelegateSignature
	void SetRPointsCount__DelegateSignature(int32_t RPoints);                                                                // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnHomeSold__DelegateSignature
	void OnHomeSold__DelegateSignature();                                                                                    // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnCarSold__DelegateSignature
	void OnCarSold__DelegateSignature();                                                                                     // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnSetHomeCount__DelegateSignature
	void OnSetHomeCount__DelegateSignature(TArray<FString>& PlayerHome);                                                     // [0x2407bf0] Public|Delegate|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnLoadHouse__DelegateSignature
	void OnLoadHouse__DelegateSignature();                                                                                   // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnSaveHouse__DelegateSignature
	void OnSaveHouse__DelegateSignature(FString HouseName);                                                                  // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnSetCarCount__DelegateSignature
	void OnSetCarCount__DelegateSignature(TArray<FString>& PlayerCars);                                                      // [0x2407bf0] Public|Delegate|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnAiming__DelegateSignature
	void OnAiming__DelegateSignature(bool Aim);                                                                              // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnLoadStats__DelegateSignature
	void OnLoadStats__DelegateSignature();                                                                                   // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnSaveStats__DelegateSignature
	void OnSaveStats__DelegateSignature(TArray<FString>& StatSave);                                                          // [0x2407bf0] Public|Delegate|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnDeath__DelegateSignature
	void OnDeath__DelegateSignature();                                                                                       // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ChangeWeaponActiveSlot__DelegateSignature
	void ChangeWeaponActiveSlot__DelegateSignature();                                                                        // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.PressReloadWeapon__DelegateSignature
	void PressReloadWeapon__DelegateSignature();                                                                             // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ReloadEventLocaly__DelegateSignature
	void ReloadEventLocaly__DelegateSignature();                                                                             // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ShopEnd__DelegateSignature
	void ShopEnd__DelegateSignature();                                                                                       // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ShopStart__DelegateSignature
	void ShopStart__DelegateSignature();                                                                                     // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnKnockdownStart__DelegateSignature
	void OnKnockdownStart__DelegateSignature();                                                                              // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.UpdateKDCounter__DelegateSignature
	void UpdateKDCounter__DelegateSignature();                                                                               // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.DLSSModeChanged__DelegateSignature
	void DLSSModeChanged__DelegateSignature(char DLSSMode);                                                                  // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.OnSprint__DelegateSignature
	void OnSprint__DelegateSignature(bool Sprint);                                                                           // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.HouseLeaveEvent__DelegateSignature
	void HouseLeaveEvent__DelegateSignature();                                                                               // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.HouseEnterEvent__DelegateSignature
	void HouseEnterEvent__DelegateSignature();                                                                               // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.DeathEvent__DelegateSignature
	void DeathEvent__DelegateSignature();                                                                                    // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.FuelButtonCancel__DelegateSignature
	void FuelButtonCancel__DelegateSignature();                                                                              // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.FuelButtonFinish__DelegateSignature
	void FuelButtonFinish__DelegateSignature();                                                                              // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.FuelButtonStart__DelegateSignature
	void FuelButtonStart__DelegateSignature();                                                                               // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.DurabilityButtonCancel__DelegateSignature
	void DurabilityButtonCancel__DelegateSignature();                                                                        // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.DurabilityButtonFinish__DelegateSignature
	void DurabilityButtonFinish__DelegateSignature();                                                                        // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.DurabilityButtonStart__DelegateSignature
	void DurabilityButtonStart__DelegateSignature();                                                                         // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.LateInteractCancel__DelegateSignature
	void LateInteractCancel__DelegateSignature();                                                                            // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.LateInteractFinish__DelegateSignature
	void LateInteractFinish__DelegateSignature();                                                                            // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.LateInteractStart__DelegateSignature
	void LateInteractStart__DelegateSignature();                                                                             // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.InCarEvent__DelegateSignature
	void InCarEvent__DelegateSignature(bool InCar);                                                                          // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ReloadEvent__DelegateSignature
	void ReloadEvent__DelegateSignature(double ReloadDuration);                                                              // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ShootHitEvent__DelegateSignature
	void ShootHitEvent__DelegateSignature();                                                                                 // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.ShootEvent__DelegateSignature
	void ShootEvent__DelegateSignature();                                                                                    // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.AimStateEvent__DelegateSignature
	void AimStateEvent__DelegateSignature(bool Aim);                                                                         // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer.SurvivalPlayer_C.AmmoChangedEvent__DelegateSignature
	void AmmoChangedEvent__DelegateSignature(TEnumAsByte<BPE_Weapon_Type> WeaponType, TEnumAsByte<BPE_FireMode> FireMode, TEnumAsByte<BPE_AmmoClass> AmmoClass, int32_t CurrentAmmo, int32_t LowAmmo, int32_t MaxAmmo, UMaterialInterface* UIIcon); // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

