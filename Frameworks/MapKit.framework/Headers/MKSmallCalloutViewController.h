/* Runtime dump - MKSmallCalloutViewController
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKSmallCalloutViewController : UIViewController <CalloutViewControllerProtocol>
{
    MKSmallCalloutView * _smallCalloutView;
    <MKSmallCalloutViewControllerDelegate> * _delegate;
}

@property (weak, nonatomic) <MKSmallCalloutViewControllerDelegate> * delegate;
@property (nonatomic) float maximumWidth;
@property (retain, nonatomic) MKCalloutBackgroundView * calloutBackgroundView;
@property (nonatomic) unsigned int mapDisplayStyle;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (copy, nonatomic) NSString * calloutTitle;
@property (copy, nonatomic) NSString * calloutSubtitle;
@property (retain, nonatomic) UIView * leftView;
@property (retain, nonatomic) UIView * rightView;
@property (retain, nonatomic) UIView * detailView;

+ (struct CGSize)defaultSize;

- (NSString *)calloutSubtitle;
- (void)setCalloutSubtitle:(NSString *)arg0 animated:(char)arg1;
- (void)setDetailView:(UIView *)arg0 animated:(char)arg1;
- (void)beginMapsTransitionMovingSideways;
- (MKSmallCalloutView *)_smallCalloutView;
- (UIView *)detailView;
- (MKCalloutBackgroundView *)calloutBackgroundView;
- (void)setCalloutBackgroundView:(MKCalloutBackgroundView *)arg0;
- (char)canDisplayCompleteTitleWhenExpanded;
- (void)setCalloutSubtitle:(NSString *)arg0;
- (void)setDetailView:(UIView *)arg0;
- (void)setDelegate:(<MKSmallCalloutViewControllerDelegate> *)arg0;
- (<MKSmallCalloutViewControllerDelegate> *)delegate;
- (void)reset;
- (void)setMaximumWidth:(float)arg0;
- (float)maximumWidth;
- (struct CGSize)preferredContentSize;
- (MKSmallCalloutViewController *)initWithNibName:(NSString *)arg0 bundle:(NSObject *)arg1;
- (void)loadView;
- (void)viewDidLoad;
- (void)viewDidAppear:(char)arg0;
- (void)setLeftView:(UIView *)arg0 animated:(char)arg1;
- (void)setRightView:(UIView *)arg0 animated:(char)arg1;
- (void)setLeftView:(UIView *)arg0;
- (void)setRightView:(UIView *)arg0;
- (UIView *)leftView;
- (UIView *)rightView;
- (void).cxx_destruct;
- (void)updatePreferredContentSize;
- (NSString *)calloutTitle;
- (void)setCalloutTitle:(NSString *)arg0;
- (unsigned int)mapDisplayStyle;
- (void)setMapDisplayStyle:(unsigned int)arg0;

@end
