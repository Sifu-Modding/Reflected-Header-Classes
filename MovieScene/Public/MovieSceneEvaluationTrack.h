#pragma once
#include "CoreMinimal.h"
#include "MovieSceneTrackImplementationPtr.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "EEvaluationMethod.h"
#include "MovieSceneEvalTemplatePtr.h"
#include "MovieSceneEvaluationTrack.generated.h"

class UMovieSceneTrack;

USTRUCT(BlueprintType)
struct FMovieSceneEvaluationTrack {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FGuid ObjectBindingID;
    
    UPROPERTY()
    uint16 EvaluationPriority;
    
    UPROPERTY()
    EEvaluationMethod EvaluationMethod;
    
    UPROPERTY(Export)
    TWeakObjectPtr<UMovieSceneTrack> SourceTrack;
    
    UPROPERTY()
    TArray<FMovieSceneEvalTemplatePtr> ChildTemplates;
    
    UPROPERTY()
    FMovieSceneTrackImplementationPtr TrackTemplate;
    
    UPROPERTY()
    FName EvaluationGroup;
    
    UPROPERTY()
    uint8 bEvaluateInPreroll: 1;
    
    UPROPERTY()
    uint8 bEvaluateInPostroll: 1;
    
    UPROPERTY()
    uint8 bTearDownPriority: 1;
    
public:
    MOVIESCENE_API FMovieSceneEvaluationTrack();
};

