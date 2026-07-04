/* Runtime dump - HAPRelayStream
 * Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPRelayStream : NSObject
{
    <HAPStreamDelegate> * _delegate;
    unsigned int _mtu;
}

@property (weak) <HAPStreamDelegate> * delegate;
@property (readonly, nonatomic) unsigned int mtu;

- (void)setDelegate:(<HAPStreamDelegate> *)arg0;
- (<HAPStreamDelegate> *)delegate;
- (void)close;
- (void).cxx_destruct;
- (void)open;
- (unsigned int)mtu;
- (NSData *)writeData:(NSData *)arg0 error:(id *)arg1;

@end
