#pragma once
#include "CoreMinimal.h"
#include "OnItemDragDetectedDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=Widget -FallbackName=Widget
#include "OnItemSelectionChangedDelegate.h"
#include "AkWwiseObjectDetails.h"
#include "AkWwiseTree.generated.h"

UCLASS(DefaultConfig, Config=Editor)
class AKAUDIO_API UAkWwiseTree : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnItemSelectionChanged OnSelectionChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnItemDragDetected OnItemDragged;
    
    UAkWwiseTree();
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void SetSearchText(const FString& newText);
    
    UFUNCTION(BlueprintCosmetic, BlueprintPure)
    FAkWwiseObjectDetails GetSelectedItem() const;
    
    UFUNCTION(BlueprintCosmetic, BlueprintPure)
    FString GetSearchText() const;
    
};

