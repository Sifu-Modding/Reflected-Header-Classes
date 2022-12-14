#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSequencePlaybackSettings -FallbackName=MovieSceneSequencePlaybackSettings
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSequencePlayer -FallbackName=MovieSceneSequencePlayer
#include "TemplateSequencePlayer.generated.h"

class UTemplateSequencePlayer;
class UObject;
class UTemplateSequence;
class ATemplateSequenceActor;

UCLASS()
class TEMPLATESEQUENCE_API UTemplateSequencePlayer : public UMovieSceneSequencePlayer {
    GENERATED_BODY()
public:
    UTemplateSequencePlayer();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UTemplateSequencePlayer* CreateTemplateSequencePlayer(UObject* WorldContextObject, UTemplateSequence* TemplateSequence, FMovieSceneSequencePlaybackSettings Settings, ATemplateSequenceActor*& OutActor);
    
};

