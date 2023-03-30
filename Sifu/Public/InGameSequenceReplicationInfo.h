#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSequencePlaybackParams -FallbackName=MovieSceneSequencePlaybackParams
#include "ESequenceState.h"
#include "InGameSequenceReplicationInfo.generated.h"

class ULevelSequence;

USTRUCT(BlueprintType)
struct FInGameSequenceReplicationInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequence* m_LevelSequenceToReplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneSequencePlaybackParams m_playbackParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESequenceState m_eSequenceState;
    
    SIFU_API FInGameSequenceReplicationInfo();
};

