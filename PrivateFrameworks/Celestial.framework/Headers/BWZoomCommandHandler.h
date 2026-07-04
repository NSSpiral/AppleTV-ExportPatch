/* Runtime dump - BWZoomCommandHandler
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWZoomCommandHandler : NSObject
{
    int _zoomLock;
    float _appliedZoomFactor;
    float _lastRequestedZoomFactor;
    char _zoomFactorServiced;
    BWZoomDelayBuffer * _zoomDelayBuffer;
    char _clientCanCompensateForDelay;
    <BWZoomCompletionDelegate> * _zoomCompletionDelegate;
    struct ? _lastFramePTS;
    struct ? _rampStartTime;
    float _rampCurrentVelocity;
    float _rampAcceleration;
    float _rampStartFactor;
    float _rampStartVelocity;
    float _rampTargetFactor;
    float _rampTargetVelocity;
    int _rampCommandID;
    char _rampActive;
}

@property float requestedZoomFactor;
@property (readonly) float appliedZoomFactor;
@property (nonatomic) <BWZoomCompletionDelegate> * zoomCompletionDelegate;

+ (void)initialize;

- (void)dealloc;
- (BWZoomCommandHandler *)init;
- (float)_zoomFactorForRampAtPTS:(struct ?)arg0;
- (void)_activateRampMode:(char)arg0;
- (float)requestedZoomFactor;
- (void)setRequestedZoomFactor:(float)arg0;
- (float)appliedZoomFactor;
- (void)rampToVideoZoomFactor:(float)arg0 withRate:(float)arg1 commandID:(int)arg2;
- (void)setTypicalISPZoomDelay:(unsigned int)arg0 clientCanCompensateForDelay:(char)arg1;
- (float)updateZoomModelForNextFrameWithPTS:(struct ?)arg0;
- (void)updateAppliedZoomFactorForDelayedISPAppliedZoomFactor:(float)arg0;
- (<BWZoomCompletionDelegate> *)zoomCompletionDelegate;
- (void)setZoomCompletionDelegate:(<BWZoomCompletionDelegate> *)arg0;

@end
