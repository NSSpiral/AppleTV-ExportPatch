/* Runtime dump - LSApplicationWorkspaceObserver
 * Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

@interface LSApplicationWorkspaceObserver : NSObject <LSApplicationWorkspaceObserverProtocol, NSSecureCoding>
{
    NSUUID * _uuid;
}

@property (retain, nonatomic) NSUUID * uuid;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (char)supportsSecureCoding;

- (void)applicationInstallsDidCancel:(id)arg0;
- (void)applicationInstallsDidPause:(id)arg0;
- (void)applicationInstallsDidPrioritize:(id)arg0;
- (void)applicationInstallsDidResume:(id)arg0;
- (void)networkUsageChanged:(char)arg0;
- (void)applicationInstallsDidStart:(id)arg0;
- (void)applicationInstallsDidUpdateIcon:(UIImage *)arg0;
- (void)applicationInstallsDidChange:(NSDictionary *)arg0;
- (void)applicationsWillInstall:(id)arg0;
- (void)applicationsDidInstall:(id)arg0;
- (void)applicationsDidFailToInstall:(id)arg0;
- (void)applicationsWillUninstall:(id)arg0;
- (void)applicationsDidUninstall:(id)arg0;
- (void)applicationsDidFailToUninstall:(id)arg0;
- (void)applicationInstallsArePrioritized:(id)arg0 arePaused:(id)arg1;
- (void)dealloc;
- (LSApplicationWorkspaceObserver *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (LSApplicationWorkspaceObserver *)init;
- (NSUUID *)uuid;
- (void)setUuid:(NSUUID *)arg0;

@end
