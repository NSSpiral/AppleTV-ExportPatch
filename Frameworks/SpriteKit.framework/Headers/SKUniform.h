/* Runtime dump - SKUniform
 * Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKUniform : NSObject <NSCopying, NSCoding>
{
    int _type;
    NSString * _name;
    unsigned int _seed;
    SKTexture * _textureValue;
    id _value;
}

@property (readonly) NSString * name;
@property (readonly) int uniformType;
@property (retain) SKTexture * textureValue;
@property float floatValue;
@property id floatVector2Value;
@property id floatVector3Value;
@property id floatVector4Value;
@property id floatMatrix2Value;
@property id floatMatrix3Value;
@property id floatMatrix4Value;
@property unsigned int _seed;

+ (SKUniform *)uniformWithName:(NSString *)arg0;
+ (SKUniform *)uniformWithName:(NSString *)arg0 float:(float)arg1;
+ (SKUniform *)uniformWithName:(NSString *)arg0 floatVector2:(id)arg1;
+ (SKUniform *)uniformWithName:(NSString *)arg0 floatVector3:(id)arg1;
+ (SKUniform *)uniformWithName:(NSString *)arg0 floatVector4:(id)arg1;
+ (SKUniform *)uniformWithName:(NSString *)arg0 floatMatrix2:(id)arg1;
+ (SKUniform *)uniformWithName:(NSString *)arg0 floatMatrix3:(id)arg1;
+ (SKUniform *)uniformWithName:(NSString *)arg0 floatMatrix4:(id)arg1;
+ (SKUniform *)uniformWithName:(NSString *)arg0 texture:(NSObject *)arg1;

- (int)uniformType;
- (SKTexture *)textureValue;
- (id)floatVector2Value;
- (id)floatVector3Value;
- (id)floatVector4Value;
- (id)floatMatrix2Value;
- (id)floatMatrix3Value;
- (id)floatMatrix4Value;
- (void)set_seed:(unsigned int)arg0;
- (void)setFloatValue:(float)arg0;
- (void)setTextureValue:(SKTexture *)arg0;
- (void)setFloatVector2Value:(id)arg0;
- (void)setFloatVector3Value:(id)arg0;
- (void)setFloatVector4Value:(id)arg0;
- (void)setFloatMatrix2Value:(id)arg0;
- (void)setFloatMatrix3Value:(id)arg0;
- (void)setFloatMatrix4Value:(id)arg0;
- (SKUniform *)initWithName:(NSString *)arg0 float:(float)arg1;
- (SKUniform *)initWithName:(NSString *)arg0 floatVector2:(id)arg1;
- (SKUniform *)initWithName:(NSString *)arg0 floatVector3:(id)arg1;
- (SKUniform *)initWithName:(NSString *)arg0 floatVector4:(id)arg1;
- (SKUniform *)initWithName:(NSString *)arg0 floatMatrix2:(id)arg1;
- (SKUniform *)initWithName:(NSString *)arg0 floatMatrix3:(id)arg1;
- (SKUniform *)initWithName:(NSString *)arg0 floatMatrix4:(id)arg1;
- (SKUniform *)initWithName:(NSString *)arg0 texture:(NSObject *)arg1;
- (SKUniform *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (NSString *)name;
- (SKUniform *)copyWithZone:(struct _NSZone *)arg0;
- (float)floatValue;
- (void).cxx_construct;
- (unsigned int)_seed;
- (void).cxx_destruct;
- (SKUniform *)initWithName:(NSString *)arg0;

@end
