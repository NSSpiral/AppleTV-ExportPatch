/* Runtime dump - MKUserTrackingBarButtonItem
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKUserTrackingBarButtonItem : UIBarButtonItem <MKUserTrackingButtonTarget>
{
    char _hasCustomAssociatedView;
    UIButton * _customButton;
    _MKUserTrackingButtonController * _controller;
    _MKUserTrackingButton * _userTrackingButton;
    char _isLegacy;
    UIImage * _trackingEmptyImage;
    UIImage * _trackingNoneImage;
    UIImage * _trackingFollowImage;
    UIImage * _trackingFollowWithHeadingImage;
    UIToolbar * _toolbar;
    UINavigationBar * _navigationBar;
    UIView * _associatedView;
}

@property (retain, nonatomic) MKMapView * mapView;
@property (nonatomic) char selectsWhenTracking;
@property (nonatomic) int _state;
@property (retain, nonatomic) UIToolbar * _toolbar;
@property (retain, nonatomic) UINavigationBar * _navigationBar;
@property (retain, nonatomic) UIView * _associatedView;
@property (retain, nonatomic) <MKUserTrackingView> * _userTrackingView;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (Class)_activityIndicatorClass;

- (MKMapView *)mapView;
- (void)_goToNextMode:(id)arg0;
- (UIImage *)_trackingNoneImage;
- (void)set_associatedView:(UIView *)arg0;
- (MKUserTrackingBarButtonItem *)initWithMapView:(MKMapView *)arg0;
- (char)_selectsWhenTracking;
- (void)_setSelectsWhenTracking:(char)arg0;
- (UIImage *)_imageForState:(int)arg0 controlState:(unsigned int)arg1;
- (UIImage *)_trackingEmptyImage;
- (UIImage *)_trackingFollowImage;
- (UIImage *)_trackingFollowWithHeadingImage;
- (UIView *)_associatedView;
- (<MKUserTrackingView> *)_userTrackingView;
- (void)_setUserTrackingView:(NSObject *)arg0;
- (void)set_toolbar:(UIToolbar *)arg0;
- (void)_repositionViews;
- (void)set_navigationBar:(UINavigationBar *)arg0;
- (int)_styleForState:(int)arg0;
- (void)_updateForState:(int)arg0;
- (char)_isHighlightedForState:(int)arg0;
- (UIImage *)_imageForUserTrackingMode:(int)arg0;
- (void)_setImage:(UIImage *)arg0 forUserTrackingMode:(int)arg1;
- (id)_landscapeImagePhoneForUserTrackingMode:(int)arg0;
- (void)_setLandscapeImagePhone:(id)arg0 forUserTrackingMode:(int)arg1;
- (void)setMapView:(MKMapView *)arg0;
- (UIToolbar *)_toolbar;
- (UINavigationBar *)_navigationBar;
- (void)dealloc;
- (MKUserTrackingBarButtonItem *)init;
- (void)setEnabled:(char)arg0;
- (NSObject *)createViewForNavigationItem:(NSObject *)arg0;
- (int)_state;
- (char)_isInMiniBar;
- (id)createViewForToolbar:(id)arg0;
- (void)observeValueForKeyPath:(NSString *)arg0 ofObject:(NSObject *)arg1 change:(NSDictionary *)arg2 context:(void *)arg3;
- (void)_setState:(int)arg0;
- (int)_activityIndicatorStyle;
- (void).cxx_destruct;

@end
