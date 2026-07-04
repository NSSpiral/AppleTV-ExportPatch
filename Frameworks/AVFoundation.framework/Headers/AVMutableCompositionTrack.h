/* Runtime dump - AVMutableCompositionTrack
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVMutableCompositionTrack : AVCompositionTrack
{
    AVMutableCompositionTrackInternal * _mutablePriv;
}

@property (nonatomic) int naturalTimeScale;
@property (copy, nonatomic) NSString * languageCode;
@property (copy, nonatomic) NSString * extendedLanguageTag;
@property (nonatomic) struct CGAffineTransform preferredTransform;
@property (nonatomic) float preferredVolume;
@property (copy, nonatomic) NSArray * segments;

- (void)setExtendedLanguageTag:(NSString *)arg0;
- (float)preferredVolume;
- (int)naturalTimeScale;
- (NSArray *)segments;
- (int)alternateGroupID;
- (void)insertEmptyTimeRange:(struct ?)arg0;
- (void)removeTimeRange:(struct ?)arg0;
- (void)scaleTimeRange:(struct ?)arg0 toDuration:(struct ?)arg1;
- (void)_setTrackReaderPropertyValue:(void *)arg0 forKey:(struct __CFString *)arg1;
- (void)setSegments:(NSArray *)arg0;
- (char)insertTimeRange:(struct ?)arg0 ofTrack:(struct ?)arg1 atTime:(struct ?)arg2 error:(NSError *)arg3;
- (char)insertTimeRanges:(NSArray *)arg0 ofTracks:(NSArray *)arg1 atTime:(struct ?)arg2 error:(id *)arg3;
- (char)validateTrackSegments:(id)arg0 error:(id *)arg1;
- (void)setNaturalTimeScale:(int)arg0;
- (void)setPreferredTransform:(struct CGAffineTransform)arg0;
- (void)setPreferredVolume:(float)arg0;
- (void)setAlternateGroupID:(int)arg0;
- (NSString *)languageCode;
- (void)setLanguageCode:(NSString *)arg0;
- (struct CGAffineTransform)preferredTransform;
- (NSString *)extendedLanguageTag;

@end
