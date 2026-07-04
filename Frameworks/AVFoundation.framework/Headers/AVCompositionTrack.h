/* Runtime dump - AVCompositionTrack
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCompositionTrack : AVAssetTrack
{
    AVCompositionTrackInternal * _priv;
}

@property (readonly, copy, nonatomic) NSArray * segments;

- (struct OpaqueFigMutableComposition *)_mutableComposition;
- (NSSet *)_initWithAsset:(NSSet *)arg0 trackID:(int)arg1 trackIndex:(long)arg2;
- (NSArray *)segments;
- (void)dealloc;
- (NSString *)description;
- (void)finalize;

@end
