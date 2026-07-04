/* Runtime dump - SKTextureAtlas
 * Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKTextureAtlas : NSObject <NSCoding>
{
    NSDictionary * _textureDict;
    NSString * _atlasName;
}

@property (readonly, nonatomic) NSArray * textureNames;

+ (SKTextureAtlas *)findTextureNamed:(id)arg0;
+ (SKTextureAtlas *)atlasNamed:(id)arg0;
+ (char)canUseObjectForAtlas:(id)arg0;
+ (void)preloadTextureAtlases:(id)arg0 withCompletionHandler:(id /* block */)arg1;
+ (SKTextureAtlas *)getSupportedPostfixes;
+ (NSDictionary *)atlasWithDictionary:(NSDictionary *)arg0;

- (id)textureNamed:(id)arg0;
- (NSData *)_copyImageData;
- (void)preloadWithCompletionHandler:(id /* block */)arg0;
- (void)preload;
- (void)loadTextures;
- (void)parseAtlasPropertyList:(NSArray *)arg0 withPath:(NSString *)arg1;
- (id)findTextureNamedFromAtlas:(id)arg0;
- (NSArray *)textureNames;
- (void)dealloc;
- (SKTextureAtlas *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (SKTextureAtlas *)init;
- (NSString *)description;
- (void).cxx_destruct;
- (void)unload;

@end
