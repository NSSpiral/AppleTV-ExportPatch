/* Runtime dump - AirPlayImage
 * Image: /System/Library/PrivateFrameworks/AirPlayReceiver.framework/AirPlayReceiver
 */

@interface AirPlayImage : NSObject
{
    struct CGSize _unadjustedSize;
    struct CGImage * _image;
    void * _ioSurface;
    int _imageOrientation;
    struct CGSize _scale;
}

@property (readonly, nonatomic) struct CGSize size;
@property (readonly, nonatomic) id layerContents;
@property (readonly, nonatomic) void * ioSurface;
@property (readonly, nonatomic) struct CGImage * CGImage;
@property (readonly, nonatomic) int imageOrientation;
@property (nonatomic) struct CGSize scale;

- (void)dealloc;
- (struct CGSize)size;
- (struct CGSize)scale;
- (struct CGImage *)CGImage;
- (int)imageOrientation;
- (AirPlayImage *)initWithContentsOfFile:(NSString *)arg0;
- (AirPlayImage *)initWithData:(NSData *)arg0;
- (void *)ioSurface;
- (void)setScale:(struct CGSize)arg0;
- (struct CGAffineTransform)contentsTransformForLayer:(id)arg0;
- (id)layerContents;
- (AirPlayImage *)initWithData:(NSData *)arg0 decode:(char)arg1;
- (AirPlayImage *)initWithContentsOfFile:(NSString *)arg0 decode:(char)arg1;
- (struct CGSize)_unadjustedContentSize;
- (void)_setCGImage:(struct CGImage *)arg0;
- (void)_setIOSurface:(void *)arg0;
- (void)_setImageOrientation:(int)arg0;

@end
