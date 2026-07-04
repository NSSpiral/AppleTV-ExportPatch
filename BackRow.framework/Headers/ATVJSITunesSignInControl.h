/* Runtime dump - ATVJSITunesSignInControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRController.h>

@protocol BRSecureResource;

@class ATVJSContext, BRAuthenticationManager, BRAuthenticator;
@interface ATVJSITunesSignInControl : BRController <BRSecureResource>
{
    unsigned int _scope;
    struct OpaqueJSValue * _jsObjectRef;
    ATVJSContext * _atvContext;
    BRAuthenticationManager * _authenticationManager;
}

@property (nonatomic) unsigned int scope;
@property (nonatomic) struct OpaqueJSValue * jsObjectRef;
@property (retain, nonatomic) ATVJSContext * atvContext;
@property (retain, nonatomic) BRAuthenticationManager * authenticationManager;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (void)addConstructorToObject:(struct OpaqueJSValue *)arg0 inContext:(struct OpaqueJSContext *)arg1;

- (BRAuthenticator *)secureResourceAuthenticator;
- (void)wasPushed;
- (void)setAtvContext:(ATVJSContext *)arg0;
- (ATVJSContext *)atvContext;
- (void)_accountActivity:(id)arg0;
- (void)setJsObjectRef:(struct OpaqueJSValue *)arg0;
- (void)_stopObservingAccountActivity;
- (BRAuthenticationManager *)authenticationManager;
- (void)_startObservingAccountActivity;
- (void)setAuthenticationManager:(BRAuthenticationManager *)arg0;
- (void)dealloc;
- (ATVJSITunesSignInControl *)init;
- (void)setScope:(unsigned int)arg0;
- (unsigned int)scope;
- (struct OpaqueJSValue *)jsObjectRef;

@end
