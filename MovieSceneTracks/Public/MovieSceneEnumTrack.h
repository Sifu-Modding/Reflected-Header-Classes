#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneTrackTemplateProducer -FallbackName=MovieSceneTrackTemplateProducer
#include "MovieScenePropertyTrack.h"
#include "MovieSceneEnumTrack.generated.h"

class UEnum;

UCLASS(Blueprintable)
class MOVIESCENETRACKS_API UMovieSceneEnumTrack : public UMovieScenePropertyTrack, public IMovieSceneTrackTemplateProducer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnum* Enum;
    
public:
    UMovieSceneEnumTrack();
    
    // Fix for true pure virtual functions not being implemented
};

