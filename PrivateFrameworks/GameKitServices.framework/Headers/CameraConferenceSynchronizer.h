/* Runtime dump - CameraConferenceSynchronizer
 * Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@interface CameraConferenceSynchronizer : NSObject
{
    char isConference720p;
    char isConferenceOniPad;
    char receivedRequestToChangeCamera;
    char receivedFirstRemoteFrame;
    int cameraHasChangedToCapture;
    int didSendFirstRemoteFrameNotification;
    VCVideoRule * captureRule;
    struct CGSize localPortraitAspectRatio;
    id remoteFrameNotificationBlock;
    id didStopNotificationBlock;
}

@property (nonatomic) struct CGSize localPortraitAspectRatio;

- (void)dealloc;
- (CameraConferenceSynchronizer *)init;
- (void)reset;
- (void)scheduleFirstRemoteFrameNotification:(NSNotification *)arg0;
- (void)setLocalPortraitAspectRatio:(struct CGSize)arg0;
- (void)scheduleCameraChangeToCaptureSettings:(NSDictionary *)arg0;
- (void)scheduleCameraChangeToPreviewSettings;
- (void)cameraSizeChangedTo:(struct CGSize)arg0;
- (char)shouldConferenceSendFirstRemoteFrameNotification;
- (void)notifyClientOfRemoteFrame:(double)arg0;
- (char)shouldConferenceChangeCameraToCaptureSettings;
- (void)changeCameraToCaptureSettings:(double)arg0 forced:(char)arg1;
- (char)shouldConferenceChangeCameraToPreviewSettings;
- (struct CGSize)localPortraitAspectRatio;

@end
