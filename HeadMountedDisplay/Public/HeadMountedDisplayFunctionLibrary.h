#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=EControllerHand -FallbackName=EControllerHand
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "XRTimedInputActionDelegateDelegate.h"
#include "XRDeviceOnDisconnectDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "EXRDeviceConnectionResult.h"
#include "ESpectatorScreenMode.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Timespan -FallbackName=Timespan
#include "EOrientPositionSelector.h"
#include "EHMDTrackingOrigin.h"
#include "XRGestureConfig.h"
#include "XRDeviceId.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "XRMotionControllerData.h"
#include "EHMDWornState.h"
#include "XRHMDData.h"
#include "EXRTrackedDeviceType.h"
#include "HeadMountedDisplayFunctionLibrary.generated.h"

class UTexture;
class UObject;

UCLASS(BlueprintType)
class HEADMOUNTEDDISPLAY_API UHeadMountedDisplayFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UHeadMountedDisplayFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static void UpdateExternalTrackingHMDPosition(const FTransform& ExternalTrackingTransform);
    
    UFUNCTION(BlueprintCallable)
    static void SetXRTimedInputActionDelegate(const FName& ActionName, const FXRTimedInputActionDelegate& InDelegate);
    
    UFUNCTION(BlueprintCallable)
    static void SetXRDisconnectDelegate(const FXRDeviceOnDisconnectDelegate& InDisconnectedDelegate);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void SetWorldToMetersScale(UObject* WorldContext, float NewScale);
    
    UFUNCTION(BlueprintCallable)
    static void SetTrackingOrigin(TEnumAsByte<EHMDTrackingOrigin::Type> Origin);
    
    UFUNCTION(BlueprintCallable)
    static void SetSpectatorScreenTexture(UTexture* InTexture);
    
    UFUNCTION(BlueprintCallable)
    static void SetSpectatorScreenModeTexturePlusEyeLayout(FVector2D EyeRectMin, FVector2D EyeRectMax, FVector2D TextureRectMin, FVector2D TextureRectMax, bool bDrawEyeFirst, bool bClearBlack, bool bUseAlpha);
    
    UFUNCTION(BlueprintCallable)
    static void SetSpectatorScreenMode(ESpectatorScreenMode Mode);
    
    UFUNCTION(BlueprintCallable)
    static void SetClippingPlanes(float Near, float Far);
    
    UFUNCTION(BlueprintCallable)
    static void ResetOrientationAndPosition(float Yaw, TEnumAsByte<EOrientPositionSelector::Type> Options);
    
    UFUNCTION(BlueprintPure)
    static bool IsSpectatorScreenModeControllable();
    
    UFUNCTION(BlueprintPure)
    static bool IsInLowPersistenceMode();
    
    UFUNCTION(BlueprintPure)
    static bool IsHeadMountedDisplayEnabled();
    
    UFUNCTION(BlueprintPure)
    static bool IsHeadMountedDisplayConnected();
    
    UFUNCTION(BlueprintCallable)
    static bool IsDeviceTracking(const FXRDeviceId& XRDeviceId);
    
    UFUNCTION(BlueprintPure)
    static bool HasValidTrackingPosition();
    
    UFUNCTION(BlueprintPure)
    static int32 GetXRSystemFlags();
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContext"))
    static float GetWorldToMetersScale(UObject* WorldContext);
    
    UFUNCTION(BlueprintPure)
    static void GetVRFocusState(bool& bUseFocus, bool& bHasFocus);
    
    UFUNCTION(BlueprintPure)
    static FString GetVersionString();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static FTransform GetTrackingToWorldTransform(UObject* WorldContext);
    
    UFUNCTION(BlueprintPure)
    static void GetTrackingSensorParameters(FVector& Origin, FRotator& Rotation, float& LeftFOV, float& RightFOV, float& TopFOV, float& BottomFOV, float& Distance, float& NearPlane, float& FarPlane, bool& IsActive, int32 Index);
    
    UFUNCTION(BlueprintPure)
    static TEnumAsByte<EHMDTrackingOrigin::Type> GetTrackingOrigin();
    
    UFUNCTION(BlueprintPure)
    static float GetScreenPercentage();
    
    UFUNCTION(BlueprintPure)
    static void GetPositionalTrackingCameraParameters(FVector& CameraOrigin, FRotator& CameraRotation, float& HFOV, float& VFOV, float& CameraDistance, float& NearPlane, float& FarPlane);
    
    UFUNCTION(BlueprintPure)
    static float GetPixelDensity();
    
    UFUNCTION(BlueprintPure)
    static void GetOrientationAndPosition(FRotator& DeviceRotation, FVector& DevicePosition);
    
    UFUNCTION(BlueprintPure)
    static int32 GetNumOfTrackingSensors();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void GetMotionControllerData(UObject* WorldContext, const EControllerHand Hand, FXRMotionControllerData& MotionControllerData);
    
    UFUNCTION(BlueprintPure)
    static TEnumAsByte<EHMDWornState::Type> GetHMDWornState();
    
    UFUNCTION(BlueprintPure)
    static FName GetHMDDeviceName();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void GetHMDData(UObject* WorldContext, FXRHMDData& HMDData);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void GetDeviceWorldPose(UObject* WorldContext, const FXRDeviceId& XRDeviceId, bool& bIsTracked, FRotator& Orientation, bool& bHasPositionalTracking, FVector& Position);
    
    UFUNCTION(BlueprintCallable)
    static void GetDevicePose(const FXRDeviceId& XRDeviceId, bool& bIsTracked, FRotator& Orientation, bool& bHasPositionalTracking, FVector& Position);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static bool GetControllerTransformForTime(UObject* WorldContext, const int32 ControllerIndex, const FName MotionSource, FTimespan Time, bool& bTimeWasUsed, FRotator& Orientation, FVector& Position, bool& bProvidedLinearVelocity, FVector& LinearVelocity, bool& bProvidedAngularVelocity, FVector& AngularVelocityRadPerSec);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FXRDeviceId> EnumerateTrackedDevices(const FName SystemId, EXRTrackedDeviceType DeviceType);
    
    UFUNCTION(BlueprintCallable)
    static void EnableLowPersistenceMode(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    static bool EnableHMD(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    static void DisconnectRemoteXRDevice();
    
    UFUNCTION(BlueprintCallable)
    static TEnumAsByte<EXRDeviceConnectionResult::Type> ConnectRemoteXRDevice(const FString& IpAddress, const int32 BitRate);
    
    UFUNCTION(BlueprintCallable)
    static bool ConfigureGestures(const FXRGestureConfig& GestureConfig);
    
    UFUNCTION(BlueprintCallable)
    static void ClearXRTimedInputActionDelegate(const FName& ActionPath);
    
    UFUNCTION(BlueprintCallable)
    static void CalibrateExternalTrackingToHMD(const FTransform& ExternalTrackingTransform);
    
};

