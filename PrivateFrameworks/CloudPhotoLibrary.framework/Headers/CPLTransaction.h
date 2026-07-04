/* Runtime dump - CPLTransaction
 * Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLTransaction : NSObject

+ (void)beginTransactionWithReason:(NSString *)arg0 keepPower:(char)arg1;
+ (void)endTransactionWithReason:(NSString *)arg0;
+ (unsigned int)transactionCount;
+ (NSArray *)transactions;

@end
