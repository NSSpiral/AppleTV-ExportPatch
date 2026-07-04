/* Runtime dump - SAUIPronunciationSnippet
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUIPronunciationSnippet : SAUISnippet

@property (copy, nonatomic) NSArray * cancelCommands;
@property (copy, nonatomic) NSString * interactionId;
@property (copy, nonatomic) NSString * orthography;
@property (copy, nonatomic) NSArray * pronunciations;
@property (copy, nonatomic) NSArray * selectNoneCommands;
@property (copy, nonatomic) NSString * selectNoneText;

+ (SAUIPronunciationSnippet *)pronunciationSnippet;
+ (NSDictionary *)pronunciationSnippetWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)orthography;
- (NSString *)encodedClassName;
- (void)setOrthography:(NSString *)arg0;
- (NSString *)interactionId;
- (void)setInteractionId:(NSString *)arg0;
- (NSArray *)cancelCommands;
- (void)setCancelCommands:(NSArray *)arg0;
- (NSArray *)pronunciations;
- (void)setPronunciations:(NSArray *)arg0;
- (NSArray *)selectNoneCommands;
- (void)setSelectNoneCommands:(NSArray *)arg0;
- (NSString *)selectNoneText;
- (void)setSelectNoneText:(NSString *)arg0;

@end
