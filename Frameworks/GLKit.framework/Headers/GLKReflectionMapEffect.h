/* Runtime dump - GLKReflectionMapEffect
 * Image: /System/Library/Frameworks/GLKit.framework/GLKit
 */

@interface GLKReflectionMapEffect : GLKBaseEffect <GLKNamedEffect>
{
    GLKEffectPropertyTexture * _textureCubeMap;
    id _matrix;
    char _dirtyUniforms;
    int _matrixLoc;
}

@property (readonly, nonatomic) GLKEffectPropertyTexture * textureCubeMap;
@property (nonatomic) id matrix;
@property (nonatomic) char dirtyUniforms;
@property (nonatomic) int matrixLoc;

- (void)prepareToDraw;
- (void)setDirtyUniforms:(char)arg0;
- (char)dirtyUniforms;
- (GLKEffectPropertyTexture *)textureCubeMap;
- (void)setMatrix:(OADStyleMatrix *)arg0;
- (int)matrixLoc;
- (void)setMatrixLoc:(int)arg0;
- (void)dealloc;
- (GLKReflectionMapEffect *)init;
- (NSString *)description;
- (struct tmat4x4<float>)matrix;

@end
