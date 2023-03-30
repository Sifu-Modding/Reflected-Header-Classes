#pragma once
#include "CoreMinimal.h"
#include "ERigElementType.h"
#include "RigElementKeyCollection.h"
#include "RigUnit_CollectionBase.h"
#include "RigUnit_CollectionNameSearch.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_CollectionNameSearch : public FRigUnit_CollectionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PartialName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERigElementType TypeToSearch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigElementKeyCollection Collection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigElementKeyCollection CachedCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CachedHierarchyHash;
    
    CONTROLRIG_API FRigUnit_CollectionNameSearch();
};

