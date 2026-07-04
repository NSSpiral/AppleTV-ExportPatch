/* Runtime dump - MKMapItemMetadataDealRequest
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKMapItemMetadataDealRequest : MKMapItemMetadataRequest
{
    id _dealHandler;
}

@property (copy, nonatomic) id dealHandler;

+ (NSObject *)requestWithMapItem:(MKMapItem *)arg0;

- (void)setDealHandler:(id /* block */)arg0;
- (void)handleData:(NSData *)arg0;
- (id /* block */)dealHandler;
- (NSURL *)url;
- (void).cxx_destruct;
- (void)handleError:(NSError *)arg0;
- (NSURLRequest *)urlRequest;

@end
