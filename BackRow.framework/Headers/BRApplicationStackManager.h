/* Runtime dump - BRApplicationStackManager
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRSingleton.h>

@class BRControllerStack, BRWindow;
@interface BRApplicationStackManager : BRSingleton
{
    BRControllerStack * _stack;
    BRWindow * _window;
}

+ (BRApplicationStackManager *)singleton;
+ (void)setSingleton:(NSObject *)arg0;

- (BRControllerStack *)stack;
- (void)show;
- (BRWindow *)window;
- (BRApplicationStackManager *)init;

@end
