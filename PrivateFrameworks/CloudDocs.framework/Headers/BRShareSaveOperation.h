/* Runtime dump - BRShareSaveOperation
 * Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@interface BRShareSaveOperation : BROperation
{
    CKShare * _share;
    id _shareSaveCompletionBlock;
}

@property (copy) id shareSaveCompletionBlock;
@property (retain, nonatomic) CKShare * share;

- (void)dealloc;
- (void)main;
- (id /* block */)shareSaveCompletionBlock;
- (void)setShareSaveCompletionBlock:(id /* block */)arg0;
- (void)finishWithResult:(NSObject *)arg0 error:(NSError *)arg1;
- (void)setShare:(CKShare *)arg0;
- (CKShare *)share;
- (BRShareSaveOperation *)initWithShare:(CKShare *)arg0;

@end
