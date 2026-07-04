/* Runtime dump - BRGridControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRControl, BREvent, BRProviderGroup;
@interface BRGridControl : BRControl
{
    BRProviderGroup * _group;
    BRControl * _requester;
    struct _NSRange _range;
    float _lastGapHeight;
    double _heightToRange;
    double _allRowsHeight;
    float _singleControlHeight;
    char _allRowsAreSameHeight;
    float _allColumnWidths;
    long _columnCount;
    struct ? _horizontalGap;
    struct ? _verticalGap;
    float _leftMargin;
    float _rightMargin;
    float _bottomMargin;
    float _bottomMarginFactor;
    float _topMargin;
    float _topMarginFactor;
    char _wrapsNavigation;
    char _explicitlyAcceptsFocus;
}

- (char)brEventAction:(BREvent *)arg0;
- (void)setAcceptsFocus:(char)arg0;
- (void)layoutSubcontrols;
- (NSObject *)visibleControlsWithRange:(struct _NSRange *)arg0;
- (long)dataCount;
- (void)setHorizontalGap:(struct ?)arg0;
- (void)setVerticalGap:(struct ?)arg0;
- (void)windowMaxBoundsChanged;
- (NSArray *)accessibilityControls;
- (void)setVerticalMargins:(float)arg0;
- (void)setProviders:(NSArray *)arg0;
- (NSArray *)providers;
- (void)focusDirectlyOnControl:(BRControl *)arg0;
- (id)initialFocus;
- (BRControl *)focusedControlForEvent:(BREvent *)arg0 focusPoint:(struct CGPoint *)arg1;
- (void)focusControlAtIndex:(long)arg0;
- (NSObject *)visibleControlAtIndex:(long)arg0;
- (struct CGRect)controlFrameAtIndex:(NSObject *)arg0;
- (struct ?)verticalGap;
- (float)_rowHeightForControlsInRange:(struct _NSRange)arg0 controls:(NSArray *)arg1;
- (NSObject *)providerForDataAtIndex:(long)arg0 providerIndex:(long *)arg1;
- (struct ?)horizontalGap;
- (unsigned int)countOfCells;
- (unsigned int)indexInCellsOfObject:(NSObject *)arg0;
- (NSObject *)objectInCellsAtIndex:(unsigned int)arg0;
- (void)visibleScrollRectChanged;
- (NSObject *)_createControlsInRange:(struct _NSRange)arg0;
- (void)setWrapsNavigation:(char)arg0;
- (void)_providerDataSetChanged:(NSNotification *)arg0;
- (void)_providerModified:(id)arg0;
- (NSObject *)_controlsInRange:(struct _NSRange)arg0;
- (float)_positionOfColumn:(long)arg0 inRowWidth:(float)arg1 cellWidth:(float *)arg2;
- (float)_heightOfControlAtIndex:(long)arg0 controls:(NSArray *)arg1;
- (long)_indexOfFocusedControl;
- (NSObject *)_setControlRange:(struct _NSRange)arg0 withHeightToRange:(double)arg1;
- (double)_heightToRange;
- (long)_controlsInHeight:(double)arg0 startingAt:(long)arg1 actualHeight:(double *)arg2;
- (long)_controlsInHeightBackwards:(double)arg0 startingAt:(long)arg1 actualHeight:(double *)arg2;
- (double)_heightOfRowsInRange:(struct _NSRange)arg0 includeVerticalGap:(char)arg1 controls:(NSArray *)arg2;
- (void)_frameRowInRange:(struct _NSRange)arg0 rowFrame:(struct CGRect)arg1 controls:(struct CGSize)arg2;
- (double)_totalHeight;
- (NSObject *)_controlAtIndex:(long)arg0 controls:(NSArray *)arg1;
- (void)setAllColumnWidths:(float)arg0;
- (void)setProviderRequester:(id)arg0;
- (id)providerRequester;
- (float)heightToMaximum:(float)arg0;
- (float)positionOfColumn:(long)arg0;
- (float)heightOfControlAtIndex:(long)arg0;
- (char)wrapsNavigation;
- (void)setAllRowsAreSameHeight:(char)arg0;
- (char)allRowsAreSameHeight;
- (struct CGRect)_frameForControlAtIndex:(NSObject *)arg0 controls:(SEL)arg1;
- (char)controlAcceptsFocusAtIndex:(long)arg0;
- (struct CGRect)controlFocusFrameAtIndex:(NSObject *)arg0;
- (struct CGRect)_frameForControlAtIndex:(NSObject *)arg0 rowFrame:(SEL)arg1 controls:(long)arg2;
- (void)_updateControlsInRange:(struct _NSRange)arg0 controls:(NSArray *)arg1;
- (void)setTopMargin:(float)arg0;
- (void)dealloc;
- (void)reloadData;
- (BRGridControl *)init;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (void)setRightMargin:(float)arg0;
- (float)rightMargin;
- (long)columnCount;
- (void)setColumnCount:(long)arg0;
- (void).cxx_destruct;
- (void)setProvider:(NSObject *)arg0;
- (float)leftMargin;
- (void)setLeftMargin:(float)arg0;
- (long)rowCount;
- (void)setBottomMargin:(float)arg0;
- (struct _NSRange)visibleRange;

@end
