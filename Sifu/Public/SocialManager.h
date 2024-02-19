#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SocialManager.generated.h"

UCLASS(Blueprintable)
class SIFU_API USocialManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fCoopResolutionTimeOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fCoopResolutionReturningPvETimeOut;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_NbNeededPlayersPerGameMode[3];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_NbMaxPlayersPerGameMode[3];
    
public:
    USocialManager();

};

