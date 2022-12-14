#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "EARTrackingState.h"
#include "EARObjectClassification.h"
#include "ARTrackedGeometry.generated.h"

class UMRMeshComponent;

UCLASS(BlueprintType)
class AUGMENTEDREALITY_API UARTrackedGeometry : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FGuid UniqueId;
    
protected:
    UPROPERTY()
    FTransform LocalToTrackingTransform;
    
    UPROPERTY()
    FTransform LocalToAlignedTrackingTransform;
    
    UPROPERTY()
    EARTrackingState TrackingState;
    
    UPROPERTY(Instanced, Transient)
    UMRMeshComponent* UnderlyingMesh;
    
    UPROPERTY()
    EARObjectClassification ObjectClassification;
    
private:
    UPROPERTY()
    int32 LastUpdateFrameNumber;
    
    UPROPERTY()
    FName DebugName;
    
public:
    UARTrackedGeometry();
    UFUNCTION(BlueprintPure)
    bool IsTracked() const;
    
    UFUNCTION(BlueprintPure)
    UMRMeshComponent* GetUnderlyingMesh();
    
    UFUNCTION(BlueprintPure)
    EARTrackingState GetTrackingState() const;
    
    UFUNCTION(BlueprintPure)
    EARObjectClassification GetObjectClassification() const;
    
    UFUNCTION(BlueprintPure)
    FString GetName() const;
    
    UFUNCTION(BlueprintPure)
    FTransform GetLocalToWorldTransform() const;
    
    UFUNCTION(BlueprintPure)
    FTransform GetLocalToTrackingTransform() const;
    
    UFUNCTION(BlueprintPure)
    float GetLastUpdateTimestamp() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetLastUpdateFrameNumber() const;
    
    UFUNCTION(BlueprintPure)
    FName GetDebugName() const;
    
};

