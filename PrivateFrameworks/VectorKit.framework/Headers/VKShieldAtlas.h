/* Runtime dump - VKShieldAtlas
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKShieldAtlas : NSObject
{
    NSMapTable * _atlasToImages;
    NSLock * _atlasToImagesLock;
    VKPShieldPack * _shieldPack;
}

- (void)dealloc;
- (void)purge;
- (VKShieldAtlas *)initWithShieldPack:(VKPShieldPack *)arg0;
- (NSString *)artworkForShieldIdentifier:(NSString *)arg0 textLength:(unsigned int)arg1 contentScale:(float)arg2 size:(int)arg3 numberOfLines:(unsigned int)arg4 genericShieldGenerator:(VKGenericShieldGenerator *)arg5 colors:(struct ? *)arg6;

@end
