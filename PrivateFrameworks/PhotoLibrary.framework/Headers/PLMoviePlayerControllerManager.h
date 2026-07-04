/* Runtime dump - PLMoviePlayerControllerManager
 * Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLMoviePlayerControllerManager : NSObject
{
    NSMutableArray * _playerStack;
}

+ (PLMoviePlayerControllerManager *)sharedInstance;

- (void)dealloc;
- (PLMoviePlayerControllerManager *)init;
- (void)moveControllerToTopOfStack:(id)arg0;
- (void)removeControllerFromStack:(BRControllerStack *)arg0;

@end
