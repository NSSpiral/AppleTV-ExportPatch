/* Runtime dump - PTXParallaxView
 * Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@interface PTXParallaxView : UIView <_UISettingsKeyObserver, PTXParallaxObserver>
{
    PTXParallaxController * _parallaxController;
    PTXParallaxSettings * _settings;
    float _viewAlpha;
    PTXMotionWindow * _slideWindowX;
    PTXMotionWindow * _slideWindowY;
    PTXMotionWindow * _tiltWindowX;
    PTXMotionWindow * _tiltWindowY;
    char _stopped;
    char _resizesView;
    UIView * _view;
}

@property (retain, nonatomic) UIView * view;
@property (nonatomic) char resizesView;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (void)layoutSubviews;
- (UIView *)view;
- (void)setView:(UIView *)arg0;
- (void)stop;
- (void)start;
- (void)settings:(PTXParallaxSettings *)arg0 changedValueForKey:(NSString *)arg1;
- (void).cxx_destruct;
- (void)_updateSettings;
- (struct CATransform3D)_tiltTransform:(struct CGPoint)arg0;
- (struct CATransform3D)_slideTransform:(struct CGPoint)arg0;
- (void)_clearOffset;
- (void)handleParallaxOffset:(struct CGPoint)arg0 lockStatus:(int)arg1 strength:(float)arg2;
- (void)clearParallaxOffset;
- (PTXParallaxView *)initWithView:(UIView *)arg0 parallaxController:(PTXParallaxController *)arg1 settings:(PTXParallaxSettings *)arg2;
- (void)setViewAlpha:(float)arg0;
- (char)resizesView;
- (void)setResizesView:(char)arg0;

@end
