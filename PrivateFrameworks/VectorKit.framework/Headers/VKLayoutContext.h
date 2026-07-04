/* Runtime dump - VKLayoutContext
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKLayoutContext : NSObject
{
    VKCamera * _camera;
    VKCamera * _defaultTrackingCamera;
    <MDRenderTarget> * _canvas;
    char _forceLayout;
    char _iconsShouldAlignToPixels;
    float _styleZAdjust;
    char _preloadOnly;
    VKCamera * _transitionCamera;
    int _transitionMapMode;
    double _timestamp;
    struct VKEdgeInsets _labelEdgeInsets;
    int _styleZ;
    float _z;
    char _hasOccluders;
    char _hasMovingOccluders;
    VKViewTransform * _viewTransform;
    VKAnchorContext * _anchorContext;
    struct shared_ptr<ggl::PolygonBase::MeshMesh> _unitMesh;
    struct shared_ptr<ggl::PolygonBase::MeshMesh> _polygonUnitMesh;
    struct shared_ptr<ggl::TextureMesh::MeshMesh> _unitTextureMesh;
    struct StencilManager _stencilManager;
    struct shared_ptr<ggl::Device> _device;
    struct Loader _loader;
}

@property (retain, nonatomic) VKCamera * defaultTrackingCamera;
@property (retain, nonatomic) VKViewTransform * viewTransform;
@property (retain, nonatomic) VKAnchorContext * anchorContext;
@property (retain, nonatomic) VKCamera * transitionCamera;
@property (nonatomic) int transitionMapMode;
@property (nonatomic) double timestamp;
@property (nonatomic) struct VKEdgeInsets labelEdgeInsets;
@property (readonly, nonatomic) char hasOverlayInStencil;
@property (readonly, nonatomic) unsigned char stencilStart;
@property (readonly, nonatomic) unsigned char stencilEnd;

- (void)dealloc;
- (double)timestamp;
- (void)setTimestamp:(double)arg0;
- (void).cxx_construct;
- (void).cxx_destruct;
- (struct shared_ptr<ggl::Device>)device;
- (void)setLabelEdgeInsets:(struct VKEdgeInsets)arg0;
- (struct VKEdgeInsets)labelEdgeInsets;
- (VKAnchorContext *)anchorContext;
- (void)setViewTransform:(VKViewTransform *)arg0;
- (VKViewTransform *)viewTransform;
- (void)canvasDidChange;
- (void)setDefaultTrackingCamera:(VKCamera *)arg0;
- (void)setTransitionMapMode:(int)arg0;
- (void)setTransitionCamera:(VKCamera *)arg0;
- (int)transitionMapMode;
- (VKCamera *)defaultTrackingCamera;
- (unsigned char)reserveStencilValues:(unsigned char)arg0 clearItem:(struct ClearItem * *)arg1;
- (struct shared_ptr<ggl::PolygonBase::MeshMesh>)polygonUnitMesh;
- (VKLayoutContext *)initWithCanvas:(<MDRenderTarget> *)arg0 camera:(VKCamera *)arg1 device:(struct shared_ptr<ggl::Device> *)arg2;
- (void)setAnchorContext:(VKAnchorContext *)arg0;
- (void)clearCanvas;
- (void)startFrameWithTimeStamp:(double)arg0;
- (struct DebugConsole *)debugConsoleForId:(struct Matrix<float, 2, 1>)arg0;
- (struct Loader *)loader;
- (struct shared_ptr<ggl::PolygonBase::MeshMesh>)unitMesh;
- (struct shared_ptr<ggl::TextureMesh::MeshMesh>)unitTextureMesh;
- (unsigned char)reserveStencilValues:(unsigned char)arg0 clearItem:(struct ClearItem * *)arg1 fromTop:(struct ClearItem)arg2;
- (void)markStencilAsDirty;
- (char)hasOverlayInStencil;
- (unsigned char)stencilStart;
- (unsigned char)stencilEnd;
- (VKCamera *)transitionCamera;

@end
