
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package FGearPlugin.

/// Struct /Script/FGearPlugin.GearBoneTransform
/// Size: 0x0030 (0x000000 - 0x000030)
struct FGearBoneTransform
{ 
	FVector                                            Position;                                                   // 0x0000   (0x0018)  
	FRotator                                           Rotation;                                                   // 0x0018   (0x0018)  
};

/// Struct /Script/FGearPlugin.GearBoneAxle
/// Size: 0x0060 (0x000000 - 0x000060)
struct FGearBoneAxle
{ 
	FGearBoneTransform                                 Left;                                                       // 0x0000   (0x0030)  
	FGearBoneTransform                                 Right;                                                      // 0x0030   (0x0030)  
};

/// Struct /Script/FGearPlugin.GearInputStateBuffer
/// Size: 0x0010 (0x000000 - 0x000010)
struct FGearInputStateBuffer
{ 
	TArray<FFGearInputState>                           mBuffer;                                                    // 0x0000   (0x0010)  
};

/// Struct /Script/FGearPlugin.FGearInputState
/// Size: 0x001C (0x000000 - 0x00001C)
struct FFGearInputState
{ 
	unsigned char                                      UnknownData00_2[0x4];                                       // 0x0000   (0x0004)  MISSED
	int32_t                                            mTick;                                                      // 0x0004   (0x0004)  
	float                                              mThrottle;                                                  // 0x0008   (0x0004)  
	float                                              mSteer;                                                     // 0x000C   (0x0004)  
	float                                              mBrake;                                                     // 0x0010   (0x0004)  
	float                                              mClutch;                                                    // 0x0014   (0x0004)  
	int8_t                                             mThrottleState;                                             // 0x0018   (0x0001)  
	int8_t                                             mGear;                                                      // 0x0019   (0x0001)  
	bool                                               mHandbrake;                                                 // 0x001A   (0x0001)  
	unsigned char                                      UnknownData01_6[0x1];                                       // 0x001B   (0x0001)  MISSED
};

/// Struct /Script/FGearPlugin.GearSnapState
/// Size: 0x0070 (0x000000 - 0x000070)
struct FGearSnapState
{ 
	float                                              mTime;                                                      // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	FVector                                            mPosition;                                                  // 0x0008   (0x0018)  
	FQuat                                              mRotation;                                                  // 0x0020   (0x0020)  
	FVector                                            mVelocity;                                                  // 0x0040   (0x0018)  
	FVector                                            mAngVelocity;                                               // 0x0058   (0x0018)  
};

/// Struct /Script/FGearPlugin.GearMarkSection
/// Size: 0x0088 (0x000000 - 0x000088)
struct FGearMarkSection
{ 
	unsigned char                                      UnknownData00_1[0x88];                                      // 0x0000   (0x0088)  MISSED
};

/// Struct /Script/FGearPlugin.GearTelemetryOptions
/// Size: 0x001C (0x000000 - 0x00001C)
struct FGearTelemetryOptions
{ 
	FLinearColor                                       mTextColor;                                                 // 0x0000   (0x0010)  
	bool                                               mShow;                                                      // 0x0010   (0x0001)  
	bool                                               mShowGauge;                                                 // 0x0011   (0x0001)  
	bool                                               mShowAeroDynamics;                                          // 0x0012   (0x0001)  
	bool                                               mShowAxles;                                                 // 0x0013   (0x0001)  
	bool                                               mShowEngine;                                                // 0x0014   (0x0001)  
	bool                                               mShowInput;                                                 // 0x0015   (0x0001)  
	bool                                               mShowTransmission;                                          // 0x0016   (0x0001)  
	bool                                               mShowVehicle;                                               // 0x0017   (0x0001)  
	bool                                               mShowWheels;                                                // 0x0018   (0x0001)  
	bool                                               mShowReplication;                                           // 0x0019   (0x0001)  
	bool                                               mShowStats;                                                 // 0x001A   (0x0001)  
	bool                                               mShowGizmos;                                                // 0x001B   (0x0001)  
};

/// Struct /Script/FGearPlugin.FGearVehicleState
/// Size: 0x00F0 (0x000000 - 0x0000F0)
struct FFGearVehicleState
{ 
	unsigned char                                      UnknownData00_1[0xF0];                                      // 0x0000   (0x00F0)  MISSED
};

/// Class /Script/FGearPlugin.FGearTelemetryDrawer
/// Size: 0x0010 (0x0002A0 - 0x0002B0)
class UFGearTelemetryDrawer : public USceneComponent : USceneComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x02A0   (0x0010)  MISSED
};

/// Class /Script/FGearPlugin.FGearAeroDynamics
/// Size: 0x0030 (0x0002B0 - 0x0002E0)
class UFGearAeroDynamics : public UFGearTelemetryDrawer : UFGearTelemetryDrawer
{ 
public:
	float                                              mDragCoefficient;                                           // 0x02A8   (0x0004)  
	float                                              mDownForceCoefficient;                                      // 0x02AC   (0x0004)  
	float                                              mDownForceXOffset;                                          // 0x02B0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x2C];                                      // 0x02B4   (0x002C)  MISSED


	/// Functions
	// Function /Script/FGearPlugin.FGearAeroDynamics.SetDragCoefficient
	void SetDragCoefficient(float F);                                                                                        // [0x18f2150] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearAeroDynamics.setDownForceXOffset
	void setDownForceXOffset(float F);                                                                                       // [0x18f20d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearAeroDynamics.SetDownforceCoefficient
	void SetDownforceCoefficient(float F);                                                                                   // [0x18f2050] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearAeroDynamics.getDragCoefficient
	float getDragCoefficient();                                                                                              // [0x18f1580] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearAeroDynamics.getDownForceXOffset
	float getDownForceXOffset();                                                                                             // [0x18f1560] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearAeroDynamics.getDownForceCoefficient
	float getDownForceCoefficient();                                                                                         // [0x18f1540] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/FGearPlugin.FGearAnimInstance
/// Size: 0x0010 (0x000350 - 0x000360)
class UFGearAnimInstance : public UAnimInstance : UAnimInstance
{ 
public:
	TArray<FGearBoneAxle>                              axles;                                                      // 0x0348   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0358   (0x0008)  MISSED
};

/// Class /Script/FGearPlugin.FGearArcadeAssists
/// Size: 0x00A0 (0x0002B0 - 0x000350)
class UFGearArcadeAssists : public UFGearTelemetryDrawer : UFGearTelemetryDrawer
{ 
public:
	bool                                               mRecoverAssists;                                            // 0x02A8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x02A9   (0x0003)  MISSED
	float                                              mUnderSteerRecoverPower;                                    // 0x02AC   (0x0004)  
	float                                              mOverSteerRecoverPower;                                     // 0x02B0   (0x0004)  
	float                                              mMinRecoverAssistSpeed;                                     // 0x02B4   (0x0004)  
	float                                              mFullRecoverAssistSpeed;                                    // 0x02B8   (0x0004)  
	bool                                               mAntirollBars;                                              // 0x02BC   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x02BD   (0x0003)  MISSED
	float                                              mFrontAntiRollPower;                                        // 0x02C0   (0x0004)  
	float                                              mRearAntiRollPower;                                         // 0x02C4   (0x0004)  
	bool                                               mTractionAssist;                                            // 0x02C8   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x02C9   (0x0003)  MISSED
	float                                              mTractionAssistRatio;                                       // 0x02CC   (0x0004)  
	float                                              mTractionAssistMaxSpeed;                                    // 0x02D0   (0x0004)  
	bool                                               mDriftAssist;                                               // 0x02D4   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x02D5   (0x0003)  MISSED
	float                                              mDriftAssistFrontRatio;                                     // 0x02D8   (0x0004)  
	float                                              mDriftAssistRearRatio;                                      // 0x02DC   (0x0004)  
	bool                                               mTorqueSplitter;                                            // 0x02E0   (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x02E1   (0x0003)  MISSED
	float                                              mTorqueSplitterRatio;                                       // 0x02E4   (0x0004)  
	float                                              mTorqueSplitterResponseTime;                                // 0x02E8   (0x0004)  
	bool                                               mBikeHelper;                                                // 0x02EC   (0x0001)  
	unsigned char                                      UnknownData05_5[0x3];                                       // 0x02ED   (0x0003)  MISSED
	float                                              mAntiRollSpring;                                            // 0x02F0   (0x0004)  
	float                                              mDamperSmooth;                                              // 0x02F4   (0x0004)  
	float                                              mMinLeanSpeed;                                              // 0x02F8   (0x0004)  
	float                                              mMaxLeanAngle;                                              // 0x02FC   (0x0004)  
	float                                              mMaxPitchAngle;                                             // 0x0300   (0x0004)  
	unsigned char                                      UnknownData06_5[0x4];                                       // 0x0304   (0x0004)  MISSED
	bool                                               mLeanInAir;                                                 // 0x0308   (0x0001)  
	unsigned char                                      UnknownData07_6[0x47];                                      // 0x0309   (0x0047)  MISSED


	/// Functions
	// Function /Script/FGearPlugin.FGearArcadeAssists.setTractionAssist
	void setTractionAssist(bool Enable);                                                                                     // [0x18f3040] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearArcadeAssists.setTorqueSplitter
	void setTorqueSplitter(bool Enable);                                                                                     // [0x18f2fb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearArcadeAssists.setRecoverAssists
	void setRecoverAssists(bool Enable);                                                                                     // [0x18f2ab0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearArcadeAssists.setMinLeanSpeed
	void setMinLeanSpeed(float V);                                                                                           // [0x18f2a30] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearArcadeAssists.setMaxPitchAngle
	void setMaxPitchAngle(float V);                                                                                          // [0x18f2930] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearArcadeAssists.setMaxLeanAngle
	void setMaxLeanAngle(float V);                                                                                           // [0x18f28b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearArcadeAssists.setLeanInAir
	void setLeanInAir(bool Enable);                                                                                          // [0x18f2610] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearArcadeAssists.setDriftAssist
	void setDriftAssist(bool Enable);                                                                                        // [0x18f21d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearArcadeAssists.setDamperSmooth
	void setDamperSmooth(float V);                                                                                           // [0x18f1ed0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearArcadeAssists.setCruiseSpeed
	void setCruiseSpeed(float kmhSpeed, int32_t gear);                                                                       // [0x18f1e00] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearArcadeAssists.setBikeHelper
	void setBikeHelper(bool Enable);                                                                                         // [0x18f1cf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearArcadeAssists.setAntiRollSpring
	void setAntiRollSpring(float V);                                                                                         // [0x18f1b50] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearArcadeAssists.setAntirollBars
	void setAntirollBars(bool Enable);                                                                                       // [0x18f1bd0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/FGearPlugin.FGearAutoDrive
/// Size: 0x00F0 (0x0002B0 - 0x0003A0)
class UFGearAutoDrive : public UFGearTelemetryDrawer : UFGearTelemetryDrawer
{ 
public:
	unsigned char                                      UnknownData00_2[0x70];                                      // 0x02B0   (0x0070)  MISSED
	bool                                               mActive;                                                    // 0x0320   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0321   (0x0007)  MISSED
	AFGearSpline*                                      mSpline;                                                    // 0x0328   (0x0008)  
	float                                              mStuckResetTime;                                            // 0x0330   (0x0004)  
	float                                              mResetZOffset;                                              // 0x0334   (0x0004)  
	UCurveFloat*                                       mSpeedByAngleCurve;                                         // 0x0338   (0x0008)  
	UCurveFloat*                                       mSpeedCoeffCurve;                                           // 0x0340   (0x0008)  
	float                                              mSteeringDistance;                                          // 0x0348   (0x0004)  
	float                                              mBrakingDistance;                                           // 0x034C   (0x0004)  
	float                                              mSteeringLimit;                                             // 0x0350   (0x0004)  
	float                                              mForwardCheckDistance;                                      // 0x0354   (0x0004)  
	float                                              mSideCheckDistance;                                         // 0x0358   (0x0004)  
	float                                              mCrossCheckDistance;                                        // 0x035C   (0x0004)  
	float                                              mAvoidanceDistance;                                         // 0x0360   (0x0004)  
	bool                                               mDebug;                                                     // 0x0364   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0365   (0x0003)  MISSED
	float                                              mDebugThickness;                                            // 0x0368   (0x0004)  
	FColor                                             mSteeringDebugColor;                                        // 0x036C   (0x0004)  
	FColor                                             mBrakingDebugColor;                                         // 0x0370   (0x0004)  
	FColor                                             mAvoidanceDebugColor;                                       // 0x0374   (0x0004)  
	unsigned char                                      UnknownData03_6[0x28];                                      // 0x0378   (0x0028)  MISSED


