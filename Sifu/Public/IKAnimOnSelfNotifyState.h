#pragma once
#include "CoreMinimal.h"
#include "IKProfileAnimNotifyState.h"
#include "IKAnimOnSelfNotifyState.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class SIFU_API UIKAnimOnSelfNotifyState : public UIKProfileAnimNotifyState {
    GENERATED_BODY()
public:
    UIKAnimOnSelfNotifyState();

};

