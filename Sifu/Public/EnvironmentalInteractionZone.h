#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "EnvironmentalInteractionZone.generated.h"

UCLASS(Blueprintable)
class SIFU_API AEnvironmentalInteractionZone : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bFallEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bEnvironmentalTakedownEnabled;
    
    AEnvironmentalInteractionZone();
};

