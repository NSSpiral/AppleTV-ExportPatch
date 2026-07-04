/* Runtime dump - ATVHSHomeShareConfiguration
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVHSHomeShareConfiguration : NSObject <NSSecureCoding>
{
    ATVHSDataServerConfiguration * _serverConfiguration;
    ATVHSDataClientConfiguration * _clientConfiguration;
}

@property (retain, nonatomic) ATVHSDataServerConfiguration * serverConfiguration;
@property (retain, nonatomic) ATVHSDataClientConfiguration * clientConfiguration;

+ (char)supportsSecureCoding;

- (ATVHSHomeShareConfiguration *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (void).cxx_destruct;
- (ATVHSDataServerConfiguration *)serverConfiguration;
- (void)setServerConfiguration:(ATVHSDataServerConfiguration *)arg0;
- (ATVHSDataClientConfiguration *)clientConfiguration;
- (ATVHSHomeShareConfiguration *)initWithServerConfiguration:(ATVHSDataServerConfiguration *)arg0 clientConfiguration:(ATVHSDataClientConfiguration *)arg1;
- (void)setClientConfiguration:(ATVHSDataClientConfiguration *)arg0;

@end
