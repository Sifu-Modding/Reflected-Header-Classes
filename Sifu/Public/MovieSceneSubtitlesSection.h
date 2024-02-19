#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AkAudio -ObjectName=MovieSceneAkAudioEventSection -FallbackName=MovieSceneAkAudioEventSection
#include "MovieSceneSubtitlesSection.generated.h"

UCLASS(Blueprintable)
class SIFU_API UMovieSceneSubtitlesSection : public UMovieSceneAkAudioEventSection {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Subtitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsMCSpeaking;
    
public:
    UMovieSceneSubtitlesSection();

};

