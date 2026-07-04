/* Runtime dump - CNContactPropertyProxy
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface CNContactPropertyProxy : NSObject
{
    CNContact * _contact;
    NSString * _property;
    int _identifier;
}

@property CNContact * contact;
@property NSString * property;
@property int identifier;

+ (CNContactPropertyProxy *)proxyForContact:(id)arg0 propertyKey:(NSString *)arg1 propertyIdentifier:(int)arg2;

- (CNContact *)contact;
- (void)setContact:(CNContact *)arg0;
- (int)identifier;
- (void)setIdentifier:(int)arg0;
- (NSString *)valueForUndefinedKey:(NSString *)arg0;
- (NSString *)property;
- (void)setProperty:(NSString *)arg0;

@end
