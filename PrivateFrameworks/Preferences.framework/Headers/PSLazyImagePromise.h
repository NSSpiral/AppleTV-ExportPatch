/* Runtime dump - PSLazyImagePromise
 * Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSLazyImagePromise : NSObject
{
    NSString * _imagePath;
    NSString * _imageName;
    NSBundle * _imageBundle;
    id _loadBlock;
    UIImage * _image;
    char _imageLoaded;
}

@property (readonly, nonatomic) UIImage * image;
@property (readonly, nonatomic) char imageLoaded;

+ (PSLazyImagePromise *)imagePromiseWithImageNamed:(UIImage *)arg0 inBundle:(NSObject *)arg1;
+ (NSString *)imagePromiseWithImagePath:(NSString *)arg0;
+ (PSLazyImagePromise *)imagePromiseWithLoadBlock:(id /* block */)arg0;

- (void)dealloc;
- (UIImage *)image;
- (void)loadImage;
- (char)isImageLoaded;

@end
