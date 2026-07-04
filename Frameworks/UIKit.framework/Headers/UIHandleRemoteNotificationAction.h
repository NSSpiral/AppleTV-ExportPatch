/* Runtime dump - UIHandleRemoteNotificationAction
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIHandleRemoteNotificationAction : BSAction

@property (readonly, copy, nonatomic) NSDictionary * payload;
@property (readonly, copy, nonatomic) NSString * action;

- (int)UIActionType;
- (NSDictionary *)payload;
- (void)sendResponse:(NSURLResponse *)arg0;
- (NSString *)action;
- (UIHandleRemoteNotificationAction *)initWithInfo:(NSDictionary *)arg0 timeout:(double)arg1 forResponseOnQueue:(NSObject *)arg2 withHandler:(id /* block */)arg3;
- (NSString *)keyDescriptionForSetting:(unsigned int)arg0;
- (NSData *)_initWithRemoteNotificationPayload:(NSData *)arg0 action:(NSString *)arg1 type:(int)arg2 withHandler:(id /* block */)arg3;
- (UIHandleRemoteNotificationAction *)initWithRemoteNotificationPayload:(NSData *)arg0 withHandler:(id /* block */)arg1;
- (UIHandleRemoteNotificationAction *)initWithRemoteNotificationPayload:(NSData *)arg0 action:(NSString *)arg1 withHandler:(id /* block */)arg2;

@end
