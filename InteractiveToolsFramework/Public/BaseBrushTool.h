#pragma once
#include "CoreMinimal.h"
#include "BrushStampData.h"
#include "MeshSurfacePointTool.h"
#include "BaseBrushTool.generated.h"

class UBrushBaseProperties;
class UBrushStampIndicator;

UCLASS(Blueprintable, NonTransient)
class INTERACTIVETOOLSFRAMEWORK_API UBaseBrushTool : public UMeshSurfacePointTool {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBrushBaseProperties* BrushProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInBrushStroke;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WorldToLocalScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBrushStampData LastBrushStamp;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UBrushBaseProperties> PropertyClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBrushStampIndicator* BrushStampIndicator;
    
public:
    UBaseBrushTool();

};

