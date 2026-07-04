/* Runtime dump - SSVPlaybackLeaseConfiguration
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVPlaybackLeaseConfiguration : NSObject <NSCopying>
{
    NSURL * _beginLeaseURL;
    NSURL * _getAssetURL;
    NSURL * _provisionMachineURL;
    NSURL * _refreshLeaseURL;
    NSString * _storeFrontSuffix;
    NSURL * _syncMachineURL;
    NSURL * _certificateURL;
}

@property (copy, nonatomic) NSURL * beginLeaseURL;
@property (copy, nonatomic) NSURL * certificateURL;
@property (copy, nonatomic) NSURL * getAssetURL;
@property (copy, nonatomic) NSURL * refreshLeaseURL;
@property (copy, nonatomic) NSURL * provisionMachineURL;
@property (copy, nonatomic) NSURL * syncMachineURL;
@property (copy, nonatomic) NSString * storeFrontSuffix;

- (SSVPlaybackLeaseConfiguration *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (void)setGetAssetURL:(NSURL *)arg0;
- (NSURL *)getAssetURL;
- (NSURL *)certificateURL;
- (void)setCertificateURL:(NSURL *)arg0;
- (SSVPlaybackLeaseConfiguration *)initWithURLBagDictionary:(NSDictionary *)arg0;
- (NSString *)storeFrontSuffix;
- (void)setStoreFrontSuffix:(NSString *)arg0;
- (NSURL *)beginLeaseURL;
- (NSURL *)refreshLeaseURL;
- (void)setBeginLeaseURL:(NSURL *)arg0;
- (void)setProvisionMachineURL:(NSURL *)arg0;
- (void)setRefreshLeaseURL:(NSURL *)arg0;
- (void)setSyncMachineURL:(NSURL *)arg0;
- (NSURL *)provisionMachineURL;
- (NSURL *)syncMachineURL;

@end
