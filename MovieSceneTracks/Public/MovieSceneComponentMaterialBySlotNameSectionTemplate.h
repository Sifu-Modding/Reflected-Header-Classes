#pragma once
#include "CoreMinimal.h"
#include "MovieSceneParameterSectionTemplate.h"
#include "MovieSceneComponentMaterialBySlotNameSectionTemplate.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneComponentMaterialBySlotNameSectionTemplate : public FMovieSceneParameterSectionTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SlotName;
    
public:
    MOVIESCENETRACKS_API FMovieSceneComponentMaterialBySlotNameSectionTemplate();
};

