
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package Renderer.

/// Class /Script/Renderer.SparseVolumeTextureViewerComponent
/// Size: 0x0020 (0x000570 - 0x000590)
class USparseVolumeTextureViewerComponent : public UPrimitiveComponent : UPrimitiveComponent
{ 
public:
	USparseVolumeTexture*                              SparseVolumeTexturePreview;                                 // 0x0568   (0x0008)  
	bool                                               bAnimate : 1;                                               // 0x0570:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x0571   (0x0003)  MISSED
	float                                              AnimationFrame;                                             // 0x0574   (0x0004)  
	float                                              FrameRate;                                                  // 0x0578   (0x0004)  
	float                                              AnimationTime;                                              // 0x057C   (0x0004)  
	int32_t                                            ComponentToVisualize;                                       // 0x0580   (0x0004)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x0584   (0x000C)  MISSED
};

/// Class /Script/Renderer.SparseVolumeTextureViewer
/// Size: 0x0008 (0x000290 - 0x000298)
class ASparseVolumeTextureViewer : public AInfo : AInfo
{ 
public:
	USparseVolumeTextureViewerComponent*               SparseVolumeTextureViewerComponent;                         // 0x0290   (0x0008)  
};

