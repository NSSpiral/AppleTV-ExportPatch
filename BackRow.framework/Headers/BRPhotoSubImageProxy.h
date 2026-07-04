/* Runtime dump - BRPhotoSubImageProxy
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRATVDataImageProxy.h>
@interface BRPhotoSubImageProxy : BRATVDataImageProxy
{
    struct CGRect _rect;
    NSString * _rectString;
    int _requestedImageSize;
}

+ (NSObject *)subImageProxyWithMediaObject:(void *)arg0 dataClient:(ATVDataClient *)arg1 rect:(struct CGRect)arg2;

- (ATVImage *)imageForImageSize:(int)arg0;
- (NSString *)imageIDForImageSize:(int)arg0;
- (void)_imageLoadFailed:(id)arg0;
- (void)_imageLoaded:(id)arg0;
- (BRPhotoSubImageProxy *)initWithMediaObject:(void *)arg0 dataClient:(ATVDataClient *)arg1 rect:(struct CGRect)arg2;
- (NSString *)_rectString;
- (void)dealloc;

@end
