#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSection -FallbackName=MovieSceneSection
#include "MovieSceneRetargetingOverrideSection.generated.h"

class UWGRetargetingOverrideData;

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneRetargetingOverrideSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWGRetargetingOverrideData* m_RetargetingOverrideData;
    
    UMovieSceneRetargetingOverrideSection();

};

