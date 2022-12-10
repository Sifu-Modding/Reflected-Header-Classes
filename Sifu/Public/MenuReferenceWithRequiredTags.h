#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "MenuReferenceWithRequiredTags.generated.h"

class UMenuWidget;

USTRUCT(BlueprintType)
struct FMenuReferenceWithRequiredTags {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSoftClassPtr<UMenuWidget> m_Menu;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTagContainer m_RequiredGameFlowTags;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bLoadSyncAtInit;
    
    SIFU_API FMenuReferenceWithRequiredTags();
};

