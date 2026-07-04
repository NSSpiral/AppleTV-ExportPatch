/* Runtime dump - FBWindowContextHostView
 * Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBWindowContextHostView : UIView <FBWindowContextManagerObserver, FBSceneBoundsDelegate>
{
    FBScene * _scene;
    FBLayerHostContainer * _contentLayer;
    UIScreen * _screen;
    char _counteractUIScreenJail;
    <FBWindowContextHostViewDelegate> * _delegate;
    FBWindowContextManager * _contextManager;
    FBWindowContextHostViewContentLayerDelegate * _contentLayerDelegate;
    NSMutableArray * _layerHosts;
    NSMutableSet * _hiddenContexts;
    NSMutableOrderedSet * _contexts;
}

@property (readonly, retain, nonatomic) FBScene * scene;
@property (nonatomic) <FBWindowContextHostViewDelegate> * delegate;
@property (retain, nonatomic) FBWindowContextManager * contextManager;
@property (copy, nonatomic) NSSet * hiddenContexts;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)setDebug:(char)arg0;
- (FBScene *)scene;
- (FBWindowContextHostView *)initWithScene:(FBScene *)arg0;
- (void)dealloc;
- (void)setDelegate:(<FBWindowContextHostViewDelegate> *)arg0;
- (BRWindow *)window;
- (FBWindowContextHostView *)init;
- (NSString *)description;
- (<FBWindowContextHostViewDelegate> *)delegate;
- (id)_hitTest:(struct CGPoint)arg0 withEvent:(Event *)arg1 windowServerHitTestWindow:(UIWindow *)arg2;
- (char)hasContent;
- (FBWindowContextManager *)contextManager;
- (void)_adjustLayerFrameAndTransform:(NSObject *)arg0;
- (void)_noteHostingStatusChanged;
- (char)isHosting;
- (void)windowContextManager:(NSObject *)arg0 didRepositionContext:(NSObject *)arg1 from:(unsigned int)arg2 to:(unsigned int)arg3;
- (void)sceneDidChangeBounds:(id)arg0;
- (void)setContextManager:(FBWindowContextManager *)arg0;
- (NSSet *)hiddenContexts;
- (void)setHiddenContexts:(NSSet *)arg0;

@end
