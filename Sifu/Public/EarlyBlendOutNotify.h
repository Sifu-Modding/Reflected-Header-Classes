#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "EFightingState.h"
#include "EarlyBlendOutNotify.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class SIFU_API UEarlyBlendOutNotify : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EFightingState> m_FightingStateActiveConditions;
    
    UEarlyBlendOutNotify();
};

