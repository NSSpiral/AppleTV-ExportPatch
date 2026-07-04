/* Runtime dump - SAAlarmCreateCompleted
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAAlarmCreateCompleted : SABaseCommand <SAServerBoundCommand>

@property (copy, nonatomic) NSURL * alarmId;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (copy, nonatomic) NSString * aceId;
@property (copy, nonatomic) NSString * refId;

+ (SAAlarmCreateCompleted *)createCompleted;
+ (NSDictionary *)createCompletedWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (NSURL *)alarmId;
- (void)setAlarmId:(NSURL *)arg0;

@end
