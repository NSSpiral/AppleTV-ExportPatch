/* Runtime dump - BLImage
 * Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@interface BLImage : NSObject <NSCopying>
{
    UIImage * _UIImage;
    struct CGImage * _CGImage;
    CIImage * _CIImage;
    int _storageType;
    struct CGSize _size;
    char _isPlaceholder;
    int _askedImageType;
    int _obtainedImageType;
}

@property (readonly, nonatomic) int storageType;
@property (readonly, nonatomic) struct CGSize size;
@property (readonly, nonatomic) int imageOrientation;
@property (readonly, nonatomic) float scale;
@property (nonatomic) int askedImageType;
@property (nonatomic) int obtainedImageType;
@property (nonatomic) char isPlaceholder;
@property (readonly, nonatomic) unsigned int memoryUsage;

+ (UIImage *)imageWithImage:(UIImage *)arg0;
+ (NSObject *)descriptionWithImageType:(int)arg0;
+ (NSObject *)abbreviatedDescriptionWithImageType:(int)arg0;

- (void)dealloc;
- (struct CGSize)size;
- (BLImage *)init;
- (NSString *)description;
- (float)scale;
- (BLImage *)copyWithZone:(struct _NSZone *)arg0;
- (struct CGImage *)CGImage;
- (int)imageOrientation;
- (CIImage *)CIImage;
- (UIImage *)UIImage;
- (int)storageType;
- (char)isPlaceholder;
- (void)setIsPlaceholder:(char)arg0;
- (BLImage *)initWithFileAtURL:(NSURL *)arg0;
- (unsigned int)memoryUsage;
- (int)askedImageType;
- (void)setAskedImageType:(int)arg0;
- (int)obtainedImageType;
- (void)setObtainedImageType:(int)arg0;

@end
