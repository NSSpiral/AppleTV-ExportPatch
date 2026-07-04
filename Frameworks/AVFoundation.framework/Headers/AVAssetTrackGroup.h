/* Runtime dump - AVAssetTrackGroup
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetTrackGroup : NSObject <NSCopying>
{
    AVAssetTrackGroupInternal * _assetTrackGroup;
}

@property (readonly, nonatomic) NSArray * trackIDs;

- (AVAssetTrackGroup *)initWithAsset:(NSSet *)arg0 trackIDs:(NSArray *)arg1;
- (NSArray *)trackIDs;
- (NSString *)_assetComparisonToken;
- (void)dealloc;
- (AVAssetTrackGroup *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (AVAssetTrackGroup *)copyWithZone:(struct _NSZone *)arg0;
- (void)finalize;

@end
