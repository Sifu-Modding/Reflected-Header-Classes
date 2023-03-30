#pragma once
#include "CoreMinimal.h"
#include "RigUnit.h"
#include "RigUnit_IsInteracting.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_IsInteracting : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsInteracting;
    
    FRigUnit_IsInteracting();
};

