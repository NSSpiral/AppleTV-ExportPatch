/* Runtime dump - CTCarrier
 * Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

@interface CTCarrier : NSObject
{
    NSString * _carrierName;
    NSString * _mobileCountryCode;
    NSString * _mobileNetworkCode;
    NSString * _isoCountryCode;
    char _allowsVOIP;
}

@property (retain, nonatomic) NSString * carrierName;
@property (retain, nonatomic) NSString * mobileCountryCode;
@property (retain, nonatomic) NSString * mobileNetworkCode;
@property (retain, nonatomic) NSString * isoCountryCode;
@property (nonatomic) char allowsVOIP;

- (char)allowsVOIP;
- (NSString *)carrierName;
- (NSString *)mobileNetworkCode;
- (NSString *)mobileCountryCode;
- (NSString *)isoCountryCode;
- (void)setCarrierName:(NSString *)arg0;
- (void)setMobileCountryCode:(NSString *)arg0;
- (void)setMobileNetworkCode:(NSString *)arg0;
- (void)setIsoCountryCode:(NSString *)arg0;
- (void)setAllowsVOIP:(char)arg0;
- (void)dealloc;
- (CTCarrier *)init;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;

@end
