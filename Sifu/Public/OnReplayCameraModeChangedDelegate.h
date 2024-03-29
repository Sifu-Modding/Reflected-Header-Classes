#pragma once
#include "CoreMinimal.h"
#include "EReplayCameraMode.h"
#include "OnReplayCameraModeChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnReplayCameraModeChanged, EReplayCameraMode, _eCameraMode);

