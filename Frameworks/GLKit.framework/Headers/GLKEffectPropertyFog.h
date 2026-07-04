/* Runtime dump - GLKEffectPropertyFog
 * Image: /System/Library/Frameworks/GLKit.framework/GLKit
 */

@interface GLKEffectPropertyFog : GLKEffectProperty
{
    unsigned char _enabled;
    int _mode;
    id _color;
    float _density;
    float _start;
    float _end;
    int _modeLoc;
    int _colorLoc;
    int _densityLoc;
    int _startLoc;
    int _endLoc;
}

@property (nonatomic) unsigned char enabled;
@property (nonatomic) int mode;
@property (nonatomic) id color;
@property (nonatomic) float density;
@property (nonatomic) float start;
@property (nonatomic) float end;
@property (nonatomic) int modeLoc;
@property (nonatomic) int colorLoc;
@property (nonatomic) int densityLoc;
@property (nonatomic) int startLoc;
@property (nonatomic) int endLoc;

+ (void)setStaticMasksWithVshRoot:(NSObject *)arg0 fshRoot:(NSObject *)arg1;

- (void)dirtyAllUniforms;
- (BOOL)includeVshShaderTextForRootNode:(NSObject *)arg0;
- (BOOL)includeFshShaderTextForRootNode:(NSObject *)arg0;
- (void)initializeMasks;
- (void)setShaderBindings;
- (int)modeLoc;
- (void)setModeLoc:(int)arg0;
- (int)colorLoc;
- (void)setColorLoc:(int)arg0;
- (int)densityLoc;
- (void)setDensityLoc:(int)arg0;
- (int)startLoc;
- (void)setStartLoc:(int)arg0;
- (int)endLoc;
- (void)setEndLoc:(int)arg0;
- (void)bind;
- (void)dealloc;
- (GLKEffectPropertyFog *)init;
- (NSString *)description;
- (void)setEnabled:(unsigned char)arg0;
- (void)setMode:(int)arg0;
- (int)mode;
- (void)setDensity:(float)arg0;
- (UIColor *)color;
- (void)setColor:(UIColor *)arg0;
- (unsigned char)enabled;
- (float)start;
- (float)end;
- (float)density;
- (void)setStart:(float)arg0;
- (void)setEnd:(float)arg0;

@end
