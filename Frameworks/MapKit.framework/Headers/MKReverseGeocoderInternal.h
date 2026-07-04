/* Runtime dump - MKReverseGeocoderInternal
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKReverseGeocoderInternal : NSObject
{
    struct ? coordinate;
    <MKReverseGeocoderDelegate> * delegate;
    MKMapItem * mapItem;
    <MKMapServiceTicket> * ticket;
    char querying;
}

- (void).cxx_destruct;

@end
