/* Runtime dump - GLKEffectPropertyTexGen
 * Image: /System/Library/Frameworks/GLKit.framework/GLKit
 */

@interface GLKEffectPropertyTexGen : GLKEffectProperty
{
    int _mode;
    float * _plane;
    int _coord;
    float * _eyePlaneByInvModelview;
    int _modeLoc;
    int _planeLoc;
    int _eyePlaneByInvModelviewLoc;
    char * _modeNameString;
    char * _planeNameString;
    unsigned int _textureIndex;
}

@property (nonatomic) int mode;
@property (readonly, nonatomic) int coord;
@property (nonatomic) float * plane;
@property (nonatomic) float * eyePlaneByInvModelview;
@property (nonatomic) int modeLoc;
@property (nonatomic) int planeLoc;
@property (nonatomic) int eyePlaneByInvModelviewLoc;
@property (nonatomic) char * modeNameString;
@property (nonatomic) char * planeNameString;
@property (nonatomic) unsigned int textureIndex;

- (void)dirtyAllUniforms;
- (void)setTextureIndex:(unsigned int)arg0;
- (void)initializeMasks;
- (void)setShaderBindings;
- (int)modeLoc;
- (void)setModeLoc:(int)arg0;
- (void)setModeNameString:(char *)arg0;
- (void)setPlaneNameString:(char *)arg0;
- (char *)modeNameString;
- (char *)planeNameString;
- (GLKEffectPropertyTexGen *)initWithMode:(int)arg0 coord:(int)arg1;
- (void)setPlane:(float *)arg0;
- (int)coord;
- (float *)eyePlaneByInvModelview;
- (void)setEyePlaneByInvModelview:(float *)arg0;
- (int)planeLoc;
- (void)setPlaneLoc:(int)arg0;
- (int)eyePlaneByInvModelviewLoc;
- (void)setEyePlaneByInvModelviewLoc:(int)arg0;
- (unsigned int)textureIndex;
- (float *)plane;
- (void)bind;
- (void)dealloc;
- (GLKEffectPropertyTexGen *)init;
- (void)setMode:(int)arg0;
- (int)mode;

@end
