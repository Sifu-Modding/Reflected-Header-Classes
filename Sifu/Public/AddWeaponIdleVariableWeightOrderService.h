#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCUserDefinedEnumHandler -FallbackName=SCUserDefinedEnumHandler
#include "AddVariableWeightOrderService.h"
#include "AddWeaponIdleVariableWeightOrderService.generated.h"

class UBaseWeaponData;
class UBlendProfile;

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UAddWeaponIdleVariableWeightOrderService : public UAddVariableWeightOrderService {
    GENERATED_BODY()
public:
    UAddWeaponIdleVariableWeightOrderService();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FSCUserDefinedEnumHandler BPE_GetEnumLayerForWeapon(const UBaseWeaponData* _weaponData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UBlendProfile* BPE_GetBlendProfileForWeapon(const UBaseWeaponData* _weaponData) const;
    
};

