/* Runtime dump - ATVFlickrAsset
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRPhotoMediaAsset.h>

@class BRMediaType;
@interface ATVFlickrAsset : BRPhotoMediaAsset
{
    NSDictionary * _assetInfo;
}

+ (NSDictionary *)assetWithAssetInfo:(NSDictionary *)arg0;

- (ATVFlickrAsset *)initWithAssetInfo:(NSDictionary *)arg0;
- (NSObject *)_imagePathWithSize:(int)arg0;
- (NSString *)flickrIdentifier;
- (char)isLocal;
- (void)dealloc;
- (id /* <BRImageProxy> */)imageProxy;
- (BRMediaType *)mediaType;

@end
