/* Runtime dump - NSArchiver
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSArchiver : NSCoder
{
    void * mdata;
    void * pointerTable;
    void * stringTable;
    void * ids;
    void * map;
    void * replacementTable;
    void * reserved;
}

@property (readonly, retain) NSMutableData * archiverData;

+ (char)archiveRootObject:(NSObject *)arg0 toFile:(NSString *)arg1;
+ (void)encodeClassName:(NSString *)arg0 intoClassName:(NSString *)arg1;
+ (NSString *)classNameEncodedForTrueClassName:(NSString *)arg0;
+ (void)initialize;
+ (NSObject *)archivedDataWithRootObject:(NSObject *)arg0;

- (void)encodeArrayOfObjCType:(char *)arg0 count:(unsigned int)arg1 at:(void *)arg2;
- (void)encodeClassName:(NSString *)arg0 intoClassName:(NSString *)arg1;
- (void)encodeRootObject:(NSObject *)arg0;
- (NSString *)classNameEncodedForTrueClassName:(NSString *)arg0;
- (NSMutableData *)archiverData;
- (void)encodeValuesOfObjCTypes:(char *)arg0;
- (void)encodeDataObject:(NSObject *)arg0;
- (void)encodeValueOfObjCType:(char *)arg0 at:(void *)arg1;
- (void)dealloc;
- (NSArchiver *)initForWritingWithMutableData:(NSMutableData *)arg0;
- (NSData *)data;
- (void)replaceObject:(NSObject *)arg0 withObject:(NSObject *)arg1;
- (int)versionForClassName:(NSString *)arg0;
- (void)encodeConditionalObject:(NSObject *)arg0;
- (void)encodeBytes:(void *)arg0 length:(void)arg1;
- (void)encodeObject:(NSObject *)arg0;
- (void)finalize;

@end
