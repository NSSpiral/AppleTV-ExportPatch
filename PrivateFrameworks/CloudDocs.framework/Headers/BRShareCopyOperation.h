/* Runtime dump - BRShareCopyOperation
 * Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@interface BRShareCopyOperation : BROperation
{
    NSURL * _url;
    id _shareCopyCompletionBlock;
}

@property (copy) id shareCopyCompletionBlock;
@property (retain, nonatomic) NSURL * url;

- (void)dealloc;
- (NSURL *)url;
- (void)setUrl:(NSURL *)arg0;
- (BRShareCopyOperation *)initWithURL:(NSString *)arg0;
- (void)main;
- (id /* block */)shareCopyCompletionBlock;
- (void)setShareCopyCompletionBlock:(id /* block */)arg0;
- (void)finishWithResult:(NSObject *)arg0 error:(NSError *)arg1;

@end
