/* Runtime dump - SAAlarmCreate
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAAlarmCreate : SADomainCommand <SAAlarmAlarmAction>

@property (retain, nonatomic) SAAlarmObject * alarmToCreate;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (SAAlarmCreate *)create;
+ (NSDictionary *)createWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (char)requiresResponse;
- (SAAlarmObject *)alarmToCreate;
- (void)setAlarmToCreate:(SAAlarmObject *)arg0;

@end
