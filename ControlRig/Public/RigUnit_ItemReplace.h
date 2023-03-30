#pragma once
#include "CoreMinimal.h"
#include "RigElementKey.h"
#include "RigUnit_ItemBase.h"
#include "RigUnit_ItemReplace.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_ItemReplace : public FRigUnit_ItemBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigElementKey Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Old;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName New;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigElementKey Result;
    
    CONTROLRIG_API FRigUnit_ItemReplace();
};

