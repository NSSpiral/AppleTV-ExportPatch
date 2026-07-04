/* Runtime dump - CPLPullChangeSession
 * Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLPullChangeSession : CPLChangeSession <CPLAbstractObject>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) CPLPlatformObject * platformObject;

- (CPLPullChangeSession *)init;
- (NSString *)_sessionLogDomain;
- (void)acknowledgeChangeBatch:(id)arg0 withCompletionHandler:(id /* block */)arg1;
- (void)getChangeBatchWithCompletionHandler:(id /* block */)arg0;

@end
