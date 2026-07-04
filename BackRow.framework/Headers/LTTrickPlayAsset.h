/* Runtime dump - LTTrickPlayAsset
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class ATVInterstitialGroup;
@interface LTTrickPlayAsset : NSObject
{
    <BRMediaAsset> * _mediaAsset;
    ATVInterstitialGroup * _interstitials;
}

+ (NSSet *)assetForAsset:(NSSet *)arg0;

- (<BRMediaAsset> *)mediaAsset;
- (void)setInterstitials:(ATVInterstitialGroup *)arg0;
- (ATVInterstitialGroup *)interstitials;
- (LTTrickPlayAsset *)initWithAsset:(NSSet *)arg0;
- (void).cxx_destruct;

@end
