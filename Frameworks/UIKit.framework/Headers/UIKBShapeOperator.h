/* Runtime dump - UIKBShapeOperator
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBShapeOperator : NSObject
{
    float _scale;
}

@property (nonatomic) float scale;

+ (UIKBShapeOperator *)operatorWithScale:(float)arg0;

- (float)scale;
- (void)setScale:(float)arg0;
- (struct ?)_scaleRange:(struct ?)arg0 factor:(float)arg1;
- (id)shapeByScalingShape:(id)arg0 factor:(struct CGSize)arg1;
- (struct CGRect)_scaleRect:(NSObject *)arg0 factor:(SEL)arg1;
- (NSObject *)geometryByScalingShapeGeometry:(NSObject *)arg0 factor:(struct CGSize)arg1;
- (id)shapesByScalingShapes:(id)arg0 factor:(struct CGSize)arg1;
- (id)shapesByElaboratingShapes:(id)arg0 insideShape:(id)arg1 count:(int)arg2;

@end
