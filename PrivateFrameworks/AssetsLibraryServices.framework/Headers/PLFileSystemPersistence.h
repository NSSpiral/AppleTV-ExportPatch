/* Runtime dump - PLFileSystemPersistence
 * Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

@interface PLFileSystemPersistence : NSObject
{
    NSObject<OS_dispatch_queue> * _writerQueue;
}

+ (PLFileSystemPersistence *)sharedInstance;
+ (void)persistData:(NSData *)arg0 forKey:(NSString *)arg1 fileURL:(NSURL *)arg2;
+ (NSURL *)persistedAttributesForFileAtURL:(NSURL *)arg0;
+ (void)persistString:(NSString *)arg0 forKey:(NSString *)arg1 fileURL:(NSURL *)arg2;
+ (NSURL *)filesystemPersistenceBatchItemForFileAtURL:(NSURL *)arg0;
+ (void)persistUUIDString:(NSString *)arg0 forKey:(NSString *)arg1 fileURL:(NSURL *)arg2;
+ (void)persistUInt16:(unsigned short)arg0 forKey:(NSString *)arg1 fileURL:(NSURL *)arg2;
+ (void)persistMetadata:(NSDictionary *)arg0 fileURL:(NSURL *)arg1;

- (void)dealloc;
- (PLFileSystemPersistence *)init;
- (void)backgroundWriteData:(NSData *)arg0 toFileAtURL:(NSURL *)arg1;

@end
