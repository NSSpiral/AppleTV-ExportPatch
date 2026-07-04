/* Runtime dump - PSStackPushAnimationController
 * Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSStackPushAnimationController : NSObject <UIViewControllerAnimatedTransitioning>
{
    NSArray * _snapshots;
    NSMutableArray * _animationsToRunAlongsideToVC;
    char _hasStartedAnimation;
    NSArray * _viewControllers;
    UINavigationController * _navigationController;
    id _completionBlock;
    int _animationPreset;
    float _springDamping;
    double _startStagger;
    double _completionStagger;
    double _pushDuration;
}

@property (retain, nonatomic) NSArray * viewControllers;
@property (nonatomic) UINavigationController * navigationController;
@property (copy, nonatomic) id completionBlock;
@property (nonatomic) int animationPreset;
@property (nonatomic) double startStagger;
@property (nonatomic) double completionStagger;
@property (nonatomic) double pushDuration;
@property (nonatomic) float springDamping;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (PSStackPushAnimationController *)controllerWithViewControllerStack:(id)arg0 navigationController:(UINavigationController *)arg1;
+ (NSObject *)_snapshotOfViewController:(BRController *)arg0 withNavigationBar:(UINavigationBar *)arg1 prevViewController:(BRController *)arg2;
+ (NSSet *)_animationParametersForPreset:(int)arg0;
+ (void)setDefaultAnimationPreset:(int)arg0;
+ (void)resetDefaultAnimationParameters;

- (void)dealloc;
- (PSStackPushAnimationController *)init;
- (double)transitionDuration:(double)arg0;
- (void)animateTransition:(NSObject *)arg0;
- (void)animationEnded:(char)arg0;
- (id /* block */)completionBlock;
- (void)setCompletionBlock:(id /* block */)arg0;
- (UINavigationController *)navigationController;
- (NSArray *)viewControllers;
- (void)setViewControllers:(NSArray *)arg0;
- (void)setNavigationController:(UINavigationController *)arg0;
- (void)animateAlongsideToViewController:(BRController *)arg0;
- (void)_loadDefaultValues;
- (char)_shouldSkipFirstPush;
- (double)_desiredDuration;
- (double)_actualDuration;
- (void)_addAnimation:(NSObject *)arg0 forViewAtIndex:(/* block */ id)arg1 count:(unsigned int)arg2;
- (id)_valueForAnimationParameter:(id)arg0;
- (int)animationPreset;
- (void)setAnimationPreset:(int)arg0;
- (double)startStagger;
- (void)setStartStagger:(double)arg0;
- (double)completionStagger;
- (void)setCompletionStagger:(double)arg0;
- (double)pushDuration;
- (void)setPushDuration:(double)arg0;
- (float)springDamping;
- (void)setSpringDamping:(float)arg0;

@end
