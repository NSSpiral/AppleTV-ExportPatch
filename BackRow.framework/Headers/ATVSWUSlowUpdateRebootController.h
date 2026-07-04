/* Runtime dump - ATVSWUSlowUpdateRebootController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRViewController.h>

@class BREvent, BRListControl, BRMenuItem;
@interface ATVSWUSlowUpdateRebootController : BRViewController
{
    char _attemptingToReboot;
    id _rebootBlock;
}

@property (copy, nonatomic) id rebootBlock;
@property (nonatomic) char attemptingToReboot;

- (char)brEventAction:(BREvent *)arg0;
- (void)wasPushed;
- (BRMenuItem *)list:(BRListControl *)arg0 menuItemForRowAtIndexPath:(NSIndexPath *)arg1;
- (long)list:(BRListControl *)arg0 numberOfRowsInSection:(long)arg1;
- (void)list:(BRListControl *)arg0 didSelectItemAtIndexPath:(NSIndexPath *)arg1;
- (void)setRebootBlock:(id /* block */)arg0;
- (char)attemptingToReboot;
- (id /* block */)rebootBlock;
- (void)setAttemptingToReboot:(char)arg0;
- (ATVSWUSlowUpdateRebootController *)initWithRebootBlock:(id /* block */)arg0;
- (void)dealloc;
- (ATVSWUSlowUpdateRebootController *)init;
- (void).cxx_destruct;

@end
