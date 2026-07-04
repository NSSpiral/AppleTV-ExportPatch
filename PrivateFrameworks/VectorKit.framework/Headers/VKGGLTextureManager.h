/* Runtime dump - VKGGLTextureManager
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKGGLTextureManager : NSObject <GEOResourceManifestTileGroupObserver>
{
    unsigned int _tileGroupIdentifier;
    NSObject<OS_dispatch_queue> * _textureQueue;
    struct shared_ptr<ggl::Texture2D> _whiteTexture;
    struct /* ? */ _textureDictionary;
    VKResourceManager * _resourceManager;
    struct Device * _device;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (void).cxx_construct;
- (void)purge;
- (void).cxx_destruct;
- (VKGGLTextureManager *)initWithTileGroupIdentifier:(unsigned int)arg0 resourceManager:(VKResourceManager *)arg1 device:(struct Device *)arg2;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(GEOResourceManifestManager *)arg0;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(GEOResourceManifestManager *)arg0;
- (struct shared_ptr<ggl::Texture2D>)textureWithName:(NSString *)arg0 forScale:(SEL)arg1;
- (struct Texture2D *)whiteTexture;
- (struct shared_ptr<ggl::Texture2D>)textureWithName:(NSString *)arg0 forScale:(SEL)arg1 mipmap:(id)arg2 repeatWrap:(float)arg3;
- (struct shared_ptr<ggl::Texture2D>)textureWithName:(NSString *)arg0 mipmap:(SEL)arg1 repeatWrap:(id)arg2;
- (NSString *)dataWithName:(NSString *)arg0 fromResourceManager:(NSObject *)arg1;
- (struct shared_ptr<ggl::Texture2D>)textureWithName:(NSString *)arg0;

@end
