/* Runtime dump - AVConferencePreviewServer
 * Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@interface AVConferencePreviewServer : NSObject
{
    int currentWidth;
    int currentHeight;
    int currentFrameRate;
    int previewFrameCount;
    int captureFrameCount;
    int encodedFrameCount;
    NSObject<OS_dispatch_source> * cameraHealthMonitor;
    int pendingWidth;
    int pendingHeight;
    int pendingFrameRate;
    unsigned int currentCameraID;
    char firstPreviewFrame;
    NSMutableArray * activeConferences;
    VideoAttributes * localVideoAttributes;
    struct CGSize localScreenPortraitAspectRatio;
    struct CGSize localScreenLandscapeAspectRatio;
    struct CGSize localExpectedPortraitAspectRatio;
    struct CGSize localExpectedLandscapeAspectRatio;
    NSObject<OS_dispatch_queue> * avConferencePreviewServerQueue;
    NSObject<OS_dispatch_queue> * avConferencePreviewServerConferenceQueue;
    NSObject<OS_dispatch_queue> * avConferencePreviewServerNotificationQueue;
    NSObject<OS_dispatch_queue> * avConferencePreviewServerVariablesQueue;
    NSObject<VideoCaptureProtocol> * avCapture;
    struct OpaqueVTPixelTransferSession * transferSession;
    struct __CVPixelBufferPool * bufferPool;
    char resize;
    NSObject<AVConferencePreviewDelegate> * appDelegate;
    double falteredRenderingtimeStamp;
    AVImageQueue * frontQueue;
    AVImageQueue * backQueue;
    int _thermalNotificationToken;
    int _thermalLevel;
    int _newThermalLevel;
}

@property (retain, nonatomic) NSObject<AVConferencePreviewDelegate> * appDelegate;

+ (AVConferencePreviewServer *)AVConferencePreviewServerSingleton;

- (AVConferencePreviewServer *)retain;
- (void)release;
- (void)dealloc;
- (AVConferencePreviewServer *)init;
- (AVConferencePreviewServer *)autorelease;
- (unsigned int)retainCount;
- (NSObject *)allocWithZone:(struct _NSZone *)arg0;
- (AVConferencePreviewServer *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)localScreenAttributesForVideoAttributes:(NSDictionary *)arg0;
- (char)setLocalScreenAttributes:(NSDictionary *)arg0;
- (struct CGSize)localScreenRatioForScreenOrientation:(int)arg0;
- (struct CGSize)localExpectedRatioForScreenOrientation:(int)arg0;
- (void)setFrameRatePercentage:(id)arg0 percentage:(double)arg1;
- (char)registerForFrames:(id)arg0 width:(int)arg1 height:(int)arg2 frameRate:(int)arg3 unpausing:(char)arg4;
- (char)deregisterForFrames:(id)arg0;
- (void)setCaptureWidth:(int)arg0 height:(int)arg1 rate:(int)arg2;
- (VideoAttributes *)localVideoAttributes;
- (char)captureVideoWidth:(int *)arg0 height:(int *)arg1 frameRate:(int *)arg2;
- (void)startCaptureWithWidth:(int)arg0 height:(int)arg1 frameRate:(int)arg2 unpausing:(char)arg3;
- (void)pausePreview;
- (void)stopPreview;
- (char)setLocalVideoAttributes:(VideoAttributes *)arg0;
- (unsigned int)setLocalVideoDestination:(NSObject *)arg0 facing:(char)arg1;
- (char)isRunningPreview;
- (void)beginPreviewToPIPAnimation;
- (void)endPreviewToPIPAnimation;
- (void)beginPIPToPreviewAnimation;
- (void)endPIPToPreviewAnimation;
- (struct __CVBuffer *)resizeFrame:(struct __CVBuffer *)arg0;
- (char)enqueueFrameToQueueFront:(char)arg0 frame:(struct __CVBuffer *)arg1 frameTime:(struct ?)arg2;
- (void)previewVideoWidth:(int *)arg0 height:(int *)arg1 frameRate:(int *)arg2;
- (void)stopCapture;
- (void)setFrameRatePercentage:(double)arg0;
- (void)handleAVCaptureError:(long)arg0 error:(NSError *)arg1;
- (void)changeCameraToPendingSettingsWithReset:(char)arg0;
- (void)resetCameraToPreviewSettingsForced:(char)arg0;
- (void)reconnectClientLayerFront:(char)arg0;
- (long)createVideoCaptureWithWidth:(int)arg0 height:(int)arg1 frameRate:(int)arg2 useBackFacingCamera:(char)arg3;
- (void)setCurrentFrameRate:(int)arg0;
- (void)startPreviewUnpausing:(char)arg0;
- (void)setCaptureWidth:(int)arg0 height:(int)arg1 rate:(int)arg2 forced:(char)arg3;
- (char)onCaptureFrame:(struct __CVBuffer *)arg0 frameTime:(struct ?)arg1 preview:(char)arg2 isSwitching:(char)arg3 cameraType:(int)arg4;
- (struct __CFDictionary *)copyCameraColorInfo;
- (char)registerForFrames:(id)arg0 unpausing:(char)arg1;
- (char)isConferenceRegisteredForFrames:(id)arg0;
- (NSDictionary *)copyLocalVideoAttributes;
- (NSDictionary *)copyLocalScreenAttributesForVideoAttributes:(NSDictionary *)arg0;
- (char)setCaptureCamera:(unsigned int)arg0;
- (unsigned int)captureCamera;
- (NSObject<AVConferencePreviewDelegate> *)appDelegate;
- (void)setAppDelegate:(NSObject<AVConferencePreviewDelegate> *)arg0;

@end
