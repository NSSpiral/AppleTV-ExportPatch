/* Runtime dump - UIDynamicCaret
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIDynamicCaret : UIImageView <UIKeyboardCandidateList, _UIDynamicCaretDocumentContentDelegate>
{
    <UIKeyboardCandidateListDelegate> * _candidateListDelegate;
    int _selectedIndex;
    char _justDeleted;
    _UIDynamicCaretInput * _inputView;
    _UIDynamicCaretAlternatives * _alternativesView;
    _UIDynamicCaretNoContentView * _noContentView;
    _UIDynamicCaretHelpLabel * _helpLabel;
    TIKeyboardCandidateResultSet * _candidateSet;
}

@property (nonatomic) char isActive;
@property (retain, nonatomic) _UIDynamicCaretInput * inputView;
@property (retain, nonatomic) _UIDynamicCaretAlternatives * alternativesView;
@property (retain, nonatomic) _UIDynamicCaretNoContentView * noContentView;
@property (retain, nonatomic) _UIDynamicCaretHelpLabel * helpLabel;
@property (retain, nonatomic) TIKeyboardCandidateResultSet * candidateSet;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (UIDynamicCaret *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)setFrame:(struct CGRect)arg0;
- (void)layoutSubviews;
- (char)isActive;
- (void)touchesBegan:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesMoved:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesEnded:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesCancelled:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)didMoveToSuperview;
- (UIImage *)backgroundImage;
- (void)showCandidateAtIndex:(unsigned int)arg0;
- (void)showNextCandidate;
- (TIKeyboardCandidateResultSet *)candidateSet;
- (char)hasCandidates;
- (void)setCandidateSet:(TIKeyboardCandidateResultSet *)arg0;
- (void)setCandidates:(TIKeyboardBehaviors_WaitingForCandidates *)arg0 inlineText:(NSString *)arg1 inlineRect:(struct CGRect)arg2 maxX:(struct CGSize)arg3 layout:(NSObject *)arg4;
- (NSString *)statisticsIdentifier;
- (char)isExtendedList;
- (char)isHiddenCandidatesList;
- (void)setUIKeyboardCandidateListDelegate:(NSObject *)arg0;
- (char)showCandidate:(NSDate *)arg0;
- (void)showPreviousCandidate;
- (void)showNextPage;
- (void)showPreviousPage;
- (void)showNextRow;
- (void)showPreviousRow;
- (TIKeyboardCandidate *)currentCandidate;
- (unsigned int)currentIndex;
- (void)candidateAcceptedAtIndex:(unsigned int)arg0;
- (TIKeyboardBehaviors *)keyboardBehaviors;
- (unsigned int)selectedSortIndex;
- (_UIDynamicCaretInput *)inputView;
- (void)setInputView:(_UIDynamicCaretInput *)arg0;
- (void)setIsActive:(char)arg0;
- (void)setAlternativesView:(_UIDynamicCaretAlternatives *)arg0;
- (void)setNoContentView:(_UIDynamicCaretNoContentView *)arg0;
- (void)setHelpLabel:(_UIDynamicCaretHelpLabel *)arg0;
- (_UIDynamicCaretAlternatives *)alternativesView;
- (_UIDynamicCaretNoContentView *)noContentView;
- (_UIDynamicCaretHelpLabel *)helpLabel;
- (void)displayAlternatives:(char)arg0;
- (void)setDocumentHasContent:(char)arg0;
- (void)alternativeTappedAtIndex:(int)arg0;
- (char)isDeleteCandidate:(NSDate *)arg0;

@end
