/* Runtime dump - ATVAssetLibrary
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVAssetLibrary : NSObject
{
    NSObject<OS_dispatch_queue> * assetWriteQueue;
    NSObject<OS_dispatch_queue> * assetAccessQueue;
    NSString * _cachePath;
    NSMutableArray * _registeredGroups;
}

@property (copy, nonatomic) NSString * cachePath;
@property (retain, nonatomic) NSMutableArray * registeredGroups;

+ (ATVAssetLibrary *)sharedInstance;
+ (void)initializeAssetLibraryWithCachePath:(NSString *)arg0;

- (void).cxx_destruct;
- (ATVAssetLibrary *)initWithCachePath:(NSString *)arg0;
- (void)registerGroup:(NSObject *)arg0;
- (NSObject *)groupWithGroupType:(int)arg0;
- (void)removeAssetForKey:(NSString *)arg0 inGroupOfType:(int)arg1;
- (NSString *)cachePath;
- (NSString *)assetForKey:(NSString *)arg0 inGroupOfType:(int)arg1;
- (NSString *)assetPathForKey:(NSString *)arg0 inGroupOfType:(int)arg1;
- (NSString *)assetExpiryDateForKey:(NSString *)arg0 inGroupOfType:(int)arg1;
- (void)setImageAsset:(NSSet *)arg0 forKey:(NSString *)arg1 inGroupOfType:(int)arg2 extension:(id *)arg3 expiryDate:(NSDate *)arg4;
- (void)setImageAssetFromPath:(NSString *)arg0 forKey:(NSString *)arg1 inGroupOfType:(int)arg2 expiryDate:(NSDate *)arg3;
- (void)unRegisterGroup:(int)arg0;
- (void)setCachePath:(NSString *)arg0;
- (NSMutableArray *)registeredGroups;
- (void)setRegisteredGroups:(NSMutableArray *)arg0;

@end
