/* Runtime dump - CalDescriptionBuilder
 * Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

@interface CalDescriptionBuilder : NSObject
{
    NSMutableDictionary * _descriptionUnderConstruction;
    NSString * _superclassDescription;
    char _sortedByKey;
    NSString * _keyDelimiter;
}

@property (nonatomic) char sortedByKey;
@property (copy, nonatomic) NSString * superclassDescription;
@property (copy, nonatomic) NSString * keyDelimiter;
@property (retain, nonatomic) NSMutableDictionary * descriptionUnderConstruction;

- (CalDescriptionBuilder *)initWithSuperclassDescription:(NSString *)arg0;
- (void)setKey:(NSString *)arg0 withArray:(NSArray *)arg1;
- (PDBuild *)build;
- (void)setKey:(NSString *)arg0 withObject:(NSObject *)arg1;
- (void)setKey:(NSString *)arg0 withString:(NSString *)arg1;
- (void)setKey:(NSString *)arg0 withBoolean:(char)arg1;
- (void)setKey:(NSString *)arg0 withDictionary:(NSDictionary *)arg1;
- (void)setKey:(NSString *)arg0 withDate:(NSDate *)arg1;
- (void)setKey:(NSString *)arg0 withPointerAddress:(void *)arg1;
- (void)setKey:(NSString *)arg0 withUnsignedInteger:(unsigned int)arg1;
- (CalDescriptionBuilder *)init;
- (NSString *)description;
- (void).cxx_destruct;
- (NSMutableDictionary *)descriptionUnderConstruction;
- (char)sortedByKey;
- (NSString *)keyDelimiter;
- (NSString *)superclassDescription;
- (void)setKey:(NSString *)arg0 withCharArray:(char *)arg1;
- (void)setKey:(NSString *)arg0 withUnsignedInt:(unsigned int)arg1;
- (void)setKey:(NSString *)arg0 withInt:(int)arg1;
- (void)setKey:(NSString *)arg0 withDouble:(double)arg1;
- (void)setKey:(NSString *)arg0 withEnumNumericalValue:(int)arg1 andStringValue:(id)arg2;
- (void)setKey:(NSString *)arg0 withSet:(NSSet *)arg1;
- (void)setKey:(NSString *)arg0 withChar:(char)arg1;
- (void)setKey:(NSString *)arg0 withFloat:(float)arg1;
- (void)setKey:(NSString *)arg0 withInteger:(int)arg1;
- (void)setKey:(NSString *)arg0 withLong:(long)arg1;
- (void)setKey:(NSString *)arg0 withLongLong:(long long)arg1;
- (void)setKey:(NSString *)arg0 withShort:(short)arg1;
- (void)setKey:(NSString *)arg0 withUnsignedChar:(unsigned char)arg1;
- (void)setKey:(NSString *)arg0 withUnsignedLong:(unsigned long)arg1;
- (void)setKey:(NSString *)arg0 withUnsignedLongLong:(unsigned long long)arg1;
- (void)setKey:(NSString *)arg0 withUnsignedShort:(unsigned short)arg1;
- (void)setKey:(NSString *)arg0 withClass:(Class)arg1;
- (void)setKey:(NSString *)arg0 withMachPort:(unsigned int)arg1;
- (void)setKey:(NSString *)arg0 withProcessID:(int)arg1;
- (void)setKey:(NSString *)arg0 withSelector:(SEL)arg1;
- (void)setKey:(NSString *)arg0 withSize:(unsigned long)arg1;
- (void)setKey:(NSString *)arg0 withTimeInterval:(double)arg1;
- (void)setKey:(NSString *)arg0 withDispatchQueue:(VKDispatch *)arg1;
- (void)setKey:(NSString *)arg0 withDispatchSource:(VKDispatch *)arg1;
- (void)setDescriptionUnderConstruction:(NSMutableDictionary *)arg0;
- (void)setSuperclassDescription:(NSString *)arg0;
- (void)setSortedByKey:(char)arg0;
- (void)setKeyDelimiter:(NSString *)arg0;

@end
