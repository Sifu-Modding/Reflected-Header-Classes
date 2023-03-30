#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=UniqueNetIdRepl -FallbackName=UniqueNetIdRepl
#include "ECoopGameModeAnswerStatus.h"
#include "CoopGroupMemberInfo.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FCoopGroupMemberInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUniqueNetIdRepl m_UniqueNetId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECoopGameModeAnswerStatus m_eAnswerStatus;
    
    FCoopGroupMemberInfo();
};

