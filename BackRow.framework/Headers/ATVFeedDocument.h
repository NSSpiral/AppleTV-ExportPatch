/* Runtime dump - ATVFeedDocument
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class ATVFeedRootElement, ATVJSContext;
@interface ATVFeedDocument : NSObject
{
    char _ownsJavascriptContext;
    ATVFeedRootElement * _rootElement;
    ATVJSContext * _javaScriptContext;
    <ATVUpdatable> * _feedController;
}

@property (retain, nonatomic) ATVFeedRootElement * rootElement;
@property (retain, nonatomic) ATVJSContext * javaScriptContext;
@property (weak, nonatomic) <ATVUpdatable> * feedController;
@property (nonatomic) char ownsJavascriptContext;

- (void)setFeedController:(<ATVUpdatable> *)arg0;
- (void)setOwnsJavascriptContext:(char)arg0;
- (<ATVUpdatable> *)feedController;
- (char)ownsJavascriptContext;
- (void)dealloc;
- (void).cxx_destruct;
- (ATVJSContext *)javaScriptContext;
- (void)setJavaScriptContext:(ATVJSContext *)arg0;
- (ATVFeedRootElement *)rootElement;
- (void)setRootElement:(ATVFeedRootElement *)arg0;

@end
