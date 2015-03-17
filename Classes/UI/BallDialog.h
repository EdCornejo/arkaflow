#ifndef _BALLDIALOG_H_
#define _BALLDIALOG_H_

#include "cocos2d.h"

class BallDialog : public cocos2d::Sprite
{
    public:
        BallDialog();
        ~BallDialog();
        static BallDialog* create(const std::string = "", const std::function<void(void)>& callbackOK = nullptr, const std::function<void(void)>& callbackCancel = nullptr, const std::string ok = "b_ok.png", const std::string cancel = "b_cancel.png");
		void runAnimations(bool);

    private:
		cocos2d::Label* m_contentLabel;
		cocos2d::Sprite* m_innerSprite;
		cocos2d::Menu* m_menu;
		std::function<void(void)> m_callbackOK;
		std::function<void(void)> m_callbackCancel;
		int m_resultTag;
		void initOpt(std::string, std::string);
		void menuCallback(cocos2d::Ref* pSender);

};

#endif // _BALLDIALOG_H_