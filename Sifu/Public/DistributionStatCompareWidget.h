#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "DistributionStatCompareWidget.generated.h"

class UPreviewData;
class UStatsComponent;

UCLASS(Blueprintable, EditInlineNew)
class UDistributionStatCompareWidget : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPreviewData* m_PreviewData;
    
public:
    UDistributionStatCompareWidget();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UStatsComponent* BPF_GetStatsComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPreviewData* BPF_GetPreviewData() const;
    
};

