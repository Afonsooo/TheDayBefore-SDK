
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package SurvivalPlayer_Mannequin.

/// Class /Game/SurvivalPlayer_Mannequin.SurvivalPlayer_Mannequin_C
/// Size: 0x0517 (0x004DD1 - 0x0052E8)
class ASurvivalPlayer_Mannequin_C : public ASurvivalPlayer_V2_C : ASurvivalPlayer_V2_C
{ 
public:
	unsigned char                                      UnknownData00_2[0x7];                                       // 0x4DD1   (0x0007)  MISSED
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x4DD8   (0x0008)  
	UTextRenderComponent*                              AllDamageText;                                              // 0x4DE0   (0x0008)  
	UTextRenderComponent*                              Desc;                                                       // 0x4DE8   (0x0008)  
	UTextRenderComponent*                              TextRender;                                                 // 0x4DF0   (0x0008)  
	TArray<FName>                                      MnnequinStartItems;                                         // 0x4DF8   (0x0010)  
	FText                                              MannequinDescription;                                       // 0x4E08   (0x0018)  
	double                                             AllDamage;                                                  // 0x4E20   (0x0008)  
	double                                             Health;                                                     // 0x4E28   (0x0008)  
	bool                                               ShootingMannequin;                                          // 0x4E30   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x4E31   (0x0003)  MISSED
	FName                                              MannWeapon;                                                 // 0x4E34   (0x0008)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x4E3C   (0x0004)  MISSED
	TArray<FName>                                      Helmets;                                                    // 0x4E40   (0x0010)  
	TArray<FName>                                      Armors;                                                     // 0x4E50   (0x0010)  
	int32_t                                            ArmorLevel;                                                 // 0x4E60   (0x0004)  
	int32_t                                            HelmetLevel;                                                // 0x4E64   (0x0004)  
	double                                             InitialHelmetDurability;                                    // 0x4E68   (0x0008)  
	double                                             InitialArmorDurability;                                     // 0x4E70   (0x0008)  
	double                                             CurrentHelmetDurability;                                    // 0x4E78   (0x0008)  
	double                                             CurrentArmorDurability;                                     // 0x4E80   (0x0008)  
	FFItemInfo                                         ArmorItemInfo;                                              // 0x4E88   (0x0220)  
	FFItemInfo                                         HelmetArmorInfo;                                            // 0x50A8   (0x0220)  
	double                                             FinalDamage;                                                // 0x52C8   (0x0008)  
	double                                             HelmetReduction;                                            // 0x52D0   (0x0008)  
	double                                             ArmorReduction;                                             // 0x52D8   (0x0008)  
	double                                             ImpulseModifier;                                            // 0x52E0   (0x0008)  


	/// Functions
	// Function /Game/SurvivalPlayer_Mannequin.SurvivalPlayer_Mannequin_C.UpdateHelmetAndArmorDurability
	void UpdateHelmetAndArmorDurability(FName BoneName, double Damage);                                                      // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Mannequin.SurvivalPlayer_Mannequin_C.Calc Damage with Armory
	void Calc Damage with Armory(FName BoneName, double Damage, double& FinalDamage);                                        // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/SurvivalPlayer_Mannequin.SurvivalPlayer_Mannequin_C.UserConstructionScript
	void UserConstructionScript();                                                                                           // [0x2407bf0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Mannequin.SurvivalPlayer_Mannequin_C.ReceiveBeginPlay
	void ReceiveBeginPlay();                                                                                                 // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Mannequin.SurvivalPlayer_Mannequin_C.ReceivePointDamage
	void ReceivePointDamage(float Damage, UDamageType* DamageType, FVector HitLocation, FVector hitNormal, UPrimitiveComponent* HitComponent, FName BoneName, FVector ShotFromDirection, AController* InstigatedBy, AActor* DamageCauser, FHitResult& HitInfo); // [0x2407bf0] BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Mannequin.SurvivalPlayer_Mannequin_C.ShowDamage
	void ShowDamage(FName InName, double InFloat);                                                                           // [0x2407bf0] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Mannequin.SurvivalPlayer_Mannequin_C.PrintAllDamage
	void PrintAllDamage();                                                                                                   // [0x2407bf0] Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Mannequin.SurvivalPlayer_Mannequin_C.ClearDamage
	void ClearDamage();                                                                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Mannequin.SurvivalPlayer_Mannequin_C.EnableRagdol
	void EnableRagdol(FName BoneName, AController* InstigatedBy, double Damage);                                             // [0x2407bf0] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Mannequin.SurvivalPlayer_Mannequin_C.DisableRagdol
	void DisableRagdol();                                                                                                    // [0x2407bf0] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Mannequin.SurvivalPlayer_Mannequin_C.SpawnDecal
	void SpawnDecal(FVector Location, FVector hitNormal, FName BoneName);                                                    // [0x2407bf0] Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Mannequin.SurvivalPlayer_Mannequin_C.MannFire
	void MannFire();                                                                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Mannequin.SurvivalPlayer_Mannequin_C.EquipItems
	void EquipItems(FFItemInfo ItemInfo);                                                                                    // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Mannequin.SurvivalPlayer_Mannequin_C.UnEquipHelmet
	void UnEquipHelmet();                                                                                                    // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Mannequin.SurvivalPlayer_Mannequin_C.ResetArmor
	void ResetArmor();                                                                                                       // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SurvivalPlayer_Mannequin.SurvivalPlayer_Mannequin_C.ExecuteUbergraph_SurvivalPlayer_Mannequin
	void ExecuteUbergraph_SurvivalPlayer_Mannequin(int32_t EntryPoint);                                                      // [0x2407bf0] Final|HasDefaults    
};

