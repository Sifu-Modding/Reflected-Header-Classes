#pragma once
#include "CoreMinimal.h"
#include "RigElementKeyCollection.h"
#include "RigUnit_CollectionBase.h"
#include "RigUnit_CollectionReplaceItems.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_CollectionReplaceItems : public FRigUnit_CollectionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigElementKeyCollection Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Old;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName New;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RemoveInvalidItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigElementKeyCollection Collection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigElementKeyCollection CachedCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CachedHierarchyHash;
    
    CONTROLRIG_API FRigUnit_CollectionReplaceItems();
};

