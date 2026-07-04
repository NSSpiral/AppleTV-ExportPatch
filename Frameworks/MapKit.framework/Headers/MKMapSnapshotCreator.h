/* Runtime dump - MKMapSnapshotCreator
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKMapSnapshotCreator : NSObject <MKMapViewDelegate>
{
    UIImage * _lastSnapshot;
    NSString * _lastAttributionString;
    NSLock * _requestLock;
    NSMutableArray * _requests;
    MKMapSnapshotRequest * _servingRequest;
}

@property (retain, nonatomic) MKMapSnapshotRequest * servingRequest;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (char)supportsHighResolutionSnapshots;
+ (char)supportsSharingThumbnails;

- (MKMapSnapshotRequest *)servingRequest;
- (void)setServingRequest:(MKMapSnapshotRequest *)arg0;
- (void)_respondWithSnapshot;
- (void)_processRequest;
- (NSObject *)_newSnapshotWithView:(NSObject *)arg0;
- (void)createSnapShotWithCoordinate:(struct ?)arg0 zoomLevel:(unsigned int)arg1 size:(struct CGSize)arg2 requester:(GEORequester *)arg3 context:(NSObject *)arg4;
- (id)recreateCurrentSnapshotWithRequester:(GEORequester *)arg0 context:(NSObject *)arg1;
- (void)flushRequestQueue;
- (void)createSnapShotWithCoordinate:(struct ?)arg0 zoomLevel:(unsigned int)arg1 size:(struct CGSize)arg2 handler:(id /* block */)arg3;
- (void)dealloc;
- (MKMapSnapshotCreator *)init;
- (void).cxx_destruct;

@end
