/* Runtime dump - GLKEffectPropertyTexture
 * Image: /System/Library/Frameworks/GLKit.framework/GLKit
 */

@interface GLKEffectPropertyTexture : GLKEffectProperty
{
    unsigned char _enabled;
    unsigned int _name;
    unsigned int _target;
    int _envMode;
    unsigned char _matrixEnabled;
    NSString * _filePath;
    int _textureIndex;
    char * _unit2dNameString;
    char * _unitCubeNameString;
    int _unit2dLoc;
    int _unitCubeLoc;
    NSMutableArray * _texGenArray;
    GLKEffectPropertyTexGen * _texGenS;
    GLKEffectPropertyTexGen * _texGenT;
    GLKEffectPropertyTexGen * _texGenR;
    struct GLKBigInt_s _allFshMasks;
}

@property (nonatomic) unsigned char enabled;
@property (nonatomic) unsigned int name;
@property (nonatomic) unsigned int target;
@property (nonatomic) int envMode;
@property (readonly, nonatomic) GLKEffectPropertyTexGen * texGenS;
@property (readonly, nonatomic) GLKEffectPropertyTexGen * texGenT;
@property (readonly, nonatomic) GLKEffectPropertyTexGen * texGenR;
@property (readonly, nonatomic) NSMutableArray * texGenArray;
@property (nonatomic) int textureIndex;
@property (readonly, nonatomic) NSString * filePath;
@property (nonatomic) unsigned char matrixEnabled;
@property (nonatomic) int unit2dLoc;
@property (nonatomic) int unitCubeLoc;
@property (nonatomic) char * unit2dNameString;
@property (nonatomic) char * unitCubeNameString;
@property (readonly, nonatomic) unsigned char normalizedNormalsMask;
@property (readonly, nonatomic) unsigned char vPositionEyeMask;
@property (readonly, nonatomic) unsigned char vNormalEyeMask;
@property (readonly, nonatomic) unsigned char useTexCoordAttribMask;
@property (readonly, nonatomic) struct GLKBigInt_s allFshMasks;

+ (void)setStaticMasksWithVshRoot:(NSObject *)arg0 fshRoot:(NSObject *)arg1;
+ (void)clearAllTexturingMasks:(struct GLKBigInt_s *)arg0 fshMask:(struct GLKBigInt_s *)arg1;

- (void)dirtyAllUniforms;
- (unsigned char)useTexCoordAttribMask;
- (unsigned char)normalizedNormalsMask;
- (unsigned char)vNormalEyeMask;
- (unsigned char)vPositionEyeMask;
- (void)setTextureIndex:(int)arg0;
- (BOOL)includeVshShaderTextForRootNode:(NSObject *)arg0;
- (BOOL)includeFshShaderTextForRootNode:(NSObject *)arg0;
- (void)initializeMasks;
- (void)setShaderBindings;
- (struct GLKBigInt_s)allFshMasks;
- (int)textureIndex;
- (void)setUnit2dNameString:(char *)arg0;
- (void)setUnitCubeNameString:(char *)arg0;
- (GLKEffectPropertyTexGen *)texGenS;
- (GLKEffectPropertyTexGen *)texGenT;
- (GLKEffectPropertyTexGen *)texGenR;
- (void)setEnvMode:(int)arg0;
- (void)setMatrixEnabled:(unsigned char)arg0;
- (unsigned char)matrixEnabled;
- (int)envMode;
- (char *)unit2dNameString;
- (char *)unitCubeNameString;
- (int)unit2dLoc;
- (void)setUnit2dLoc:(int)arg0;
- (int)unitCubeLoc;
- (void)setUnitCubeLoc:(int)arg0;
- (NSMutableArray *)texGenArray;
- (void)bind;
- (void)dealloc;
- (GLKEffectPropertyTexture *)init;
- (NSString *)description;
- (void)setName:(unsigned int)arg0;
- (unsigned int)name;
- (void)setTarget:(unsigned int)arg0;
- (void)setEnabled:(unsigned char)arg0;
- (unsigned int)target;
- (unsigned char)enabled;
- (NSString *)filePath;

@end
