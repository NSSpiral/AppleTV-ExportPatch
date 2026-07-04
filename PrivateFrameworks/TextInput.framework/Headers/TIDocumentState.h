/* Runtime dump - TIDocumentState
 * Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TIDocumentState : NSObject <NSSecureCoding>
{
    NSString * _contextBeforeInput;
    NSString * _markedText;
    NSString * _selectedText;
    NSString * _contextAfterInput;
    struct _NSRange _selectedRangeInMarkedText;
}

@property (readonly, nonatomic) NSString * contextBeforeInput;
@property (readonly, nonatomic) NSString * markedText;
@property (readonly, nonatomic) NSString * selectedText;
@property (readonly, nonatomic) NSString * contextAfterInput;
@property (readonly, nonatomic) struct _NSRange selectedRangeInMarkedText;

+ (NSObject *)documentStateOfSecureTextDocument:(NSObject *)arg0;
+ (NSObject *)documentStateOfDocument:(NSObject *)arg0;
+ (char)supportsSecureCoding;
+ (TIDocumentState *)documentStateWithContextBefore:(id)arg0 selectedText:(NSString *)arg1 contextAfter:(id)arg2;
+ (TIDocumentState *)documentStateWithContextBefore:(id)arg0 selectedText:(NSString *)arg1 contextAfter:(id)arg2;
+ (TIDocumentState *)documentStateWithContextBefore:(id)arg0 markedText:(NSString *)arg1 selectedRange:(struct _NSRange)arg2 contextAfter:(id)arg3;
+ (NSString *)documentStateWithText:(NSString *)arg0 selectedRange:(struct _NSRange)arg1;

- (TIDocumentState *)initWithDocument:(NSObject *)arg0;
- (TIDocumentState *)initWithSecureTextDocument:(char)arg0;
- (NSObject *)_positionFromPosition:(NSObject *)arg0 toPreviousWordBoundaryInDocument:(NSObject *)arg1 tokenAccumulator:(id)arg2;
- (NSObject *)_contextBeforePosition:(NSObject *)arg0 inDocument:(char)arg1;
- (NSObject *)_contextAfterPosition:(NSObject *)arg0 inDocument:(char)arg1;
- (NSObject *)textRangeFromPosition:(NSObject *)arg0 toPosition:(NSObject *)arg1 inDocument:(char)arg2;
- (NSObject *)copyTextInRange:(NSObject *)arg0 fromDocument:(NSObject *)arg1;
- (NSObject *)_positionFromPosition:(NSObject *)arg0 toPreviousWordStartInDocument:(NSObject *)arg1 tokenAccumulator:(id)arg2;
- (void)dealloc;
- (TIDocumentState *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSString *)selectedText;
- (NSString *)markedText;
- (struct _NSRange)selectedRangeInMarkedText;
- (NSString *)documentStateAfterSettingMarkedText:(NSString *)arg0 selectedRange:(struct _NSRange)arg1;
- (NSString *)documentStateAfterUnmarkingText;
- (TIDocumentState *)initWithContextBefore:(id)arg0 markedText:(NSString *)arg1 selectedText:(NSString *)arg2 contextAfter:(id)arg3 selectedRangeInMarkedText:(struct _NSRange)arg4;
- (NSString *)contextBeforeInput;
- (NSString *)documentStateAfterInsertingText:(NSString *)arg0;
- (id)documentStateAfterInsertingTextAfterSelection:(id)arg0;
- (id)documentStateAfterDeletingBackward;
- (id)documentStateAfterDeletingForward;
- (NSPredicate *)inputStemWithTerminatorPredicate:(NSPredicate *)arg0;
- (NSString *)documentStateAfterReplacingText:(NSString *)arg0 withText:(NSString *)arg1;
- (NSPredicate *)inputStringWithTerminatorPredicate:(NSPredicate *)arg0;
- (char)documentIsEmpty;
- (NSString *)contextAfterInput;
- (id)documentStateAfterCursorAdjustment:(int)arg0;
- (char)string:(NSString *)arg0 matchesString:(NSString *)arg1;
- (unsigned int)hashString:(NSString *)arg0 intoHashValue:(unsigned int)arg1;
- (id)documentStateAfterCollapsingSelection;
- (NSString *)wordPrefixOfString:(NSString *)arg0 withTerminatorPredicate:(NSPredicate *)arg1 reverse:(/* block */ id)arg2;
- (unsigned int)inputIndexWithTerminatorPredicate:(NSPredicate *)arg0;
- (TIDocumentState *)initWithText:(NSString *)arg0 selectedRange:(struct _NSRange)arg1;

@end
