/* Runtime dump - Transaction
 * Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

@interface Transaction : NSObject <NSSecureCoding>
{
    unsigned int _transactionType;
    NSData * _record;
}

@property unsigned int transactionType;
@property (retain) NSData * record;

+ (char)supportsSecureCoding;
+ (NSString *)toString:(unsigned int)arg0;

- (void)setTransactionType:(unsigned int)arg0;
- (unsigned int)transactionType;
- (Transaction *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void).cxx_destruct;
- (Transaction *)initWithType:(unsigned int)arg0 andRecord:(NSObject *)arg1;
- (Transaction *)initWithString:(NSString *)arg0 andRecord:(NSObject *)arg1;
- (NSData *)record;
- (void)setRecord:(NSData *)arg0;

@end
