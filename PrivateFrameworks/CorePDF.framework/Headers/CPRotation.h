/* Runtime dump - CPRotation
 * Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface CPRotation : CPZone
{
    float rotationAngle;
}

- (struct CGRect)bounds;
- (CPRotation *)init;
- (struct CGRect)renderedBounds;
- (void)accept:(id)arg0;
- (float)rotationAngle;
- (void)setRotationAngle:(float)arg0;

@end
