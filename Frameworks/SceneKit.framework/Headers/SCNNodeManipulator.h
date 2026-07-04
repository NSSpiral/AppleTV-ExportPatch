/* Runtime dump - SCNNodeManipulator
 * Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNNodeManipulator : SCNManipulator
{
    id _xAxisToZAxisTransform;
    id _yAxisToZAxisTransform;
    id _xyPlaneToYZPlaneTransform;
    id _xyPlaneToXZPlaneTransform;
    id _actionData;
    char _isMouseDown;
    unsigned short _action;
}

- (char)mouseDragged:(struct ?)arg0;
- (SCNNodeManipulator *)init;
- (SCNNodeManipulator *)copy;
- (char)mouseDown:(struct ?)arg0;
- (char)mouseUp:(struct ?)arg0;
- (void)draw;
- (char)mouseMoved:(struct ?)arg0;

@end
