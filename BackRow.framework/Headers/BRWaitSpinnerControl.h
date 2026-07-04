/* Runtime dump - BRWaitSpinnerControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>
@interface BRWaitSpinnerControl : BRControl
{
    char _spins;
    struct CGImage * _spinnerImage;
}

- (void)controlWasDeactivated;
- (void)controlWasActivated;
- (void)setSpins:(char)arg0;
- (char)spins;
- (void)_setAnimation;
- (void)dealloc;
- (BRWaitSpinnerControl *)init;
- (NSString *)accessibilityLabel;
- (char)isAccessibilityElement;

@end
