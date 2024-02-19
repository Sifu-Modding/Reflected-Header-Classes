#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "SkinToneGender.h"
#include "SkinTonesDB.generated.h"

class UMaterialInterface;

UCLASS(Blueprintable)
class SIFU_API USkinTonesDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSkinToneGender> m_SkinTones;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* m_BaseFXMaterials[10];
    
    USkinTonesDB();

};

