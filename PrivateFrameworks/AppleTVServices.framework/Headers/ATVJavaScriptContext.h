/* Runtime dump - ATVJavaScriptContext
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVJavaScriptContext : NSObject
{
    NSObject<OS_dispatch_queue> * _queue;
    struct OpaqueJSContext * _globalContext;
    NSMutableArray * _postEvalCommandBlocks;
    NSMutableDictionary * _classesByName;
    NSMutableArray * _protectionArray;
    char _isDestroyed;
}

@property (readonly, nonatomic) char isDestroyed;

+ (NSString *)contextFromJSContext:(struct OpaqueJSContext *)arg0;

- (void)dealloc;
- (void).cxx_destruct;
- (char)_makeProtectionPoolIfNecessary:(struct OpaqueJSContext *)arg0;
- (void)_drainProtectionPool:(struct OpaqueJSContext *)arg0;
- (void)_evaluateNowWithBlock:(id /* block */)arg0 completionQueue:(/* block */ id)arg1 completionHandler:(id /* block */)arg2;
- (void)evaluate:(CPMLModelEvaluate *)arg0 completionHandler:(/* block */ id)arg1;
- (ATVJavaScriptContext *)initWithDebugLabel:(UILabel *)arg0;
- (void)destroy:(id)arg0;
- (void)_addToProtectionPool:(struct OpaqueJSValue *)arg0 context:(struct OpaqueJSContext *)arg1;
- (void)setJSContextName:(NSString *)arg0;
- (void)setRemoteInspectionEnabled:(char)arg0;
- (void)evaluate:(CPMLModelEvaluate *)arg0 completionQueue:(/* block */ id)arg1 completionHandler:(id /* block */)arg2;
- (void)evaluate:(CPMLModelEvaluate *)arg0;
- (char)isDestroyed;
- (void)evaluateScript:(id)arg0 sourceURL:(NSURL *)arg1 completionHandler:(id /* block */)arg2;
- (void)evaluateScript:(id)arg0 sourceURL:(NSURL *)arg1;
- (void)callFunction:(id)arg0 withArguments:(NSDictionary *)arg1 completionHandler:(id /* block */)arg2;
- (void)callFunction:(id)arg0 withArguments:(NSDictionary *)arg1;
- (void)setClass:(struct OpaqueJSClass *)arg0 forName:(NSString *)arg1;
- (struct OpaqueJSClass *)classForName:(NSString *)arg0;
- (void)addPostEvaluateBlock:(id /* block */)arg0;

@end
