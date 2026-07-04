/* Runtime dump - SBKSyncResponse
 * Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

@interface SBKSyncResponse : SBKResponse
{
    SBKSyncResponseData * _syncResponseData;
}

@property (readonly) SBKSyncResponseData * syncResponseData;

+ (NSURLResponse *)responseWithResponse:(NSURLResponse *)arg0 transaction:(SBKTransaction *)arg1;

- (void).cxx_destruct;
- (void)deserializeResponseBodyWithTransaction:(NSObject *)arg0;
- (SBKSyncResponseData *)syncResponseData;

@end
