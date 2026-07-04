/* Runtime dump - UIKeyboardCandidateSortControl
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardCandidateSortControl : UIView
{
    UIKeyboardCandidateBarSegmentControl * _segmentedControl;
    int _candidatesVisualStyle;
    char _legacyAlertAppearance;
    UIKBThemedView * _themedView;
}

@property (readonly) UISegmentedControl * segmentedControl;
@property (retain, nonatomic) UIKBThemedView * themedView;

+ (char)_preventsAppearanceProxyCustomization;

- (void)dealloc;
- (void)layoutSubviews;
- (void)_setRenderConfig:(NSObject *)arg0;
- (void)setThemedView:(UIKBThemedView *)arg0;
- (UIKBThemedView *)themedView;
- (UIKeyboardCandidateSortControl *)initWithFrame:(struct CGRect)arg0 candidatesVisualStyle:(struct CGSize)arg1 legacyAlertAppearance:(char)arg2;
- (UISegmentedControl *)segmentedControl;
- (void)setSortControlTitles:(id)arg0;
- (void)selectPreviousSegment;
- (void)selectNextSegment;
- (void)updateTitleTextAttributes;
- (void)addSegmentedControlWithFrame:(struct CGRect)arg0;
- (char)needsToUpdateSortControlForTitles:(id)arg0;

@end
