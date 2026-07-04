/* Runtime dump - PLMav2BasebandHardwareMessage
 * Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLMav2BasebandHardwareMessage : PLBasebandHardwareMessage
{
    struct _PLMav2BasebandHWStatsRX * _mav2_rx;
    struct _PLMav2BasebandHWStatsTX * _mav2_tx;
}

@property (nonatomic) struct _PLMav2BasebandHWStatsRX * rx;
@property (nonatomic) struct _PLMav2BasebandHWStatsTX * tx;

- (PLMav2BasebandHardwareMessage *)initWithData:(NSData *)arg0;
- (void)setRx:(struct _PLMav2BasebandHWStatsRX *)arg0;
- (void)setTx:(struct _PLMav2BasebandHWStatsTX *)arg0;
- (void)parseData:(NSData *)arg0;
- (void)logHeaderWithLogger:(id)arg0;
- (void)logRFWithLogger2:(id)arg0;
- (struct _PLMav2BasebandHWStatsRX *)rx;
- (struct _PLMav2BasebandHWStatsTX *)tx;
- (id)indexToRAT:(unsigned int)arg0;
- (void)logWithLogger:(PLBBMsg *)arg0;

@end
