/* Runtime dump - PT2DGraphDatum
 * Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@interface PT2DGraphDatum : NSObject <PT2DGraphDatum>
{
    UIColor * _color;
    struct CGPoint _graphPoint;
}

@property (nonatomic) struct CGPoint graphPoint;
@property (retain, nonatomic) UIColor * color;

+ (NSObject *)datumWithPoint:(struct CGPoint)arg0;

- (UIColor *)color;
- (void)setColor:(UIColor *)arg0;
- (void).cxx_destruct;
- (void)setGraphPoint:(struct CGPoint)arg0;
- (struct CGPoint)graphPoint;

@end
