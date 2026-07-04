/* Runtime dump - ICPTPIPClient
 * Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface ICPTPIPClient : NSObject
{
    id _clientProperties;
}

- (char)registered;
- (void)setRegistered:(char)arg0;
- (ICPTPIPClient *)init;
- (int)pid;
- (void)setPid:(int)arg0;
- (void)setFdref:(struct __CFFileDescriptor *)arg0;
- (void)setRemotePort:(struct __CFMessagePort *)arg0;
- (struct __CFFileDescriptor *)fdref;
- (struct __CFMessagePort *)remotePort;
- (int)remoteAddress;
- (void)setRemoteAddress:(int)arg0;
- (int)serverFD;
- (void)setServerFD:(int)arg0;

@end