	/// Functions
	// Function /Script/FGearPlugin.FGearAutoDrive.SetEnabled
	void SetEnabled(bool B);                                                                                                 // [0x18f22f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearAutoDrive.IsEnabled
	bool IsEnabled();                                                                                                        // [0x18f19a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearAutoDrive.getCurrentSplineParam
	float getCurrentSplineParam();                                                                                           // [0x18f14e0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/FGearPlugin.FGearAxle
/// Size: 0x0070 (0x0002B0 - 0x000320)
class UFGearAxle : public UFGearTelemetryDrawer : UFGearTelemetryDrawer
{ 
public:
	FGearDifferentialType                              mDifferentialType;                                          // 0x02A8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1F];                                      // 0x02A9   (0x001F)  MISSED
	float                                              mDiffStrength;                                              // 0x02C8   (0x0004)  
	float                                              mTorqueShare;                                               // 0x02CC   (0x0004)  
	float                                              mMaxSteerAngle;                                             // 0x02D0   (0x0004)  
	float                                              mAckermanCoeff;                                             // 0x02D4   (0x0004)  
	int32_t                                            mAckermanReferenceIndex;                                    // 0x02D8   (0x0004)  
	bool                                               mHasHandbrake;                                              // 0x02DC   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x02DD   (0x0003)  MISSED
	float                                              mCamberAngle;                                               // 0x02E0   (0x0004)  
	float                                              mToeAngle;                                                  // 0x02E4   (0x0004)  
	unsigned char                                      UnknownData02_6[0x38];                                      // 0x02E8   (0x0038)  MISSED


	/// Functions
	// Function /Script/FGearPlugin.FGearAxle.setWheelOptions
	void setWheelOptions(UFGearWheelOptions* wo);                                                                            // [0x18f30d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearAxle.setTorqueShare
	void setTorqueShare(float F);                                                                                            // [0x18f2f30] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearAxle.setToeAngle
	void setToeAngle(float F);                                                                                               // [0x18f2e20] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearAxle.setTargetSteer
	void setTargetSteer(float S);                                                                                            // [0x18f2cf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearAxle.setRightWheel
	void setRightWheel(UFGearWheel* W);                                                                                      // [0x18f2b40] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearAxle.setMaxSteerAngle
	void setMaxSteerAngle(float F);                                                                                          // [0x18f29b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearAxle.setLeftWheel
	void setLeftWheel(UFGearWheel* W);                                                                                       // [0x18f26a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearAxle.setHasHandBrake
	void setHasHandBrake(bool B);                                                                                            // [0x18f2500] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearAxle.setDiffStrength
	void setDiffStrength(float F);                                                                                           // [0x18f1f50] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearAxle.setDifferentialType
	void setDifferentialType(FGearDifferentialType dt);                                                                      // [0x18f1fd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearAxle.setCamberAngle
	void setCamberAngle(float F);                                                                                            // [0x18f1d80] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearAxle.setAckermanReferenceIndex
	void setAckermanReferenceIndex(int32_t I);                                                                               // [0x18f1ac0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearAxle.setAckermanCoeff
	void setAckermanCoeff(float F);                                                                                          // [0x18f1a40] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearAxle.hasSteering
	bool hasSteering();                                                                                                      // [0x18f1970] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearAxle.hasHandBrake
	bool hasHandBrake();                                                                                                     // [0x18f1950] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearAxle.getWheelRPMToKMH
	float getWheelRPMToKMH();                                                                                                // [0x18f1920] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearAxle.getWheelOptions
	UFGearWheelOptions* getWheelOptions();                                                                                   // [0x18f1900] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearAxle.getTrackWidth
	float getTrackWidth();                                                                                                   // [0x18f18d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearAxle.getTorqueShare
	float getTorqueShare();                                                                                                  // [0x18f18b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearAxle.getToeAngle
	float getToeAngle();                                                                                                     // [0x18f1890] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearAxle.getRPM
	float getRPM();                                                                                                          // [0x18f17f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearAxle.getRightWheel
	UFGearWheel* getRightWheel();                                                                                            // [0x18f1820] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearAxle.getNormalizedSteering
	float getNormalizedSteering();                                                                                           // [0x18f17c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearAxle.getMaxSteerAngle
	float getMaxSteerAngle();                                                                                                // [0x18f17a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearAxle.getMaxRpm
	float getMaxRpm();                                                                                                       // [0x18f1770] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearAxle.getLocalCenter
	FVector getLocalCenter();                                                                                                // [0x18f1730] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearAxle.getLeftWheel
	UFGearWheel* getLeftWheel();                                                                                             // [0x18f16d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearAxle.getIndex
	int32_t getIndex();                                                                                                      // [0x18f16b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearAxle.getGlobalCenter
	FVector getGlobalCenter();                                                                                               // [0x18f1650] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearAxle.getFeedbackTorque
	float getFeedbackTorque();                                                                                               // [0x18f1600] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearAxle.getDiffStrength
	float getDiffStrength();                                                                                                 // [0x18f1500] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearAxle.getDifferentialType
	FGearDifferentialType getDifferentialType();                                                                             // [0x18f1520] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearAxle.getCurRpm
	float getCurRpm();                                                                                                       // [0x18f14b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearAxle.getCamberAngle
	float getCamberAngle();                                                                                                  // [0x18f1490] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearAxle.getAckermanReferenceIndex
	int32_t getAckermanReferenceIndex();                                                                                     // [0x18f1450] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearAxle.getAckermanCoeff
	float getAckermanCoeff();                                                                                                // [0x18f1430] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearAxle.applyWheelOptions
	void applyWheelOptions();                                                                                                // [0x18f1320] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/FGearPlugin.FGearCustomCollision
/// Size: 0x0010 (0x000620 - 0x000630)
class UFGearCustomCollision : public UStaticMeshComponent : UStaticMeshComponent
{ 
public:
	bool                                               mOverrideChannel;                                           // 0x0620   (0x0001)  
	TEnumAsByte<ECollisionChannel>                     mChannel;                                                   // 0x0621   (0x0001)  
	unsigned char                                      UnknownData00_6[0xE];                                       // 0x0622   (0x000E)  MISSED
};

/// Class /Script/FGearPlugin.FGearEffects
/// Size: 0x0120 (0x0002B0 - 0x0003D0)
class UFGearEffects : public UFGearTelemetryDrawer : UFGearTelemetryDrawer
{ 
public:
	FMulticastInlineDelegate                           OnBrakeStateChanged;                                        // 0x02A8   (0x0010)  
	FMulticastInlineDelegate                           OnBackFire;                                                 // 0x02B8   (0x0010)  
	float                                              mLongSlipThreshold;                                         // 0x02C8   (0x0004)  
	float                                              mLatSlipThreshold;                                          // 0x02CC   (0x0004)  
	bool                                               mEnableTireSmoke;                                           // 0x02D0   (0x0001)  
	bool                                               mEnableSkidmarks;                                           // 0x02D1   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x02D2   (0x0006)  MISSED
	UMaterialInterface*                                mSkidmarkMaterial;                                          // 0x02D8   (0x0008)  
	int32_t                                            mMaxMarks;                                                  // 0x02E0   (0x0004)  
	float                                              mMarkWidth;                                                 // 0x02E4   (0x0004)  
	float                                              mGroundOffset;                                              // 0x02E8   (0x0004)  
	float                                              mMinDistance;                                               // 0x02EC   (0x0004)  
	TArray<AFGearSkidmark*>                            mSmarks;                                                    // 0x02F0   (0x0010)  
	unsigned char                                      UnknownData01_5[0x10];                                      // 0x0300   (0x0010)  MISSED
	float                                              mBaseVolume;                                                // 0x0310   (0x0004)  
	float                                              mEngineVolume;                                              // 0x0314   (0x0004)  
	float                                              mSkidVolume;                                                // 0x0318   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x031C   (0x0004)  MISSED
	USoundWave*                                        mEngineHigh;                                                // 0x0320   (0x0008)  
	float                                              mEngineHighBasePitch;                                       // 0x0328   (0x0004)  
	float                                              mEngineHighPitchScale;                                      // 0x032C   (0x0004)  
	float                                              mEngineHighInnerRadius;                                     // 0x0330   (0x0004)  
	float                                              mEngineHighFalloffDistance;                                 // 0x0334   (0x0004)  
	UAudioComponent*                                   mEngineHighComponent;                                       // 0x0338   (0x0008)  
	USoundWave*                                        mEngineLow;                                                 // 0x0340   (0x0008)  
	float                                              mEngineLowBasePitch;                                        // 0x0348   (0x0004)  
	float                                              mEngineLowPitchScale;                                       // 0x034C   (0x0004)  
	float                                              mEngineLowInnerRadius;                                      // 0x0350   (0x0004)  
	float                                              mEngineLowFalloffDistance;                                  // 0x0354   (0x0004)  
	UAudioComponent*                                   mEngineLowComponent;                                        // 0x0358   (0x0008)  
	bool                                               mEnableSkidclip;                                            // 0x0360   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0361   (0x0003)  MISSED
	float                                              mSkidclipInnerRadius;                                       // 0x0364   (0x0004)  
	float                                              mSkidclipFalloffDistance;                                   // 0x0368   (0x0004)  
	unsigned char                                      UnknownData04_5[0x4];                                       // 0x036C   (0x0004)  MISSED
	UAudioComponent*                                   mSkidSoundComponent;                                        // 0x0370   (0x0008)  
	float                                              mBackfireInterval;                                          // 0x0378   (0x0004)  
	float                                              mBackfireLimit;                                             // 0x037C   (0x0004)  
	float                                              mFireRpmRatio;                                              // 0x0380   (0x0004)  
	float                                              mFireGearChange;                                            // 0x0384   (0x0004)  
	float                                              mFireLimiter;                                               // 0x0388   (0x0004)  
	unsigned char                                      UnknownData05_5[0x4];                                       // 0x038C   (0x0004)  MISSED
	UFGearPhysicalMaterial*                            mDefaultPhysicalMaterial;                                   // 0x0390   (0x0008)  
	TArray<UParticleSystemComponent*>                  mSmokes;                                                    // 0x0398   (0x0010)  
	unsigned char                                      UnknownData06_6[0x28];                                      // 0x03A8   (0x0028)  MISSED


	/// Functions
	// Function /Script/FGearPlugin.FGearEffects.setSkidVolume
	void setSkidVolume(float V);                                                                                             // [0x18f2c60] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearEffects.setEngineVolume
	void setEngineVolume(float V);                                                                                           // [0x18f2400] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearEffects.setEnableSkidmarks
	void setEnableSkidmarks(bool E);                                                                                         // [0x18f2260] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearEffects.setBaseVolume
	void setBaseVolume(float V);                                                                                             // [0x18f1c60] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearEffects.getSkidVolume
	float getSkidVolume();                                                                                                   // [0x18f1870] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearEffects.getEngineVolume
	float getEngineVolume();                                                                                                 // [0x18f15e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearEffects.getEnableSkidmarks
	bool getEnableSkidmarks();                                                                                               // [0x18f15a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearEffects.getBaseVolume
	float getBaseVolume();                                                                                                   // [0x18f1470] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/FGearPlugin.FGearEngine
/// Size: 0x0040 (0x0002B0 - 0x0002F0)
class UFGearEngine : public UFGearTelemetryDrawer : UFGearTelemetryDrawer
{ 
public:
	UCurveFloat*                                       mTorqueCurve;                                               // 0x02A8   (0x0008)  
	float                                              mTorqueScale;                                               // 0x02B0   (0x0004)  
	float                                              mFrictionTorque;                                            // 0x02B4   (0x0004)  
	float                                              mIdleRpm;                                                   // 0x02B8   (0x0004)  
	float                                              mLimitRpm;                                                  // 0x02BC   (0x0004)  
	float                                              mLimiterTime;                                               // 0x02C0   (0x0004)  
	float                                              mEngineInertia;                                             // 0x02C4   (0x0004)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x02C8   (0x0028)  MISSED


	/// Functions
	// Function /Script/FGearPlugin.FGearEngine.setTorqueScale
	void setTorqueScale(float F);                                                                                            // [0x18f20d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearEngine.setTorqueCurve
	void setTorqueCurve(UCurveFloat* Curve);                                                                                 // [0x18f2ea0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearEngine.setThrottle
	void setThrottle(float pedal);                                                                                           // [0x18f2d70] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearEngine.setRunning
	void setRunning(bool B);                                                                                                 // [0x18f2bd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearEngine.setRpm
	void setRpm(float F);                                                                                                    // [0x18f1a40] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearEngine.setLimitRpm
	void setLimitRpm(float F);                                                                                               // [0x18f2730] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearEngine.setLimiterTime
	void setLimiterTime(float F);                                                                                            // [0x18f2830] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearEngine.setLimiter
	void setLimiter(float L);                                                                                                // [0x18f27b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearEngine.setIdleRpm
	void setIdleRpm(float F);                                                                                                // [0x18f2590] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearEngine.setFrictionTorque
	void setFrictionTorque(float F);                                                                                         // [0x18f2480] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearEngine.setEngineInertia
	void setEngineInertia(float F);                                                                                          // [0x18f2380] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearEngine.resetRpm
	void resetRpm();                                                                                                         // [0x18f1a10] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearEngine.isRunning
	bool isRunning();                                                                                                        // [0x18f19f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearEngine.isLimiterOn
	bool isLimiterOn();                                                                                                      // [0x18f19c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearEngine.getTorqueScale
	float getTorqueScale();                                                                                                  // [0x18f1560] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearEngine.getTorqueCurve
	UCurveFloat* getTorqueCurve();                                                                                           // [0xd0b560] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearEngine.getTorque
	float getTorque();                                                                                                       // [0x18f1490] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearEngine.getThrottle
	float getThrottle();                                                                                                     // [0x18f1450] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearEngine.getRpmRatio
	float getRpmRatio();                                                                                                     // [0x18f1840] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearEngine.getRPM
	float getRPM();                                                                                                          // [0x18f1430] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearEngine.getLimitRpm
	float getLimitRpm();                                                                                                     // [0x18f16f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearEngine.getLimiterTime
	float getLimiterTime();                                                                                                  // [0x18f1710] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearEngine.getIdleRpm
	float getIdleRpm();                                                                                                      // [0x18f1690] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearEngine.getFrictionTorque
	float getFrictionTorque();                                                                                               // [0x18f1630] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearEngine.getEngineInertia
	float getEngineInertia();                                                                                                // [0x18f15c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearEngine.calculateMaxPower
	void calculateMaxPower(float& maxPower, float& maxPowerRpm);                                                             // [0x18f1340] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/FGearPlugin.FGearOrbitCamera
/// Size: 0x0040 (0x0002B0 - 0x0002F0)
class UFGearOrbitCamera : public UFGearTelemetryDrawer : UFGearTelemetryDrawer
{ 
public:
	bool                                               mDriftMode;                                                 // 0x02B0   (0x0001)  
	bool                                               mFreeze;                                                    // 0x02B1   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x02B2   (0x0002)  MISSED
	float                                              mSpring;                                                    // 0x02B4   (0x0004)  
	float                                              mDistance;                                                  // 0x02B8   (0x0004)  
	float                                              mTargetZOffset;                                             // 0x02BC   (0x0004)  
	float                                              mTiltAngle;                                                 // 0x02C0   (0x0004)  
	unsigned char                                      UnknownData01_6[0x2C];                                      // 0x02C4   (0x002C)  MISSED


