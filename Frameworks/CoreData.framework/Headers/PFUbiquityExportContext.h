/* Runtime dump - PFUbiquityExportContext
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFUbiquityExportContext : NSObject
{
    NSMutableDictionary * _storeNameToStoreExportContext;
    NSMutableDictionary * _ubiquityRootPathToStack;
    NSString * _localPeerID;
    PFUbiquityLocation * _ubiquityRootLocation;
    char _useLocalStorage;
}

@property (readonly, nonatomic) NSString * localPeerID;
@property (nonatomic) char useLocalStorage;

- (NSString *)localPeerID;
- (PFUbiquityExportContext *)initWithLocalPeerID:(NSString *)arg0 andUbiquityRootLocation:(NSObject *)arg1;
- (void)setUseLocalStorage:(char)arg0;
- (NSString *)storeExportContextForStoreName:(NSString *)arg0;
- (NSObject *)storeExportContextForStore:(NSObject *)arg0;
- (char)useLocalStorage;
- (void)dealloc;
- (NSString *)description;

@end
