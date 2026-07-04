/* Runtime dump - ATVNetworkInterface
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVNetworkInterface : NSObject
{
    struct __SCNetworkService * _serviceRef;
    struct __SCNetworkInterface * _interfaceRef;
    char _active;
    char _hasChanges;
    NSString * _name;
    NSString * _IPAddress;
    NSString * _hardwareAddress;
}

@property (copy, nonatomic) NSString * name;
@property (readonly, nonatomic) char active;
@property (readonly, copy, nonatomic) NSString * IPAddress;
@property (copy, nonatomic) NSString * hardwareAddress;
@property (readonly, nonatomic) char isManagedNetwork;
@property (readonly, nonatomic) char hasChanges;

+ (ATVNetworkInterface *)preferredInterface;
+ (NSObject *)_interfaceType;
+ (char)_supportsInterface:(struct __SCNetworkInterface *)arg0;

- (ATVNetworkInterface *)init;
- (char)isActive;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (void).cxx_destruct;
- (void)_updateWithServiceRef:(struct __SCNetworkService *)arg0 interfaceRef:(struct __SCNetworkInterface *)arg1;
- (void)setHardwareAddress:(NSString *)arg0;
- (ATVNetworkInterface *)_initWithServiceRef:(struct __SCNetworkService *)arg0 interfaceRef:(struct __SCNetworkInterface *)arg1;
- (void)commitChangesWithCompletion:(id /* block */)arg0;
- (void)discardChanges;
- (void)_setNeedsUpdate;
- (char)isManagedNetwork;
- (NSString *)IPAddress;
- (NSString *)hardwareAddress;
- (char)hasChanges;

@end
