/* Runtime dump - PLFileSystemPersistenceBatchItem
 * Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

@interface PLFileSystemPersistenceBatchItem : NSObject
{
    NSURL * fileURL;
    NSMutableDictionary * attributes;
}

@property (retain, nonatomic) NSURL * fileURL;
@property (retain, nonatomic) NSMutableDictionary * attributes;

- (void)dealloc;
- (PLFileSystemPersistenceBatchItem *)init;
- (NSString *)description;
- (NSMutableDictionary *)attributes;
- (void)setAttributes:(NSMutableDictionary *)arg0;
- (NSURL *)fileURL;
- (void)setData:(NSData *)arg0 forKey:(NSString *)arg1;
- (void)persist;
- (void)setUUIDString:(NSString *)arg0 forKey:(NSString *)arg1;
- (void)setUInt16:(unsigned short)arg0 forKey:(NSString *)arg1;
- (void)setString:(NSString *)arg0 forKey:(NSString *)arg1;
- (void)setFileURL:(NSURL *)arg0;

@end
