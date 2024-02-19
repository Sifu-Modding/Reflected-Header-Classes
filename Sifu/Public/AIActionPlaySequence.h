#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EEndPlayReason -FallbackName=EEndPlayReason
#include "WGAiAction.h"
#include "AIActionPlaySequence.generated.h"

class AActor;
class ALevelSequenceActor;

UCLASS(Blueprintable)
class SIFU_API UAIActionPlaySequence : public UWGAiAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ALevelSequenceActor> m_LevelSequenceActor;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ALevelSequenceActor* m_CreatedLevelSequenceActor;
    
public:
    UAIActionPlaySequence();

private:
    UFUNCTION(BlueprintCallable)
    void OnCreatedSequenceActorEndedPlay(AActor* _actor, TEnumAsByte<EEndPlayReason::Type> _endPlayReason);
    
};

