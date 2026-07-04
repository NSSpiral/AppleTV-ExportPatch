/* Runtime dump - MEITunesAssetExpiryInfo
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRMediaAssetExpiryInfo.h>
@interface MEITunesAssetExpiryInfo : BRMediaAssetExpiryInfo

- (MEITunesAssetExpiryInfo *)initWithMediaAsset:(<BRMediaAsset> *)arg0;
- (id)_mediaItemRef;
- (char)hasBeenPlayed;
- (char)isExpired;
- (NSDate *)expiryDate;
- (unsigned int)rentalPlaybackDuration;

@end
