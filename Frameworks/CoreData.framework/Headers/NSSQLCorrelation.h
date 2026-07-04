/* Runtime dump - NSSQLCorrelation
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLCorrelation : NSObject
{
    NSSQLManyToMany * _manyToMany;
    long long _fk;
    long long _invfk;
    unsigned int _fok;
    unsigned int _invfok;
}

- (NSSQLCorrelation *)initWithManyToMany:(NSSQLManyToMany *)arg0 fk:(long long)arg1 invfk:(long long)arg2 fok:(unsigned int)arg3 invfok:(unsigned int)arg4;
- (NSSQLManyToMany *)manyToMany;
- (long long)fk;
- (long long)invfk;
- (unsigned int)fok;
- (unsigned int)invfok;
- (void)dealloc;
- (NSString *)description;

@end
