#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneTrackTemplateProducer -FallbackName=MovieSceneTrackTemplateProducer
#include "MovieSceneMaterialTrack.h"
#include "MovieSceneComponentMaterialBySlotNameTrack.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneComponentMaterialBySlotNameTrack : public UMovieSceneMaterialTrack, public IMovieSceneTrackTemplateProducer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SlotName;
    
public:
    UMovieSceneComponentMaterialBySlotNameTrack();


    // Fix for true pure virtual functions not being implemented
};

