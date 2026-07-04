/* Runtime dump - AVConferencePreview
 * Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@interface AVConferencePreview : NSObject
{
    char clientWantsPreview;
    unsigned int connectionAttempts;
    AVConferenceXPCClient * connection;
    CALayer * caLayerFront;
    CALayer * caLayerBack;
    VideoAttributes * localVideoAttributes;
    struct CGSize localScreenPortraitAspectRatio;
    struct CGSize localScreenLandscapeAspectRatio;
    NSObject<AVConferencePreviewClientDelegate> * delegate;
    NSObject<OS_dispatch_queue> * avConferencePreviewQueue;
    NSObject<OS_dispatch_queue> * avConferencePreviewNotificationQueue;
}

@property (retain, nonatomic) NSObject<AVConferencePreviewClientDelegate> * delegate;

+ (AVConferencePreview *)AVConferencePreviewSingleton;

- (AVConferencePreview *)retain;
- (void)release;
- (void)dealloc;
- (void)setDelegate:(NSObject<AVConferencePreviewClientDelegate> *)arg0;
- (AVConferencePreview *)init;
- (AVConferencePreview *)autorelease;
- (unsigned int)retainCount;
- (NSObject<AVConferencePreviewClientDelegate> *)delegate;
- (NSObject *)allocWithZone:(struct _NSZone *)arg0;
- (AVConferencePreview *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)localScreenAttributesForVideoAttributes:(NSDictionary *)arg0;
- (void)setLocalScreenAttributes:(NSDictionary *)arg0;
- (void)startPreview;
- (char)isPreviewRunning;
- (VideoAttributes *)localVideoAttributes;
- (void)pausePreview;
- (void)stopPreview;
- (void)setLocalVideoAttributes:(VideoAttributes *)arg0;
- (void)beginPreviewToPIPAnimation;
- (void)endPreviewToPIPAnimation;
- (void)beginPIPToPreviewAnimation;
- (void)endPIPToPreviewAnimation;
- (void)didReceiveErrorFromCamera:(unsigned int)arg0 error:(NSError *)arg1;
- (void)didReceiveFirstPreviewFrameFromCamera:(unsigned int)arg0;
- (void)didChangeLocalVideoAttributes:(NSDictionary *)arg0;
- (void)didChangeLocalScreenAttributes:(NSDictionary *)arg0;
- (void)didStartPreview;
- (void)didPausePreview;
- (void)didStopPreview;
- (void)startPreviewUnpausing:(char)arg0;
- (void)didReceiveCommError;
- (void)setLocalVideoLayer:(void *)arg0 front:(char)arg1;
- (void)connectLayer:(id)arg0 withSlot:(unsigned int)arg1;
- (CALayer *)localVideoLayer:(char)arg0;
- (void)setLocalCamera:(unsigned int)arg0;
- (unsigned int)localCamera;

@end
