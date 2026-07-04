/* Runtime dump - TIMecabraCandidate
 * Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TIMecabraCandidate : TIKeyboardCandidate
{
    char _emojiCandidate;
    char _extensionCandidate;
    char _isForShortcutConversion;
    NSString * _candidate;
    NSString * _input;
    NSNumber * _mecabraCandidatePointerValue;
}

@property (retain, nonatomic) NSNumber * mecabraCandidatePointerValue;

+ (int)type;
+ (char)supportsSecureCoding;

- (void)dealloc;
- (TIMecabraCandidate *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (TIMecabraCandidate *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)input;
- (NSString *)candidate;
- (char)isForShortcutConversion;
- (char)isExtensionCandidate;
- (char)isFullwidthCandidate;
- (TIMecabraCandidate *)initWithCandidateResultSetCoder:(TIKeyboardCandidateResultSet *)arg0;
- (void)encodeWithCandidateResultSetCoder:(TIKeyboardCandidateResultSet *)arg0;
- (TIMecabraCandidate *)initWithCandidate:(NSString *)arg0 forInput:(NSObject *)arg1 mecabraCandidatePointerValue:(NSNumber *)arg2 isExtension:(char)arg3 isEmoji:(char)arg4 isShortcut:(char)arg5;
- (NSNumber *)mecabraCandidatePointerValue;
- (TIMecabraCandidate *)initWithSurface:(struct __IOSurface *)arg0 input:(NSString *)arg1 mecabraCandidatePointerValue:(NSNumber *)arg2;
- (void)setMecabraCandidatePointerValue:(NSNumber *)arg0;
- (char)isEmojiCandidate;

@end
