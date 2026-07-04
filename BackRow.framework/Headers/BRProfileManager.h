/* Runtime dump - BRProfileManager
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRSingleton.h>

@protocol MCProfileConnectionObserver;
@interface BRProfileManager : BRSingleton <MCProfileConnectionObserver>
{
    unsigned int _installedProfileCount;
}

@property (nonatomic) unsigned int installedProfileCount;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (BRProfileManager *)singleton;
+ (void)setSingleton:(NSObject *)arg0;

- (void)startWatchingForConfigurationChanges;
- (unsigned int)installedProfileCount;
- (id)profileWithUUID:(id)arg0;
- (void)_profileListChangedNotification:(NSNotification *)arg0;
- (void)_profileQueuedForInstallation:(id)arg0;
- (void)setInstalledProfileCount:(unsigned int)arg0;
- (void)profileConnectionDidReceiveProfileListChangedNotification:(MCProfileConnection *)arg0 userInfo:(NSDictionary *)arg1;

@end
