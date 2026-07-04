/* Runtime dump - ATVHSDataServerID
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVHSDataServerID : NSObject <NSSecureCoding, NSCopying>
{
    NSString * _serviceName;
    NSString * _serviceType;
    NSString * _serviceDomain;
    unsigned long long _databaseID;
    unsigned long long _machineID;
}

@property (nonatomic) unsigned long long databaseID;
@property (nonatomic) unsigned long long machineID;
@property (copy, nonatomic) NSString * serviceName;
@property (copy, nonatomic) NSString * serviceType;
@property (copy, nonatomic) NSString * serviceDomain;

+ (char)supportsSecureCoding;

- (unsigned long long)databaseID;
- (ATVHSDataServerID *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (ATVHSDataServerID *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (ATVHSDataServerID *)initWithMachineID:(unsigned long long)arg0 databaseID:(unsigned long long)arg1 serviceName:(NSString *)arg2 serviceType:(NSString *)arg3 serviceDomain:(NSString *)arg4;
- (unsigned long long)machineID;
- (void)setMachineID:(unsigned long long)arg0;
- (char)_isEqualToDataServerID:(NSObject *)arg0;
- (NSString *)serviceDomain;
- (void)setDatabaseID:(unsigned long long)arg0;
- (void)setServiceDomain:(NSString *)arg0;
- (void)setServiceName:(NSString *)arg0;
- (NSString *)serviceType;
- (NSString *)serviceName;
- (void)setServiceType:(NSString *)arg0;

@end
