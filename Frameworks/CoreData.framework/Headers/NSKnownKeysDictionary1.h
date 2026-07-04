/* Runtime dump - NSKnownKeysDictionary1
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSKnownKeysDictionary1 : NSKnownKeysDictionary
{
    int _cd_rc;
    int _count;
    NSKnownKeysMappingStrategy * _keySearch;
    id _values;
}

+ (char)accessInstanceVariablesDirectly;
+ (NSKnownKeysDictionary1 *)alloc;
+ (NSKnownKeysDictionary1 *)initWithCoder:(NSCoder *)arg0;
+ (NSKnownKeysDictionary1 *)init;
+ (NSKnownKeysDictionary1 *)initWithDictionary:(NSDictionary *)arg0;
+ (NSKnownKeysDictionary1 *)initWithCapacity:(unsigned int)arg0;
+ (NSKnownKeysDictionary1 *)allocWithZone:(struct _NSZone *)arg0;
+ (char)supportsSecureCoding;
+ (NSKnownKeysDictionary1 *)initWithObjects:(id *)arg0 forKeys:(id *)arg1 count:(unsigned int)arg2;
+ (NSKnownKeysDictionary1 *)initWithDictionary:(NSDictionary *)arg0 copyItems:(char)arg1;
+ (NSKnownKeysDictionary1 *)initWithSearchStrategy:(NSObject *)arg0;
+ (NSKnownKeysDictionary1 *)initForKeys:(id *)arg0;

- (void)getObjects:(id *)arg0;
- (Class)classForArchiver;
- (id *)knownKeyValuesPointer;
- (unsigned int)_valueCountByEnumeratingWithState:(struct ? *)arg0 objects:(id *)arg1 count:(unsigned int)arg2;
- (void)_setValues:(id *)arg0 retain:(char)arg1;
- (void)getObjects:(id *)arg0 andKeys:(id *)arg1;
- (void)_recount;
- (unsigned int)_countByEnumeratingWithState:(struct ? *)arg0 objects:(id *)arg1 count:(unsigned int)arg2 forKeys:(char)arg3;
- (void)getKeys:(id *)arg0;
- (NSKnownKeysDictionary1 *)retain;
- (void)release;
- (NSArray *)allKeys;
- (unsigned int)countByEnumeratingWithState:(struct ? *)arg0 objects:(id *)arg1 count:(unsigned int)arg2;
- (NSString *)objectForKey:(NSString *)arg0;
- (void)setObject:(NSObject *)arg0 forKey:(NSString *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (unsigned int)count;
- (void)removeAllObjects;
- (unsigned int)retainCount;
- (void)removeObjectForKey:(NSString *)arg0;
- (NSKnownKeysDictionary1 *)copyWithZone:(struct _NSZone *)arg0;
- (Class)classForCoder;
- (NSEnumerator *)objectEnumerator;
- (void)setValues:(id *)arg0;
- (char)_tryRetain;
- (char)_isDeallocating;
- (id *)values;
- (char)isEqualToDictionary:(NSDictionary *)arg0;
- (void)addEntriesFromDictionary:(NSDictionary *)arg0;
- (NSArray *)allValues;
- (NSEnumerator *)keyEnumerator;
- (NSKnownKeysDictionary1 *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (void)setValue:(NSObject *)arg0 atIndex:(unsigned int)arg1;
- (NSKnownKeysMappingStrategy *)mapping;
- (NSObject *)valueAtIndex:(unsigned int)arg0;

@end
