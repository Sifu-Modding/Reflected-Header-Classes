#include "WrapBox.h"
#include "ESlateVisibility.h"

UWrapBox::UWrapBox() {
    this->bIsVariable = false;
    this->Visibility = ESlateVisibility::SelfHitTestInvisible;
    this->WrapWidth = 0.00f;
    this->WrapSize = 500.00f;
    this->bExplicitWrapWidth = false;
    this->bExplicitWrapSize = false;
    this->Orientation = Orient_Horizontal;
}

void UWrapBox::SetInnerSlotPadding(FVector2D InPadding) {
}

UWrapBoxSlot* UWrapBox::AddChildToWrapBox(UWidget* Content) {
    return NULL;
}


