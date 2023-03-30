#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieSceneTracks -ObjectName=MovieSceneParameterSectionTemplate -FallbackName=MovieSceneParameterSectionTemplate
#include "EnumParameterNameAndCurve.h"
#include "IntegerParameterNameAndCurve.h"
#include "MovieSceneControlRigParameterTemplate.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneControlRigParameterTemplate : public FMovieSceneParameterSectionTemplate {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEnumParameterNameAndCurve> Enums;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIntegerParameterNameAndCurve> Integers;
    
public:
    CONTROLRIG_API FMovieSceneControlRigParameterTemplate();
};

