#include "MovieSceneCinematicShotSection.h"

UMovieSceneCinematicShotSection::UMovieSceneCinematicShotSection() {
    this->PrerollTime = 0.00f;
    this->bSimulateClothesOnFirstFrame = true;
}

void UMovieSceneCinematicShotSection::SetShotDisplayName(const FString& InShotDisplayName) {
}

FString UMovieSceneCinematicShotSection::GetShotDisplayName() const {
    return TEXT("");
}