	/// Functions
	// Function /Script/FGearPlugin.FGearOrbitCamera.setTiltAngle
	void setTiltAngle(float T);                                                                                              // [0x18f2830] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearOrbitCamera.setTargetZOffset
	void setTargetZOffset(float Z);                                                                                          // [0x18f2730] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearOrbitCamera.setSpring
	void setSpring(float S);                                                                                                 // [0x18f2480] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearOrbitCamera.setRotationOffset
	void setRotationOffset(float angle);                                                                                     // [0x18f2e20] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearOrbitCamera.setOrbitMode
	void setOrbitMode(bool orbit);                                                                                           // [0x18f1cf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearOrbitCamera.setFreeze
	void setFreeze(bool F);                                                                                                  // [0x18f73c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearOrbitCamera.setDriftMode
	void setDriftMode(bool dm);                                                                                              // [0x18f7260] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearOrbitCamera.setDistance
	void setDistance(float D);                                                                                               // [0x18f2590] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearOrbitCamera.injectMouseDZ
	void injectMouseDZ(float mz);                                                                                            // [0x18f67a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearOrbitCamera.injectMouseDY
	void injectMouseDY(float my);                                                                                            // [0x18f6720] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearOrbitCamera.injectMouseDX
	void injectMouseDX(float mx);                                                                                            // [0x18f66a0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/FGearPlugin.FGearPhysicalMaterial
/// Size: 0x0020 (0x000080 - 0x0000A0)
class UFGearPhysicalMaterial : public UPhysicalMaterial : UPhysicalMaterial
{ 
public:
	bool                                               mReceiveSkidmark;                                           // 0x0080   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0081   (0x0003)  MISSED
	float                                              mFriction;                                                  // 0x0084   (0x0004)  
	float                                              mRoughness;                                                 // 0x0088   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x008C   (0x0004)  MISSED
	UParticleSystem*                                   mSmokeParticle;                                             // 0x0090   (0x0008)  
	USoundWave*                                        mSkidClip;                                                  // 0x0098   (0x0008)  
};

/// Class /Script/FGearPlugin.FGearReplication
/// Size: 0x0270 (0x0002B0 - 0x000520)
class UFGearReplication : public UFGearTelemetryDrawer : UFGearTelemetryDrawer
{ 
public:
	bool                                               mEnabled;                                                   // 0x02A8   (0x0001)  
	bool                                               mClientAuthority;                                           // 0x02A9   (0x0001)  
	char                                               mInputSendRate;                                             // 0x02AA   (0x0001)  
	char                                               mInputBufferSize;                                           // 0x02AB   (0x0001)  
	bool                                               mStateReplication;                                          // 0x02AC   (0x0001)  
	bool                                               mClientPrediction;                                          // 0x02AD   (0x0001)  
	char                                               mStateSendRate;                                             // 0x02AE   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x02AF   (0x0001)  MISSED
	float                                              mServerTime;                                                // 0x02B0   (0x0004)  
	unsigned char                                      UnknownData01_5[0x1C];                                      // 0x02B4   (0x001C)  MISSED
	FFGearInputState                                   mLastInput;                                                 // 0x02D0   (0x001C)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x02EC   (0x0004)  MISSED
	int32_t                                            mServerGear;                                                // 0x02F0   (0x0004)  
	unsigned char                                      UnknownData03_6[0x22C];                                     // 0x02F4   (0x022C)  MISSED


	/// Functions
	// Function /Script/FGearPlugin.FGearReplication.serverReceiveState
	void serverReceiveState(float Time, FVector Pos, FQuat rot, FVector vel, FVector avel);                                  // [0x18f6b40] Final|Net|Native|Event|Private|NetServer|HasDefaults|NetValidate 
	// Function /Script/FGearPlugin.FGearReplication.serverReceiveInputs
	void serverReceiveInputs(FGearInputStateBuffer Inputs);                                                                  // [0x18f6aa0] Final|Net|Native|Event|Private|NetServer|NetValidate 
	// Function /Script/FGearPlugin.FGearReplication.OnUnPossessed_Client
	void OnUnPossessed_Client();                                                                                             // [0x18f5ce0] Net|NetReliableNative|Event|Public|NetClient|NetValidate 
	// Function /Script/FGearPlugin.FGearReplication.OnPossessed_Client
	void OnPossessed_Client();                                                                                               // [0x18f5c90] Net|NetReliableNative|Event|Public|NetClient|NetValidate 
	// Function /Script/FGearPlugin.FGearReplication.IsEnabled
	bool IsEnabled();                                                                                                        // [0x18f1520] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearReplication.clientReceiveState
	void clientReceiveState(float Time, FVector Pos, FQuat rot, FVector vel, FVector avel);                                  // [0x18f5d30] Final|Net|Native|Event|NetMulticast|Private|HasDefaults|NetValidate 
};

/// Class /Script/FGearPlugin.FGearRewindReplay
/// Size: 0x0038 (0x000290 - 0x0002C8)
class AFGearRewindReplay : public AActor : AActor
{ 
public:
	TArray<AFGearVehicle*>                             mVehicleList;                                               // 0x0290   (0x0010)  
	int32_t                                            mStateSize;                                                 // 0x02A0   (0x0004)  
	bool                                               mRewindPause;                                               // 0x02A4   (0x0001)  
	bool                                               mReplayPause;                                               // 0x02A5   (0x0001)  
	unsigned char                                      UnknownData00_6[0x22];                                      // 0x02A6   (0x0022)  MISSED


	/// Functions
	// Function /Script/FGearPlugin.FGearRewindReplay.setReplayFrames
	void setReplayFrames(int32_t Count);                                                                                     // [0x18f7870] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearRewindReplay.rewind
	void rewind(bool resetIndex);                                                                                            // [0x18f6a10] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearRewindReplay.replay
	void replay(bool resetIndex);                                                                                            // [0x18f6960] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearRewindReplay.Play
	void Play();                                                                                                             // [0x18f6940] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearRewindReplay.getState
	FGearRewindReplayState getState();                                                                                       // [0x18f6450] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearRewindReplay.getProgressValue
	float getProgressValue();                                                                                                // [0x18f62c0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/FGearPlugin.FGearSettings
/// Size: 0x0008 (0x000038 - 0x000040)
class UFGearSettings : public UDeveloperSettings : UDeveloperSettings
{ 
public:
	bool                                               mOverrideReplication;                                       // 0x0038   (0x0001)  
	bool                                               mEnabled;                                                   // 0x0039   (0x0001)  
	bool                                               mClientAuthority;                                           // 0x003A   (0x0001)  
	char                                               mInputSendRate;                                             // 0x003B   (0x0001)  
	char                                               mInputBufferSize;                                           // 0x003C   (0x0001)  
	bool                                               mStateReplication;                                          // 0x003D   (0x0001)  
	bool                                               mClientPrediction;                                          // 0x003E   (0x0001)  
	char                                               mStateSendRate;                                             // 0x003F   (0x0001)  
};

/// Class /Script/FGearPlugin.FGearSkeletalMeshComponent
/// Size: 0x0010 (0x000FD0 - 0x000FE0)
class UFGearSkeletalMeshComponent : public USkeletalMeshComponent : USkeletalMeshComponent
{ 
public:
	FMulticastInlineDelegate                           OnSubstepTick;                                              // 0x0FD0   (0x0010)  
};

/// Class /Script/FGearPlugin.FGearSkidmark
/// Size: 0x0090 (0x000290 - 0x000320)
class AFGearSkidmark : public AActor : AActor
{ 
public:
	unsigned char                                      UnknownData00_1[0x90];                                      // 0x0290   (0x0090)  MISSED
};

/// Class /Script/FGearPlugin.FGearSpline
/// Size: 0x0018 (0x000290 - 0x0002A8)
class AFGearSpline : public AActor : AActor
{ 
public:
	USplineComponent*                                  mSplineComp;                                                // 0x0290   (0x0008)  
	bool                                               mDebug;                                                     // 0x0298   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0299   (0x0003)  MISSED
	FColor                                             mDebugColor;                                                // 0x029C   (0x0004)  
	float                                              mDebugThickness;                                            // 0x02A0   (0x0004)  
	float                                              mDebugIterator;                                             // 0x02A4   (0x0004)  


	/// Functions
	// Function /Script/FGearPlugin.FGearSpline.moveParam
	FVector moveParam(float& P, float Distance);                                                                             // [0x18f6840] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearSpline.getTangent
	FVector getTangent(float P);                                                                                             // [0x18f6550] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearSpline.getSpline
	USplineComponent* getSpline();                                                                                           // [0x18f6430] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearSpline.getPoint
	FVector getPoint(float P);                                                                                               // [0x18f6210] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearSpline.getDirection
	FVector getDirection(float P);                                                                                           // [0x18f6100] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearSpline.getClosestParam
	float getClosestParam(FVector P);                                                                                        // [0x18f5fa0] Final|Native|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/FGearPlugin.FGearStandardInput
/// Size: 0x0130 (0x0002B0 - 0x0003E0)
class UFGearStandardInput : public UFGearTelemetryDrawer : UFGearTelemetryDrawer
{ 
public:
	bool                                               mEnabled;                                                   // 0x02A8   (0x0001)  
	bool                                               mCombinedAxis;                                              // 0x02A9   (0x0001)  
	FGearControllerType                                mControllerType;                                            // 0x02AA   (0x0001)  
	FGearShifterType                                   mShifterType;                                               // 0x02AB   (0x0001)  
	FName                                              mVerticalAxis;                                              // 0x02AC   (0x0008)  
	FName                                              mHorizontalAxis;                                            // 0x02B4   (0x0008)  
	FName                                              mThrottleAxis;                                              // 0x02BC   (0x0008)  
	FName                                              mBrakeAxis;                                                 // 0x02C4   (0x0008)  
	FName                                              mLeftAxis;                                                  // 0x02CC   (0x0008)  
	FName                                              mRightAxis;                                                 // 0x02D4   (0x0008)  
	FName                                              mClutchAxis;                                                // 0x02DC   (0x0008)  
	FName                                              mHandbrakeAxis;                                             // 0x02E4   (0x0008)  
	FName                                              mShiftAxis;                                                 // 0x02EC   (0x0008)  
	FName                                              mShift1Axis;                                                // 0x02F4   (0x0008)  
	FName                                              mShift2Axis;                                                // 0x02FC   (0x0008)  
	FName                                              mShift3Axis;                                                // 0x0304   (0x0008)  
	FName                                              mShift4Axis;                                                // 0x030C   (0x0008)  
	FName                                              mShift5Axis;                                                // 0x0314   (0x0008)  
	FName                                              mShift6Axis;                                                // 0x031C   (0x0008)  
	FName                                              mShiftRAxis;                                                // 0x0324   (0x0008)  
	float                                              mSteerSensivity;                                            // 0x032C   (0x0004)  
	UCurveFloat*                                       mSteerSpeedCurve;                                           // 0x0330   (0x0008)  
	UCurveFloat*                                       mSteerLimitCurve;                                           // 0x0338   (0x0008)  
	float                                              mSteerInputGravity;                                         // 0x0340   (0x0004)  
	float                                              mSteerRange;                                                // 0x0344   (0x0004)  
	float                                              mSteerDeadzone;                                             // 0x0348   (0x0004)  
	float                                              mSteeringAssist;                                            // 0x034C   (0x0004)  
	float                                              mSteeringAssistThresholdAngle;                              // 0x0350   (0x0004)  
	float                                              mThrottleSensivity;                                         // 0x0354   (0x0004)  
	float                                              mThrottleRange;                                             // 0x0358   (0x0004)  
	float                                              mThrottleDeadzone;                                          // 0x035C   (0x0004)  
	float                                              mBrakingSensivity;                                          // 0x0360   (0x0004)  
	float                                              mBrakingRange;                                              // 0x0364   (0x0004)  
	float                                              mBrakingDeadzone;                                           // 0x0368   (0x0004)  
	float                                              mClutchSensivity;                                           // 0x036C   (0x0004)  
	float                                              mClutchRange;                                               // 0x0370   (0x0004)  
	float                                              mClutchDeadzone;                                            // 0x0374   (0x0004)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0378   (0x0008)  MISSED
	UInputComponent*                                   mInputComp;                                                 // 0x0380   (0x0008)  
	unsigned char                                      UnknownData01_6[0x58];                                      // 0x0388   (0x0058)  MISSED


