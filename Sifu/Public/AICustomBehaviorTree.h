#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "AICustomBehaviorTree.generated.h"

class UBehaviorTree;

USTRUCT(BlueprintType)
struct FAICustomBehaviorTree {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag m_DynamicBehaviorGameplayTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* m_BehaviorToUse;
    
    SIFU_API FAICustomBehaviorTree();
};

