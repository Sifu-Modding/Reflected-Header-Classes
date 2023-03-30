#pragma once
#include "CoreMinimal.h"
#include "AISenseEvent.h"
#include "AISightEvent.h"
#include "AISenseEvent_Sight.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class AIMODULE_API UAISenseEvent_Sight : public UAISenseEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAISightEvent Event;
    
    UAISenseEvent_Sight();
};

