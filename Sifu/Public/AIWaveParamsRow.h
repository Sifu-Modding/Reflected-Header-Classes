#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "AIWaveBucketDescription.h"
#include "EAIArchetype.h"
#include "AIWaveParamsRow.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FAIWaveParamsRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAIArchetype, FAIWaveBucketDescription> m_ArchetypesBuckets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iMaxAIInCombatDuringWave;
    
    FAIWaveParamsRow();
};

