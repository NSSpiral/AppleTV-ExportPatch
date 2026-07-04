/* Runtime dump - ATVCarouselView
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class ATVCarouselViewUIOpContext, BRControl, BREvent;
@interface ATVCarouselView : BRControl
{
    struct ? _delegateFlags;
    char _swipeControlsCursor;
    char _subfocusChangeTriggersRelayout;
    char _cyclesItems;
    char _autoAnimates;
    char _editing;
    char __isAutoAnimating;
    char __goingForward;
    struct ? _preferredHeight;
    struct ? _preferredWidth;
    <ATVCarouselViewDataSource> * _dataSource;
    <ATVCarouselViewDelegate> * _delegate;
    <ATVCarouselViewUIDelegate> * _uiDelegate;
    int __currentIndex;
    NSArray * __presentedItems;
    NSTimer * __delayedAnimationTimer;
    ATVCarouselViewUIOpContext * __uiOpContext;
    struct _NSRange __presentedItemsRange;
    struct _NSRange __focusableRange;
}

@property (nonatomic) char swipeControlsCursor;
@property (nonatomic) char subfocusChangeTriggersRelayout;
@property (nonatomic) char cyclesItems;
@property (nonatomic) char autoAnimates;
@property (nonatomic) struct ? preferredHeight;
@property (nonatomic) struct ? preferredWidth;
@property (nonatomic) char editing;
@property (nonatomic) int selectedIndex;
@property (readonly, nonatomic) BRControl * selectedItem;
@property (nonatomic) <ATVCarouselViewDataSource> * dataSource;
@property (nonatomic) <ATVCarouselViewDelegate> * delegate;
@property (nonatomic) <ATVCarouselViewUIDelegate> * uiDelegate;
@property (nonatomic) char _isAutoAnimating;
@property (nonatomic) char _goingForward;
@property (nonatomic) struct _NSRange _presentedItemsRange;
@property (nonatomic) struct _NSRange _focusableRange;
@property (nonatomic) int _currentIndex;
@property (retain, nonatomic) NSArray * _presentedItems;
@property (nonatomic) NSTimer * _delayedAnimationTimer;
@property (retain, nonatomic) ATVCarouselViewUIOpContext * _uiOpContext;

- (char)brEventAction:(BREvent *)arg0;
- (void)_focusChanged:(NSNotification *)arg0;
- (void)layoutSubcontrols;
- (void)controlWasDeactivated;
- (void)controlWasActivated;
- (void)windowMaxBoundsChanged;
- (void)controlWasFocused;
- (void)controlWasUnfocused;
- (NSString *)accessibilityRangeString;
- (void)setAutoAnimates:(char)arg0;
- (void)setCyclesItems:(char)arg0;
- (void)setSelectedIndexSimulatingEvent:(int)arg0;
- (char)accessibilityOutputsRangeForChildren;
- (void)setSubfocusChangeTriggersRelayout:(char)arg0;
- (char)_setSelectedIndex:(int)arg0;
- (void)focusDirectlyOnControl:(BRControl *)arg0;
- (void)setSwipeControlsCursor:(char)arg0;
- (void)setPreferredHeight:(struct ?)arg0;
- (void)setPreferredWidth:(struct ?)arg0;
- (id)SelectedIndexBinding;
- (void)_updateBoundSelectedIndex;
- (void)bindSelectedIndexBindingToObject:(NSObject *)arg0 withKeyPath:(NSString *)arg1 options:(NSDictionary *)arg2;
- (void)set_goingForward:(char)arg0;
- (void)set_presentedItems:(NSArray *)arg0;
- (void)_setUIOpContext:(NSObject *)arg0;
- (void)_scheduleRefreshWithType:(int)arg0;
- (void)_startAnimation;
- (NSObject *)_makeUIOpContextWithType:(int)arg0;
- (struct _NSRange)_presentedItemsRange;
- (int)_currentIndex;
- (int)_mapPresentedItemsIndex:(int)arg0;
- (NSArray *)_presentedItems;
- (void)_bringCurrentIndexWithinFocusableRange;
- (struct _NSRange)_focusableRange;
- (void)set_presentedItemsRange:(struct _NSRange)arg0;
- (void)set_focusableRange:(struct _NSRange)arg0;
- (void)set_currentIndex:(int)arg0;
- (ATVCarouselViewUIOpContext *)_uiOpContext;
- (char)_canEditSelectedItem;
- (void)_beginEditing;
- (void)_endEditingWithItemRemoved:(char)arg0;
- (NSObject *)_controlAtIndex:(unsigned int)arg0;
- (struct CGRect)_preferredItemBounds;
- (void)_processUIOpForItems:(NSArray *)arg0 startingAtPositionIndex:(unsigned int)arg1 context:(NSObject *)arg2 waitingForCompletion:(char *)arg3;
- (char)_handleRearrangeEvent:(NSObject *)arg0;
- (char)_goingForward;
- (void)_setDelayedAnimationTimer:(NSObject *)arg0;
- (char)_canGoForward;
- (char)_canGoBackward;
- (void)_trickleAnimation:(NSObject *)arg0;
- (char)_isAutoAnimating;
- (char)autoAnimates;
- (void)set_isAutoAnimating:(char)arg0;
- (char)cyclesItems;
- (char)subfocusChangeTriggersRelayout;
- (char)swipeControlsCursor;
- (int)_targetIndexForMoveFromIndex:(int)arg0 toProposedIndex:(int)arg1;
- (void)_moveControlAtIndex:(int)arg0 toIndex:(int)arg1;
- (NSTimer *)_delayedAnimationTimer;
- (struct ?)preferredHeight;
- (struct ?)preferredWidth;
- (void)dealloc;
- (void)setDataSource:(<ATVCarouselViewDataSource> *)arg0;
- (void)setDelegate:(<ATVCarouselViewDelegate> *)arg0;
- (ATVCarouselView *)init;
- (void)reload;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (<ATVCarouselViewDataSource> *)dataSource;
- (<ATVCarouselViewDelegate> *)delegate;
- (char)isEditing;
- (void)setEditing:(char)arg0;
- (char)beginEditing;
- (void)endEditing;
- (int)selectedIndex;
- (void)setSelectedIndex:(int)arg0;
- (void)setUIDelegate:(NSObject *)arg0;
- (BRControl *)selectedItem;
- (void).cxx_destruct;
- (void)_stopAnimation;
- (void)removeItemAtIndex:(int)arg0;
- (char)_handleEvent:(NSObject *)arg0;
- (<ATVCarouselViewUIDelegate> *)uiDelegate;

@end
