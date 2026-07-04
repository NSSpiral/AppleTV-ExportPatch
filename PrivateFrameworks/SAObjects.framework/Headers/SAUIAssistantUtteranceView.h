/* Runtime dump - SAUIAssistantUtteranceView
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUIAssistantUtteranceView : SAAceView

@property (copy, nonatomic) NSString * dialogIdentifier;
@property (copy, nonatomic) NSNumber * postDialogDelayInMilliseconds;
@property (copy, nonatomic) NSString * text;

+ (NSObject *)assistantUtteranceView;
+ (NSDictionary *)assistantUtteranceViewWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)text;
- (void)setText:(NSString *)arg0;
- (NSString *)encodedClassName;
- (NSString *)dialogIdentifier;
- (void)setDialogIdentifier:(NSString *)arg0;
- (NSNumber *)postDialogDelayInMilliseconds;
- (void)setPostDialogDelayInMilliseconds:(NSNumber *)arg0;

@end
