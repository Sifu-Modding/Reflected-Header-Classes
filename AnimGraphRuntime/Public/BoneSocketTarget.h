#pragma once
#include "CoreMinimal.h"
#include "SocketReference.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoneReference -FallbackName=BoneReference
#include "BoneSocketTarget.generated.h"

USTRUCT(BlueprintType)
struct ANIMGRAPHRUNTIME_API FBoneSocketTarget {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bUseSocket;
    
    UPROPERTY(EditAnywhere)
    FBoneReference BoneReference;
    
    UPROPERTY(EditAnywhere)
    FSocketReference SocketReference;
    
    FBoneSocketTarget();
};

