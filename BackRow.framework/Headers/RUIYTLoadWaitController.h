/* Runtime dump - RUIYTLoadWaitController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRTextWithSpinnerController.h>
@interface RUIYTLoadWaitController : BRTextWithSpinnerController
{
    <RUIYTPlayerControlling> * _delegate;
    char _internalPop;
}

- (void)wasPopped;
- (void)pop;
- (void).cxx_destruct;
- (RUIYTLoadWaitController *)initWithDelegate:(<RUIYTPlayerControlling> *)arg0;

@end
