#pragma once
#include "CoreMinimal.h"
#include "ERigElementType.h"
#include "RigElementKey.h"
#include "RigElementKeyCollection.h"
#include "RigUnit_CollectionBase.h"
#include "RigUnit_CollectionChildren.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_CollectionChildren : public FRigUnit_CollectionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigElementKey Parent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIncludeParent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRecursive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERigElementType TypeToSearch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigElementKeyCollection Collection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigElementKeyCollection CachedCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CachedHierarchyHash;
    
    CONTROLRIG_API FRigUnit_CollectionChildren();
};

