#include "LevelSequencePlayer.h"

class UCameraComponent;
class UObject;
class ALevelSequenceActor;
class ULevelSequence;
class ULevelSequencePlayer;

UCameraComponent* ULevelSequencePlayer::GetActiveCameraComponent() const {
    return NULL;
}

ULevelSequencePlayer* ULevelSequencePlayer::CreateLevelSequencePlayer(UObject* WorldContextObject, ULevelSequence* LevelSequence, FMovieSceneSequencePlaybackSettings Settings, ALevelSequenceActor*& OutActor) {
    return NULL;
}

ULevelSequencePlayer::ULevelSequencePlayer() {
    this->SequenceActor = NULL;
}

