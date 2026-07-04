/* Runtime dump - SAAnswerAnswerPropertyGroup
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAAnswerAnswerPropertyGroup : AceObject <SAAceSerializable>

@property (copy, nonatomic) NSArray * answerProperties;
@property (copy, nonatomic) NSString * title;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)answerPropertyGroup;
+ (NSDictionary *)answerPropertyGroupWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (void)setTitle:(NSString *)arg0;
- (NSString *)title;
- (NSString *)encodedClassName;
- (NSArray *)answerProperties;
- (void)setAnswerProperties:(NSArray *)arg0;

@end
