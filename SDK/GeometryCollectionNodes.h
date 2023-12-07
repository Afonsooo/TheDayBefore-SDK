
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package GeometryCollectionNodes.

/// Struct /Script/GeometryCollectionNodes.GeometryCollectionTerminalDataflowNode
/// Size: 0x00D0 (0x0000E8 - 0x0001B8)
struct FGeometryCollectionTerminalDataflowNode : FDataflowTerminalNode
{ 
	FManagedArrayCollection                            Collection;                                                 // 0x00E8   (0x00B0)  
	TArray<UMaterial*>                                 Materials;                                                  // 0x0198   (0x0010)  
	TArray<FGeometryCollectionAutoInstanceMesh>        InstancedMeshes;                                            // 0x01A8   (0x0010)  
};

/// Struct /Script/GeometryCollectionNodes.GetGeometryCollectionAssetDataflowNode
/// Size: 0x0008 (0x0000E8 - 0x0000F0)
struct FGetGeometryCollectionAssetDataflowNode : FDataflowNode
{ 
	UGeometryCollection*                               Asset;                                                      // 0x00E8   (0x0008)  
};

/// Struct /Script/GeometryCollectionNodes.GetGeometryCollectionSourcesDataflowNode
/// Size: 0x0018 (0x0000E8 - 0x000100)
struct FGetGeometryCollectionSourcesDataflowNode : FDataflowNode
{ 
	UGeometryCollection*                               Asset;                                                      // 0x00E8   (0x0008)  
	TArray<FGeometryCollectionSource>                  Sources;                                                    // 0x00F0   (0x0010)  
};

/// Struct /Script/GeometryCollectionNodes.CreateGeometryCollectionFromSourcesDataflowNode
/// Size: 0x00E0 (0x0000E8 - 0x0001C8)
struct FCreateGeometryCollectionFromSourcesDataflowNode : FDataflowNode
{ 
	TArray<FGeometryCollectionSource>                  Sources;                                                    // 0x00E8   (0x0010)  
	FManagedArrayCollection                            Collection;                                                 // 0x00F8   (0x00B0)  
	TArray<UMaterial*>                                 Materials;                                                  // 0x01A8   (0x0010)  
	TArray<FGeometryCollectionAutoInstanceMesh>        InstancedMeshes;                                            // 0x01B8   (0x0010)  
};

/// Struct /Script/GeometryCollectionNodes.RadialFalloffFieldDataflowNode
/// Size: 0x00C8 (0x0000E8 - 0x0001B0)
struct FRadialFalloffFieldDataflowNode : FDataflowNode
{ 
	TArray<FVector3f>                                  SamplePositions;                                            // 0x00E8   (0x0010)  
	FDataflowVertexSelection                           SampleIndices;                                              // 0x00F8   (0x0020)  
	FSphere                                            Sphere;                                                     // 0x0118   (0x0020)  
	FVector                                            Translation;                                                // 0x0138   (0x0018)  
	float                                              Magnitude;                                                  // 0x0150   (0x0004)  
	float                                              MinRange;                                                   // 0x0154   (0x0004)  
	float                                              MaxRange;                                                   // 0x0158   (0x0004)  
	float                                              Default;                                                    // 0x015C   (0x0004)  
	EDataflowFieldFalloffType                          falloffType;                                                // 0x0160   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0161   (0x0007)  MISSED
	TArray<float>                                      FieldFloatResult;                                           // 0x0168   (0x0010)  
	TArray<int32_t>                                    FieldRemap;                                                 // 0x0178   (0x0010)  
	FDataflowVertexSelection                           FieldSelectionMask;                                         // 0x0188   (0x0020)  
	int32_t                                            NumSamplePositions;                                         // 0x01A8   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x01AC   (0x0004)  MISSED
};

/// Struct /Script/GeometryCollectionNodes.BoxFalloffFieldDataflowNode
/// Size: 0x0128 (0x0000E8 - 0x000210)
struct FBoxFalloffFieldDataflowNode : FDataflowNode
{ 
	TArray<FVector3f>                                  SamplePositions;                                            // 0x00E8   (0x0010)  
	FDataflowVertexSelection                           SampleIndices;                                              // 0x00F8   (0x0020)  
	FBox                                               Box;                                                        // 0x0118   (0x0038)  
	FTransform                                         Transform;                                                  // 0x0150   (0x0060)  
	float                                              Magnitude;                                                  // 0x01B0   (0x0004)  
	float                                              MinRange;                                                   // 0x01B4   (0x0004)  
	float                                              MaxRange;                                                   // 0x01B8   (0x0004)  
	float                                              Default;                                                    // 0x01BC   (0x0004)  
	EDataflowFieldFalloffType                          falloffType;                                                // 0x01C0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x01C1   (0x0007)  MISSED
	TArray<float>                                      FieldFloatResult;                                           // 0x01C8   (0x0010)  
	TArray<int32_t>                                    FieldRemap;                                                 // 0x01D8   (0x0010)  
	FDataflowVertexSelection                           FieldSelectionMask;                                         // 0x01E8   (0x0020)  
	int32_t                                            NumSamplePositions;                                         // 0x0208   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x020C   (0x0004)  MISSED
};

/// Struct /Script/GeometryCollectionNodes.PlaneFalloffFieldDataflowNode
/// Size: 0x00E0 (0x0000E8 - 0x0001C8)
struct FPlaneFalloffFieldDataflowNode : FDataflowNode
{ 
	TArray<FVector3f>                                  SamplePositions;                                            // 0x00E8   (0x0010)  
	FDataflowVertexSelection                           SampleIndices;                                              // 0x00F8   (0x0020)  
	FVector                                            Position;                                                   // 0x0118   (0x0018)  
	FVector                                            Normal;                                                     // 0x0130   (0x0018)  
	float                                              Distance;                                                   // 0x0148   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x014C   (0x0004)  MISSED
	FVector                                            Translation;                                                // 0x0150   (0x0018)  
	float                                              Magnitude;                                                  // 0x0168   (0x0004)  
	float                                              MinRange;                                                   // 0x016C   (0x0004)  
	float                                              MaxRange;                                                   // 0x0170   (0x0004)  
	float                                              Default;                                                    // 0x0174   (0x0004)  
	EDataflowFieldFalloffType                          falloffType;                                                // 0x0178   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0179   (0x0007)  MISSED
	TArray<float>                                      FieldFloatResult;                                           // 0x0180   (0x0010)  
	TArray<int32_t>                                    FieldRemap;                                                 // 0x0190   (0x0010)  
	FDataflowVertexSelection                           FieldSelectionMask;                                         // 0x01A0   (0x0020)  
	int32_t                                            NumSamplePositions;                                         // 0x01C0   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x01C4   (0x0004)  MISSED
};

/// Struct /Script/GeometryCollectionNodes.RadialIntMaskFieldDataflowNode
/// Size: 0x00A0 (0x0000E8 - 0x000188)
struct FRadialIntMaskFieldDataflowNode : FDataflowNode
{ 
	TArray<FVector3f>                                  SamplePositions;                                            // 0x00E8   (0x0010)  
	FDataflowVertexSelection                           SampleIndices;                                              // 0x00F8   (0x0020)  
	FSphere                                            Sphere;                                                     // 0x0118   (0x0020)  
	FVector                                            Translation;                                                // 0x0138   (0x0018)  
	int32_t                                            InteriorValue;                                              // 0x0150   (0x0004)  
	int32_t                                            ExteriorValue;                                              // 0x0154   (0x0004)  
	EDataflowSetMaskConditionType                      SetMaskConditionType;                                       // 0x0158   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0159   (0x0007)  MISSED
	TArray<int32_t>                                    FieldIntResult;                                             // 0x0160   (0x0010)  
	TArray<int32_t>                                    FieldRemap;                                                 // 0x0170   (0x0010)  
	int32_t                                            NumSamplePositions;                                         // 0x0180   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0184   (0x0004)  MISSED
};

/// Struct /Script/GeometryCollectionNodes.UniformScalarFieldDataflowNode
/// Size: 0x0060 (0x0000E8 - 0x000148)
struct FUniformScalarFieldDataflowNode : FDataflowNode
{ 
	TArray<FVector3f>                                  SamplePositions;                                            // 0x00E8   (0x0010)  
	FDataflowVertexSelection                           SampleIndices;                                              // 0x00F8   (0x0020)  
	float                                              Magnitude;                                                  // 0x0118   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x011C   (0x0004)  MISSED
	TArray<float>                                      FieldFloatResult;                                           // 0x0120   (0x0010)  
	TArray<int32_t>                                    FieldRemap;                                                 // 0x0130   (0x0010)  
	int32_t                                            NumSamplePositions;                                         // 0x0140   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0144   (0x0004)  MISSED
};

/// Struct /Script/GeometryCollectionNodes.UniformVectorFieldDataflowNode
/// Size: 0x0078 (0x0000E8 - 0x000160)
struct FUniformVectorFieldDataflowNode : FDataflowNode
{ 
	TArray<FVector3f>                                  SamplePositions;                                            // 0x00E8   (0x0010)  
	FDataflowVertexSelection                           SampleIndices;                                              // 0x00F8   (0x0020)  
	float                                              Magnitude;                                                  // 0x0118   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x011C   (0x0004)  MISSED
	FVector                                            Direction;                                                  // 0x0120   (0x0018)  
	TArray<FVector>                                    FieldVectorResult;                                          // 0x0138   (0x0010)  
	TArray<int32_t>                                    FieldRemap;                                                 // 0x0148   (0x0010)  
	int32_t                                            NumSamplePositions;                                         // 0x0158   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x015C   (0x0004)  MISSED
};

/// Struct /Script/GeometryCollectionNodes.RadialVectorFieldDataflowNode
/// Size: 0x0078 (0x0000E8 - 0x000160)
struct FRadialVectorFieldDataflowNode : FDataflowNode
{ 
	TArray<FVector3f>                                  SamplePositions;                                            // 0x00E8   (0x0010)  
	FDataflowVertexSelection                           SampleIndices;                                              // 0x00F8   (0x0020)  
	float                                              Magnitude;                                                  // 0x0118   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x011C   (0x0004)  MISSED
	FVector                                            Position;                                                   // 0x0120   (0x0018)  
	TArray<FVector>                                    FieldVectorResult;                                          // 0x0138   (0x0010)  
	TArray<int32_t>                                    FieldRemap;                                                 // 0x0148   (0x0010)  
	int32_t                                            NumSamplePositions;                                         // 0x0158   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x015C   (0x0004)  MISSED
};

/// Struct /Script/GeometryCollectionNodes.RandomVectorFieldDataflowNode
/// Size: 0x0060 (0x0000E8 - 0x000148)
struct FRandomVectorFieldDataflowNode : FDataflowNode
{ 
	TArray<FVector3f>                                  SamplePositions;                                            // 0x00E8   (0x0010)  
	FDataflowVertexSelection                           SampleIndices;                                              // 0x00F8   (0x0020)  
	float                                              Magnitude;                                                  // 0x0118   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x011C   (0x0004)  MISSED
	TArray<FVector>                                    FieldVectorResult;                                          // 0x0120   (0x0010)  
	TArray<int32_t>                                    FieldRemap;                                                 // 0x0130   (0x0010)  
	int32_t                                            NumSamplePositions;                                         // 0x0140   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0144   (0x0004)  MISSED
};

/// Struct /Script/GeometryCollectionNodes.NoiseFieldDataflowNode
/// Size: 0x00C8 (0x0000E8 - 0x0001B0)
struct FNoiseFieldDataflowNode : FDataflowNode
{ 
	TArray<FVector3f>                                  SamplePositions;                                            // 0x00E8   (0x0010)  
	FDataflowVertexSelection                           SampleIndices;                                              // 0x00F8   (0x0020)  
	float                                              MinRange;                                                   // 0x0118   (0x0004)  
	float                                              MaxRange;                                                   // 0x011C   (0x0004)  
	FTransform                                         Transform;                                                  // 0x0120   (0x0060)  
	TArray<float>                                      FieldFloatResult;                                           // 0x0180   (0x0010)  
	TArray<int32_t>                                    FieldRemap;                                                 // 0x0190   (0x0010)  
	int32_t                                            NumSamplePositions;                                         // 0x01A0   (0x0004)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x01A4   (0x000C)  MISSED
};

/// Struct /Script/GeometryCollectionNodes.UniformIntegerFieldDataflowNode
/// Size: 0x0060 (0x0000E8 - 0x000148)
struct FUniformIntegerFieldDataflowNode : FDataflowNode
{ 
	TArray<FVector3f>                                  SamplePositions;                                            // 0x00E8   (0x0010)  
	FDataflowVertexSelection                           SampleIndices;                                              // 0x00F8   (0x0020)  
	int32_t                                            Magnitude;                                                  // 0x0118   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x011C   (0x0004)  MISSED
	TArray<int32_t>                                    FieldIntResult;                                             // 0x0120   (0x0010)  
	TArray<int32_t>                                    FieldRemap;                                                 // 0x0130   (0x0010)  
	int32_t                                            NumSamplePositions;                                         // 0x0140   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0144   (0x0004)  MISSED
};

