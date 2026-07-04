/* Runtime dump - BRRSSMediaAsset
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRXMLMediaAsset.h>
@interface BRRSSMediaAsset : BRXMLMediaAsset
{
    char _needsVolumeFading;
}

+ (NSObject *)mediaAssetFromMediaProvider:(NSObject *)arg0;

- (char)hasVideoContent;
- (NSDictionary *)coverArt;
- (void)setNeedsVolumeFading:(char)arg0;
- (char)needsVolumeFading;
- (NSString *)description;
- (long)duration;

@end
