/* Runtime dump - UIResignActiveAction
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIResignActiveAction : BSAction

@property (readonly, nonatomic) int reason;

- (int)UIActionType;
- (int)reason;
- (UIResignActiveAction *)initWithInfo:(NSDictionary *)arg0 timeout:(double)arg1 forResponseOnQueue:(NSObject *)arg2 withHandler:(id /* block */)arg3;
- (NSString *)keyDescriptionForSetting:(unsigned int)arg0;
- (UIResignActiveAction *)initWithReason:(int)arg0;
- (NSString *)valueDescriptionForFlag:(int)arg0 object:(NSObject *)arg1 ofSetting:(unsigned int)arg2;

@end
