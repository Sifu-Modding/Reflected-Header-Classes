#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "CameraTargetPosition.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FCameraTargetPosition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AActor* m_Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector m_vPreProcessedTargetPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector m_vRawTargetPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fLifeTime;
    
    SIFU_API FCameraTargetPosition();
};

