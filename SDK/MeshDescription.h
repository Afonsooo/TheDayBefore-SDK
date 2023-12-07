
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package MeshDescription.

/// Struct /Script/MeshDescription.ElementID
/// Size: 0x0004 (0x000000 - 0x000004)
struct FElementID
{ 
	int32_t                                            IDValue;                                                    // 0x0000   (0x0004)  
};

/// Struct /Script/MeshDescription.VertexID
/// Size: 0x0000 (0x000004 - 0x000004)
struct FVertexID : FElementID
{ 
};

/// Struct /Script/MeshDescription.VertexInstanceID
/// Size: 0x0000 (0x000004 - 0x000004)
struct FVertexInstanceID : FElementID
{ 
};

/// Struct /Script/MeshDescription.EdgeID
/// Size: 0x0000 (0x000004 - 0x000004)
struct FEdgeID : FElementID
{ 
};

/// Struct /Script/MeshDescription.UVID
/// Size: 0x0000 (0x000004 - 0x000004)
struct FUVID : FElementID
{ 
};

/// Struct /Script/MeshDescription.TriangleID
/// Size: 0x0000 (0x000004 - 0x000004)
struct FTriangleID : FElementID
{ 
};

/// Struct /Script/MeshDescription.PolygonGroupID
/// Size: 0x0000 (0x000004 - 0x000004)
struct FPolygonGroupID : FElementID
{ 
};

/// Struct /Script/MeshDescription.PolygonID
/// Size: 0x0000 (0x000004 - 0x000004)
struct FPolygonID : FElementID
{ 
};

/// Class /Script/MeshDescription.MeshDescriptionBase
/// Size: 0x02C8 (0x000028 - 0x0002F0)
class UMeshDescriptionBase : public UObject : UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x2C8];                                     // 0x0028   (0x02C8)  MISSED
};

/// Class /Script/MeshDescription.MeshDescriptionBaseBulkData
/// Size: 0x0000 (0x000028 - 0x000028)
class UMeshDescriptionBaseBulkData : public UObject : UObject
{ 
public:
};

/// Enum /Script/MeshDescription.EComputeNTBsOptions
/// Size: 0x05
enum EComputeNTBsOptions : uint8_t
{
	EComputeNTBsOptions__None0                                                       = 0,
	EComputeNTBsOptions__Normals1                                                    = 1,
	EComputeNTBsOptions__Tangents2                                                   = 2,
	EComputeNTBsOptions__WeightedNTBs3                                               = 4,
	EComputeNTBsOptions__EComputeNTBsOptions_MAX4                                    = 5
};

