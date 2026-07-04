/* Runtime dump - SCRCRawImage
 * Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

@interface SCRCRawImage : NSObject
{
    struct CGImage * _imageRef;
    char * _data;
    int _width;
    int _height;
    int _bytesPerPixel;
}

@property (nonatomic) char * data;
@property (nonatomic) int width;
@property (nonatomic) int height;
@property (nonatomic) int bytesPerPixel;
@property (retain, nonatomic) struct CGImage * imageRef;

+ (UIImage *)rawImageForImage:(struct CGImage *)arg0;

- (void)dealloc;
- (char *)data;
- (void)setData:(char *)arg0;
- (struct CGImage *)imageRef;
- (int)width;
- (int)height;
- (void)setWidth:(int)arg0;
- (void)setHeight:(int)arg0;
- (int)bytesPerPixel;
- (void)setBytesPerPixel:(int)arg0;
- (void)setImageRef:(struct CGImage *)arg0;

@end
