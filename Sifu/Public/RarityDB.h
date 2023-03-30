#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "EGearRarity.h"
#include "RarityData.h"
#include "RarityDB.generated.h"

UCLASS(Blueprintable)
class SIFU_API URarityDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRarityData m_RaritiesData[5];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRarityData m_DirtRarityData;
    
    URarityDB();
    UFUNCTION(BlueprintCallable)
    void BPF_GetRarityData(EGearRarity _rarity, FRarityData& _outRarityData);
    
};

