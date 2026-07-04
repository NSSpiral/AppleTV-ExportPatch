/* Runtime dump - AVPlaybackItemTrackInspector
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVPlaybackItemTrackInspector : AVAssetTrackInspector
{
    struct OpaqueFigPlaybackItem * _playbackItem;
    int _trackID;
    unsigned long _mediaType;
    AVWeakReference * _weakReferenceToAsset;
}

- (struct OpaqueFigPlaybackItem *)_playbackItem;
- (NSSet *)_initWithAsset:(NSSet *)arg0 trackID:(int)arg1 trackIndex:(long)arg2;
- (float)estimatedDataRate;
- (struct ?)samplePresentationTimeForTrackTime:(struct ?)arg0;
- (void *)_valueAsCFTypeForProperty:(struct __CFString *)arg0;
- (unsigned long)_figMediaType;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (char)isEnabled;
- (NSSet *)asset;
- (struct CGSize)dimensions;
- (struct CGSize)naturalSize;
- (NSArray *)formatDescriptions;
- (struct ?)timeRange;
- (struct CGAffineTransform)preferredTransform;
- (unsigned long)mediaType;
- (int)trackID;
- (void)finalize;

@end
