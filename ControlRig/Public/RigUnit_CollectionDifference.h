#pragma once
#include "CoreMinimal.h"
#include "RigElementKeyCollection.h"
#include "RigUnit_CollectionBase.h"
#include "RigUnit_CollectionDifference.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_CollectionDifference : public FRigUnit_CollectionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigElementKeyCollection A;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigElementKeyCollection B;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigElementKeyCollection Collection;
    
    CONTROLRIG_API FRigUnit_CollectionDifference();
};

