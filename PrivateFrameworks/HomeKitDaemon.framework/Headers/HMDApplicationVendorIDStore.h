/* Runtime dump - HMDApplicationVendorIDStore
 * Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDApplicationVendorIDStore : NSObject <NSSecureCoding>
{
    HMDHomeManager * _homeManager;
}

@property (weak, nonatomic) HMDHomeManager * homeManager;

+ (char)supportsSecureCoding;
+ (HMDApplicationVendorIDStore *)sharedStore;
+ (NSObject *)setSharedStore:(NSObject *)arg0 withManager:(NSObject *)arg1;

- (HMDApplicationVendorIDStore *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void).cxx_destruct;
- (HMDHomeManager *)homeManager;
- (void)setHomeManager:(HMDHomeManager *)arg0;
- (id)vendorIDForApplication:(id)arg0;
- (void)addVendorID:(NSObject *)arg0 applicationBundleId:(NSObject *)arg1 spiClient:(char)arg2;
- (void)addVendorID:(NSObject *)arg0 applicationBundleId:(NSObject *)arg1 companionAppBundleId:(NSObject *)arg2;
- (void)addVendorIDData:(NSData *)arg0 applicationBundleId:(NSObject *)arg1;
- (void)removeVendorIDForApplicationBundleId:(NSObject *)arg0;

@end
