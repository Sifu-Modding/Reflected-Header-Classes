#pragma once
#include "CoreMinimal.h"
#include "ControlRigDrawContainer.h"
#include "ControlRigDrawInterface.generated.h"

USTRUCT()
struct CONTROLRIG_API FControlRigDrawInterface : public FControlRigDrawContainer {
    GENERATED_BODY()
public:
    FControlRigDrawInterface();
};

