/* Runtime dump - NSKeyedArchiver
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSKeyedArchiver : NSCoder
{
    void * _stream;
    unsigned int _flags;
    id _delegate;
    id _containers;
    id _objects;
    id _objRefMap;
    id _replacementMap;
    id _classNameMap;
    id _conditionals;
    id _classes;
    unsigned int _genericKey;
    void * _cache;
    unsigned int _cacheSize;
    unsigned int _estimatedCount;
    void * _reserved2;
    id _visited;
    void * _reserved0;
}

@property <NSKeyedArchiverDelegate> * delegate;
@property unsigned int outputFormat;

+ (char)archiveRootObject:(NSObject *)arg0 toFile:(NSString *)arg1;
+ (NSObject *)classNameForClass:(Class)arg0;
+ (void)initialize;
+ (NSObject *)archivedDataWithRootObject:(NSObject *)arg0;
+ (void)setClassName:(NSString *)arg0 forClass:(Class)arg1;

- (void)_encodePropertyList:(NSArray *)arg0 forKey:(NSString *)arg1;
- (void)encodeArrayOfObjCType:(char *)arg0 count:(unsigned int)arg1 at:(void *)arg2;
- (void)encodeRootObject:(NSObject *)arg0;
- (void)encodeValuesOfObjCTypes:(char *)arg0;
- (void)encodeDataObject:(NSObject *)arg0;
- (void)encodeBycopyObject:(NSObject *)arg0;
- (void)_encodeArrayOfObjects:(NSArray *)arg0 forKey:(NSString *)arg1;
- (void)encodeByrefObject:(NSObject *)arg0;
- (NSObject *)_initWithOutput:(NSObject *)arg0;
- (unsigned int)outputFormat;
- (NSObject *)classNameForClass:(Class)arg0;
- (void)_setBlobForCurrentObject:(NSObject *)arg0;
- (NSObject *)_blobForCurrentObject;
- (void)setOutputFormat:(unsigned int)arg0;
- (void)encodeValueOfObjCType:(char *)arg0 at:(void *)arg1;
- (void)dealloc;
- (void)encodeObject:(NSObject *)arg0 forKey:(NSString *)arg1;
- (void)encodeBool:(char)arg0 forKey:(NSString *)arg1;
- (void)setDelegate:(<NSKeyedArchiverDelegate> *)arg0;
- (NSKeyedArchiver *)init;
- (NSString *)description;
- (<NSKeyedArchiverDelegate> *)delegate;
- (NSKeyedArchiver *)initForWritingWithMutableData:(NSMutableData *)arg0;
- (void)encodeInt:(int)arg0 forKey:(NSString *)arg1;
- (unsigned int)systemVersion;
- (void)finishEncoding;
- (char)allowsKeyedCoding;
- (void)encodeBytes:(char *)arg0 length:(unsigned int)arg1 forKey:(NSString *)arg2;
- (void)encodeFloat:(float)arg0 forKey:(NSString *)arg1;
- (void)encodeConditionalObject:(NSObject *)arg0 forKey:(NSString *)arg1;
- (void)encodeDouble:(double)arg0 forKey:(NSString *)arg1;
- (void)replaceObject:(NSObject *)arg0 withObject:(NSObject *)arg1;
- (int)versionForClassName:(NSString *)arg0;
- (void)encodeInt32:(int)arg0 forKey:(NSString *)arg1;
- (void)encodeConditionalObject:(NSObject *)arg0;
- (void)setRequiresSecureCoding:(char)arg0;
- (void)encodeInt64:(long long)arg0 forKey:(NSString *)arg1;
- (void)encodeBytes:(void *)arg0 length:(void)arg1;
- (char)requiresSecureCoding;
- (void)setClassName:(NSString *)arg0 forClass:(Class)arg1;
- (void)encodeObject:(NSObject *)arg0;
- (void)finalize;

@end
