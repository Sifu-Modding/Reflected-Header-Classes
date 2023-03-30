#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AIDataProviderFloatValue -FallbackName=AIDataProviderFloatValue
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvTraceData -FallbackName=EnvTraceData
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CollisionProfileName -FallbackName=CollisionProfileName
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CollisionResponseContainer -FallbackName=CollisionResponseContainer
#include "SCEnvQueryTest.h"
#include "Templates/SubclassOf.h"
#include "SCEnvQueryTest_Trace.generated.h"

class UEnvQueryContext;

UCLASS(Blueprintable)
class SCCORE_API USCEnvQueryTest_Trace : public USCEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnvTraceData m_TraceData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bCustomCollisionResponse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCollisionProfileName m_CollisionProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCollisionResponseContainer m_CollisionSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> m_FromContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> m_ToContext;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue m_FromZOffset;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue m_ToZOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIgnoreQuerier;
    
    USCEnvQueryTest_Trace();
};

