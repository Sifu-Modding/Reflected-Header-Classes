#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "DeltaTransformAudioStep.h"
#include "DeltaTransformAudioData.generated.h"

class UAkAudioEvent;

UCLASS(BlueprintType)
class SIFU_API UDeltaTransformAudioData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UAkAudioEvent* m_defaultAkEvent;
    
    UPROPERTY(EditAnywhere)
    TArray<FDeltaTransformAudioStep> m_Steps;
    
    UDeltaTransformAudioData();
    UFUNCTION(BlueprintPure)
    UAkAudioEvent* GetAudioEvent(FTransform _from, FTransform _to) const;
    
};

