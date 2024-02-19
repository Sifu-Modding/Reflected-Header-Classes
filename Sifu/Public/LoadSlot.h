#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=CharacterSaveDescription -FallbackName=CharacterSaveDescription
#include "MenuSlot.h"
#include "LoadSlot.generated.h"

class ULoadChoices;

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API ULoadSlot : public UMenuSlot {
    GENERATED_BODY()
public:
    ULoadSlot();

    UFUNCTION(BlueprintCallable)
    uint8 BPF_GetSlotIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString BPF_GetSaveName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCharacterSaveDescription BPF_GetSaveDescription();
    
    UFUNCTION(BlueprintCallable)
    ULoadChoices* BPF_GetLoadPanel();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_InitSlot(FCharacterSaveDescription _save);
    
};

