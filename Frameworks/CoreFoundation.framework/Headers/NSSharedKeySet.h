/* Runtime dump - NSSharedKeySet
 * Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSSharedKeySet : NSObject <NSFastEnumeration, NSCopying, NSCoding>
{
    char * _g;
    unsigned char _select;
    void * _rankTable;
    double _c;
    unsigned int _M;
    unsigned int _factor;
    unsigned int _numKey;
    unsigned int * _seeds;
    id * _keys;
    NSSharedKeySet * _subSharedKeySet;
}

@property char * g;
@property unsigned char select;
@property void * rankTable;
@property double c;
@property unsigned int M;
@property unsigned int factor;
@property unsigned int numKey;
@property unsigned int * seeds;
@property id * keys;
@property (retain) NSSharedKeySet * subSharedKeySet;

+ (NSArray *)keySetWithKeys:(id *)arg0;

- (unsigned int)keySetCount;
- (unsigned int)maximumIndex;
- (void)setG:(char *)arg0;
- (void)setSelect:(unsigned char)arg0;
- (void *)rankTable;
- (void)setRankTable:(void *)arg0;
- (unsigned int)M;
- (void)setM:(unsigned int)arg0;
- (void)setFactor:(unsigned int)arg0;
- (unsigned int)numKey;
- (void)setNumKey:(unsigned int)arg0;
- (unsigned int *)seeds;
- (void)setSeeds:(unsigned int *)arg0;
- (NSSharedKeySet *)subSharedKeySet;
- (void)setSubSharedKeySet:(NSSharedKeySet *)arg0;
- (void)setKeys:(id *)arg0;
- (NSSharedKeySet *)initWithKeys:(id *)arg0 count:(unsigned int)arg1;
- (id)generateSubclassCode:(id)arg0 printChainOfKeySetIfPossible:(char)arg1 printSpecialCode:(unsigned int)arg2;
- (char *)g;
- (NSArray *)allKeys;
- (unsigned int)countByEnumeratingWithState:(struct ? *)arg0 objects:(id *)arg1 count:(unsigned int)arg2;
- (void)dealloc;
- (NSSharedKeySet *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (unsigned int)count;
- (NSSharedKeySet *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSSharedKeySet *)copyWithZone:(struct _NSZone *)arg0;
- (char)isEmpty;
- (id *)keys;
- (NSObject *)keyAtIndex:(unsigned int)arg0;
- (unsigned int)factor;
- (unsigned int)indexForKey:(NSString *)arg0;
- (void)finalize;
- (unsigned char)select;
- (double)c;
- (void)setC:(double)arg0;

@end
