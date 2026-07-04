/* Runtime dump - ATVImage
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVImage : NSObject
{
    struct CGImage * _image;
    struct CGImageSource * _imageSource;
    float _imageWidth;
    float _imageHeight;
    int _imageOrientation;
    char _enableCache;
    NSURL * _imageURL;
    NSData * _imageData;
    NSString * _imageType;
    char _imageBufferInMemory;
    char _isOldAssetImage;
    char _rotationEnabled;
}

@property (readonly, nonatomic) int orientation;
@property (readonly, nonatomic) char rotationEnabled;

+ (ATVImage *)imageWithURL:(NSURL *)arg0;
+ (ATVImage *)imageWithPath:(NSString *)arg0;
+ (ATVImage *)imageWithData:(NSData *)arg0;
+ (ATVImage *)imageWithURL:(NSURL *)arg0 cacheImmediately:(char)arg1;
+ (ATVImage *)imageWithPath:(NSString *)arg0 cacheImmediately:(char)arg1;
+ (ATVImage *)imageWithRotationFromURL:(NSURL *)arg0;
+ (ATVImage *)imageWithCGImageRef:(struct CGImage *)arg0 preserveAlpha:(char)arg1;
+ (ATVImage *)imageWithRotationFromPath:(NSString *)arg0;

- (char)hasAlpha;
- (void)dealloc;
- (int)orientation;
- (ATVImage *)initWithData:(NSData *)arg0;
- (struct CGImage *)image;
- (ATVImage *)initWithURL:(NSURL *)arg0;
- (void).cxx_destruct;
- (ATVImage *)initWithURL:(NSURL *)arg0 cacheImmediately:(char)arg1;
- (ATVImage *)initWithCGImageRef:(struct CGImage *)arg0 preserveAlpha:(char)arg1;
- (ATVImage *)_initWithCGImageSourceRotationEnabled:(struct CGImageSource *)arg0;
- (void)_initializeCGImageWithRotation;
- (struct CGSize)pixelBounds;
- (void)drawImageInContext:(struct CGContext *)arg0 rect:(struct CGRect)arg1;
- (NSObject *)mapImageWithSourceRect:(struct CGRect)arg0 toSize:(struct CGSize)arg1;
- (struct CGRect)largestSquareRect;
- (char)isPowerOfTwo;
- (char)sourceRequiresRotation;
- (void)setEnableCache:(char)arg0;
- (char)enableCache;
- (UIImage *)deletterboxedImage;
- (NSObject *)croppedImageForSize:(struct CGSize)arg0;
- (id)squareImageFromNearSquareImageWithAspectRatioLimit:(float)arg0;
- (char)isImageBufferInMemory;
- (char)rotationEnabled;
- (void)_drawTintedImageInContext:(struct CGContext *)arg0 rect:(struct CGRect)arg1 tintColor:(struct CGSize)arg2;
- (NSString *)imageType;
- (float)aspectRatio;

@end
