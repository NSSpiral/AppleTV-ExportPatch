/* Runtime dump - CECRouterInterface
 * Image: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
 */

@interface CECRouterInterface : CECInterface
{
    CECRouter * _router;
}

- (void)dealloc;
- (NSDictionary *)properties;
- (char)sendFrame:(struct CECFrame)arg0 withRetryCount:(unsigned char)arg1 error:(id *)arg2;
- (void)receivedFrame:(struct CECFrame)arg0;
- (char)setAddressMask:(unsigned short)arg0 error:(id *)arg1;
- (char)setPromiscMode:(char)arg0 error:(id *)arg1;
- (CECRouterInterface *)initWithRouter:(CECRouter *)arg0;

@end
