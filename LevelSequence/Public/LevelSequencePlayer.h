#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSequencePlayer -FallbackName=MovieSceneSequencePlayer
#include "OnLevelSequencePlayerCameraCutEventDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSequencePlaybackSettings -FallbackName=MovieSceneSequencePlaybackSettings
#include "LevelSequencePlayer.generated.h"

class ULevelSequencePlayer;
class ALevelSequenceActor;
class UCameraComponent;
class UObject;
class ULevelSequence;

UCLASS()
class LEVELSEQUENCE_API ULevelSequencePlayer : public UMovieSceneSequencePlayer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnLevelSequencePlayerCameraCutEvent OnCameraCut;
    
    UPROPERTY(Transient)
    ALevelSequenceActor* SequenceActor;
    
    ULevelSequencePlayer();
    UFUNCTION(BlueprintPure)
    UCameraComponent* GetActiveCameraComponent() const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ULevelSequencePlayer* CreateLevelSequencePlayer(UObject* WorldContextObject, ULevelSequence* LevelSequence, FMovieSceneSequencePlaybackSettings Settings, ALevelSequenceActor*& OutActor);
    
};

