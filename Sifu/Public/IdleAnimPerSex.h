#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=AnimContainer -FallbackName=AnimContainer
#include "IdleAnimPerSex.generated.h"

USTRUCT(BlueprintType)
struct FIdleAnimPerSex {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimContainer m_AnimsPerSex[2];
    
    SIFU_API FIdleAnimPerSex();
};

