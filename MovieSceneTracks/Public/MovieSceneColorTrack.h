#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneTrackTemplateProducer -FallbackName=MovieSceneTrackTemplateProducer
#include "MovieScenePropertyTrack.h"
#include "MovieSceneColorTrack.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneColorTrack : public UMovieScenePropertyTrack, public IMovieSceneTrackTemplateProducer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSlateColor;
    
public:
    UMovieSceneColorTrack();
    
    // Fix for true pure virtual functions not being implemented
};

