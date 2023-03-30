#include "OpenColorIOBlueprintLibrary.h"

class UObject;
class UTexture;
class UTextureRenderTarget2D;

bool UOpenColorIOBlueprintLibrary::ApplyColorSpaceTransform(const UObject* WorldContextObject, const FOpenColorIOColorConversionSettings& ConversionSettings, UTexture* InputTexture, UTextureRenderTarget2D* OutputRenderTarget) {
    return false;
}

UOpenColorIOBlueprintLibrary::UOpenColorIOBlueprintLibrary() {
}

