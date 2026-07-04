/* Runtime dump - BRPhotoURLMediaAsset
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRPhotoMediaAsset.h>
@interface BRPhotoURLMediaAsset : BRPhotoMediaAsset
{
    NSURL * _url;
}

@property (retain, nonatomic) NSURL * url;

- (NSURL *)url;
- (void)setUrl:(NSURL *)arg0;
- (BRPhotoURLMediaAsset *)initWithURL:(NSURL *)arg0;
- (void).cxx_destruct;
- (id /* <BRImageProxy> */)imageProxy;

@end
