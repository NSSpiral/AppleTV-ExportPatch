/* Runtime dump - LTHDCPIndicatorControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRImageControl, BRTextControl;
@interface LTHDCPIndicatorControl : BRControl
{
    NSMutableDictionary * _textAttrs;
    BRImageControl * _background;
    BRTextControl * _level;
    char _HDCPEnabled;
}

+ (void)showHDCPIndicatorPopup:(char)arg0;
+ (void)hideHDCPIndicatorPopup;

- (void)layoutSubcontrols;
- (LTHDCPIndicatorControl *)init;
- (void).cxx_destruct;

@end
