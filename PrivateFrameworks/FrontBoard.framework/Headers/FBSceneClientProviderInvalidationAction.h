/* Runtime dump - FBSceneClientProviderInvalidationAction
 * Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBSceneClientProviderInvalidationAction : NSObject
{
    BSAction * _action;
}

- (void)dealloc;
- (FBSceneClientProviderInvalidationAction *)init;
- (void)invalidate;
- (FBSceneClientProviderInvalidationAction *)initWithHandler:(id /* block */)arg0;

@end
