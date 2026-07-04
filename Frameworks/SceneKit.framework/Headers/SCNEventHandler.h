/* Runtime dump - SCNEventHandler
 * Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNEventHandler : NSObject
{
    id _reserved;
    SCNView * _view;
}

@property (readonly) SCNView * view;

- (void)sceneWillChange;
- (void)sceneDidChange;
- (void)viewDidDraw;
- (void)cameraWillChange;
- (void)cameraDidChange;
- (char)wantsRedraw;
- (void)dealloc;
- (SCNEventHandler *)init;
- (SCNView *)view;
- (NSMutableArray *)gestureRecognizers;
- (void)setView:(SCNView *)arg0;
- (void)viewWillDraw;

@end
