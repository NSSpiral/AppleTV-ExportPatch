/* Runtime dump - VKRasterMapTileCreator
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKRasterMapTileCreator : NSObject <VKMapModelDelegate>
{
    VKImageCanvas * _canvas;
    VKMapModel * _mapModel;
    struct VKTileKey _superTileKey;
    double _startTimestamp;
    char _loaderOpen;
    id _completion;
    VKRasterMapTileRequest * _request;
    struct GLRenderer * _gglRenderer;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (struct shared_ptr<ggl::GLDevice>)device;

- (void)dealloc;
- (void).cxx_construct;
- (NSString *)detailedDescription;
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
- (VKRasterMapTileCreator *)initWithSoftwareRendering:(char)arg0 homeQueue:(NSObject<OS_dispatch_queue> *)arg1;
- (NSObject *)mapModel:(VKMapModel *)arg0 markerForAnnotation:(NSObject *)arg1;
- (void)mapModel:(VKMapModel *)arg0 annotationMarker:(VKAnnotationMarker *)arg1 didChangeDragState:(int)arg2 fromOldState:(int)arg3;
- (void)_lookAtKey:(struct VKTileKey *)arg0;

@end
