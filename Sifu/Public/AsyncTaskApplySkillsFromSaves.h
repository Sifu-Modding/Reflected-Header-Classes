#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "OnSavesAppliedDelegate.h"
#include "AsyncTaskApplySkillsFromSaves.generated.h"

class UObject;
class UAsyncTaskApplySkillsFromSaves;
class USCAbilitySystemComponent;

UCLASS()
class SIFU_API UAsyncTaskApplySkillsFromSaves : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnSavesApplied SavesApplied;
    
    UAsyncTaskApplySkillsFromSaves();
    UFUNCTION(BlueprintCallable)
    static UAsyncTaskApplySkillsFromSaves* BPF_ApplySavesSkillOnCurrentSave(UObject* _context, USCAbilitySystemComponent* _abilitySystemComponent, TArray<int32> _indicesOfSave);
    
};

