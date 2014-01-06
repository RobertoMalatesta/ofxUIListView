//
//  ofxUIListView.h
//
//  Created by joe on 1/4/14.
//
//

#ifndef OFXUI_LISTVIEW
#define OFXUI_LISTVIEW

#include "ofxUIScrollableCanvas.h"
#include "ofxUIListViewRow.h"

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
        ofxUIListViewRow *row = new ofxUIListViewRow(title);
        addWidgetDown(row);
    }
};


#endif /* defined(OFXUI_LIST_VIEW) */
