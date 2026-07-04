/* Runtime dump - BRListControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRBlueGlowSelectionLozengeLayerBacking, BREvent, BRGridControl, BRScrollControl, BRSelectionLozengeLayer, ListAnimationDelegate;
@interface BRListControl : BRControl
{
    NSArray * _providers;
    BRSelectionLozengeLayer * _topWidget;
    BRBlueGlowSelectionLozengeLayerBacking * _bottomWidget;
    BRScrollControl * _scroller;
    BRGridControl * _list;
    ListAnimationDelegate * _animationDelegate;
    NSTimer * _pokeTimer;
    NSTimer * _delayTimer;
    NSTimer * _repeatTimer;
    double _repeatStart;
    double _repeatAccumulator;
    long _scrollSelection;
    long _savedSelection;
    int _style;
    char _handlingProviderChange;
    char _showsDividers;
    char _firstDividerVisible;
    char _showBackingLayer;
    char _selectionEntered;
    char _widgetHidden;
    char _needsUpdate;
    char _turboEngaged;
    char _movingDown;
}

@property (readonly) BRScrollControl * scrollControl;
@property (nonatomic) char usesDimmedUnfocusedBackground;

- (char)brEventAction:(BREvent *)arg0;
- (void)layoutSubcontrols;
- (void)controlWasDeactivated;
- (void)controlWasActivated;
- (long)dataCount;
- (BRScrollControl *)scrollControl;
- (void)controlWasFocused;
- (void)controlWasUnfocused;
- (void)setProviders:(NSArray *)arg0;
- (NSObject *)selectedObject;
- (NSArray *)providers;
- (NSObject *)visibleRowsAndRange:(struct _NSRange *)arg0;
- (void)setDatasource:(YTSearchVideoDataSource *)arg0;
- (void)setUsesDimmedUnfocusedBackground:(char)arg0;
- (void)setCurrentDividersHidden:(char)arg0;
- (void)setShowsDividers:(char)arg0;
- (void)setName:(NSString *)arg0 forProvider:(NSObject *)arg1;
- (NSObject *)providerForDataAtIndex:(long)arg0 providerIndex:(long *)arg1;
- (void)clearSavedSelection;
- (void)updateSavedSelection;
- (void)addDividerAtIndex:(long)arg0 withLabel:(NSString *)arg1;
- (void)setDisplaysSelectionWidget:(char)arg0;
- (NSObject *)datasource;
- (char)showsDividers;
- (float)listHeightToMaximum:(float)arg0;
- (void)_updatePersistentSavedSelection;
- (void)_restorePersistentSavedSelection;
- (void)removeDividerAtIndex:(long)arg0;
- (void)removeDividers;
- (void)_leaveCurrentSelection;
- (void)_gridDataWillBeUpdated:(id)arg0;
- (void)_gridDataUpdated:(id)arg0;
- (void)_listScrollingInitiated:(id)arg0;
- (void)_listScrollingCompleted:(id)arg0;
- (void)setSelectionLozengeStyle:(int)arg0;
- (void)setShowsWidgetBackingLayer:(char)arg0;
- (char)displaysSelectionWidget;
- (void)_startRepeatTimerMovingDown:(char)arg0;
- (void)_slowToStopRepeatTimerMovingDown:(char)arg0;
- (char)_scrollUp:(id)arg0;
- (void)_performScrollInitiationActivities;
- (char)_shouldEatUnhandledDirectionalEvent:(NSObject *)arg0;
- (char)_scrollDown:(id)arg0;
- (void)_updateProviders;
- (char)usesDimmedUnfocusedBackground;
- (long)_scrollIndexForDataIndex:(long)arg0;
- (void)_setNewScrollIndex:(long)arg0;
- (void)_ensureSelectionFocusable;
- (long)_dataIndexFromScrollIndex:(long)arg0;
- (float)_maxWidgetBottomGlowHeight;
- (float)_maxWidgetTopGlowHeight;
- (void)_updateGrid;
- (void)_stopRepeatTimer;
- (float)_maxWidgetEdgeGlowWidth;
- (void)_updateScrollPosition;
- (void)_enterCurrentSelection;
- (int)selectionLozengeStyle;
- (char)showsWidgetBackingLayer;
- (void)setLastItemCentered:(char)arg0;
- (char)lastItemCentered;
- (NSObject *)_legacyProvider;
- (NSObject *)_findDividerProviderForProvider:(NSObject *)arg0;
- (void)setFirstDividerVisible:(char)arg0;
- (char)firstDividerVisible;
- (void)_updateWidgetFrame;
- (void)_saveCurrentSelectionIndex;
- (void)_refillList;
- (void)_restoreCurrentSelectionIndex;
- (void)_hideFirstDividerInDividedProviders:(id)arg0;
- (long)_backwardIndexForRowCount:(long)arg0 hitBoundary:(char *)arg1;
- (long)_forwardIndexForRowCount:(long)arg0 hitBoundary:(char *)arg1;
- (void)_performScrollTerminationActivities;
- (void)_startDownwardAutoScroll:(id)arg0;
- (void)_startUpwardAutoScroll:(id)arg0;
- (void)_pokeTimerFired:(id)arg0;
- (void)_repeatDownTimerFired:(id)arg0;
- (void)_repeatUpTimerFired:(id)arg0;
- (double)_calculateRepeatRate;
- (void)_postSelectionFinalizedNotification;
- (void)_updateWidgetFrameForWidget:(id)arg0 withItemFrame:(struct CGRect)arg1;
- (void)setTopMargin:(float)arg0;
- (void)dealloc;
- (BRListControl *)init;
- (void)reload;
- (NSString *)accessibilityLabel;
- (long)selection;
- (void)setSelection:(long)arg0;
- (void).cxx_destruct;
- (void)setProvider:(NSObject *)arg0;
- (void)setBottomMargin:(float)arg0;

@end
