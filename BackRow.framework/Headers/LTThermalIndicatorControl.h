/* Runtime dump - LTThermalIndicatorControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRImageControl, BRTextControl;
@interface LTThermalIndicatorControl : BRControl
{
    NSMutableDictionary * _textAttrs;
    BRImageControl * _background;
    BRTextControl * _level;
}

- (void)layoutSubcontrols;
- (LTThermalIndicatorControl *)init;
- (void).cxx_destruct;

@end
