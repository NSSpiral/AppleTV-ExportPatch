/* Runtime dump - BRStatusAlertControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRImageControl;
@interface BRStatusAlertControl : BRControl
{
    BRImageControl * _background;
    BRImageControl * _overlay;
    int _fadeHalfCount;
    int _maxFadeCount;
}

+ (void)postStatusAlertOfType:(int)arg0;

- (void)layoutSubcontrols;
- (BRStatusAlertControl *)init;
- (void)_setDuration:(float)arg0;
- (void)animationDidStop:(CAAnimation *)arg0 finished:(char)arg1;
- (NSString *)accessibilityLabel;
- (char)isAccessibilityElement;
- (void).cxx_destruct;
- (void)_cancel;
- (void)_setType:(int)arg0;

@end
