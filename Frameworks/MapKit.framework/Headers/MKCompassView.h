/* Runtime dump - MKCompassView
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKCompassView : UIView
{
    CALayer * _imageLayer;
}

@property (nonatomic) float yaw;

- (void)updateLocale:(NSObject *)arg0;
- (MKCompassView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)layoutSubviews;
- (void)layoutSublayersOfLayer:(CALayer *)arg0;
- (void).cxx_destruct;
- (void)setYaw:(float)arg0;

@end
