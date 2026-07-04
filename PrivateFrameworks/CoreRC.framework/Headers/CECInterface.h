/* Runtime dump - CECInterface
 * Image: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
 */

@interface CECInterface : CoreRCInterface
{
    char _promiscMode;
    unsigned short _addressMask;
    <CECInterfaceDelegate> * _delegate;
    struct CECFrame _lastReceivedFrame;
}

@property (nonatomic) <CECInterfaceDelegate> * delegate;
@property (readonly, nonatomic) unsigned short addressMask;
@property (readonly, nonatomic) char promiscMode;
@property (readonly, nonatomic) NSDictionary * properties;
@property (readonly, nonatomic) char isValid;
@property (readonly, nonatomic) struct CECFrame lastReceivedFrame;

- (void)setDelegate:(<CECInterfaceDelegate> *)arg0;
- (<CECInterfaceDelegate> *)delegate;
- (char)isValid;
- (NSDictionary *)properties;
- (char)sendFrame:(struct CECFrame)arg0 withRetryCount:(unsigned char)arg1 error:(id *)arg2;
- (char)pingTo:(unsigned char)arg0 acknowledged:(char *)arg1 error:(id *)arg2;
- (unsigned short)addressMask;
- (char)promiscMode;
- (void)receivedFrame:(struct CECFrame)arg0;
- (char)errorIsNack:(id)arg0;
- (char)setAddressMask:(unsigned short)arg0 error:(id *)arg1;
- (char)setPromiscMode:(char)arg0 error:(id *)arg1;
- (char)sendFrame:(struct CECFrame)arg0 error:(id *)arg1;
- (char)allocateCECAddress:(unsigned char *)arg0 forDeviceType:(unsigned char)arg1 error:(id *)arg2;
- (struct CECFrame)lastReceivedFrame;
- (char)sendMessage:(NSString *)arg0 withRetryCount:(unsigned char)arg1 error:(id *)arg2;
- (char)sendMessage:(NSString *)arg0 error:(id *)arg1;

@end
