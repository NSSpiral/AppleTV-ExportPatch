/* Runtime dump - UIWatchKitExtensionRequestAction
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIWatchKitExtensionRequestAction : BSAction

@property (readonly, retain, nonatomic) NSDictionary * request;

- (int)UIActionType;
- (void)sendResponse:(NSURLResponse *)arg0;
- (NSDictionary *)request;
- (UIWatchKitExtensionRequestAction *)initWithInfo:(NSDictionary *)arg0 timeout:(double)arg1 forResponseOnQueue:(NSObject *)arg2 withHandler:(id /* block */)arg3;
- (NSString *)keyDescriptionForSetting:(unsigned int)arg0;
- (UIWatchKitExtensionRequestAction *)initWithRequest:(NSDictionary *)arg0 withHandler:(id /* block */)arg1;

@end
