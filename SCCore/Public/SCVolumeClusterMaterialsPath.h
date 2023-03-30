#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
#include "SCVolumeClusterMaterialsPath.generated.h"

USTRUCT(BlueprintType)
struct SCCORE_API FSCVolumeClusterMaterialsPath {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath m_RootMaterial;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath m_ChildrenMaterial;
    
    FSCVolumeClusterMaterialsPath();
};