	/// Functions
	// Function /Script/FGearPlugin.FGearStandardInput.setVerticalAxis
	void setVerticalAxis(FName S);                                                                                           // [0x18f8430] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearStandardInput.setThrottleSensivity
	void setThrottleSensivity(float F);                                                                                      // [0x18f83b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearStandardInput.setThrottleRange
	void setThrottleRange(float F);                                                                                          // [0x18f8330] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearStandardInput.setThrottleDeadzone
	void setThrottleDeadzone(float F);                                                                                       // [0x18f82b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearStandardInput.setThrottleAxis
	void setThrottleAxis(FName S);                                                                                           // [0x18f8220] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearStandardInput.setSteerSensivity
	void setSteerSensivity(float F);                                                                                         // [0x18f80a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearStandardInput.setSteerRange
	void setSteerRange(float F);                                                                                             // [0x18f8020] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearStandardInput.setSteerInputGravity
	void setSteerInputGravity(float F);                                                                                      // [0x18f7fa0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearStandardInput.setSteeringAssistThresholdAngle
	void setSteeringAssistThresholdAngle(float F);                                                                           // [0x18f81a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearStandardInput.setSteeringAssist
	void setSteeringAssist(float F);                                                                                         // [0x18f8120] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearStandardInput.setSteerDeadzone
	void setSteerDeadzone(float F);                                                                                          // [0x18f7f20] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearStandardInput.setStartGridMode
	void setStartGridMode(bool B);                                                                                           // [0x18f7e90] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearStandardInput.setShiftRAxis
	void setShiftRAxis(FName S);                                                                                             // [0x18f7d80] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearStandardInput.setShifterType
	void setShifterType(FGearShifterType st);                                                                                // [0x18f7e10] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearStandardInput.setShiftAxis
	void setShiftAxis(FName S);                                                                                              // [0x18f7cf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearStandardInput.setShift6Axis
	void setShift6Axis(FName S);                                                                                             // [0x18f7c60] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearStandardInput.setShift5Axis
	void setShift5Axis(FName S);                                                                                             // [0x18f7bd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearStandardInput.setShift4Axis
	void setShift4Axis(FName S);                                                                                             // [0x18f7b40] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearStandardInput.setShift3Axis
	void setShift3Axis(FName S);                                                                                             // [0x18f7ab0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearStandardInput.setShift2Axis
	void setShift2Axis(FName S);                                                                                             // [0x18f7a20] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearStandardInput.setShift1Axis
	void setShift1Axis(FName S);                                                                                             // [0x18f7990] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearStandardInput.setRightAxis
	void setRightAxis(FName S);                                                                                              // [0x18f7900] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearStandardInput.setReadInputs
	void setReadInputs(bool B);                                                                                              // [0x18f77e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearStandardInput.setLeftAxis
	void setLeftAxis(FName S);                                                                                               // [0x18f7750] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearStandardInput.setInputs
	void setInputs(float Throttle, float Brake, float steer, float clutch, int32_t gear, bool hb);                           // [0x18f7570] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearStandardInput.setHorizontalAxis
	void setHorizontalAxis(FName S);                                                                                         // [0x18f74e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearStandardInput.setHandbrakeAxis
	void setHandbrakeAxis(FName S);                                                                                          // [0x18f7450] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearStandardInput.SetEnabled
	void SetEnabled(bool Enable, bool resetInputs);                                                                          // [0x18f72f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearStandardInput.setControllerType
	void setControllerType(FGearControllerType ct);                                                                          // [0x18f71e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearStandardInput.setCombinedAxis
	void setCombinedAxis(bool B);                                                                                            // [0x18f7150] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearStandardInput.setClutchSensivity
	void setClutchSensivity(float F);                                                                                        // [0x18f70d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearStandardInput.setClutchRange
	void setClutchRange(float F);                                                                                            // [0x18f7050] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearStandardInput.setClutchDeadzone
	void setClutchDeadzone(float F);                                                                                         // [0x18f6fd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearStandardInput.setClutchAxis
	void setClutchAxis(FName S);                                                                                             // [0x18f6f40] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearStandardInput.setBrakingSensivity
	void setBrakingSensivity(float F);                                                                                       // [0x18f6ec0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearStandardInput.setBrakingRange
	void setBrakingRange(float F);                                                                                           // [0x18f6e40] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearStandardInput.setBrakingDeadzone
	void setBrakingDeadzone(float F);                                                                                        // [0x18f6dc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearStandardInput.setBrakeAxis
	void setBrakeAxis(FName S);                                                                                              // [0x18f6d30] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearStandardInput.resetInputs
	void resetInputs();                                                                                                      // [0x18f69f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearStandardInput.isSteeringAssistActive
	bool isSteeringAssistActive();                                                                                           // [0x18f6820] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearStandardInput.IsEnabled
	bool IsEnabled();                                                                                                        // [0x18f1520] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearStandardInput.getVerticalAxis
	FName getVerticalAxis();                                                                                                 // [0x18f6680] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearStandardInput.getThrottleSensivity
	float getThrottleSensivity();                                                                                            // [0x18f6660] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearStandardInput.getThrottleRange
	float getThrottleRange();                                                                                                // [0x18f6640] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearStandardInput.getThrottleDeadzone
	float getThrottleDeadzone();                                                                                             // [0x18f6620] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearStandardInput.getThrottleAxis
	FName getThrottleAxis();                                                                                                 // [0x18f6600] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearStandardInput.getSteerSpeedCurve
	UCurveFloat* getSteerSpeedCurve();                                                                                       // [0x1855600] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearStandardInput.getSteerSensivity
	float getSteerSensivity();                                                                                               // [0x18f64f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearStandardInput.getSteerRange
	float getSteerRange();                                                                                                   // [0x18f64d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearStandardInput.getSteerLimitCurve
	UCurveFloat* getSteerLimitCurve();                                                                                       // [0x18f64b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearStandardInput.getSteerInputGravity
	float getSteerInputGravity();                                                                                            // [0x18f6490] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearStandardInput.getSteeringAssistThresholdAngle
	float getSteeringAssistThresholdAngle();                                                                                 // [0x18f6530] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearStandardInput.getSteeringAssist
	float getSteeringAssist();                                                                                               // [0x18f6510] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearStandardInput.getSteerDeadzone
	float getSteerDeadzone();                                                                                                // [0x18f6470] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearStandardInput.getShiftRAxis
	FName getShiftRAxis();                                                                                                   // [0x18f63f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearStandardInput.getShifterType
	FGearShifterType getShifterType();                                                                                       // [0x18f6410] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearStandardInput.getShiftAxis
	FName getShiftAxis();                                                                                                    // [0x18f63d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearStandardInput.getShift6Axis
	FName getShift6Axis();                                                                                                   // [0x18f63b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearStandardInput.getShift5Axis
	FName getShift5Axis();                                                                                                   // [0x18f6390] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearStandardInput.getShift4Axis
	FName getShift4Axis();                                                                                                   // [0x18f6370] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearStandardInput.getShift3Axis
	FName getShift3Axis();                                                                                                   // [0x18f6350] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearStandardInput.getShift2Axis
	FName getShift2Axis();                                                                                                   // [0x18f6330] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearStandardInput.getShift1Axis
	FName getShift1Axis();                                                                                                   // [0x18f6310] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearStandardInput.getRightAxis
	FName getRightAxis();                                                                                                    // [0x18f62f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearStandardInput.getLeftAxis
	FName getLeftAxis();                                                                                                     // [0x18f61f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearStandardInput.getHorizontalAxis
	FName getHorizontalAxis();                                                                                               // [0x18f61d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearStandardInput.getHandbrakeAxis
	FName getHandbrakeAxis();                                                                                                // [0x18f61b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearStandardInput.getControllerType
	FGearControllerType getControllerType();                                                                                 // [0x18f60e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearStandardInput.getCombinedAxis
	bool getCombinedAxis();                                                                                                  // [0x18f60c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearStandardInput.getClutchSensivity
	float getClutchSensivity();                                                                                              // [0x18f60a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearStandardInput.getClutchRange
	float getClutchRange();                                                                                                  // [0x18f6080] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearStandardInput.getClutchDeadzone
	float getClutchDeadzone();                                                                                               // [0x18f6060] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearStandardInput.getClutchAxis
	FName getClutchAxis();                                                                                                   // [0x18f6040] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearStandardInput.getBrakingSensivity
	float getBrakingSensivity();                                                                                             // [0x18f5f80] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearStandardInput.getBrakingRange
	float getBrakingRange();                                                                                                 // [0x18f5f60] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearStandardInput.getBrakingDeadzone
	float getBrakingDeadzone();                                                                                              // [0x18f5f40] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearStandardInput.getBrakeAxis
	FName getBrakeAxis();                                                                                                    // [0x18f5f20] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/FGearPlugin.FGearSuspensionConstraint
/// Size: 0x0020 (0x0002B0 - 0x0002D0)
class UFGearSuspensionConstraint : public UFGearTelemetryDrawer : UFGearTelemetryDrawer
{ 
public:
	bool                                               mIsEnabled;                                                 // 0x02A8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x02A9   (0x0007)  MISSED
	TArray<UPhysicsConstraintComponent*>               mJTS;                                                       // 0x02B0   (0x0010)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x02C0   (0x0010)  MISSED


