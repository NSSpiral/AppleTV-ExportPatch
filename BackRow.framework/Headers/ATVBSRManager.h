/* Runtime dump - ATVBSRManager
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRSingleton.h>

@class BRController;
@interface ATVBSRManager : BRSingleton
{
    char _performingBSR;
}

+ (ATVBSRManager *)singleton;
+ (void)setSingleton:(NSObject *)arg0;

- (void)_performResetFromIR;
- (void)_showBSRScreenWithController:(BRController *)arg0;
- (void)enterBSRModeWithCompletionBlock:(id /* block */)arg0;
- (void)enterWithModes:(NSArray *)arg0 withCompletionBlock:(id /* block */)arg1;
- (void)dealloc;
- (ATVBSRManager *)init;

@end
