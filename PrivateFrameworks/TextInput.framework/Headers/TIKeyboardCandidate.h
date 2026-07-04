/* Runtime dump - TIKeyboardCandidate
 * Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TIKeyboardCandidate : NSObject <NSCopying, NSSecureCoding, TIKeyboardCandidateCoding>
{
    NSString * _alternativeText;
}

@property (readonly, nonatomic) NSString * candidate;
@property (readonly, nonatomic) NSString * input;
@property (readonly, nonatomic) NSString * label;
@property (copy, nonatomic) NSString * alternativeText;
@property (readonly, nonatomic) unsigned int wordOriginFeedbackID;
@property (readonly, nonatomic) unsigned int deleteCount;
@property (readonly, nonatomic) char isForShortcutConversion;
@property (readonly, nonatomic) char isAutocorrection;
@property (readonly, nonatomic) char extensionCandidate;
@property (readonly, nonatomic) char emojiCandidate;
@property (readonly, nonatomic) char completionCandidate;
@property (readonly, nonatomic) char inlineCompletionCandidate;
@property (readonly, nonatomic) char fullwidthCandidate;
@property (readonly, nonatomic) unsigned int usageTrackingMask;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (int)type;
+ (char)supportsSecureCoding;

- (void)dealloc;
- (TIKeyboardCandidate *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (TIKeyboardCandidate *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)label;
- (NSString *)input;
- (unsigned int)deleteCount;
- (NSString *)alternativeText;
- (void)setAlternativeText:(NSString *)arg0;
- (NSString *)candidate;
- (char)isForShortcutConversion;
- (char)isExtensionCandidate;
- (char)isCompletionCandidate;
- (char)isInlineCompletionCandidate;
- (char)isFullwidthCandidate;
- (unsigned int)usageTrackingMask;
- (unsigned int)wordOriginFeedbackID;
- (char)isAutocorrection;
- (TIKeyboardCandidate *)initWithCandidateResultSetCoder:(TIKeyboardCandidateResultSet *)arg0;
- (void)encodeWithCandidateResultSetCoder:(TIKeyboardCandidateResultSet *)arg0;
- (char)isEmojiCandidate;

@end
