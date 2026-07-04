/* Runtime dump - HMDKeyedRemoteArchiver
 * Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDKeyedRemoteArchiver : NSObject
{
    NSKeyedArchiver * _archiver;
    NSString * _transportType;
}

@property (retain, nonatomic) NSKeyedArchiver * archiver;
@property (retain, nonatomic) NSString * transportType;

- (void)dealloc;
- (void)encodeObject:(NSObject *)arg0 forKey:(NSString *)arg1;
- (void)finishEncoding;
- (void).cxx_destruct;
- (HMDKeyedRemoteArchiver *)initForWritingWithMutableData:(NSMutableData *)arg0 remoteDeviceIsOnSameAccount:(char)arg1 remoteGateway:(char)arg2;
- (NSKeyedArchiver *)archiver;
- (HMDKeyedRemoteArchiver *)initForWritingWithMutableData:(NSMutableData *)arg0 remoteDeviceIsOnSameAccount:(char)arg1;
- (void)setArchiver:(NSKeyedArchiver *)arg0;
- (void)setTransportType:(NSString *)arg0;
- (NSString *)transportType;

@end
