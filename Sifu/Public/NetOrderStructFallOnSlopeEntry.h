#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "FallOnSlopeSetup.h"
#include "HitRequest.h"
#include "NetOrderStructPlayAnim.h"
#include "NetOrderStructFallOnSlopeEntry.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FNetOrderStructFallOnSlopeEntry : public FNetOrderStructPlayAnim {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFallOnSlopeSetup m_Setup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_vSlopeDir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitRequest m_HitRequest;
    
    FNetOrderStructFallOnSlopeEntry();
};

