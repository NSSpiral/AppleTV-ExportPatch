/* Runtime dump - ABVCardParameter
 * Image: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

@interface ABVCardParameter : NSObject
{
    NSString * _name;
    NSString * _grouping;
    id _value;
    NSMutableArray * _types;
    char _primary;
}

- (void)setIsPrimary:(char)arg0;
- (void)addType:(NSObject *)arg0;
- (void)dealloc;
- (NSString *)description;
- (NSString *)name;
- (NSMutableArray *)types;
- (void *)value;
- (void)setValue:(NSObject *)arg0;
- (ABVCardParameter *)initWithName:(NSString *)arg0;
- (void)addTypes:(NSArray *)arg0;
- (char)isPrimary;
- (void)setGrouping:(NSString *)arg0;
- (NSString *)grouping;
- (void)finalize;

@end
