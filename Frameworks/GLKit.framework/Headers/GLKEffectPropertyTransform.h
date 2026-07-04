/* Runtime dump - GLKEffectPropertyTransform
 * Image: /System/Library/Frameworks/GLKit.framework/GLKit
 */

@interface GLKEffectPropertyTransform : GLKEffectProperty
{
    id _modelviewMatrix;
    id _projectionMatrix;
    id _normalMatrix;
    int _mvpMatrixLoc;
    int _modelviewMatrixLoc;
    int _projectionMatrixLoc;
    int _normalMatrixLoc;
    int _invModelviewMatrixLoc;
    id _invModelviewMatrix;
    id _mvpMatrix;
}

@property (nonatomic) id modelviewMatrix;
@property (nonatomic) id projectionMatrix;
@property (readonly, nonatomic) id normalMatrix;
@property (nonatomic) id mvpMatrix;
@property (nonatomic) id invModelviewMatrix;
@property (nonatomic) int projectionMatrixLoc;
@property (nonatomic) int modelviewMatrixLoc;
@property (nonatomic) int mvpMatrixLoc;
@property (nonatomic) int normalMatrixLoc;
@property (nonatomic) int invModelviewMatrixLoc;

+ (void)setStaticMasksWithVshRoot:(NSObject *)arg0 fshRoot:(NSObject *)arg1;

- (void)dirtyAllUniforms;
- (void)setShaderBindings;
- (struct tmat3x3<float>)normalMatrix;
- (id)modelviewMatrix;
- (void)loadMatrix:(int)arg0 matrix:(OADStyleMatrix *)arg1;
- (id)invModelviewMatrix;
- (id)mvpMatrix;
- (void)loadIdentity:(int)arg0;
- (void)setProjectionMatrix:(id)arg0;
- (void)setModelviewMatrix:(id)arg0;
- (void)setInvModelviewMatrix:(id)arg0;
- (void)setMvpMatrix:(id)arg0;
- (int)mvpMatrixLoc;
- (void)setMvpMatrixLoc:(int)arg0;
- (int)modelviewMatrixLoc;
- (void)setModelviewMatrixLoc:(int)arg0;
- (int)projectionMatrixLoc;
- (void)setProjectionMatrixLoc:(int)arg0;
- (int)normalMatrixLoc;
- (void)setNormalMatrixLoc:(int)arg0;
- (int)invModelviewMatrixLoc;
- (void)setInvModelviewMatrixLoc:(int)arg0;
- (void)bind;
- (void)dealloc;
- (GLKEffectPropertyTransform *)init;
- (NSString *)description;
- (id)projectionMatrix;

@end
