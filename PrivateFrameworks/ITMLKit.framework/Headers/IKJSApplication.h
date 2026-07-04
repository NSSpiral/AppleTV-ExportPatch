/* Runtime dump - IKJSApplication
 * Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKJSApplication : IKJSObject <IKJSApplication>

- (void)restart;
- (void)reload:(id)arg0 :(id)arg1;
- (void)launchAppWithOptions:(NSDictionary *)arg0;
- (void)suspendAppWithOptions:(NSDictionary *)arg0;
- (void)resumeAppWithOptions:(NSDictionary *)arg0;
- (void)openURLWithOptions:(NSDictionary *)arg0;
- (void)exitAppWithOptions:(NSDictionary *)arg0;
- (void)dispatchErrorWithMessage:(NSString *)arg0 sourceURL:(NSURL *)arg1 line:(id)arg2;

@end
