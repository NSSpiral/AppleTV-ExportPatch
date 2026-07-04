/* Runtime dump - FMFSessionDataManager
 * Image: /System/Library/PrivateFrameworks/FMF.framework/FMF
 */

@interface FMFSessionDataManager : NSObject
{
    NSSet * _followers;
    NSSet * _following;
    NSSet * _locations;
}

@property (retain, nonatomic) NSSet * followers;
@property (retain, nonatomic) NSSet * following;
@property (retain, nonatomic) NSSet * locations;

+ (FMFSessionDataManager *)sharedInstance;

- (void)setLocations:(NSSet *)arg0;
- (void).cxx_destruct;
- (void *)_loadAddressBook;
- (void)abChanged:(NSNotification *)arg0;
- (NSSet *)followers;
- (NSSet *)following;
- (void)_registerABCallbacks;
- (void)setFollowers:(NSSet *)arg0;
- (void)setFollowing:(NSSet *)arg0;
- (id)followerForHandle:(id)arg0;
- (id)followingForHandle:(id)arg0;
- (id)locationForHandle:(id)arg0;
- (id)offerExpirationForHandle:(id)arg0 groupId:(NSString *)arg1;
- (NSSet *)locations;

@end