/// Struct /Script/GeometryCollectionNodes.WaveScalarFieldDataflowNode
/// Size: 0x00A0 (0x0000E8 - 0x000188)
struct FWaveScalarFieldDataflowNode : FDataflowNode
{ 
	TArray<FVector3f>                                  SamplePositions;                                            // 0x00E8   (0x0010)  
	FDataflowVertexSelection                           SampleIndices;                                              // 0x00F8   (0x0020)  
	float                                              Magnitude;                                                  // 0x0118   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x011C   (0x0004)  MISSED
	FVector                                            Position;                                                   // 0x0120   (0x0018)  
	FVector                                            Translation;                                                // 0x0138   (0x0018)  
	float                                              WaveLength;                                                 // 0x0150   (0x0004)  
	float                                              Period;                                                     // 0x0154   (0x0004)  
	EDataflowWaveFunctionType                          FunctionType;                                               // 0x0158   (0x0001)  
	EDataflowFieldFalloffType                          falloffType;                                                // 0x0159   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x015A   (0x0006)  MISSED
	TArray<float>                                      FieldFloatResult;                                           // 0x0160   (0x0010)  
	TArray<int32_t>                                    FieldRemap;                                                 // 0x0170   (0x0010)  
	int32_t                                            NumSamplePositions;                                         // 0x0180   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0184   (0x0004)  MISSED
};

/// Struct /Script/GeometryCollectionNodes.SumScalarFieldDataflowNode
/// Size: 0x0068 (0x0000E8 - 0x000150)
struct FSumScalarFieldDataflowNode : FDataflowNode
{ 
	TArray<float>                                      FieldFloatLeft;                                             // 0x00E8   (0x0010)  
	TArray<int32_t>                                    FieldRemapLeft;                                             // 0x00F8   (0x0010)  
	TArray<float>                                      FieldFloatRight;                                            // 0x0108   (0x0010)  
	TArray<int32_t>                                    FieldRemapRight;                                            // 0x0118   (0x0010)  
	float                                              Magnitude;                                                  // 0x0128   (0x0004)  
	EDataflowFloatFieldOperationType                   Operation;                                                  // 0x012C   (0x0001)  
	bool                                               bSwapInputs;                                                // 0x012D   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x012E   (0x0002)  MISSED
	TArray<float>                                      FieldFloatResult;                                           // 0x0130   (0x0010)  
	TArray<int32_t>                                    FieldRemap;                                                 // 0x0140   (0x0010)  
};

/// Struct /Script/GeometryCollectionNodes.SumVectorFieldDataflowNode
/// Size: 0x0088 (0x0000E8 - 0x000170)
struct FSumVectorFieldDataflowNode : FDataflowNode
{ 
	TArray<float>                                      FieldFloat;                                                 // 0x00E8   (0x0010)  
	TArray<int32_t>                                    FieldFloatRemap;                                            // 0x00F8   (0x0010)  
	TArray<FVector>                                    FieldVectorLeft;                                            // 0x0108   (0x0010)  
	TArray<int32_t>                                    FieldRemapLeft;                                             // 0x0118   (0x0010)  
	TArray<FVector>                                    FieldVectorRight;                                           // 0x0128   (0x0010)  
	TArray<int32_t>                                    FieldRemapRight;                                            // 0x0138   (0x0010)  
	float                                              Magnitude;                                                  // 0x0148   (0x0004)  
	EDataflowVectorFieldOperationType                  Operation;                                                  // 0x014C   (0x0001)  
	bool                                               bSwapVectorInputs;                                          // 0x014D   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x014E   (0x0002)  MISSED
	TArray<FVector>                                    FieldVectorResult;                                          // 0x0150   (0x0010)  
	TArray<int32_t>                                    FieldRemap;                                                 // 0x0160   (0x0010)  
};

/// Struct /Script/GeometryCollectionNodes.FieldMakeDenseFloatArrayDataflowNode
/// Size: 0x0038 (0x0000E8 - 0x000120)
struct FFieldMakeDenseFloatArrayDataflowNode : FDataflowNode
{ 
	TArray<float>                                      FieldFloatInput;                                            // 0x00E8   (0x0010)  
	TArray<int32_t>                                    FieldRemap;                                                 // 0x00F8   (0x0010)  
	int32_t                                            NumSamplePositions;                                         // 0x0108   (0x0004)  
	float                                              Default;                                                    // 0x010C   (0x0004)  
	TArray<float>                                      FieldFloatResult;                                           // 0x0110   (0x0010)  
};

/// Struct /Script/GeometryCollectionNodes.AddMaterialToCollectionDataflowNode
/// Size: 0x00F8 (0x0000E8 - 0x0001E0)
struct FAddMaterialToCollectionDataflowNode : FDataflowNode
{ 
	FManagedArrayCollection                            Collection;                                                 // 0x00E8   (0x00B0)  
	FDataflowFaceSelection                             FaceSelection;                                              // 0x0198   (0x0020)  
	TArray<UMaterial*>                                 Materials;                                                  // 0x01B8   (0x0010)  
	UMaterial*                                         OutsideMaterial;                                            // 0x01C8   (0x0008)  
	UMaterial*                                         InsideMaterial;                                             // 0x01D0   (0x0008)  
	bool                                               bAssignOutsideMaterial;                                     // 0x01D8   (0x0001)  
	bool                                               bAssignInsideMaterial;                                      // 0x01D9   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x01DA   (0x0006)  MISSED
};

/// Struct /Script/GeometryCollectionNodes.ReAssignMaterialInCollectionDataflowNode
/// Size: 0x00F0 (0x0000E8 - 0x0001D8)
struct FReAssignMaterialInCollectionDataflowNode : FDataflowNode
{ 
	FManagedArrayCollection                            Collection;                                                 // 0x00E8   (0x00B0)  
	FDataflowFaceSelection                             FaceSelection;                                              // 0x0198   (0x0020)  
	TArray<UMaterial*>                                 Materials;                                                  // 0x01B8   (0x0010)  
	int32_t                                            OutsideMaterialIdx;                                         // 0x01C8   (0x0004)  
	int32_t                                            InsideMaterialIdx;                                          // 0x01CC   (0x0004)  
	bool                                               bAssignOutsideMaterial;                                     // 0x01D0   (0x0001)  
	bool                                               bAssignInsideMaterial;                                      // 0x01D1   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x01D2   (0x0006)  MISSED
};

/// Struct /Script/GeometryCollectionNodes.MaterialsInfoDataflowNode
/// Size: 0x0020 (0x0000E8 - 0x000108)
struct FMaterialsInfoDataflowNode : FDataflowNode
{ 
	TArray<UMaterial*>                                 Materials;                                                  // 0x00E8   (0x0010)  
	FString                                            String;                                                     // 0x00F8   (0x0010)  
};

/// Struct /Script/GeometryCollectionNodes.GetMaterialFromMaterialsArrayDataflowNode
/// Size: 0x0020 (0x0000E8 - 0x000108)
struct FGetMaterialFromMaterialsArrayDataflowNode : FDataflowNode
{ 
	TArray<UMaterial*>                                 Materials;                                                  // 0x00E8   (0x0010)  
	UMaterial*                                         Material;                                                   // 0x00F8   (0x0008)  
	int32_t                                            MaterialIdx;                                                // 0x0100   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0104   (0x0004)  MISSED
};

/// Struct /Script/GeometryCollectionNodes.SetMaterialInMaterialsArrayDataflowNode
/// Size: 0x0020 (0x0000E8 - 0x000108)
struct FSetMaterialInMaterialsArrayDataflowNode : FDataflowNode
{ 
	TArray<UMaterial*>                                 Materials;                                                  // 0x00E8   (0x0010)  
	UMaterial*                                         Material;                                                   // 0x00F8   (0x0008)  
	ESetMaterialOperationTypeEnum                      Operation;                                                  // 0x0100   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0101   (0x0003)  MISSED
	int32_t                                            MaterialIdx;                                                // 0x0104   (0x0004)  
};

/// Struct /Script/GeometryCollectionNodes.MakeMaterialDataflowNode
/// Size: 0x0010 (0x0000E8 - 0x0000F8)
struct FMakeMaterialDataflowNode : FDataflowNode
{ 
	UMaterial*                                         InMaterial;                                                 // 0x00E8   (0x0008)  
	UMaterial*                                         Material;                                                   // 0x00F0   (0x0008)  
};

/// Struct /Script/GeometryCollectionNodes.MakeMaterialsArrayDataflowNode
/// Size: 0x0010 (0x0000E8 - 0x0000F8)
struct FMakeMaterialsArrayDataflowNode : FDataflowNode
{ 
	TArray<UMaterial*>                                 Materials;                                                  // 0x00E8   (0x0010)  
};

/// Struct /Script/GeometryCollectionNodes.CloseGeometryOnCollectionDataflowNode
/// Size: 0x00B0 (0x0000E8 - 0x000198)
struct FCloseGeometryOnCollectionDataflowNode : FDataflowNode
{ 
	FManagedArrayCollection                            Collection;                                                 // 0x00E8   (0x00B0)  
};

/// Struct /Script/GeometryCollectionNodes.SkeletonToCollectionDataflowNode
/// Size: 0x00B8 (0x0000E8 - 0x0001A0)
struct FSkeletonToCollectionDataflowNode : FDataflowNode
{ 
	USkeleton*                                         Skeleton;                                                   // 0x00E8   (0x0008)  
	FManagedArrayCollection                            Collection;                                                 // 0x00F0   (0x00B0)  
};

/// Struct /Script/GeometryCollectionNodes.CreateNonOverlappingConvexHullsDataflowNode
/// Size: 0x00C8 (0x0000E8 - 0x0001B0)
struct FCreateNonOverlappingConvexHullsDataflowNode : FDataflowNode
{ 
	FManagedArrayCollection                            Collection;                                                 // 0x00E8   (0x00B0)  
	float                                              CanRemoveFraction;                                          // 0x0198   (0x0004)  
	float                                              SimplificationDistanceThreshold;                            // 0x019C   (0x0004)  
	float                                              CanExceedFraction;                                          // 0x01A0   (0x0004)  
	EConvexOverlapRemovalMethodEnum                    OverlapRemovalMethod;                                       // 0x01A4   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x01A5   (0x0003)  MISSED
	float                                              OverlapRemovalShrinkPercent;                                // 0x01A8   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x01AC   (0x0004)  MISSED
};

/// Struct /Script/GeometryCollectionNodes.AutoClusterDataflowNode
/// Size: 0x00E8 (0x0000E8 - 0x0001D0)
struct FAutoClusterDataflowNode : FDataflowNode
{ 
	EClusterSizeMethodEnum                             ClusterSizeMethod;                                          // 0x00E8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00E9   (0x0003)  MISSED
	int32_t                                            ClusterSites;                                               // 0x00EC   (0x0004)  
	float                                              ClusterFraction;                                            // 0x00F0   (0x0004)  
	float                                              SiteSize;                                                   // 0x00F4   (0x0004)  
	bool                                               AutoCluster;                                                // 0x00F8   (0x0001)  
	bool                                               AvoidIsolated;                                              // 0x00F9   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x00FA   (0x0006)  MISSED
	FManagedArrayCollection                            Collection;                                                 // 0x0100   (0x00B0)  
	FDataflowTransformSelection                        TransformSelection;                                         // 0x01B0   (0x0020)  
};

/// Struct /Script/GeometryCollectionNodes.ClusterFlattenDataflowNode
/// Size: 0x00B0 (0x0000E8 - 0x000198)
struct FClusterFlattenDataflowNode : FDataflowNode
{ 
	FManagedArrayCollection                            Collection;                                                 // 0x00E8   (0x00B0)  
};

/// Struct /Script/GeometryCollectionNodes.PruneInCollectionDataflowNode
/// Size: 0x00D0 (0x0000E8 - 0x0001B8)
struct FPruneInCollectionDataflowNode : FDataflowNode
{ 
	FManagedArrayCollection                            Collection;                                                 // 0x00E8   (0x00B0)  
	FDataflowTransformSelection                        TransformSelection;                                         // 0x0198   (0x0020)  
};

/// Struct /Script/GeometryCollectionNodes.SetVisibilityInCollectionDataflowNode
/// Size: 0x00F8 (0x0000E8 - 0x0001E0)
struct FSetVisibilityInCollectionDataflowNode : FDataflowNode
{ 
	EVisibiltyOptionsEnum                              Visibility;                                                 // 0x00E8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x00E9   (0x0007)  MISSED
	FManagedArrayCollection                            Collection;                                                 // 0x00F0   (0x00B0)  
	FDataflowTransformSelection                        TransformSelection;                                         // 0x01A0   (0x0020)  
	FDataflowFaceSelection                             FaceSelection;                                              // 0x01C0   (0x0020)  
};

/// Struct /Script/GeometryCollectionNodes.MergeInCollectionDataflowNode
/// Size: 0x00D0 (0x0000E8 - 0x0001B8)
struct FMergeInCollectionDataflowNode : FDataflowNode
{ 
	FManagedArrayCollection                            Collection;                                                 // 0x00E8   (0x00B0)  
	FDataflowTransformSelection                        TransformSelection;                                         // 0x0198   (0x0020)  
};

/// Struct /Script/GeometryCollectionNodes.UniformScatterPointsDataflowNode
/// Size: 0x0058 (0x0000E8 - 0x000140)
struct FUniformScatterPointsDataflowNode : FDataflowNode
{ 
	int32_t                                            MinNumberOfPoints;                                          // 0x00E8   (0x0004)  
	int32_t                                            MaxNumberOfPoints;                                          // 0x00EC   (0x0004)  
	float                                              RandomSeed;                                                 // 0x00F0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00F4   (0x0004)  MISSED
	FBox                                               BoundingBox;                                                // 0x00F8   (0x0038)  
	TArray<FVector>                                    Points;                                                     // 0x0130   (0x0010)  
};

