//
//  ofxUIListViewRow.h
//  ofxKinectOsc
//
//  Created by joe on 1/6/14.
//
//

#ifndef OFXUI_LISTVIEW_ROW
#define OFXUI_LISTVIEW_ROW

#include "ofxUICanvas.h"

class ofxUIListViewRow : public ofxUICanvas {

public:
    
    ofxUIListViewRow(string title) : ofxUICanvas() {

        this->setWidgetPosition(OFX_UI_WIDGET_POSITION_RIGHT);
        this->addEmbeddedWidget(new ofxUIToggle(32, 32, true, ""));
        this->addEmbeddedWidget(new ofxUILabel(title, OFX_UI_FONT_LARGE));
        this->addEmbeddedWidget(new ofxUILabelButton("X", false));
        this->autoSizeToFitWidgets();
    }

};


#endif
