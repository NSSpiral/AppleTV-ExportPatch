/* Runtime dump - VKPolylineGroupOverlayPainter
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKPolylineGroupOverlayPainter : VKOverlayPainter <VKPolylineGroupOverlayObserver>
{
    VKPolylineOverlay * _selectedPolyline;
    NSMapTable * _polylinesToPainters;
    char _showTraffic;
}

@property (readonly, nonatomic) VKPolylineOverlayPainter * selectedPolylinePainter;
@property (nonatomic) char showTraffic;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (void)setApplicationState:(unsigned int)arg0;
- (void)stylesheetDidChange;
- (void)polylineGroup:(VKPolylineGroupOverlay *)arg0 didAddPolyline:(VKPolylineOverlay *)arg1;
- (void)polylineGroup:(VKPolylineGroupOverlay *)arg0 didRemovePolyline:(VKPolylineOverlay *)arg1;
- (void)polylineGroup:(VKPolylineGroupOverlay *)arg0 didSelectPolyline:(VKPolylineOverlay *)arg1;
- (void)setContainerModel:(VKOverlayContainerModel *)arg0;
- (void)gglLayoutWithContext:(NSObject *)arg0 commandBuffer:(struct CommandBuffer *)arg1 tiles:(struct ClearItem *)arg2;
- (void)layoutWithContext:(NSObject *)arg0 tiles:(struct ClearItem *)arg1 keysInView:(VKTileKeyList *)arg2;
- (VKPolylineGroupOverlayPainter *)initWithOverlay:(<VKOverlay> *)arg0;
- (char)showTraffic;
- (void)setShowTraffic:(char)arg0;
- (void)_addPainterForOverlay:(NSObject *)arg0;
- (VKPolylineOverlayPainter *)selectedPolylinePainter;

@end
