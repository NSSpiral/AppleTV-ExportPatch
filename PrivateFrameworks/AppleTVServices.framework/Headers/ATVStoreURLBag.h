/* Runtime dump - ATVStoreURLBag
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVStoreURLBag : NSObject
{
    ATVBackgroundTask * _bagReloadTask;
    ISOperation * _pendingOperation;
    int _ivarLock;
    char _isValid;
    ISURLBag * _fallbackBag;
    unsigned int _loadBagRetryAttempt;
}

@property (readonly, nonatomic) char isValid;
@property (retain) ISURLBag * fallbackBag;
@property (readonly, nonatomic) ISURLBag * bag;
@property unsigned int loadBagRetryAttempt;

+ (ATVStoreURLBag *)sharedInstance;

- (NSString *)URLForKey:(NSString *)arg0;
- (NSString *)valueForKey:(NSString *)arg0;
- (void)dealloc;
- (void)reload;
- (char)isValid;
- (void).cxx_destruct;
- (ATVStoreURLBag *)initInstance;
- (void)_internetStateChanged:(NSNotification *)arg0;
- (void)_storeFrontChanged:(NSNotification *)arg0;
- (void)_handleAccountActivity:(id)arg0;
- (ISURLBag *)bag;
- (NSString *)_bagContext;
- (void)_loadBagCancelPreviousRequests:(char)arg0;
- (ISURLBag *)fallbackBag;
- (void)_updateReloadTask;
- (void)setFallbackBag:(ISURLBag *)arg0;
- (void)setLoadBagRetryAttempt:(unsigned int)arg0;
- (unsigned int)loadBagRetryAttempt;
- (void)_loadBag;
- (void)_retry:(unsigned int)arg0 withSelector:(SEL)arg1;
- (NSString *)_userIdentifier;
- (double)_bagReloadInterval;
- (void)_updateReloadTaskWithInterval:(double)arg0;

@end
