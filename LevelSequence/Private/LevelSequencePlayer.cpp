#include "LevelSequencePlayer.h"

ULevelSequencePlayer::ULevelSequencePlayer() {
    this->SequenceActor = NULL;
}

UCameraComponent* ULevelSequencePlayer::GetActiveCameraComponent() const {
    return NULL;
}

ULevelSequencePlayer* ULevelSequencePlayer::CreateLevelSequencePlayer(UObject* WorldContextObject, ULevelSequence* LevelSequence, FMovieSceneSequencePlaybackSettings Settings, ALevelSequenceActor*& OutActor) {
    return NULL;
}