	/// Functions
	// Function /Script/FGearPlugin.FGearSuspensionConstraint.SetEnabled
	void SetEnabled(bool Enable);                                                                                            // [0x18f2ab0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/FGearPlugin.FGearTire
/// Size: 0x0150 (0x000028 - 0x000178)
class UFGearTire : public UObject : UObject
{ 
public:
	FRuntimeFloatCurve                                 mLngCurve;                                                  // 0x0028   (0x0088)  
	FRuntimeFloatCurve                                 mLatCurve;                                                  // 0x00B0   (0x0088)  
	FGearForceCombineMode                              mCombineMode;                                               // 0x0138   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0139   (0x0003)  MISSED
	float                                              mReferenceLoad;                                             // 0x013C   (0x0004)  
	float                                              mReferenceTirePressure;                                     // 0x0140   (0x0004)  
	bool                                               mForceSymmetry;                                             // 0x0144   (0x0001)  
	unsigned char                                      UnknownData01_6[0x33];                                      // 0x0145   (0x0033)  MISSED
};

/// Class /Script/FGearPlugin.FGearTire96
/// Size: 0x00D0 (0x000178 - 0x000248)
class UFGearTire96 : public UFGearTire : UFGearTire
{ 
public:
	float                                              mNominalLoad;                                               // 0x0178   (0x0004)  
	float                                              PCX1;                                                       // 0x017C   (0x0004)  
	float                                              PDX1;                                                       // 0x0180   (0x0004)  
	float                                              PDX2;                                                       // 0x0184   (0x0004)  
	float                                              PEX1;                                                       // 0x0188   (0x0004)  
	float                                              PEX2;                                                       // 0x018C   (0x0004)  
	float                                              PEX3;                                                       // 0x0190   (0x0004)  
	float                                              PEX4;                                                       // 0x0194   (0x0004)  
	float                                              PKX1;                                                       // 0x0198   (0x0004)  
	float                                              PKX2;                                                       // 0x019C   (0x0004)  
	float                                              PKX3;                                                       // 0x01A0   (0x0004)  
	float                                              PHX1;                                                       // 0x01A4   (0x0004)  
	float                                              PHX2;                                                       // 0x01A8   (0x0004)  
	float                                              PVX1;                                                       // 0x01AC   (0x0004)  
	float                                              PVX2;                                                       // 0x01B0   (0x0004)  
	float                                              PCY1;                                                       // 0x01B4   (0x0004)  
	float                                              PDY1;                                                       // 0x01B8   (0x0004)  
	float                                              PDY2;                                                       // 0x01BC   (0x0004)  
	float                                              PDY3;                                                       // 0x01C0   (0x0004)  
	float                                              PEY1;                                                       // 0x01C4   (0x0004)  
	float                                              PEY2;                                                       // 0x01C8   (0x0004)  
	float                                              PEY3;                                                       // 0x01CC   (0x0004)  
	float                                              PEY4;                                                       // 0x01D0   (0x0004)  
	float                                              PKY1;                                                       // 0x01D4   (0x0004)  
	float                                              PKY2;                                                       // 0x01D8   (0x0004)  
	float                                              PKY3;                                                       // 0x01DC   (0x0004)  
	float                                              PHY1;                                                       // 0x01E0   (0x0004)  
	float                                              PHY2;                                                       // 0x01E4   (0x0004)  
	float                                              PHY3;                                                       // 0x01E8   (0x0004)  
	float                                              PVY1;                                                       // 0x01EC   (0x0004)  
	float                                              PVY2;                                                       // 0x01F0   (0x0004)  
	float                                              PVY3;                                                       // 0x01F4   (0x0004)  
	float                                              PVY4;                                                       // 0x01F8   (0x0004)  
	float                                              RBX1;                                                       // 0x01FC   (0x0004)  
	float                                              RBX2;                                                       // 0x0200   (0x0004)  
	float                                              RCX1;                                                       // 0x0204   (0x0004)  
	float                                              REX1;                                                       // 0x0208   (0x0004)  
	float                                              REX2;                                                       // 0x020C   (0x0004)  
	float                                              RHX1;                                                       // 0x0210   (0x0004)  
	float                                              RBY1;                                                       // 0x0214   (0x0004)  
	float                                              RBY2;                                                       // 0x0218   (0x0004)  
	float                                              RBY3;                                                       // 0x021C   (0x0004)  
	float                                              RCY1;                                                       // 0x0220   (0x0004)  
	float                                              REY1;                                                       // 0x0224   (0x0004)  
	float                                              REY2;                                                       // 0x0228   (0x0004)  
	float                                              RHY1;                                                       // 0x022C   (0x0004)  
	float                                              RVY1;                                                       // 0x0230   (0x0004)  
	float                                              RVY2;                                                       // 0x0234   (0x0004)  
	float                                              RVY3;                                                       // 0x0238   (0x0004)  
	float                                              RVY4;                                                       // 0x023C   (0x0004)  
	float                                              RVY5;                                                       // 0x0240   (0x0004)  
	float                                              RVY6;                                                       // 0x0244   (0x0004)  
};

/// Class /Script/FGearPlugin.FGearTireMF61
/// Size: 0x0200 (0x000178 - 0x000378)
class UFGearTireMF61 : public UFGearTire : UFGearTire
{ 
public:
	float                                              mNominalLoad;                                               // 0x0178   (0x0004)  
	float                                              mNominalPressure;                                           // 0x017C   (0x0004)  
	float                                              PCX1;                                                       // 0x0180   (0x0004)  
	float                                              PDX1;                                                       // 0x0184   (0x0004)  
	float                                              PDX2;                                                       // 0x0188   (0x0004)  
	float                                              PDX3;                                                       // 0x018C   (0x0004)  
	float                                              PEX1;                                                       // 0x0190   (0x0004)  
	float                                              PEX2;                                                       // 0x0194   (0x0004)  
	float                                              PEX3;                                                       // 0x0198   (0x0004)  
	float                                              PEX4;                                                       // 0x019C   (0x0004)  
	float                                              PKX1;                                                       // 0x01A0   (0x0004)  
	float                                              PKX2;                                                       // 0x01A4   (0x0004)  
	float                                              PKX3;                                                       // 0x01A8   (0x0004)  
	float                                              PHX1;                                                       // 0x01AC   (0x0004)  
	float                                              PHX2;                                                       // 0x01B0   (0x0004)  
	float                                              PVX1;                                                       // 0x01B4   (0x0004)  
	float                                              PVX2;                                                       // 0x01B8   (0x0004)  
	float                                              PPX1;                                                       // 0x01BC   (0x0004)  
	float                                              PPX2;                                                       // 0x01C0   (0x0004)  
	float                                              PPX3;                                                       // 0x01C4   (0x0004)  
	float                                              PPX4;                                                       // 0x01C8   (0x0004)  
	float                                              PCY1;                                                       // 0x01CC   (0x0004)  
	float                                              PDY1;                                                       // 0x01D0   (0x0004)  
	float                                              PDY2;                                                       // 0x01D4   (0x0004)  
	float                                              PDY3;                                                       // 0x01D8   (0x0004)  
	float                                              PEY1;                                                       // 0x01DC   (0x0004)  
	float                                              PEY2;                                                       // 0x01E0   (0x0004)  
	float                                              PEY3;                                                       // 0x01E4   (0x0004)  
	float                                              PEY4;                                                       // 0x01E8   (0x0004)  
	float                                              PEY5;                                                       // 0x01EC   (0x0004)  
	float                                              PKY1;                                                       // 0x01F0   (0x0004)  
	float                                              PKY2;                                                       // 0x01F4   (0x0004)  
	float                                              PKY3;                                                       // 0x01F8   (0x0004)  
	float                                              PKY4;                                                       // 0x01FC   (0x0004)  
	float                                              PKY5;                                                       // 0x0200   (0x0004)  
	float                                              PKY6;                                                       // 0x0204   (0x0004)  
	float                                              PKY7;                                                       // 0x0208   (0x0004)  
	float                                              PHY1;                                                       // 0x020C   (0x0004)  
	float                                              PHY2;                                                       // 0x0210   (0x0004)  
	float                                              PVY1;                                                       // 0x0214   (0x0004)  
	float                                              PVY2;                                                       // 0x0218   (0x0004)  
	float                                              PVY3;                                                       // 0x021C   (0x0004)  
	float                                              PVY4;                                                       // 0x0220   (0x0004)  
	float                                              PPY1;                                                       // 0x0224   (0x0004)  
	float                                              PPY2;                                                       // 0x0228   (0x0004)  
	float                                              PPY3;                                                       // 0x022C   (0x0004)  
	float                                              PPY4;                                                       // 0x0230   (0x0004)  
	float                                              PPY5;                                                       // 0x0234   (0x0004)  
	float                                              RBX1;                                                       // 0x0238   (0x0004)  
	float                                              RBX2;                                                       // 0x023C   (0x0004)  
	float                                              RBX3;                                                       // 0x0240   (0x0004)  
	float                                              RCX1;                                                       // 0x0244   (0x0004)  
	float                                              REX1;                                                       // 0x0248   (0x0004)  
	float                                              REX2;                                                       // 0x024C   (0x0004)  
	float                                              RHX1;                                                       // 0x0250   (0x0004)  
	float                                              RBY1;                                                       // 0x0254   (0x0004)  
	float                                              RBY2;                                                       // 0x0258   (0x0004)  
	float                                              RBY3;                                                       // 0x025C   (0x0004)  
	float                                              RBY4;                                                       // 0x0260   (0x0004)  
	float                                              RCY1;                                                       // 0x0264   (0x0004)  
	float                                              REY1;                                                       // 0x0268   (0x0004)  
	float                                              REY2;                                                       // 0x026C   (0x0004)  
	float                                              RHY1;                                                       // 0x0270   (0x0004)  
	float                                              RHY2;                                                       // 0x0274   (0x0004)  
	float                                              RVY1;                                                       // 0x0278   (0x0004)  
	float                                              RVY2;                                                       // 0x027C   (0x0004)  
	float                                              RVY3;                                                       // 0x0280   (0x0004)  
	float                                              RVY4;                                                       // 0x0284   (0x0004)  
	float                                              RVY5;                                                       // 0x0288   (0x0004)  
	float                                              RVY6;                                                       // 0x028C   (0x0004)  
	float                                              QSX1;                                                       // 0x0290   (0x0004)  
	float                                              QSX2;                                                       // 0x0294   (0x0004)  
	float                                              QSX3;                                                       // 0x0298   (0x0004)  
	float                                              QSX4;                                                       // 0x029C   (0x0004)  
	float                                              QSX5;                                                       // 0x02A0   (0x0004)  
	float                                              QSX6;                                                       // 0x02A4   (0x0004)  
	float                                              QSX7;                                                       // 0x02A8   (0x0004)  
	float                                              QSX8;                                                       // 0x02AC   (0x0004)  
	float                                              QSX9;                                                       // 0x02B0   (0x0004)  
	float                                              QSX10;                                                      // 0x02B4   (0x0004)  
	float                                              QSX11;                                                      // 0x02B8   (0x0004)  
	float                                              QSX12;                                                      // 0x02BC   (0x0004)  
	float                                              QSX13;                                                      // 0x02C0   (0x0004)  
	float                                              QSX14;                                                      // 0x02C4   (0x0004)  
	float                                              PPMX1;                                                      // 0x02C8   (0x0004)  
	float                                              QSY1;                                                       // 0x02CC   (0x0004)  
	float                                              QSY2;                                                       // 0x02D0   (0x0004)  
	float                                              QSY3;                                                       // 0x02D4   (0x0004)  
	float                                              QSY4;                                                       // 0x02D8   (0x0004)  
	float                                              QSY5;                                                       // 0x02DC   (0x0004)  
	float                                              QSY6;                                                       // 0x02E0   (0x0004)  
	float                                              QSY7;                                                       // 0x02E4   (0x0004)  
	float                                              QSY8;                                                       // 0x02E8   (0x0004)  
	float                                              VREF;                                                       // 0x02EC   (0x0004)  
	float                                              QBZ1;                                                       // 0x02F0   (0x0004)  
	float                                              QBZ2;                                                       // 0x02F4   (0x0004)  
	float                                              QBZ3;                                                       // 0x02F8   (0x0004)  
	float                                              QBZ4;                                                       // 0x02FC   (0x0004)  
	float                                              QBZ5;                                                       // 0x0300   (0x0004)  
	float                                              QBZ9;                                                       // 0x0304   (0x0004)  
	float                                              QBZ10;                                                      // 0x0308   (0x0004)  
	float                                              QCZ1;                                                       // 0x030C   (0x0004)  
	float                                              QDZ1;                                                       // 0x0310   (0x0004)  
	float                                              QDZ2;                                                       // 0x0314   (0x0004)  
	float                                              QDZ3;                                                       // 0x0318   (0x0004)  
	float                                              QDZ4;                                                       // 0x031C   (0x0004)  
	float                                              QDZ6;                                                       // 0x0320   (0x0004)  
	float                                              QDZ7;                                                       // 0x0324   (0x0004)  
	float                                              QDZ8;                                                       // 0x0328   (0x0004)  
	float                                              QDZ9;                                                       // 0x032C   (0x0004)  
	float                                              QDZ10;                                                      // 0x0330   (0x0004)  
	float                                              QDZ11;                                                      // 0x0334   (0x0004)  
	float                                              QEZ1;                                                       // 0x0338   (0x0004)  
	float                                              QEZ2;                                                       // 0x033C   (0x0004)  
	float                                              QEZ3;                                                       // 0x0340   (0x0004)  
	float                                              QEZ4;                                                       // 0x0344   (0x0004)  
	float                                              QEZ5;                                                       // 0x0348   (0x0004)  
	float                                              QHZ1;                                                       // 0x034C   (0x0004)  
	float                                              QHZ2;                                                       // 0x0350   (0x0004)  
	float                                              QHZ3;                                                       // 0x0354   (0x0004)  
	float                                              QHZ4;                                                       // 0x0358   (0x0004)  
	float                                              PPZ1;                                                       // 0x035C   (0x0004)  
	float                                              PPZ2;                                                       // 0x0360   (0x0004)  
	float                                              SSZ1;                                                       // 0x0364   (0x0004)  
	float                                              SSZ2;                                                       // 0x0368   (0x0004)  
	float                                              SSZ3;                                                       // 0x036C   (0x0004)  
	float                                              SSZ4;                                                       // 0x0370   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0374   (0x0004)  MISSED
};

/// Class /Script/FGearPlugin.FGearTireSimple
/// Size: 0x0020 (0x000178 - 0x000198)
class UFGearTireSimple : public UFGearTire : UFGearTire
{ 
public:
	float                                              Lnb;                                                        // 0x0178   (0x0004)  
	float                                              Lnc;                                                        // 0x017C   (0x0004)  
	float                                              Lnd;                                                        // 0x0180   (0x0004)  
	float                                              Lne;                                                        // 0x0184   (0x0004)  
	float                                              Ltb;                                                        // 0x0188   (0x0004)  
	float                                              Ltc;                                                        // 0x018C   (0x0004)  
	float                                              Ltd;                                                        // 0x0190   (0x0004)  
	float                                              Lte;                                                        // 0x0194   (0x0004)  
};

/// Class /Script/FGearPlugin.FGearTransmission
/// Size: 0x0080 (0x0002B0 - 0x000330)
class UFGearTransmission : public UFGearTelemetryDrawer : UFGearTelemetryDrawer
{ 
public:
	FMulticastInlineDelegate                           OnGearChanged;                                              // 0x02A8   (0x0010)  
	bool                                               mAutoChange;                                                // 0x02B8   (0x0001)  
	bool                                               mAutoReverse;                                               // 0x02B9   (0x0001)  
	bool                                               mAutoClutch;                                                // 0x02BA   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x02BB   (0x0001)  MISSED
	float                                              mChangeTime;                                                // 0x02BC   (0x0004)  
	float                                              mGearUpRatio;                                               // 0x02C0   (0x0004)  
	float                                              mGearDownRatio;                                             // 0x02C4   (0x0004)  
	float                                              mClutchTime;                                                // 0x02C8   (0x0004)  
	float                                              mClutchScale;                                               // 0x02CC   (0x0004)  
	UCurveFloat*                                       mCluthEngagement;                                           // 0x02D0   (0x0008)  
	TArray<float>                                      mGearRatios;                                                // 0x02D8   (0x0010)  
	float                                              mFinalGearRatio;                                            // 0x02E8   (0x0004)  
	unsigned char                                      UnknownData01_6[0x44];                                      // 0x02EC   (0x0044)  MISSED


