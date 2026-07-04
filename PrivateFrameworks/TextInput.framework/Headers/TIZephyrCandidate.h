/* Runtime dump - TIZephyrCandidate
 * Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TIZephyrCandidate : TIKeyboardCandidateSingle
{
    char extensionCandidate;
    char _isFromPhraseDictionary;
    char _isFromTextChecker;
    unsigned int _wordOriginFeedbackID;
    unsigned int _usageTrackingMask;
    NSString * _label;
}

@property (nonatomic) char extensionCandidate;
@property (nonatomic) char isFromPhraseDictionary;
@property (nonatomic) char isFromTextChecker;
@property (copy, nonatomic) NSString * label;

+ (int)type;
+ (char)supportsSecureCoding;

- (void)dealloc;
- (TIZephyrCandidate *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (TIZephyrCandidate *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)label;
- (void)setLabel:(NSString *)arg0;
- (char)isExtensionCandidate;
- (unsigned int)usageTrackingMask;
- (unsigned int)wordOriginFeedbackID;
- (char)isAutocorrection;
- (TIZephyrCandidate *)initWithCandidateResultSetCoder:(TIKeyboardCandidateResultSet *)arg0;
- (void)encodeWithCandidateResultSetCoder:(TIKeyboardCandidateResultSet *)arg0;
- (TIZephyrCandidate *)initWithCandidate:(NSDate *)arg0 forInput:(NSObject *)arg1 wordOriginFeedbackID:(unsigned int)arg2 usageTrackingMask:(unsigned int)arg3;
- (char)isFromPhraseDictionary;
- (char)isFromTextChecker;
- (TIZephyrCandidate *)initWithCandidate:(NSDate *)arg0 forInput:(NSObject *)arg1 wordOriginFeedbackID:(unsigned int)arg2;
- (void)setExtensionCandidate:(char)arg0;
- (void)setIsFromPhraseDictionary:(char)arg0;
- (void)setIsFromTextChecker:(char)arg0;

@end
