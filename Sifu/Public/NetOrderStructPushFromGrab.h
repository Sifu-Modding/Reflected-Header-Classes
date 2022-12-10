#pragma once
#include "CoreMinimal.h"
#include "NetOrderStructSnapAnim.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "NetOrderStructPushFromGrab.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FNetOrderStructPushFromGrab : public FNetOrderStructSnapAnim {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    TWeakObjectPtr<AActor> m_ThrowTarget;
    
    UPROPERTY(BlueprintReadWrite)
    FVector m_ThrowTargetDir;
    
    SIFU_API FNetOrderStructPushFromGrab();
};

