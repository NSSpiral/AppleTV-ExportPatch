/* Runtime dump - SAAlarmUpdate
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAAlarmUpdate : SADomainCommand <SAAlarmAlarmAction>

@property (copy, nonatomic) NSArray * addedFrequency;
@property (copy, nonatomic) NSURL * alarmId;
@property (copy, nonatomic) NSNumber * enabled;
@property (copy, nonatomic) NSNumber * hour;
@property (copy, nonatomic) NSString * label;
@property (copy, nonatomic) NSNumber * minute;
@property (copy, nonatomic) NSArray * modifications;
@property (copy, nonatomic) NSArray * removedFrequency;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSDate *)update;
+ (NSDictionary *)updateWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (void)setEnabled:(NSNumber *)arg0;
- (NSString *)label;
- (void)setLabel:(NSString *)arg0;
- (void)setHour:(NSNumber *)arg0;
- (NSNumber *)hour;
- (NSNumber *)enabled;
- (NSNumber *)minute;
- (void)setMinute:(NSNumber *)arg0;
- (NSString *)encodedClassName;
- (char)requiresResponse;
- (NSURL *)alarmId;
- (void)setAlarmId:(NSURL *)arg0;
- (NSArray *)addedFrequency;
- (void)setAddedFrequency:(NSArray *)arg0;
- (NSArray *)modifications;
- (void)setModifications:(NSArray *)arg0;
- (NSArray *)removedFrequency;
- (void)setRemovedFrequency:(NSArray *)arg0;

@end
