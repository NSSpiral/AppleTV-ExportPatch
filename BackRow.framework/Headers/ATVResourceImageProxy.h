/* Runtime dump - ATVResourceImageProxy
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol BRImageProxy;
@interface ATVResourceImageProxy : NSObject <BRImageProxy>
{
    char _shouldCacheImage;
    NSBundle * _bundle;
    NSString * _imageName;
    NSString * _imageType;
}

@property (retain, nonatomic) NSBundle * bundle;
@property (retain, nonatomic) NSString * imageName;
@property (retain, nonatomic) NSString * imageType;
@property (nonatomic) char shouldCacheImage;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSString *)imageProxyWithImageName:(NSString *)arg0 imageType:(NSString *)arg1;
+ (NSString *)imageProxyWithImageName:(NSString *)arg0 imageType:(NSString *)arg1 bundle:(NSBundle *)arg2;

- (ATVImage *)imageForImageSize:(int)arg0;
- (ATVImage *)defaultImageForImageSize:(int)arg0;
- (NSString *)imageIDForImageSize:(int)arg0;
- (ATVResourceImageProxy *)initWithImageName:(NSString *)arg0 imageType:(NSString *)arg1;
- (void)setShouldCacheImage:(char)arg0;
- (void)cancelImageRequestsForImageSizes:(int)arg0;
- (char)supportsImageForImageSize:(int)arg0;
- (ATVResourceImageProxy *)initWithImageName:(NSString *)arg0 imageType:(NSString *)arg1 bundle:(NSBundle *)arg2;
- (char)shouldCacheImage;
- (void)dealloc;
- (NSObject *)object;
- (NSBundle *)bundle;
- (void)setBundle:(NSBundle *)arg0;
- (void)setImageType:(NSString *)arg0;
- (void)setImageName:(NSString *)arg0;
- (NSString *)imageName;
- (NSString *)imageType;

@end
