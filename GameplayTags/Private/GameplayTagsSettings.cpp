#include "GameplayTagsSettings.h"

UGameplayTagsSettings::UGameplayTagsSettings() {
    this->ImportTagsFromConfig = true;
    this->WarnOnInvalidTags = true;
    this->FastReplication = false;
    this->InvalidTagCharacters = TEXT("\"',");
    this->GameplayTagRedirects.AddDefaulted(24);
    this->NumBitsForContainerSize = 6;
    this->NetIndexFirstBitSegment = 16;
}

