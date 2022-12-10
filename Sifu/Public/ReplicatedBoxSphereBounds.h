#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=BoxSphereBounds -FallbackName=BoxSphereBounds
#include "ReplicatedBoxSphereBounds.generated.h"

USTRUCT(BlueprintType)
struct FReplicatedBoxSphereBounds {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool m_bIsValid;
    
    UPROPERTY()
    FBoxSphereBounds m_Bounds;
    
    SIFU_API FReplicatedBoxSphereBounds();
};

