#include "SCSequenceAnchor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent

ASCSequenceAnchor::ASCSequenceAnchor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMesh"));
    this->m_ComponentSkeletalMesh = (USkeletalMeshComponent*)RootComponent;
}


