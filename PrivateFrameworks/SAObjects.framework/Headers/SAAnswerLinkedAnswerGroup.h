/* Runtime dump - SAAnswerLinkedAnswerGroup
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAAnswerLinkedAnswerGroup : AceObject <SAAceSerializable>

@property (copy, nonatomic) NSArray * linkedAnswers;
@property (copy, nonatomic) NSString * title;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)linkedAnswerGroup;
+ (NSDictionary *)linkedAnswerGroupWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (void)setTitle:(NSString *)arg0;
- (NSString *)title;
- (NSString *)encodedClassName;
- (NSArray *)linkedAnswers;
- (void)setLinkedAnswers:(NSArray *)arg0;

@end
