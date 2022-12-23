#include "MovieSceneCapture.h"
#include "Templates/SubclassOf.h"

class UMovieSceneCaptureProtocolBase;

void UMovieSceneCapture::SetImageCaptureProtocolType(TSubclassOf<UMovieSceneCaptureProtocolBase> ProtocolType) {
}

void UMovieSceneCapture::SetAudioCaptureProtocolType(TSubclassOf<UMovieSceneCaptureProtocolBase> ProtocolType) {
}

UMovieSceneCaptureProtocolBase* UMovieSceneCapture::GetImageCaptureProtocol() {
    return NULL;
}

UMovieSceneCaptureProtocolBase* UMovieSceneCapture::GetAudioCaptureProtocol() {
    return NULL;
}

UMovieSceneCapture::UMovieSceneCapture() {
    this->ImageCaptureProtocol = NULL;
    this->AudioCaptureProtocol = NULL;
    this->bUseSeparateProcess = false;
    this->bCloseEditorWhenCaptureStarts = false;
    this->AdditionalCommandLineArguments = TEXT("-NOSCREENMESSAGES");
    this->InheritedCommandLineArguments = TEXT("-AUTH_LOGIN=unused -AUTH_PASSWORD=4517fedd837641b2ae5ceda7da0538df -AUTH_TYPE=exchangecode -epicapp=d36336f190094951873ed6138ac208d8 -epicenv=Prod -EpicPortal -epicusername=bondDIVAKAMIKAZE -epicuserid=4e82986d6d484902a96c462c3084c84c -epiclocale=en -epicsandboxid=b7b42e2078524ab386a8b2a9856ef557 ");
}

