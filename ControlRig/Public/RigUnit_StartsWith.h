#pragma once
#include "CoreMinimal.h"
#include "RigUnit_NameBase.h"
#include "RigUnit_StartsWith.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_StartsWith : public FRigUnit_NameBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Start;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Result;
    
    CONTROLRIG_API FRigUnit_StartsWith();
};

