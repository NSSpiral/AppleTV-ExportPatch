/* Runtime dump - VKIconAtlas
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKIconAtlas : NSObject
{
    VKPIconPack * _iconPack;
    struct /* ? */ _artworkPool;
    NSMapTable * _atlasToImages;
    NSLock * _atlasToImagesLock;
}

- (void)dealloc;
- (VKIconAtlas *)init;
- (void).cxx_construct;
- (void).cxx_destruct;
- (NSString *)artworkForName:(NSString *)arg0 style:(struct ? *)arg1 contentScale:(float)arg2 size:(struct Matrix<float, 4, 1>)arg3;
- (NSString *)artworkForStyleAttributeKey:(unsigned int)arg0 value:(unsigned int)arg1 style:(struct ? *)arg2 contentScale:(float)arg3 size:(struct Matrix<float, 4, 1>)arg4;
- (NSString *)artworkForStyleAttributeKey:(unsigned int)arg0 longValue:(unsigned long long)arg1 style:(struct ? *)arg2 contentScale:(float)arg3 size:(struct Matrix<float, 4, 1>)arg4;
- (VKIconAtlas *)initWithIconPack:(VKPIconPack *)arg0;
- (struct CGImage *)_createImageForIconInfo:(NSDictionary *)arg0 contentScale:(float)arg1;
- (struct CGImage *)_createImageForName:(NSString *)arg0 contentScale:(float)arg1 size:(int)arg2;
- (UIImage *)_artworkForBaseImage:(struct CGImage *)arg0 additionalImage:(struct CGImage *)arg1 cacheKey:(NSString *)arg2 style:(struct ? *)arg3 contentScale:(float)arg4;

@end
