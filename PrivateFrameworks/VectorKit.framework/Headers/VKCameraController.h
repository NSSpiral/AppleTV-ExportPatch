/* Runtime dump - VKCameraController
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKCameraController : NSObject
{
    VKCamera * _camera;
    <MDRenderTarget> * _canvas;
    <VKCameraControllerDelegate> * _delegate;
    char _gesturing;
    unsigned int _regionChangeCount;
    char _inProgressRegionChangeIsAnimated;
}

@property (retain, nonatomic) VKCamera * camera;
@property (nonatomic) <MDRenderTarget> * canvas;
@property (nonatomic) <VKCameraControllerDelegate> * delegate;
@property (nonatomic) char gesturing;
@property (readonly, nonatomic) char animating;

- (void)dealloc;
- (void)setDelegate:(<VKCameraControllerDelegate> *)arg0;
- (<VKCameraControllerDelegate> *)delegate;
- (char)isAnimating;
- (NSString *)detailedDescription;
- (char)isGesturing;
- (void)setGesturing:(char)arg0;
- (VKCamera *)camera;
- (void)beginRegionChange:(char)arg0;
- (void)endRegionChange;
- (void)setCanvas:(<MDRenderTarget> *)arg0;
- (void)canvasDidLayout;
- (void)setCamera:(VKCamera *)arg0;
- (<MDRenderTarget> *)canvas;

@end
