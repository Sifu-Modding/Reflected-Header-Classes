#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "BaseActorCondition.h"
#include "GameplayTagsCondition.generated.h"

UCLASS(Blueprintable)
class SIFU_API UGameplayTagsCondition : public UBaseActorCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer m_RequiredTags;
    
    UGameplayTagsCondition();
};

