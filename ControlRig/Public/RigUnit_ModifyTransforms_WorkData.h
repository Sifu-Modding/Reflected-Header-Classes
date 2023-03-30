#pragma once
#include "CoreMinimal.h"
#include "CachedRigElement.h"
#include "RigUnit_ModifyTransforms_WorkData.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_ModifyTransforms_WorkData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCachedRigElement> CachedItems;
    
    CONTROLRIG_API FRigUnit_ModifyTransforms_WorkData();
};

