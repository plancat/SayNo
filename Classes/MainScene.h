#pragma once

#include "stdafx.h"

class MainScene : public Layer
{
private:
	Sprite* _bg;
	Sprite* _start;
	Sprite* _option;
	Sprite* _character;

	Size _winSize;

	EventListenerTouchOneByOne* _listener;

private:
	virtual bool onTouchBegan(Touch *touch, Event *unused_event);
	virtual void onTouchMoved(Touch *touch, Event *unused_event);
	virtual void onTouchEnded(Touch *touch, Event *unused_event);
	virtual void onTouchCancelled(Touch *touch, Event *unused_event);

	void onKeyReleased(cocos2d::EventKeyboard::KeyCode keyCode, cocos2d::Event* event) override;

	virtual void onEnter();
	virtual void onExit();

public:


public:
	static Scene* createScene();

	virtual bool init();

	CREATE_FUNC(MainScene);
};