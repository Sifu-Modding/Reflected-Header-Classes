#pragma once
#include "CoreMinimal.h"
#include "ComboTransitions.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "ComboNodeAttackInfos.h"
#include "EComboTransition.h"
#include "AIActionAttackClassInstance.h"
#include "AvailabilityLayerContainer.h"
#include "ComboNode.generated.h"

class UComboEvent;

USTRUCT(BlueprintType)
struct FComboNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer m_RequiredTags;
    
    UPROPERTY(VisibleAnywhere)
    FComboNodeAttackInfos m_AttackInfos;
    
    UPROPERTY(VisibleAnywhere)
    TMap<FGameplayTag, FComboNodeAttackInfos> m_ConditionalAttacks;
    
    UPROPERTY()
    UClass* m_AIAttackActionClass;
    
    UPROPERTY(VisibleAnywhere)
    FAIActionAttackClassInstance m_AIAttackAction;
    
    UPROPERTY(VisibleAnywhere)
    FComboTransitions m_Transitions;
    
    UPROPERTY(VisibleAnywhere)
    int32 m_NodeRedirect;
    
    UPROPERTY(VisibleAnywhere)
    FAvailabilityLayerContainer m_NodeRedirectAvailabilityLayer;
    
    UPROPERTY(VisibleAnywhere)
    TArray<EComboTransition> m_NodeRedirectIgnoredTransitions;
    
    UPROPERTY(VisibleAnywhere)
    UComboEvent* m_Event;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FName m_Name;
    
    UPROPERTY(VisibleAnywhere)
    bool m_bSkip;
    
    SIFU_API FComboNode();
};

