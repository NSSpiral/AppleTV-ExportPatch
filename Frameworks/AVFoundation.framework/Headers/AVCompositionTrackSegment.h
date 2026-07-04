/* Runtime dump - AVCompositionTrackSegment
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCompositionTrackSegment : AVAssetTrackSegment
{
    AVCompositionTrackSegmentInternal * _priv;
}

@property (readonly, nonatomic) char empty;
@property (readonly, nonatomic) NSURL * sourceURL;
@property (readonly, nonatomic) int sourceTrackID;

+ (AVCompositionTrackSegment *)compositionTrackSegmentWithURL:(NSString *)arg0 trackID:(int)arg1 sourceTimeRange:(struct ?)arg2 targetTimeRange:(struct ?)arg3;
+ (AVCompositionTrackSegment *)compositionTrackSegmentWithTimeRange:(struct ?)arg0;

- (int)sourceTrackID;
- (AVCompositionTrackSegment *)initWithURL:(NSString *)arg0 trackID:(int)arg1 sourceTimeRange:(struct ?)arg2 targetTimeRange:(struct ?)arg3;
- (AVCompositionTrackSegment *)initWithTimeRange:(struct ?)arg0;
- (NSURL *)sourceURL;
- (void)dealloc;
- (AVCompositionTrackSegment *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (char)isEmpty;
- (void)finalize;

@end
