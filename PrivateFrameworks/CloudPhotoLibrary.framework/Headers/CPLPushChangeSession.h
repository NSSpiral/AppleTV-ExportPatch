/* Runtime dump - CPLPushChangeSession
 * Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLPushChangeSession : CPLChangeSession <CPLAbstractObject>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) CPLPlatformObject * platformObject;

- (NSString *)_sessionLogDomain;
- (CPLPushChangeSession *)initWithLibraryManager:(CPLLibraryManager *)arg0;
- (void)commitChangeBatch:(id)arg0 withUnderlyingCompletionHandler:(id /* block */)arg1;
- (void)commitChangeBatch:(id)arg0 withCompletionHandler:(id /* block */)arg1;

@end
