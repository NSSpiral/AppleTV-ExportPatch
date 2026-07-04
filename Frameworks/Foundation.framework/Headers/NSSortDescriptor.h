/* Runtime dump - NSSortDescriptor
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSSortDescriptor : NSObject <NSSecureCoding, NSCopying>
{
    unsigned int _sortDescriptorFlags;
    NSString * _key;
    SEL _selector;
    id _selectorOrBlock;
}

@property (readonly, copy) NSString * key;
@property (readonly) char ascending;
@property (readonly) SEL selector;
@property (readonly) id comparator;
@property (readonly, retain) id reversedSortDescriptor;

+ (NSSortDescriptor *)sortDescriptorWithKey:(NSString *)arg0 ascending:(char)arg1 comparator:(id /* block */)arg2;
+ (NSString *)_defaultSelectorName;
+ (void)initialize;
+ (char)supportsSecureCoding;
+ (NSSortDescriptor *)sortDescriptorWithKey:(NSString *)arg0 ascending:(char)arg1 selector:(SEL)arg2;
+ (NSSortDescriptor *)sortDescriptorWithKey:(NSString *)arg0 ascending:(char)arg1;

- (NSObject *)CKDPQuerySort;
- (void)allowEvaluation;
- (id /* block */)comparator;
- (int)compareObject:(NSObject *)arg0 toObject:(NSObject *)arg1;
- (NSCoder *)replacementObjectForPortCoder:(NSCoder *)arg0;
- (NSSortDescriptor *)initWithKey:(NSString *)arg0 ascending:(char)arg1 comparator:(id /* block */)arg2;
- (NSString *)_selectorName;
- (void)_setSelectorName:(NSString *)arg0;
- (void)_disallowEvaluation;
- (char)_isEqualToSortDescriptor:(NSObject *)arg0;
- (void)_setKey:(NSString *)arg0;
- (void)_setAscending:(char)arg0;
- (void)dealloc;
- (NSSortDescriptor *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (NSString *)key;
- (NSSortDescriptor *)copyWithZone:(struct _NSZone *)arg0;
- (SEL)selector;
- (NSSortDescriptor *)initWithKey:(NSString *)arg0 ascending:(char)arg1;
- (NSSortDescriptor *)initWithKey:(NSString *)arg0 ascending:(char)arg1 selector:(SEL)arg2;
- (char)ascending;
- (NSObject *)reversedSortDescriptor;

@end
