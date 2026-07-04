/* Runtime dump - MKMapSnapshotRequest
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKMapSnapshotRequest : NSObject
{
    id _requester;
    id _context;
    struct ? _coordinate;
    unsigned int _zoomLevel;
    struct CGSize _size;
    UIImage * _image;
    NSString * _attributionString;
    MKMapSnapshotCreator * _delegate;
    VKMapSnapshotCreator * _snapshotCreator;
}

@property (retain, nonatomic) id context;
@property (retain, nonatomic) id requester;
@property (retain, nonatomic) NSString * attributionString;
@property (nonatomic) struct ? coordinate;
@property (nonatomic) unsigned int zoomLevel;
@property (nonatomic) struct CGSize size;
@property (weak, nonatomic) MKMapSnapshotCreator * delegate;
@property (readonly, nonatomic) UIImage * image;

- (NSString *)attributionString;
- (void)setAttributionString:(NSString *)arg0;
- (void)cancel;
- (struct CGSize)size;
- (void)setDelegate:(MKMapSnapshotCreator *)arg0;
- (NSString *)description;
- (MKMapSnapshotCreator *)delegate;
- (UIImage *)image;
- (void)setSize:(struct CGSize)arg0;
- (NSString *)context;
- (void)setContext:(NSObject *)arg0;
- (void)start;
- (void).cxx_destruct;
- (GEORequester *)requester;
- (void)setRequester:(GEORequester *)arg0;
- (void)setZoomLevel:(unsigned int)arg0;
- (unsigned int)zoomLevel;
- (struct ?)coordinate;
- (void)setCoordinate:(struct ?)arg0;

@end
