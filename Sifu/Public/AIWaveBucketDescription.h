#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Int32Range -FallbackName=Int32Range
#include "AIWeaponBucketDescription.h"
#include "AIWaveBucketDescription.generated.h"

USTRUCT(BlueprintType)
struct FAIWaveBucketDescription {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iNumberInBucket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iMaxInCombat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAIWeaponBucketDescription> m_WeaponBuckets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInt32Range m_iWeaponSpawnFrequency;
    
    SIFU_API FAIWaveBucketDescription();
};

