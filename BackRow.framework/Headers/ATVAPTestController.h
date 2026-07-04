/* Runtime dump - ATVAPTestController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRController.h>

@class BRAirportNetwork, BRHeaderControl, BRTextControl, BRWaitSpinnerControl;
@interface ATVAPTestController : BRController
{
    BRWaitSpinnerControl * _spinner;
    BRAirportNetwork * _network;
    char _testFailed;
    <ATVAPTestResultDelegate> * _delegate;
    BRHeaderControl * _header;
    BRTextControl * _prompt;
    char _beginTestOnPush;
}

@property (nonatomic) char beginTestOnPush;

- (void)wasPushed;
- (void)wasExhumed;
- (ATVAPTestController *)initForNetwork:(TSTTableStyleNetwork *)arg0 notifying:(id)arg1;
- (void)setBeginTestOnPush:(char)arg0;
- (void)testInternetConnection;
- (void)_testFinished:(id)arg0;
- (char)beginTestOnPush;
- (void)dealloc;
- (void)setFrame:(struct CGRect)arg0;
- (void).cxx_destruct;

@end
