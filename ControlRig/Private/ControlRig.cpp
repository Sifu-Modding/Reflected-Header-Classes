#include "ControlRig.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AnimationCore -ObjectName=AnimationDataSourceRegistry -FallbackName=AnimationDataSourceRegistry
//CROSS-MODULE INCLUDE V2: -ModuleName=RigVM -ObjectName=RigVM -FallbackName=RigVM
#include "Templates/SubclassOf.h"

UControlRig::UControlRig() {
    this->ExecutionType = ERigExecutionType::Runtime;
    this->VM = CreateDefaultSubobject<URigVM>(TEXT("VM"));
    this->DataSourceRegistry = CreateDefaultSubobject<UAnimationDataSourceRegistry>(TEXT("DataSourceRegistry"));
    this->EventQueue.AddDefaulted(1);
    this->InteractionRig = NULL;
    this->InteractionRigClass = NULL;
}

void UControlRig::SetInteractionRigClass(TSubclassOf<UControlRig> InInteractionRigClass) {
}

void UControlRig::SetInteractionRig(UControlRig* InInteractionRig) {
}

TSubclassOf<UControlRig> UControlRig::GetInteractionRigClass() const {
    return NULL;
}

UControlRig* UControlRig::GetInteractionRig() const {
    return NULL;
}


