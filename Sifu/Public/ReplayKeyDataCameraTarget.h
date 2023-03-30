#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ReplayKeyDataWorldTarget.h"
#include "ReplayKeyDataCameraTarget.generated.h"

USTRUCT(BlueprintType)
struct FReplayKeyDataCameraTarget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReplayKeyDataWorldTarget m_Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_vInitialTargetLocation;
    
    SIFU_API FReplayKeyDataCameraTarget();
};