	/// Functions
	// Function /Script/FGearPlugin.FGearTransmission.setThrottleState
	void setThrottleState(int32_t ts);                                                                                       // [0x18fdca0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearTransmission.setPauseTime
	void setPauseTime(float F);                                                                                              // [0x18fd700] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearTransmission.setGearUpRatio
	void setGearUpRatio(float F);                                                                                            // [0x18f2830] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearTransmission.setGearRatio
	void setGearRatio(int32_t gear, float Ratio);                                                                            // [0x18fd100] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearTransmission.setGearDownRatio
	void setGearDownRatio(float F);                                                                                          // [0x18f2380] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearTransmission.setGearCount
	void setGearCount(int32_t Size);                                                                                         // [0x18fd000] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearTransmission.setFinalGearRatio
	void setFinalGearRatio(float F);                                                                                         // [0x18fcf00] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearTransmission.setCurrentGear
	void setCurrentGear(int32_t gear, bool Force);                                                                           // [0x18fcda0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearTransmission.setClutchTime
	void setClutchTime(float T);                                                                                             // [0x18f1f50] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearTransmission.setClutchState
	void setClutchState(float cs);                                                                                           // [0x18fcd20] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearTransmission.setClutchScale
	void setClutchScale(float cs);                                                                                           // [0x18f2f30] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearTransmission.setChangeTime
	void setChangeTime(float T);                                                                                             // [0x18f2730] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearTransmission.setAutoReverse
	void setAutoReverse(bool B);                                                                                             // [0x18fcb20] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearTransmission.setAutoClutch
	void setAutoClutch(bool B);                                                                                              // [0x18fca90] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearTransmission.setAutoChange
	void setAutoChange(bool B);                                                                                              // [0x18fca00] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearTransmission.refreshParameters
	void refreshParameters();                                                                                                // [0x18fc570] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearTransmission.isChanging
	bool isChanging();                                                                                                       // [0x18fc3f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearTransmission.isAutoReverse
	bool isAutoReverse();                                                                                                    // [0x18fc3d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearTransmission.isAutoClutch
	bool isAutoClutch();                                                                                                     // [0x18fc3b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearTransmission.isAutoChange
	bool isAutoChange();                                                                                                     // [0x18fc390] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearTransmission.getTransmissionRatio
	float getTransmissionRatio();                                                                                            // [0x18fc110] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearTransmission.getMaxSpeeds
	TArray<float> getMaxSpeeds();                                                                                            // [0x18fbb40] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearTransmission.getMaxGear
	int32_t getMaxGear();                                                                                                    // [0x18f1470] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearTransmission.getGearUpRatio
	float getGearUpRatio();                                                                                                  // [0x18f1710] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearTransmission.getGearRatio
	float getGearRatio(int32_t gear);                                                                                        // [0x18fb910] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearTransmission.getGearMaxSpeed
	float getGearMaxSpeed(int32_t gear);                                                                                     // [0x18fb850] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearTransmission.getGearDownRatio
	float getGearDownRatio();                                                                                                // [0x18f15c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearTransmission.getGearCount
	int32_t getGearCount();                                                                                                  // [0x18f1490] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearTransmission.getFinalGearRatio
	float getFinalGearRatio();                                                                                               // [0x18f16b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearTransmission.getCurGear
	int32_t getCurGear();                                                                                                    // [0x18fb730] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearTransmission.getCluthEngagementCurve
	UCurveFloat* getCluthEngagementCurve();                                                                                  // [0xc8ed70] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearTransmission.getClutchTime
	float getClutchTime();                                                                                                   // [0x18f1500] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearTransmission.getClutchScale
	float getClutchScale();                                                                                                  // [0x18f18b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearTransmission.getClutchPower
	float getClutchPower();                                                                                                  // [0x18fb6f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearTransmission.getChangeTime
	float getChangeTime();                                                                                                   // [0x18f16f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearTransmission.gearUp
	void gearUp(bool skipN);                                                                                                 // [0x18fb3a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearTransmission.gearDown
	void gearDown(bool skipN);                                                                                               // [0x18fb310] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/FGearPlugin.FGearVehicle
/// Size: 0x0338 (0x000318 - 0x000650)
class AFGearVehicle : public APawn : APawn
{ 
public:
	UFGearEngine*                                      mEngine;                                                    // 0x0318   (0x0008)  
	UFGearTransmission*                                mTransmission;                                              // 0x0320   (0x0008)  
	UFGearStandardInput*                               mStandardInput;                                             // 0x0328   (0x0008)  
	UFGearAeroDynamics*                                mAeroDynamics;                                              // 0x0330   (0x0008)  
	UFGearOrbitCamera*                                 mOrbitCamera;                                               // 0x0338   (0x0008)  
	UFGearArcadeAssists*                               mArcadeAssists;                                             // 0x0340   (0x0008)  
	UFGearSuspensionConstraint*                        mSuspensionConstraint;                                      // 0x0348   (0x0008)  
	UFGearAxle*                                        mAxle0;                                                     // 0x0350   (0x0008)  
	UFGearWheelOptions*                                mWheelOptions0;                                             // 0x0358   (0x0008)  
	UFGearWheel*                                       mWheelLeft0;                                                // 0x0360   (0x0008)  
	UFGearWheel*                                       mWheelRight0;                                               // 0x0368   (0x0008)  
	UFGearAxle*                                        mAxle1;                                                     // 0x0370   (0x0008)  
	UFGearWheelOptions*                                mWheelOptions1;                                             // 0x0378   (0x0008)  
	UFGearWheel*                                       mWheelLeft1;                                                // 0x0380   (0x0008)  
	UFGearWheel*                                       mWheelRight1;                                               // 0x0388   (0x0008)  
	UFGearReplication*                                 mReplication;                                               // 0x0390   (0x0008)  
	UFGearSkeletalMeshComponent*                       mMesh;                                                      // 0x0398   (0x0008)  
	UFGearAnimInstance*                                mAnimation;                                                 // 0x03A0   (0x0008)  
	int32_t                                            mUpdateRate;                                                // 0x03A8   (0x0004)  
	float                                              mMass;                                                      // 0x03AC   (0x0004)  
	FVector                                            mInertiaScale;                                              // 0x03B0   (0x0018)  
	FVector                                            mCenterofMass;                                              // 0x03C8   (0x0018)  
	bool                                               mCustomGravity;                                             // 0x03E0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x03E1   (0x0007)  MISSED
	FVector                                            mGravity;                                                   // 0x03E8   (0x0018)  
	FGearQueryType                                     mQueryType;                                                 // 0x0400   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0401   (0x0003)  MISSED
	int32_t                                            mRays;                                                      // 0x0404   (0x0004)  
	int32_t                                            mLateralRays;                                               // 0x0408   (0x0004)  
	FGearQueryMobilityType                             mQueryMobilityType;                                         // 0x040C   (0x0001)  
	TEnumAsByte<ECollisionChannel>                     mTraceChannel;                                              // 0x040D   (0x0001)  
	char                                               mIgnoreMask;                                                // 0x040E   (0x0001)  
	bool                                               mTraceComplex;                                              // 0x040F   (0x0001)  
	UStaticMesh*                                       mConvexAsset;                                               // 0x0410   (0x0008)  
	FGearUpDirection                                   mConvexUp;                                                  // 0x0418   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0419   (0x0007)  MISSED
	FRotator                                           mConvexRotation;                                            // 0x0420   (0x0018)  
	bool                                               mConvexVisible;                                             // 0x0438   (0x0001)  
	unsigned char                                      UnknownData03_5[0x7];                                       // 0x0439   (0x0007)  MISSED
	UStaticMesh*                                       mDefaultCylinderAsset;                                      // 0x0440   (0x0008)  
	float                                              mHandBrakePower;                                            // 0x0448   (0x0004)  
	float                                              mRollingResistanceCoeff;                                    // 0x044C   (0x0004)  
	float                                              mStickyTireSpeed;                                           // 0x0450   (0x0004)  
	float                                              mReactionScale;                                             // 0x0454   (0x0004)  
	bool                                               mAllowReverse;                                              // 0x0458   (0x0001)  
	bool                                               mDetectGround;                                              // 0x0459   (0x0001)  
	unsigned char                                      UnknownData04_5[0x2];                                       // 0x045A   (0x0002)  MISSED
	float                                              mHardContactScale;                                          // 0x045C   (0x0004)  
	bool                                               mRelaxationDownforce;                                       // 0x0460   (0x0001)  
	bool                                               mTirePenetration;                                           // 0x0461   (0x0001)  
	unsigned char                                      UnknownData05_5[0x2];                                       // 0x0462   (0x0002)  MISSED
	FGearTelemetryOptions                              mTelemetry;                                                 // 0x0464   (0x001C)  
	UCurveFloat*                                       mBrakeEngagement;                                           // 0x0480   (0x0008)  
	float                                              mABS;                                                       // 0x0488   (0x0004)  
	float                                              mASR;                                                       // 0x048C   (0x0004)  
	float                                              mUnderSteerAssist;                                          // 0x0490   (0x0004)  
	float                                              mMinUnderSteerAngle;                                        // 0x0494   (0x0004)  
	float                                              mOverSteerAssist;                                           // 0x0498   (0x0004)  
	float                                              mMinOverSteerAngle;                                         // 0x049C   (0x0004)  
	float                                              mFrontAntiRollPower;                                        // 0x04A0   (0x0004)  
	float                                              mRearAntiRollPower;                                         // 0x04A4   (0x0004)  
	unsigned char                                      UnknownData06_6[0x1A8];                                     // 0x04A8   (0x01A8)  MISSED


