/* Runtime dump - SettingsTroubleshootingController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRController.h>

@class BREvent, BRHeaderControl, BRImageControl, BRTextControl;
@interface SettingsTroubleshootingController : BRController
{
    BRHeaderControl * headerControl;
    BRTextControl * textControl1;
    BRTextControl * bulletControl1;
    BRTextControl * textControl2;
    BRTextControl * bulletControl2;
    BRTextControl * textControl3;
    BRTextControl * bulletControl3;
    BRTextControl * textControl4;
    BRTextControl * bulletControl4;
    BRImageControl * doneButtonImageControl;
    BRTextControl * doneButtonTextControl;
}

@property (retain, nonatomic) BRHeaderControl * headerControl;
@property (retain, nonatomic) BRTextControl * textControl1;
@property (retain, nonatomic) BRTextControl * bulletControl1;
@property (retain, nonatomic) BRTextControl * textControl2;
@property (retain, nonatomic) BRTextControl * bulletControl2;
@property (retain, nonatomic) BRTextControl * textControl3;
@property (retain, nonatomic) BRTextControl * bulletControl3;
@property (retain, nonatomic) BRTextControl * textControl4;
@property (retain, nonatomic) BRTextControl * bulletControl4;
@property (retain, nonatomic) BRImageControl * doneButtonImageControl;
@property (retain, nonatomic) BRTextControl * doneButtonTextControl;

- (char)brEventAction:(BREvent *)arg0;
- (void)layoutSubcontrols;
- (BRHeaderControl *)headerControl;
- (void)setHeaderControl:(BRHeaderControl *)arg0;
- (void)setTextControl1:(BRTextControl *)arg0;
- (void)setBulletControl1:(BRTextControl *)arg0;
- (BRTextControl *)bulletControl1;
- (void)setTextControl2:(BRTextControl *)arg0;
- (void)setBulletControl2:(BRTextControl *)arg0;
- (BRTextControl *)bulletControl2;
- (void)setTextControl3:(BRTextControl *)arg0;
- (void)setBulletControl3:(BRTextControl *)arg0;
- (BRTextControl *)bulletControl3;
- (void)setTextControl4:(BRTextControl *)arg0;
- (void)setBulletControl4:(BRTextControl *)arg0;
- (BRTextControl *)bulletControl4;
- (void)setDoneButtonImageControl:(BRImageControl *)arg0;
- (BRImageControl *)doneButtonImageControl;
- (void)setDoneButtonTextControl:(BRTextControl *)arg0;
- (BRTextControl *)doneButtonTextControl;
- (BRTextControl *)textControl1;
- (BRTextControl *)textControl2;
- (BRTextControl *)textControl3;
- (BRTextControl *)textControl4;
- (SettingsTroubleshootingController *)init;
- (NSString *)accessibilityLabel;
- (char)isAccessibilityElement;
- (void).cxx_destruct;

@end
