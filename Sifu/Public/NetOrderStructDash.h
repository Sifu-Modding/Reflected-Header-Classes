#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "NetOrderStructPlayAnim.h"
#include "NetOrderStructDash.generated.h"

USTRUCT(BlueprintType)
struct FNetOrderStructDash : public FNetOrderStructPlayAnim {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_vDirection;
    
    SIFU_API FNetOrderStructDash();
};

