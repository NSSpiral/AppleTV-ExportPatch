/* Runtime dump - BRMediaAssetExpiryInfo
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface BRMediaAssetExpiryInfo : NSObject
{
    <BRMediaAsset> * _mediaAsset;
}

+ (void)setImplementationClass:(Class)arg0;
+ (NSSet *)expiryInfoForMediaAsset:(NSSet *)arg0;

- (NSString *)expiryDescription;
- (NSString *)rentalPlaybackDurationDescription;
- (BRMediaAssetExpiryInfo *)initWithMediaAsset:(<BRMediaAsset> *)arg0;
- (char)hasBeenPlayed;
- (void)dealloc;
- (int)compare:(NSObject *)arg0;
- (NSSet *)asset;
- (char)isExpired;
- (NSDate *)expiryDate;
- (void)setExpiryDate:(NSDate *)arg0;
- (unsigned int)rentalPlaybackDuration;

@end
