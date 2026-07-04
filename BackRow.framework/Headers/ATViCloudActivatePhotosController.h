/* Runtime dump - ATViCloudActivatePhotosController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATViCloudActivateMyPSController.h>

@protocol BRSecureResource;

@class BRAuthenticator, BRListControl, BRMenuItem;
@interface ATViCloudActivatePhotosController : ATViCloudActivateMyPSController <BRSecureResource>
{
    char _cupidAccountOnInit;
    int _mode;
}

@property (readonly, nonatomic) int mode;
@property (nonatomic) char cupidAccountOnInit;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (ATViCloudActivatePhotosController *)appRootControllerWithMode:(int)arg0;

- (BRAuthenticator *)secureResourceAuthenticator;
- (BRMenuItem *)list:(BRListControl *)arg0 menuItemForRowAtIndexPath:(NSIndexPath *)arg1;
- (long)list:(BRListControl *)arg0 numberOfRowsInSection:(long)arg1;
- (void)list:(BRListControl *)arg0 didSelectItemAtIndexPath:(NSIndexPath *)arg1;
- (ATViCloudActivatePhotosController *)initWithMode:(int)arg0;
- (void)_onWasPushed;
- (void)_performActivation;
- (char)cupidAccountOnInit;
- (void)setCupidAccountOnInit:(char)arg0;
- (int)mode;

@end
