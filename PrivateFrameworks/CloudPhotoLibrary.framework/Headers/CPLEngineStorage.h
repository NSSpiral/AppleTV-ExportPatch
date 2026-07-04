/* Runtime dump - CPLEngineStorage
 * Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLEngineStorage : NSObject <CPLAbstractObject>
{
    char _superWasCalled;
    CPLPlatformObject * _platformObject;
    CPLEngineStore * _engineStore;
    NSString * _name;
}

@property (readonly, nonatomic) CPLEngineStore * engineStore;
@property (readonly, copy, nonatomic) NSString * name;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) CPLPlatformObject * platformObject;

+ (NSObject *)platformImplementationProtocol;

- (NSString *)description;
- (NSString *)name;
- (void).cxx_destruct;
- (NSNumber *)status;
- (char)openWithError:(id *)arg0;
- (CPLEngineStorage *)initWithEngineStore:(CPLEngineStore *)arg0 name:(NSString *)arg1;
- (CPLPlatformObject *)platformObject;
- (CPLEngineStore *)engineStore;
- (void)writeTransactionDidFail;
- (void)writeTransactionDidSucceed;
- (char)_checkSuperWasCalled;
- (NSDictionary *)statusDictionary;
- (char)closeWithError:(id *)arg0;

@end
