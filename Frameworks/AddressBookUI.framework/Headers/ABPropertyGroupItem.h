/* Runtime dump - ABPropertyGroupItem
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABPropertyGroupItem : ABCardGroupItem
{
    char _allowsIMessage;
    char _allowsPhone;
    char _allowsEmail;
    NSArray * _labeledValues;
    CNLabeledValue * _labeledValue;
    ABCardPropertyGroup * _group;
    NSArray * _contacts;
    CNContact * _contact;
    <ABPropertyGroupItemDelegate> * _delegate;
    CNLabeledValue * _originalLabeledValue;
}

@property (retain, nonatomic) NSArray * labeledValues;
@property (retain, nonatomic) CNLabeledValue * labeledValue;
@property (nonatomic) ABCardPropertyGroup * group;
@property (readonly, nonatomic) NSString * property;
@property (copy, nonatomic) NSArray * contacts;
@property (retain, nonatomic) CNContact * contact;
@property (nonatomic) <ABPropertyGroupItemDelegate> * delegate;
@property (nonatomic) char allowsIMessage;
@property (nonatomic) char allowsPhone;
@property (nonatomic) char allowsEmail;
@property (readonly, nonatomic) id normalizedValue;
@property (readonly, nonatomic) NSString * displayValue;
@property (readonly, nonatomic) NSString * displayLabel;
@property (readonly, nonatomic) NSString * editingStringValue;
@property (readonly, nonatomic) NSString * placeholderString;
@property (readonly, nonatomic) NSArray * supportedLabels;
@property (readonly, nonatomic) NSURL * defaultActionURL;
@property (readonly, nonatomic) char modified;
@property (readonly, nonatomic) char empty;
@property (readonly, nonatomic) char readonly;
@property (readonly, nonatomic) char canRemove;
@property (readonly, nonatomic) char favorite;
@property (retain, nonatomic) CNLabeledValue * originalLabeledValue;

+ (ABPropertyGroupItem *)propertyGroupItemWithLabeledValue:(CNLabeledValue *)arg0 group:(ABCardPropertyGroup *)arg1 contacts:(NSArray *)arg2;
+ (ABPropertyGroupItem *)propertyGroupItemWithLabeledValue:(CNLabeledValue *)arg0 group:(ABCardPropertyGroup *)arg1 contact:(CNContact *)arg2;
+ (NSObject *)newPropertyGroupItemForProperty:(NSString *)arg0;

- (CNContact *)contact;
- (void)setContact:(CNContact *)arg0;
- (char)modified;
- (NSArray *)contacts;
- (id)emptyLabeledValue;
- (CNLabeledValue *)labeledValue;
- (void)updateLabeledValueWithValue:(id)arg0;
- (void)mergeItem:(NSObject *)arg0;
- (char)isEquivalentToItem:(NSObject *)arg0 whenEditing:(char)arg1;
- (void)saveChangesImmediately:(char)arg0;
- (void)setContacts:(NSArray *)arg0;
- (char)isFavoriteOfType:(int)arg0;
- (NSString *)displayValue;
- (NSString *)displayLabel;
- (void)updateLabeledValueWithLabel:(NSString *)arg0;
- (char)canRemove;
- (void)setAllowsIMessage:(char)arg0;
- (void)setAllowsPhone:(char)arg0;
- (void)setAllowsEmail:(char)arg0;
- (id)normalizedValue;
- (char)isValidValue:(id)arg0;
- (NSArray *)supportedLabels;
- (NSURL *)defaultActionURL;
- (NSString *)editingStringValue;
- (NSString *)displayStringForValue:(id)arg0;
- (char)allowsEmail;
- (char)allowsIMessage;
- (char)isEquivalentToItem:(NSObject *)arg0;
- (id)bestValue:(id)arg0;
- (NSString *)valueForDisplayString:(NSString *)arg0;
- (ABPropertyGroupItem *)initWithGroup:(ABCardPropertyGroup *)arg0;
- (ABPropertyGroupItem *)initWithLabeledValue:(CNLabeledValue *)arg0 group:(ABCardPropertyGroup *)arg1 contacts:(NSArray *)arg2;
- (void)_enumerateContactsAndValuesWithBlock:(id /* block */)arg0;
- (NSArray *)labeledValues;
- (void)setLabeledValues:(NSArray *)arg0;
- (NSString *)bestLabel:(NSString *)arg0;
- (void)setLabeledValue:(CNLabeledValue *)arg0;
- (NSString *)updateWithLabel:(NSString *)arg0 value:(NSObject *)arg1;
- (CNLabeledValue *)originalLabeledValue;
- (char)isValidIdentifier:(int)arg0;
- (NSString *)placeholderString;
- (char)allowsPhone;
- (void)setOriginalLabeledValue:(CNLabeledValue *)arg0;
- (void)dealloc;
- (void)setDelegate:(<ABPropertyGroupItemDelegate> *)arg0;
- (ABPropertyGroupItem *)init;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (<ABPropertyGroupItemDelegate> *)delegate;
- (char)isEmpty;
- (void)setGroup:(ABCardPropertyGroup *)arg0;
- (ABCardPropertyGroup *)group;
- (char)isReadonly;
- (NSString *)property;
- (char)isFavorite;

@end
