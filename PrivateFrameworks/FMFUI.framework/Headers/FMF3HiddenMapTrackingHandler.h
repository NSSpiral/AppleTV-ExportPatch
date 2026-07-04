/* Runtime dump - FMF3HiddenMapTrackingHandler
 * Image: /System/Library/PrivateFrameworks/FMFUI.framework/FMFUI
 */

@interface FMF3HiddenMapTrackingHandler : NSObject <MKMapViewDelegate>
{
    MKMapView * _hiddenMapView;
    <FMF3HiddenMapTrackingHandlerDelegate> * _delegate;
}

@property (retain, nonatomic) MKMapView * hiddenMapView;
@property (weak, nonatomic) <FMF3HiddenMapTrackingHandlerDelegate> * delegate;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)mapView:(MKMapView *)arg0 didChangeUserTrackingMode:(int)arg1 animated:(char)arg2;
- (void)dealloc;
- (void)setDelegate:(<FMF3HiddenMapTrackingHandlerDelegate> *)arg0;
- (<FMF3HiddenMapTrackingHandlerDelegate> *)delegate;
- (FMF3HiddenMapTrackingHandler *)initWithView:(WKContentView *)arg0;
- (void).cxx_destruct;
- (MKMapView *)hiddenMapView;
- (void)setHiddenMapView:(MKMapView *)arg0;

@end
