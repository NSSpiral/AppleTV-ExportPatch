/* Runtime dump - FBSScene
 * Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSScene : NSObject

@property (readonly, copy, nonatomic) NSString * identifier;
@property (readonly, nonatomic) CADisplay * display;
@property (readonly, retain, nonatomic) FBSDisplay * fbsDisplay;
@property (nonatomic) <FBSSceneDelegate> * delegate;
@property (readonly, retain, nonatomic) FBSSceneSettings * settings;
@property (readonly, retain, nonatomic) FBSSceneClientSettings * clientSettings;
@property (readonly, retain, nonatomic) NSArray * contexts;

- (void)updateUIClientSettingsWithBlock:(id /* block */)arg0;
- (void)setDelegate:(<FBSSceneDelegate> *)arg0;
- (FBSScene *)init;
- (<FBSSceneDelegate> *)delegate;
- (void)invalidate;
- (FBSScene *)_init;
- (FBSDisplay *)fbsDisplay;
- (FBSSceneSettings *)settings;
- (FBSSceneClientSettings *)clientSettings;
- (void)sendActions:(id)arg0;
- (CADisplay *)display;
- (NSString *)identifier;
- (void)attachContext:(NSObject *)arg0;
- (void)detachContext:(NSObject *)arg0;
- (FBSScene *)initWithQueue:(NSObject<OS_dispatch_queue> *)arg0 identifier:(NSString *)arg1 display:(CADisplay *)arg2 settings:(FBSSceneSettings *)arg3 clientSettings:(FBSSceneClientSettings *)arg4;
- (void)updateClientSettingsWithBlock:(id /* block */)arg0;
- (NSArray *)contexts;
- (NSString *)_descriptionWithMultilinePrefix:(NSString *)arg0;
- (void)updateClientSettings:(NSDictionary *)arg0 withTransitionContext:(NSObject *)arg1;
- (void)attachSceneContext:(NSObject *)arg0;
- (void)detachSceneContext:(NSObject *)arg0;

@end
