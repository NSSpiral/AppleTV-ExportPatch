/* Runtime dump - CPLArchiver
 * Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLArchiver : NSCoder
{
    id _archive;
    id _archiveCursor;
    id _rootObject;
    char _forDisplay;
}

@property (readonly, nonatomic) char forDisplay;

+ (NSObject *)archivedDataWithRootObject:(NSObject *)arg0;
+ (NSObject *)archivedPropertyListWithRootObject:(NSObject *)arg0;
+ (NSObject *)archivedPropertyListWithRootObject:(NSObject *)arg0 usingBlock:(id /* block */)arg1;
+ (NSObject *)archivedDataWithRootObject:(NSObject *)arg0 usingBlock:(id /* block */)arg1;
+ (NSObject *)displayablePropertyListWithRootObject:(NSObject *)arg0;
+ (NSObject *)fullDescriptionForObject:(NSObject *)arg0;
+ (NSData *)unarchiveObjectWithData:(NSData *)arg0 ofClass:(Class)arg1;

- (void)encodeArrayOfObjCType:(char *)arg0 count:(unsigned int)arg1 at:(void *)arg2;
- (void)encodeRootObject:(NSObject *)arg0;
- (void)encodeValuesOfObjCTypes:(char *)arg0;
- (void)setObjectZone:(struct _NSZone *)arg0;
- (struct _NSZone *)objectZone;
- (void)encodeBycopyObject:(NSObject *)arg0;
- (void)encodeByrefObject:(NSObject *)arg0;
- (void)encodePoint:(struct CGPoint)arg0 forKey:(NSString *)arg1;
- (struct CGPoint)decodePointForKey:(NSString *)arg0;
- (NSString *)decodePropertyListForKey:(NSString *)arg0;
- (NSString *)decodeObjectForKey:(NSString *)arg0;
- (char)decodeBoolForKey:(NSString *)arg0;
- (char)containsValueForKey:(NSString *)arg0;
- (void)encodeObject:(NSObject *)arg0 forKey:(NSString *)arg1;
- (void)encodeBool:(char)arg0 forKey:(NSString *)arg1;
- (void)encodeInt:(int)arg0 forKey:(NSString *)arg1;
- (int)decodeIntForKey:(NSString *)arg0;
- (char)allowsKeyedCoding;
- (int)decodeIntegerForKey:(NSString *)arg0;
- (char *)decodeBytesForKey:(SEL)arg0 returnedLength:(id)arg1;
- (float)decodeFloatForKey:(NSString *)arg0;
- (void)encodeInteger:(int)arg0 forKey:(NSString *)arg1;
- (void)encodeBytes:(char *)arg0 length:(unsigned int)arg1 forKey:(NSString *)arg2;
- (void)encodeFloat:(float)arg0 forKey:(NSString *)arg1;
- (NSObject *)decodeObjectOfClass:(Class)arg0 forKey:(NSString *)arg1;
- (void)encodeConditionalObject:(NSObject *)arg0 forKey:(NSString *)arg1;
- (struct CGSize)decodeSizeForKey:(NSString *)arg0;
- (void)encodeSize:(struct CGSize)arg0 forKey:(NSString *)arg1;
- (double)decodeDoubleForKey:(NSString *)arg0;
- (void)encodeDouble:(double)arg0 forKey:(NSString *)arg1;
- (NSArray *)decodeObjectOfClasses:(NSArray *)arg0 forKey:(NSString *)arg1;
- (long long)decodeInt64ForKey:(NSString *)arg0;
- (int)decodeInt32ForKey:(NSString *)arg0;
- (NSObject *)decodeObject;
- (NSArray *)decodePropertyList;
- (void)decodeValuesOfObjCTypes:(char *)arg0;
- (void)decodeArrayOfObjCType:(char *)arg0 count:(unsigned int)arg1 at:(void *)arg2;
- (void *)decodeBytesWithReturnedLength:(unsigned int *)arg0;
- (void).cxx_destruct;
- (void)encodeInt32:(int)arg0 forKey:(NSString *)arg1;
- (void)encodeConditionalObject:(NSObject *)arg0;
- (void)encodeInt64:(long long)arg0 forKey:(NSString *)arg1;
- (void)encodeBytes:(void *)arg0 length:(void)arg1;
- (CPLArchiver *)initWithRootObject:(NSObject *)arg0 forDisplay:(char)arg1;
- (NSArray *)archivedPropertyList;
- (CPLArchiver *)initWithRootObject:(NSObject *)arg0 forDisplay:(char)arg1 block:(id /* block */)arg2;
- (CPLArchiver *)initWithArchive:(GQZArchive *)arg0 rootClass:(Class)arg1;
- (TSPObject *)rootObject;
- (void)encodePropertyList:(NSArray *)arg0;
- (char)forDisplay;
- (void)encodeRect:(struct CGRect)arg0 forKey:(struct CGSize)arg1;
- (struct CGRect)decodeRectForKey:(NSString *)arg0;
- (void)encodeObject:(NSObject *)arg0;

@end
