/* Runtime dump - UISiriTaskAction
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UISiriTaskAction : BSAction

@property (readonly, retain, nonatomic) AFSiriTask * payload;

- (int)UIActionType;
- (AFSiriTask *)payload;
- (UISiriTaskAction *)initWithInfo:(NSDictionary *)arg0 timeout:(double)arg1 forResponseOnQueue:(NSObject *)arg2 withHandler:(id /* block */)arg3;
- (NSString *)keyDescriptionForSetting:(unsigned int)arg0;
- (UISiriTaskAction *)initWithPayload:(AFSiriTask *)arg0;

@end
