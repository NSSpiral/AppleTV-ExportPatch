/* Runtime dump - NSKnownKeysMappingStrategy
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSKnownKeysMappingStrategy : NSObject <NSSecureCoding, NSFastEnumeration>

@property (readonly, nonatomic) unsigned int length;
@property (readonly, nonatomic) id * keys;

+ (NSKnownKeysMappingStrategy *)alloc;
+ (NSKnownKeysMappingStrategy *)allocWithZone:(struct _NSZone *)arg0;

- (NSKnownKeysMappingStrategy *)initForKeys:(id *)arg0 count:(unsigned int)arg1;
- (unsigned int)countByEnumeratingWithState:(struct ? *)arg0 objects:(id *)arg1 count:(unsigned int)arg2;
- (NSKnownKeysMappingStrategy *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (unsigned int)length;
- (id *)keys;
- (NSKnownKeysMappingStrategy *)initForKeys:(id *)arg0;
- (unsigned int)indexForKey:(NSString *)arg0;
- (unsigned int)fastIndexForKnownKey:(NSString *)arg0;

@end
