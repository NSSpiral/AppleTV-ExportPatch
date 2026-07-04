/* Runtime dump - ATVAcquisitionProperties
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVAcquisitionProperties : NSObject <NSCopying>
{
    NSString * _buyParams;
    NSString * _urlBagKey;
    NSString * _userAgent;
    NSNumber * _dsid;
    NSString * _strongToken;
}

@property (copy, nonatomic) NSString * buyParams;
@property (copy, nonatomic) NSString * urlBagKey;
@property (copy, nonatomic) NSString * userAgent;
@property (copy, nonatomic) NSNumber * dsid;
@property (copy, nonatomic) NSString * strongToken;

+ (ATVAcquisitionProperties *)acquisitionPropertiesWithBuyParams:(NSString *)arg0 urlbagKey:(NSString *)arg1;

- (ATVAcquisitionProperties *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (void)setStrongToken:(NSString *)arg0;
- (void)setBuyParams:(NSString *)arg0;
- (void)setUrlBagKey:(NSString *)arg0;
- (NSString *)buyParams;
- (NSString *)urlBagKey;
- (NSString *)strongToken;
- (NSNumber *)dsid;
- (void)setDsid:(NSNumber *)arg0;
- (void)setUserAgent:(NSString *)arg0;
- (NSString *)userAgent;

@end
