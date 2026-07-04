/* Runtime dump - ATVFalseSKPaymentTransaction
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface ATVFalseSKPaymentTransaction : SKPaymentTransaction
{
    SKPayment * _overridePayment;
}

- (NSArray *)downloads;
- (SKPayment *)payment;
- (ATVFalseSKPaymentTransaction *)initWithPayment:(SKPayment *)arg0;
- (int)transactionState;
- (SKPaymentTransaction *)originalTransaction;
- (NSData *)transactionReceipt;
- (void)dealloc;
- (NSDate *)date;
- (NSError *)error;
- (NSString *)transactionIdentifier;

@end
