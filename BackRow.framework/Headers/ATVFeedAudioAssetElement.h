/* Runtime dump - ATVFeedAudioAssetElement
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFeedMediaAssetElement.h>

@class ATVFeedElement, BRMerchant;
@interface ATVFeedAudioAssetElement : ATVFeedMediaAssetElement
{
    NSString * _artist;
    NSString * _collection;
}

@property (copy, nonatomic) NSString * artist;
@property (copy, nonatomic) NSString * collection;

- (ATVFeedAudioAssetElement *)initWithXMLElement:(NSXMLElement *)arg0 merchant:(BRMerchant *)arg1 parent:(ATVFeedElement *)arg2;
- (NSString *)collection;
- (void).cxx_destruct;
- (void)setCollection:(NSString *)arg0;
- (void)setArtist:(NSString *)arg0;
- (NSString *)artist;

@end
