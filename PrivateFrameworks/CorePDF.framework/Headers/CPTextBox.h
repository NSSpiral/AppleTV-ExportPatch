/* Runtime dump - CPTextBox
 * Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface CPTextBox : CPRegion
{
    float rotationAngle;
}

- (struct CGRect)bounds;
- (CPTextBox *)init;
- (NSString *)description;
- (CPTextBox *)copyWithZone:(struct _NSZone *)arg0;
- (char)isRotated;
- (void)accept:(id)arg0;
- (char)isBoxRegion;
- (float)rotationAngle;
- (void)setRotationAngle:(float)arg0;

@end
