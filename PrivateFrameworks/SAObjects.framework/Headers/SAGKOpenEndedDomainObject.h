/* Runtime dump - SAGKOpenEndedDomainObject
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAGKOpenEndedDomainObject : SAGKDomainObject

@property (retain, nonatomic) SAGKDirectAnswer * directAnswer;
@property (copy, nonatomic) NSArray * image;
@property (copy, nonatomic) NSArray * linkedAnswerGroups;
@property (copy, nonatomic) NSArray * structuredAnswers;

+ (NSObject *)openEndedDomainObject;
+ (NSDictionary *)openEndedDomainObjectWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (void)setImage:(NSArray *)arg0;
- (NSArray *)image;
- (NSString *)encodedClassName;
- (void)updateUsingSet:(NSSet *)arg0 add:(int)arg1 remove:(NSIndexSet *)arg2;
- (SAGKDirectAnswer *)directAnswer;
- (void)setDirectAnswer:(SAGKDirectAnswer *)arg0;
- (NSArray *)linkedAnswerGroups;
- (void)setLinkedAnswerGroups:(NSArray *)arg0;
- (NSArray *)structuredAnswers;
- (void)setStructuredAnswers:(NSArray *)arg0;

@end
