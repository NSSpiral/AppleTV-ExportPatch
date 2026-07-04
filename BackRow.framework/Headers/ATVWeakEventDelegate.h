/* Runtime dump - ATVWeakEventDelegate
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol BREventDelegate;

@class BRControl, BREvent;
@interface ATVWeakEventDelegate : NSObject <BREventDelegate>
{
    <BREventDelegate> * _weakDelegate;
}

@property (readonly, weak, nonatomic) <BREventDelegate> * weakDelegate;

- (char)brEventAction:(BREvent *)arg0 withControl:(BRControl *)arg1;
- (char)brKeyEvent:(BREvent *)arg0 withControl:(BRControl *)arg1;
- (ATVWeakEventDelegate *)initWithWeakDelegate:(<BREventDelegate> *)arg0;
- (<BREventDelegate> *)weakDelegate;
- (void).cxx_destruct;

@end
