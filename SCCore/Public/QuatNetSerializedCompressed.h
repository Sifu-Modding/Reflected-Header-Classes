#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
#include "QuatNetSerializedCompressed.generated.h"

USTRUCT(BlueprintType)
struct FQuatNetSerializedCompressed : public FQuat {
    GENERATED_BODY()
public:
    SCCORE_API FQuatNetSerializedCompressed();
};

