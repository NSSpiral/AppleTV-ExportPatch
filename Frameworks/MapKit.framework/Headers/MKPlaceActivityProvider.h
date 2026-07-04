/* Runtime dump - MKPlaceActivityProvider
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlaceActivityProvider : NSObject
{
    <MKPlaceActivityProviderDelegate> * _delegate;
    MKMapItem * _mapItem;
}

@property (weak, nonatomic) <MKPlaceActivityProviderDelegate> * delegate;
@property (retain, nonatomic) MKMapItem * mapItem;

- (NSURL *)activityURL;
- (NSURL *)appleActivityURL;
- (NSObject *)activityAnnotationView;
- (void)setDelegate:(<MKPlaceActivityProviderDelegate> *)arg0;
- (<MKPlaceActivityProviderDelegate> *)delegate;
- (NSString *)activityTitle;
- (void).cxx_destruct;
- (MKMapItem *)mapItem;
- (void)setMapItem:(MKMapItem *)arg0;
- (MKPlaceActivityProvider *)initWithMapItem:(MKMapItem *)arg0;

@end
