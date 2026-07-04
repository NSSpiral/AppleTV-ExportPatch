/* Runtime dump - ATViCloudAuthenticationManager
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRDefaultAuthenticationManager.h>
@interface ATViCloudAuthenticationManager : BRDefaultAuthenticationManager
{
    ATViCloudAccountManager * _iCloudAccountManager;
}

@property (retain, nonatomic) ATViCloudAccountManager * iCloudAccountManager;

- (void)_setCurrentAccount:(NSObject *)arg0;
- (ATViCloudAccountManager *)iCloudAccountManager;
- (void)setICloudAccountManager:(ATViCloudAccountManager *)arg0;
- (ATViCloudAuthenticationManager *)init;
- (void).cxx_destruct;

@end
