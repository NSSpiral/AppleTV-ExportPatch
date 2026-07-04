/* Runtime dump - AVCompositionTrackReaderInspector
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCompositionTrackReaderInspector : AVTrackReaderInspector
{
    struct OpaqueFigMutableComposition * _figMutableComposition;
}

@property (readonly, nonatomic) struct OpaqueFigMutableComposition * mutableComposition;

- (struct OpaqueFigMutableComposition *)_mutableComposition;
- (NSSet *)_initWithAsset:(NSSet *)arg0 trackID:(int)arg1 trackIndex:(long)arg2;
- (NSArray *)segments;
- (id)segmentForTrackTime:(struct ?)arg0;
- (void)dealloc;
- (void)finalize;

@end
