/* Runtime dump - AVAssetTrackEnumerator
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetTrackEnumerator : NSEnumerator
{
    NSString * _mediaType;
    NSArray * _mediaCharacteristics;
    NSEnumerator * _enumerator;
}

+ (NSSet *)trackEnumeratorWithAsset:(NSSet *)arg0;

- (AVAssetTrackEnumerator *)initWithAsset:(NSSet *)arg0 mediaType:(NSString *)arg1;
- (AVAssetTrackEnumerator *)initWithAsset:(NSSet *)arg0 mediaCharacteristics:(NSArray *)arg1;
- (void)setMediaCharacteristics:(NSArray *)arg0;
- (void)dealloc;
- (NSObject *)nextObject;
- (AVAssetTrackEnumerator *)initWithAsset:(NSSet *)arg0;
- (void)setMediaType:(NSString *)arg0;

@end
