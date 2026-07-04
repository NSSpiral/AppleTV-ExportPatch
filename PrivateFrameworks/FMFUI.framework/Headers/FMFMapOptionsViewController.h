/* Runtime dump - FMFMapOptionsViewController
 * Image: /System/Library/PrivateFrameworks/FMFUI.framework/FMFUI
 */

@interface FMFMapOptionsViewController : UIViewController
{
    <FMFMapOptionsViewControllerDelegate> * _delegate;
    UIButton * _mapAttributionButton;
    UIView * _topTapView;
    UISegmentedControl * _segmentedControl;
    UIView * _bottomWhitePane;
    MKMapAttribution * _mapAttribution;
}

@property (weak, nonatomic) <FMFMapOptionsViewControllerDelegate> * delegate;
@property (retain, nonatomic) UIButton * mapAttributionButton;
@property (retain, nonatomic) UIView * topTapView;
@property (retain, nonatomic) UISegmentedControl * segmentedControl;
@property (retain, nonatomic) UIView * bottomWhitePane;
@property (retain, nonatomic) MKMapAttribution * mapAttribution;

- (void)setDelegate:(<FMFMapOptionsViewControllerDelegate> *)arg0;
- (FMFMapOptionsViewController *)init;
- (<FMFMapOptionsViewControllerDelegate> *)delegate;
- (void)awakeFromNib;
- (void)viewDidLoad;
- (UISegmentedControl *)segmentedControl;
- (void).cxx_destruct;
- (struct CGSize)paneSize;
- (void)_dismiss:(_UIInputViewSetPlacementDragToDismiss *)arg0;
- (UIView *)topTapView;
- (UIButton *)mapAttributionButton;
- (MKMapAttribution *)mapAttribution;
- (void)setMapAttribution:(MKMapAttribution *)arg0;
- (void)openInMaps:(id)arg0;
- (void)attributionButtonPressed:(id)arg0;
- (void)segmentedControlChanged:(NSNotification *)arg0;
- (void)setMapAttributionButton:(UIButton *)arg0;
- (void)setTopTapView:(UIView *)arg0;
- (void)setSegmentedControl:(UISegmentedControl *)arg0;
- (UIView *)bottomWhitePane;
- (void)setBottomWhitePane:(UIView *)arg0;

@end
