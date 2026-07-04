/* Runtime dump - SAAbstractItemList
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAAbstractItemList : SADomainObject

@property (copy, nonatomic) NSArray * domainObjects;
@property (copy, nonatomic) NSNumber * selectedIndex;

+ (NSArray *)abstractItemList;
+ (NSDictionary *)abstractItemListWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSNumber *)selectedIndex;
- (void)setSelectedIndex:(NSNumber *)arg0;
- (NSString *)encodedClassName;
- (void)updateUsingSet:(NSSet *)arg0 add:(int)arg1 remove:(NSIndexSet *)arg2;
- (NSArray *)domainObjects;
- (void)setDomainObjects:(NSArray *)arg0;

@end
