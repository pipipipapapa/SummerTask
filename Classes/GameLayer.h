#ifndef __GameLayer_H__
#define __GameLayer_H__

#include "cocos2d.h"

class GameLayer : public cocos2d::Layer
{
public:

    // there's no 'id' in cpp, so we recommend returning the class instance pointer
    static cocos2d::Scene* createScene();

    // Here's a difference. Method 'init' in cocos2d-x returns bool, instead of returning 'id' in cocos2d-iphone
    virtual bool init();

	void InitAllParament();

    // implement the "static create()" method manually
    CREATE_FUNC(GameLayer);
};

#endif // __GameLayer_SCENE_H__
