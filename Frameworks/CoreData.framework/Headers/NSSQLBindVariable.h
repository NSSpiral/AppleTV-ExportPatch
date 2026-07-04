/* Runtime dump - NSSQLBindVariable
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLBindVariable : NSObject
{
    int _cd_rc;
    id _value;
    unsigned int _sqlType;
    unsigned int _index;
    long long _int64;
    NSAttributeDescription * _attributeDescription;
}

- (unsigned int)sqlType;
- (NSSQLBindVariable *)initWithInt64:(long long)arg0 sqlType:(unsigned int)arg1;
- (NSSQLBindVariable *)initWithValue:(NSValue *)arg0 sqlType:(unsigned int)arg1 attributeDescription:(NSAttributeDescription *)arg2;
- (NSSQLBindVariable *)initWithUnsignedInt:(unsigned int)arg0 sqlType:(unsigned int)arg1;
- (NSAttributeDescription *)attributeDescription;
- (void)setInt64:(long long)arg0;
- (void)setUnsignedInt:(unsigned int)arg0;
- (long long)int64;
- (unsigned int)unsignedInt;
- (char)hasObjectValue;
- (NSSQLBindVariable *)retain;
- (void)release;
- (void)dealloc;
- (unsigned int)retainCount;
- (void *)value;
- (void)setValue:(NSObject *)arg0;
- (char)_tryRetain;
- (char)_isDeallocating;
- (unsigned int)index;
- (void)setIndex:(unsigned int)arg0;

@end
