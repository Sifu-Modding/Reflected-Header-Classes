#pragma once
#include "CoreMinimal.h"
#include "WGAiAction.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EEndPlayReason -FallbackName=EEndPlayReason
#include "AIActionPlaySequence.generated.h"

class ALevelSequenceActor;
class AActor;

UCLASS()
class SIFU_API UAIActionPlaySequence : public UWGAiAction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<ALevelSequenceActor> m_LevelSequenceActor;
    
private:
    UPROPERTY()
    ALevelSequenceActor* m_CreatedLevelSequenceActor;
    
public:
    UAIActionPlaySequence();
private:
    UFUNCTION()
    void OnCreatedSequenceActorEndedPlay(AActor* _actor, TEnumAsByte<EEndPlayReason::Type> _endPlayReason);
    
};

