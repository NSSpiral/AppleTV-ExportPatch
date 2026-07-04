/* Runtime dump - TPStarkPhoneCallContainer
 * Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@interface TPStarkPhoneCallContainer : UIView
{
    char _shouldMerge;
    char _merging;
    <TPStarkPhoneCallContainerDataSource> * _dataSource;
    <TPStarkPhoneCallContainerDelegate> * _delegate;
    NSMutableArray * _visibleCells;
}

@property (nonatomic) <TPStarkPhoneCallContainerDataSource> * dataSource;
@property (nonatomic) <TPStarkPhoneCallContainerDelegate> * delegate;
@property (retain) NSMutableArray * visibleCells;
@property char shouldMerge;
@property char merging;

- (TPStarkPhoneCallContainer *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)setDataSource:(<TPStarkPhoneCallContainerDataSource> *)arg0;
- (void)setDelegate:(<TPStarkPhoneCallContainerDelegate> *)arg0;
- (void)reloadData;
- (<TPStarkPhoneCallContainerDataSource> *)dataSource;
- (<TPStarkPhoneCallContainerDelegate> *)delegate;
- (NSMutableArray *)visibleCells;
- (void)reloadDataAnimated:(char)arg0;
- (void)setNeedsMerge;
- (NSOperationQueue *)_reloadQueue;
- (char)shouldReloadCellsWithNumberOfCells:(unsigned int)arg0;
- (void)updateNumberOfCellsWithNewValue:(unsigned int)arg0 animated:(char)arg1;
- (void)updateCell:(NSObject *)arg0 atIndex:(unsigned int)arg1 animated:(char)arg2;
- (void)createVisibleCells:(unsigned int)arg0;
- (void)updateLayoutAnimated:(char)arg0;
- (void)mergeVisibleCells;
- (void)removeVisibleCells:(unsigned int)arg0;
- (void)updateAllCellConstraints;
- (void)animateLayoutOfViewWithCompletionBlock:(id /* block */)arg0;
- (void)mergeAllCellConstraints;
- (void)phoneCallViewCellTapped:(id)arg0;
- (void)addConstraintsForNewCell:(NSObject *)arg0;
- (NSObject *)constraintToFillContainerWithLeftOfCell:(NSObject *)arg0;
- (NSObject *)constraintToFillContainerWithRightOfCell:(NSObject *)arg0;
- (void)addRelationForWidthOfCell:(NSObject *)arg0;
- (void)removeAllConstraintsForCell:(NSObject *)arg0;
- (void)addRelationForLeftOfCell:(NSObject *)arg0;
- (void)addRelationForRightOfCell:(NSObject *)arg0;
- (void)setVisibleCells:(NSMutableArray *)arg0;
- (char)shouldMerge;
- (void)setShouldMerge:(char)arg0;
- (void)setMerging:(char)arg0;
- (char)isMerging;

@end
