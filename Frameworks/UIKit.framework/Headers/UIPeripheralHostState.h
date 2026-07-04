/* Runtime dump - UIPeripheralHostState
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPeripheralHostState : NSObject
{
    struct UIPeripheralAnimationGeometry _geometry;
    NSDictionary * _screenGeometry;
    char _inPositionIsDestination;
}

@property (nonatomic) struct UIPeripheralAnimationGeometry geometry;
@property (retain, nonatomic) NSDictionary * screenGeometry;
@property (nonatomic) char inPositionIsDestination;

+ (NSObject *)stateWithGeometry:(struct UIPeripheralAnimationGeometry)arg0 inPositionIsDestination:(struct CGPoint)arg1;

- (void)dealloc;
- (struct UIPeripheralAnimationGeometry)geometry;
- (void)setGeometry:(struct UIPeripheralAnimationGeometry)arg0;
- (void)setInPositionIsDestination:(char)arg0;
- (void)setScreenGeometry:(NSDictionary *)arg0;
- (NSDictionary *)screenGeometry;
- (char)inPositionIsDestination;

@end
