
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package DataflowNodes.

/// Struct /Script/DataflowNodes.FloatOverrideDataflowNode
/// Size: 0x0018 (0x0000E8 - 0x000100)
struct FFloatOverrideDataflowNode : FDataflowNode
{ 
	FName                                              PropertyName;                                               // 0x00E8   (0x0008)  
	FName                                              KeyName;                                                    // 0x00F0   (0x0008)  
	float                                              ValueOut;                                                   // 0x00F8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00FC   (0x0004)  MISSED
};

/// Struct /Script/DataflowNodes.SelectionSetDataflowNode
/// Size: 0x0020 (0x0000E8 - 0x000108)
struct FSelectionSetDataflowNode : FDataflowNode
{ 
	FString                                            Indices;                                                    // 0x00E8   (0x0010)  
	TArray<int32_t>                                    IndicesOut;                                                 // 0x00F8   (0x0010)  
};

/// Struct /Script/DataflowNodes.GetSkeletalMeshDataflowNode
/// Size: 0x0010 (0x0000E8 - 0x0000F8)
struct FGetSkeletalMeshDataflowNode : FDataflowNode
{ 
	USkeletalMesh*                                     SkeletalMesh;                                               // 0x00E8   (0x0008)  
	FName                                              PropertyName;                                               // 0x00F0   (0x0008)  
};

/// Struct /Script/DataflowNodes.GetSkeletonDataflowNode
/// Size: 0x0010 (0x0000E8 - 0x0000F8)
struct FGetSkeletonDataflowNode : FDataflowNode
{ 
	USkeleton*                                         Skeleton;                                                   // 0x00E8   (0x0008)  
	FName                                              PropertyName;                                               // 0x00F0   (0x0008)  
};

/// Struct /Script/DataflowNodes.SkeletalMeshBoneDataflowNode
/// Size: 0x0020 (0x0000E8 - 0x000108)
struct FSkeletalMeshBoneDataflowNode : FDataflowNode
{ 
	FName                                              BoneName;                                                   // 0x00E8   (0x0008)  
	USkeletalMesh*                                     SkeletalMesh;                                               // 0x00F0   (0x0008)  
	int32_t                                            BoneIndexOut;                                               // 0x00F8   (0x0004)  
	FName                                              PropertyName;                                               // 0x00FC   (0x0008)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0104   (0x0004)  MISSED
};

/// Struct /Script/DataflowNodes.SkeletalMeshReferenceTransformDataflowNode
/// Size: 0x0078 (0x0000E8 - 0x000160)
struct FSkeletalMeshReferenceTransformDataflowNode : FDataflowNode
{ 
	USkeletalMesh*                                     SkeletalMeshIn;                                             // 0x00E8   (0x0008)  
	int32_t                                            BoneIndexIn;                                                // 0x00F0   (0x0004)  
	unsigned char                                      UnknownData00_5[0xC];                                       // 0x00F4   (0x000C)  MISSED
	FTransform                                         TransformOut;                                               // 0x0100   (0x0060)  
};

/// Struct /Script/DataflowNodes.GetStaticMeshDataflowNode
/// Size: 0x0010 (0x0000E8 - 0x0000F8)
struct FGetStaticMeshDataflowNode : FDataflowNode
{ 
	UStaticMesh*                                       StaticMesh;                                                 // 0x00E8   (0x0008)  
	FName                                              PropertyName;                                               // 0x00F0   (0x0008)  
};

