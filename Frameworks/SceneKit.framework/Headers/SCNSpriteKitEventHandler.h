/* Runtime dump - SCNSpriteKitEventHandler
 * Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNSpriteKitEventHandler : NSObject
{
    SKScene * _scene;
    NSMutableDictionary * _touchMap;
}

@property (retain, nonatomic) SKScene * scene;

- (SKScene *)scene;
- (void)setScene:(SKScene *)arg0;
- (void)dealloc;
- (SCNSpriteKitEventHandler *)init;
- (void)touchesBegan:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesMoved:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesEnded:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesCancelled:(NSSet *)arg0 withEvent:(Event *)arg1;

@end