/// Struct /Script/GeometryCollectionNodes.RadialScatterPointsDataflowNode
/// Size: 0x0058 (0x0000E8 - 0x000140)
struct FRadialScatterPointsDataflowNode : FDataflowNode
{ 
	FVector                                            Center;                                                     // 0x00E8   (0x0018)  
	FVector                                            Normal;                                                     // 0x0100   (0x0018)  
	float                                              Radius;                                                     // 0x0118   (0x0004)  
	int32_t                                            AngularSteps;                                               // 0x011C   (0x0004)  
	int32_t                                            RadialSteps;                                                // 0x0120   (0x0004)  
	float                                              AngleOffset;                                                // 0x0124   (0x0004)  
	float                                              Variability;                                                // 0x0128   (0x0004)  
	float                                              RandomSeed;                                                 // 0x012C   (0x0004)  
	TArray<FVector>                                    Points;                                                     // 0x0130   (0x0010)  
};

/// Struct /Script/GeometryCollectionNodes.VoronoiFractureDataflowNode
/// Size: 0x0110 (0x0000E8 - 0x0001F8)
struct FVoronoiFractureDataflowNode : FDataflowNode
{ 
	FManagedArrayCollection                            Collection;                                                 // 0x00E8   (0x00B0)  
	TArray<FVector>                                    Points;                                                     // 0x0198   (0x0010)  
	FDataflowTransformSelection                        TransformSelection;                                         // 0x01A8   (0x0020)  
	float                                              RandomSeed;                                                 // 0x01C8   (0x0004)  
	float                                              ChanceToFracture;                                           // 0x01CC   (0x0004)  
	bool                                               GroupFracture;                                              // 0x01D0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x01D1   (0x0003)  MISSED
	float                                              Grout;                                                      // 0x01D4   (0x0004)  
	float                                              Amplitude;                                                  // 0x01D8   (0x0004)  
	float                                              Frequency;                                                  // 0x01DC   (0x0004)  
	float                                              Persistence;                                                // 0x01E0   (0x0004)  
	float                                              Lacunarity;                                                 // 0x01E4   (0x0004)  
	int32_t                                            OctaveNumber;                                               // 0x01E8   (0x0004)  
	float                                              PointSpacing;                                               // 0x01EC   (0x0004)  
	bool                                               AddSamplesForCollision;                                     // 0x01F0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x01F1   (0x0003)  MISSED
	float                                              CollisionSampleSpacing;                                     // 0x01F4   (0x0004)  
};

/// Struct /Script/GeometryCollectionNodes.PlaneCutterDataflowNode
/// Size: 0x0138 (0x0000E8 - 0x000220)
struct FPlaneCutterDataflowNode : FDataflowNode
{ 
	FManagedArrayCollection                            Collection;                                                 // 0x00E8   (0x00B0)  
	FBox                                               BoundingBox;                                                // 0x0198   (0x0038)  
	FDataflowTransformSelection                        TransformSelection;                                         // 0x01D0   (0x0020)  
	int32_t                                            NumPlanes;                                                  // 0x01F0   (0x0004)  
	float                                              RandomSeed;                                                 // 0x01F4   (0x0004)  
	float                                              Grout;                                                      // 0x01F8   (0x0004)  
	float                                              Amplitude;                                                  // 0x01FC   (0x0004)  
	float                                              Frequency;                                                  // 0x0200   (0x0004)  
	float                                              Persistence;                                                // 0x0204   (0x0004)  
	float                                              Lacunarity;                                                 // 0x0208   (0x0004)  
	int32_t                                            OctaveNumber;                                               // 0x020C   (0x0004)  
	float                                              PointSpacing;                                               // 0x0210   (0x0004)  
	bool                                               AddSamplesForCollision;                                     // 0x0214   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0215   (0x0003)  MISSED
	float                                              CollisionSampleSpacing;                                     // 0x0218   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x021C   (0x0004)  MISSED
};

/// Struct /Script/GeometryCollectionNodes.ExplodedViewDataflowNode
/// Size: 0x00D0 (0x0000E8 - 0x0001B8)
struct FExplodedViewDataflowNode : FDataflowNode
{ 
	FManagedArrayCollection                            Collection;                                                 // 0x00E8   (0x00B0)  
	float                                              UniformScale;                                               // 0x0198   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x019C   (0x0004)  MISSED
	FVector                                            Scale;                                                      // 0x01A0   (0x0018)  
};

/// Struct /Script/GeometryCollectionNodes.PointsToMeshDataflowNode
/// Size: 0x0020 (0x0000E8 - 0x000108)
struct FPointsToMeshDataflowNode : FDataflowNode
{ 
	TArray<FVector>                                    Points;                                                     // 0x00E8   (0x0010)  
	UDynamicMesh*                                      Mesh;                                                       // 0x00F8   (0x0008)  
	int32_t                                            TriangleCount;                                              // 0x0100   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0104   (0x0004)  MISSED
};

/// Struct /Script/GeometryCollectionNodes.BoxToMeshDataflowNode
/// Size: 0x0048 (0x0000E8 - 0x000130)
struct FBoxToMeshDataflowNode : FDataflowNode
{ 
	FBox                                               Box;                                                        // 0x00E8   (0x0038)  
	UDynamicMesh*                                      Mesh;                                                       // 0x0120   (0x0008)  
	int32_t                                            TriangleCount;                                              // 0x0128   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x012C   (0x0004)  MISSED
};

/// Struct /Script/GeometryCollectionNodes.MeshInfoDataflowNode
/// Size: 0x0018 (0x0000E8 - 0x000100)
struct FMeshInfoDataflowNode : FDataflowNode
{ 
	UDynamicMesh*                                      Mesh;                                                       // 0x00E8   (0x0008)  
	FString                                            InfoString;                                                 // 0x00F0   (0x0010)  
};

/// Struct /Script/GeometryCollectionNodes.MeshToCollectionDataflowNode
/// Size: 0x00B8 (0x0000E8 - 0x0001A0)
struct FMeshToCollectionDataflowNode : FDataflowNode
{ 
	UDynamicMesh*                                      Mesh;                                                       // 0x00E8   (0x0008)  
	FManagedArrayCollection                            Collection;                                                 // 0x00F0   (0x00B0)  
};

/// Struct /Script/GeometryCollectionNodes.CollectionToMeshDataflowNode
/// Size: 0x00C0 (0x0000E8 - 0x0001A8)
struct FCollectionToMeshDataflowNode : FDataflowNode
{ 
	FManagedArrayCollection                            Collection;                                                 // 0x00E8   (0x00B0)  
	bool                                               bCenterPivot;                                               // 0x0198   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0199   (0x0007)  MISSED
	UDynamicMesh*                                      Mesh;                                                       // 0x01A0   (0x0008)  
};

/// Struct /Script/GeometryCollectionNodes.StaticMeshToMeshDataflowNode
/// Size: 0x0018 (0x0000E8 - 0x000100)
struct FStaticMeshToMeshDataflowNode : FDataflowNode
{ 
	UStaticMesh*                                       StaticMesh;                                                 // 0x00E8   (0x0008)  
	bool                                               bUseHiRes;                                                  // 0x00F0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00F1   (0x0003)  MISSED
	int32_t                                            LODLevel;                                                   // 0x00F4   (0x0004)  
	UDynamicMesh*                                      Mesh;                                                       // 0x00F8   (0x0008)  
};

/// Struct /Script/GeometryCollectionNodes.MeshAppendDataflowNode
/// Size: 0x0018 (0x0000E8 - 0x000100)
struct FMeshAppendDataflowNode : FDataflowNode
{ 
	UDynamicMesh*                                      Mesh1;                                                      // 0x00E8   (0x0008)  
	UDynamicMesh*                                      Mesh2;                                                      // 0x00F0   (0x0008)  
	UDynamicMesh*                                      Mesh;                                                       // 0x00F8   (0x0008)  
};

/// Struct /Script/GeometryCollectionNodes.MeshBooleanDataflowNode
/// Size: 0x0020 (0x0000E8 - 0x000108)
struct FMeshBooleanDataflowNode : FDataflowNode
{ 
	EMeshBooleanOperationEnum                          Operation;                                                  // 0x00E8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x00E9   (0x0007)  MISSED
	UDynamicMesh*                                      Mesh1;                                                      // 0x00F0   (0x0008)  
	UDynamicMesh*                                      Mesh2;                                                      // 0x00F8   (0x0008)  
	UDynamicMesh*                                      Mesh;                                                       // 0x0100   (0x0008)  
};

/// Struct /Script/GeometryCollectionNodes.MeshCopyToPointsDataflowNode
/// Size: 0x0028 (0x0000E8 - 0x000110)
struct FMeshCopyToPointsDataflowNode : FDataflowNode
{ 
	TArray<FVector>                                    Points;                                                     // 0x00E8   (0x0010)  
	UDynamicMesh*                                      MeshToCopy;                                                 // 0x00F8   (0x0008)  
	float                                              Scale;                                                      // 0x0100   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0104   (0x0004)  MISSED
	UDynamicMesh*                                      Mesh;                                                       // 0x0108   (0x0008)  
};

/// Struct /Script/GeometryCollectionNodes.GetMeshDataDataflowNode
/// Size: 0x0018 (0x0000E8 - 0x000100)
struct FGetMeshDataDataflowNode : FDataflowNode
{ 
	UDynamicMesh*                                      Mesh;                                                       // 0x00E8   (0x0008)  
	int32_t                                            VertexCount;                                                // 0x00F0   (0x0004)  
	int32_t                                            EdgeCount;                                                  // 0x00F4   (0x0004)  
	int32_t                                            TriangleCount;                                              // 0x00F8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00FC   (0x0004)  MISSED
};

/// Struct /Script/GeometryCollectionNodes.GetCollectionFromAssetDataflowNode
/// Size: 0x00B8 (0x0000E8 - 0x0001A0)
struct FGetCollectionFromAssetDataflowNode : FDataflowNode
{ 
	UGeometryCollection*                               CollectionAsset;                                            // 0x00E8   (0x0008)  
	FManagedArrayCollection                            Collection;                                                 // 0x00F0   (0x00B0)  
};

/// Struct /Script/GeometryCollectionNodes.AppendCollectionAssetsDataflowNode
/// Size: 0x0180 (0x0000E8 - 0x000268)
struct FAppendCollectionAssetsDataflowNode : FDataflowNode
{ 
	FManagedArrayCollection                            Collection1;                                                // 0x00E8   (0x00B0)  
	FManagedArrayCollection                            Collection2;                                                // 0x0198   (0x00B0)  
	TArray<FString>                                    GeometryGroupGuidsOut1;                                     // 0x0248   (0x0010)  
	TArray<FString>                                    GeometryGroupGuidsOut2;                                     // 0x0258   (0x0010)  
};

/// Struct /Script/GeometryCollectionNodes.PrintStringDataflowNode
/// Size: 0x0020 (0x0000E8 - 0x000108)
struct FPrintStringDataflowNode : FDataflowNode
{ 
	bool                                               bPrintToScreen;                                             // 0x00E8   (0x0001)  
	bool                                               bPrintToLog;                                                // 0x00E9   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x00EA   (0x0002)  MISSED
	FColor                                             Color;                                                      // 0x00EC   (0x0004)  
	float                                              Duration;                                                   // 0x00F0   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x00F4   (0x0004)  MISSED
	FString                                            String;                                                     // 0x00F8   (0x0010)  
};

/// Struct /Script/GeometryCollectionNodes.LogStringDataflowNode
/// Size: 0x0018 (0x0000E8 - 0x000100)
struct FLogStringDataflowNode : FDataflowNode
{ 
	bool                                               bPrintToLog;                                                // 0x00E8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x00E9   (0x0007)  MISSED
	FString                                            String;                                                     // 0x00F0   (0x0010)  
};

/// Struct /Script/GeometryCollectionNodes.MakeLiteralStringDataflowNode
/// Size: 0x0020 (0x0000E8 - 0x000108)
struct FMakeLiteralStringDataflowNode : FDataflowNode
{ 
	FString                                            Value;                                                      // 0x00E8   (0x0010)  
	FString                                            String;                                                     // 0x00F8   (0x0010)  
};

/// Struct /Script/GeometryCollectionNodes.BoundingBoxDataflowNode
/// Size: 0x00E8 (0x0000E8 - 0x0001D0)
struct FBoundingBoxDataflowNode : FDataflowNode
{ 
	FManagedArrayCollection                            Collection;                                                 // 0x00E8   (0x00B0)  
	FBox                                               BoundingBox;                                                // 0x0198   (0x0038)  
};

/// Struct /Script/GeometryCollectionNodes.ExpandBoundingBoxDataflowNode
/// Size: 0x00A0 (0x0000E8 - 0x000188)
struct FExpandBoundingBoxDataflowNode : FDataflowNode
{ 
	FBox                                               BoundingBox;                                                // 0x00E8   (0x0038)  
	FVector                                            Min;                                                        // 0x0120   (0x0018)  
	FVector                                            Max;                                                        // 0x0138   (0x0018)  
	FVector                                            Center;                                                     // 0x0150   (0x0018)  
	FVector                                            HalfExtents;                                                // 0x0168   (0x0018)  
	float                                              Volume;                                                     // 0x0180   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0184   (0x0004)  MISSED
};

