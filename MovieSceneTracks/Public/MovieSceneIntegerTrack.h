#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneTrackTemplateProducer -FallbackName=MovieSceneTrackTemplateProducer
#include "MovieScenePropertyTrack.h"
#include "MovieSceneIntegerTrack.generated.h"

UCLASS(Blueprintable)
class MOVIESCENETRACKS_API UMovieSceneIntegerTrack : public UMovieScenePropertyTrack, public IMovieSceneTrackTemplateProducer {
    GENERATED_BODY()
public:
    UMovieSceneIntegerTrack();


    // Fix for true pure virtual functions not being implemented
};

