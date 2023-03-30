#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "BPOrderServiceInstance.h"
#include "TargetTransformDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FTargetTransformDelegate, const FBPOrderServiceInstance&, _instance, bool&, _bOutSuccess, FTransform&, _result);

