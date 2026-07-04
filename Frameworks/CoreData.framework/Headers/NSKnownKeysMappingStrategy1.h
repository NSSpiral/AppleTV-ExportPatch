/* Runtime dump - NSKnownKeysMappingStrategy1
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSKnownKeysMappingStrategy1 : NSKnownKeysMappingStrategy
{
    int _cd_rc;
    void * _table;
    unsigned long _length;
    id _reserved1;
    id * _keys;
}

+ (char)accessInstanceVariablesDirectly;
+ (NSKnownKeysMappingStrategy1 *)alloc;
+ (void)initialize;
+ (NSKnownKeysMappingStrategy1 *)allocWithZone:(struct _NSZone *)arg0;
+ (char)supportsSecureCoding;

- (Class)classForArchiver;
- (NSKnownKeysMappingStrategy1 *)initForKeys:(id *)arg0 count:(unsigned int)arg1;
- (struct __CFArray *)_makeBranchTableForKeys:(char * *)arg0 count:(char *)arg1;
- (void)_coreCreationForKeys:(id *)arg0 count:(NSObject *)arg1;
- (void)_coreDealloc:(char)arg0;
- (NSKnownKeysMappingStrategy1 *)retain;
- (void)release;
- (NSArray *)allKeys;
- (unsigned int)countByEnumeratingWithState:(struct ? *)arg0 objects:(id *)arg1 count:(unsigned int)arg2;
- (void)dealloc;
- (NSKnownKeysMappingStrategy1 *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)retainCount;
- (unsigned int)hash;
- (NSString *)description;
- (unsigned int)length;
- (NSKnownKeysMappingStrategy1 *)copyWithZone:(struct _NSZone *)arg0;
- (Class)classForCoder;
- (char)_tryRetain;
- (char)_isDeallocating;
- (id *)keys;
- (NSKnownKeysMappingStrategy1 *)initForKeys:(id *)arg0;
- (unsigned int)indexForKey:(NSString *)arg0;
- (unsigned int)fastIndexForKnownKey:(NSString *)arg0;

@end
