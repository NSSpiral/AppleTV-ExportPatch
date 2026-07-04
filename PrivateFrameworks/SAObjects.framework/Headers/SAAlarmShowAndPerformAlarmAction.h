/* Runtime dump - SAAlarmShowAndPerformAlarmAction
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAAlarmShowAndPerformAlarmAction : SABaseClientBoundCommand

@property (retain, nonatomic) <SAAlarmAlarmAction> * alarmAction;

+ (NSObject *)showAndPerformAlarmAction;
+ (NSDictionary *)showAndPerformAlarmActionWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (char)requiresResponse;
- (<SAAlarmAlarmAction> *)alarmAction;
- (void)setAlarmAction:(<SAAlarmAlarmAction> *)arg0;

@end
