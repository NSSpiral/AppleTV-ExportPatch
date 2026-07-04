/* Runtime dump - SATimerShowAndPerformTimerAction
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SATimerShowAndPerformTimerAction : SABaseClientBoundCommand

@property (retain, nonatomic) <SATimerTimerAction> * timerAction;

+ (NSObject *)showAndPerformTimerAction;
+ (NSDictionary *)showAndPerformTimerActionWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (char)requiresResponse;
- (<SATimerTimerAction> *)timerAction;
- (void)setTimerAction:(<SATimerTimerAction> *)arg0;

@end
