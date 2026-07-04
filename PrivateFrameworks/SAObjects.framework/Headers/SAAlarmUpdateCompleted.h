/* Runtime dump - SAAlarmUpdateCompleted
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAAlarmUpdateCompleted : SABaseCommand <SAServerBoundCommand>

@property (copy, nonatomic) NSURL * alarmId;
@property (copy, nonatomic) NSArray * alarmIds;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (copy, nonatomic) NSString * aceId;
@property (copy, nonatomic) NSString * refId;

+ (SAAlarmUpdateCompleted *)updateCompleted;
+ (NSDictionary *)updateCompletedWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (NSURL *)alarmId;
- (void)setAlarmId:(NSURL *)arg0;
- (NSArray *)alarmIds;
- (void)setAlarmIds:(NSArray *)arg0;

@end
