#pragma once
#include "CoreMinimal.h"
#include "EEOSUserInterface_SwitchToCrossPlatformAccount_Choice.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EOSUserInterface_SwitchToCrossPlatformAccount_Context.generated.h"

UCLASS(BlueprintType)
class UEOSUserInterface_SwitchToCrossPlatformAccount_Context : public UObject {
    GENERATED_BODY()
public:
    UEOSUserInterface_SwitchToCrossPlatformAccount_Context();
    UFUNCTION(BlueprintCallable)
    void SelectChoice(EEOSUserInterface_SwitchToCrossPlatformAccount_Choice SelectedChoice);
    
};

