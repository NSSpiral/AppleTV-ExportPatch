/* Runtime dump - PLImageGeometry
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLImageGeometry : NSObject <NSCopying>
{
    int _appliedOrientation;
    struct CGRect _inputRect;
}

@property (readonly, nonatomic) struct CGRect inputRect;
@property (readonly, nonatomic) struct CGRect outputRect;
@property (nonatomic) int appliedOrientation;
@property (readonly, nonatomic) struct CGAffineTransform appliedTransform;
@property (readonly, nonatomic) char sizeInverted;
@property (readonly, nonatomic) char mirrored;

+ (NSObject *)geometryWithInputSize:(struct CGSize)arg0 initialOrientation:(int)arg1;
+ (NSObject *)geometryWithOutputSize:(struct CGSize)arg0 appliedOrientation:(int)arg1;

- (PLImageGeometry *)init;
- (NSString *)description;
- (PLImageGeometry *)copyWithZone:(struct _NSZone *)arg0;
- (PLImageGeometry *)initWithInputSize:(struct CGSize)arg0;
- (void)applyOrientation:(int)arg0;
- (int)appliedOrientation;
- (struct CGRect)inputRect;
- (struct CGRect)outputRect;
- (struct CGRect)_basisRect:(NSObject *)arg0;
- (struct CGAffineTransform)_transformFromOrientation:(int)arg0 toOrientation:(int)arg1;
- (struct CGAffineTransform)appliedTransform;
- (char)isSizeInverted;
- (char)isMirrored;
- (void)flipVertically;
- (void)flipHorizontally;
- (void)rotateClockwise;
- (void)rotateCounterClockwise;
- (struct CGRect)inputRectForOutputRect:(NSObject *)arg0;
- (struct CGRect)outputRectForInputRect:(NSObject *)arg0;
- (struct CGRect)denormalizeRect:(NSObject *)arg0 basis:(SEL)arg1;
- (struct CGRect)normalizeRect:(NSObject *)arg0 basis:(SEL)arg1;
- (struct CGAffineTransform)transformToOrientation:(int)arg0;
- (struct CGAffineTransform)transformFromOrientation:(int)arg0;
- (void)setAppliedOrientation:(int)arg0;

@end
