/* Runtime dump - UIKeyboardCandidateGridCollectionView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardCandidateGridCollectionView : UIKBCandidateCollectionView
{
    float _indexMaximumHeight;
    UIKeyboardCandidateGridCollectionViewController * _parentViewController;
    float _previousGroupBarStartingY;
    UITableViewIndex * _index;
    UIView * _headerView;
}

@property (nonatomic) UIKeyboardCandidateGridCollectionViewController * parentViewController;
@property (retain, nonatomic) UIView * headerView;
@property (nonatomic) float previousGroupBarStartingY;
@property (retain, nonatomic) NSArray * indexTitles;
@property (readonly, nonatomic) UITableViewIndex * index;

- (void)dealloc;
- (void)drawRect:(struct CGRect)arg0;
- (UIKeyboardCandidateGridCollectionView *)initWithFrame:(struct CGRect)arg0 collectionViewLayout:(struct CGSize)arg1;
- (UIKeyboardCandidateGridCollectionViewController *)parentViewController;
- (void)setContentOffset:(struct CGPoint)arg0;
- (void)selectItemAtIndexPath:(NSIndexPath *)arg0 animated:(char)arg1 scrollPosition:(unsigned int)arg2;
- (void)setParentViewController:(UIKeyboardCandidateGridCollectionViewController *)arg0;
- (UIView *)headerView;
- (void)scrollToOffsetFromTop:(float)arg0 withAnimation:(char)arg1;
- (void)scrollToTopWithAnimation:(char)arg0;
- (void)scrollToBottomWithAnimation:(char)arg0;
- (void)setHeaderView:(UIView *)arg0;
- (NSArray *)indexTitles;
- (void)setIndexTitles:(NSArray *)arg0;
- (UITableViewIndex *)index;
- (void)keyboardDidHideNotification:(NSNotification *)arg0;
- (void)keyboardWillShowNotification:(NSNotification *)arg0;
- (float)groupBarStartingY;
- (void)setPreviousGroupBarStartingY:(float)arg0;
- (char)shouldShowIndex;
- (void)updateIndex:(char)arg0;
- (void)updateIndex;
- (float)previousGroupBarStartingY;
- (void)showIndex:(char)arg0;
- (void)delayUpdateIndex;
- (char)isCellVisible:(id)arg0;

@end
