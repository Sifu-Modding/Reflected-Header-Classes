#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotifyState -FallbackName=AnimNotifyState
#include "BaseActorConditionInstance.h"
#include "SCAnimNotifyState.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class SIFU_API USCAnimNotifyState : public UAnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bRectifiedActivationConditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bDebugLogActivationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBaseActorConditionInstance m_triggerCondition;
    
public:
    USCAnimNotifyState();
};

