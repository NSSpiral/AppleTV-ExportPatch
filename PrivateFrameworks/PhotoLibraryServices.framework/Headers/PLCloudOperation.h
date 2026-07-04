/* Runtime dump - PLCloudOperation
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudOperation : NSObject
{
    PLCloudPhotoLibraryManager * _connection;
    char _running;
    unsigned int _cost;
    long _createdAt;
    PLCloudScenario * _scenario;
    PLCloudOperationResource * _operationResource;
}

@property (readonly, nonatomic) unsigned int cost;
@property (readonly, nonatomic) long createdAt;
@property (readonly, nonatomic) PLCloudScenario * scenario;
@property (readonly, nonatomic) PLCloudPhotoLibraryManager * connection;
@property (retain, nonatomic) PLCloudOperationResource * operationResource;
@property char running;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (PLCloudPhotoLibraryManager *)connection;
- (unsigned int)cost;
- (CPLResource *)resource;
- (PLCloudOperationResource *)operationResource;
- (void)requestCancel;
- (void)runOperationWithCompletionHandler:(id /* block */)arg0;
- (PLCloudOperation *)initWithScenario:(PLCloudScenario *)arg0 cloudConnection:(NSURLConnection *)arg1;
- (void)setOperationResource:(PLCloudOperationResource *)arg0;
- (long)createdAt;
- (PLCloudScenario *)scenario;
- (void)setRunning:(char)arg0;
- (char)running;

@end
