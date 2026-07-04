/* Runtime dump - ATVAppPhotoAsset
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRPhotoMediaAsset.h>
@interface ATVAppPhotoAsset : BRPhotoMediaAsset
{
    IKImageElement * _imageElement;
}

@property (retain, nonatomic) IKImageElement * imageElement;

- (ATVAppPhotoAsset *)initWithImageElement:(IKImageElement *)arg0;
- (IKImageElement *)imageElement;
- (void)setImageElement:(IKImageElement *)arg0;
- (void).cxx_destruct;
- (id /* <BRImageProxy> */)imageProxy;

@end
