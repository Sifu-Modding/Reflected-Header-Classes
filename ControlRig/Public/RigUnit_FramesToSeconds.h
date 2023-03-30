#pragma once
#include "CoreMinimal.h"
#include "RigUnit_AnimBase.h"
#include "RigUnit_FramesToSeconds.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_FramesToSeconds : public FRigUnit_AnimBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Frames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Seconds;
    
    CONTROLRIG_API FRigUnit_FramesToSeconds();
};

