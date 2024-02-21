#include "GameplayTagsSettings.h"

UGameplayTagsSettings::UGameplayTagsSettings() {
    this->ConfigFileName = TEXT("../../../Sifu/Config/DefaultGameplayTags.ini");
    this->GameplayTagList.AddDefaulted(788);
    this->ImportTagsFromConfig = true;
    this->WarnOnInvalidTags = true;
    this->FastReplication = false;
    this->InvalidTagCharacters = TEXT("\"',");
    this->GameplayTagRedirects.AddDefaulted(26);
    this->NumBitsForContainerSize = 6;
    this->NetIndexFirstBitSegment = 16;
}


