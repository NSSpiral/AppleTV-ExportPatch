/* Runtime dump - NSUnarchiver
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSUnarchiver : NSCoder
{
    void * datax;
    unsigned int cursor;
    struct _NSZone * objectZone;
    unsigned int systemVersion;
    char streamerVersion;
    char swap;
    char unused1;
    char unused2;
    void * pointerTable;
    void * stringTable;
    id classVersions;
    int lastLabel;
    void * map;
    void * allUnarchivedObjects;
    id reserved;
}

@property (readonly) char atEnd;
@property (readonly) unsigned int systemVersion;

+ (void)decodeClassName:(NSString *)arg0 asClassName:(NSString *)arg1;
+ (NSString *)classNameDecodedForArchiveClassName:(NSString *)arg0;
+ (void)initialize;
+ (NSData *)unarchiveObjectWithData:(NSData *)arg0;
+ (NSString *)unarchiveObjectWithFile:(NSString *)arg0;

- (void)decodeClassName:(NSString *)arg0 asClassName:(NSString *)arg1;
- (NSString *)classNameDecodedForArchiveClassName:(NSString *)arg0;
- (void)setObjectZone:(struct _NSZone *)arg0;
- (struct _NSZone *)objectZone;
- (void)dealloc;
- (unsigned int)systemVersion;
- (NSData *)data;
- (char)isAtEnd;
- (NSUnarchiver *)initForReadingWithData:(NSData *)arg0;
- (void)replaceObject:(NSObject *)arg0 withObject:(NSObject *)arg1;
- (void)decodeValueOfObjCType:(char *)arg0 at:(void *)arg1;
- (NSObject *)decodeDataObject;
- (NSObject *)decodeObject;
- (void)decodeValuesOfObjCTypes:(char *)arg0;
- (void)decodeArrayOfObjCType:(char *)arg0 count:(unsigned int)arg1 at:(void *)arg2;
- (void *)decodeBytesWithReturnedLength:(unsigned int *)arg0;
- (int)versionForClassName:(NSString *)arg0;
- (void)_setAllowedClasses:(NSArray *)arg0;
- (void)finalize;

@end
