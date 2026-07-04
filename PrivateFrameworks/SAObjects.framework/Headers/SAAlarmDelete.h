/* Runtime dump - SAAlarmDelete
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAAlarmDelete : SADomainCommand <SAAlarmAlarmAction>

@property (copy, nonatomic) NSArray * alarmIds;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (SAAlarmDelete *)delete;
+ (NSDictionary *)deleteWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (char)requiresResponse;
- (NSArray *)alarmIds;
- (void)setAlarmIds:(NSArray *)arg0;

@end
