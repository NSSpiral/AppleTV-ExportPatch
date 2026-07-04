/* Runtime dump - UIHandleStatusBarTapAction
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIHandleStatusBarTapAction : BSAction

@property (readonly, nonatomic) int statusBarStyle;

- (int)UIActionType;
- (int)statusBarStyle;
- (UIHandleStatusBarTapAction *)initWithInfo:(NSDictionary *)arg0 timeout:(double)arg1 forResponseOnQueue:(NSObject *)arg2 withHandler:(id /* block */)arg3;
- (NSString *)keyDescriptionForSetting:(unsigned int)arg0;
- (UIHandleStatusBarTapAction *)initWithStatusBarStyle:(int)arg0;

@end
