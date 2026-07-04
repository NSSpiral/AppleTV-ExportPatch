/* Runtime dump - UIKBHandwritingCandidateView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBHandwritingCandidateView : UIKBKeyView <UIKeyboardCandidateList, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    char _usesCandidateSelection;
    <UIKeyboardCandidateListDelegate> * _delegate;
    TIKeyboardCandidateResultSet * _candidateResultSet;
    UIKBCandidateCollectionView * _candidatesCollectionView;
    UIKeyboardCandidatePocketShadow * _pocketShadow;
    struct ? _visualStyling;
    UIKeyboardCandidateLogButton * _logButton;
    unsigned int _dummyCellCount;
    float _dummyCellWidth;
}

@property (nonatomic) <UIKeyboardCandidateListDelegate> * delegate;
@property (readonly, nonatomic) <UIKeyboardCandidateList> * candidateList;
@property (retain, nonatomic) TIKeyboardCandidateResultSet * candidateResultSet;
@property (readonly, nonatomic) NSArray * candidates;
@property (retain, nonatomic) UIKBCandidateCollectionView * candidatesCollectionView;
@property (retain, nonatomic) UIKeyboardCandidatePocketShadow * pocketShadow;
@property (nonatomic) struct ? visualStyling;
@property (nonatomic) char usesCandidateSelection;
@property (retain, nonatomic) UIKeyboardCandidateLogButton * logButton;
@property (nonatomic) unsigned int dummyCellCount;
@property (nonatomic) float dummyCellWidth;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (void)setDelegate:(<UIKeyboardCandidateListDelegate> *)arg0;
- (NSObject *)hitTest:(struct CGPoint)arg0 withEvent:(Event *)arg1;
- (char)pointInside:(struct CGPoint)arg0 withEvent:(Event *)arg1;
- (<UIKeyboardCandidateListDelegate> *)delegate;
- (int)collectionView:(UICollectionView *)arg0 numberOfItemsInSection:(int)arg1;
- (UICollectionViewCell *)collectionView:(UICollectionView *)arg0 cellForItemAtIndexPath:(NSIndexPath *)arg1;
- (void)collectionView:(UICollectionView *)arg0 didSelectItemAtIndexPath:(NSIndexPath *)arg1;
- (UIKBHandwritingCandidateView *)initWithFrame:(struct CGRect)arg0 keyplane:(struct CGSize)arg1 key:(NSString *)arg2;
- (void)setRenderConfig:(UIKBRenderConfig *)arg0;
- (NSArray *)candidates;
- (void)showCandidateAtIndex:(unsigned int)arg0;
- (void)showNextCandidate;
- (char)hasCandidates;
- (void)setCandidates:(NSArray *)arg0 inlineText:(NSString *)arg1 inlineRect:(struct CGRect)arg2 maxX:(struct CGSize)arg3 layout:(NSObject *)arg4;
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
- (char)hasNextPage;
- (char)hasPreviousPage;
- (void)jumpToCompositions;
- (struct CGSize)collectionView:(UICollectionView *)arg0 layout:(NSObject *)arg1 sizeForItemAtIndexPath:(NSIndexPath *)arg2;
- (void)_setRenderConfig:(NSObject *)arg0;
- (UIKBRenderConfig *)_inheritedRenderConfig;
- (char)usesCandidateSelection;
- (void)setUsesCandidateSelection:(char)arg0;
- (void)setVisualStyling:(struct ?)arg0;
- (struct ?)visualStyling;
- (void)updatePocketShadowForKeyplane:(id)arg0;
- (void)calculateDummyCellAttributes;
- (UIKBCandidateCollectionView *)candidatesCollectionView;
- (UIKeyboardCandidateLogButton *)logButton;
- (UIKeyboardCandidatePocketShadow *)pocketShadow;
- (void)setPocketShadow:(UIKeyboardCandidatePocketShadow *)arg0;
- (void)setDummyCellWidth:(float)arg0;
- (void)setDummyCellCount:(unsigned int)arg0;
- (void)reloadDataByAppendingAtEnd:(char)arg0;
- (unsigned int)dummyCellCount;
- (float)dummyCellWidth;
- (TIKeyboardCandidateResultSet *)candidateResultSet;
- (void)setCandidateResultSet:(TIKeyboardCandidateResultSet *)arg0;
- (void)selectAndScrollToCandidateAtIndexPath:(NSIndexPath *)arg0 animated:(char)arg1;
- (void)setCandidatesCollectionView:(UIKBCandidateCollectionView *)arg0;
- (void)updateForKeyplane:(id)arg0 key:(NSString *)arg1;
- (<UIKeyboardCandidateList> *)candidateList;
- (void)setLogButton:(UIKeyboardCandidateLogButton *)arg0;

@end
