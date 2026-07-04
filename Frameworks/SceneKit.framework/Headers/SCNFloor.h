/* Runtime dump - SCNFloor
 * Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNFloor : SCNGeometry
{
    id _reserved;
    id _isPresentationInstance;
    float _reflectivity;
    float _reflectionFalloffStart;
    float _reflectionFalloffEnd;
    float _reflectionResolutionScaleFactor;
    unsigned int _reflectionSampleCount;
}

@property (nonatomic) float reflectivity;
@property (nonatomic) float reflectionFalloffStart;
@property (nonatomic) float reflectionFalloffEnd;
@property (nonatomic) float reflectionResolutionScaleFactor;

+ (NSObject *)SCNJSExportProtocol;
+ (CLFloor *)floor;
+ (char)supportsSecureCoding;

- (struct __C3DAnimationChannel *)copyAnimationChannelForKeyPath:(void *)arg0;
- (float)reflectionFalloffStart;
- (float)reflectionFalloffEnd;
- (void)setReflectionFalloffStart:(float)arg0;
- (void)setReflectionFalloffEnd:(float)arg0;
- (float)reflectivity;
- (void)setReflectivity:(float)arg0;
- (float)reflectionResolutionScaleFactor;
- (void)setReflectionResolutionScaleFactor:(float)arg0;
- (unsigned int)reflectionSampleCount;
- (void)setReflectionSampleCount:(unsigned int)arg0;
- (void)_customDecodingOfSCNFloor:(id)arg0;
- (struct __C3DFloor *)floorRef;
- (float)reflectionFallOffStart;
- (float)reflectionFallOffEnd;
- (void)setReflectionFallOffStart:(float)arg0;
- (void)setReflectionFallOffEnd:(float)arg0;
- (struct __C3DGeometry *)__createCFObject;
- (void)dealloc;
- (SCNFloor *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (SCNFloor *)init;
- (SCNFloor *)copyWithZone:(struct _NSZone *)arg0;

@end