	/// Functions
	// Function /Script/FGearPlugin.FGearVehicle.setUseCustomGravity
	void setUseCustomGravity(bool Use);                                                                                      // [0x18fe070] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearVehicle.setUpdateRate
	void setUpdateRate(int32_t I);                                                                                           // [0x18fdfe0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearVehicle.setUpdateInputs
	void setUpdateInputs(bool B);                                                                                            // [0x18fdf50] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearVehicle.setUnderSteerAssist
	void setUnderSteerAssist(float F);                                                                                       // [0x18fded0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearVehicle.setTraceComplex
	void setTraceComplex(bool B);                                                                                            // [0x18fde40] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearVehicle.setTraceChannel
	void setTraceChannel(TEnumAsByte<ECollisionChannel> L);                                                                  // [0x18fddc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearVehicle.setTirePenetration
	void setTirePenetration(bool B);                                                                                         // [0x18fdd30] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearVehicle.setStickyTireState
	void setStickyTireState(float F);                                                                                        // [0x18fdc20] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearVehicle.setStickyTireSpeed
	void setStickyTireSpeed(float F);                                                                                        // [0x18fdba0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearVehicle.setSteering
	void setSteering(float steerInput);                                                                                      // [0x18fdb20] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearVehicle.setRollingResistanceCoeff
	void setRollingResistanceCoeff(float F);                                                                                 // [0x18fdaa0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearVehicle.setRelaxationDownforce
	void setRelaxationDownforce(bool B);                                                                                     // [0x18fda10] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearVehicle.setRearAntiRollPower
	void setRearAntiRollPower(float F);                                                                                      // [0x18fd990] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearVehicle.setReactionForceScale
	void setReactionForceScale(float F);                                                                                     // [0x18fd910] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearVehicle.setRayCount
	void setRayCount(int32_t ct);                                                                                            // [0x18fd880] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearVehicle.setQueryType
	void setQueryType(FGearQueryType T);                                                                                     // [0x18fd800] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearVehicle.setQueryMobilityType
	void setQueryMobilityType(FGearQueryMobilityType T);                                                                     // [0x18fd780] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearVehicle.setOverSteerAssist
	void setOverSteerAssist(float F);                                                                                        // [0x18fd680] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearVehicle.setMinUnderSteerAngle
	void setMinUnderSteerAngle(float F);                                                                                     // [0x18fd600] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearVehicle.setMinOverSteerAngle
	void setMinOverSteerAngle(float F);                                                                                      // [0x18fd580] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearVehicle.setMass
	void setMass(float Mass);                                                                                                // [0x18fd500] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearVehicle.setLateralRayCount
	void setLateralRayCount(int32_t ct);                                                                                     // [0x18fd470] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearVehicle.setInertiaScale
	void setInertiaScale(FVector iscale);                                                                                    // [0x18fd3e0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearVehicle.setIgnoreMask
	void setIgnoreMask(char F);                                                                                              // [0x18fd360] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearVehicle.setHardContactScale
	void setHardContactScale(float F);                                                                                       // [0x18fd2e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearVehicle.setHandbrakePower
	void setHandbrakePower(float F);                                                                                         // [0x18fd260] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearVehicle.SetGravity
	void SetGravity(FVector Gravity);                                                                                        // [0x18fd1d0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearVehicle.setFrontAntiRollPower
	void setFrontAntiRollPower(float F);                                                                                     // [0x18fcf80] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearVehicle.setDetectGround
	void setDetectGround(bool B);                                                                                            // [0x18fce70] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearVehicle.setCenterOfMassOffset
	void setCenterOfMassOffset(FVector com);                                                                                 // [0x18fcc90] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearVehicle.setBraking
	void setBraking(float BrakeInput, bool Handbrake);                                                                       // [0x18fcbb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearVehicle.setASR
	void setASR(float F);                                                                                                    // [0x18fc8f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearVehicle.setAllowReverse
	void setAllowReverse(bool allow);                                                                                        // [0x18fc970] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearVehicle.setABS
	void setABS(float F);                                                                                                    // [0x18fc870] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearVehicle.serverReset
	void serverReset(FVector Position, FQuat Rotation);                                                                      // [0x18fc770] Final|Net|NetReliableNative|Event|Private|NetServer|HasDefaults|NetValidate 
	// Function /Script/FGearPlugin.FGearVehicle.saveState
	void saveState(FFGearVehicleState& State);                                                                               // [0x18fc680] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearVehicle.Reset
	void Reset(FVector Position, FRotator Rotation);                                                                         // [0x18fc590] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearVehicle.overrideInputTick
	void overrideInputTick();                                                                                                // [0xd0bd90] Native|Event|Protected|BlueprintEvent 
	// Function /Script/FGearPlugin.FGearVehicle.OnSimulatedPhysicsChanged
	void OnSimulatedPhysicsChanged(bool IsEnabled);                                                                          // [0x2407bf0] Event|Public|BlueprintEvent 
	// Function /Script/FGearPlugin.FGearVehicle.loadState
	void loadState(FFGearVehicleState State);                                                                                // [0x18fc480] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearVehicle.isUnderSteering
	bool isUnderSteering();                                                                                                  // [0x18fc460] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearVehicle.isOverSteering
	bool isOverSteering();                                                                                                   // [0x18fc440] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearVehicle.isHandbrakeOn
	bool isHandbrakeOn();                                                                                                    // [0x18fc420] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearVehicle.getWheelSpeedLimitKMH
	float getWheelSpeedLimitKMH();                                                                                           // [0x18fc360] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearVehicle.getWheelCount
	int32_t getWheelCount();                                                                                                 // [0x18fc330] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearVehicle.getVelocitySize
	float getVelocitySize();                                                                                                 // [0x18fc2c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearVehicle.getVelocityDir
	FVector getVelocityDir();                                                                                                // [0x18fc1d0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearVehicle.getUpDir
	FVector getUpDir();                                                                                                      // [0x18fc140] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearVehicle.getUpdateRate
	int32_t getUpdateRate();                                                                                                 // [0x18fc1b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearVehicle.getTransmission
	UFGearTransmission* getTransmission();                                                                                   // [0x18fc0f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearVehicle.getTraceComplex
	bool getTraceComplex();                                                                                                  // [0x18fc0d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearVehicle.getTraceChannel
	TEnumAsByte<ECollisionChannel> getTraceChannel();                                                                        // [0x18fc0b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearVehicle.getTirePenetration
	bool getTirePenetration();                                                                                               // [0x18fc090] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearVehicle.getSteerDeltaAngle
	float getSteerDeltaAngle(bool front);                                                                                    // [0x18fbff0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearVehicle.getStandardInput
	UFGearStandardInput* getStandardInput();                                                                                 // [0x15233c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearVehicle.getSimCoeff
	float getSimCoeff();                                                                                                     // [0x18fbfd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearVehicle.getRotation
	FQuat getRotation();                                                                                                     // [0x18fbea0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearVehicle.getRollingResistanceCoeff
	float getRollingResistanceCoeff();                                                                                       // [0x18fbe80] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearVehicle.getRightSpeed
	float getRightSpeed();                                                                                                   // [0x18fbe50] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearVehicle.getRelaxationDownforce
	bool getRelaxationDownforce();                                                                                           // [0x18fbe30] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearVehicle.getRayCount
	int32_t getRayCount();                                                                                                   // [0x18fbe10] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearVehicle.getQueryType
	FGearQueryType getQueryType();                                                                                           // [0x18fbdf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearVehicle.getQueryMobilityType
	FGearQueryMobilityType getQueryMobilityType();                                                                           // [0x18fbdd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearVehicle.GetPosition
	FVector GetPosition();                                                                                                   // [0x18fbd50] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearVehicle.getNormalizedSteering
	float getNormalizedSteering();                                                                                           // [0x18fbd20] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearVehicle.getMyVelocity
	FVector getMyVelocity();                                                                                                 // [0x18fbce0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearVehicle.getMinWheelKMHSpeed
	float getMinWheelKMHSpeed();                                                                                             // [0x18fbcb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearVehicle.getMesh
	UFGearSkeletalMeshComponent* getMesh();                                                                                  // [0x18fbc90] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearVehicle.getMaxWheelRPMToKMH
	float getMaxWheelRPMToKMH();                                                                                             // [0x18fbc60] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearVehicle.getMaxWheelKMHSpeed
	float getMaxWheelKMHSpeed();                                                                                             // [0x18fbc30] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearVehicle.getMaxSteeringAngle
	float getMaxSteeringAngle();                                                                                             // [0x18fbc00] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearVehicle.getMassPerWheel
	float getMassPerWheel();                                                                                                 // [0x18fbb00] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearVehicle.GetMass
	float GetMass();                                                                                                         // [0x18fbae0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearVehicle.getLocalInertiaTensor
	FVector getLocalInertiaTensor();                                                                                         // [0x18fbaa0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearVehicle.getLateralRayCount
	int32_t getLateralRayCount();                                                                                            // [0x18fba80] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearVehicle.getKMHSpeed
	float getKMHSpeed();                                                                                                     // [0x18fba40] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearVehicle.getInertiaScale
	FVector getInertiaScale();                                                                                               // [0x18fba10] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearVehicle.getIgnoreMask
	char getIgnoreMask();                                                                                                    // [0x18fb9f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearVehicle.getHardContactScale
	float getHardContactScale();                                                                                             // [0x18fb9d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearVehicle.getHandbrakePower
	float getHandbrakePower();                                                                                               // [0x18fb9b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearVehicle.GetForwardSpeed
	float GetForwardSpeed();                                                                                                 // [0x18fb820] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearVehicle.getForwardDir
	FVector getForwardDir();                                                                                                 // [0x18fb7b0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearVehicle.getESPActive
	bool getESPActive();                                                                                                     // [0x18fb770] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearVehicle.getEngine
	UFGearEngine* getEngine();                                                                                               // [0x18fb790] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearVehicle.getDetectGround
	bool getDetectGround();                                                                                                  // [0x18fb750] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearVehicle.GetCenterOfMass
	FVector GetCenterOfMass();                                                                                               // [0x18fb6c0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearVehicle.getAxleDistance
	float getAxleDistance(int32_t axle1, int32_t axle2);                                                                     // [0x18fb5f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearVehicle.getAxleCount
	int32_t getAxleCount();                                                                                                  // [0x18fb5d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearVehicle.getAxle
	UFGearAxle* getAxle(int32_t I);                                                                                          // [0x18fb530] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearVehicle.getASRActive
	bool getASRActive();                                                                                                     // [0x18fb4c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearVehicle.getASR
	float getASR();                                                                                                          // [0x18fb490] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearVehicle.getAnim
	UFGearAnimInstance* getAnim();                                                                                           // [0x18fb510] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearVehicle.getAllowReverse
	bool getAllowReverse();                                                                                                  // [0x18fb4f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearVehicle.getAeroDynamics
	UFGearAeroDynamics* getAeroDynamics();                                                                                   // [0x1855600] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearVehicle.getABSActive
	bool getABSActive();                                                                                                     // [0x18fb460] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearVehicle.getABS
	float getABS();                                                                                                          // [0x18fb430] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearVehicle.clientPrepareTelemetry
	void clientPrepareTelemetry();                                                                                           // [0x18fb2f0] Final|Net|NetReliableNative|Event|Private|NetClient 
};

/// Class /Script/FGearPlugin.FGearWheel
/// Size: 0x0320 (0x0002B0 - 0x0005D0)
class UFGearWheel : public UFGearTelemetryDrawer : UFGearTelemetryDrawer
{ 
public:
	bool                                               mIsActive;                                                  // 0x02A8   (0x0001)  
	FGearWheelSide                                     mSide;                                                      // 0x02A9   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x02AA   (0x0002)  MISSED
	FName                                              mBoneName;                                                  // 0x02AC   (0x0008)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x02B4   (0x0004)  MISSED
	UStaticMeshComponent*                              mConvexShape;                                               // 0x02B8   (0x0008)  
	unsigned char                                      UnknownData02_6[0x310];                                     // 0x02C0   (0x0310)  MISSED


	/// Functions
	// Function /Script/FGearPlugin.FGearWheel.setWidth
	void setWidth(float F);                                                                                                  // [0x18fcf00] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearWheel.setWheelSide
	void setWheelSide(FGearWheelSide S);                                                                                     // [0x19023d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearWheel.setSuspensionUpTravel
	void setSuspensionUpTravel(float F);                                                                                     // [0x18f2930] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearWheel.setSuspensionSpring
	void setSuspensionSpring(float F);                                                                                       // [0x19022c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearWheel.setSuspensionPreload
	void setSuspensionPreload(float F);                                                                                      // [0x1902240] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearWheel.setSuspensionDownTravel
	void setSuspensionDownTravel(float F);                                                                                   // [0x19021c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearWheel.setSpringCoeff
	void setSpringCoeff(float F);                                                                                            // [0x1902140] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearWheel.setSpeed
	void setSpeed(float S);                                                                                                  // [0x19020c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearWheel.setRollScale
	void setRollScale(float F);                                                                                              // [0x18f27b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearWheel.setRimOffset
	void setRimOffset(float F);                                                                                              // [0x1902040] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearWheel.setRelaxationDamper
	void setRelaxationDamper(float F);                                                                                       // [0x1901fc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearWheel.setRadius
	void setRadius(float F);                                                                                                 // [0x1901f40] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearWheel.SetPressure
	void SetPressure(float F);                                                                                               // [0x1901eb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearWheel.setOverturnScale
	void setOverturnScale(float F);                                                                                          // [0x1901e30] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearWheel.setMass
	void setMass(float F);                                                                                                   // [0x18f1ed0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearWheel.setLngScale
	void setLngScale(float F);                                                                                               // [0x18f1a40] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearWheel.setLngFriction
	void setLngFriction(float F);                                                                                            // [0x18f2f30] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearWheel.setLatScale
	void setLatScale(float F);                                                                                               // [0x18f29b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearWheel.setLatFriction
	void setLatFriction(float F);                                                                                            // [0x18f1f50] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearWheel.setFrictionFactor
	void setFrictionFactor(float F);                                                                                         // [0x1901db0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearWheel.setEnable
	void setEnable(bool B);                                                                                                  // [0x18f2ab0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearWheel.setCurrentSteer
	void setCurrentSteer(float S);                                                                                           // [0x1901d30] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearWheel.setCompressionDamper
	void setCompressionDamper(float F);                                                                                      // [0x1901cb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearWheel.setBraking
	void setBraking(float B);                                                                                                // [0x1901c30] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearWheel.SetBrakeTorque
	void SetBrakeTorque(float F);                                                                                            // [0x18f28b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearWheel.setBoneName
	void setBoneName(FString NewName);                                                                                       // [0x1901b10] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearWheel.setAlignScale
	void setAlignScale(float F);                                                                                             // [0x18f1d80] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearWheel.isEnable
	bool isEnable();                                                                                                         // [0x18f1520] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FGearPlugin.FGearWheel.isASRActive
	bool isASRActive();                                                                                                      // [0x1901af0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FGearPlugin.FGearWheel.isABSActive
	bool isABSActive();                                                                                                      // [0x1901ad0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FGearPlugin.FGearWheel.hasDrive
	bool hasDrive();                                                                                                         // [0x1901aa0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FGearPlugin.FGearWheel.hasContact
	bool hasContact();                                                                                                       // [0x1901a80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FGearPlugin.FGearWheel.getWheelSide
	FGearWheelSide getWheelSide();                                                                                           // [0x18f60c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FGearPlugin.FGearWheel.getWheelRPMToKMH
	float getWheelRPMToKMH();                                                                                                // [0x1901a40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FGearPlugin.FGearWheel.getSuspensionTotalLength
	float getSuspensionTotalLength();                                                                                        // [0x19019f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FGearPlugin.FGearWheel.getSuspensionSpring
	float getSuspensionSpring();                                                                                             // [0x18fb730] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FGearPlugin.FGearWheel.getSuspensionCompressRatio
	float getSuspensionCompressRatio();                                                                                      // [0x1901990] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FGearPlugin.FGearWheel.getSuspensionCompressedLength
	float getSuspensionCompressedLength();                                                                                   // [0x19019b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FGearPlugin.FGearWheel.getSpeed
	float getSpeed();                                                                                                        // [0x1901970] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FGearPlugin.FGearWheel.getSlipRatio
	float getSlipRatio();                                                                                                    // [0x1901950] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FGearPlugin.FGearWheel.getSlipAngle
	float getSlipAngle();                                                                                                    // [0x1901930] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FGearPlugin.FGearWheel.getRPM
	float getRPM();                                                                                                          // [0x1901900] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FGearPlugin.FGearWheel.getRayHit
	FHitResult getRayHit();                                                                                                  // [0x19016d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FGearPlugin.FGearWheel.getRadius
	float getRadius();                                                                                                       // [0x18f1890] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FGearPlugin.FGearWheel.getPressure
	float getPressure();                                                                                                     // [0x11e6170] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FGearPlugin.FGearWheel.getPitch
	float getPitch();                                                                                                        // [0x19016a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearWheel.getLongitudinalSlip
	float getLongitudinalSlip();                                                                                             // [0x1901680] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FGearPlugin.FGearWheel.getLongitudinalForce
	FVector getLongitudinalForce();                                                                                          // [0x1901650] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FGearPlugin.FGearWheel.getLocalHubPosition
	FVector getLocalHubPosition();                                                                                           // [0x1901620] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FGearPlugin.FGearWheel.getLateralSlip
	float getLateralSlip();                                                                                                  // [0x1901600] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FGearPlugin.FGearWheel.getLateralForce
	FVector getLateralForce();                                                                                               // [0x19015d0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FGearPlugin.FGearWheel.getKMHSpeed
	float getKMHSpeed();                                                                                                     // [0x1901590] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FGearPlugin.FGearWheel.getHubPosition
	FVector getHubPosition();                                                                                                // [0x1901550] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FGearPlugin.FGearWheel.getGlobalRight
	FVector getGlobalRight();                                                                                                // [0x1901510] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearWheel.getGlobalForward
	FVector getGlobalForward();                                                                                              // [0x19014d0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearWheel.getFrictionFactor
	float getFrictionFactor();                                                                                               // [0x19014b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FGearPlugin.FGearWheel.getFeedbackTorque
	float getFeedbackTorque();                                                                                               // [0x1901480] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FGearPlugin.FGearWheel.getCurrentSteer
	float getCurrentSteer();                                                                                                 // [0x1901460] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearWheel.getCurrentLoad
	float getCurrentLoad();                                                                                                  // [0x1901440] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FGearPlugin.FGearWheel.getCombinedTorque
	FVector getCombinedTorque();                                                                                             // [0x1901410] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FGearPlugin.FGearWheel.getBraking
	float getBraking();                                                                                                      // [0x14dcea0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FGearPlugin.FGearWheel.getAxle
	UFGearAxle* getAxle();                                                                                                   // [0x18fc0f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/FGearPlugin.FGearWheelOptions
/// Size: 0x0060 (0x0002B0 - 0x000310)
class UFGearWheelOptions : public UFGearTelemetryDrawer : UFGearTelemetryDrawer
{ 
public:
	UClass*                                            mTireModelClass;                                            // 0x02A8   (0x0008)  
	UFGearTire*                                        mTireModel;                                                 // 0x02B0   (0x0008)  
	float                                              mLateralFriction;                                           // 0x02B8   (0x0004)  
	float                                              mLongitudinalFriction;                                      // 0x02BC   (0x0004)  
	float                                              mLateralScale;                                              // 0x02C0   (0x0004)  
	float                                              mLongitudinalScale;                                         // 0x02C4   (0x0004)  
	float                                              mOverturnScale;                                             // 0x02C8   (0x0004)  
	float                                              mRollMomentScale;                                           // 0x02CC   (0x0004)  
	float                                              mSelfAlignScale;                                            // 0x02D0   (0x0004)  
	float                                              mTirePressure;                                              // 0x02D4   (0x0004)  
	float                                              mRadius;                                                    // 0x02D8   (0x0004)  
	float                                              mWidth;                                                     // 0x02DC   (0x0004)  
	float                                              mRimOffset;                                                 // 0x02E0   (0x0004)  
	float                                              mCastOffset;                                                // 0x02E4   (0x0004)  
	float                                              mMass;                                                      // 0x02E8   (0x0004)  
	float                                              mBrakeTorque;                                               // 0x02EC   (0x0004)  
	float                                              mSuspensionUpTravel;                                        // 0x02F0   (0x0004)  
	float                                              mSuspensionDownTravel;                                      // 0x02F4   (0x0004)  
	float                                              mSuspensionSpring;                                          // 0x02F8   (0x0004)  
	float                                              mCompressionDamper;                                         // 0x02FC   (0x0004)  
	float                                              mRelaxationDamper;                                          // 0x0300   (0x0004)  
	float                                              mSuspensionPreload;                                         // 0x0304   (0x0004)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0308   (0x0008)  MISSED


