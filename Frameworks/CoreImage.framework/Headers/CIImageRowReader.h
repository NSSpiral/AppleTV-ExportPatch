/* Runtime dump - CIImageRowReader
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIImageRowReader : NSObject <ImageRowReading>
{
    unsigned long height;
    unsigned long width;
    unsigned long bpr;
    void * data;
    short red;
    short green;
    short blue;
    short alpha;
    struct CGColorSpace * cs;
}

+ (UIImage *)forImage:(UIImage *)arg0 usingContext:(NSObject *)arg1;
+ (UIImage *)fromImage:(struct CGImage *)arg0;
+ (UIImage *)forImage:(UIImage *)arg0 downscaleToMax:(unsigned int)arg1 colorspace:(struct CGColorSpace *)arg2;
+ (UIImage *)forImage:(UIImage *)arg0 downscaleToMax:(unsigned int)arg1 colorspace:(struct CGColorSpace *)arg2 usingContext:(NSObject *)arg3;
+ (UIImage *)forImage:(UIImage *)arg0 usingContext:(NSObject *)arg1 colorspace:(struct CGColorSpace *)arg2;
+ (NSString *)fromImageFile:(NSString *)arg0;
+ (UIImage *)forImage:(UIImage *)arg0 downscaleToMax:(unsigned int)arg1;
+ (NSDictionary *)withDictionary:(NSDictionary *)arg0;

- (void)_dumpImage:(UIImage *)arg0 colorspace:(struct CGColorSpace *)arg1;
- (char *)rowAtIndex:(SEL)arg0;
- (void)dumpImage:(UIImage *)arg0;
- (void)dumpImageAsDeviceRGB:(id)arg0;
- (void)dumpImageAsDict:(id)arg0;
- (void)dealloc;
- (short)alpha;
- (CIImageRowReader *)init;
- (unsigned long)width;
- (unsigned long)height;
- (short)red;
- (short)green;
- (short)blue;
- (unsigned int)bytesPerPixel;

@end
