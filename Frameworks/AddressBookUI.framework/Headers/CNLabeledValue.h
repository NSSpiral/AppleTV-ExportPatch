/* Runtime dump - CNLabeledValue
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface CNLabeledValue : NSObject <NSCopying>
{
    int _multiValueIdentifier;
    NSString * _label;
    id _value;
}

@property (readonly, copy) NSString * identifier;
@property (readonly, copy) NSString * label;
@property (readonly, copy) id value;
@property (readonly) int multiValueIdentifier;
@property (readonly, copy) NSString * localizedLabel;

+ (CNLabeledValue *)labeledValueWithLabel:(NSString *)arg0 value:(NSObject *)arg1;
+ (CNLabeledValue *)allCustomLabels;
+ (void)deleteCustomLabel:(NSString *)arg0;
+ (CNLabeledValue *)labeledValueWithMultiValueIdentifier:(int)arg0 label:(NSString *)arg1 value:(NSObject *)arg2;
+ (NSObject *)builtinLabelsForProperty:(NSString *)arg0;
+ (CNLabeledValue *)defaultLabels;
+ (CNLabeledValue *)allLabels;
+ (void *)addressBook;

- (void)setMultiValueIdentifier:(int)arg0;
- (int)multiValueIdentifier;
- (NSString *)localizedLabel;
- (NSString *)labeledValueBySettingLabel:(NSString *)arg0 value:(NSObject *)arg1;
- (char)isEqualToLabelledValue:(id)arg0;
- (CNLabeledValue *)initWithLabel:(NSString *)arg0 value:(NSObject *)arg1;
- (CNLabeledValue *)initWithMultiValueIdentifier:(int)arg0 label:(NSString *)arg1 value:(NSObject *)arg2;
- (char)isEqualToLabelledValue:(id)arg0 includeIdentifiers:(char)arg1;
- (id)labeledValueBySettingValue:(id)arg0;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (NSString *)identifier;
- (void *)value;
- (CNLabeledValue *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)label;

@end
