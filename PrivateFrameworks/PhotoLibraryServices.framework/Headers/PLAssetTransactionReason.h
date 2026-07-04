/* Runtime dump - PLAssetTransactionReason
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLAssetTransactionReason : NSObject
{
    NSString * _reason;
}

@property (retain, nonatomic) NSString * reason;

+ (NSString *)transactionReason:(NSString *)arg0;

- (void)dealloc;
- (NSString *)reason;
- (void)setReason:(NSString *)arg0;

@end
