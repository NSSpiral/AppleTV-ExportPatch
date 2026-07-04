/* Runtime dump - CPLPlatform
 * Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLPlatform : NSObject
{
    NSMapTable * _abstractClassToImplementation;
    NSObject<OS_dispatch_queue> * _lock;
    NSString * _suffix;
}

@property (copy, nonatomic) NSString * suffix;

+ (CPLPlatform *)currentPlatform;
+ (void)setProxyImplementationForPlatform:(id)arg0;
+ (void)setDefaultPlatform:(id)arg0;
+ (CPLPlatform *)defaultPlatform;

- (CPLPlatform *)init;
- (NSString *)description;
- (void).cxx_destruct;
- (NSObject *)newPlatformImplementationForObject:(NSObject *)arg0;
- (void)setPlatformImplementation:(Class)arg0 forClass:(Class)arg1;
- (Class)implementationClassForAbstractClass:(Class)arg0;
- (NSString *)suffix;
- (void)setSuffix:(NSString *)arg0;

@end
