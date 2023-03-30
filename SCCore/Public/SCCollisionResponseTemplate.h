#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CollisionResponseContainer -FallbackName=CollisionResponseContainer
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ECollisionChannel -FallbackName=ECollisionChannel
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ECollisionEnabled -FallbackName=ECollisionEnabled
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EObjectTypeQuery -FallbackName=EObjectTypeQuery
#include "SCCollisionResponseTemplate.generated.h"

USTRUCT(BlueprintType)
struct FSCCollisionResponseTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionEnabled::Type> m_eCollisionEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EObjectTypeQuery> m_eObjectType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> m_eCollisionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCollisionResponseContainer m_ResponseToChannels;
    
    SCCORE_API FSCCollisionResponseTemplate();
};

