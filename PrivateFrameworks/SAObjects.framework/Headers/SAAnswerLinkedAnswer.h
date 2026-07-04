/* Runtime dump - SAAnswerLinkedAnswer
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAAnswerLinkedAnswer : AceObject <SAAceSerializable>

@property (copy, nonatomic) NSString * descriptionText;
@property (copy, nonatomic) NSURL * image;
@property (copy, nonatomic) NSURL * link;
@property (copy, nonatomic) NSString * name;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (SAAnswerLinkedAnswer *)linkedAnswer;
+ (NSDictionary *)linkedAnswerWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (void)setImage:(NSURL *)arg0;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (NSURL *)image;
- (void)setLink:(NSURL *)arg0;
- (NSURL *)link;
- (void)setDescriptionText:(NSString *)arg0;
- (NSString *)descriptionText;
- (NSString *)encodedClassName;

@end
