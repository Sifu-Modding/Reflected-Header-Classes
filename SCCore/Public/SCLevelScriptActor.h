#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=LevelScriptActor -FallbackName=LevelScriptActor
#include "SCLevelScriptActor.generated.h"

class ALevelSequenceActor;
class UDataTable;

UCLASS()
class SCCORE_API ASCLevelScriptActor : public ALevelScriptActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    bool m_bContainsSaveData;
    
private:
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_ContextualDialogLines;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_WorldConversationSegments;
    
public:
    ASCLevelScriptActor();
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnUpdatedFromSave();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnLevelSequenceSkipped(ALevelSequenceActor* _levelSequenceActor);
    
};

