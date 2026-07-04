/* Runtime dump - NSRTFD
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSRTFD : NSMutableDictionary
{
    NSMutableDictionary * dict;
}

+ (void)initialize;

- (NSString *)removeFile:(NSString *)arg0;
- (NSString *)_getDocInfoForKey:(NSString *)arg0;
- (NSDictionary *)getDirInfo:(char)arg0;
- (unsigned int)writePath:(NSString *)arg0 docInfo:(NSDocInfo *)arg1 errorHandler:(SSErrorHandler *)arg2 remapContents:(char)arg3 hardLinkPath:(NSString *)arg4;
- (unsigned int)initFromDocument:(NSObject *)arg0;
- (unsigned int)addDirNamed:(id)arg0 lazy:(char)arg1;
- (unsigned int)addFileNamed:(id)arg0 fileAttributes:(NSDictionary *)arg1;
- (unsigned int)writePath:(NSString *)arg0 docInfo:(NSDocInfo *)arg1 errorHandler:(SSErrorHandler *)arg2 remapContents:(char)arg3 markBusy:(char)arg4 hardLinkPath:(NSString *)arg5;
- (unsigned int)internalWritePath:(NSString *)arg0 errorHandler:(SSErrorHandler *)arg1 remapContents:(char)arg2 hardLinkPath:(NSString *)arg3;
- (NSString *)tmpNameFromPath:(NSString *)arg0 extension:(id *)arg1;
- (NSString *)nameFromPath:(NSString *)arg0 extra:(id)arg1;
- (unsigned int)internalSaveTo:(id)arg0 removeBackup:(char)arg1 errorHandler:(SSErrorHandler *)arg2 temp:(id)arg3 backup:(MBBackup *)arg4;
- (unsigned int)internalSaveTo:(id)arg0 removeBackup:(char)arg1 errorHandler:(SSErrorHandler *)arg2;
- (NSRTFD *)initWithPasteboardDataRepresentation:(NSDictionary *)arg0;
- (NSString *)createRandomKey:(NSString *)arg0;
- (NSString *)createUniqueKey:(NSString *)arg0;
- (NSObject *)getDocument:(NSObject *)arg0 docInfo:(NSDocInfo *)arg1;
- (NSString *)uniqueKey:(NSString *)arg0;
- (id)addCommon:(CXCommon *)arg0 docInfo:(NSDocInfo *)arg1 value:(NSObject *)arg2 zone:(struct _NSZone *)arg3;
- (NSString *)replaceFile:(NSString *)arg0 path:(NSString *)arg1;
- (unsigned int)initUnixFile:(NSString *)arg0;
- (NSString *)tmpNameFromPath:(NSString *)arg0;
- (unsigned int)saveToDocument:(NSObject *)arg0 removeBackup:(char)arg1 errorHandler:(SSErrorHandler *)arg2;
- (NSString *)replaceFile:(NSString *)arg0 data:(NSData *)arg1;
- (NSString *)addFile:(NSString *)arg0;
- (NSString *)dataForFile:(NSString *)arg0;
- (NSRTFD *)copy:(id)arg0 into:(id)arg1;
- (NSData *)addData:(NSData *)arg0 name:(NSString *)arg1;
- (int)validatePath:(NSString *)arg0 ignore:(NEOnDemandRuleIgnore *)arg1;
- (NSRTFD *)initFromElement:(NSObject *)arg0 ofDocument:(NSObject *)arg1;
- (unsigned int)realAddDirNamed:(id)arg0;
- (unsigned int)insertItem:(NSObject *)arg0 path:(NSString *)arg1 dirInfo:(NSDictionary *)arg2 zone:(struct _NSZone *)arg3 plist:(NSMutableDictionary *)arg4;
- (id)serialize:(void * *)arg0 length:(void)arg1;
- (id)freeSerialized:(void *)arg0 length:(unsigned int)arg1;
- (NSRTFD *)initFromSerialized:(id)arg0;
- (NSDictionary *)pasteboardDataRepresentation;
- (char)_isLink:(IKLink *)arg0;
- (NSString *)objectForKey:(NSString *)arg0;
- (void)setObject:(NSObject *)arg0 forKey:(NSString *)arg1;
- (void)dealloc;
- (unsigned int)count;
- (NSRTFD *)init;
- (NSRTFD *)copy;
- (NSRTFD *)initWithDictionary:(NSDictionary *)arg0;
- (void)removeObjectForKey:(NSString *)arg0;
- (NSRTFD *)initWithCapacity:(unsigned int)arg0;
- (NSRTFD *)copyWithZone:(struct _NSZone *)arg0;
- (NSRTFD *)initWithContentsOfFile:(NSString *)arg0;
- (NSRTFD *)initWithObjects:(id *)arg0 forKeys:(NSArray *)arg1 count:(id *)arg2;
- (NSEnumerator *)keyEnumerator;
- (NSRTFD *)initWithDictionary:(NSDictionary *)arg0 copyItems:(char)arg1;
- (char)isPackage;
- (id)setPackage:(char)arg0;
- (NSRTFD *)initWithDataRepresentation:(NSData *)arg0;
- (id)addLink:(IKLink *)arg0;
- (NSData *)dataRepresentation;

@end
