/* Runtime dump - SAGKWebSearchDomainObject
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAGKWebSearchDomainObject : SAGKDomainObject

@property (copy, nonatomic) NSArray * image;
@property (copy, nonatomic) NSArray * linkedAnswerGroups;
@property (copy, nonatomic) NSString * query;

+ (NSObject *)webSearchDomainObject;
+ (NSDictionary *)webSearchDomainObjectWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (void)setImage:(NSArray *)arg0;
- (NSString *)query;
- (NSArray *)image;
- (void)setQuery:(NSString *)arg0;
- (NSString *)encodedClassName;
- (void)updateUsingSet:(NSSet *)arg0 add:(int)arg1 remove:(NSIndexSet *)arg2;
- (NSArray *)linkedAnswerGroups;
- (void)setLinkedAnswerGroups:(NSArray *)arg0;

@end
