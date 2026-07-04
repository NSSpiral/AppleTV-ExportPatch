/* Runtime dump - GLKEffectProperty
 * Image: /System/Library/Frameworks/GLKit.framework/GLKit
 */

@interface GLKEffectProperty : NSObject
{
    int _location;
    char * _nameString;
    struct GLKEffectPropertyPrv * _prv;
    unsigned char _masksInitialized;
    char * _vshSource;
    char * _fshSource;
    GLKEffect * _effect;
    unsigned long long _dirtyUniforms;
}

@property (nonatomic) int location;
@property (nonatomic) char * nameString;
@property (nonatomic) char * vshSource;
@property (nonatomic) char * fshSource;
@property (nonatomic) unsigned long long dirtyUniforms;
@property (nonatomic) unsigned char masksInitialized;
@property (nonatomic) GLKEffect * effect;

+ (void)setStaticMasksWithVshRoot:(NSObject *)arg0 fshRoot:(NSObject *)arg1;
+ (void)logSetMasksWithLabel:(NSString *)arg0 obj:(NSMutableDictionary *)arg1 typeStr:(id)arg2;

- (void)dirtyAllUniforms;
- (void)setDirtyUniforms:(unsigned long long)arg0;
- (unsigned long long)dirtyUniforms;
- (BOOL)includeVshShaderTextForRootNode:(NSObject *)arg0;
- (BOOL)includeFshShaderTextForRootNode:(NSObject *)arg0;
- (void)initializeMasks;
- (void)setShaderBindings;
- (void)setMasksInitialized:(unsigned char)arg0;
- (unsigned char)masksInitialized;
- (struct GLKBigInt_s *)fshMask;
- (struct GLKBigInt_s *)vshMask;
- (void)setVSHSource:(char *)arg0;
- (void)setFSHSource:(char *)arg0;
- (void)setMasks;
- (char *)vshSource;
- (void)setVshSource:(char *)arg0;
- (char *)fshSource;
- (void)setFshSource:(char *)arg0;
- (void)bind;
- (void)dealloc;
- (GLKEffectProperty *)init;
- (int)location;
- (GLKEffect *)effect;
- (void)setEffect:(GLKEffect *)arg0;
- (void)setNameString:(char *)arg0;
- (char *)nameString;
- (void)setLocation:(int)arg0;

@end
