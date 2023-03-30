#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNode_Base -FallbackName=AnimNode_Base
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PoseLink -FallbackName=PoseLink
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=ESCBlendType -FallbackName=ESCBlendType
#include "VariableWeightInfo.h"
#include "VariableWeightLayerToBoneMask.h"
#include "SCAnimNode_SetVariableWeightLayers.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FSCAnimNode_SetVariableWeightLayers : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPoseLink mBasePose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FVariableWeightLayerToBoneMask> mVariableWeightLayerToBoneMaskRuntime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVariableWeightInfo mVariableWeightLayerToBoneMaskFromOrderDB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVariableWeightLayerToBoneMask> mFillerLayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVariableWeightLayerToBoneMask> mVariableWeightLayerToBoneMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mBlendTimeWhenSwitchingProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESCBlendType mBlendModeWhenSwitchingProfile;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVariableWeightLayerToBoneMask> m_PrevVariableWeightLayerToBoneMaskRuntime;
    
public:
    FSCAnimNode_SetVariableWeightLayers();
};

