/* Runtime dump - CAMeshTransform
 * Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CAMeshTransform : NSObject <NSCoding, NSCopying, NSMutableCopying>
{
    void * _impl;
    unsigned long _normalization;
    long _subdivisionSteps;
}

@property (readonly) unsigned long vertexCount;
@property (readonly) unsigned long faceCount;
@property (readonly, copy) NSString * depthNormalization;
@property (readonly) int subdivisionSteps;

+ (void)CAMLParserStartElement:(NSObject *)arg0;
+ (void)CAMLParserEndElement:(NSObject *)arg0 content:(char *)arg1;
+ (CAMeshTransform *)meshTransformWithVertexCount:(unsigned long)arg0 vertices:(struct CAMeshVertex *)arg1 faceCount:(struct CAMeshVertex)arg2 faces:(struct CAPoint3D)arg3 depthNormalization:(NSString *)arg4;

- (void)encodeWithCAMLWriter:(NSObject *)arg0;
- (NSData *)_data;
- (struct Object *)CA_copyRenderValue;
- (NSArray *)CA_interpolateValues:(NSArray *)arg0 :(id)arg1 :(id)arg2 interpolator:(struct ValueInterpolator *)arg3;
- (CALayer *)meshTransformForLayer:(id)arg0;
- (CAMeshTransform *)initWithVertexCount:(unsigned long)arg0 vertices:(struct CAMeshVertex *)arg1 faceCount:(struct CAMeshVertex)arg2 faces:(struct CAPoint3D)arg3 depthNormalization:(NSString *)arg4;
- (NSString *)_initWithMeshTransform:(CAMeshTransform *)arg0;
- (NSString *)depthNormalization;
- (char)_constructWithData:(NSData *)arg0;
- (unsigned long)faceCount;
- (struct CAMeshFace)faceAtIndex:(unsigned long)arg0;
- (int)subdivisionSteps;
- (id)_subdivideToDepth:(int)arg0;
- (void)dealloc;
- (CAMeshTransform *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (CAMeshTransform *)init;
- (CAMeshTransform *)_init;
- (CAMeshTransform *)copyWithZone:(struct _NSZone *)arg0;
- (float)CA_distanceToValue:(id)arg0;
- (CAMeshTransform *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (id)CA_interpolateValue:(id)arg0 byFraction:(float)arg1;
- (struct CAMeshVertex)vertexAtIndex:(NSObject *)arg0;
- (unsigned long)vertexCount;

@end
