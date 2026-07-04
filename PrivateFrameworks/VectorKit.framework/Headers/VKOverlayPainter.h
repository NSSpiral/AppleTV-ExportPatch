/* Runtime dump - VKOverlayPainter
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKOverlayPainter : NSObject
{
    unsigned int _applicationState;
    <VKOverlay> * _overlay;
    VKOverlayContainerModel * _containerModel;
    float _brightness;
}

@property (readonly, nonatomic) <VKOverlay> * overlay;
@property (nonatomic) VKOverlayContainerModel * containerModel;
@property (nonatomic) unsigned int applicationState;

- (void)dealloc;
- (unsigned int)applicationState;
- (void)setApplicationState:(unsigned int)arg0;
- (void)stylesheetDidChange;
- (void)flushPools;
- (void)setContainerModel:(VKOverlayContainerModel *)arg0;
- (<VKOverlay> *)overlay;
- (void)gglLayoutWithContext:(NSObject *)arg0 commandBuffer:(struct CommandBuffer *)arg1 tiles:(struct ClearItem *)arg2;
- (void)layoutWithContext:(NSObject *)arg0 tiles:(struct ClearItem *)arg1 keysInView:(VKTileKeyList *)arg2;
- (VKOverlayPainter *)initWithOverlay:(<VKOverlay> *)arg0;
- (VKOverlayContainerModel *)containerModel;

@end
