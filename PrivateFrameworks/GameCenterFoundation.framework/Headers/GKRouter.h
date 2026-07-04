/* Runtime dump - GKRouter
 * Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKRouter : NSObject
{
    NSMutableArray * _routes;
    NSMutableArray * _handlers;
}

- (char)dispatch:(VKDispatch *)arg0;
- (void)dealloc;
- (GKRouter *)init;
- (void)scheme:(NSString *)arg0 from:(NSObject *)arg1 to:(NSObject *)arg2;
- (void)from:(NSObject *)arg0 to:(NSObject *)arg1;

@end
