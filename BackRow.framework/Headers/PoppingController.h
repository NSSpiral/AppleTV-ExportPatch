/* Runtime dump - PoppingController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRController.h>

@protocol BRSecureResource;

@class BRAuthenticator;
@interface PoppingController : BRController <BRSecureResource>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (BRAuthenticator *)secureResourceAuthenticator;
- (void)wasPushed;

@end
