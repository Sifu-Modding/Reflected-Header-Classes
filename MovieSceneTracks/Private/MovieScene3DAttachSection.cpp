#include "MovieScene3DAttachSection.h"

UMovieScene3DAttachSection::UMovieScene3DAttachSection() {
    this->bPreviewOnly = false;
    this->bApplyMeshOffset = false;
    this->AttachmentLocationRule = EAttachmentRule::KeepRelative;
    this->AttachmentRotationRule = EAttachmentRule::KeepRelative;
    this->AttachmentScaleRule = EAttachmentRule::KeepRelative;
    this->DetachmentLocationRule = EDetachmentRule::KeepRelative;
    this->DetachmentRotationRule = EDetachmentRule::KeepRelative;
    this->DetachmentScaleRule = EDetachmentRule::KeepRelative;
}


