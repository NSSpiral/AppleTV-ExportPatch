/* Runtime dump - MEITunesStreamingMediaAsset
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRStreamingMediaAsset.h>

@class BRAuthenticator, BRMerchant;
@interface MEITunesStreamingMediaAsset : BRStreamingMediaAsset

- (long)parentalControlRatingSystemID;
- (long)parentalControlRatingRank;
- (NSString *)trickPlayURL;
- (BRMerchant *)merchant;
- (BRAuthenticator *)secureResourceAuthenticator;
- (NSString *)rating;
- (NSString *)serviceID;
- (char)isExplicit;

@end
