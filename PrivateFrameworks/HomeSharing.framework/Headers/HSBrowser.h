/* Runtime dump - HSBrowser
 * Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

@interface HSBrowser : NSObject <NSNetServiceDelegate>
{
    id _addLibraryHandler;
    NSArray * _availableLibraries;
    struct _DNSServiceRef_t * _dnsService;
    NSObject<OS_dispatch_queue> * _dnsServiceQueue;
    char _isBrowsing;
    id _removeLibraryHandler;
    int _browserType;
    NSString * _homeSharingGroupID;
}

@property (nonatomic) int browserType;
@property (copy, nonatomic) NSString * homeSharingGroupID;
@property (readonly, nonatomic) NSArray * availableLibraries;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (NSString *)homeSharingGroupID;
- (void)setHomeSharingGroupID:(NSString *)arg0;
- (void)startWithAddLibraryHandler:(id /* block */)arg0 removeLibraryHandler:(/* block */ id)arg1;
- (NSArray *)availableLibraries;
- (void)dealloc;
- (HSBrowser *)init;
- (void)stop;
- (void).cxx_destruct;
- (void)_startWithCurrentRetryCount:(unsigned int)arg0 maximumRetryCount:(unsigned int)arg1 addLibraryHandler:(id /* block */)arg2 removeLibraryHandler:(/* block */ id)arg3;
- (void)_didFindService:(NSObject *)arg0 moreComing:(char)arg1;
- (void)_didRemoveService:(NSObject *)arg0 moreComing:(char)arg1;
- (int)browserType;
- (void)setBrowserType:(int)arg0;

@end
