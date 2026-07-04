/* Runtime dump - TICompositeMecabraCandidate
 * Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TICompositeMecabraCandidate : TIMecabraCandidate
{
    NSString * _remainderCandidateString;
    NSArray * _autoconvertedCandidatePointerValues;
}

@property (copy, nonatomic) NSString * remainderCandidateString;
@property (copy, nonatomic) NSArray * autoconvertedCandidatePointerValues;

+ (int)type;
+ (char)supportsSecureCoding;

- (void)dealloc;
- (TICompositeMecabraCandidate *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (TICompositeMecabraCandidate *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)label;
- (TICompositeMecabraCandidate *)initWithCandidateResultSetCoder:(TIKeyboardCandidateResultSet *)arg0;
- (void)encodeWithCandidateResultSetCoder:(TIKeyboardCandidateResultSet *)arg0;
- (NSString *)remainderCandidateString;
- (NSArray *)autoconvertedCandidatePointerValues;
- (void)setRemainderCandidateString:(NSString *)arg0;
- (void)setAutoconvertedCandidatePointerValues:(NSArray *)arg0;

@end
