#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "MovieSceneTrackInstanceComponent.generated.h"

class UMovieSceneTrackInstance;
class UMovieSceneSection;

USTRUCT()
struct FMovieSceneTrackInstanceComponent {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    UMovieSceneSection* Owner;
    
    UPROPERTY()
    TSubclassOf<UMovieSceneTrackInstance> TrackInstanceClass;
    
    MOVIESCENE_API FMovieSceneTrackInstanceComponent();
};

