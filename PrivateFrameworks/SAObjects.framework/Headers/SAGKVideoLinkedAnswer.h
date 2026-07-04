/* Runtime dump - SAGKVideoLinkedAnswer
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAGKVideoLinkedAnswer : SAGKImageLinkedAnswer

@property (copy, nonatomic) NSNumber * runtimeInMilliseconds;

+ (SAGKVideoLinkedAnswer *)videoLinkedAnswer;
+ (NSDictionary *)videoLinkedAnswerWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (NSNumber *)runtimeInMilliseconds;
- (void)setRuntimeInMilliseconds:(NSNumber *)arg0;

@end
