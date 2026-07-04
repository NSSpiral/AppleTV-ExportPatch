/* Runtime dump - SSUpdatableAsset
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSUpdatableAsset : NSObject
{
    NSURL * _cacheURL;
    NSString * _md5;
    NSString * _name;
    NSURL * _serverURL;
    NSString * _version;
}

@property (retain, nonatomic) NSURL * cacheURL;
@property (copy, nonatomic) NSString * md5;
@property (copy, nonatomic) NSString * name;
@property (retain, nonatomic) NSURL * serverURL;
@property (copy, nonatomic) NSString * version;

- (void)_setName:(NSString *)arg0;
- (NSString *)name;
- (NSString *)version;
- (void).cxx_destruct;
- (NSURL *)serverURL;
- (NSURL *)cacheURL;
- (void)_setCacheURL:(NSURL *)arg0;
- (void)_setServerURL:(NSURL *)arg0;
- (void)_setVersion:(NSString *)arg0;
- (NSString *)md5;
- (void)_setMD5:(NSSet *)arg0;

@end
