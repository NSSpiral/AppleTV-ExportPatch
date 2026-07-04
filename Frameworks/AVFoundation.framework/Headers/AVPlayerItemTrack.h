/* Runtime dump - AVPlayerItemTrack
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVPlayerItemTrack : NSObject
{
    AVPlayerItemTrackInternal * _playerItemTrack;
}

@property (readonly, nonatomic) AVAssetTrack * assetTrack;
@property (nonatomic) char enabled;
@property (readonly, nonatomic) float currentVideoFrameRate;

+ (AVPlayerItemTrack *)playerItemTrackWithFigPlaybackItem:(struct OpaqueFigPlaybackItem *)arg0 readyForInspection:(char)arg1 trackID:(int)arg2 asset:(NSSet *)arg3 playerItem:(NSObject *)arg4;

- (NSDictionary *)loudnessInfo;
- (void)_attachToFigPlaybackItemOfPlayerItem:(NSObject *)arg0;
- (void)_respondToFigPlaybackItemBecomingReadyForInpection;
- (AVPlayerItem *)_playerItem;
- (NSObject *)_initWithFigPlaybackItem:(struct OpaqueFigPlaybackItem *)arg0 readyForInspection:(char)arg1 trackID:(int)arg2 asset:(NSSet *)arg3 playerItem:(NSObject *)arg4;
- (NSObject *)_weakReferenceToPlayerItem;
- (void)_transferEnabledToFig;
- (void)_transferLoudnessInfoToFig;
- (void)_transferCachedValuesToFig;
- (NSObject *)fallbackTrack;
- (float)currentVideoFrameRate;
- (void)setLoudnessInfo:(NSDictionary *)arg0;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (void)setEnabled:(char)arg0;
- (char)isEnabled;
- (AVAssetTrack *)assetTrack;
- (int)trackID;
- (void)finalize;

@end
