/* Runtime dump - MKMapItemMetadataRequest
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKMapItemMetadataRequest : NSObject
{
    MKMapItem * _mapItem;
}

@property (retain, nonatomic) MKMapItem * mapItem;
@property (readonly, nonatomic) NSURL * url;
@property (readonly, nonatomic) NSURLRequest * urlRequest;

- (void)handleData:(NSData *)arg0;
- (NSURL *)url;
- (void).cxx_destruct;
- (MKMapItem *)mapItem;
- (void)setMapItem:(MKMapItem *)arg0;
- (void)handleError:(NSError *)arg0;
- (NSURLRequest *)urlRequest;

@end
