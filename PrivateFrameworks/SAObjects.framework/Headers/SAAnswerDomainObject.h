/* Runtime dump - SAAnswerDomainObject
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAAnswerDomainObject : SADomainObject

@property (retain, nonatomic) SAUIAppPunchOut * appPunchOut;
@property (copy, nonatomic) NSString * category;
@property (retain, nonatomic) SAAnswerDirectAnswer * directAnswer;
@property (copy, nonatomic) NSArray * linkedAnswerGroups;
@property (copy, nonatomic) NSArray * structuredAnswers;

+ (NSObject *)domainObject;
+ (NSDictionary *)domainObjectWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (void)setCategory:(NSString *)arg0;
- (NSString *)category;
- (NSString *)encodedClassName;
- (void)updateUsingSet:(NSSet *)arg0 add:(int)arg1 remove:(NSIndexSet *)arg2;
- (SAUIAppPunchOut *)appPunchOut;
- (void)setAppPunchOut:(SAUIAppPunchOut *)arg0;
- (SAAnswerDirectAnswer *)directAnswer;
- (void)setDirectAnswer:(SAAnswerDirectAnswer *)arg0;
- (NSArray *)linkedAnswerGroups;
- (void)setLinkedAnswerGroups:(NSArray *)arg0;
- (NSArray *)structuredAnswers;
- (void)setStructuredAnswers:(NSArray *)arg0;

@end
