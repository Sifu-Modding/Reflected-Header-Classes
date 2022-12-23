#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEntityProvider -FallbackName=MovieSceneEntityProvider
#include "MovieSceneEventSectionBase.h"
#include "MovieSceneEvent.h"
#include "MovieSceneEventRepeaterSection.generated.h"

UCLASS(MinimalAPI)
class UMovieSceneEventRepeaterSection : public UMovieSceneEventSectionBase, public IMovieSceneEntityProvider {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FMovieSceneEvent Event;
    
    UMovieSceneEventRepeaterSection();
    
    // Fix for true pure virtual functions not being implemented
};

