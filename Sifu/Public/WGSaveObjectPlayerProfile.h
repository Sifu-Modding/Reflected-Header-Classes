#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCSaveObjectPlayerProfile -FallbackName=SCSaveObjectPlayerProfile
#include "ProfileData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "WGSaveObjectPlayerProfile.generated.h"

UCLASS()
class SIFU_API UWGSaveObjectPlayerProfile : public USCSaveObjectPlayerProfile {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, SaveGame, VisibleAnywhere)
    FProfileData m_WGProfileData;
    
    UWGSaveObjectPlayerProfile();
    UFUNCTION(BlueprintCallable)
    void BPF_AddUnlockedCheat(FGameplayTag _tagToAdd);
    
};

