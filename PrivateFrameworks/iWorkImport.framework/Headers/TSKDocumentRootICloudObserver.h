/* Runtime dump - TSKDocumentRootICloudObserver
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSKDocumentRootICloudObserver : NSObject
{
    long long _identifier;
    NSOperationQueue * _operationQueue;
    id _block;
    long long _identifer;
}

@property (readonly, nonatomic) long long identifer;

- (void)invokeWithDocumentRoot:(NSObject *)arg0;
- (TSKDocumentRootICloudObserver *)initWithBlock:(id /* block */)arg0;
- (void)dealloc;
- (long long)identifer;

@end
