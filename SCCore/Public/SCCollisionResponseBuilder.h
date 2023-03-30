#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ECollisionResponse -FallbackName=ECollisionResponse
#include "SCChannelCollisionResponse.h"
#include "SCCollisionResponseBuilder.generated.h"

USTRUCT(BlueprintType)
struct FSCCollisionResponseBuilder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionResponse> m_eDefaultCollisionResponse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSCChannelCollisionResponse> m_eChannelResponses;
    
    SCCORE_API FSCCollisionResponseBuilder();
};

