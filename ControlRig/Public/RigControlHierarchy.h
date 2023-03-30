#pragma once
#include "CoreMinimal.h"
#include "RigControl.h"
#include "RigControlHierarchy.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigControlHierarchy {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRigControl> Controls;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, int32> NameToIndexMapping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FName> Selection;
    
public:
    FRigControlHierarchy();
};

