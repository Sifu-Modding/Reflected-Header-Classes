#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoneReference -FallbackName=BoneReference
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoneReferenceContainerInterface -FallbackName=BoneReferenceContainerInterface
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EBoneTranslationRetargetingMode -FallbackName=EBoneTranslationRetargetingMode
#include "WGRetargetingOverrideData.generated.h"

class USkeleton;

UCLASS(Blueprintable)
class SIFU_API UWGRetargetingOverrideData : public UDataAsset, public IBoneReferenceContainerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeleton* m_Skeleton;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FBoneReference, TEnumAsByte<EBoneTranslationRetargetingMode::Type>> m_BoneRetargetingOverrideMap;
    
    UWGRetargetingOverrideData();


    // Fix for true pure virtual functions not being implemented
};

