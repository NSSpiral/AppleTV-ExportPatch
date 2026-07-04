/* Runtime dump - TIHandwritingCandidate
 * Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TIHandwritingCandidate : TIKeyboardCandidateSingle
{
    unsigned long long _uniqueID;
    unsigned long long _completionUniqueID;
}

@property (readonly, nonatomic) unsigned long long uniqueID;
@property (readonly, nonatomic) unsigned long long completionUniqueID;

+ (int)type;
+ (char)supportsSecureCoding;

- (TIHandwritingCandidate *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (TIHandwritingCandidate *)copyWithZone:(struct _NSZone *)arg0;
- (char)isInlineCompletionCandidate;
- (TIHandwritingCandidate *)initWithCandidateResultSetCoder:(TIKeyboardCandidateResultSet *)arg0;
- (void)encodeWithCandidateResultSetCoder:(TIKeyboardCandidateResultSet *)arg0;
- (unsigned long long)completionUniqueID;
- (TIHandwritingCandidate *)initWithCandidate:(NSDate *)arg0 forInput:(NSObject *)arg1 uniqueID:(unsigned long long)arg2 completionUniqueID:(unsigned long long)arg3;
- (unsigned long long)uniqueID;

@end
