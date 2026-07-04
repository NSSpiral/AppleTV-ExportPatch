/* Runtime dump - AVSubtitleLayerInternal
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVSubtitleLayerInternal : NSObject
{
    AVPlayer * player;
    struct OpaqueFigSubtitleRenderer * renderer;
    NSDictionary * currentSubtitleSample;
    char currentSubtitleSampleIsForced;
    char nonForcedSubtitleDisplayEnabled;
    char shouldObservePlayer;
    char isObservingPlayer;
    char hasPlayerToObserve;
    NSObject<OS_dispatch_queue> * serialQueue;
    char isPresentationLayer;
    char isOverscanSubtitleSupportEnabled;
    id delegate;
}

@end
