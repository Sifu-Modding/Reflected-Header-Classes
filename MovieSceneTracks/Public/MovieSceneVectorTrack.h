#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneTrackTemplateProducer -FallbackName=MovieSceneTrackTemplateProducer
#include "MovieScenePropertyTrack.h"
#include "MovieSceneVectorTrack.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneVectorTrack : public UMovieScenePropertyTrack, public IMovieSceneTrackTemplateProducer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumChannelsUsed;
    
public:
    UMovieSceneVectorTrack();


    // Fix for true pure virtual functions not being implemented
};

