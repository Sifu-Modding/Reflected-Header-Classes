#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AkAudio -ObjectName=MovieSceneAkAudioEventTemplate -FallbackName=MovieSceneAkAudioEventTemplate
#include "MovieSceneSubtitlesTemplate.generated.h"

class UMovieSceneSubtitlesSection;

USTRUCT(BlueprintType)
struct SIFU_API FMovieSceneSubtitlesTemplate : public FMovieSceneAkAudioEventTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMovieSceneSubtitlesSection* SubtitleSection;
    
    FMovieSceneSubtitlesTemplate();
};

