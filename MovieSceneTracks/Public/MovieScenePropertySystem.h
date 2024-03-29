#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEntitySystem -FallbackName=MovieSceneEntitySystem
#include "MovieScenePropertySystem.generated.h"

class UMovieScenePropertyInstantiatorSystem;

UCLASS(Abstract, Blueprintable)
class MOVIESCENETRACKS_API UMovieScenePropertySystem : public UMovieSceneEntitySystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMovieScenePropertyInstantiatorSystem* InstantiatorSystem;
    
public:
    UMovieScenePropertySystem();

};

