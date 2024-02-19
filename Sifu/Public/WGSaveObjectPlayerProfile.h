#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCSaveObjectPlayerProfile -FallbackName=SCSaveObjectPlayerProfile
#include "ProfileData.h"
#include "WGSaveObjectPlayerProfile.generated.h"

UCLASS(Blueprintable)
class SIFU_API UWGSaveObjectPlayerProfile : public USCSaveObjectPlayerProfile {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FProfileData m_WGProfileData;
    
    UWGSaveObjectPlayerProfile();

    UFUNCTION(BlueprintCallable)
    void BPF_AddUnlockedCheat(FGameplayTag _tagToAdd);
    
};

