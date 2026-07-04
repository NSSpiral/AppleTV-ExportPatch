/* Runtime dump - AVAssetTrackSegment
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetTrackSegment : NSObject
{
    struct ? _timeMapping;
}

@property (readonly, nonatomic) struct ? timeMapping;
@property (readonly, nonatomic) char empty;

- (struct ?)timeMapping;
- (AVAssetTrackSegment *)_initWithTimeMapping:(struct ?)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (char)isEmpty;

@end
