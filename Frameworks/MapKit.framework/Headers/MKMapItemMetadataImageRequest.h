/* Runtime dump - MKMapItemMetadataImageRequest
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKMapItemMetadataImageRequest : MKMapItemMetadataRequest
{
    GEOPhotoInfo * _info;
    id _imageHandler;
}

@property (copy, nonatomic) id imageHandler;
@property (retain) GEOPhotoInfo * info;

+ (NSObject *)requestWithMapItem:(MKMapItem *)arg0 info:(GEOPhotoInfo *)arg1;

- (void)handleData:(NSData *)arg0;
- (void)setImageHandler:(id /* block */)arg0;
- (id /* block */)imageHandler;
- (NSURL *)url;
- (GEOPhotoInfo *)info;
- (void).cxx_destruct;
- (void)setInfo:(GEOPhotoInfo *)arg0;
- (void)handleError:(NSError *)arg0;

@end