/// Struct /Script/GeometryCollectionNodes.VectorToStringDataflowNode
/// Size: 0x0028 (0x0000E8 - 0x000110)
struct FVectorToStringDataflowNode : FDataflowNode
{ 
	FVector                                            Vector;                                                     // 0x00E8   (0x0018)  
	FString                                            String;                                                     // 0x0100   (0x0010)  
};

/// Struct /Script/GeometryCollectionNodes.FloatToStringDataflowNode
/// Size: 0x0018 (0x0000E8 - 0x000100)
struct FFloatToStringDataflowNode : FDataflowNode
{ 
	float                                              float;                                                      // 0x00E8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00EC   (0x0004)  MISSED
	FString                                            String;                                                     // 0x00F0   (0x0010)  
};

/// Struct /Script/GeometryCollectionNodes.MakePointsDataflowNode
/// Size: 0x0020 (0x0000E8 - 0x000108)
struct FMakePointsDataflowNode : FDataflowNode
{ 
	TArray<FVector>                                    Point;                                                      // 0x00E8   (0x0010)  
	TArray<FVector>                                    Points;                                                     // 0x00F8   (0x0010)  
};

/// Struct /Script/GeometryCollectionNodes.MakeBoxDataflowNode
/// Size: 0x00A0 (0x0000E8 - 0x000188)
struct FMakeBoxDataflowNode : FDataflowNode
{ 
	EMakeBoxDataTypeEnum                               DataType;                                                   // 0x00E8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x00E9   (0x0007)  MISSED
	FVector                                            Min;                                                        // 0x00F0   (0x0018)  
	FVector                                            Max;                                                        // 0x0108   (0x0018)  
	FVector                                            Center;                                                     // 0x0120   (0x0018)  
	FVector                                            Size;                                                       // 0x0138   (0x0018)  
	FBox                                               Box;                                                        // 0x0150   (0x0038)  
};

/// Struct /Script/GeometryCollectionNodes.MakeSphereDataflowNode
/// Size: 0x0040 (0x0000E8 - 0x000128)
struct FMakeSphereDataflowNode : FDataflowNode
{ 
	FVector                                            Center;                                                     // 0x00E8   (0x0018)  
	float                                              Radius;                                                     // 0x0100   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0104   (0x0004)  MISSED
	FSphere                                            Sphere;                                                     // 0x0108   (0x0020)  
};

/// Struct /Script/GeometryCollectionNodes.MakeLiteralFloatDataflowNode
/// Size: 0x0008 (0x0000E8 - 0x0000F0)
struct FMakeLiteralFloatDataflowNode : FDataflowNode
{ 
	float                                              Value;                                                      // 0x00E8   (0x0004)  
	float                                              float;                                                      // 0x00EC   (0x0004)  
};

/// Struct /Script/GeometryCollectionNodes.MakeLiteralIntDataflowNode
/// Size: 0x0008 (0x0000E8 - 0x0000F0)
struct FMakeLiteralIntDataflowNode : FDataflowNode
{ 
	int32_t                                            Value;                                                      // 0x00E8   (0x0004)  
	int32_t                                            Int;                                                        // 0x00EC   (0x0004)  
};

/// Struct /Script/GeometryCollectionNodes.MakeLiteralBoolDataflowNode
/// Size: 0x0008 (0x0000E8 - 0x0000F0)
struct FMakeLiteralBoolDataflowNode : FDataflowNode
{ 
	bool                                               Value;                                                      // 0x00E8   (0x0001)  
	bool                                               bool;                                                       // 0x00E9   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x00EA   (0x0006)  MISSED
};

/// Struct /Script/GeometryCollectionNodes.MakeLiteralVectorDataflowNode
/// Size: 0x0028 (0x0000E8 - 0x000110)
struct FMakeLiteralVectorDataflowNode : FDataflowNode
{ 
	float                                              X;                                                          // 0x00E8   (0x0004)  
	float                                              Y;                                                          // 0x00EC   (0x0004)  
	float                                              Z;                                                          // 0x00F0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00F4   (0x0004)  MISSED
	FVector                                            Vector;                                                     // 0x00F8   (0x0018)  
};

/// Struct /Script/GeometryCollectionNodes.IntToStringDataflowNode
/// Size: 0x0018 (0x0000E8 - 0x000100)
struct FIntToStringDataflowNode : FDataflowNode
{ 
	int32_t                                            Int;                                                        // 0x00E8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00EC   (0x0004)  MISSED
	FString                                            String;                                                     // 0x00F0   (0x0010)  
};

/// Struct /Script/GeometryCollectionNodes.BoolToStringDataflowNode
/// Size: 0x0018 (0x0000E8 - 0x000100)
struct FBoolToStringDataflowNode : FDataflowNode
{ 
	bool                                               bool;                                                       // 0x00E8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x00E9   (0x0007)  MISSED
	FString                                            String;                                                     // 0x00F0   (0x0010)  
};

/// Struct /Script/GeometryCollectionNodes.ExpandVectorDataflowNode
/// Size: 0x0028 (0x0000E8 - 0x000110)
struct FExpandVectorDataflowNode : FDataflowNode
{ 
	FVector                                            Vector;                                                     // 0x00E8   (0x0018)  
	float                                              X;                                                          // 0x0100   (0x0004)  
	float                                              Y;                                                          // 0x0104   (0x0004)  
	float                                              Z;                                                          // 0x0108   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x010C   (0x0004)  MISSED
};

/// Struct /Script/GeometryCollectionNodes.IntToFloatDataflowNode
/// Size: 0x0008 (0x0000E8 - 0x0000F0)
struct FIntToFloatDataflowNode : FDataflowNode
{ 
	int32_t                                            Int;                                                        // 0x00E8   (0x0004)  
	float                                              float;                                                      // 0x00EC   (0x0004)  
};

/// Struct /Script/GeometryCollectionNodes.StringAppendDataflowNode
/// Size: 0x0030 (0x0000E8 - 0x000118)
struct FStringAppendDataflowNode : FDataflowNode
{ 
	FString                                            String1;                                                    // 0x00E8   (0x0010)  
	FString                                            String2;                                                    // 0x00F8   (0x0010)  
	FString                                            String;                                                     // 0x0108   (0x0010)  
};

/// Struct /Script/GeometryCollectionNodes.RandomFloatDataflowNode
/// Size: 0x0010 (0x0000E8 - 0x0000F8)
struct FRandomFloatDataflowNode : FDataflowNode
{ 
	bool                                               bDeterministic;                                             // 0x00E8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00E9   (0x0003)  MISSED
	float                                              RandomSeed;                                                 // 0x00EC   (0x0004)  
	float                                              float;                                                      // 0x00F0   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00F4   (0x0004)  MISSED
};

/// Struct /Script/GeometryCollectionNodes.RandomFloatInRangeDataflowNode
/// Size: 0x0018 (0x0000E8 - 0x000100)
struct FRandomFloatInRangeDataflowNode : FDataflowNode
{ 
	bool                                               bDeterministic;                                             // 0x00E8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00E9   (0x0003)  MISSED
	float                                              RandomSeed;                                                 // 0x00EC   (0x0004)  
	float                                              Min;                                                        // 0x00F0   (0x0004)  
	float                                              Max;                                                        // 0x00F4   (0x0004)  
	float                                              float;                                                      // 0x00F8   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00FC   (0x0004)  MISSED
};

/// Struct /Script/GeometryCollectionNodes.RandomUnitVectorDataflowNode
/// Size: 0x0020 (0x0000E8 - 0x000108)
struct FRandomUnitVectorDataflowNode : FDataflowNode
{ 
	bool                                               bDeterministic;                                             // 0x00E8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00E9   (0x0003)  MISSED
	float                                              RandomSeed;                                                 // 0x00EC   (0x0004)  
	FVector                                            Vector;                                                     // 0x00F0   (0x0018)  
};

/// Struct /Script/GeometryCollectionNodes.RandomUnitVectorInConeDataflowNode
/// Size: 0x0040 (0x0000E8 - 0x000128)
struct FRandomUnitVectorInConeDataflowNode : FDataflowNode
{ 
	bool                                               bDeterministic;                                             // 0x00E8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00E9   (0x0003)  MISSED
	float                                              RandomSeed;                                                 // 0x00EC   (0x0004)  
	FVector                                            ConeDirection;                                              // 0x00F0   (0x0018)  
	float                                              ConeHalfAngle;                                              // 0x0108   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x010C   (0x0004)  MISSED
	FVector                                            Vector;                                                     // 0x0110   (0x0018)  
};

/// Struct /Script/GeometryCollectionNodes.RadiansToDegreesDataflowNode
/// Size: 0x0008 (0x0000E8 - 0x0000F0)
struct FRadiansToDegreesDataflowNode : FDataflowNode
{ 
	float                                              Radians;                                                    // 0x00E8   (0x0004)  
	float                                              Degrees;                                                    // 0x00EC   (0x0004)  
};

/// Struct /Script/GeometryCollectionNodes.DegreesToRadiansDataflowNode
/// Size: 0x0008 (0x0000E8 - 0x0000F0)
struct FDegreesToRadiansDataflowNode : FDataflowNode
{ 
	float                                              Degrees;                                                    // 0x00E8   (0x0004)  
	float                                              Radians;                                                    // 0x00EC   (0x0004)  
};

/// Struct /Script/GeometryCollectionNodes.HashStringDataflowNode
/// Size: 0x0018 (0x0000E8 - 0x000100)
struct FHashStringDataflowNode : FDataflowNode
{ 
	FString                                            String;                                                     // 0x00E8   (0x0010)  
	int32_t                                            Hash;                                                       // 0x00F8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00FC   (0x0004)  MISSED
};

/// Struct /Script/GeometryCollectionNodes.HashVectorDataflowNode
/// Size: 0x0020 (0x0000E8 - 0x000108)
struct FHashVectorDataflowNode : FDataflowNode
{ 
	FVector                                            Vector;                                                     // 0x00E8   (0x0018)  
	int32_t                                            Hash;                                                       // 0x0100   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0104   (0x0004)  MISSED
};

/// Struct /Script/GeometryCollectionNodes.FloatToIntDataflowNode
/// Size: 0x0010 (0x0000E8 - 0x0000F8)
struct FFloatToIntDataflowNode : FDataflowNode
{ 
	EFloatToIntFunctionEnum                            Function;                                                   // 0x00E8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00E9   (0x0003)  MISSED
	float                                              float;                                                      // 0x00EC   (0x0004)  
	int32_t                                            Int;                                                        // 0x00F0   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00F4   (0x0004)  MISSED
};

/// Struct /Script/GeometryCollectionNodes.FloatArrayToIntArrayDataflowNode
/// Size: 0x0028 (0x0000E8 - 0x000110)
struct FFloatArrayToIntArrayDataflowNode : FDataflowNode
{ 
	EFloatArrayToIntArrayFunctionEnum                  Function;                                                   // 0x00E8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x00E9   (0x0007)  MISSED
	TArray<float>                                      FloatArray;                                                 // 0x00F0   (0x0010)  
	TArray<int32_t>                                    IntArray;                                                   // 0x0100   (0x0010)  
};

/// Struct /Script/GeometryCollectionNodes.MathConstantsDataflowNode
/// Size: 0x0008 (0x0000E8 - 0x0000F0)
struct FMathConstantsDataflowNode : FDataflowNode
{ 
	EMathConstantsEnum                                 Constant;                                                   // 0x00E8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00E9   (0x0003)  MISSED
	float                                              float;                                                      // 0x00EC   (0x0004)  
};

/// Struct /Script/GeometryCollectionNodes.GetArrayElementDataflowNode
/// Size: 0x0030 (0x0000E8 - 0x000118)
struct FGetArrayElementDataflowNode : FDataflowNode
{ 
	int32_t                                            Index;                                                      // 0x00E8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00EC   (0x0004)  MISSED
	TArray<FVector>                                    Points;                                                     // 0x00F0   (0x0010)  
	FVector                                            Point;                                                      // 0x0100   (0x0018)  
};

/// Struct /Script/GeometryCollectionNodes.GetNumArrayElementsDataflowNode
/// Size: 0x0028 (0x0000E8 - 0x000110)
struct FGetNumArrayElementsDataflowNode : FDataflowNode
{ 
	TArray<FVector>                                    Points;                                                     // 0x00E8   (0x0010)  
	TArray<FVector3f>                                  Vector3fArray;                                              // 0x00F8   (0x0010)  
	int32_t                                            NumElements;                                                // 0x0108   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x010C   (0x0004)  MISSED
};

/// Struct /Script/GeometryCollectionNodes.GetBoundingBoxesFromCollectionDataflowNode
/// Size: 0x00E0 (0x0000E8 - 0x0001C8)
struct FGetBoundingBoxesFromCollectionDataflowNode : FDataflowNode
{ 
	FManagedArrayCollection                            Collection;                                                 // 0x00E8   (0x00B0)  
	FDataflowTransformSelection                        TransformSelection;                                         // 0x0198   (0x0020)  
	TArray<FBox>                                       BoundingBoxes;                                              // 0x01B8   (0x0010)  
};

