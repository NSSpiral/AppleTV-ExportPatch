/* Runtime dump - SCNManipulator
 * Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNManipulator : NSObject
{
    SCNAuthoringEnvironment * _authoringEnvironment;
    SCNNode * _target;
}

@property (readonly) SCNAuthoringEnvironment * authoringEnvironment;
@property (nonatomic) SCNNode * target;

- (SCNAuthoringEnvironment *)authoringEnvironment;
- (void)_setAuthoringEnvironment:(NSDictionary *)arg0;
- (char)mouseDragged:(struct ?)arg0;
- (void)setTarget:(SCNNode *)arg0;
- (SCNNode *)target;
- (char)mouseDown:(struct ?)arg0;
- (char)mouseUp:(struct ?)arg0;
- (void)draw;
- (char)mouseMoved:(struct ?)arg0;

@end
