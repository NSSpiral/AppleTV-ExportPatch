/* Runtime dump - BRListView
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRGridView.h>

@protocol BRRandomNavigationSupportP;

@class BRBlueGlowSelectionLozengeLayer, BRBlueGlowSelectionLozengeLayerBacking, BRControl, BREvent, BRListControl, BRMenuItem, ListViewAnimationDelegate;
@interface BRListView : BRGridView <BRRandomNavigationSupportP>
{
    BRBlueGlowSelectionLozengeLayer * _cursor;
    BRBlueGlowSelectionLozengeLayerBacking * _backingCursor;
    ListViewAnimationDelegate * _animationDelegate;
    NSTimer * _pokeTimer;
    NSTimer * _delayTimer;
    NSTimer * _repeatTimer;
    double _repeatStart;
    double _repeatAccumulator;
    long _scrollSelection;
    long _savedSelection;
    char _turboEngaged;
    char _movingDown;
    char _selectionEntered;
    char _dimmed;
    char _avoidsInhibitingFocus;
}

@property (nonatomic) char dimmed;
@property (retain, nonatomic) BRBlueGlowSelectionLozengeLayerBacking * backingCursor;
@property (nonatomic) char avoidsInhibitingFocus;

- (char)brEventAction:(BREvent *)arg0;
- (void)setBackingCursor:(BRBlueGlowSelectionLozengeLayerBacking *)arg0;
- (void)layoutSubcontrols;
- (BRMenuItem *)list:(BRListControl *)arg0 menuItemForRowAtIndexPath:(NSIndexPath *)arg1;
- (long)numberOfSectionsInList:(BRListControl *)arg0;
- (long)list:(BRListControl *)arg0 numberOfRowsInSection:(long)arg1;
- (BRControl *)list:(BRListControl *)arg0 sectionHeaderForSection:(long)arg1;
- (NSString *)list:(BRListControl *)arg0 itemIDForIndexPath:(NSIndexPath *)arg1;
- (NSIndexPath *)list:(BRListControl *)arg0 indexPathForItemID:(NSObject *)arg1;
- (void)listWasActivated:(id)arg0;
- (void)list:(BRListControl *)arg0 didSelectItemAtIndexPath:(NSIndexPath *)arg1;
- (void)list:(BRListControl *)arg0 didPlayItemAtIndexPath:(NSIndexPath *)arg1;
- (void)controlWasActivated;
- (void)controlWasFocused;
- (void)controlWasUnfocused;
- (NSString *)visibleRowAtIndexPath:(NSIndexPath *)arg0;
- (float)list:(BRListControl *)arg0 heightForSectionHeader:(long)arg1;
- (float)list:(BRListControl *)arg0 heightForItemAtIndexPath:(NSIndexPath *)arg1;
- (void)list:(BRListControl *)arg0 didFocusItemAtIndexPath:(NSIndexPath *)arg1;
- (NSIndexPath *)list:(BRListControl *)arg0 willFocusItemAtIndexPath:(NSIndexPath *)arg1;
- (NSArray *)accessibilityControls;
- (BRBlueGlowSelectionLozengeLayerBacking *)backingCursor;
- (void)selectRowAtIndexPath:(NSIndexPath *)arg0;
- (void)reloadItemAtIndexPath:(NSIndexPath *)arg0;
- (void)focusDirectlyOnControl:(BRControl *)arg0;
- (NSObject *)visibleRowsAndRange:(struct _NSRange *)arg0;
- (void)populateDataCache:(NSObject *)arg0;
- (void)didFocusItemAtIndex:(long)arg0;
- (void)selectItemAtIndex:(long)arg0;
- (void)setAvoidsInhibitingFocus;
- (long)indexForItemID:(NSObject *)arg0;
- (void)listDidFinishLayout:(NSObject *)arg0;
- (unsigned int)countOfCells;
- (unsigned int)indexInCellsOfObject:(NSObject *)arg0;
- (NSObject *)objectInCellsAtIndex:(unsigned int)arg0;
- (float)listHeightToMaximum:(float)arg0;
- (NSString *)itemIDAtIndex:(long)arg0;
- (float)heightForItemAtIndex:(long)arg0;
- (void)willDisplayItemAtIndex:(long)arg0;
- (long)willFocusItemAtIndex:(long)arg0;
- (void)willUnFocusItemAtIndex:(long)arg0;
- (void)didUnFocusItemAtIndex:(long)arg0;
- (char)didPlayItemAtIndex:(long)arg0;
- (void)_leaveCurrentSelection;
- (void)_listScrollingInitiated:(id)arg0;
- (void)_listScrollingCompleted:(id)arg0;
- (void)_startRepeatTimerMovingDown:(char)arg0;
- (void)_slowToStopRepeatTimerMovingDown:(char)arg0;
- (char)_scrollUp:(id)arg0;
- (void)_performScrollInitiationActivities;
- (char)_shouldEatUnhandledDirectionalEvent:(NSObject *)arg0;
- (char)_scrollDown:(id)arg0;
- (void)_setNewScrollIndex:(long)arg0;
- (void)_ensureSelectionFocusable;
- (void)_stopRepeatTimer;
- (void)_updateScrollPosition;
- (void)_enterCurrentSelection;
- (void)setLastItemCentered:(char)arg0;
- (char)lastItemCentered;
- (void)_saveCurrentSelectionIndex;
- (void)_restoreCurrentSelectionIndex;
- (long)_backwardIndexForRowCount:(long)arg0 hitBoundary:(char *)arg1;
- (long)_forwardIndexForRowCount:(long)arg0 hitBoundary:(char *)arg1;
- (void)_startDownwardAutoScroll:(id)arg0;
- (void)_startUpwardAutoScroll:(id)arg0;
- (void)_pokeTimerFired:(id)arg0;
- (void)_repeatDownTimerFired:(id)arg0;
- (void)_repeatUpTimerFired:(id)arg0;
- (double)_calculateRepeatRate;
- (char)avoidsInhibitingFocus;
- (void)setAvoidsInhibitingFocus:(char)arg0;
- (void)_focusCursorFrameChanged:(NSNotification *)arg0;
- (void)_updateCursorFrame;
- (long)_gridIndexForDataIndexPath:(NSIndexPath *)arg0;
- (NSObject *)_dataIndexPathFromGridIndex:(long)arg0 sectionIndex:(long *)arg1;
- (void)list:(BRListControl *)arg0 willDisplayItemAtIndexPath:(NSIndexPath *)arg1;
- (void)list:(BRListControl *)arg0 willUnFocusItemAtIndexPath:(NSIndexPath *)arg1;
- (void)list:(BRListControl *)arg0 didUnFocusItemAtIndexPath:(NSIndexPath *)arg1;
- (unsigned int)_countOfHeadersInRange:(struct _NSRange)arg0;
- (void)_updateCursor:(NSObject *)arg0 withCursorFrame:(struct CGRect)arg1;
- (long)_dataIndexFromGridIndex:(long)arg0;
- (long)_gridIndexForDataIndex:(long)arg0;
- (NSString *)selectedIndexPath;
- (void)dealloc;
- (BRListView *)init;
- (void)reload;
- (NSString *)accessibilityLabel;
- (NSObject *)indexPathsForRowsInRect:(struct CGRect)arg0;
- (long)selection;
- (long)selectedIndex;
- (char)isAccessibilityElement;
- (BRBlueGlowSelectionLozengeLayer *)cursor;
- (void)setCursor:(BRBlueGlowSelectionLozengeLayer *)arg0;
- (void).cxx_destruct;
- (char)didSelectItemAtIndex:(long)arg0;
- (char)isDimmed;
- (void)setDimmed:(char)arg0;
- (BRControl *)itemAtIndex:(long)arg0;

@end
