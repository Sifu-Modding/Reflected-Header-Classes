#pragma once
#include "CoreMinimal.h"
#include "MovieSceneParticleChannel.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEvalTemplate -FallbackName=MovieSceneEvalTemplate
#include "MovieSceneParticleSectionTemplate.generated.h"

USTRUCT()
struct FMovieSceneParticleSectionTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    UPROPERTY()
    FMovieSceneParticleChannel ParticleKeys;
    
    MOVIESCENETRACKS_API FMovieSceneParticleSectionTemplate();
};

