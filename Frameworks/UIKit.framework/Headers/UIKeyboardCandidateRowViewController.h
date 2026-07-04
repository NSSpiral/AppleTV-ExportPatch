/* Runtime dump - UIKeyboardCandidateRowViewController
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardCandidateRowViewController : UIViewController <UIKeyboardCandidateList, UICollectionViewDelegate, UICollectionViewDataSource>
{
    char _showsHiddenCandidates;
    <UIKeyboardCandidateRowViewControllerDelegate> * _delegate;
    <UIKeyboardCandidateListDelegate> * _candidateListDelegate;
    TIKeyboardCandidateResultSet * _candidateSet;
    Class _cellClass;
}

@property (nonatomic) <UIKeyboardCandidateRowViewControllerDelegate> * delegate;
@property (nonatomic) <UIKeyboardCandidateListDelegate> * candidateListDelegate;
@property (retain, nonatomic) TIKeyboardCandidateResultSet * candidateSet;
@property (nonatomic) char showsHiddenCandidates;
@property (readonly, nonatomic) NSArray * candidates;
@property (readonly, nonatomic) UIKBCandidateCollectionView * collectionView;
@property (retain, nonatomic) Class cellClass;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (float)suggestedHeightForCellClass:(Class)arg0;

- (void)setDelegate:(<UIKeyboardCandidateRowViewControllerDelegate> *)arg0;
- (<UIKeyboardCandidateRowViewControllerDelegate> *)delegate;
- (int)collectionView:(UIKBCandidateCollectionView *)arg0 numberOfItemsInSection:(int)arg1;
- (UICollectionViewCell *)collectionView:(UIKBCandidateCollectionView *)arg0 cellForItemAtIndexPath:(NSIndexPath *)arg1;
- (int)numberOfSectionsInCollectionView:(NSObject *)arg0;
- (NSObject *)collectionView:(UIKBCandidateCollectionView *)arg0 viewForSupplementaryElementOfKind:(NSString *)arg1 atIndexPath:(NSIndexPath *)arg2;
- (void)collectionView:(UIKBCandidateCollectionView *)arg0 didSelectItemAtIndexPath:(NSIndexPath *)arg1;
- (Class)cellClass;
- (float)suggestedHeight;
- (void)_showCandidateAtIndex:(unsigned int)arg0 scrollCellToVisible:(char)arg1 animated:(char)arg2;
- (NSArray *)candidates;
- (void)showCandidateAtIndex:(unsigned int)arg0;
- (void)_stepSelectedCandidateInDirection:(char)arg0;
- (char)showsHiddenCandidates;
- (void)showNextCandidate;
- (<UIKeyboardCandidateListDelegate> *)candidateListDelegate;
- (UIKBCandidateCollectionView *)collectionView;
- (TIKeyboardCandidateResultSet *)candidateSet;
- (char)hasCandidates;
- (void)setCandidateSet:(TIKeyboardCandidateResultSet *)arg0;
- (void)setCandidates:(NSArray *)arg0 inlineText:(NSString *)arg1 inlineRect:(struct CGRect)arg2 maxX:(struct CGSize)arg3 layout:(NSObject *)arg4;
- (void)setCandidateListDelegate:(<UIKeyboardCandidateListDelegate> *)arg0;
- (NSString *)statisticsIdentifier;
- (void)_reloadCandidates;
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
- (void)setCandidates:(NSArray *)arg0 type:(int)arg1 inlineText:(NSString *)arg2 inlineRect:(struct CGRect)arg3 maxX:(struct CGSize)arg4 layout:(NSObject *)arg5;
- (void)candidatesDidChange;
- (void)revealHiddenCandidates;
- (UIKeyboardCandidateRowViewController *)initWithCellClass:(Class)arg0;
- (void)loadView;
- (struct CGSize)collectionView:(UIKBCandidateCollectionView *)arg0 layout:(NSObject *)arg1 sizeForItemAtIndexPath:(NSIndexPath *)arg2;
- (struct CGSize)sizeOfDummyItemForCollectionView:(NSObject *)arg0 layout:(NSObject *)arg1;
- (void)setShowsHiddenCandidates:(char)arg0;
- (void)setCellClass:(Class)arg0;

@end
