/* Runtime dump - SAABContactGroup
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAABContactGroup : SADomainObject

@property (copy, nonatomic) NSString * groupName;
@property (retain, nonatomic) SASource * groupSource;

+ (NSObject *)contactGroup;
+ (NSDictionary *)contactGroupWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (void)setGroupName:(NSString *)arg0;
- (NSString *)groupName;
- (NSString *)encodedClassName;
- (void)updateUsingSet:(NSSet *)arg0 add:(int)arg1 remove:(NSIndexSet *)arg2;
- (SASource *)groupSource;
- (void)setGroupSource:(SASource *)arg0;

@end
