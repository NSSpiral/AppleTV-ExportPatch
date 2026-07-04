/* Runtime dump - ATVCupidVideoMediaAsset
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRStreamingMediaAsset.h>

@class BRStreamingMediaAsset;
@interface ATVCupidVideoMediaAsset : BRStreamingMediaAsset

+ (BRStreamingMediaAsset *)streamingMediaAssetWithMediaItem:(ATVDataItem *)arg0;
+ (ATVCupidVideoMediaAsset *)mediaAssetWithCupidVideo:(id)arg0;

- (void)resolveMediaURL:(id /* block */)arg0;

@end
