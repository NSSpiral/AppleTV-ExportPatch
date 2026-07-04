/* Runtime dump - NSKnownKeysDictionary
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSKnownKeysDictionary : NSMutableDictionary

@property (readonly, nonatomic) NSKnownKeysMappingStrategy * mapping;

+ (NSObject *)newInstanceWithSearchStrategy:(NSObject *)arg0 inData:(NSData *)arg1;
+ (NSKnownKeysDictionary *)alloc;
+ (NSKnownKeysDictionary *)allocWithZone:(struct _NSZone *)arg0;

- (void)getObjects:(id *)arg0;
- (void)_setValues:(id *)arg0 retain:(char)arg1;
- (void)getObjects:(id *)arg0 andKeys:(id *)arg1;
- (void)getKeys:(id *)arg0;
- (void)setValues:(id *)arg0;
- (id *)values;
- (NSKnownKeysDictionary *)initWithSearchStrategy:(NSObject *)arg0;
- (NSKnownKeysDictionary *)initForKeys:(id *)arg0;
- (void)setValue:(NSObject *)arg0 atIndex:(unsigned int)arg1;
- (NSKnownKeysMappingStrategy *)mapping;
- (NSObject *)valueAtIndex:(unsigned int)arg0;

@end
