/* Runtime dump - ATVJSAnimationDelegate
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface ATVJSAnimationDelegate : NSObject
{
    ATVJavaScriptContext * _context;
    struct OpaqueJSValue * _callback;
}

- (ATVJSAnimationDelegate *)initWithContext:(struct OpaqueJSContext *)arg0 withCallbackFunction:(struct OpaqueJSValue *)arg1;
- (void)dealloc;
- (void)animationDidStop:(CAAnimation *)arg0 finished:(char)arg1;
- (void).cxx_destruct;

@end
