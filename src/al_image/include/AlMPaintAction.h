/*
* Copyright (c) 2018-present, aliminabc@gmail.com.
*
* This source code is licensed under the MIT license found in the
* LICENSE file in the root directory of this source tree.
*/

#ifndef HWVC_ANDROID_ALMPAINTACTION_H
#define HWVC_ANDROID_ALMPAINTACTION_H

#include "AlAbsMFilterAction.h"
#include "AlColor.h"

al_class_ex(AlMPaintAction, AlAbsMFilterAction) {
public:
    AlMPaintAction();

    ~AlMPaintAction();

    void addPoint(const AlVec2 &pointF);

    void setPaintSize(float size);

    float getPaintSize();

    void setColor(AlColor color);

    AlColor getColor();

    std::vector<float> *getPath();

    virtual HwResult draw(HwAbsTexture *src, HwAbsTexture *dest) override;

    virtual HwResult fromElement(AlElement *element) override;

    virtual HwResult toElement(AlElement **element) override;

private:
    AlMPaintAction(const AlMPaintAction &o) : AlAbsMFilterAction(o) {};

private:
    std::vector<float> path;
    float paintSize = 0.0f;
    AlColor color = AlColor(0xffffff);
};


#endif //HWVC_ANDROID_ALMPAINTACTION_H
