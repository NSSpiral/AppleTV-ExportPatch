/* Runtime dump - TIKeyboardCandidateSingle
 * Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TIKeyboardCandidateSingle : TIKeyboardCandidate
{
    NSString * _candidate;
    NSString * _input;
}

@property (copy, nonatomic) NSString * candidate;
@property (copy, nonatomic) NSString * input;

+ (int)type;
+ (char)supportsSecureCoding;
+ (NSObject *)candidateWithUnchangedInput:(NSObject *)arg0;
+ (NSDate *)candidateWithCandidate:(NSString *)arg0 forInput:(NSObject *)arg1;

- (void)setInput:(NSString *)arg0;
- (void)dealloc;
- (TIKeyboardCandidateSingle *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (TIKeyboardCandidateSingle *)copyWithZone:(struct _NSZone *)arg0;
- (void)setCandidate:(NSString *)arg0;
- (NSString *)input;
- (NSString *)candidate;
- (TIKeyboardCandidateSingle *)initWithCandidateResultSetCoder:(TIKeyboardCandidateResultSet *)arg0;
- (void)encodeWithCandidateResultSetCoder:(TIKeyboardCandidateResultSet *)arg0;
- (TIKeyboardCandidateSingle *)initWithCandidate:(NSString *)arg0 forInput:(NSObject *)arg1;
- (TIKeyboardCandidateSingle *)initWithUnchangedInput:(NSObject *)arg0;
- (TIKeyboardCandidateSingle *)initWithCandidate:(NSString *)arg0;

@end
