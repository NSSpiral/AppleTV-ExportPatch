/* Runtime dump - AVMutableComposition
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVMutableComposition : AVComposition
{
    AVMutableCompositionInternal * _mutablePriv;
}

@property (readonly, nonatomic) NSArray * tracks;
@property (nonatomic) struct CGSize naturalSize;

+ (AVMutableComposition *)composition;

- (AVMutableComposition *)_initWithComposition:(AVComposition *)arg0;
- (NSObject *)_newTrackForIndex:(long)arg0;
- (void)_notifyAllTracksThatSegmentsWillChange;
- (void)_notifyAllTracksThatSegmentsDidChange;
- (void)setNaturalSize:(struct CGSize)arg0;
- (char)insertTimeRange:(struct ?)arg0 ofAsset:(struct ?)arg1 atTime:(struct ?)arg2 error:(NSError *)arg3;
- (void)insertEmptyTimeRange:(struct ?)arg0;
- (void)removeTimeRange:(struct ?)arg0;
- (void)scaleTimeRange:(struct ?)arg0 toDuration:(struct ?)arg1;
- (NSObject *)addMutableTrackWithMediaType:(NSObject *)arg0 preferredTrackID:(int)arg1;
- (void)removeTrack:(NSObject *)arg0;
- (NSObject *)mutableTrackCompatibleWithTrack:(NSObject *)arg0;
- (AVMutableComposition *)copyWithZone:(struct _NSZone *)arg0;
- (struct CGSize)naturalSize;
- (NSArray *)tracks;

@end
