/* Runtime dump - MKETAResponse
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKETAResponse : NSObject
{
    MKMapItem * _source;
    MKMapItem * _destination;
    double _expectedTravelTime;
    double _distance;
    NSArray * _sortedETAs;
}

@property (readonly, nonatomic) MKMapItem * source;
@property (readonly, nonatomic) MKMapItem * destination;
@property (readonly, nonatomic) double expectedTravelTime;
@property (readonly, nonatomic) double distance;
@property (readonly, nonatomic) NSArray * sortedETAs;

- (double)expectedTravelTime;
- (MKETAResponse *)initWithSource:(MKMapItem *)arg0 destination:(MKMapItem *)arg1 expectedTravelTime:(double)arg2 distance:(double)arg3 sortedETAs:(NSArray *)arg4;
- (NSArray *)_sortedETAs;
- (MKMapItem *)source;
- (MKMapItem *)destination;
- (void).cxx_destruct;
- (double)_distance;

@end
