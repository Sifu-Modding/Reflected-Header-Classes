#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatRange -FallbackName=FloatRange
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimMetaData -FallbackName=AnimMetaData
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoneReferenceContainerInterface -FallbackName=BoneReferenceContainerInterface
#include "PropertyFloorBoneRepartition.h"
#include "SCAnimOrderServiceSettings.h"
#include "Templates/SubclassOf.h"
#include "WeaponAnimInfo.h"
#include "SCAnimMetaData.generated.h"

class ABaseCharacter;
class ABaseWeapon;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class SIFU_API USCAnimMetaData : public UAnimMetaData, public IBoneReferenceContainerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSCAnimOrderServiceSettings> m_CustomOrderServiceSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUseWeaponAnimInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeaponAnimInfo m_WeaponAnimInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<ABaseWeapon>, FWeaponAnimInfo> m_WeaponAnimInfosPerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_SlopeCurveName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bShowSyncedAnimDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bRotateTargetBoneLocationOnFloorOrientation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bLockSpineXAxisRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bLockSpineYAxisRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fFloorSpineRepartitionBlendInOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRange m_FloorSpineRepartitionFrameRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bOverrideSlopeBoneRepartition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPropertyFloorBoneRepartition> m_OverrideSlopeBoneRepartition;
    
    USCAnimMetaData();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnPlay(uint8 _uiOrderId, ABaseCharacter* _character) const;
    

    // Fix for true pure virtual functions not being implemented
};

