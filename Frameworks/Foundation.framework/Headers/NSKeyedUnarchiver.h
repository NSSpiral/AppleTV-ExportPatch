/* Runtime dump - NSKeyedUnarchiver
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSKeyedUnarchiver : NSCoder
{
    id _delegate;
    unsigned int _flags;
    id _objRefMap;
    id _replacementMap;
    id _nameClassMap;
    id _tmpRefObjMap;
    id _refObjMap;
    int _genericKey;
    id _data;
    void * _offsetData;
    id _containers;
    id _objects;
    char * _bytes;
    unsigned long long _len;
    id _helper;
    void * _reserved0;
}

@property <NSKeyedUnarchiverDelegate> * delegate;

+ (NSData *)unarchiveObjectWithData:(NSData *)arg0 allowedClasses:(NSArray *)arg1;
+ (NSData *)deserializeObjectWithData:(NSData *)arg0 allowedClasses:(NSArray *)arg1;
+ (NSData *)deserializeObjectWithData:(NSData *)arg0 allowedClass:(Class)arg1 frameworkClasses:(NSArray *)arg2;
+ (NSData *)secureUnarchiveData:(NSData *)arg0 withExpectedClass:(Class)arg1 otherAllowedClasses:(NSArray *)arg2;
+ (NSData *)_mapkit_safeUnarchiveObjectWithData:(NSData *)arg0;
+ (NSData *)deserializeObjectWithData:(NSData *)arg0 allowedClasses:(NSArray *)arg1;
+ (NSData *)deserializeObjectWithData:(NSData *)arg0 allowedClass:(Class)arg1 frameworkClasses:(NSArray *)arg2;
+ (NSData *)pl_safeUnarchiveObjectWithData:(NSData *)arg0;
+ (NSString *)pl_safeUnarchiveObjectWithFile:(NSString *)arg0;
+ (NSData *)cpl_safeUnarchiveObjectWithData:(NSData *)arg0;
+ (NSString *)cpl_safeUnarchiveObjectWithFile:(NSString *)arg0;
+ (NSData *)MSSafeUnarchiveObjectWithData:(NSData *)arg0;
+ (NSString *)MSSafeUnarchiveObjectWithFile:(NSString *)arg0;
+ (NSData *)MSSafeUnarchiveObjectWithData:(NSData *)arg0 outError:(id *)arg1;
+ (NSString *)MSSafeUnarchiveObjectWithFile:(NSString *)arg0 outError:(id *)arg1;
+ (void)initialize;
+ (NSData *)unarchiveObjectWithData:(NSData *)arg0;
+ (Class)classForClassName:(NSString *)arg0;
+ (NSString *)unarchiveObjectWithFile:(NSString *)arg0;
+ (void)setClass:(Class)arg0 forClassName:(NSString *)arg1;

- (NSData *)pl_safeInitForReadingWithData:(NSData *)arg0;
- (NSData *)cpl_safeInitForReadingWithData:(NSData *)arg0;
- (NSArray *)allowedClasses;
- (NSString *)_decodeArrayOfObjectsForKey:(NSString *)arg0;
- (NSString *)_decodePropertyListForKey:(NSString *)arg0;
- (void)setAllowedClasses:(NSArray *)arg0;
- (NSObject *)_blobForCurrentObject;
- (NSObject *)_initWithStream:(struct __CFReadStream *)arg0 data:(NSData *)arg1 topDict:(struct __CFDictionary *)arg2;
- (void)_setAllowedClassNames:(id)arg0;
- (void)_temporaryMapReplaceObject:(NSObject *)arg0 withObject:(NSObject *)arg1;
- (NSArray *)_allowedClassNames;
- (void)_replaceObject:(NSObject *)arg0 withObject:(NSObject *)arg1;
- (unsigned int)_currentUniqueIdentifier;
- (void)dealloc;
- (NSString *)decodeObjectForKey:(NSString *)arg0;
- (char)decodeBoolForKey:(NSString *)arg0;
- (char)containsValueForKey:(NSString *)arg0;
- (void)setDelegate:(<NSKeyedUnarchiverDelegate> *)arg0;
- (NSKeyedUnarchiver *)init;
- (NSString *)description;
- (<NSKeyedUnarchiverDelegate> *)delegate;
- (unsigned int)systemVersion;
- (int)decodeIntForKey:(NSString *)arg0;
- (void)finishDecoding;
- (char)allowsKeyedCoding;
- (char *)decodeBytesForKey:(SEL)arg0 returnedLength:(id)arg1;
- (float)decodeFloatForKey:(NSString *)arg0;
- (NSObject *)decodeObjectOfClass:(Class)arg0 forKey:(NSString *)arg1;
- (double)decodeDoubleForKey:(NSString *)arg0;
- (NSArray *)decodeObjectOfClasses:(NSArray *)arg0 forKey:(NSString *)arg1;
- (NSKeyedUnarchiver *)initForReadingWithData:(NSData *)arg0;
- (void)replaceObject:(NSObject *)arg0 withObject:(NSObject *)arg1;
- (Class)classForClassName:(NSString *)arg0;
- (long long)decodeInt64ForKey:(NSString *)arg0;
- (void)decodeValueOfObjCType:(char *)arg0 at:(void *)arg1;
- (int)decodeInt32ForKey:(NSString *)arg0;
- (NSObject *)decodeDataObject;
- (NSObject *)decodeObject;
- (void)decodeValuesOfObjCTypes:(char *)arg0;
- (void)decodeArrayOfObjCType:(char *)arg0 count:(unsigned int)arg1 at:(void *)arg2;
- (void *)decodeBytesWithReturnedLength:(unsigned int *)arg0;
- (int)versionForClassName:(NSString *)arg0;
- (void)setRequiresSecureCoding:(char)arg0;
- (NSKeyedUnarchiver *)initWithStream:(NSObject *)arg0;
- (char)requiresSecureCoding;
- (void)setClass:(Class)arg0 forClassName:(NSString *)arg1;
- (void)finalize;

@end
