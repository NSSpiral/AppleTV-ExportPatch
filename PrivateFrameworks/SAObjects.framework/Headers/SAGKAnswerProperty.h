/* Runtime dump - SAGKAnswerProperty
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAGKAnswerProperty : AceObject <SAAceSerializable>

@property (retain, nonatomic) <SAClientBoundCommand> * command;
@property (retain, nonatomic) SAUIDecoratedText * decoratedValue;
@property (retain, nonatomic) SAUIDecoratedText * decoratedValueAnnotation;
@property (copy, nonatomic) NSString * name;
@property (retain, nonatomic) SAUIAppPunchOut * punchOut;
@property (copy, nonatomic) NSNumber * selected;
@property (copy, nonatomic) NSString * value;
@property (copy, nonatomic) NSString * valueAnnotation;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)answerProperty;
+ (NSDictionary *)answerPropertyWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (<SAClientBoundCommand> *)command;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (NSString *)value;
- (void)setValue:(NSString *)arg0;
- (void)setSelected:(NSNumber *)arg0;
- (NSNumber *)selected;
- (void)setCommand:(<SAClientBoundCommand> *)arg0;
- (NSString *)encodedClassName;
- (SAUIAppPunchOut *)punchOut;
- (void)setPunchOut:(SAUIAppPunchOut *)arg0;
- (SAUIDecoratedText *)decoratedValue;
- (void)setDecoratedValue:(SAUIDecoratedText *)arg0;
- (NSString *)valueAnnotation;
- (void)setValueAnnotation:(NSString *)arg0;
- (SAUIDecoratedText *)decoratedValueAnnotation;
- (void)setDecoratedValueAnnotation:(SAUIDecoratedText *)arg0;

@end
