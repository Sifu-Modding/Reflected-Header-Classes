#pragma once
#include "CoreMinimal.h"
#include "SCReplayLevelStreaming.h"
#include "SCReplayLevelStreamingState.generated.h"

USTRUCT(BlueprintType)
struct SCCORE_API FSCReplayLevelStreamingState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FSCReplayLevelStreaming> m_Levels;
    
    FSCReplayLevelStreamingState();
};

