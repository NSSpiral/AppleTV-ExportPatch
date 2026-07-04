/* Runtime dump - TSCH3DVector
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DVector : NSObject <NSCopying, NSMutableCopying>
{
    float _x;
    float _y;
    float _z;
    float _w;
}

@property (readonly, nonatomic) float x;
@property (readonly, nonatomic) float y;
@property (readonly, nonatomic) float z;
@property (readonly, nonatomic) float w;

+ (TSCH3DVector *)x:(float)arg0 y:(float)arg1 z:(float)arg2 w:(float)arg3;
+ (TSCH3DVector *)x:(float)arg0 y:(float)arg1 z:(float)arg2;
+ (unsigned int)hashVec4:(struct tvec4<float> *)arg0;
+ (TSCH3DVector *)vectorWithVec2:(struct tvec2<float> *)arg0;
+ (TSCH3DVector *)vectorWithVec3:(struct tvec3<float> *)arg0;
+ (TSCH3DVector *)vectorWithVec4:(struct tvec4<float> *)arg0;
+ (TSCH3DVector *)instanceWithArchive:(struct Chart3DVectorArchive *)arg0 unarchiver:(struct Chart3DVectorArchive)arg1;
+ (MPVector *)vector;

- (void)didInitFromSOS;
- (void)saveToArchive:(struct Chart3DVectorArchive *)arg0 archiver:(NSObject *)arg1;
- (TSCH3DVector *)initWithArchive:(struct Chart3DVectorArchive *)arg0 unarchiver:(struct Chart3DVectorArchive)arg1;
- (TSCH3DVector *)initWithX:(float)arg0 y:(float)arg1 z:(float)arg2 w:(float)arg3;
- (TSCH3DVector *)initWithVec4:(struct tvec4<float> *)arg0;
- (TSCH3DVector *)initWithVec2:(struct tvec2<float> *)arg0;
- (TSCH3DVector *)initWithVec3:(struct tvec3<float> *)arg0;
- (struct tvec4<float>)value4;
- (struct tvec3<float>)value3;
- (struct tvec2<float>)value2;
- (TSCH3DVector *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (struct tvec4<float>)value;
- (TSCH3DVector *)copyWithZone:(struct _NSZone *)arg0;
- (float)x;
- (float)y;
- (float)z;
- (TSCH3DVector *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (float)w;
- (TSCH3DVector *)initWithX:(float)arg0 y:(float)arg1 z:(float)arg2;
- (float)valueForDimension:(unsigned int)arg0;

@end
