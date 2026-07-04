/* Runtime dump - SAHAEntity
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAHAEntity : SADomainObject

@property (copy, nonatomic) NSString * entityType;
@property (copy, nonatomic) NSString * home;
@property (copy, nonatomic) NSString * name;
@property (copy, nonatomic) NSString * room;
@property (copy, nonatomic) NSString * serviceType;
@property (copy, nonatomic) NSString * zone;

+ (NSEntityDescription *)entity;
+ (NSDictionary *)entityWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)shortDescription;
- (NSString *)groupIdentifier;
- (NSString *)zone;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (NSString *)serviceType;
- (NSString *)home;
- (void)setHome:(NSString *)arg0;
- (NSString *)room;
- (void)setRoom:(NSString *)arg0;
- (NSString *)entityType;
- (void)setServiceType:(NSString *)arg0;
- (void)setEntityType:(NSString *)arg0;
- (void)setZone:(NSString *)arg0;
- (NSString *)encodedClassName;
- (void)updateUsingSet:(NSSet *)arg0 add:(int)arg1 remove:(NSIndexSet *)arg2;

@end
