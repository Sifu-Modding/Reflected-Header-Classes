#pragma once
#include "CoreMinimal.h"
#include "TrackInstanceInputComponent.generated.h"

class UMovieSceneSection;

USTRUCT()
struct FTrackInstanceInputComponent {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    UMovieSceneSection* Section;
    
    UPROPERTY()
    int32 OutputIndex;
    
    MOVIESCENE_API FTrackInstanceInputComponent();
};

