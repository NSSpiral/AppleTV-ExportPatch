/* Runtime dump - ABPropertyGroupIdentifier
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABPropertyGroupIdentifier : NSObject <NSCopying>
{
    int _property;
    void * _context;
}

@property (readonly, nonatomic) int property;
@property (readonly, nonatomic) void * context;

+ (ABPropertyGroupIdentifier *)propertyGroupIdentifierWithProperty:(int)arg0 context:(void *)arg1;

- (ABPropertyGroupIdentifier *)initWithProperty:(int)arg0 context:(void *)arg1;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (ABPropertyGroupIdentifier *)copyWithZone:(struct _NSZone *)arg0;
- (void *)context;
- (int)property;

@end
