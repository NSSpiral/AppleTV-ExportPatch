/* Runtime dump - MKRouteActivityProvider
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKRouteActivityProvider : MKPlaceActivityProvider
{
    MKMapItem * _sourceMapItem;
}

@property (retain, nonatomic) MKMapItem * destinationMapItem;
@property (retain, nonatomic) MKMapItem * sourceMapItem;

- (MKRouteActivityProvider *)initWithSource:(NSObject *)arg0 destination:(NSObject *)arg1;
- (NSURL *)activityURL;
- (MKMapItem *)sourceMapItem;
- (NSString *)activitySourceTitle;
- (void)setDestinationMapItem:(MKMapItem *)arg0;
- (MKMapItem *)destinationMapItem;
- (void)setSourceMapItem:(MKMapItem *)arg0;
- (void).cxx_destruct;

@end
