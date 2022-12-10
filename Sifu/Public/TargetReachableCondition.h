#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BaseActorTargetCondition.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RuntimeFloatCurve -FallbackName=RuntimeFloatCurve
#include "TargetReachableCondition.generated.h"

class UNavigationQueryFilter;

UCLASS(Abstract)
class SIFU_API UTargetReachableCondition : public UBaseActorTargetCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_fNavigationCostHeuristicScale;
    
    UPROPERTY(EditAnywhere)
    float m_fMaxPathCost;
    
    UPROPERTY(EditAnywhere)
    float m_fMaxDistance;
    
    UPROPERTY(EditAnywhere)
    bool m_bOutOfNavmeshResult;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UNavigationQueryFilter> m_QueryFilter;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve m_AutorizedAngleWithTargetPerDistance;
    
    UPROPERTY(EditAnywhere)
    float m_fMaxVerticalDistanceFromProjection;
    
    UPROPERTY(EditAnywhere)
    FVector m_vNavQueryExtent;
    
    UTargetReachableCondition();
};

