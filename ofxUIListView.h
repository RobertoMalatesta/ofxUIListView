//
//  ofxUIListView.h
//
//  Created by joe on 1/4/14.
//
//

#ifndef OFXUI_LIST_VIEW
#define OFXUI_LIST_VIEW

#include "ofxUIScrollableCanvas.h"

class ofxUIListView : public ofxUIScrollableCanvas
{
private:
    
    vector<ofxUIWidget> rows;

public:
    
    ofxUIListView(float x, float y, float w, float h) : ofxUIScrollableCanvas(x,y,w,h)
    {
        initScrollable();
    }
    
    void addRow(string title) {
        
        ofxUIWidget *row = new ofxUILabel(title, OFX_UI_FONT_LARGE);
        row->setWidgetPosition(OFX_UI_WIDGET_POSITION_RIGHT);
        
        addWidgetDown(ROW);
    }
};


#endif /* defined(OFXUI_LIST_VIEW) */
