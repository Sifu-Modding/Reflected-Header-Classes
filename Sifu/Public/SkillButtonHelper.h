#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "SkillButtonHelper.generated.h"

class USkillButton;
class USkillsDB;

UCLASS(Blueprintable)
class USkillButtonHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USkillButtonHelper();

    UFUNCTION(BlueprintCallable)
    static void BPF_RebuildDBFromButtons(USkillsDB* _db, USkillButton* _root);
    
};

