#pragma once
#include "CoreMinimal.h"
#include "PatrolControlPoint.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "EPatrolType.h"
#include "PathPatrol.generated.h"

UCLASS()
class SIFU_API APathPatrol : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FPatrolControlPoint> m_patrolControlPoints;
    
    UPROPERTY(EditAnywhere)
    EPatrolType m_ePatrolType;
    
    UPROPERTY(EditAnywhere)
    AActor* m_lookAtTarget;
    
    APathPatrol();
};

