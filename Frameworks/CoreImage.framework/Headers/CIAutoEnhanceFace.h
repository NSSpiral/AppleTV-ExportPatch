/* Runtime dump - CIAutoEnhanceFace
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIAutoEnhanceFace : NSObject
{
    int size;
    int centerX;
    int centerY;
    double I;
    double Q;
}

@property (readonly) int size;
@property (readonly) int centerX;
@property (readonly) int centerY;
@property (readonly) double I;
@property (readonly) double Q;

- (struct CGRect)faceRect;
- (CIAutoEnhanceFace *)initWithBounds:(struct CGRect)arg0 andImage:(struct CGSize)arg1 usingContext:(NSObject *)arg2;
- (int)centerX;
- (int)centerY;
- (double)I;
- (double)Q;
- (int)size;
- (NSString *)description;

@end
