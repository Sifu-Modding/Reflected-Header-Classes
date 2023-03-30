#pragma once
#include "CoreMinimal.h"
#include "RigElementKey.h"
#include "RigElementKeyCollection.h"
#include "RigUnit_CollectionBase.h"
#include "RigUnit_CollectionChain.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_CollectionChain : public FRigUnit_CollectionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigElementKey FirstItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigElementKey LastItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Reverse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigElementKeyCollection Collection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigElementKeyCollection CachedCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CachedHierarchyHash;
    
    CONTROLRIG_API FRigUnit_CollectionChain();
};

