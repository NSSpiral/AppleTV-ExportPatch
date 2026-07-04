/* Runtime dump - ICPTPIPClientProperties
 * Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface ICPTPIPClientProperties : NSObject
{
    int _pid;
    char _registered;
    struct __CFFileDescriptor * _fdref;
    struct __CFMessagePort * _remotePort;
    int _remoteAddress;
    int _serverFD;
}

@property int pid;
@property char registered;
@property struct __CFFileDescriptor * fdref;
@property struct __CFMessagePort * remotePort;
@property int remoteAddress;
@property int serverFD;

- (void)setRegistered:(char)arg0;
- (void)dealloc;
- (int)pid;
- (void)setPid:(int)arg0;
- (void)setFdref:(struct __CFFileDescriptor *)arg0;
- (void)setRemotePort:(struct __CFMessagePort *)arg0;
- (char)didRegister;
- (struct __CFFileDescriptor *)fdref;
- (struct __CFMessagePort *)remotePort;
- (int)remoteAddress;
- (void)setRemoteAddress:(int)arg0;
- (int)serverFD;
- (void)setServerFD:(int)arg0;
- (void)finalize;

@end
