/* Runtime dump - BRShareCopyiWorkShareURLOperation
 * Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@interface BRShareCopyiWorkShareURLOperation : BROperation
{
    CKShare * _share;
    NSString * _appName;
    id _shareCopyURLCompletionBlock;
}

@property (copy) id shareCopyURLCompletionBlock;
@property (retain, nonatomic) CKShare * share;
@property (retain, nonatomic) NSString * appName;

- (NSString *)appName;
- (void)dealloc;
- (void)main;
- (id /* block */)shareCopyURLCompletionBlock;
- (void)setShareCopyURLCompletionBlock:(id /* block */)arg0;
- (BRShareCopyiWorkShareURLOperation *)initWithShare:(CKShare *)arg0 appName:(NSString *)arg1;
- (void)finishWithResult:(NSObject *)arg0 error:(NSError *)arg1;
- (void)setShare:(CKShare *)arg0;
- (CKShare *)share;
- (void)setAppName:(NSString *)arg0;

@end
