/* Runtime dump - SwapOnPushController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRController.h>
@interface SwapOnPushController : BRController
{
    id controllerCreator;
}

@property (copy) id controllerCreator;

- (void)wasPushed;
- (void)setControllerCreator:(id)arg0;
- (id)controllerCreator;
- (void)dealloc;

@end
