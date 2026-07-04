/* Runtime dump - SAGKEncyclopediaDomainObject
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAGKEncyclopediaDomainObject : SAGKDomainObject

@property (copy, nonatomic) NSArray * linkedAnswerGroups;
@property (copy, nonatomic) NSString * name;
@property (copy, nonatomic) NSString * nameAnnotation;
@property (copy, nonatomic) NSArray * structuredAnswers;

+ (NSObject *)encyclopediaDomainObject;
+ (NSDictionary *)encyclopediaDomainObjectWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (NSString *)encodedClassName;
- (void)updateUsingSet:(NSSet *)arg0 add:(int)arg1 remove:(NSIndexSet *)arg2;
- (NSArray *)linkedAnswerGroups;
- (void)setLinkedAnswerGroups:(NSArray *)arg0;
- (NSArray *)structuredAnswers;
- (void)setStructuredAnswers:(NSArray *)arg0;
- (NSString *)nameAnnotation;
- (void)setNameAnnotation:(NSString *)arg0;

@end
