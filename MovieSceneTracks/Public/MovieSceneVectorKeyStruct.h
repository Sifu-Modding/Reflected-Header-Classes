#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "MovieSceneVectorKeyStructBase.h"
#include "MovieSceneVectorKeyStruct.generated.h"

USTRUCT()
struct FMovieSceneVectorKeyStruct : public FMovieSceneVectorKeyStructBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector Vector;
    
    MOVIESCENETRACKS_API FMovieSceneVectorKeyStruct();
};

