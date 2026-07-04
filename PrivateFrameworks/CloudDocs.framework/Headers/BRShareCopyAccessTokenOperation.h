/* Runtime dump - BRShareCopyAccessTokenOperation
 * Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@interface BRShareCopyAccessTokenOperation : BROperation
{
    NSURL * _url;
    id _shareCopyAccessTokenCompletionBlock;
    id _shareCopyAccessTokenCompletionBlockWithPermissions;
}

@property (copy) id shareCopyAccessTokenCompletionBlock;
@property (copy) id shareCopyAccessTokenCompletionBlockWithPermissions;
@property (retain, nonatomic) NSURL * url;

- (void)dealloc;
- (NSURL *)url;
- (void)setUrl:(NSURL *)arg0;
- (BRShareCopyAccessTokenOperation *)initWithURL:(NSString *)arg0;
- (void)main;
- (id)shareCopyAccessTokenCompletionBlockWithPermissions;
- (void)setShareCopyAccessTokenCompletionBlockWithPermissions:(unsigned int)arg0;
- (id /* block */)shareCopyAccessTokenCompletionBlock;
- (void)setShareCopyAccessTokenCompletionBlock:(id /* block */)arg0;
- (void)finishWithResult:(NSObject *)arg0 error:(NSError *)arg1;

@end
