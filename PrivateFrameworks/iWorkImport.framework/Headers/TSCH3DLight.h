/* Runtime dump - TSCH3DLight
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DLight : NSObject <NSCopying>
{
    NSString * _name;
    TSCH3DVector * _ambientColor;
    TSCH3DVector * _diffuseColor;
    TSCH3DVector * _specularColor;
    float _intensity;
    TSCH3DVector * _attenuation;
    int _coordinateSpace;
    char _enabled;
}

@property (copy, nonatomic) NSString * name;
@property (nonatomic) struct tvec4<float> ambientColor;
@property (nonatomic) struct tvec4<float> diffuseColor;
@property (nonatomic) struct tvec4<float> specularColor;
@property (nonatomic) float intensity;
@property (nonatomic) struct tvec3<float> attenuation;
@property (nonatomic) int coordinateSpace;
@property (nonatomic) char enabled;

+ (TSCH3DLight *)instanceWithArchive:(struct Chart3DLightArchive *)arg0 unarchiver:(struct Chart3DLightArchive)arg1;
+ (NSArray *)lightClasses;
+ (SCNLight *)light;

- (void)didInitFromSOS;
- (void)saveToArchive:(struct Chart3DLightArchive *)arg0 archiver:(NSObject *)arg1;
- (TSCH3DLight *)initWithArchive:(struct Chart3DLightArchive *)arg0 unarchiver:(struct Chart3DLightArchive)arg1;
- (void)affect:(id)arg0 states:(NSArray *)arg1 texturePool:(struct unique_ptr<ggl::TexturePool, std::__1::default_delete<ggl::TexturePool> >)arg2;
- (struct tvec3<float>)attenuation;
- (void)setAttenuation:(struct tvec3<float>)arg0;
- (void)setCoordinateSpace:(int)arg0;
- (TSCH3DLight *)initWithLightArchive:(struct Chart3DLightArchive *)arg0 unarchiver:(struct Chart3DLightArchive)arg1;
- (void)saveToLightArchive:(struct Chart3DLightArchive *)arg0 archiver:(NSObject *)arg1;
- (void)setDiffuseColor:(struct tvec4<float>)arg0;
- (void)setSpecularColor:(struct tvec4<float>)arg0;
- (struct tvec4<float>)diffuseColor;
- (struct tvec4<float>)specularColor;
- (float)intensity;
- (void)setIntensity:(float)arg0;
- (void)setAmbientColor:(struct tvec4<float>)arg0;
- (struct tvec4<float>)ambientColor;
- (void)dealloc;
- (TSCH3DLight *)init;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (void)setEnabled:(char)arg0;
- (TSCH3DLight *)copyWithZone:(struct _NSZone *)arg0;
- (int)coordinateSpace;
- (char)enabled;

@end
