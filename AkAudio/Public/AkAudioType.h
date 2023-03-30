#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AkAudioType.generated.h"

UCLASS(Blueprintable)
class AKAUDIO_API UAkAudioType : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 ShortID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> UserData;
    
    UAkAudioType();
};

