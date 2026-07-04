/* Runtime dump - TIHandwritingCompositionCandidate
 * Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TIHandwritingCompositionCandidate : TIKeyboardCandidateSingle
{
    unsigned int _deleteCount;
}

+ (int)type;
+ (char)supportsSecureCoding;

- (TIHandwritingCompositionCandidate *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (TIHandwritingCompositionCandidate *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)label;
- (unsigned int)deleteCount;
- (TIHandwritingCompositionCandidate *)initWithCandidateResultSetCoder:(TIKeyboardCandidateResultSet *)arg0;
- (void)encodeWithCandidateResultSetCoder:(TIKeyboardCandidateResultSet *)arg0;
- (TIHandwritingCompositionCandidate *)initWithCandidate:(NSDate *)arg0 deleteCount:(unsigned int)arg1;

@end
