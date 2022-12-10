#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EMenuEnum.h"
#include "BaseNotification.generated.h"

UCLASS(BlueprintType)
class UBaseNotification : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EMenuEnum m_eOpenMenu;
    
    UBaseNotification();
};

