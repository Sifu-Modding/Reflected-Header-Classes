#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "VolumeBounds.generated.h"

USTRUCT(BlueprintType)
struct FVolumeBounds {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FVector Origin;
    
    UPROPERTY(BlueprintReadOnly)
    FVector BoxExtent;
    
    UPROPERTY(BlueprintReadOnly)
    float SphereRadius;
    
    SCCORE_API FVolumeBounds();
};

