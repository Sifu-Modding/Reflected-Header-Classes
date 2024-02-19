#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "EPatrolType.h"
#include "PatrolControlPoint.h"
#include "PathPatrol.generated.h"

UCLASS(Blueprintable)
class SIFU_API APathPatrol : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPatrolControlPoint> m_patrolControlPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPatrolType m_ePatrolType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_lookAtTarget;
    
    APathPatrol(const FObjectInitializer& ObjectInitializer);

};