/// Struct /Script/GeometryCollectionNodes.GetCentroidsFromCollectionDataflowNode
/// Size: 0x00E0 (0x0000E8 - 0x0001C8)
struct FGetCentroidsFromCollectionDataflowNode : FDataflowNode
{ 
	FManagedArrayCollection                            Collection;                                                 // 0x00E8   (0x00B0)  
	FDataflowTransformSelection                        TransformSelection;                                         // 0x0198   (0x0020)  
	TArray<FVector>                                    Centroids;                                                  // 0x01B8   (0x0010)  
};

/// Struct /Script/GeometryCollectionNodes.TransformCollectionDataflowNode
/// Size: 0x0140 (0x0000E8 - 0x000228)
struct FTransformCollectionDataflowNode : FDataflowNode
{ 
	FManagedArrayCollection                            Collection;                                                 // 0x00E8   (0x00B0)  
	FVector                                            Translate;                                                  // 0x0198   (0x0018)  
	ERotationOrderEnum                                 RotationOrder;                                              // 0x01B0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x01B1   (0x0007)  MISSED
	FVector                                            Rotate;                                                     // 0x01B8   (0x0018)  
	FVector                                            Scale;                                                      // 0x01D0   (0x0018)  
	float                                              UniformScale;                                               // 0x01E8   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x01EC   (0x0004)  MISSED
	FVector                                            RotatePivot;                                                // 0x01F0   (0x0018)  
	FVector                                            ScalePivot;                                                 // 0x0208   (0x0018)  
	bool                                               bInvertTransformation;                                      // 0x0220   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0221   (0x0007)  MISSED
};

/// Struct /Script/GeometryCollectionNodes.BakeTransformsInCollectionDataflowNode
/// Size: 0x00B0 (0x0000E8 - 0x000198)
struct FBakeTransformsInCollectionDataflowNode : FDataflowNode
{ 
	FManagedArrayCollection                            Collection;                                                 // 0x00E8   (0x00B0)  
};

/// Struct /Script/GeometryCollectionNodes.TransformMeshDataflowNode
/// Size: 0x0098 (0x0000E8 - 0x000180)
struct FTransformMeshDataflowNode : FDataflowNode
{ 
	UDynamicMesh*                                      Mesh;                                                       // 0x00E8   (0x0008)  
	FVector                                            Translate;                                                  // 0x00F0   (0x0018)  
	ERotationOrderEnum                                 RotationOrder;                                              // 0x0108   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0109   (0x0007)  MISSED
	FVector                                            Rotate;                                                     // 0x0110   (0x0018)  
	FVector                                            Scale;                                                      // 0x0128   (0x0018)  
	float                                              UniformScale;                                               // 0x0140   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0144   (0x0004)  MISSED
	FVector                                            RotatePivot;                                                // 0x0148   (0x0018)  
	FVector                                            ScalePivot;                                                 // 0x0160   (0x0018)  
	bool                                               bInvertTransformation;                                      // 0x0178   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0179   (0x0007)  MISSED
};

/// Struct /Script/GeometryCollectionNodes.CompareIntDataflowNode
/// Size: 0x0010 (0x0000E8 - 0x0000F8)
struct FCompareIntDataflowNode : FDataflowNode
{ 
	ECompareOperationEnum                              Operation;                                                  // 0x00E8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00E9   (0x0003)  MISSED
	int32_t                                            IntA;                                                       // 0x00EC   (0x0004)  
	int32_t                                            IntB;                                                       // 0x00F0   (0x0004)  
	bool                                               Result;                                                     // 0x00F4   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x00F5   (0x0003)  MISSED
};

/// Struct /Script/GeometryCollectionNodes.BranchDataflowNode
/// Size: 0x0020 (0x0000E8 - 0x000108)
struct FBranchDataflowNode : FDataflowNode
{ 
	UDynamicMesh*                                      MeshA;                                                      // 0x00E8   (0x0008)  
	UDynamicMesh*                                      MeshB;                                                      // 0x00F0   (0x0008)  
	bool                                               bCondition;                                                 // 0x00F8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x00F9   (0x0007)  MISSED
	UDynamicMesh*                                      Mesh;                                                       // 0x0100   (0x0008)  
};

/// Struct /Script/GeometryCollectionNodes.GetSchemaDataflowNode
/// Size: 0x00C0 (0x0000E8 - 0x0001A8)
struct FGetSchemaDataflowNode : FDataflowNode
{ 
	FManagedArrayCollection                            Collection;                                                 // 0x00E8   (0x00B0)  
	FString                                            String;                                                     // 0x0198   (0x0010)  
};

/// Struct /Script/GeometryCollectionNodes.RemoveOnBreakDataflowNode
/// Size: 0x00E8 (0x0000E8 - 0x0001D0)
struct FRemoveOnBreakDataflowNode : FDataflowNode
{ 
	FManagedArrayCollection                            Collection;                                                 // 0x00E8   (0x00B0)  
	FDataflowTransformSelection                        TransformSelection;                                         // 0x0198   (0x0020)  
	bool                                               bEnabledRemoval;                                            // 0x01B8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x01B9   (0x0003)  MISSED
	FVector2f                                          PostBreakTimer;                                             // 0x01BC   (0x0008)  
	FVector2f                                          RemovalTimer;                                               // 0x01C4   (0x0008)  
	bool                                               bClusterCrumbling;                                          // 0x01CC   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x01CD   (0x0003)  MISSED
};

/// Struct /Script/GeometryCollectionNodes.SetAnchorStateDataflowNode
/// Size: 0x00D8 (0x0000E8 - 0x0001C0)
struct FSetAnchorStateDataflowNode : FDataflowNode
{ 
	EAnchorStateEnum                                   AnchorState;                                                // 0x00E8   (0x0001)  
	bool                                               bSetNotSelectedBonesToOppositeState;                        // 0x00E9   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x00EA   (0x0006)  MISSED
	FManagedArrayCollection                            Collection;                                                 // 0x00F0   (0x00B0)  
	FDataflowTransformSelection                        TransformSelection;                                         // 0x01A0   (0x0020)  
};

/// Struct /Script/GeometryCollectionNodes.ProximityDataflowNode
/// Size: 0x00C0 (0x0000E8 - 0x0001A8)
struct FProximityDataflowNode : FDataflowNode
{ 
	EProximityMethodEnum                               ProximityMethod;                                            // 0x00E8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00E9   (0x0003)  MISSED
	float                                              DistanceThreshold;                                          // 0x00EC   (0x0004)  
	float                                              ContactThreshold;                                           // 0x00F0   (0x0004)  
	bool                                               bUseAsConnectionGraph;                                      // 0x00F4   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x00F5   (0x0003)  MISSED
	FManagedArrayCollection                            Collection;                                                 // 0x00F8   (0x00B0)  
};

/// Struct /Script/GeometryCollectionNodes.CollectionSetPivotDataflowNode
/// Size: 0x0118 (0x0000E8 - 0x000200)
struct FCollectionSetPivotDataflowNode : FDataflowNode
{ 
	FManagedArrayCollection                            Collection;                                                 // 0x00E8   (0x00B0)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0198   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x01A0   (0x0060)  
};

/// Struct /Script/GeometryCollectionNodes.AddCustomCollectionAttributeDataflowNode
/// Size: 0x00E0 (0x0000E8 - 0x0001C8)
struct FAddCustomCollectionAttributeDataflowNode : FDataflowNode
{ 
	FManagedArrayCollection                            Collection;                                                 // 0x00E8   (0x00B0)  
	EStandardGroupNameEnum                             GroupName;                                                  // 0x0198   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0199   (0x0007)  MISSED
	FString                                            CustomGroupName;                                            // 0x01A0   (0x0010)  
	FString                                            AttrName;                                                   // 0x01B0   (0x0010)  
	ECustomAttributeTypeEnum                           CustomAttributeType;                                        // 0x01C0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x01C1   (0x0003)  MISSED
	int32_t                                            NumElements;                                                // 0x01C4   (0x0004)  
};

/// Struct /Script/GeometryCollectionNodes.GetNumElementsInCollectionGroupDataflowNode
/// Size: 0x00D0 (0x0000E8 - 0x0001B8)
struct FGetNumElementsInCollectionGroupDataflowNode : FDataflowNode
{ 
	FManagedArrayCollection                            Collection;                                                 // 0x00E8   (0x00B0)  
	EStandardGroupNameEnum                             GroupName;                                                  // 0x0198   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0199   (0x0007)  MISSED
	FString                                            CustomGroupName;                                            // 0x01A0   (0x0010)  
	int32_t                                            NumElements;                                                // 0x01B0   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x01B4   (0x0004)  MISSED
};

/// Struct /Script/GeometryCollectionNodes.GetCollectionAttributeDataTypedDataflowNode
/// Size: 0x0148 (0x0000E8 - 0x000230)
struct FGetCollectionAttributeDataTypedDataflowNode : FDataflowNode
{ 
	FManagedArrayCollection                            Collection;                                                 // 0x00E8   (0x00B0)  
	EStandardGroupNameEnum                             GroupName;                                                  // 0x0198   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0199   (0x0007)  MISSED
	FString                                            CustomGroupName;                                            // 0x01A0   (0x0010)  
	FString                                            AttrName;                                                   // 0x01B0   (0x0010)  
	TArray<bool>                                       BoolAttributeData;                                          // 0x01C0   (0x0010)  
	TArray<float>                                      FloatAttributeData;                                         // 0x01D0   (0x0010)  
	TArray<double>                                     DoubleAttributeData;                                        // 0x01E0   (0x0010)  
	TArray<int32_t>                                    Int32AttributeData;                                         // 0x01F0   (0x0010)  
	TArray<FString>                                    StringAttributeData;                                        // 0x0200   (0x0010)  
	TArray<FVector3f>                                  Vector3fAttributeData;                                      // 0x0210   (0x0010)  
	TArray<FVector3d>                                  Vector3dAttributeData;                                      // 0x0220   (0x0010)  
};

/// Struct /Script/GeometryCollectionNodes.SetCollectionAttributeDataTypedDataflowNode
/// Size: 0x0148 (0x0000E8 - 0x000230)
struct FSetCollectionAttributeDataTypedDataflowNode : FDataflowNode
{ 
	FManagedArrayCollection                            Collection;                                                 // 0x00E8   (0x00B0)  
	EStandardGroupNameEnum                             GroupName;                                                  // 0x0198   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0199   (0x0007)  MISSED
	FString                                            CustomGroupName;                                            // 0x01A0   (0x0010)  
	FString                                            AttrName;                                                   // 0x01B0   (0x0010)  
	TArray<bool>                                       BoolAttributeData;                                          // 0x01C0   (0x0010)  
	TArray<float>                                      FloatAttributeData;                                         // 0x01D0   (0x0010)  
	TArray<double>                                     DoubleAttributeData;                                        // 0x01E0   (0x0010)  
	TArray<int32_t>                                    Int32AttributeData;                                         // 0x01F0   (0x0010)  
	TArray<FString>                                    StringAttributeData;                                        // 0x0200   (0x0010)  
	TArray<FVector3f>                                  Vector3fAttributeData;                                      // 0x0210   (0x0010)  
	TArray<FVector3d>                                  Vector3dAttributeData;                                      // 0x0220   (0x0010)  
};

/// Struct /Script/GeometryCollectionNodes.BoolArrayToFaceSelectionDataflowNode
/// Size: 0x0030 (0x0000E8 - 0x000118)
struct FBoolArrayToFaceSelectionDataflowNode : FDataflowNode
{ 
	TArray<bool>                                       BoolAttributeData;                                          // 0x00E8   (0x0010)  
	FDataflowFaceSelection                             FaceSelection;                                              // 0x00F8   (0x0020)  
};

/// Struct /Script/GeometryCollectionNodes.FloatArrayToVertexSelectionDataflowNode
/// Size: 0x0038 (0x0000E8 - 0x000120)
struct FFloatArrayToVertexSelectionDataflowNode : FDataflowNode
{ 
	TArray<float>                                      FloatArray;                                                 // 0x00E8   (0x0010)  
	ECompareOperationEnum                              Operation;                                                  // 0x00F8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00F9   (0x0003)  MISSED
	float                                              Threshold;                                                  // 0x00FC   (0x0004)  
	FDataflowVertexSelection                           VertexSelection;                                            // 0x0100   (0x0020)  
};

/// Struct /Script/GeometryCollectionNodes.SetVertexColorInCollectionFromVertexSelectionDataflowNode
/// Size: 0x00F0 (0x0000E8 - 0x0001D8)
struct FSetVertexColorInCollectionFromVertexSelectionDataflowNode : FDataflowNode
{ 
	FManagedArrayCollection                            Collection;                                                 // 0x00E8   (0x00B0)  
	FDataflowVertexSelection                           VertexSelection;                                            // 0x0198   (0x0020)  
	FLinearColor                                       SelectedColor;                                              // 0x01B8   (0x0010)  
	FLinearColor                                       NonSelectedColor;                                           // 0x01C8   (0x0010)  
};

/// Struct /Script/GeometryCollectionNodes.SelectionToVertexListDataflowNode
/// Size: 0x0030 (0x0000E8 - 0x000118)
struct FSelectionToVertexListDataflowNode : FDataflowNode
{ 
	FDataflowVertexSelection                           VertexSelection;                                            // 0x00E8   (0x0020)  
	TArray<int32_t>                                    VertexList;                                                 // 0x0108   (0x0010)  
};

