#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "LevelSequenceDirector.generated.h"

class ULevelSequence;
class ULevelSequencePlayer;

UCLASS(Blueprintable)
class LEVELSEQUENCE_API ULevelSequenceDirector : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequencePlayer* Player;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULevelSequence* LevelSequence;
    
    ULevelSequenceDirector();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCreated();
    
};

