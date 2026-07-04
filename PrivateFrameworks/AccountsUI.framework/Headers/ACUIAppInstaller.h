/* Runtime dump - ACUIAppInstaller
 * Image: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
 */

@interface ACUIAppInstaller : NSObject
{
    ACUIAppDescription * _app;
    NSDate * _dateOfLastReachabilityCheck;
    char _cachedReachabilityResult;
    NSDate * _dateOfLastInstallationCheck;
    char _resultOfLastInstallationCheck;
    char _needsAvailableInStoreCheck;
    char _availableInStoreResult;
    NSURL * _publisherURL;
    <ACUIAppInstallerDelegate> * _delegate;
}

@property (readonly, nonatomic) char isInstalled;
@property (retain, nonatomic) NSURL * publisherURL;
@property (readonly, nonatomic) char isDownloadable;
@property (readonly, nonatomic) char requiresReachabilityCheckToDetermineDownloadability;
@property (readonly, nonatomic) char isAvailableInStore;
@property (weak, nonatomic) <ACUIAppInstallerDelegate> * delegate;

+ (ACUIAppInstaller *)currentStoreFront;

- (char)isDownloadable;
- (char)isInstalled;
- (void)setDelegate:(<ACUIAppInstallerDelegate> *)arg0;
- (<ACUIAppInstallerDelegate> *)delegate;
- (void)start;
- (void).cxx_destruct;
- (char)_quicklyGenerateCachedReachabilityResultConsideringPublisherURL:(char)arg0;
- (void)_setCachedReachabilityResult:(char)arg0;
- (char)_isGreenTeaAvailable;
- (void)fetchDownloadability:(id)arg0;
- (void)_performReachabilityCheck:(id)arg0;
- (void)_setAvailableInStoreResult:(char)arg0;
- (void)checkAvailabilityInStore:(NSObject *)arg0;
- (void)_performAvailabilityCheck:(id)arg0;
- (ACUIAppInstaller *)initForAppWithDescription:(NSString *)arg0;
- (char)requiresReachabilityCheckToDetermineDownloadability;
- (char)isAvailableInStore;
- (NSURL *)publisherURL;
- (void)setPublisherURL:(NSURL *)arg0;

@end
