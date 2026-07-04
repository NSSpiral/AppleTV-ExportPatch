/* Runtime dump - MKReverseGeocoder
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKReverseGeocoder : NSObject
{
    MKReverseGeocoderInternal * _internal;
}

@property (weak, nonatomic) <MKReverseGeocoderDelegate> * delegate;
@property (readonly, nonatomic) struct ? coordinate;
@property (readonly, nonatomic) MKPlacemark * placemark;
@property (readonly, nonatomic) char querying;

- (MKPlacemark *)placemark;
- (void)_notifyError:(NSError *)arg0;
- (char)isQuerying;
- (void)_notifyResult:(NSObject *)arg0;
- (MKReverseGeocoder *)initWithCoordinate:(struct ?)arg0;
- (void)_notifyNoResults;
- (void)cancel;
- (void)setDelegate:(<MKReverseGeocoderDelegate> *)arg0;
- (<MKReverseGeocoderDelegate> *)delegate;
- (void)start;
- (void).cxx_destruct;
- (struct ?)coordinate;
- (void)setCoordinate:(struct ?)arg0;

@end