/// Struct /Script/GeometryCollectionNodes.MakeTransformDataflowNode
/// Size: 0x00A8 (0x0000E8 - 0x000190)
struct FMakeTransformDataflowNode : FDataflowNode
{ 
	FVector                                            InTranslation;                                              // 0x00E8   (0x0018)  
	FVector                                            InRotation;                                                 // 0x0100   (0x0018)  
	FVector                                            InScale;                                                    // 0x0118   (0x0018)  
	FTransform                                         OutTransform;                                               // 0x0130   (0x0060)  
};

/// Struct /Script/GeometryCollectionNodes.SetVertexColorInCollectionFromFloatArrayDataflowNode
/// Size: 0x00C8 (0x0000E8 - 0x0001B0)
struct FSetVertexColorInCollectionFromFloatArrayDataflowNode : FDataflowNode
{ 
	FManagedArrayCollection                            Collection;                                                 // 0x00E8   (0x00B0)  
	TArray<float>                                      FloatArray;                                                 // 0x0198   (0x0010)  
	float                                              Scale;                                                      // 0x01A8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x01AC   (0x0004)  MISSED
};

/// Struct /Script/GeometryCollectionNodes.FloatArrayNormalizeDataflowNode
/// Size: 0x0048 (0x0000E8 - 0x000130)
struct FFloatArrayNormalizeDataflowNode : FDataflowNode
{ 
	TArray<float>                                      InFloatArray;                                               // 0x00E8   (0x0010)  
	FDataflowVertexSelection                           Selection;                                                  // 0x00F8   (0x0020)  
	float                                              MinRange;                                                   // 0x0118   (0x0004)  
	float                                              MaxRange;                                                   // 0x011C   (0x0004)  
	TArray<float>                                      OutFloatArray;                                              // 0x0120   (0x0010)  
};

/// Struct /Script/GeometryCollectionNodes.VectorArrayNormalizeDataflowNode
/// Size: 0x0048 (0x0000E8 - 0x000130)
struct FVectorArrayNormalizeDataflowNode : FDataflowNode
{ 
	TArray<FVector>                                    InVectorArray;                                              // 0x00E8   (0x0010)  
	FDataflowVertexSelection                           Selection;                                                  // 0x00F8   (0x0020)  
	float                                              Magnitude;                                                  // 0x0118   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x011C   (0x0004)  MISSED
	TArray<FVector>                                    OutVectorArray;                                             // 0x0120   (0x0010)  
};

/// Struct /Script/GeometryCollectionNodes.MultiplyTransformDataflowNode
/// Size: 0x0128 (0x0000E8 - 0x000210)
struct FMultiplyTransformDataflowNode : FDataflowNode
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x00E8   (0x0008)  MISSED
	FTransform                                         InLeftTransform;                                            // 0x00F0   (0x0060)  
	FTransform                                         InRightTransform;                                           // 0x0150   (0x0060)  
	FTransform                                         OutTransform;                                               // 0x01B0   (0x0060)  
};

/// Struct /Script/GeometryCollectionNodes.InvertTransformDataflowNode
/// Size: 0x00C8 (0x0000E8 - 0x0001B0)
struct FInvertTransformDataflowNode : FDataflowNode
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x00E8   (0x0008)  MISSED
	FTransform                                         InTransform;                                                // 0x00F0   (0x0060)  
	FTransform                                         OutTransform;                                               // 0x0150   (0x0060)  
};

/// Struct /Script/GeometryCollectionNodes.UnionIntArraysDataflowNode
/// Size: 0x0030 (0x0000E8 - 0x000118)
struct FUnionIntArraysDataflowNode : FDataflowNode
{ 
	TArray<int32_t>                                    InArray1;                                                   // 0x00E8   (0x0010)  
	TArray<int32_t>                                    InArray2;                                                   // 0x00F8   (0x0010)  
	TArray<int32_t>                                    OutArray;                                                   // 0x0108   (0x0010)  
};

/// Struct /Script/GeometryCollectionNodes.MakeQuaternionDataflowNode
/// Size: 0x0038 (0x0000E8 - 0x000120)
struct FMakeQuaternionDataflowNode : FDataflowNode
{ 
	float                                              X;                                                          // 0x00E8   (0x0004)  
	float                                              Y;                                                          // 0x00EC   (0x0004)  
	float                                              Z;                                                          // 0x00F0   (0x0004)  
	float                                              W;                                                          // 0x00F4   (0x0004)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x00F8   (0x0008)  MISSED
	FQuat                                              Quaternion;                                                 // 0x0100   (0x0020)  
};

/// Struct /Script/GeometryCollectionNodes.CollectionTransformSelectionAllDataflowNode
/// Size: 0x00D0 (0x0000E8 - 0x0001B8)
struct FCollectionTransformSelectionAllDataflowNode : FDataflowNode
{ 
	FManagedArrayCollection                            Collection;                                                 // 0x00E8   (0x00B0)  
	FDataflowTransformSelection                        TransformSelection;                                         // 0x0198   (0x0020)  
};

/// Struct /Script/GeometryCollectionNodes.CollectionTransformSelectionSetOperationDataflowNode
/// Size: 0x0068 (0x0000E8 - 0x000150)
struct FCollectionTransformSelectionSetOperationDataflowNode : FDataflowNode
{ 
	ESetOperationEnum                                  Operation;                                                  // 0x00E8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x00E9   (0x0007)  MISSED
	FDataflowTransformSelection                        TransformSelectionA;                                        // 0x00F0   (0x0020)  
	FDataflowTransformSelection                        TransformSelectionB;                                        // 0x0110   (0x0020)  
	FDataflowTransformSelection                        TransformSelection;                                         // 0x0130   (0x0020)  
};

/// Struct /Script/GeometryCollectionNodes.CollectionTransformSelectionInfoDataflowNode
/// Size: 0x00E0 (0x0000E8 - 0x0001C8)
struct FCollectionTransformSelectionInfoDataflowNode : FDataflowNode
{ 
	FDataflowTransformSelection                        TransformSelection;                                         // 0x00E8   (0x0020)  
	FManagedArrayCollection                            Collection;                                                 // 0x0108   (0x00B0)  
	FString                                            String;                                                     // 0x01B8   (0x0010)  
};

/// Struct /Script/GeometryCollectionNodes.CollectionTransformSelectionNoneDataflowNode
/// Size: 0x00D0 (0x0000E8 - 0x0001B8)
struct FCollectionTransformSelectionNoneDataflowNode : FDataflowNode
{ 
	FManagedArrayCollection                            Collection;                                                 // 0x00E8   (0x00B0)  
	FDataflowTransformSelection                        TransformSelection;                                         // 0x0198   (0x0020)  
};

/// Struct /Script/GeometryCollectionNodes.CollectionTransformSelectionInvertDataflowNode
/// Size: 0x0020 (0x0000E8 - 0x000108)
struct FCollectionTransformSelectionInvertDataflowNode : FDataflowNode
{ 
	FDataflowTransformSelection                        TransformSelection;                                         // 0x00E8   (0x0020)  
};

/// Struct /Script/GeometryCollectionNodes.CollectionTransformSelectionRandomDataflowNode
/// Size: 0x00E0 (0x0000E8 - 0x0001C8)
struct FCollectionTransformSelectionRandomDataflowNode : FDataflowNode
{ 
	bool                                               bDeterministic;                                             // 0x00E8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00E9   (0x0003)  MISSED
	float                                              RandomSeed;                                                 // 0x00EC   (0x0004)  
	float                                              RandomThreshold;                                            // 0x00F0   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x00F4   (0x0004)  MISSED
	FManagedArrayCollection                            Collection;                                                 // 0x00F8   (0x00B0)  
	FDataflowTransformSelection                        TransformSelection;                                         // 0x01A8   (0x0020)  
};

/// Struct /Script/GeometryCollectionNodes.CollectionTransformSelectionRootDataflowNode
/// Size: 0x00D0 (0x0000E8 - 0x0001B8)
struct FCollectionTransformSelectionRootDataflowNode : FDataflowNode
{ 
	FManagedArrayCollection                            Collection;                                                 // 0x00E8   (0x00B0)  
	FDataflowTransformSelection                        TransformSelection;                                         // 0x0198   (0x0020)  
};

/// Struct /Script/GeometryCollectionNodes.CollectionTransformSelectionCustomDataflowNode
/// Size: 0x00E0 (0x0000E8 - 0x0001C8)
struct FCollectionTransformSelectionCustomDataflowNode : FDataflowNode
{ 
	FManagedArrayCollection                            Collection;                                                 // 0x00E8   (0x00B0)  
	FString                                            BoneIndicies;                                               // 0x0198   (0x0010)  
	FDataflowTransformSelection                        TransformSelection;                                         // 0x01A8   (0x0020)  
};

/// Struct /Script/GeometryCollectionNodes.CollectionTransformSelectionParentDataflowNode
/// Size: 0x00D0 (0x0000E8 - 0x0001B8)
struct FCollectionTransformSelectionParentDataflowNode : FDataflowNode
{ 
	FDataflowTransformSelection                        TransformSelection;                                         // 0x00E8   (0x0020)  
	FManagedArrayCollection                            Collection;                                                 // 0x0108   (0x00B0)  
};

/// Struct /Script/GeometryCollectionNodes.CollectionTransformSelectionByPercentageDataflowNode
/// Size: 0x0030 (0x0000E8 - 0x000118)
struct FCollectionTransformSelectionByPercentageDataflowNode : FDataflowNode
{ 
	FDataflowTransformSelection                        TransformSelection;                                         // 0x00E8   (0x0020)  
	int32_t                                            Percentage;                                                 // 0x0108   (0x0004)  
	bool                                               bDeterministic;                                             // 0x010C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x010D   (0x0003)  MISSED
	float                                              RandomSeed;                                                 // 0x0110   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0114   (0x0004)  MISSED
};

/// Struct /Script/GeometryCollectionNodes.CollectionTransformSelectionChildrenDataflowNode
/// Size: 0x00D0 (0x0000E8 - 0x0001B8)
struct FCollectionTransformSelectionChildrenDataflowNode : FDataflowNode
{ 
	FDataflowTransformSelection                        TransformSelection;                                         // 0x00E8   (0x0020)  
	FManagedArrayCollection                            Collection;                                                 // 0x0108   (0x00B0)  
};

/// Struct /Script/GeometryCollectionNodes.CollectionTransformSelectionSiblingsDataflowNode
/// Size: 0x00D0 (0x0000E8 - 0x0001B8)
struct FCollectionTransformSelectionSiblingsDataflowNode : FDataflowNode
{ 
	FDataflowTransformSelection                        TransformSelection;                                         // 0x00E8   (0x0020)  
	FManagedArrayCollection                            Collection;                                                 // 0x0108   (0x00B0)  
};

/// Struct /Script/GeometryCollectionNodes.CollectionTransformSelectionLevelDataflowNode
/// Size: 0x00D0 (0x0000E8 - 0x0001B8)
struct FCollectionTransformSelectionLevelDataflowNode : FDataflowNode
{ 
	FDataflowTransformSelection                        TransformSelection;                                         // 0x00E8   (0x0020)  
	FManagedArrayCollection                            Collection;                                                 // 0x0108   (0x00B0)  
};

/// Struct /Script/GeometryCollectionNodes.CollectionTransformSelectionContactDataflowNode
/// Size: 0x00D0 (0x0000E8 - 0x0001B8)
struct FCollectionTransformSelectionContactDataflowNode : FDataflowNode
{ 
	FDataflowTransformSelection                        TransformSelection;                                         // 0x00E8   (0x0020)  
	FManagedArrayCollection                            Collection;                                                 // 0x0108   (0x00B0)  
};

/// Struct /Script/GeometryCollectionNodes.CollectionTransformSelectionLeafDataflowNode
/// Size: 0x00D0 (0x0000E8 - 0x0001B8)
struct FCollectionTransformSelectionLeafDataflowNode : FDataflowNode
{ 
	FManagedArrayCollection                            Collection;                                                 // 0x00E8   (0x00B0)  
	FDataflowTransformSelection                        TransformSelection;                                         // 0x0198   (0x0020)  
};

/// Struct /Script/GeometryCollectionNodes.CollectionTransformSelectionClusterDataflowNode
/// Size: 0x00D0 (0x0000E8 - 0x0001B8)
struct FCollectionTransformSelectionClusterDataflowNode : FDataflowNode
{ 
	FManagedArrayCollection                            Collection;                                                 // 0x00E8   (0x00B0)  
	FDataflowTransformSelection                        TransformSelection;                                         // 0x0198   (0x0020)  
};

/// Struct /Script/GeometryCollectionNodes.CollectionTransformSelectionBySizeDataflowNode
/// Size: 0x00E0 (0x0000E8 - 0x0001C8)
struct FCollectionTransformSelectionBySizeDataflowNode : FDataflowNode
{ 
	FManagedArrayCollection                            Collection;                                                 // 0x00E8   (0x00B0)  
	float                                              SizeMin;                                                    // 0x0198   (0x0004)  
	float                                              SizeMax;                                                    // 0x019C   (0x0004)  
	ERangeSettingEnum                                  RangeSetting;                                               // 0x01A0   (0x0001)  
	bool                                               bInclusive;                                                 // 0x01A1   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x01A2   (0x0006)  MISSED
	FDataflowTransformSelection                        TransformSelection;                                         // 0x01A8   (0x0020)  
};

