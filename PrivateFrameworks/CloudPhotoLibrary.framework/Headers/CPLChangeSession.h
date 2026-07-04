/* Runtime dump - CPLChangeSession
 * Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLChangeSession : NSObject <CPLAbstractObject>
{
    CPLPlatformObject * _platformObject;
    NSProgress * _sessionProgress;
    NSString * _sessionIdentifier;
    CPLLibraryManager * _libraryManager;
    unsigned int _state;
}

@property (readonly, nonatomic) NSProgress * sessionProgress;
@property (readonly, nonatomic) NSString * sessionIdentifier;
@property (readonly, nonatomic) CPLLibraryManager * libraryManager;
@property (nonatomic) unsigned int state;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) CPLPlatformObject * platformObject;

+ (NSObject *)platformImplementationProtocol;
+ (NSObject *)stateDescriptionForState:(unsigned int)arg0;

- (void)dealloc;
- (CPLChangeSession *)init;
- (unsigned int)state;
- (void)setState:(unsigned int)arg0;
- (NSString *)sessionIdentifier;
- (void)resume;
- (void).cxx_destruct;
- (void)pause;
- (CPLPlatformObject *)platformObject;
- (NSString *)_sessionLogDomain;
- (CPLLibraryManager *)libraryManager;
- (void)tearDownWithCompletionHandler:(id /* block */)arg0;
- (CPLChangeSession *)initWithLibraryManager:(CPLLibraryManager *)arg0;
- (void)beginSessionWithKnownLibraryVersion:(NSString *)arg0 completionHandler:(id /* block */)arg1;
- (NSProgress *)sessionProgress;
- (void)finalizeWithCompletionHandler:(id /* block */)arg0;

@end
