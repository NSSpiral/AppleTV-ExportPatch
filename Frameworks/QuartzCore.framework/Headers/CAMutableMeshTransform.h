/* Runtime dump - CAMutableMeshTransform
 * Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CAMutableMeshTransform : CAMeshTransform

@property (copy) NSString * depthNormalization;
@property int subdivisionSteps;

+ (CAMeshTransform *)meshTransform;

- (NSString *)depthNormalization;
- (int)subdivisionSteps;
- (void)replaceVertexAtIndex:(unsigned long)arg0 withVertex:(struct CAMeshVertex)arg1;
- (void)replaceFaceAtIndex:(unsigned long)arg0 withFace:(struct CAMeshFace)arg1;
- (void)setDepthNormalization:(NSString *)arg0;
- (void)setSubdivisionSteps:(int)arg0;
- (void)removeVertexAtIndex:(unsigned long)arg0;
- (void)addFace:(struct CAMeshFace)arg0;
- (void)removeFaceAtIndex:(unsigned long)arg0;
- (CAMutableMeshTransform *)init;
- (CAMutableMeshTransform *)copyWithZone:(struct _NSZone *)arg0;
- (void)addVertex:(struct CAMeshVertex)arg0;

@end
