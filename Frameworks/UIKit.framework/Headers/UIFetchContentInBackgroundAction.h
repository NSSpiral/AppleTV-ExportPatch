/* Runtime dump - UIFetchContentInBackgroundAction
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIFetchContentInBackgroundAction : BSAction

- (int)UIActionType;
- (void)sendResponse:(NSURLResponse *)arg0;
- (UIFetchContentInBackgroundAction *)initWithInfo:(NSDictionary *)arg0 timeout:(double)arg1 forResponseOnQueue:(NSObject *)arg2 withHandler:(id /* block */)arg3;
- (UIFetchContentInBackgroundAction *)initWithHandler:(id /* block */)arg0;

@end
