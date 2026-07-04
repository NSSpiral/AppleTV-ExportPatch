/* Runtime dump - ATVJSPlayerMoreAssetsSpinnerController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRTextWithSpinnerController.h>
@interface ATVJSPlayerMoreAssetsSpinnerController : BRTextWithSpinnerController
{
    id _popBlock;
    double _popInterval;
    NSTimer * _popTimer;
    char _isDiscarded;
}

- (void)wasPushed;
- (void)wasPopped;
- (ATVJSPlayerMoreAssetsSpinnerController *)initWithPopBlock:(id /* block */)arg0 popInterval:(/* block */ id)arg1;
- (void)discard;
- (void)_timerFired:(id)arg0;
- (void).cxx_destruct;

@end
