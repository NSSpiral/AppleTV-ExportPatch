/* Runtime dump - BBAction
 * Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBAction : NSObject <NSCopying, NSSecureCoding>
{
    id _internalBlock;
    char _deliverResponse;
    NSURL * _launchURL;
    NSString * _launchBundleID;
    char _launchCanBypassPinLock;
    char _authenticationRequired;
    char _shouldDismissBulletin;
    NSString * _activatePluginName;
    NSDictionary * _activatePluginContext;
    int _actionType;
    NSString * _identifier;
    BBAppearance * _appearance;
    unsigned int _activationMode;
    NSString * _remoteViewControllerClassName;
    NSString * _remoteServiceBundleIdentifier;
}

@property (copy, nonatomic) NSString * identifier;
@property (copy, nonatomic) BBAppearance * appearance;
@property (nonatomic) char authenticationRequired;
@property (nonatomic) char shouldDismissBulletin;
@property (copy, nonatomic) NSURL * launchURL;
@property (copy, nonatomic) NSString * launchBundleID;
@property (nonatomic) char launchCanBypassPinLock;
@property (nonatomic) unsigned int activationMode;
@property (copy, nonatomic) NSString * activatePluginName;
@property (copy, nonatomic) NSDictionary * activatePluginContext;
@property (copy, nonatomic) NSString * remoteViewControllerClassName;
@property (copy, nonatomic) NSString * remoteServiceBundleIdentifier;
@property (nonatomic) char canBypassPinLock;
@property (copy, nonatomic) id internalBlock;
@property (nonatomic) int actionType;

+ (NSURL *)action;
+ (char)supportsSecureCoding;
+ (NSString *)actionWithIdentifier:(NSString *)arg0;
+ (NSURL *)actionWithLaunchURL:(NSURL *)arg0 callblock:(id)arg1;
+ (NSObject *)actionWithLaunchBundleID:(NSString *)arg0 callblock:(id)arg1;
+ (BBAction *)actionWithCallblock:(id)arg0;
+ (NSObject *)actionWithAppearance:(BBAppearance *)arg0;
+ (NSString *)actionWithIdentifier:(NSString *)arg0 title:(NSString *)arg1;
+ (NSURL *)actionWithLaunchURL:(NSURL *)arg0;
+ (NSObject *)actionWithLaunchBundleID:(NSString *)arg0;
+ (NSString *)actionWithActivatePluginName:(NSString *)arg0 activationContext:(NSString *)arg1;

- (void)dealloc;
- (BBAction *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (BBAction *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSURL *)url;
- (NSString *)identifier;
- (BBAction *)copyWithZone:(struct _NSZone *)arg0;
- (BBAppearance *)appearance;
- (void)setIdentifier:(NSString *)arg0;
- (BBAction *)initWithIdentifier:(NSString *)arg0;
- (unsigned int)activationMode;
- (char)isAuthenticationRequired;
- (void)setActivationMode:(unsigned int)arg0;
- (void)setAuthenticationRequired:(char)arg0;
- (NSString *)launchBundleID;
- (NSURL *)launchURL;
- (char)deliverResponse:(char)arg0;
- (void)setAppearance:(BBAppearance *)arg0;
- (void)setCallblock:(id)arg0;
- (void)setLaunchURL:(NSURL *)arg0;
- (void)setLaunchBundleID:(NSString *)arg0;
- (void)setActivatePluginName:(NSString *)arg0;
- (void)setActivatePluginContext:(NSDictionary *)arg0;
- (void)setInternalBlock:(id /* block */)arg0;
- (NSString *)activatePluginName;
- (NSString *)remoteServiceBundleIdentifier;
- (NSString *)remoteViewControllerClassName;
- (char)launchCanBypassPinLock;
- (void)setLaunchCanBypassPinLock:(char)arg0;
- (id /* block */)internalBlock;
- (char)canBypassPinLock;
- (NSDictionary *)activatePluginContext;
- (NSObject *)_nameForActionType:(int)arg0;
- (char)shouldDismissBulletin;
- (void)setCanBypassPinLock:(char)arg0;
- (void)setRemoteViewControllerClassName:(NSString *)arg0;
- (void)setRemoteServiceBundleIdentifier:(NSString *)arg0;
- (void)setShouldDismissBulletin:(char)arg0;
- (NSString *)partialDescription;
- (char)hasLaunchAction;
- (char)hasPluginAction;
- (char)hasRemoteViewAction;
- (NSString *)bundleID;
- (void)setActionType:(int)arg0;
- (int)actionType;

@end
