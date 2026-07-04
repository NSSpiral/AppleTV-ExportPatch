/* Runtime dump - NSManagedObjectModelBundle
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSManagedObjectModelBundle : NSObject
{
    NSBundle * _bundle;
    NSDictionary * _versionInfoDictionary;
}

- (id)_modelForVersionHashes:(id)arg0;
- (NSURL *)optimizedVersionURL;
- (NSURL *)currentVersionURL;
- (NSDictionary *)versionInfoDictionary;
- (NSDictionary *)versionHashInfo;
- (NSString *)urlForModelVersionWithName:(NSString *)arg0;
- (id)modelVersions;
- (id)_modelForVersionHashes:(id)arg0 inStyle:(unsigned int)arg1;
- (void)dealloc;
- (NSBundle *)bundle;
- (NSManagedObjectModelBundle *)initWithPath:(NSString *)arg0;
- (NSString *)currentVersion;

@end
