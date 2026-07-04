/* Runtime dump - ATVImageViewController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRViewController.h>

@class BRMerchant;
@interface ATVImageViewController : BRViewController
{
    char _waitingForImage;
    BRMerchant * _merchant;
    ATVImage * _image;
    <BRImageProxy> * _imageProxy;
}

@property (retain) BRMerchant * merchant;
@property (retain) <BRImageProxy> * imageProxy;
@property (retain) ATVImage * image;

- (BRMerchant *)merchant;
- (void)setMerchant:(BRMerchant *)arg0;
- (void)_imageLoadSucceeded:(id)arg0;
- (void)_imageLoadFailed:(id)arg0;
- (void)_setWaitingForImage:(char)arg0;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg0;
- (void)setImage:(ATVImage *)arg0;
- (ATVImageViewController *)initWithDictionary:(NSDictionary *)arg0;
- (ATVImage *)image;
- (<BRImageProxy> *)imageProxy;
- (void)setImageProxy:(<BRImageProxy> *)arg0;

@end
