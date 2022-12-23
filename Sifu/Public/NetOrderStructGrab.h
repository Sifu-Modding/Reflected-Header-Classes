#pragma once
#include "CoreMinimal.h"
#include "NetOrderStructSnapAnim.h"
#include "HitRequest.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "ImpactResult.h"
#include "DefenseAnimInfos.h"
#include "NetOrderStructGrab.generated.h"

USTRUCT(BlueprintType)
struct FNetOrderStructGrab : public FNetOrderStructSnapAnim {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    bool m_bFromParry;
    
    UPROPERTY(BlueprintReadOnly)
    FHitResult m_Hit;
    
    UPROPERTY(BlueprintReadOnly)
    FImpactResult m_Impact;
    
    UPROPERTY(BlueprintReadOnly)
    FHitRequest m_HitRequest;
    
    UPROPERTY(BlueprintReadOnly)
    FDefenseAnimInfos m_GrabAnimInfos;
    
    SIFU_API FNetOrderStructGrab();
};

