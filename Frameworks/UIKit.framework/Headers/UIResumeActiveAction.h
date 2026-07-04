/* Runtime dump - UIResumeActiveAction
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIResumeActiveAction : BSAction

@property (readonly, nonatomic) int reason;

- (int)UIActionType;
- (int)reason;
- (UIResumeActiveAction *)initWithInfo:(NSDictionary *)arg0 timeout:(double)arg1 forResponseOnQueue:(NSObject *)arg2 withHandler:(id /* block */)arg3;
- (NSString *)keyDescriptionForSetting:(unsigned int)arg0;
- (UIResumeActiveAction *)initWithReason:(int)arg0;
- (NSString *)valueDescriptionForFlag:(int)arg0 object:(NSObject *)arg1 ofSetting:(unsigned int)arg2;

@end
