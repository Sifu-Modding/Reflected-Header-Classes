#pragma once
#include "CoreMinimal.h"
#include "BaseActorCondition.h"
#include "IsInvolvedInDialogCondition.generated.h"

UCLASS(Blueprintable)
class SIFU_API UIsInvolvedInDialogCondition : public UBaseActorCondition {
    GENERATED_BODY()
public:
    UIsInvolvedInDialogCondition();

};

