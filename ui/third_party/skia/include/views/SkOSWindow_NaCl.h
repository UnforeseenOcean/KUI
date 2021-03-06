
/*
 * Copyright 2012 Skia
 *
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */


#ifndef SkOSWindow_NaCl_DEFINED
#define SkOSWindow_NaCl_DEFINED

#include "SkWindow.h"

class SkIRect;

class SkOSWindow : public SkWindow {
public:
    SkOSWindow(void*) {}
    ~SkOSWindow() {}

    enum SkBackEndTypes {
        kNone_BackEndType,
        kNativeGL_BackEndType,
    };

    bool attach(SkBackEndTypes /* attachType */, int /* msaaSampleCount */) {
        return true;
    }
    void detach() {}
    void present() {}

    virtual void onPDFSaved(const char title[], const char desc[],
        const char path[]);

protected:
    // overrides from SkWindow
    virtual void onHandleInval(const SkIRect&);
    virtual void onSetTitle(const char title[]);

private:
    typedef SkWindow INHERITED;
};

#endif

