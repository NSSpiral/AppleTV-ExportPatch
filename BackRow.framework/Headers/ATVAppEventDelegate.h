/* Runtime dump - ATVAppEventDelegate
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol BREventDelegate;

@class BRControl, BREvent;
@interface ATVAppEventDelegate : NSObject <BREventDelegate>

+ (ATVAppEventDelegate *)appEventDelegateWithEventDelegate:(NSObject<BREventDelegate> *)arg0;
+ (ATVAppEventDelegate *)sharedInstance;

- (char)brEventAction:(BREvent *)arg0 withControl:(BRControl *)arg1;
- (char)brKeyEvent:(BREvent *)arg0 withControl:(BRControl *)arg1;
- (char)dispatchAppEvent:(unsigned int)arg0 withControl:(BRControl *)arg1;
- (char)_handleDefaultActionForAppEvent:(unsigned int)arg0 withControl:(BRControl *)arg1;
- (char)_handleEvent:(NSObject *)arg0 withControl:(BRControl *)arg1;
- (char)_dispatchAppEvent:(unsigned int)arg0 withControl:(BRControl *)arg1;
- (char)_makeControlTreePerformDefaultActionForAppEvent:(unsigned int)arg0 withControl:(BRControl *)arg1;

@end
