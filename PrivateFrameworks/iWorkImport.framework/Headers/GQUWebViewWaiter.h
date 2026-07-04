/* Runtime dump - GQUWebViewWaiter
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQUWebViewWaiter : NSObject

+ (<DADataclassLockWatcher> *)waiter;

- (void)waitForWebViewToFinishLoading:(id)arg0;
- (void)observeValueForKeyPath:(NSString *)arg0 ofObject:(NSObject *)arg1 change:(NSDictionary *)arg2 context:(void *)arg3;

@end
