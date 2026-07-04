/* Runtime dump - ATVFlagstaffPreviewImage
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@protocol BRReady;

@class ATVFlagstaffPreviewImageOverLay, BRAsyncImageControl, BRReflectionControl;
@interface ATVFlagstaffPreviewImage : BRControl <BRReady>
{
    BRAsyncImageControl * _imageControl;
    BRAsyncImageControl * _logoImageControl;
    BRReflectionControl * _reflectionControl;
    ATVFlagstaffPreviewImageOverLay * _overLayControl;
    char _isReady;
}

@property (retain, nonatomic) ATVImage * image;
@property (retain, nonatomic) <BRImageProxy> * imageProxy;
@property (copy, nonatomic) NSString * text1;
@property (copy, nonatomic) NSString * text2;
@property (copy, nonatomic) NSString * text3;
@property (retain, nonatomic) ATVImage * logoImage;
@property (retain, nonatomic) <BRImageProxy> * logoImageProxy;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)layoutSubcontrols;
- (void)getReady;
- (void)setText1:(NSString *)arg0;
- (void)setText2:(NSString *)arg0;
- (void)setText3:(NSString *)arg0;
- (void)_imageReady:(id)arg0;
- (NSString *)text1;
- (NSString *)text2;
- (NSString *)text3;
- (void)setLogoImageProxy:(<BRImageProxy> *)arg0;
- (<BRImageProxy> *)logoImageProxy;
- (void)dealloc;
- (void)setImage:(ATVImage *)arg0;
- (ATVFlagstaffPreviewImage *)init;
- (ATVImage *)image;
- (ATVImage *)logoImage;
- (void)setLogoImage:(ATVImage *)arg0;
- (<BRImageProxy> *)imageProxy;
- (void)setImageProxy:(<BRImageProxy> *)arg0;
- (char)isReady;

@end
