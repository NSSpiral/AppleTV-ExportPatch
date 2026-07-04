/* Runtime dump - BBAssertion
 * Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBAssertion : NSObject
{
    BBZeroingWeakReference * _delegate;
    NSString * _identifier;
    unsigned int _transactionID;
}

- (void)dealloc;
- (NSString *)identifier;
- (BBAssertion *)initWithDelegate:(BBZeroingWeakReference *)arg0 identifier:(NSString *)arg1;
- (void)increaseOrIgnoreTransactionID:(unsigned int)arg0;
- (unsigned int)transactionID;

@end
