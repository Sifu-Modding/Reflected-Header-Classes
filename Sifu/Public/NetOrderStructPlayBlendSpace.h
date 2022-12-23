#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "NetOrderStruct.h"
#include "NetOrderStructPlayBlendSpace.generated.h"

class UBlendSpaceBase;

USTRUCT(BlueprintType)
struct FNetOrderStructPlayBlendSpace : public FNetOrderStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UBlendSpaceBase* m_BlendSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector m_vDefaultCoordinates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fPlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bIsInfinite;
    
    SIFU_API FNetOrderStructPlayBlendSpace();
};

