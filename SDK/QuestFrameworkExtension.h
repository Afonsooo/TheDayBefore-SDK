
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package QuestFrameworkExtension.

/// Class /Script/QuestFrameworkExtension.QuestGameInstance
/// Size: 0x0008 (0x0001C0 - 0x0001C8)
class UQuestGameInstance : public UGameInstance : UGameInstance
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x01C0   (0x0008)  MISSED
};

/// Class /Script/QuestFrameworkExtension.QuestGameModeBase
/// Size: 0x0000 (0x000330 - 0x000330)
class AQuestGameModeBase : public AGameModeBase : AGameModeBase
{ 
public:
};

/// Class /Script/QuestFrameworkExtension.QuestPlayerController
/// Size: 0x0018 (0x000850 - 0x000868)
class AQuestPlayerController : public APlayerController : APlayerController
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0850   (0x0008)  MISSED
	UQuestComponent*                                   QuestFrameworkComponent;                                    // 0x0858   (0x0008)  
	UQuestTrackerComponent*                            QuestTrackerComponent;                                      // 0x0860   (0x0008)  
};

