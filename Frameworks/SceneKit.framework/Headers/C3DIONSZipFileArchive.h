/* Runtime dump - C3DIONSZipFileArchive
 * Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface C3DIONSZipFileArchive : NSObject
{
    NSDictionary * _contents;
    NSData * _data;
    id _provider;
    int _desc;
    NSString * _path;
    NSArray * _names;
    NSDictionary * _properties;
    NSMutableDictionary * _cachedContents;
    void * _reserved;
    struct __zFlags _zFlags;
    id _reserved2;
}

- (C3DIONSZipFileArchive *)initWithData:(NSData *)arg0 options:(unsigned int)arg1 error:(id *)arg2;
- (NSArray *)entryNames;
- (NSString *)contentsForEntryName:(NSString *)arg0;
- (C3DIONSZipFileArchive *)initWithEntryNames:(id)arg0 contents:(NSDictionary *)arg1 properties:(NSDictionary *)arg2 options:(unsigned int)arg3;
- (C3DIONSZipFileArchive *)initWithPath:(NSString *)arg0 options:(unsigned int)arg1 error:(id *)arg2;
- (C3DIONSZipFileArchive *)initWithEntryNames:(id)arg0 dataProvider:(NSObject *)arg1 options:(unsigned int)arg2;
- (NSString *)streamForEntryName:(NSString *)arg0;
- (char)writeContentsForEntryName:(NSString *)arg0 toFile:(NSString *)arg1 options:(unsigned int)arg2 error:(id *)arg3;
- (NSString *)propertiesForEntryName:(NSString *)arg0;
- (NSObject *)archiveStream;
- (void)dealloc;
- (void)invalidate;
- (char)writeToFile:(NSString *)arg0 options:(unsigned int)arg1 error:(id *)arg2;
- (char)isValid;
- (NSData *)archiveData;
- (void)finalize;

@end
