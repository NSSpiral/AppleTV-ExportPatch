/* Runtime dump - TIKeyboardOutput
 * Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TIKeyboardOutput : NSObject <NSSecureCoding>
{
    TIKeyboardCandidate * _acceptedCandidate;
    NSString * _textToCommit;
    unsigned int _deletionCount;
    NSString * _insertionText;
    unsigned int _forwardDeletionCount;
    NSString * _insertionTextAfterSelection;
    TIKeyboardCandidate * _shortcutConversion;
    NSIndexSet * _handwritingStrokesToDelete;
}

@property (retain, nonatomic) TIKeyboardCandidate * acceptedCandidate;
@property (copy, nonatomic) NSString * textToCommit;
@property (nonatomic) unsigned int deletionCount;
@property (copy, nonatomic) NSString * insertionText;
@property (nonatomic) unsigned int forwardDeletionCount;
@property (copy, nonatomic) NSString * insertionTextAfterSelection;
@property (retain, nonatomic) TIKeyboardCandidate * shortcutConversion;
@property (copy, nonatomic) NSIndexSet * handwritingStrokesToDelete;

+ (char)supportsSecureCoding;

- (void)dealloc;
- (TIKeyboardOutput *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (void)insertText:(NSString *)arg0;
- (void)deleteBackward;
- (unsigned int)deletionCount;
- (NSString *)insertionText;
- (void)setDeletionCount:(unsigned int)arg0;
- (void)setInsertionText:(NSString *)arg0;
- (TIKeyboardCandidate *)acceptedCandidate;
- (NSString *)textToCommit;
- (unsigned int)forwardDeletionCount;
- (NSString *)insertionTextAfterSelection;
- (void)insertTextAfterSelection:(id)arg0;
- (TIKeyboardCandidate *)shortcutConversion;
- (NSIndexSet *)handwritingStrokesToDelete;
- (void)setAcceptedCandidate:(TIKeyboardCandidate *)arg0;
- (void)deleteBackward:(unsigned int)arg0;
- (void)setTextToCommit:(NSString *)arg0;
- (void)setForwardDeletionCount:(unsigned int)arg0;
- (void)setInsertionTextAfterSelection:(NSString *)arg0;
- (void)setShortcutConversion:(TIKeyboardCandidate *)arg0;
- (void)setHandwritingStrokesToDelete:(NSIndexSet *)arg0;
- (void)deleteForward;
- (void)deleteForward:(unsigned int)arg0;

@end
