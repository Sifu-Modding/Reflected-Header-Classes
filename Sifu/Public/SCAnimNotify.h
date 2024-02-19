#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "BaseActorConditionInstance.h"
#include "SCAnimNotify.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class SIFU_API USCAnimNotify : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBaseActorConditionInstance m_triggerCondition;
    
public:
    USCAnimNotify();

};

