/* Runtime dump - WebPluginContainerCheck
 * Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebPluginContainerCheck : NSObject
{
    NSURLRequest * _request;
    NSString * _target;
    <WebPluginContainerCheckController> * _controller;
    id _resultObject;
    SEL _resultSelector;
    id _contextInfo;
    char _done;
    WebPolicyDecisionListener * _listener;
}

+ (NSURLRequest *)checkWithRequest:(NSURLRequest *)arg0 target:(NSString *)arg1 resultObject:(NSObject *)arg2 selector:(SEL)arg3 controller:(<WebPluginContainerCheckController> *)arg4 contextInfo:(void *)arg5;

- (void)cancel;
- (void)dealloc;
- (void)start;
- (NSDictionary *)contextInfo;
- (void)finalize;
- (WebPluginContainerCheck *)initWithRequest:(NSURLRequest *)arg0 target:(NSString *)arg1 resultObject:(NSObject *)arg2 selector:(SEL)arg3 controller:(<WebPluginContainerCheckController> *)arg4 contextInfo:(void *)arg5;
- (void)_continueWithPolicy:(int)arg0;
- (NSURL *)_actionInformationWithURL:(NSString *)arg0;
- (char)_isForbiddenFileLoad;
- (void)_askPolicyDelegate;

@end
