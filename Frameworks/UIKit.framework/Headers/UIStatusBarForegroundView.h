/* Runtime dump - UIStatusBarForegroundView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIStatusBarForegroundView : UIView
{
    char _usesVerticalLayout;
    id _itemIsEnabled;
    id _layoutManagers;
    int _ignoreDataLevel;
    NSMutableArray * _actionAnimationStack;
    UIStatusBarComposedData * _pendedData;
    int _pendedActions;
    int _idiom;
    UIStatusBarForegroundStyleAttributes * _foregroundStyle;
}

@property (nonatomic) int idiom;
@property (readonly, nonatomic) UIStatusBarForegroundStyleAttributes * foregroundStyle;

- (void)dealloc;
- (char)pointInside:(struct CGPoint)arg0 withEvent:(Event *)arg1;
- (void)setFrame:(struct CGRect)arg0;
- (void)setBounds:(struct CGRect)arg0;
- (UIStatusBarForegroundStyleAttributes *)foregroundStyle;
- (int)idiom;
- (void)startIgnoringData;
- (void)_cleanUpAfterDataChange;
- (void)_reflowItemViewsWithDuration:(double)arg0 preserveHistory:(char)arg1;
- (char)ignoringData;
- (void)_setStatusBarData:(NSData *)arg0 actions:(int)arg1 animated:(char)arg2;
- (void)stopIgnoringData:(char)arg0;
- (void)_reflowItemViewsCrossfadingCenterWithDuration:(double)arg0;
- (NSArray *)_computeVisibleItemsPreservingHistory:(char)arg0;
- (void)_cleanUpAfterSimpleReflow;
- (void)setStatusBarData:(struct ?)arg0 actions:(int)arg1 animated:(char)arg2;
- (float)edgePadding;
- (char)_tryToPlaceItem:(NSObject *)arg0 inItemArray:(NSArray *)arg1 layoutManager:(_UIFieldEditorLayoutManager *)arg2 roomRemaining:(float *)arg3 allowSwap:(char)arg4 swappedItem:(id *)arg5;
- (void)setPersistentAnimationsEnabled:(char)arg0;
- (void)reflowItemViews:(char)arg0;
- (UIStatusBarForegroundView *)initWithFrame:(struct CGRect)arg0 foregroundStyle:(struct CGSize)arg1 usesVerticalLayout:(char)arg2;
- (void)reflowItemViewsCrossfadingCenter:(id)arg0 duration:(double)arg1;
- (void)reflowItemViewsForgettingEitherSideItemHistory;
- (void)setIdiom:(int)arg0;

@end
