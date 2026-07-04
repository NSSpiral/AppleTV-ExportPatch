/* Runtime dump - NSNetServiceBrowser
 * Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface NSNetServiceBrowser : NSObject
{
    id _netServiceBrowser;
    id _delegate;
    void * _reserved;
    char _includesPeerToPeer;
}

@property <NSNetServiceBrowserDelegate> * delegate;
@property char includesPeerToPeer;

- (char)includesPeerToPeer;
- (char)_includesAWDL;
- (void)setIncludesPeerToPeer:(char)arg0;
- (void)_setIncludesAWDL:(char)arg0;
- (struct __CFNetServiceBrowser *)_internalNetServiceBrowser;
- (void)searchForBrowsableDomains;
- (void)searchForRegistrationDomains;
- (void)_dispatchCallBack:(void *)arg0 flags:(unsigned long)arg1 error:(struct ?)arg2;
- (void)searchForAllDomains;
- (void)dealloc;
- (void)setDelegate:(<NSNetServiceBrowserDelegate> *)arg0;
- (NSNetServiceBrowser *)init;
- (<NSNetServiceBrowserDelegate> *)delegate;
- (void)stop;
- (void)searchForServicesOfType:(NSObject *)arg0 inDomain:(NSString *)arg1;
- (void)scheduleInRunLoop:(NSObject *)arg0 forMode:(struct __CFString *)arg1;
- (void)removeFromRunLoop:(NSObject *)arg0 forMode:(struct __CFString *)arg1;
- (void)finalize;

@end