/// Struct /Script/GeometryCollectionNodes.CollectionTransformSelectionByVolumeDataflowNode
/// Size: 0x00E0 (0x0000E8 - 0x0001C8)
struct FCollectionTransformSelectionByVolumeDataflowNode : FDataflowNode
{ 
	FManagedArrayCollection                            Collection;                                                 // 0x00E8   (0x00B0)  
	float                                              VolumeMin;                                                  // 0x0198   (0x0004)  
	float                                              VolumeMax;                                                  // 0x019C   (0x0004)  
	ERangeSettingEnum                                  RangeSetting;                                               // 0x01A0   (0x0001)  
	bool                                               bInclusive;                                                 // 0x01A1   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x01A2   (0x0006)  MISSED
	FDataflowTransformSelection                        TransformSelection;                                         // 0x01A8   (0x0020)  
};

/// Struct /Script/GeometryCollectionNodes.CollectionTransformSelectionInBoxDataflowNode
/// Size: 0x0178 (0x0000E8 - 0x000260)
struct FCollectionTransformSelectionInBoxDataflowNode : FDataflowNode
{ 
	FManagedArrayCollection                            Collection;                                                 // 0x00E8   (0x00B0)  
	FBox                                               Box;                                                        // 0x0198   (0x0038)  
	FTransform                                         Transform;                                                  // 0x01D0   (0x0060)  
	ESelectSubjectTypeEnum                             Type;                                                       // 0x0230   (0x0001)  
	bool                                               bAllVerticesMustContainedInBox;                             // 0x0231   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0232   (0x0006)  MISSED
	FDataflowTransformSelection                        TransformSelection;                                         // 0x0238   (0x0020)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0258   (0x0008)  MISSED
};

/// Struct /Script/GeometryCollectionNodes.CollectionTransformSelectionInSphereDataflowNode
/// Size: 0x0168 (0x0000E8 - 0x000250)
struct FCollectionTransformSelectionInSphereDataflowNode : FDataflowNode
{ 
	FManagedArrayCollection                            Collection;                                                 // 0x00E8   (0x00B0)  
	FSphere                                            Sphere;                                                     // 0x0198   (0x0020)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x01B8   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x01C0   (0x0060)  
	ESelectSubjectTypeEnum                             Type;                                                       // 0x0220   (0x0001)  
	bool                                               bAllVerticesMustContainedInSphere;                          // 0x0221   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x0222   (0x0006)  MISSED
	FDataflowTransformSelection                        TransformSelection;                                         // 0x0228   (0x0020)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0248   (0x0008)  MISSED
};

/// Struct /Script/GeometryCollectionNodes.CollectionTransformSelectionByFloatAttrDataflowNode
/// Size: 0x0100 (0x0000E8 - 0x0001E8)
struct FCollectionTransformSelectionByFloatAttrDataflowNode : FDataflowNode
{ 
	FManagedArrayCollection                            Collection;                                                 // 0x00E8   (0x00B0)  
	FString                                            GroupName;                                                  // 0x0198   (0x0010)  
	FString                                            AttrName;                                                   // 0x01A8   (0x0010)  
	float                                              Min;                                                        // 0x01B8   (0x0004)  
	float                                              Max;                                                        // 0x01BC   (0x0004)  
	ERangeSettingEnum                                  RangeSetting;                                               // 0x01C0   (0x0001)  
	bool                                               bInclusive;                                                 // 0x01C1   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x01C2   (0x0006)  MISSED
	FDataflowTransformSelection                        TransformSelection;                                         // 0x01C8   (0x0020)  
};

/// Struct /Script/GeometryCollectionNodes.CollectionTransformSelectionByIntAttrDataflowNode
/// Size: 0x0100 (0x0000E8 - 0x0001E8)
struct FCollectionTransformSelectionByIntAttrDataflowNode : FDataflowNode
{ 
	FManagedArrayCollection                            Collection;                                                 // 0x00E8   (0x00B0)  
	FString                                            GroupName;                                                  // 0x0198   (0x0010)  
	FString                                            AttrName;                                                   // 0x01A8   (0x0010)  
	int32_t                                            Min;                                                        // 0x01B8   (0x0004)  
	int32_t                                            Max;                                                        // 0x01BC   (0x0004)  
	ERangeSettingEnum                                  RangeSetting;                                               // 0x01C0   (0x0001)  
	bool                                               bInclusive;                                                 // 0x01C1   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x01C2   (0x0006)  MISSED
	FDataflowTransformSelection                        TransformSelection;                                         // 0x01C8   (0x0020)  
};

/// Struct /Script/GeometryCollectionNodes.CollectionVertexSelectionCustomDataflowNode
/// Size: 0x00E0 (0x0000E8 - 0x0001C8)
struct FCollectionVertexSelectionCustomDataflowNode : FDataflowNode
{ 
	FManagedArrayCollection                            Collection;                                                 // 0x00E8   (0x00B0)  
	FString                                            VertexIndicies;                                             // 0x0198   (0x0010)  
	FDataflowVertexSelection                           VertexSelection;                                            // 0x01A8   (0x0020)  
};

/// Struct /Script/GeometryCollectionNodes.CollectionFaceSelectionCustomDataflowNode
/// Size: 0x00E0 (0x0000E8 - 0x0001C8)
struct FCollectionFaceSelectionCustomDataflowNode : FDataflowNode
{ 
	FManagedArrayCollection                            Collection;                                                 // 0x00E8   (0x00B0)  
	FString                                            FaceIndicies;                                               // 0x0198   (0x0010)  
	FDataflowFaceSelection                             FaceSelection;                                              // 0x01A8   (0x0020)  
};

/// Struct /Script/GeometryCollectionNodes.CollectionSelectionConvertDataflowNode
/// Size: 0x0118 (0x0000E8 - 0x000200)
struct FCollectionSelectionConvertDataflowNode : FDataflowNode
{ 
	FManagedArrayCollection                            Collection;                                                 // 0x00E8   (0x00B0)  
	FDataflowTransformSelection                        TransformSelection;                                         // 0x0198   (0x0020)  
	FDataflowFaceSelection                             FaceSelection;                                              // 0x01B8   (0x0020)  
	FDataflowVertexSelection                           VertexSelection;                                            // 0x01D8   (0x0020)  
	bool                                               bAllElementsMustBeSelected;                                 // 0x01F8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x01F9   (0x0007)  MISSED
};

/// Struct /Script/GeometryCollectionNodes.CollectionFaceSelectionInvertDataflowNode
/// Size: 0x0020 (0x0000E8 - 0x000108)
struct FCollectionFaceSelectionInvertDataflowNode : FDataflowNode
{ 
	FDataflowFaceSelection                             FaceSelection;                                              // 0x00E8   (0x0020)  
};

/// Struct /Script/GeometryCollectionNodes.CollectionVertexSelectionByPercentageDataflowNode
/// Size: 0x0030 (0x0000E8 - 0x000118)
struct FCollectionVertexSelectionByPercentageDataflowNode : FDataflowNode
{ 
	FDataflowVertexSelection                           VertexSelection;                                            // 0x00E8   (0x0020)  
	int32_t                                            Percentage;                                                 // 0x0108   (0x0004)  
	bool                                               bDeterministic;                                             // 0x010C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x010D   (0x0003)  MISSED
	float                                              RandomSeed;                                                 // 0x0110   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0114   (0x0004)  MISSED
};

/// Struct /Script/GeometryCollectionNodes.CollectionVertexSelectionSetOperationDataflowNode
/// Size: 0x0068 (0x0000E8 - 0x000150)
struct FCollectionVertexSelectionSetOperationDataflowNode : FDataflowNode
{ 
	ESetOperationEnum                                  Operation;                                                  // 0x00E8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x00E9   (0x0007)  MISSED
	FDataflowVertexSelection                           VertexSelectionA;                                           // 0x00F0   (0x0020)  
	FDataflowVertexSelection                           VertexSelectionB;                                           // 0x0110   (0x0020)  
	FDataflowVertexSelection                           VertexSelection;                                            // 0x0130   (0x0020)  
};

/// Struct /Script/GeometryCollectionNodes.TransformCollectionAttributeDataflowNode
/// Size: 0x0198 (0x0000E8 - 0x000280)
struct FTransformCollectionAttributeDataflowNode : FDataflowNode
{ 
	FManagedArrayCollection                            Collection;                                                 // 0x00E8   (0x00B0)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0198   (0x0008)  MISSED
	FTransform                                         TransformIn;                                                // 0x01A0   (0x0060)  
	FTransform                                         LocalTransform;                                             // 0x0200   (0x0060)  
	FString                                            GroupName;                                                  // 0x0260   (0x0010)  
	FString                                            AttributeName;                                              // 0x0270   (0x0010)  
};

/// Enum /Script/GeometryCollectionNodes.EDataflowFieldFalloffType
/// Size: 0x06
enum EDataflowFieldFalloffType : uint8_t
{
	EDataflowFieldFalloffType__Dataflow_FieldFalloffType_None0                       = 0,
	EDataflowFieldFalloffType__Dataflow_FieldFalloffType_Linear1                     = 1,
	EDataflowFieldFalloffType__Dataflow_FieldFalloffType_Inverse2                    = 2,
	EDataflowFieldFalloffType__Dataflow_FieldFalloffType_Squared3                    = 3,
	EDataflowFieldFalloffType__Dataflow_FieldFalloffType_Logarithmic4                = 4,
	EDataflowFieldFalloffType__Dataflow_Max5                                         = 5
};

/// Enum /Script/GeometryCollectionNodes.EDataflowSetMaskConditionType
/// Size: 0x04
enum EDataflowSetMaskConditionType : uint8_t
{
	EDataflowSetMaskConditionType__Dataflow_SetMaskConditionType_Always0             = 0,
	EDataflowSetMaskConditionType__Dataflow_SetMaskConditionType_IFF_NOT_Interior1   = 1,
	EDataflowSetMaskConditionType__Dataflow_SetMaskConditionType_IFF_NOT_Exterior2   = 2,
	EDataflowSetMaskConditionType__Dataflow_Max3                                     = 3
};

/// Enum /Script/GeometryCollectionNodes.EDataflowWaveFunctionType
/// Size: 0x05
enum EDataflowWaveFunctionType : uint8_t
{
	EDataflowWaveFunctionType__Dataflow_WaveFunctionType_Cosine0                     = 0,
	EDataflowWaveFunctionType__Dataflow_WaveFunctionType_Gaussian1                   = 1,
	EDataflowWaveFunctionType__Dataflow_WaveFunctionType_Falloff2                    = 2,
	EDataflowWaveFunctionType__Dataflow_WaveFunctionType_Decay3                      = 3,
	EDataflowWaveFunctionType__Dataflow_Max4                                         = 4
};

/// Enum /Script/GeometryCollectionNodes.EDataflowFloatFieldOperationType
/// Size: 0x07
enum EDataflowFloatFieldOperationType : uint8_t
{
	EDataflowFloatFieldOperationType__Dataflow_FloatFieldOperationType_Multiply0     = 0,
	EDataflowFloatFieldOperationType__Dataflow_FloatFieldFalloffType_Divide1         = 1,
	EDataflowFloatFieldOperationType__Dataflow_FloatFieldFalloffType_Add2            = 2,
	EDataflowFloatFieldOperationType__Dataflow_FloatFieldFalloffType_Substract3      = 3,
	EDataflowFloatFieldOperationType__Dataflow_FloatFieldFalloffType_Min4            = 4,
	EDataflowFloatFieldOperationType__Dataflow_FloatFieldFalloffType_Max5            = 5,
	EDataflowFloatFieldOperationType__Dataflow_Max6                                  = 6
};

/// Enum /Script/GeometryCollectionNodes.EDataflowVectorFieldOperationType
/// Size: 0x06
enum EDataflowVectorFieldOperationType : uint8_t
{
	EDataflowVectorFieldOperationType__Dataflow_VectorFieldOperationType_Multiply0   = 0,
	EDataflowVectorFieldOperationType__Dataflow_VectorFieldFalloffType_Divide1       = 1,
	EDataflowVectorFieldOperationType__Dataflow_VectorFieldFalloffType_Add2          = 2,
	EDataflowVectorFieldOperationType__Dataflow_VectorFieldFalloffType_Substract3    = 3,
	EDataflowVectorFieldOperationType__Dataflow_VectorFieldFalloffType_CrossProduct4 = 4,
	EDataflowVectorFieldOperationType__Dataflow_Max5                                 = 5
};

/// Enum /Script/GeometryCollectionNodes.ESetMaterialOperationTypeEnum
/// Size: 0x03
enum ESetMaterialOperationTypeEnum : uint8_t
{
	ESetMaterialOperationTypeEnum__Dataflow_SetMaterialOperationType_Add0            = 0,
	ESetMaterialOperationTypeEnum__Dataflow_SetMaterialOperationType_Insert1         = 1,
	ESetMaterialOperationTypeEnum__Dataflow_Max2                                     = 2
};

