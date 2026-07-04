/* Runtime dump - NetflixRegistration
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/NetflixNrdObject.h>

@protocol NetflixNrdObjectProtocol;

@class NetflixNrdObjectCallback;
@interface NetflixRegistration : NetflixNrdObject <NetflixNrdObjectProtocol>
{
    NetflixNrdObjectCallback * createDeviceAccountCallback_;
    NetflixNrdObjectCallback * selectDeviceAccountCallback_;
    NetflixNrdObjectCallback * unselectDeviceAccountCallback_;
    NetflixNrdObjectCallback * deactivateCallback_;
    NetflixNrdObjectCallback * deactivateAllCallback_;
}

@property (readonly) NSArray * deviceAccounts;
@property (readonly) NSString * currentDeviceAccount;
@property (readonly) char registered;
@property (copy) NSDictionary * activationTokens;
@property (retain) NetflixNrdObjectCallback * createDeviceAccountCallback;
@property (retain) NetflixNrdObjectCallback * selectDeviceAccountCallback;
@property (retain) NetflixNrdObjectCallback * unselectDeviceAccountCallback;
@property (retain) NetflixNrdObjectCallback * deactivateCallback;
@property (retain) NetflixNrdObjectCallback * deactivateAllCallback;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NetflixRegistration *)sharedInstance;

- (void)addEventListener:(NetflixNrdObjectCallback *)arg0 name:(NSString *)arg1;
- (void)removeEventListener:(NetflixNrdObjectCallback *)arg0 name:(NSString *)arg1;
- (NSString *)currentDeviceAccount;
- (char)validateDak:(id)arg0;
- (void)setCreateDeviceAccountCallback:(NetflixNrdObjectCallback *)arg0;
- (void)setSelectDeviceAccountCallback:(NetflixNrdObjectCallback *)arg0;
- (void)setUnselectDeviceAccountCallback:(NetflixNrdObjectCallback *)arg0;
- (void)activate:(id *)arg0 params:(NSDictionary *)arg1;
- (void)setDeactivateCallback:(NetflixNrdObjectCallback *)arg0;
- (void)setDeactivateAllCallback:(NetflixNrdObjectCallback *)arg0;
- (NSArray *)deviceAccounts;
- (NetflixNrdObjectCallback *)createDeviceAccountCallback;
- (NetflixNrdObjectCallback *)selectDeviceAccountCallback;
- (NetflixNrdObjectCallback *)unselectDeviceAccountCallback;
- (NetflixNrdObjectCallback *)deactivateCallback;
- (NetflixNrdObjectCallback *)deactivateAllCallback;
- (NSDictionary *)activationTokens;
- (void)setActivationTokens:(NSDictionary *)arg0;
- (void)startRendezvous;
- (void)cancelRendezvous;
- (void)createDeviceAccount:(NSObject *)arg0;
- (void)selectDeviceAccount:(NSObject *)arg0 callback:(struct OpaqueJSValue *)arg1;
- (void)unselectDeviceAccount:(NSObject *)arg0;
- (void)getDeviceTokens;
- (void)tokenActivate:(id)arg0;
- (void)emailActivate:(id)arg0 password:(NSString *)arg1;
- (void)massDeactivationCheck;
- (void)deactivate:(id)arg0 callback:(struct OpaqueJSValue *)arg1;
- (void)deactivateAll:(id)arg0;
- (char)registered;
- (void)dealloc;
- (char)handleEvent:(NSDictionary *)arg0;
- (void).cxx_destruct;

@end
