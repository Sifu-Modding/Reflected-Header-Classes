#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=LevelSequence -ObjectName=LevelSequenceActor -FallbackName=LevelSequenceActor
#include "SequenceBinding.h"
#include "SCLevelSequenceActor.generated.h"

class ACharacter;
class ULevelSequence;

UCLASS(Blueprintable)
class SIFU_API ASCLevelSequenceActor : public ALevelSequenceActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSequenceBinding> m_SequenceBindings;
    
    ASCLevelSequenceActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void BPF_Play();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    ULevelSequence* BPF_GetOverridingLevelSequence(ACharacter* _characterOwner) const;
    
};