/// Enum /Script/GeometryCollectionNodes.EConvexOverlapRemovalMethodEnum
/// Size: 0x05
enum EConvexOverlapRemovalMethodEnum : uint8_t
{
	EConvexOverlapRemovalMethodEnum__Dataflow_EConvexOverlapRemovalMethod_None0      = 0,
	EConvexOverlapRemovalMethodEnum__Dataflow_EConvexOverlapRemovalMethod_All1       = 1,
	EConvexOverlapRemovalMethodEnum__Dataflow_EConvexOverlapRemovalMethod_OnlyClusters2 = 2,
	EConvexOverlapRemovalMethodEnum__Dataflow_EConvexOverlapRemovalMethod_OnlyClustersVsClusters3 = 3,
	EConvexOverlapRemovalMethodEnum__Dataflow_Max4                                   = 4
};

/// Enum /Script/GeometryCollectionNodes.EClusterSizeMethodEnum
/// Size: 0x04
enum EClusterSizeMethodEnum : uint8_t
{
	EClusterSizeMethodEnum__Dataflow_ClusterSizeMethod_ByNumber0                     = 0,
	EClusterSizeMethodEnum__Dataflow_ClusterSizeMethod_ByFractionOfInput1            = 1,
	EClusterSizeMethodEnum__Dataflow_ClusterSizeMethod_BySize2                       = 2,
	EClusterSizeMethodEnum__Dataflow_Max3                                            = 3
};

/// Enum /Script/GeometryCollectionNodes.EVisibiltyOptionsEnum
/// Size: 0x03
enum EVisibiltyOptionsEnum : uint8_t
{
	EVisibiltyOptionsEnum__Dataflow_VisibilityOptions_Visible0                       = 0,
	EVisibiltyOptionsEnum__Dataflow_VisibilityOptions_Invisible1                     = 1,
	EVisibiltyOptionsEnum__Dataflow_Max2                                             = 2
};

/// Enum /Script/GeometryCollectionNodes.EMeshBooleanOperationEnum
/// Size: 0x04
enum EMeshBooleanOperationEnum : uint8_t
{
	EMeshBooleanOperationEnum__Dataflow_MeshBoolean_Union0                           = 0,
	EMeshBooleanOperationEnum__Dataflow_MeshBoolean_Intersect1                       = 1,
	EMeshBooleanOperationEnum__Dataflow_MeshBoolean_Difference2                      = 2,
	EMeshBooleanOperationEnum__Dataflow_Max3                                         = 3
};

/// Enum /Script/GeometryCollectionNodes.EMakeBoxDataTypeEnum
/// Size: 0x03
enum EMakeBoxDataTypeEnum : uint8_t
{
	EMakeBoxDataTypeEnum__Dataflow_MakeBox_DataType_MinMax0                          = 0,
	EMakeBoxDataTypeEnum__Dataflow_MakeBox_DataType_CenterSize1                      = 1,
	EMakeBoxDataTypeEnum__Dataflow_Max2                                              = 2
};

/// Enum /Script/GeometryCollectionNodes.EFloatToIntFunctionEnum
/// Size: 0x05
enum EFloatToIntFunctionEnum : uint8_t
{
	EFloatToIntFunctionEnum__Dataflow_FloatToInt_Function_Floor0                     = 0,
	EFloatToIntFunctionEnum__Dataflow_FloatToInt_Function_Ceil1                      = 1,
	EFloatToIntFunctionEnum__Dataflow_FloatToInt_Function_Round2                     = 2,
	EFloatToIntFunctionEnum__Dataflow_FloatToInt_Function_Truncate3                  = 3,
	EFloatToIntFunctionEnum__Dataflow_Max4                                           = 4
};

/// Enum /Script/GeometryCollectionNodes.EFloatArrayToIntArrayFunctionEnum
/// Size: 0x07
enum EFloatArrayToIntArrayFunctionEnum : uint8_t
{
	EFloatArrayToIntArrayFunctionEnum__Dataflow_FloatToInt_Function_Floor0           = 0,
	EFloatArrayToIntArrayFunctionEnum__Dataflow_FloatToInt_Function_Ceil1            = 1,
	EFloatArrayToIntArrayFunctionEnum__Dataflow_FloatToInt_Function_Round2           = 2,
	EFloatArrayToIntArrayFunctionEnum__Dataflow_FloatToInt_Function_Truncate3        = 3,
	EFloatArrayToIntArrayFunctionEnum__Dataflow_FloatToInt_NonZeroToIndex4           = 4,
	EFloatArrayToIntArrayFunctionEnum__Dataflow_FloatToInt_ZeroToIndex5              = 5,
	EFloatArrayToIntArrayFunctionEnum__Dataflow_Max6                                 = 6
};

/// Enum /Script/GeometryCollectionNodes.EMathConstantsEnum
/// Size: 0x15
enum EMathConstantsEnum : uint8_t
{
	EMathConstantsEnum__Dataflow_MathConstants_Pi0                                   = 0,
	EMathConstantsEnum__Dataflow_MathConstants_HalfPi1                               = 1,
	EMathConstantsEnum__Dataflow_MathConstants_TwoPi2                                = 2,
	EMathConstantsEnum__Dataflow_MathConstants_FourPi3                               = 3,
	EMathConstantsEnum__Dataflow_MathConstants_InvPi4                                = 4,
	EMathConstantsEnum__Dataflow_MathConstants_InvTwoPi5                             = 5,
	EMathConstantsEnum__Dataflow_MathConstants_Sqrt26                                = 6,
	EMathConstantsEnum__Dataflow_MathConstants_InvSqrt27                             = 7,
	EMathConstantsEnum__Dataflow_MathConstants_Sqrt38                                = 8,
	EMathConstantsEnum__Dataflow_MathConstants_InvSqrt39                             = 9,
	EMathConstantsEnum__Dataflow_FloatToInt_Function_E10                             = 10,
	EMathConstantsEnum__Dataflow_FloatToInt_Function_Gamma11                         = 11,
	EMathConstantsEnum__Dataflow_FloatToInt_Function_GoldenRatio12                   = 12,
	EMathConstantsEnum__Dataflow_FloatToInt_Function_ZeroTolerance13                 = 13,
	EMathConstantsEnum__Dataflow_Max14                                               = 14
};

/// Enum /Script/GeometryCollectionNodes.ERotationOrderEnum
/// Size: 0x07
enum ERotationOrderEnum : uint8_t
{
	ERotationOrderEnum__Dataflow_RotationOrder_XYZ0                                  = 0,
	ERotationOrderEnum__Dataflow_RotationOrder_YZX1                                  = 1,
	ERotationOrderEnum__Dataflow_RotationOrder_ZXY2                                  = 2,
	ERotationOrderEnum__Dataflow_RotationOrder_XZY3                                  = 3,
	ERotationOrderEnum__Dataflow_RotationOrder_YXZ4                                  = 4,
	ERotationOrderEnum__Dataflow_RotationOrder_ZYX5                                  = 5,
	ERotationOrderEnum__Dataflow_Max6                                                = 6
};

/// Enum /Script/GeometryCollectionNodes.ECompareOperationEnum
/// Size: 0x06
enum ECompareOperationEnum : uint8_t
{
	ECompareOperationEnum__Dataflow_Compare_Equal0                                   = 0,
	ECompareOperationEnum__Dataflow_Compare_Smaller1                                 = 1,
	ECompareOperationEnum__Dataflow_Compare_SmallerOrEqual2                          = 2,
	ECompareOperationEnum__Dataflow_Compare_Greater3                                 = 3,
	ECompareOperationEnum__Dataflow_Compare_GreaterOrEqual4                          = 4,
	ECompareOperationEnum__Dataflow_Max5                                             = 5
};

/// Enum /Script/GeometryCollectionNodes.EAnchorStateEnum
/// Size: 0x03
enum EAnchorStateEnum : uint8_t
{
	EAnchorStateEnum__Dataflow_AnchorState_Anchored0                                 = 0,
	EAnchorStateEnum__Dataflow_AnchorState_NotAnchored1                              = 1,
	EAnchorStateEnum__Dataflow_Max2                                                  = 2
};

/// Enum /Script/GeometryCollectionNodes.EProximityMethodEnum
/// Size: 0x03
enum EProximityMethodEnum : uint8_t
{
	EProximityMethodEnum__Dataflow_ProximityMethod_Precise0                          = 0,
	EProximityMethodEnum__Dataflow_ProximityMethod_ConvexHull1                       = 1,
	EProximityMethodEnum__Dataflow_Max2                                              = 2
};

/// Enum /Script/GeometryCollectionNodes.EStandardGroupNameEnum
/// Size: 0x08
enum EStandardGroupNameEnum : uint8_t
{
	EStandardGroupNameEnum__Dataflow_EStandardGroupNameEnum_Transform0               = 0,
	EStandardGroupNameEnum__Dataflow_EStandardGroupNameEnum_Geometry1                = 1,
	EStandardGroupNameEnum__Dataflow_EStandardGroupNameEnum_Faces2                   = 2,
	EStandardGroupNameEnum__Dataflow_EStandardGroupNameEnum_Vertices3                = 3,
	EStandardGroupNameEnum__Dataflow_EStandardGroupNameEnum_Material4                = 4,
	EStandardGroupNameEnum__Dataflow_EStandardGroupNameEnum_Breaking5                = 5,
	EStandardGroupNameEnum__Dataflow_EStandardGroupNameEnum_Custom6                  = 6,
	EStandardGroupNameEnum__Dataflow_Max7                                            = 7
};

/// Enum /Script/GeometryCollectionNodes.ECustomAttributeTypeEnum
/// Size: 0x25
enum ECustomAttributeTypeEnum : uint8_t
{
	ECustomAttributeTypeEnum__Dataflow_CustomAttributeType_UInt80                    = 0,
	ECustomAttributeTypeEnum__Dataflow_CustomAttributeType_Int321                    = 1,
	ECustomAttributeTypeEnum__Dataflow_CustomAttributeType_Float2                    = 2,
	ECustomAttributeTypeEnum__Dataflow_CustomAttributeType_Double3                   = 3,
	ECustomAttributeTypeEnum__Dataflow_CustomAttributeType_Bool4                     = 4,
	ECustomAttributeTypeEnum__Dataflow_CustomAttributeType_String5                   = 5,
	ECustomAttributeTypeEnum__Dataflow_CustomAttributeType_Vector2f6                 = 6,
	ECustomAttributeTypeEnum__Dataflow_CustomAttributeType_Vector3f7                 = 7,
	ECustomAttributeTypeEnum__Dataflow_CustomAttributeType_Vector3d8                 = 8,
	ECustomAttributeTypeEnum__Dataflow_CustomAttributeType_Vector4f9                 = 9,
	ECustomAttributeTypeEnum__Dataflow_CustomAttributeType_LinearColor10             = 10,
	ECustomAttributeTypeEnum__Dataflow_CustomAttributeType_Transform11               = 11,
	ECustomAttributeTypeEnum__Dataflow_CustomAttributeType_Quat4f12                  = 12,
	ECustomAttributeTypeEnum__Dataflow_CustomAttributeType_Box13                     = 13,
	ECustomAttributeTypeEnum__Dataflow_CustomAttributeType_Guid14                    = 14,
	ECustomAttributeTypeEnum__Dataflow_CustomAttributeType_Int32Set15                = 15,
	ECustomAttributeTypeEnum__Dataflow_CustomAttributeType_Int32Array16              = 16,
	ECustomAttributeTypeEnum__Dataflow_CustomAttributeType_IntVector17               = 17,
	ECustomAttributeTypeEnum__Dataflow_CustomAttributeType_IntVector218              = 18,
	ECustomAttributeTypeEnum__Dataflow_CustomAttributeType_IntVector419              = 19,
	ECustomAttributeTypeEnum__Dataflow_CustomAttributeType_IntVector2Array20         = 20,
	ECustomAttributeTypeEnum__Dataflow_CustomAttributeType_FloatArray21              = 21,
	ECustomAttributeTypeEnum__Dataflow_CustomAttributeType_Vector2fArray22           = 22,
	ECustomAttributeTypeEnum__Dataflow_CustomAttributeType_FVector3fArray23          = 23,
	ECustomAttributeTypeEnum__Dataflow_Max24                                         = 24
};

/// Enum /Script/GeometryCollectionNodes.ESetOperationEnum
/// Size: 0x04
enum ESetOperationEnum : uint8_t
{
	ESetOperationEnum__Dataflow_SetOperation_AND0                                    = 0,
	ESetOperationEnum__Dataflow_SetOperation_OR1                                     = 1,
	ESetOperationEnum__Dataflow_SetOperation_XOR2                                    = 2,
	ESetOperationEnum__Dataflow_Max3                                                 = 3
};

/// Enum /Script/GeometryCollectionNodes.ERangeSettingEnum
/// Size: 0x03
enum ERangeSettingEnum : uint8_t
{
	ERangeSettingEnum__Dataflow_RangeSetting_InsideRange0                            = 0,
	ERangeSettingEnum__Dataflow_RangeSetting_OutsideRange1                           = 1,
	ERangeSettingEnum__Dataflow_Max2                                                 = 2
};

/// Enum /Script/GeometryCollectionNodes.ESelectSubjectTypeEnum
/// Size: 0x04
enum ESelectSubjectTypeEnum : uint8_t
{
	ESelectSubjectTypeEnum__Dataflow_SelectSubjectType_Vertices0                     = 0,
	ESelectSubjectTypeEnum__Dataflow_SelectSubjectType_BoundingBox1                  = 1,
	ESelectSubjectTypeEnum__Dataflow_SelectSubjectType_Centroid2                     = 2,
	ESelectSubjectTypeEnum__Dataflow_Max3                                            = 3
};

