/* Runtime dump - MSVXPCTransaction
 * Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

@interface MSVXPCTransaction : NSObject
{
    NSUUID * _identifier;
    NSString * _name;
}

@property (readonly, nonatomic) NSString * name;
@property (readonly, nonatomic) char active;

+ (MSVXPCTransaction *)activeTransactions;

- (void)dealloc;
- (NSString *)description;
- (char)isActive;
- (NSString *)name;
- (NSString *)_identifier;
- (void).cxx_destruct;
- (MSVXPCTransaction *)initWithName:(NSString *)arg0;
- (void)beginTransaction;
- (void)endTransaction;
- (void)endTransactionOnDate:(NSDate *)arg0;

@end
