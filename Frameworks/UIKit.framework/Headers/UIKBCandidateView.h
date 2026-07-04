/* Runtime dump - UIKBCandidateView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBCandidateView : UIKBKeyView <UIKeyboardCandidateGridCollectionViewControllerDelegate>
{
    UIView * _clippingView;
    UIView * _topBorder;
    unsigned int _selectedSortIndex;
    UIKeyboardCandidateGridCollectionViewController * _collectionViewController;
    UIKeyboardCandidateSortControl * _scrollViewSortControl;
    struct ? _visualStyling;
}

@property (readonly, nonatomic) TIKeyboardCandidateResultSet * candidateResultSet;
@property (nonatomic) unsigned int selectedSortIndex;
@property (retain, nonatomic) UIKeyboardCandidateGridCollectionViewController * collectionViewController;
@property (retain, nonatomic) UIKeyboardCandidateSortControl * scrollViewSortControl;
@property (nonatomic) struct ? visualStyling;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (void)addSubview:(_UIVisualEffectSubview *)arg0;
- (UIKBCandidateView *)initWithFrame:(struct CGRect)arg0 keyplane:(struct CGSize)arg1 key:(NSString *)arg2;
- (void)setRenderConfig:(UIKBRenderConfig *)arg0;
- (void)showCandidateAtIndex:(unsigned int)arg0;
- (void)showNextCandidate;
- (char)hasCandidates;
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
- (void)setVisualStyling:(struct ?)arg0;
- (struct ?)visualStyling;
- (TIKeyboardCandidateResultSet *)candidateResultSet;
- (void)updateForKeyplane:(id)arg0 key:(NSString *)arg1;
- (<UIKeyboardCandidateList> *)candidateList;
- (unsigned int)gridCollectionViewNumberOfColumns:(NSArray *)arg0;
- (NSSet *)headerViewForCandidateSet:(NSSet *)arg0;
- (unsigned int)gridCollectionViewSelectedSortMethodIndex:(NSObject *)arg0;
- (void)displayLayer:(MDDisplayLayer *)arg0;
- (char)isTenKey;
- (void)updateCollectionViewController;
- (void)clearCollectionViewController;
- (UIKeyboardCandidateSortControl *)scrollViewSortControl;
- (UIKeyboardCandidateGridCollectionViewController *)collectionViewController;
- (void)updateCollectionViewController:(char)arg0;
- (void)setCollectionViewController:(UIKeyboardCandidateGridCollectionViewController *)arg0;
- (void)setSelectedSortIndex:(unsigned int)arg0;
- (void)sortSelectionBarAction:(NSObject *)arg0;
- (void)setScrollViewSortControl:(UIKeyboardCandidateSortControl *)arg0;
- (NSSet *)groupedCandidatesFromCandidateSet:(NSSet *)arg0 forSortIndex:(unsigned int)arg1;

@end
