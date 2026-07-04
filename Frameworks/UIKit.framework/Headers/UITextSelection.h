/* Runtime dump - UITextSelection
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITextSelection : NSObject
{
    UIResponder<UITextInputPrivate> * _document;
    int _granularity;
    UITextRange * _selectedRange;
    UITextRange * _base;
    UITextRange * _initialExtent;
    char _isCommitting;
}

@property (readonly, nonatomic) UIResponder<UITextInputPrivate> * document;
@property (retain, nonatomic) UITextRange * selectedRange;
@property (nonatomic) int granularity;
@property (readonly, nonatomic) char isCommitting;
@property (retain, nonatomic) UITextRange * base;
@property (retain, nonatomic) UITextRange * initialExtent;
@property (readonly, nonatomic) DOMRange * domRange;

- (void)dealloc;
- (void)invalidate;
- (UITextRange *)selectedRange;
- (void)setSelectionWithPoint:(struct CGPoint)arg0;
- (void)commit;
- (void)setSelectedRange:(UITextRange *)arg0;
- (void)selectionChanged;
- (void)selectAll;
- (NSString *)selectedText;
- (void)clearSelection;
- (void)collapseSelection;
- (struct CGRect)caretRect;
- (char)hasEditableSelection;
- (int)granularity;
- (struct CGRect)caretRectAtEndOfDocument;
- (struct CGRect)caretRectAtBeginOfDocument;
- (NSArray *)selectionRects;
- (void)alterSelection:(struct CGPoint)arg0 granularity:(int)arg1;
- (void)setGranularity:(int)arg0;
- (void)setRangedSelectionBaseToCurrentSelection;
- (void)clearRangedSelectionInitialExtent;
- (void)setRangedSelectionWithExtentPoint:(struct CGPoint)arg0;
- (void)moveCaretToBoundaryOfWhitespaceOrLine;
- (char)pointAtEndOfLine:(struct CGPoint)arg0;
- (id)wordContainingCaretSelection;
- (DOMRange *)_domRange;
- (void)setSelectionWithFirstPoint:(struct CGPoint)arg0 secondPoint:(struct CGPoint)arg1;
- (char)setRangedSelectionExtentPoint:(struct CGPoint)arg0 baseIsStart:(char)arg1;
- (void)smartExtendRangedSelection:(int)arg0 downstream:(char)arg1;
- (void)setRangedSelectionBaseToCurrentSelectionStart;
- (void)setRangedSelectionInitialExtentToCurrentSelectionEnd;
- (void)setRangedSelectionBaseToCurrentSelectionEnd;
- (void)setRangedSelectionInitialExtentToCurrentSelectionStart;
- (void)aggressivelyExpandSelectionToWordContainingCaretSelection;
- (char)setRangedSelectionExtentPoint:(struct CGPoint)arg0 baseIsStart:(char)arg1 allowFlipping:(char)arg2;
- (char)isCommitting;
- (UIResponder<UITextInputPrivate> *)document;
- (UITextSelection *)initWithDocument:(UIResponder<UITextInputPrivate> *)arg0;
- (struct CGPoint)clipPoint:(struct CGPoint)arg0 inRect:(struct CGRect)arg1;
- (UITextRange *)base;
- (void)setBase:(UITextRange *)arg0;
- (void)setInitialExtent:(UITextRange *)arg0;
- (UITextRange *)initialExtent;
- (struct CGRect)closestCaretRectForPoint:(NSObject *)arg0 inSelection:(SEL)arg1;
- (unsigned int)offsetInMarkedText;
- (char)pointAtStartOfLine:(struct CGPoint)arg0;

@end
