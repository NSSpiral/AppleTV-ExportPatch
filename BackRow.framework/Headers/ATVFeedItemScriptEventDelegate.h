/* Runtime dump - ATVFeedItemScriptEventDelegate
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol BREventDelegate;
@protocol BRSelectionHandler;

@class ATVJSContext, BRControl, BREvent;
@interface ATVFeedItemScriptEventDelegate : NSObject <BREventDelegate, BRSelectionHandler>
{
    ATVJSContext * javaScriptContext;
    NSString * onPlayJavaScript;
    NSString * onSelectJavaScript;
    NSString * onSelectHoldJavaScript;
}

@property (retain, nonatomic) ATVJSContext * javaScriptContext;
@property (copy, nonatomic) NSString * onPlayJavaScript;
@property (copy, nonatomic) NSString * onSelectJavaScript;
@property (copy, nonatomic) NSString * onSelectHoldJavaScript;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (char)handleSelectionForControl:(BRControl *)arg0;
- (char)handlePlayForControl:(BRControl *)arg0;
- (char)brEventAction:(BREvent *)arg0 withControl:(BRControl *)arg1;
- (char)brKeyEvent:(BREvent *)arg0 withControl:(BRControl *)arg1;
- (void)setOnPlayJavaScript:(NSString *)arg0;
- (void)setOnSelectJavaScript:(NSString *)arg0;
- (void)setOnSelectHoldJavaScript:(NSString *)arg0;
- (NSString *)onPlayJavaScript;
- (NSString *)onSelectJavaScript;
- (NSString *)onSelectHoldJavaScript;
- (void)dealloc;
- (ATVJSContext *)javaScriptContext;
- (void)setJavaScriptContext:(ATVJSContext *)arg0;

@end
