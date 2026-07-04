/* Runtime dump - BRTextWithSpinnerController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRController.h>

@class BRWaitPromptControl;
@interface BRTextWithSpinnerController : BRController
{
    NSTimer * _revealTimer;
    double _revealInterval;
    BRWaitPromptControl * _prompt;
    char _isNetworkDependent;
}

- (BRTextWithSpinnerController *)initWithTitle:(NSString *)arg0 text:(NSString *)arg1;
- (void)controlWasDeactivated;
- (void)controlWasActivated;
- (char)isNetworkDependent;
- (void)setIcon:(UIImage *)arg0 horizontalOffset:(float)arg1 kerningFactor:(float)arg2;
- (BRTextWithSpinnerController *)initWithTitle:(NSString *)arg0 text:(NSString *)arg1 isNetworkDependent:(char)arg2 revealAfter:(double)arg3;
- (void)_checkActivationState:(NSObject *)arg0;
- (BRTextWithSpinnerController *)initWithTitle:(NSString *)arg0 text:(NSString *)arg1 revealAfter:(double)arg2;
- (BRTextWithSpinnerController *)initWithTitle:(NSString *)arg0 text:(NSString *)arg1 isNetworkDependent:(char)arg2;
- (void)dealloc;

@end
