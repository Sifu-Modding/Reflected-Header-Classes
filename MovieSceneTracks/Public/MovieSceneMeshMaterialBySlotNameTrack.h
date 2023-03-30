#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneTrackTemplateProducer -FallbackName=MovieSceneTrackTemplateProducer
#include "MovieScenePropertyTrack.h"
#include "MovieSceneMeshMaterialBySlotNameTrack.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneMeshMaterialBySlotNameTrack : public UMovieScenePropertyTrack, public IMovieSceneTrackTemplateProducer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SlotName;
    
    UMovieSceneMeshMaterialBySlotNameTrack();
    
    // Fix for true pure virtual functions not being implemented
};

