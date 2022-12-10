#pragma once
#include "CoreMinimal.h"
#include "InteractiveGizmo.h"
#include "IntervalGizmo.generated.h"

class UGizmoTransformChangeStateTarget;
class UPrimitiveComponent;
class UTransformProxy;
class UGizmoComponentAxisSource;

UCLASS(NonTransient)
class INTERACTIVETOOLSFRAMEWORK_API UIntervalGizmo : public UInteractiveGizmo {
    GENERATED_BODY()
public:
    UPROPERTY()
    UGizmoTransformChangeStateTarget* StateTarget;
    
protected:
    UPROPERTY()
    UTransformProxy* TransformProxy;
    
    UPROPERTY(Instanced)
    TArray<UPrimitiveComponent*> ActiveComponents;
    
    UPROPERTY()
    TArray<UInteractiveGizmo*> ActiveGizmos;
    
    UPROPERTY()
    UGizmoComponentAxisSource* AxisYSource;
    
    UPROPERTY()
    UGizmoComponentAxisSource* AxisZSource;
    
public:
    UIntervalGizmo();
};

