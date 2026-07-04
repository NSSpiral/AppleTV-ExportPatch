/* Runtime dump - DADownloadContext
 * Image: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

@interface DADownloadContext : NSObject
{
    NSString * _attachmentUUID;
    NSString * _accountID;
    NSObject<OS_dispatch_queue> * _queue;
    id _progressBlock;
    id _completionBlock;
}

@property (readonly, nonatomic) NSString * attachmentUUID;
@property (readonly, nonatomic) NSString * accountID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> * queue;
@property (readonly, copy, nonatomic) id progressBlock;
@property (readonly, copy, nonatomic) id completionBlock;

- (id /* block */)completionBlock;
- (void).cxx_destruct;
- (NSObject<OS_dispatch_queue> *)queue;
- (NSString *)accountID;
- (DADownloadContext *)initWithAttachmentUUID:(NSString *)arg0 accountID:(NSString *)arg1 queue:(NSObject<OS_dispatch_queue> *)arg2 downloadProgressBlock:(id /* block */)arg3 completionBlock:(/* block */ id)arg4;
- (void)updateProgressDownloadedByteCount:(long long)arg0 totalByteCount:(long long)arg1;
- (void)finishedWithError:(NSError *)arg0;
- (NSString *)attachmentUUID;
- (id /* block */)progressBlock;

@end
