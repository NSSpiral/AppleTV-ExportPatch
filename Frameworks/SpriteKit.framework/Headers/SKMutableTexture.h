/* Runtime dump - SKMutableTexture
 * Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKMutableTexture : SKTexture
{
    struct __IOSurface * _ioSurface;
    char _ioSurfaceBacked;
    struct CGSize _textureSize;
    void * _pixelData;
    unsigned long _pixelDataLength;
    int _pixelFormat;
}

+ (SKMutableTexture *)mutableTextureWithSize:(struct CGSize)arg0;

- (void)modifyPixelDataWithBlock:(id /* block */)arg0;
- (SKMutableTexture *)initWithSize:(struct CGSize)arg0 ioSurfaceBacked:(char)arg1 pixelFormat:(int)arg2;
- (SKMutableTexture *)initWithSize:(struct CGSize)arg0 pixelFormat:(int)arg1;
- (void)dealloc;
- (NSString *)description;
- (SKMutableTexture *)initWithSize:(struct CGSize)arg0;
- (void).cxx_construct;
- (void)load;

@end
