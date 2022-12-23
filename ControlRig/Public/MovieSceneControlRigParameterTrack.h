#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneNameableTrack -FallbackName=MovieSceneNameableTrack
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneTrackTemplateProducer -FallbackName=MovieSceneTrackTemplateProducer
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=NodeAndChannelMappings -FallbackName=NodeAndChannelMappings
#include "MovieSceneControlRigParameterTrack.generated.h"

class UControlRig;
class UMovieSceneSection;

UCLASS(MinimalAPI)
class UMovieSceneControlRigParameterTrack : public UMovieSceneNameableTrack, public IMovieSceneTrackTemplateProducer, public INodeAndChannelMappings {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UControlRig* ControlRig;
    
    UPROPERTY(Instanced)
    UMovieSceneSection* SectionToKey;
    
    UPROPERTY(Instanced)
    TArray<UMovieSceneSection*> Sections;
    
    UPROPERTY()
    FName TrackName;
    
public:
    UMovieSceneControlRigParameterTrack();
    
    // Fix for true pure virtual functions not being implemented
};

