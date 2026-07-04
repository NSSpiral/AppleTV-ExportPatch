/* Runtime dump - SAAnswerAnswerProperty
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAAnswerAnswerProperty : AceObject <SAAceSerializable>

@property (copy, nonatomic) NSString * name;
@property (copy, nonatomic) NSString * value;
@property (copy, nonatomic) NSString * valueAnnotation;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)answerProperty;
+ (NSDictionary *)answerPropertyWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (NSString *)value;
- (void)setValue:(NSString *)arg0;
- (NSString *)encodedClassName;
- (NSString *)valueAnnotation;
- (void)setValueAnnotation:(NSString *)arg0;

@end
