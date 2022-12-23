#pragma once
#include "CoreMinimal.h"
#include "ActorSequenceObjectReferenceMap.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSequence -FallbackName=MovieSceneSequence
#include "ActorSequence.generated.h"

class UMovieScene;

UCLASS(DefaultToInstanced)
class ACTORSEQUENCE_API UActorSequence : public UMovieSceneSequence {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    UMovieScene* MovieScene;
    
    UPROPERTY()
    FActorSequenceObjectReferenceMap ObjectReferences;
    
public:
    UActorSequence();
};

