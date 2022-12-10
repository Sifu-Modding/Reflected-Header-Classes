#pragma once
#include "CoreMinimal.h"
#include "MovieSceneTrackEvaluationField.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "MovieSceneSignedObject.h"
#include "MovieSceneTrackEvalOptions.h"
#include "MovieSceneTrack.generated.h"

UCLASS(Abstract, DefaultToInstanced, MinimalAPI)
class UMovieSceneTrack : public UMovieSceneSignedObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FMovieSceneTrackEvalOptions EvalOptions;
    
protected:
    UPROPERTY()
    bool bIsEvalDisabled;
    
private:
    UPROPERTY()
    FGuid EvaluationFieldGuid;
    
    UPROPERTY()
    FMovieSceneTrackEvaluationField EvaluationField;
    
public:
    UMovieSceneTrack();
};

