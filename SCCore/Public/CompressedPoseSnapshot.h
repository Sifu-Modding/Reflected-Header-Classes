#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Vector_NetQuantize10 -FallbackName=Vector_NetQuantize10
#include "QuatNetSerializedCompressed.h"
#include "CompressedPoseSnapshot.generated.h"

USTRUCT(BlueprintType)
struct SCCORE_API FCompressedPoseSnapshot {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> m_BoneFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector_NetQuantize10> m_Translations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQuatNetSerializedCompressed> m_Rotations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector_NetQuantize10> m_Scales;
    
public:
    FCompressedPoseSnapshot();
};

