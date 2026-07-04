/* Runtime dump - AVPlayerLayerInternal
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVPlayerLayerInternal : NSObject
{
    AVPlayer * _player;
    CALayer * maskLayer;
    CALayer * videoLayer;
    CALayer * closedCaptionLayer;
    NSString * videoGravity;
    NSString * subtitleGravity;
    FigSubtitleCALayer * subtitleLayer;
    struct CGRect latestPlayerLayerBoundsAtRendering;
    struct CGRect latestSubtitleLayoutAtRendering;
    char shouldObservePlayer;
    char isObservingPlayer;
    char hasPlayerToObserve;
    NSObject<OS_dispatch_queue> * serialQueue;
    char isPresentationLayer;
    char isReadyForDisplay;
    struct OpaqueFigSimpleMutex * isReadyForDisplayMutex;
    AVPlayerItem * itemMarkedReadyForDisplay;
    struct CGSize presentationSize;
    struct CGSize latestPresentationSizeAtRendering;
    char isInPIPMode;
    NSDictionary * pixelBufferAttributes;
}

@end
