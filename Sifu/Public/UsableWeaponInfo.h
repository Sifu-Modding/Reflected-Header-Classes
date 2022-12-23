#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UsableWeaponInfo.generated.h"

class UBaseWeaponData;
class UWeaponGameplayData;
class ABaseWeapon;

USTRUCT(BlueprintType)
struct FUsableWeaponInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UWeaponGameplayData> m_weaponGameplayData;
    
    UPROPERTY(EditAnywhere)
    TMap<TSubclassOf<ABaseWeapon>, TSubclassOf<UBaseWeaponData>> m_WeaponAnimInfos;
    
    SIFU_API FUsableWeaponInfo();
};

