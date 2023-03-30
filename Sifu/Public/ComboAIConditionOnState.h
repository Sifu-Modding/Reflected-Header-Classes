#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatRange -FallbackName=FloatRange
#include "AIComboCondition.h"
#include "ComboAIConditionOnState.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class SIFU_API UComboAIConditionOnState : public UAIComboCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRange m_RandomDelay;
    
public:
    UComboAIConditionOnState();
};

