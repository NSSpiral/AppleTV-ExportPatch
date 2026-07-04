/* Runtime dump - SAGKNewsLinkedAnswer
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAGKNewsLinkedAnswer : SAGKLinkedAnswer

@property (copy, nonatomic) NSDate * publicationDate;
@property (copy, nonatomic) NSString * source;

+ (SAGKNewsLinkedAnswer *)newsLinkedAnswer;
+ (NSDictionary *)newsLinkedAnswerWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)source;
- (void)setSource:(NSString *)arg0;
- (NSDate *)publicationDate;
- (void)setPublicationDate:(NSDate *)arg0;
- (NSString *)encodedClassName;

@end
