#pragma once
#include "CoreMinimal.h"
#include "GizmoStateTarget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "GizmoNilStateTarget.generated.h"

UCLASS()
class INTERACTIVETOOLSFRAMEWORK_API UGizmoNilStateTarget : public UObject, public IGizmoStateTarget {
    GENERATED_BODY()
public:
    UGizmoNilStateTarget();
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    void EndUpdate() override PURE_VIRTUAL(EndUpdate,);
    
    UFUNCTION()
    void BeginUpdate() override PURE_VIRTUAL(BeginUpdate,);
    
};

