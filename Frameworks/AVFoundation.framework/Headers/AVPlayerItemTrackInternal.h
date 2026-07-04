/* Runtime dump - AVPlayerItemTrackInternal
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVPlayerItemTrackInternal : NSObject
{
    AVWeakReference * weakReferenceToPlayerItem;
    struct OpaqueFigPlaybackItem * figPlaybackItem;
    char figPlaybackItemIsReadyForInspection;
    AVAsset * asset;
    int trackID;
    NSString * videoFieldMode;
    NSDictionary * loudnessInfo;
    char enabled;
    char enabledWasSet;
}

@end
