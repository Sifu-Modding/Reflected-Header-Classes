#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "NavMeshFreeSquare.generated.h"

USTRUCT(BlueprintType)
struct FNavMeshFreeSquare {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector m_OffsetToInstigator;
    
    UPROPERTY(EditAnywhere)
    float m_fSquareSize;
    
    UPROPERTY(EditAnywhere)
    float m_fRaycastHeight;
    
    SIFU_API FNavMeshFreeSquare();
};

