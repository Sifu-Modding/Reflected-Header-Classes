#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BaseEnvironmentalInteractionComponent.h"
#include "EWallSide.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCUserDefinedEnumHandler -FallbackName=SCUserDefinedEnumHandler
#include "GenericEnvironmentalInteractionComponent.generated.h"

class USplineComponent;
class UWallEnvironmentalAttackSettings;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UGenericEnvironmentalInteractionComponent : public UBaseEnvironmentalInteractionComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bIgnoreNavMesh;
    
    UPROPERTY(EditAnywhere)
    EWallSide m_eWallSide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    TArray<USplineComponent*> m_Splines;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UWallEnvironmentalAttackSettings> m_Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSCUserDefinedEnumHandler m_EnvType;
    
    UGenericEnvironmentalInteractionComponent();
};

