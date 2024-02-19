#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=ComboBoxString -FallbackName=ComboBoxString
#include "PerPlatformWidget.h"
#include "PerPlatformComboBox.generated.h"

UCLASS(Blueprintable)
class UPerPlatformComboBox : public UComboBoxString, public IPerPlatformWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NormalSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SmallScreenSize;
    
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCultureChanged OnCultureChanged;
    
public:
    UPerPlatformComboBox();


    // Fix for true pure virtual functions not being implemented
};

