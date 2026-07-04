/* Runtime dump - SASportsEntityGroup
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASportsEntityGroup : SASportsEntity

@property (copy, nonatomic) NSArray * entities;
@property (copy, nonatomic) NSString * groupType;

+ (NSObject *)entityGroup;
+ (NSDictionary *)entityGroupWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (void)setEntities:(NSArray *)arg0;
- (NSString *)groupIdentifier;
- (NSString *)groupType;
- (void)setGroupType:(NSString *)arg0;
- (NSArray *)entities;
- (NSString *)encodedClassName;
- (void)updateUsingSet:(NSSet *)arg0 add:(int)arg1 remove:(NSIndexSet *)arg2;

@end
