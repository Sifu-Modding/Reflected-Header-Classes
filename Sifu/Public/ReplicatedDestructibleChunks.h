#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "ReplicatedDestructibleChunks.generated.h"

USTRUCT(BlueprintType)
struct FReplicatedDestructibleChunks {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTransform> m_ChunkTransforms;
    
    SIFU_API FReplicatedDestructibleChunks();
};

