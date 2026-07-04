/* Runtime dump - UIKeyboardMenuView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardMenuView : UIView <UITableViewDataSource, UITableViewDelegate, UIDimmingViewDelegate>
{
    UIInputSwitcherTableView * m_table;
    UIInputSwitcherShadowView * m_shadowView;
    UIInputSwitcherSelectionExtraView * m_selExtraView;
    struct CGRect m_referenceRect;
    float m_pointerOffset;
    char m_scrollable;
    char m_startAutoscroll;
    char m_scrolling;
    char m_shouldFade;
    struct CGPoint m_point;
    double m_scrollStartTime;
    int m_scrollDirection;
    NSTimer * m_scrollTimer;
    int m_visibleRows;
    int m_firstVisibleRow;
    int m_mode;
    UIDimmingView * m_dimmingView;
    char _usesStraightLeftEdge;
    char _usesDarkTheme;
    UIKBTree * _referenceKey;
    UIKeyboardLayoutStar * _layout;
}

@property (nonatomic) int mode;
@property (readonly) char usesTable;
@property (nonatomic) char usesStraightLeftEdge;
@property (nonatomic) char usesDarkTheme;
@property (nonatomic) UIKBTree * referenceKey;
@property (nonatomic) UIKeyboardLayoutStar * layout;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSString *)viewThatContainsBaseKey;

- (void)hide;
- (void)show;
- (UIKeyboardMenuView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)setNeedsDisplay;
- (void)setFrame:(struct CGRect)arg0;
- (void)removeFromSuperview;
- (void)tableView:(UITableView *)arg0 willDisplayCell:(UITableViewCell *)arg1 forRowAtIndexPath:(NSIndexPath *)arg2;
- (float)tableView:(UITableView *)arg0 heightForRowAtIndexPath:(NSIndexPath *)arg1;
- (NSObject *)tableView:(UITableView *)arg0 willSelectRowAtIndexPath:(NSIndexPath *)arg1;
- (NSObject *)tableView:(UITableView *)arg0 willDeselectRowAtIndexPath:(NSIndexPath *)arg1;
- (void)tableView:(UITableView *)arg0 didSelectRowAtIndexPath:(NSIndexPath *)arg1;
- (void)scrollViewDidScroll:(UIScrollView *)arg0;
- (int)tableView:(UITableView *)arg0 numberOfRowsInSection:(int)arg1;
- (UITableViewCell *)tableView:(UITableView *)arg0 cellForRowAtIndexPath:(NSIndexPath *)arg1;
- (void)touchesBegan:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesMoved:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesEnded:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesCancelled:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)setRenderConfig:(UIKBRenderConfig *)arg0;
- (void)applicationWillSuspend:(id)arg0;
- (UIFont *)font;
- (UIKeyboardLayoutStar *)layout;
- (RMTable *)table;
- (void)setMode:(int)arg0;
- (int)mode;
- (void)setLayout:(UIKeyboardLayoutStar *)arg0;
- (char)isVisible;
- (UIDimmingView *)dimmingView;
- (int)numberOfItems;
- (void)dimmingViewWasTapped:(id)arg0;
- (void)showAsPopupForKey:(NSString *)arg0 inLayout:(NSObject *)arg1;
- (void)fadeWithDelay:(double)arg0;
- (void)fade;
- (void)updateSelectionWithPoint:(struct CGPoint)arg0;
- (void)selectItemAtPoint:(struct CGPoint)arg0;
- (void)fadeAnimationDidStop:(id)arg0 finished:(id /* block */)arg1 context:(NSObject *)arg2;
- (void)stopAnyAutoscrolling;
- (void)autoscrollTimerFired:(id)arg0;
- (void)showAsHUD;
- (char)usesStraightLeftEdge;
- (char)usesDarkTheme;
- (id)maskForShadowViewBlurredBackground;
- (char)usesTable;
- (char)usesShadowView;
- (struct CGSize)preferredSize;
- (void)setUsesStraightLeftEdge:(char)arg0;
- (void)setupShadowViewWithSize:(struct CGSize)arg0;
- (char)usesDimmingView;
- (int)defaultSelectedIndex;
- (void)highlightRow:(int)arg0;
- (void)insertSelExtraView;
- (void)performShowAnimation;
- (int)_internationalKeyRoundedCornerInLayout:(NSObject *)arg0;
- (void)setReferenceKey:(UIKBTree *)arg0;
- (void)setKeyboardDimmed:(char)arg0;
- (UIKBTree *)referenceKey;
- (id)predictiveSwitch;
- (void)toggleKeyboardPredictionPreference;
- (void)_delayedFade;
- (void)setNeedsDisplayForCell:(NSObject *)arg0;
- (void)setNeedsDisplayForTopBottomCells;
- (void)endScrolling:(id)arg0;
- (void)didSelectItemAtIndex:(int)arg0;
- (int)indexForIndexPath:(NSIndexPath *)arg0;
- (NSObject *)localizedTitleForItemAtIndex:(int)arg0;
- (NSObject *)fontForItemAtIndex:(int)arg0;
- (NSObject *)subtitleForItemAtIndex:(int)arg0;
- (NSObject *)subtitleFontForItemAtIndex:(int)arg0;
- (void)setHighlightForRowAtIndexPath:(NSIndexPath *)arg0 highlight:(char)arg1;
- (void)setUsesDarkTheme:(char)arg0;
- (NSObject *)titleForItemAtIndex:(int)arg0;
- (UIFont *)subtitleFont;
- (char)centerPopUpOverKey;
- (float)minYOfLastTableCellForSelectionExtraView;
- (struct CGRect)popupRect;

@end
