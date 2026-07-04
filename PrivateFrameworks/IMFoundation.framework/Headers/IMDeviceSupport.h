/* Runtime dump - IMDeviceSupport
 * Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface IMDeviceSupport : NSObject
{
    NSString * _model;
    NSString * _productName;
    NSString * _productVersion;
    NSString * _buildVersion;
    NSRecursiveLock * _lock;
}

@property (readonly, nonatomic) NSString * model;
@property (readonly, nonatomic) NSString * userAgentString;
@property (readonly, nonatomic) NSString * productName;
@property (readonly, nonatomic) NSString * productVersion;
@property (readonly, nonatomic) NSString * productBuildVersion;
@property (readonly, nonatomic) NSString * deviceInformationString;

+ (IMDeviceSupport *)sharedInstance;
+ (NSObject *)marketingNameForModel:(NSObject *)arg0;

- (void)dealloc;
- (IMDeviceSupport *)init;
- (NSString *)model;
- (NSString *)productName;
- (NSString *)productVersion;
- (void)_generateProductInformation;
- (NSString *)userAgentString;
- (NSString *)deviceInformationString;
- (NSString *)productBuildVersion;

@end
