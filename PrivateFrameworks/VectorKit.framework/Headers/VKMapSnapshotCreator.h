/* Runtime dump - VKMapSnapshotCreator
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKMapSnapshotCreator : NSObject <VKMapModelDelegate>
{
    VKImageCanvas * _canvas;
    int _mapType;
    VKMapModel * _mapModel;
    char _didBecomeFullyDrawn;
    char _hasFailedTiles;
    id _completion;
    struct GLRenderer * _gglRenderer;
    VKMapCameraController * _cameraController;
    unsigned int _tileGroupID;
    NSLocale * _locale;
    VKMemoryObserver * _memoryObserver;
}

@property (readonly) struct CGSize size;
@property (nonatomic) int mapType;
@property (nonatomic) char localizeLabels;
@property (nonatomic) int labelScaleFactor;
@property (nonatomic) char showsPointsOfInterest;
@property (nonatomic) char showsBuildings;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (struct shared_ptr<ggl::GLDevice>)device;
+ (char)supportsHighResolutionSnapshots;
+ (char)supportsSharingThumbnails;

- (void)_mapkit_configureFromDefaults;
- (void)cancel;
- (void)dealloc;
- (struct CGSize)size;
- (void)didReceiveMemoryWarning:(id)arg0;
- (int)mapType;
- (char)localizeLabels;
- (void)setLocalizeLabels:(char)arg0;
- (int)labelScaleFactor;
- (void)setLabelScaleFactor:(int)arg0;
- (void)setMapType:(int)arg0;
- (char)showsPointsOfInterest;
- (void)setShowsPointsOfInterest:(char)arg0;
- (char)showsBuildings;
- (void)setShowsBuildings:(char)arg0;
- (char)isRoadClassDisabled:(int)arg0;
- (char)mapModelInNav:(VKMapModel *)arg0;
- (void)mapModel:(VKMapModel *)arg0 needsPanByOffset:(struct CGPoint)arg1 relativeToScreenPoint:(struct CGPoint)arg2 animated:(char)arg3 duration:(double)arg4 completionHandler:(id /* block */)arg5;
- (VKOverlayPainter *)mapModel:(VKMapModel *)arg0 painterForOverlay:(NSObject *)arg1;
- (void)mapModelDidBecomePartiallyDrawn:(VKMapModel *)arg0;
- (void)mapModelWillBecomFullyDrawn:(VKMapModel *)arg0;
- (void)mapModelDidBecomeFullyDrawn:(VKMapModel *)arg0 hasFailedTiles:(char)arg1;
- (void)mapModelDidStartLoadingTiles:(VKMapModel *)arg0;
- (void)mapModelDidFinishLoadingTiles:(VKMapModel *)arg0;
- (void)mapModelDidFailLoadingTiles:(VKMapModel *)arg0 withError:(NSError *)arg1;
- (char)mapModelInNavAtDefaultZoom:(VKMapModel *)arg0;
- (double)mapModelZoomScale:(VKMapModel *)arg0;
- (void)mapModel:(VKMapModel *)arg0 selectedLabelMarkerWillDisappear:(VKLabelMarker *)arg1;
- (void)mapModel:(VKMapModel *)arg0 willTransitionFrom:(int)arg1 to:(int)arg2 duration:(double)arg3;
- (void)mapModelDidUpdateMinMaxZoomLevel:(VKMapModel *)arg0;
- (void)renderRequest:(NSURLRequest *)arg0 completion:(id /* block */)arg1;
- (VKMapSnapshotCreator *)initWithSize:(struct CGSize)arg0 scale:(float)arg1 homeQueue:(NSObject<OS_dispatch_queue> *)arg2 softwareRendering:(char)arg3 tileGroupIdentifier:(unsigned int)arg4 locale:(NSLocale *)arg5;
- (void)setMapRegion:(GEOMapRegion *)arg0 pitch:(double)arg1 yaw:(double)arg2;
- (void)renderSnapshot:(NSObject *)arg0;
- (void)cancelFlushingTileDecodes:(char)arg0;
- (VKMapSnapshotCreator *)initWithSize:(struct CGSize)arg0 scale:(float)arg1 homeQueue:(NSObject<OS_dispatch_queue> *)arg2;
- (void)lookAtX:(unsigned int)arg0 y:(unsigned int)arg1 z:(unsigned int)arg2;
- (void)setCenterCoordinate:(struct ?)arg0 altitude:(double)arg1 yaw:(double)arg2 pitch:(double)arg3;
- (NSObject *)mapModel:(VKMapModel *)arg0 markerForAnnotation:(NSObject *)arg1;
- (void)mapModel:(VKMapModel *)arg0 annotationMarker:(VKAnnotationMarker *)arg1 didChangeDragState:(int)arg2 fromOldState:(int)arg3;

@end
