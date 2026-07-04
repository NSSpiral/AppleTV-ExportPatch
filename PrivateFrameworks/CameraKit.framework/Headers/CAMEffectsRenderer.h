/* Runtime dump - CAMEffectsRenderer
 * Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CAMEffectsRenderer : NSObject
{
    EAGLContext * _eaglContext;
    CIContext * _ciContext;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    char _isShowingGrid;
    char _gridTransitionInFlight;
    char _gridTransitionIsAnimated;
    <PLCameraEffectsRendererDelegate> * _delegate;
    double _lastReportedFrameDropTime;
    unsigned int _totalFramesSinceLastReportedFrameDrop;
    unsigned int _droppedFramesSinceLastReportedFrameDrop;
    char __atomicPreviewStartedNotificationNeeded;
    char _atomicMirrorFilterRendering;
    char __previewLayerEnabled;
    char __inBackground;
    CAMEffectsFullsizeView * __renderEffectsFullsizeView;
    CAMEffectsGridView * __renderGridView;
    CAMVideoPreviewView * _atomicVideoPreviewView;
    unsigned int _atomicFilterIndex;
    id __atomicPreviewStartedBlock;
    int _atomicCameraMode;
}

@property (retain, nonatomic) CAMVideoPreviewView * videoPreviewView;
@property (nonatomic) unsigned int filterIndex;
@property (nonatomic) char showGrid;
@property char mirrorFilterRendering;
@property int cameraMode;
@property (nonatomic) <PLCameraEffectsRendererDelegate> * delegate;
@property (retain) CAMVideoPreviewView * atomicVideoPreviewView;
@property unsigned int atomicFilterIndex;
@property (retain) CAMEffectsFullsizeView * _renderEffectsFullsizeView;
@property (retain) CAMEffectsGridView * _renderGridView;
@property (copy) id _previewStartedBlock;
@property char _previewStartedNotificationNeeded;
@property (nonatomic) char _previewLayerEnabled;
@property char _inBackground;

- (CAMEffectsRenderer *)initWithDispatchQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (void)dealloc;
- (void)setDelegate:(<PLCameraEffectsRendererDelegate> *)arg0;
- (CAMEffectsRenderer *)init;
- (<PLCameraEffectsRendererDelegate> *)delegate;
- (void)_applicationDidEnterBackground:(NSNotification *)arg0;
- (void)_applicationWillEnterForeground:(NSNotification *)arg0;
- (void).cxx_destruct;
- (void)_applicationWillResignActive:(NSNotification *)arg0;
- (void)_applicationDidBecomeActive:(NSNotification *)arg0;
- (void)_previewStarted:(char)arg0;
- (void)setCameraMode:(int)arg0;
- (int)cameraMode;
- (void)_setInBackground:(char)arg0;
- (void)_createContextIfNecessary;
- (void)_setPreviewLayerEnabled:(char)arg0;
- (void)_setVideoDataOutputEnabled:(char)arg0;
- (void)_setPreviewStartedNotificationNeeded:(char)arg0;
- (void)_deviceStarted:(id)arg0;
- (CAMVideoPreviewView *)videoPreviewView;
- (void)_tearDownEffectsView:(NSObject *)arg0 removeFromSuperview:(char)arg1;
- (char)_isInBackground;
- (CAMEffectsFullsizeView *)_renderEffectsFullsizeView;
- (CAMEffectsGridView *)_renderGridView;
- (void)_setupEffectsView:(NSObject *)arg0;
- (unsigned int)atomicFilterIndex;
- (void)setFilterIndex:(unsigned int)arg0 forceStateChange:(char)arg1 renderNotifyBlock:(id /* block */)arg2;
- (unsigned int)filterIndex;
- (void)setAtomicFilterIndex:(unsigned int)arg0;
- (void)_updateEffectsFullsizeView;
- (void)_setPreviewStartedBlock:(id /* block */)arg0;
- (void)_forceResetToFilteredRendering:(char)arg0;
- (void)_runOnMainThreadImmediatelyIfPossibleWithBlock:(id /* block */)arg0;
- (void)setFilterIndex:(unsigned int)arg0;
- (CAMVideoPreviewView *)atomicVideoPreviewView;
- (void)_destroyEffectsFullsizeView;
- (void)_destroyEffectsGridView;
- (void)setAtomicVideoPreviewView:(CAMVideoPreviewView *)arg0;
- (NSObject *)_setupEffectsGridView;
- (NSObject *)_setupEffectsFullsizeView;
- (void)_setRenderEffectsFullsizeView:(NSObject *)arg0;
- (void)_setRenderGridView:(NSObject *)arg0;
- (char)mirrorFilterRendering;
- (void)_notifyOfRenderIfNecessary;
- (void)_renderWithSampleBuffer:(struct opaqueCMSampleBuffer *)arg0;
- (void)_updateStatsForFrameWasDropped:(char)arg0;
- (void)_reportStatsForFrameDrops;
- (void)_resumeRendering;
- (char)_previewStartedNotificationNeeded;
- (void)_handlePreviewStartedFiltered:(char)arg0;
- (id /* block */)_previewStartedBlock;
- (void)setShowGrid:(char)arg0 animated:(char)arg1;
- (char)_gridTransitionInFlight;
- (void)_setGridTransitionIsInFlight:(char)arg0;
- (void)_transitionToGrid:(id)arg0;
- (void)_transitionFromGrid:(id)arg0;
- (NSObject *)_animatedLayerForView:(NSObject *)arg0;
- (struct CGRect)_gridFrameForCurrentFilters;
- (void)_animateToGrid:(char)arg0 layer:(CALayer *)arg1 fadeOutLayer:(id)arg2 startFrame:(struct CGRect)arg3 endFrame:(struct CGSize)arg4 completion:(id /* block */)arg5;
- (void)_animateGridLayerZoomToGrid:(char)arg0;
- (struct CGRect)_frameToZoomFromFrame:(NSObject *)arg0 toFrame:(SEL)arg1 withinFrame:(struct CGRect)arg2;
- (void)_animateLayer:(id)arg0 startFrame:(struct CGRect)arg1 endFrame:(struct CGSize)arg2 viewTransform:(VKViewTransform *)arg3 animationDuration:(struct CGRect)arg4 animationTimingFunction:(struct CGSize)arg5 animationDelegate:(CAMAnimationDelegate *)arg6;
- (struct CGRect)_zoomedFrameForRect:(NSObject *)arg0 fromFullFrame:(SEL)arg1 toZoomFrame:(struct CGRect)arg2;
- (void)setVideoPreviewView:(CAMVideoPreviewView *)arg0;
- (void)renderWithSampleBuffer:(struct opaqueCMSampleBuffer *)arg0;
- (void)didDropSampleBuffer:(struct opaqueCMSampleBuffer *)arg0;
- (char)isShowingGrid;
- (void)setShowGrid:(char)arg0;
- (void)setMirrorFilterRendering:(char)arg0;
- (char)_previewLayerEnabled;

@end
