#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MovieSceneSequenceTickManager.generated.h"

class AActor;
class UMovieSceneEntitySystemLinker;

UCLASS(Blueprintable)
class MOVIESCENE_API UMovieSceneSequenceTickManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> SequenceActors;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMovieSceneEntitySystemLinker* Linker;
    
public:
    UMovieSceneSequenceTickManager();

};

