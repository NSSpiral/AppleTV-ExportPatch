/* Runtime dump - SKTextureCache
 * Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKTextureCache : NSObject
{
    int filteringMode;
    unsigned int texId;
    int texInternalFormat;
    unsigned int texFormat;
    unsigned int texType;
    struct CGSize size;
    struct CGSize pixelSize;
    char isLoaded;
    char hasAlpha;
    char isPOT;
    char * pixelData;
    unsigned int * alphaMap;
    struct CGSize alphaMapSize;
    int state;
    int lock;
    struct CGImage * collisionMask;
    int wrapMode;
}

@property (nonatomic) int filteringMode;
@property (nonatomic) int wrapMode;
@property (nonatomic) unsigned int texId;
@property (nonatomic) int texInternalFormat;
@property (nonatomic) unsigned int texFormat;
@property (nonatomic) unsigned int texType;
@property (nonatomic) struct CGSize size;
@property (nonatomic) struct CGSize pixelSize;
@property (nonatomic) char isLoaded;
@property (nonatomic) char hasAlpha;
@property (nonatomic) char isPOT;
@property (nonatomic) char * pixelData;
@property (nonatomic) unsigned int * alphaMap;
@property (nonatomic) struct CGSize alphaMapSize;
@property (nonatomic) int state;
@property (readonly, nonatomic) int * lock;

- (int)filteringMode;
- (char)hasAlpha;
- (void)setFilteringMode:(int)arg0;
- (int *)getLock;
- (unsigned int)texId;
- (void)setTexId:(unsigned int)arg0;
- (char)isPOT;
- (void)setIsPOT:(char)arg0;
- (void)setHasAlpha:(char)arg0;
- (unsigned int *)alphaMap;
- (void)setAlphaMap:(unsigned int *)arg0;
- (struct CGSize)alphaMapSize;
- (void)setAlphaMapSize:(struct CGSize)arg0;
- (int)texInternalFormat;
- (void)setTexInternalFormat:(int)arg0;
- (unsigned int)texFormat;
- (void)setTexFormat:(unsigned int)arg0;
- (unsigned int)texType;
- (void)setTexType:(unsigned int)arg0;
- (int)wrapMode;
- (void)dealloc;
- (struct CGSize)size;
- (SKTextureCache *)init;
- (int)state;
- (void)setState:(int)arg0;
- (void)setSize:(struct CGSize)arg0;
- (void).cxx_construct;
- (char)isLoaded;
- (void)setPixelSize:(struct CGSize)arg0;
- (void)setIsLoaded:(char)arg0;
- (char *)pixelData;
- (void)setPixelData:(char *)arg0;
- (void)setWrapMode:(int)arg0;
- (struct CGSize)pixelSize;

@end
