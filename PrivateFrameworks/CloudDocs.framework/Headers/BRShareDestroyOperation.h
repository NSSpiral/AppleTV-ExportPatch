/* Runtime dump - BRShareDestroyOperation
 * Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@interface BRShareDestroyOperation : BROperation
{
    CKShare * _share;
    id _shareDestroyCompletionBlock;
}

@property (copy) id shareDestroyCompletionBlock;
@property (retain, nonatomic) CKShare * share;

- (void)dealloc;
- (void)main;
- (void)setShareDestroyCompletionBlock:(id /* block */)arg0;
- (id /* block */)shareDestroyCompletionBlock;
- (void)finishWithResult:(NSObject *)arg0 error:(NSError *)arg1;
- (void)setShare:(CKShare *)arg0;
- (CKShare *)share;
- (BRShareDestroyOperation *)initWithShare:(CKShare *)arg0;

@end
