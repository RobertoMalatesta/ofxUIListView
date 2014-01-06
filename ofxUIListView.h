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
    
    vector<ofxUIListViewRow *> rows;

public:
    
    ofxUIListView(float x, float y, float w, float h) : ofxUIScrollableCanvas(x,y,w,h)
    {
        initScrollable();
    }
    
    void addRow(ofxUIListViewRow *row) {
        addWidgetDown(row);

        ofAddListener(row->newGUIEvent, this, &ofxUIListView::guiEvent);
        
        rows.push_back(row);
    }

    void addRow(string title) {
        ofxUIListViewRow *row = new ofxUIListViewRow(title);
        addRow(row);
    }


    
    void guiEvent(ofxUIEventArgs &e) {
        
        string name = e.widget->getName();
        int kind = e.widget->getKind();
    }
};


#endif
