/* Runtime dump - UIKeyboardCandidateInlineFloatingView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardCandidateInlineFloatingView : UIView <UIKeyboardCandidateList, UIKeyboardCandidateListDelegate, UIKeyboardCandidateGridCollectionViewControllerDelegate>
{
    char _reducedWidth;
    char _showHiddenCandidatesOnly;
    TIKeyboardCandidateResultSet * _candidateSet;
    NSString * _inlineText;
    float _maxX;
    UIKeyboardCandidateGridCollectionViewController * _collectionViewController;
    <UIKeyboardCandidateListDelegate> * _candidateListDelegate;
    int _position;
    UIKeyboardCandidateSortControl * _sortSelectionBar;
    struct CGRect _inlineRect;
    struct CGRect _previousCollapsedFrame;
}

@property (retain, nonatomic) TIKeyboardCandidateResultSet * candidateSet;
@property (copy, nonatomic) NSString * inlineText;
@property (nonatomic) struct CGRect inlineRect;
@property (nonatomic) float maxX;
@property (readonly, nonatomic) char reducedWidth;
@property (readonly, nonatomic) UIKeyboardCandidateGridCollectionViewController * collectionViewController;
@property (nonatomic) <UIKeyboardCandidateListDelegate> * candidateListDelegate;
@property (nonatomic) int position;
@property (nonatomic) struct CGRect previousCollapsedFrame;
@property (readonly, nonatomic) UIKeyboardCandidateSortControl * sortSelectionBar;
@property (nonatomic) char showHiddenCandidatesOnly;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (UIKeyboardCandidateInlineFloatingView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (struct CGSize)size;
- (void)didMoveToWindow;
- (void)setFrame:(struct CGRect)arg0;
- (void)setPosition:(int)arg0;
- (int)position;
- (void)layout;
- (TIKeyboardCandidateResultSet *)candidates;
- (void)showCandidateAtIndex:(unsigned int)arg0;
- (void)showNextCandidate;
- (<UIKeyboardCandidateListDelegate> *)candidateListDelegate;
- (void)candidateListAcceptCandidate:(NSDate *)arg0;
- (TIKeyboardCandidateResultSet *)candidateSet;
- (char)hasCandidates;
- (void)setCandidateSet:(TIKeyboardCandidateResultSet *)arg0;
- (void)setCandidates:(TIKeyboardBehaviors_WaitingForCandidates *)arg0 inlineText:(NSString *)arg1 inlineRect:(struct CGRect)arg2 maxX:(struct CGSize)arg3 layout:(NSObject *)arg4;
- (void)setCandidateListDelegate:(<UIKeyboardCandidateListDelegate> *)arg0;
- (NSString *)statisticsIdentifier;
- (void)candidateListSelectionDidChange:(NSDictionary *)arg0;
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
- (void)setCandidates:(TIKeyboardBehaviors_WaitingForCandidates *)arg0 type:(int)arg1 inlineText:(NSString *)arg2 inlineRect:(struct CGRect)arg3 maxX:(struct CGSize)arg4 layout:(NSObject *)arg5;
- (void)setInlineText:(NSString *)arg0;
- (char)handleNumberKey:(unsigned int)arg0;
- (char)handleTabKeyWithShift:(char)arg0;
- (void)candidatesDidChange;
- (void)revealHiddenCandidates;
- (NSString *)inlineText;
- (UIKBRenderConfig *)_inheritedRenderConfig;
- (char)padInlineFloatingViewIsExpanded:(id)arg0;
- (void)padInlineFloatingViewExpand:(id)arg0;
- (unsigned int)gridCollectionViewNumberOfColumns:(NSArray *)arg0;
- (unsigned int)gridCollectionViewSelectedSortMethodIndex:(NSObject *)arg0;
- (char)showHiddenCandidatesOnly;
- (void)setShowHiddenCandidatesOnly:(char)arg0;
- (NSArray *)activeCandidateList;
- (void)candidateListShouldBeDismissed:(id)arg0;
- (void)setCandidateSet:(TIKeyboardCandidateResultSet *)arg0 showHiddenCandidatesOnly:(char)arg1;
- (UIKeyboardCandidateGridCollectionViewController *)collectionViewController;
- (char)isReducedWidth;
- (struct CGRect)inlineRect;
- (void)updateLayerBorderWidth;
- (char)isAcceptableFrame:(struct CGRect)arg0 afterScrollBy:(struct CGSize)arg1;
- (struct CGRect)adjustedInlineRectFromInlineText:(NSString *)arg0 inlineRect:(SEL)arg1;
- (struct CGRect)adjustedFrameFromDesiredFrame:(NSObject *)arg0 textHeight:(SEL)arg1;
- (float)maxX;
- (void)setCandidates:(TIKeyboardBehaviors_WaitingForCandidates *)arg0 type:(int)arg1 inlineText:(NSString *)arg2 inlineRect:(struct CGRect)arg3 maxX:(struct CGSize)arg4 layout:(NSObject *)arg5 showHiddenCandidatesOnly:(float)arg6;
- (void)setInlineRect:(struct CGRect)arg0;
- (void)setMaxX:(float)arg0;
- (void)adjustFrameForInlineText:(NSString *)arg0 inlineRect:(struct CGRect)arg1 maxX:(struct CGSize)arg2;
- (UIKeyboardCandidateSortControl *)sortSelectionBar;
- (void)expand;
- (void)sortSelectionBarAction;
- (struct CGRect)previousCollapsedFrame;
- (void)setPreviousCollapsedFrame:(struct CGRect)arg0;

@end
