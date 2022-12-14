#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "CameraRig_Rail.generated.h"

class USceneComponent;
class USplineComponent;

UCLASS()
class CINEMATICCAMERA_API ACameraRig_Rail : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float CurrentPositionOnRail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    bool bLockOrientationToRail;
    
private:
    UPROPERTY(EditDefaultsOnly, Instanced)
    USceneComponent* TransformComponent;
    
    UPROPERTY(EditDefaultsOnly, Instanced)
    USplineComponent* RailSplineComponent;
    
    UPROPERTY(EditDefaultsOnly, Instanced)
    USceneComponent* RailCameraMount;
    
public:
    ACameraRig_Rail();
    UFUNCTION(BlueprintPure)
    USplineComponent* GetRailSplineComponent();
    
};

