#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "NetOrderStructSnapAnim.h"
#include "NetOrderStructPushFromGrab.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FNetOrderStructPushFromGrab : public FNetOrderStructSnapAnim {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> m_ThrowTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_ThrowTargetDir;
    
    SIFU_API FNetOrderStructPushFromGrab();
};

