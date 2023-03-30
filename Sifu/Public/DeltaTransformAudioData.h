#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "DeltaTransformAudioStep.h"
#include "DeltaTransformAudioData.generated.h"

class UAkAudioEvent;

UCLASS(Blueprintable)
class SIFU_API UDeltaTransformAudioData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* m_defaultAkEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDeltaTransformAudioStep> m_Steps;
    
    UDeltaTransformAudioData();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAkAudioEvent* GetAudioEvent(FTransform _from, FTransform _to) const;
    
};

