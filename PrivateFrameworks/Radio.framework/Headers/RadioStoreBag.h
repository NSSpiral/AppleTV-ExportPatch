/* Runtime dump - RadioStoreBag
 * Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioStoreBag : NSObject
{
    NSArray * _amdDomains;
    NSString * _leaseCertificateURLString;
    NSDictionary * _mescalRequestWhitelist;
    NSDictionary * _mescalResponseWhitelist;
    NSString * _mescalSetupCertURLString;
    NSString * _mescalSetupURLString;
    SSVPlatformContext * _platformContext;
    NSNumber * _shouldSendKBSyncDataValue;
    NSString * _srdnldURLString;
    NSString * _storeFrontSuffix;
    NSDictionary * _tiltDictionary;
}

@property (readonly, nonatomic) char adFreeRadioEnabled;
@property (readonly, nonatomic) NSURL * baseURL;
@property (readonly, nonatomic) NSString * platformLookupURLString;
@property (readonly, nonatomic) NSDictionary * radioConfigurationDictionary;
@property (readonly, nonatomic) char shouldSendKBSyncData;
@property (readonly, nonatomic) NSString * streamingDownloadURLString;
@property (readonly, nonatomic) NSString * mescalCertificateURLString;
@property (readonly, nonatomic) NSString * mescalSetupURLString;
@property (readonly, nonatomic) NSString * leaseCertificateURLString;
@property (readonly, copy, nonatomic) NSDictionary * URLBagDictionary;

- (NSURL *)baseURL;
- (void).cxx_destruct;
- (NSDictionary *)radioConfigurationDictionary;
- (char)shouldSendKBSyncData;
- (NSDictionary *)_cacheRepresentation;
- (NSDictionary *)_initWithURLBagDictionary:(NSDictionary *)arg0;
- (char)isAdFreeRadioEnabled;
- (NSString *)platformLookupURLString;
- (char)shouldMescalSignRequestWithURL:(NSString *)arg0;
- (char)shouldMescalVerifyResponseFromURL:(NSURL *)arg0;
- (NSDictionary *)_initWithCacheRepresentation:(NSDictionary *)arg0;
- (NSString *)_platformContext;
- (NSString *)mescalCertificateURLString;
- (NSString *)mescalSetupURLString;
- (NSString *)streamingDownloadURLString;
- (NSString *)leaseCertificateURLString;
- (NSDictionary *)URLBagDictionary;

@end
