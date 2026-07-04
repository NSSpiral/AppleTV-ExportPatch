/* Runtime dump - VKImage
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKImage : NSObject
{
    struct CGImage * _imageRef;
    NSData * _data;
    NSString * _name;
    struct CGSize _size;
    float _scale;
    char _usedAsTextureAndImage;
    struct Texture2D * _gglTexture;
    VKResourceManager * _resourceManager;
}

- (void)dealloc;
- (struct CGSize)size;
- (float)scale;
- (VKImage *)initWithData:(NSData *)arg0 scale:(float)arg1;
- (struct CGImage *)image;
- (void).cxx_construct;
- (struct Texture2D *)gglTexture;
- (VKImage *)initWithCGImage:(struct CGImage *)arg0 scale:(float)arg1 usedAsTextureAndImage:(char)arg2;
- (VKImage *)initWithData:(NSData *)arg0 scale:(float)arg1 usedAsTextureAndImage:(char)arg2;
- (VKImage *)initWithCGImage:(struct CGImage *)arg0 scale:(float)arg1;
- (VKImage *)initWithName:(NSString *)arg0 scale:(float)arg1 resourceManager:(VKResourceManager *)arg2;

@end
