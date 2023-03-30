#pragma once
#include "CoreMinimal.h"
#include "RigCurve.h"
#include "RigCurveContainer.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigCurveContainer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRigCurve> Curves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, int32> NameToIndexMapping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FName> Selection;
    
public:
    FRigCurveContainer();
};

