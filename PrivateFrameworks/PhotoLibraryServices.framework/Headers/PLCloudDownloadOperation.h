/* Runtime dump - PLCloudDownloadOperation
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudDownloadOperation : PLCloudOperation
{
    BOOL _cancelled;
}

- (NSString *)description;
- (unsigned int)cost;
- (void)requestCancel;
- (void)runOperationWithCompletionHandler:(id /* block */)arg0;

@end
