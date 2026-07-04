/* Runtime dump - IKLink
 * Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface IKLink : NSObject
{
    SKNode * _node;
    float _angleInitial;
    float _angle;
    float _length;
    id _position;
    id _size;
}

@property (retain, nonatomic) SKNode * node;
@property (nonatomic) id position;
@property (nonatomic) float angleInitial;
@property (readonly, nonatomic) float angle;
@property (nonatomic) float length;
@property (nonatomic) id size;

- (float)normalizeAngle:(float)arg0;
- (void)rotateByAngle:(float)arg0;
- (float)angleInitial;
- (void)setAngleInitial:(float)arg0;
- (struct CGSize)size;
- (float)length;
- (void)setSize:(struct CGSize)arg0;
- (void)setPosition:(struct CGPoint)arg0;
- (struct SCNVector3)position;
- (void)setLength:(float)arg0;
- (void).cxx_construct;
- (SKNode *)node;
- (IKLink *)initWithNode:(SKNode *)arg0;
- (float)angle;
- (void).cxx_destruct;
- (void)setNode:(SKNode *)arg0;

@end
