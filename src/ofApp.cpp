#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);//backgroundcolor
    ballPos.set(ofRandom(ofGetWidth()), ofRandom(ofGetHeight()));//ball's firstrandom pos
    vel.set(5,5);//ball's velocity

}

//--------------------------------------------------------------
void ofApp::update(){
    ballPos+=vel;//ball move
    dis = ofPoint(ofGetMouseX(),ofGetMouseY())-ofPoint(ballPos.x,ballPos.y);//distance between mouse and ball
    
    if(dis.length()<100){
        vel*=-1;
    }//bounce when touching the mouse
    
    if(ballPos.x>ofGetWidth()-30){
        ballPos.x=ofGetWidth()-30;
        vel.x*=-1;
    };
    if(ballPos.y>ofGetHeight()-30){
        ballPos.y=ofGetHeight()-30;
        vel.y*=-1;
    }
    if(ballPos.x<30){
        ballPos.x =30;
        vel.x*=-1;
    }
    if(ballPos.y<30){
        ballPos.y=30;
        vel.y*=-1;
    }///bouce when touching wall
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofFill();
    ofDrawCircle(ballPos, 30);
    ofNoFill();
    ofDrawCircle(ofGetMouseX(),ofGetMouseY(),50);
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
