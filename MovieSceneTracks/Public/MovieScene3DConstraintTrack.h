#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneTrack -FallbackName=MovieSceneTrack
#include "MovieScene3DConstraintTrack.generated.h"

class UMovieSceneSection;

UCLASS(MinimalAPI)
class UMovieScene3DConstraintTrack : public UMovieSceneTrack {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    TArray<UMovieSceneSection*> ConstraintSections;
    
public:
    UMovieScene3DConstraintTrack();
};

