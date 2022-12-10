#include "EOSGetPlayerAvatar.h"

class UObject;
class UTexture;
class UEOSGetPlayerAvatar;

UEOSGetPlayerAvatar* UEOSGetPlayerAvatar::GetPlayerAvatar(const UObject* NewWorldContextObject, int32 NewLocalUserNum, FUniqueNetIdRepl NewUserId, UTexture* NewDefaultAvatar) {
    return NULL;
}

UEOSGetPlayerAvatar::UEOSGetPlayerAvatar() {
    this->WorldContextObject = NULL;
    this->LocalUserNum = 0;
    this->DefaultAvatar = NULL;
}