	/// Functions
	// Function /Script/FGearPlugin.FGearWheelOptions.setWidth
	void setWidth(float F);                                                                                                  // [0x18f27b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearWheelOptions.setTirePressure
	void setTirePressure(float F);                                                                                           // [0x18f1a40] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearWheelOptions.setTireModel
	void setTireModel(UFGearTire* T);                                                                                        // [0x1902340] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearWheelOptions.setSuspensionUpTravel
	void setSuspensionUpTravel(float F);                                                                                     // [0x18f1b50] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearWheelOptions.setSuspensionSpring
	void setSuspensionSpring(float F);                                                                                       // [0x18f2a30] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearWheelOptions.setSuspensionPreload
	void setSuspensionPreload(float F);                                                                                      // [0x19021c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearWheelOptions.setSuspensionDownTravel
	void setSuspensionDownTravel(float F);                                                                                   // [0x18f1ed0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearWheelOptions.setSelfAlignScale
	void setSelfAlignScale(float F);                                                                                         // [0x18f29b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearWheelOptions.setRollMomentScale
	void setRollMomentScale(float F);                                                                                        // [0x18f2f30] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearWheelOptions.setRimOffset
	void setRimOffset(float F);                                                                                              // [0x18f1d80] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearWheelOptions.setRelaxationDamper
	void setRelaxationDamper(float F);                                                                                       // [0x18f2930] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearWheelOptions.setRadius
	void setRadius(float F);                                                                                                 // [0x1901e30] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearWheelOptions.setOverturnScale
	void setOverturnScale(float F);                                                                                          // [0x18f1f50] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearWheelOptions.setMass
	void setMass(float F);                                                                                                   // [0x18fcf00] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearWheelOptions.setLongitudinalScale
	void setLongitudinalScale(float F);                                                                                      // [0x18f2380] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearWheelOptions.setLongitudinalFriction
	void setLongitudinalFriction(float F);                                                                                   // [0x18f2730] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearWheelOptions.setLateralScale
	void setLateralScale(float F);                                                                                           // [0x18f2830] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearWheelOptions.setLateralFriction
	void setLateralFriction(float F);                                                                                        // [0x18f2590] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearWheelOptions.setCompressionDamper
	void setCompressionDamper(float F);                                                                                      // [0x18f28b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearWheelOptions.setCastOffset
	void setCastOffset(float F);                                                                                             // [0x18f2e20] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearWheelOptions.SetBrakeTorque
	void SetBrakeTorque(float F);                                                                                            // [0x1901bb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FGearPlugin.FGearWheelOptions.getWidth
	float getWidth();                                                                                                        // [0x1901a60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FGearPlugin.FGearWheelOptions.getTirePressure
	float getTirePressure();                                                                                                 // [0x18f1430] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FGearPlugin.FGearWheelOptions.getTireModel
	UFGearTire* getTireModel();                                                                                              // [0x18f1900] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FGearPlugin.FGearWheelOptions.getSuspensionUpTravel
	float getSuspensionUpTravel();                                                                                           // [0x1901a20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FGearPlugin.FGearWheelOptions.getSuspensionSpring
	float getSuspensionSpring();                                                                                             // [0x11e6170] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FGearPlugin.FGearWheelOptions.getSuspensionPreload
	float getSuspensionPreload();                                                                                            // [0x19019d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FGearPlugin.FGearWheelOptions.getSuspensionDownTravel
	float getSuspensionDownTravel();                                                                                         // [0x11e60b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FGearPlugin.FGearWheelOptions.getSelfAlignScale
	float getSelfAlignScale();                                                                                               // [0x18f17a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FGearPlugin.FGearWheelOptions.getRollMomentScale
	float getRollMomentScale();                                                                                              // [0x18f18b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FGearPlugin.FGearWheelOptions.getRimOffset
	float getRimOffset();                                                                                                    // [0x18f1490] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FGearPlugin.FGearWheelOptions.getRelaxationDamper
	float getRelaxationDamper();                                                                                             // [0x19018e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FGearPlugin.FGearWheelOptions.getRadius
	float getRadius();                                                                                                       // [0x18f1450] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FGearPlugin.FGearWheelOptions.getOverturnScale
	float getOverturnScale();                                                                                                // [0x18f1500] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FGearPlugin.FGearWheelOptions.GetMass
	float GetMass();                                                                                                         // [0x18f16b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FGearPlugin.FGearWheelOptions.getLongitudinalScale
	float getLongitudinalScale();                                                                                            // [0x18f15c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FGearPlugin.FGearWheelOptions.getLongitudinalFriction
	float getLongitudinalFriction();                                                                                         // [0x18f16f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FGearPlugin.FGearWheelOptions.getLateralScale
	float getLateralScale();                                                                                                 // [0x18f1710] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FGearPlugin.FGearWheelOptions.getLateralFriction
	float getLateralFriction();                                                                                              // [0x18f1690] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FGearPlugin.FGearWheelOptions.getCompressionDamper
	float getCompressionDamper();                                                                                            // [0x11e5f40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FGearPlugin.FGearWheelOptions.getCastOffset
	float getCastOffset();                                                                                                   // [0x18f1890] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FGearPlugin.FGearWheelOptions.getBrakeTorque
	float getBrakeTorque();                                                                                                  // [0x19013f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Enum /Script/FGearPlugin.FGearDifferentialType
/// Size: 0x04
enum FGearDifferentialType : uint8_t
{
	FGearDifferentialType__DF_OPEN0                                                  = 0,
	FGearDifferentialType__DF_LOCKED1                                                = 1,
	FGearDifferentialType__DF_LSD2                                                   = 2,
	FGearDifferentialType__DF_MAX3                                                   = 3
};

/// Enum /Script/FGearPlugin.FGearRewindReplayState
/// Size: 0x04
enum FGearRewindReplayState : uint8_t
{
	FGearRewindReplayState__RS_PLAY0                                                 = 0,
	FGearRewindReplayState__RS_REWIND1                                               = 1,
	FGearRewindReplayState__RS_REPLAY2                                               = 2,
	FGearRewindReplayState__RS_MAX3                                                  = 3
};

/// Enum /Script/FGearPlugin.FGearControllerType
/// Size: 0x04
enum FGearControllerType : uint8_t
{
	FGearControllerType__KEYBOARD0                                                   = 0,
	FGearControllerType__JOYSTICK1                                                   = 1,
	FGearControllerType__WHEEL2                                                      = 2,
	FGearControllerType__FGearControllerType_MAX3                                    = 3
};

/// Enum /Script/FGearPlugin.FGearShifterType
/// Size: 0x04
enum FGearShifterType : uint8_t
{
	FGearShifterType__AUTO0                                                          = 0,
	FGearShifterType__SEQUENTIAL1                                                    = 1,
	FGearShifterType__MANUAL2                                                        = 2,
	FGearShifterType__FGearShifterType_MAX3                                          = 3
};

/// Enum /Script/FGearPlugin.FGearForceCombineMode
/// Size: 0x04
enum FGearForceCombineMode : uint8_t
{
	FGearForceCombineMode__GRIP0                                                     = 0,
	FGearForceCombineMode__SIMPLE1                                                   = 1,
	FGearForceCombineMode__SUM2                                                      = 2,
	FGearForceCombineMode__FGearForceCombineMode_MAX3                                = 3
};

/// Enum /Script/FGearPlugin.FGearQueryType
/// Size: 0x04
enum FGearQueryType : uint8_t
{
	FGearQueryType__Line0                                                            = 0,
	FGearQueryType__Sphere1                                                          = 1,
	FGearQueryType__Convex2                                                          = 2,
	FGearQueryType__FGearQueryType_MAX3                                              = 3
};

/// Enum /Script/FGearPlugin.FGearUpDirection
/// Size: 0x04
enum FGearUpDirection : uint8_t
{
	FGearUpDirection__X_UP0                                                          = 0,
	FGearUpDirection__Y_UP1                                                          = 1,
	FGearUpDirection__Z_UP2                                                          = 2,
	FGearUpDirection__FGearUpDirection_MAX3                                          = 3
};

/// Enum /Script/FGearPlugin.FGearQueryMobilityType
/// Size: 0x04
enum FGearQueryMobilityType : uint8_t
{
	FGearQueryMobilityType__Any0                                                     = 0,
	FGearQueryMobilityType__Static1                                                  = 1,
	FGearQueryMobilityType__Dynamic2                                                 = 2,
	FGearQueryMobilityType__FGearQueryMobilityType_MAX3                              = 3
};

/// Enum /Script/FGearPlugin.FGearWheelSide
/// Size: 0x03
enum FGearWheelSide : uint8_t
{
	FGearWheelSide__WS_LEFT0                                                         = 0,
	FGearWheelSide__WS_RIGHT1                                                        = 1,
	FGearWheelSide__WS_MAX2                                                          = 2
};

