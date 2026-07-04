/* Runtime dump - UINibDecoder
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UINibDecoder : NSCoder
{
    Class arrayClass;
    Class setClass;
    Class dictionaryClass;
    Class * classes;
    id * missingClasses;
    struct UINibDecoderObjectEntry * objects;
    struct UINibDecoderValue * values;
    char * valueTypes;
    void * valueData;
    unsigned long valueDataSize;
    struct UINibDecoderHeader header;
    id * objectsByObjectID;
    unsigned int * longObjectClassIDs;
    char * shortObjectClassIDs;
    unsigned int * keyMasks;
    long inlinedValueKey;
    struct UINibDecoderRecursiveState recursiveState;
    UINibStringIDTable * keyIDTable;
    id delegate;
    struct UIKeyToKeyIDCache keyIDCache;
    struct UIKeyAndScopeToValueCache valueCache;
    int lookupRounds;
    int maxPossibleLookupRounds;
    int failedByKeyMask;
    int savedByKeyMask;
}

@property id delegate;

+ (NSData *)unarchiveObjectWithData:(NSData *)arg0;
+ (NSString *)unarchiveObjectWithFile:(NSString *)arg0;

- (void)dealloc;
- (NSString *)decodeObjectForKey:(NSString *)arg0;
- (char)decodeBoolForKey:(NSString *)arg0;
- (char)containsValueForKey:(NSString *)arg0;
- (void)setDelegate:(NSObject *)arg0;
- (NSObject *)delegate;
- (unsigned int)systemVersion;
- (int)decodeIntForKey:(NSString *)arg0;
- (void)finishDecoding;
- (char)allowsKeyedCoding;
- (int)decodeIntegerForKey:(NSString *)arg0;
- (char *)decodeBytesForKey:(SEL)arg0 returnedLength:(id)arg1;
- (float)decodeFloatForKey:(NSString *)arg0;
- (struct CGPoint)decodeCGPointForKey:(NSString *)arg0;
- (struct CGSize)decodeCGSizeForKey:(NSString *)arg0;
- (struct CGRect)decodeCGRectForKey:(NSString *)arg0;
- (struct CGAffineTransform)decodeCGAffineTransformForKey:(NSString *)arg0;
- (struct UIEdgeInsets)decodeUIEdgeInsetsForKey:(NSString *)arg0;
- (double)decodeDoubleForKey:(NSString *)arg0;
- (UINibDecoder *)initForReadingWithData:(NSData *)arg0 error:(id *)arg1;
- (UINibDecoder *)initForReadingWithData:(NSData *)arg0;
- (void)replaceObject:(NSObject *)arg0 withObject:(NSObject *)arg1;
- (char)validateAndIndexData:(NSData *)arg0 error:(id *)arg1;
- (char)validateAndIndexClasses:(void *)arg0 length:(void)arg1;
- (char)validateAndIndexKeys:(void *)arg0 length:(void)arg1;
- (char)validateAndIndexValues:(void *)arg0 length:(void)arg1;
- (char)validateAndIndexObjects:(void *)arg0 length:(void)arg1;
- (char)decodeArrayOfCGFloats:(float *)arg0 count:(int)arg1 forKey:(NSString *)arg2;
- (NSString *)nextGenericKey;
- (long long)decodeInt64ForKey:(NSString *)arg0;
- (void)decodeValueOfObjCType:(char *)arg0 at:(void *)arg1;
- (int)decodeInt32ForKey:(NSString *)arg0;
- (char)decodeArrayOfFloats:(float *)arg0 count:(int)arg1 forKey:(NSString *)arg2;
- (char)decodeArrayOfDoubles:(double *)arg0 count:(int)arg1 forKey:(NSString *)arg2;
- (NSObject *)decodeNXObject;
- (NSObject *)decodeDataObject;
- (NSObject *)decodeObject;
- (NSArray *)decodePropertyList;
- (void)decodeValuesOfObjCTypes:(char *)arg0;
- (void)decodeArrayOfObjCType:(char *)arg0 count:(unsigned int)arg1 at:(void *)arg2;
- (void *)decodeBytesWithReturnedLength:(unsigned int *)arg0;
- (int)versionForClassName:(NSString *)arg0;

@end
