/* Runtime dump - SAHASearchCriteriaFilter
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAHASearchCriteriaFilter : SAHAFilter

@property (copy, nonatomic) NSString * attribute;
@property (copy, nonatomic) NSString * entityType;
@property (copy, nonatomic) NSString * groupName;
@property (copy, nonatomic) NSString * homeName;
@property (copy, nonatomic) NSString * roomName;
@property (copy, nonatomic) NSString * sceneName;
@property (copy, nonatomic) NSString * serviceName;
@property (copy, nonatomic) NSString * serviceType;
@property (copy, nonatomic) NSString * zoneName;

+ (NSObject *)searchCriteriaFilter;
+ (NSDictionary *)searchCriteriaFilterWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)shortDescription;
- (void)setZoneName:(NSString *)arg0;
- (NSString *)attribute;
- (NSString *)groupIdentifier;
- (void)setGroupName:(NSString *)arg0;
- (NSString *)groupName;
- (NSString *)zoneName;
- (void)setServiceName:(NSString *)arg0;
- (NSString *)serviceType;
- (NSString *)homeName;
- (void)setHomeName:(NSString *)arg0;
- (NSString *)serviceName;
- (NSString *)entityType;
- (NSString *)roomName;
- (NSString *)sceneName;
- (void)setServiceType:(NSString *)arg0;
- (void)setEntityType:(NSString *)arg0;
- (void)setRoomName:(NSString *)arg0;
- (NSString *)encodedClassName;
- (void)updateUsingSet:(NSSet *)arg0 add:(int)arg1 remove:(NSIndexSet *)arg2;
- (void)setAttribute:(NSString *)arg0;
- (void)setSceneName:(NSString *)arg0;

@end
