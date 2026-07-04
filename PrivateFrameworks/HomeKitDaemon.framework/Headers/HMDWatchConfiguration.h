/* Runtime dump - HMDWatchConfiguration
 * Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDWatchConfiguration : NSObject
{
    NSString * _uniqueId;
    NSDictionary * _metadataConfig;
    NSDictionary * _homeConfig;
    NSUUID * _primaryHome;
}

@property (retain, nonatomic) NSString * uniqueId;
@property (retain, nonatomic) NSDictionary * metadataConfig;
@property (retain, nonatomic) NSDictionary * homeConfig;
@property (retain, nonatomic) NSUUID * primaryHome;

- (NSString *)description;
- (NSString *)uniqueId;
- (void).cxx_destruct;
- (NSDictionary *)metadataConfig;
- (NSDictionary *)homeConfig;
- (void)setHomeConfig:(NSDictionary *)arg0;
- (HMDWatchConfiguration *)initWithUniqueID:(NSObject *)arg0;
- (void)setHomeConfiguration:(NSDictionary *)arg0;
- (void)setConfigVersion:(NSString *)arg0 forHome:(HMHome *)arg1;
- (void)setUniqueId:(NSString *)arg0;
- (void)setMetadataConfig:(NSDictionary *)arg0;
- (NSUUID *)primaryHome;
- (void)setPrimaryHome:(NSUUID *)arg0;

@end
