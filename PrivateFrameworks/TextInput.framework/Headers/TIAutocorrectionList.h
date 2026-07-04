/* Runtime dump - TIAutocorrectionList
 * Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TIAutocorrectionList : NSObject <NSSecureCoding>
{
    TIKeyboardCandidate * _autocorrection;
    NSArray * _predictions;
}

@property (readonly, nonatomic) TIKeyboardCandidate * autocorrection;
@property (readonly, nonatomic) NSArray * predictions;
@property (readonly, nonatomic) NSArray * candidates;
@property (readonly, nonatomic) char shouldAcceptTopCandidate;

+ (char)supportsSecureCoding;
+ (TIAutocorrectionList *)listWithAutocorrection:(TIKeyboardCandidate *)arg0 predictions:(NSArray *)arg1;
+ (TIAutocorrectionList *)autocorrectionListWithCandidates:(NSArray *)arg0 shouldAcceptTopCandidate:(char)arg1;

- (void)dealloc;
- (TIAutocorrectionList *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSArray *)candidates;
- (TIKeyboardCandidate *)autocorrection;
- (NSArray *)predictions;
- (char)shouldAcceptTopCandidate;
- (TIAutocorrectionList *)initWithAutocorrection:(TIKeyboardCandidate *)arg0 predictions:(NSArray *)arg1;
- (TIAutocorrectionList *)initWithCandidates:(NSArray *)arg0 shouldAcceptTopCandidate:(char)arg1;
- (TIAutocorrectionList *)initWithCandidates:(NSArray *)arg0;

@end
