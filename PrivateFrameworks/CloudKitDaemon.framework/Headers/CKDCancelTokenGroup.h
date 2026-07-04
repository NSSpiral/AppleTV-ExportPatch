/* Runtime dump - CKDCancelTokenGroup
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDCancelTokenGroup : NSObject <CKDCancelling>
{
    NSMutableArray * _cancelTokens;
}

@property (retain, nonatomic) NSMutableArray * cancelTokens;

- (void)cancel;
- (CKDCancelTokenGroup *)init;
- (void).cxx_destruct;
- (NSMutableArray *)cancelTokens;
- (void)setCancelTokens:(NSMutableArray *)arg0;
- (void)removeAllCancelTokens;
- (void)addCancelToken:(NSString *)arg0;
- (void)removeCancelToken:(NSString *)arg0;

@end
