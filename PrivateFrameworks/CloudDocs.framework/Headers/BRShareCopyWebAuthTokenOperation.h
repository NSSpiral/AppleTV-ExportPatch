/* Runtime dump - BRShareCopyWebAuthTokenOperation
 * Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@interface BRShareCopyWebAuthTokenOperation : BROperation
{
    NSString * _containerIdentifier;
    id _shareCopyWebAuthTokenCompletionBlock;
}

@property (copy) id shareCopyWebAuthTokenCompletionBlock;
@property (retain, nonatomic) NSString * containerIdentifier;

- (void)dealloc;
- (void)main;
- (id /* block */)shareCopyWebAuthTokenCompletionBlock;
- (void)setShareCopyWebAuthTokenCompletionBlock:(id /* block */)arg0;
- (void)finishWithResult:(NSObject *)arg0 error:(NSError *)arg1;
- (BRShareCopyWebAuthTokenOperation *)initWithContainerIdentifier:(NSString *)arg0;
- (NSString *)containerIdentifier;
- (void)setContainerIdentifier:(NSString *)arg0;

@end
