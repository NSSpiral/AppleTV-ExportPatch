/* Runtime dump - SettingsComputersDiagnosticsBrowserController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRViewController.h>

@protocol NSNetServiceBrowserDelegate;
@protocol NSNetServiceDelegate;

@class BRListControl, BRMenuItem, SettingsComputersDiagnosticsView;
@interface SettingsComputersDiagnosticsBrowserController : BRViewController <NSNetServiceBrowserDelegate, NSNetServiceDelegate>
{
    SettingsComputersDiagnosticsView * _diagnosticsBrowserView;
    int _state;
    NSNetServiceBrowser * _netServiceBrowser;
    char _isSearching;
    NSMutableArray * _foundShares;
    NSMutableArray * _resolvingServices;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)wasPopped;
- (BRMenuItem *)list:(BRListControl *)arg0 menuItemForRowAtIndexPath:(NSIndexPath *)arg1;
- (long)numberOfSectionsInList:(BRListControl *)arg0;
- (long)list:(BRListControl *)arg0 numberOfRowsInSection:(long)arg1;
- (void)list:(BRListControl *)arg0 didSelectItemAtIndexPath:(NSIndexPath *)arg1;
- (void)_startHomeShareListing;
- (void)_disconnectAllActiveClients;
- (SettingsComputersDiagnosticsBrowserController *)initWithDiagnosticState:(int)arg0;
- (void)_serverStatusDidChange:(NSDictionary *)arg0;
- (void)dealloc;
- (void)reload;
- (void).cxx_destruct;
- (void)netServiceBrowserWillSearch:(NSNetServiceBrowser *)arg0;
- (void)netServiceBrowserDidStopSearch:(NSNetServiceBrowser *)arg0;
- (void)netServiceBrowser:(NSNetServiceBrowser *)arg0 didNotSearch:(NSDictionary *)arg1;
- (void)netServiceBrowser:(NSNetServiceBrowser *)arg0 didFindService:(NSNetService *)arg1 moreComing:(char)arg2;
- (void)netServiceBrowser:(NSNetServiceBrowser *)arg0 didRemoveService:(NSNetService *)arg1 moreComing:(char)arg2;
- (void)netServiceDidResolveAddress:(NSNetService *)arg0;
- (void)netService:(NSNetService *)arg0 didNotResolve:(NSDictionary *)arg1;

@end
