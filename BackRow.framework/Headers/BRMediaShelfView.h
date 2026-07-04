/* Runtime dump - BRMediaShelfView
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@protocol BRContainerViewCell;

@class BRControl, BREvent;
@interface BRMediaShelfView : BRControl <BRContainerViewCell>
{
    id _dataSource;
    id _delegate;
    NSDictionary * _controlActions;
    NSDictionary * _titleActions;
    char _centered;
    char _scrollable;
    struct _NSRange _flatRange;
    struct CATransform3D _leftTransform;
    struct CATransform3D _rightTransform;
    NSMutableArray * _cells;
    NSMutableArray * _titles;
    NSTimer * _scrollTimer;
    char _scrolling;
    int _collapsedState;
    char _ordered;
    char _needToReloadDataOnActivate;
    long _numberOfItems;
    struct _NSRange _refillVisibleRange;
    char _restoreLastFocus;
    NSTimer * _forceDisplayTimer;
    id _loadCompletionBlock;
    char _okToLoad;
    char _displayComplete;
    char _explicitlyAcceptsFocus;
    char antialiasCoverflowPosters;
    long _columnCount;
    struct ? _horizontalGap;
    float _coverflowMargin;
}

@property (nonatomic) long columnCount;
@property (nonatomic) struct ? horizontalGap;
@property (nonatomic) float coverflowMargin;
@property (nonatomic) char antialiasCoverflowPosters;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (char)brEventAction:(BREvent *)arg0;
- (void)setAcceptsFocus:(char)arg0;
- (void)_focusChanged:(NSNotification *)arg0;
- (void)layoutSubcontrols;
- (void)controlWasDeactivated;
- (void)controlWasActivated;
- (void)updatePersistentSavedSelection;
- (char)restorePersistentSavedSelection;
- (long)dataCount;
- (void)configureCoverflowMarginForPreferredItemWidth:(float)arg0;
- (void)setAntialiasCoverflowPosters:(char)arg0;
- (void)setHorizontalGap:(struct ?)arg0;
- (void)windowMaxBoundsChanged;
- (void)setIgnoreLoadAndDisplayOnDemand;
- (NSArray *)accessibilityControls;
- (void)setIgnoreLoadAndDisplayOnDemandDisableAnimations:(char)arg0;
- (void)setCoverflowMargin:(float)arg0;
- (BRControl *)selectedControl;
- (NSString *)focusedIndexPath;
- (void)focusDirectlyOnControl:(BRControl *)arg0;
- (BRControl *)focusedControlForEvent:(BREvent *)arg0 focusPoint:(struct CGPoint *)arg1;
- (void)setCollapsedState:(int)arg0;
- (void)cancelContainerViewLoad;
- (void)setReadyToDisplay;
- (long)_columnCount;
- (void)setScrollable:(char)arg0;
- (void)setFocusedIndexPath:(NSIndexPath *)arg0;
- (NSString *)randomNavigationLabel;
- (struct _NSRange)_visibleRange;
- (void)_loadControlsInRange:(struct _NSRange)arg0;
- (void)_stopForceDisplayTimer;
- (void)_updateSublayerTransform;
- (void)_removeSectionHeaderTitleControls;
- (void)_reloadTitles;
- (char)_scrollRight;
- (char)_rightButtonEvent;
- (char)_scrollLeft;
- (char)_leftButtonEvent;
- (NSObject *)_indexPathFromIndex:(long)arg0 sectionIndex:(long *)arg1;
- (long)_indexFromIndexPath:(NSIndexPath *)arg0;
- (void)_setFlatRange:(struct _NSRange)arg0 delayedLayout:(char)arg1;
- (char)_scrollInDirection:(int)arg0;
- (void)_refillShelf;
- (void)_layoutShelfContents;
- (struct ?)horizontalGap;
- (char)scrollable;
- (char)ordered;
- (int)collapsedState;
- (unsigned int)countOfCells;
- (unsigned int)indexInCellsOfObject:(NSObject *)arg0;
- (NSObject *)objectInCellsAtIndex:(unsigned int)arg0;
- (void)visibleScrollRectChanged;
- (void)scrollingCompleted;
- (float)coverflowMargin;
- (char)antialiasCoverflowPosters;
- (NSDictionary *)_controlActions;
- (NSDictionary *)_titleActions;
- (float)_horizontalGap;
- (float)_coverflowMargin;
- (void)_purgeControls;
- (char)_isDividerAtIndex:(long)arg0;
- (unsigned int)_lastScrollableIndex;
- (unsigned int)_firstScrollableIndex;
- (unsigned int)_nextFocusableIndexInDirection:(int)arg0;
- (id)_updateFlatRangeForScrollDirection:(int)arg0;
- (void)_displayCellsForce:(char)arg0;
- (unsigned int)_dividerCountInRange:(struct _NSRange)arg0;
- (void)_setDimness:(float)arg0 forLayer:(CALayer *)arg1;
- (long)_sectionIndexForIndex:(long)arg0;
- (char)_scrollIndexToVisible:(long)arg0;
- (struct _NSRange)_dividedRangeForRange:(struct _NSRange)arg0 andDirection:(int)arg1;
- (NSObject *)_setControlRange:(struct _NSRange)arg0 oldRange:(struct _NSRange)arg1;
- (NSObject *)_controlsInRange:(struct _NSRange)arg0 oldRange:(struct _NSRange)arg1;
- (NSObject *)_createControlsInRange:(struct _NSRange)arg0;
- (NSObject *)_createControlAtIndex:(int)arg0;
- (void)_loadControlWithStartIndex:(long)arg0 start:(char)arg1;
- (void)_forceDisplayTimerFired:(id)arg0;
- (void)setOrdered:(char)arg0;
- (long)_numberOfItems;
- (void)loadWithCompletionBlock:(id /* block */)arg0;
- (void)dealloc;
- (void)setDataSource:(NSObject *)arg0;
- (void)setDelegate:(NSObject *)arg0;
- (void)reloadData;
- (BRMediaShelfView *)init;
- (NSObject *)dataSource;
- (NSObject *)delegate;
- (NSString *)accessibilityLabel;
- (long)columnCount;
- (void)setColumnCount:(long)arg0;
- (char)centered;
- (void)setCentered:(char)arg0;

@end
