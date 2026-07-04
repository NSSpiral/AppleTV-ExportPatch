/* Runtime dump - CALight
 * Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CALight : NSObject <NSCopying, NSCoding>
{
    void * _attr;
    void * _priv;
}

@property (copy) NSString * type;
@property (copy) NSString * name;
@property char enabled;
@property struct CGColor * color;
@property float intensity;
@property float ambientIntensity;
@property float diffuseIntensity;
@property float specularIntensity;
@property struct CAPoint3D direction;
@property (retain) id image;
@property float imageRotation;
@property (copy) NSString * imageBlendMode;
@property float imageNormalAngle;
@property struct CAPoint3D position;
@property float falloffDistance;
@property float falloff;
@property float coneAngle;
@property float coneEdgeSoftness;

+ (CALight *)defaultValueForKey:(NSString *)arg0;
+ (void)CAMLParserStartElement:(NSObject *)arg0;
+ (CALight *)lightWithType:(NSString *)arg0;
+ (NSString *)CA_CAMLPropertyForKey:(NSString *)arg0;

- (void)CAMLParser:(NSObject *)arg0 setValue:(NSObject *)arg1 forKey:(NSString *)arg2;
- (void)encodeWithCAMLWriter:(NSObject *)arg0;
- (NSString *)CAMLTypeForKey:(NSString *)arg0;
- (struct Object *)CA_copyRenderValue;
- (char)shouldArchiveValueForKey:(NSString *)arg0;
- (float)ambientIntensity;
- (void)setAmbientIntensity:(float)arg0;
- (float)diffuseIntensity;
- (void)setDiffuseIntensity:(float)arg0;
- (float)specularIntensity;
- (void)setSpecularIntensity:(float)arg0;
- (float)falloffDistance;
- (void)setFalloffDistance:(float)arg0;
- (float)falloff;
- (void)setFalloff:(float)arg0;
- (float)coneAngle;
- (void)setConeAngle:(float)arg0;
- (float)coneEdgeSoftness;
- (void)setConeEdgeSoftness:(float)arg0;
- (float)imageRotation;
- (void)setImageRotation:(float)arg0;
- (float)imageNormalAngle;
- (void)setImageNormalAngle:(float)arg0;
- (NSString *)imageBlendMode;
- (void)setImageBlendMode:(NSString *)arg0;
- (float)intensity;
- (void)setIntensity:(float)arg0;
- (NSString *)valueForKey:(NSMutableDictionary *)arg0;
- (void)setValue:(NSObject *)arg0 forKey:(NSString *)arg1;
- (void)dealloc;
- (void)setImage:(UIImage *)arg0;
- (CALight *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (CALight *)init;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (void)setType:(NSString *)arg0;
- (NSString *)type;
- (void)setEnabled:(char)arg0;
- (char)isEnabled;
- (CALight *)copyWithZone:(struct _NSZone *)arg0;
- (UIImage *)image;
- (void)setPosition:(struct CAPoint3D)arg0;
- (NSString *)valueForKeyPath:(NSString *)arg0;
- (CALight *)initWithType:(NSString *)arg0;
- (void)setValue:(NSObject *)arg0 forKeyPath:(NSString *)arg1;
- (struct CAPoint3D)position;
- (void)setDirection:(struct CAPoint3D)arg0;
- (struct CAPoint3D)direction;
- (struct CGColor *)color;
- (void)setColor:(struct CGColor *)arg0;

@end
