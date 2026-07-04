/* Runtime dump - TSCH3DSpotLight
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DSpotLight : TSCH3DLight <TSCH3DLightPositionable, TSCH3DLightDirectional>
{
    TSCH3DVector * _position;
    TSCH3DVector * _direction;
    float _cutOff;
    float _dropOff;
}

@property (nonatomic) struct tvec3<float> position;
@property (nonatomic) struct tvec3<float> direction;
@property (nonatomic) float cutOff;
@property (nonatomic) float dropOff;

+ (TSCH3DSpotLight *)instanceWithArchive:(struct Chart3DLightArchive *)arg0 unarchiver:(struct Chart3DLightArchive)arg1;
+ (Class)effectClass;

- (void)saveToArchive:(struct Chart3DLightArchive *)arg0 archiver:(NSObject *)arg1;
- (TSCH3DSpotLight *)initWithArchive:(struct Chart3DLightArchive *)arg0 unarchiver:(struct Chart3DLightArchive)arg1;
- (float)cutOff;
- (float)dropOff;
- (void)setCutOff:(float)arg0;
- (void)setDropOff:(float)arg0;
- (void)dealloc;
- (TSCH3DSpotLight *)init;
- (NSString *)description;
- (TSCH3DSpotLight *)copyWithZone:(struct _NSZone *)arg0;
- (void)setPosition:(struct tvec3<float>)arg0;
- (struct tvec3<float>)position;
- (void)setDirection:(struct tvec3<float>)arg0;
- (struct tvec3<float>)direction;

@end
