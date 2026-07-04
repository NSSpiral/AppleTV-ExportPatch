/* Runtime dump - UIHandleBackgroundURLSessionAction
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIHandleBackgroundURLSessionAction : BSAction

@property (readonly, copy, nonatomic) NSString * sessionIdentifier;

- (int)UIActionType;
- (NSString *)sessionIdentifier;
- (UIHandleBackgroundURLSessionAction *)initWithInfo:(NSDictionary *)arg0 timeout:(double)arg1 forResponseOnQueue:(NSObject *)arg2 withHandler:(id /* block */)arg3;
- (NSString *)keyDescriptionForSetting:(unsigned int)arg0;
- (UIHandleBackgroundURLSessionAction *)initWithSessionIdentifier:(NSString *)arg0;

@end
