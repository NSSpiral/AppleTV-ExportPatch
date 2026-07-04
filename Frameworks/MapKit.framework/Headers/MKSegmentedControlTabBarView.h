/* Runtime dump - MKSegmentedControlTabBarView
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKSegmentedControlTabBarView : UIView <MKStackingViewControllerSelectorView>
{
    MKViewWithHairline * _separator;
    UIVisualEffectView * _blurView;
    char _isBlurred;
    id _didChangeSelectedSegmentIndex;
    UISegmentedControl * _segmentedControl;
}

@property (readonly, nonatomic) UISegmentedControl * segmentedControl;
@property (copy, nonatomic) id didChangeSelectedSegmentIndex;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (nonatomic) char isBlurred;

- (void)updateSelectorView:(MKStackingViewController *)arg0;
- (char)isBlurred;
- (void)setIsBlurred:(char)arg0;
- (void)_segmentSelectionDidChange;
- (NSObject *)didChangeSelectedSegmentIndex;
- (void)setContentFromViewController:(BRController *)arg0;
- (void)setDidChangeSelectedSegmentIndex:(NSObject *)arg0;
- (MKSegmentedControlTabBarView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (UISegmentedControl *)segmentedControl;
- (void).cxx_destruct;

@end
