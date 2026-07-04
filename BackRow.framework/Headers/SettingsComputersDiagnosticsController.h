/* Runtime dump - SettingsComputersDiagnosticsController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRViewController.h>

@class BRControl, BRListControl, BRMenuItem, SettingsComputersDiagnosticsView;
@interface SettingsComputersDiagnosticsController : BRViewController
{
    SettingsComputersDiagnosticsView * _diagnosticsView;
}

- (BRMenuItem *)list:(BRListControl *)arg0 menuItemForRowAtIndexPath:(NSIndexPath *)arg1;
- (long)numberOfSectionsInList:(BRListControl *)arg0;
- (long)list:(BRListControl *)arg0 numberOfRowsInSection:(long)arg1;
- (BRControl *)list:(BRListControl *)arg0 sectionHeaderForSection:(long)arg1;
- (void)list:(BRListControl *)arg0 didSelectItemAtIndexPath:(NSIndexPath *)arg1;
- (void)list:(BRListControl *)arg0 didFocusItemAtIndexPath:(NSIndexPath *)arg1;
- (id)_diagnosticItemForRow:(long)arg0;
- (id)_homeShareInfoItemForRow:(long)arg0;
- (void)_handleDiagnosticsItemSelectedForRow:(long)arg0;
- (void)dealloc;
- (SettingsComputersDiagnosticsController *)init;
- (void).cxx_destruct;

@end
