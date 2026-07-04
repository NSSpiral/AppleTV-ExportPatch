/* Runtime dump - TIPinyinDisambiguationCandidate
 * Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TIPinyinDisambiguationCandidate : TIKeyboardCandidateSingle
{
    NSString * _label;
}

+ (int)type;
+ (char)supportsSecureCoding;
+ (TIPinyinDisambiguationCandidate *)candidateWithPinyinSyllable:(id)arg0;

- (void)dealloc;
- (TIPinyinDisambiguationCandidate *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (TIPinyinDisambiguationCandidate *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)label;
- (TIPinyinDisambiguationCandidate *)initWithCandidateResultSetCoder:(TIKeyboardCandidateResultSet *)arg0;
- (void)encodeWithCandidateResultSetCoder:(TIKeyboardCandidateResultSet *)arg0;
- (TIPinyinDisambiguationCandidate *)initWithPinyinSyllable:(id)arg0;

@end
