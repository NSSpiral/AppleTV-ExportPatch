/* Runtime dump - ABPersonLinkedInfo
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABPersonLinkedInfo : NSObject
{
    NSString * _type;
    NSString * _name;
    ABUIPerson * _person;
    char _unified;
}

@property (retain) NSString * type;
@property (retain) NSString * name;
@property (retain) ABUIPerson * person;
@property char unified;

- (char)isUnified;
- (void)setUnified:(char)arg0;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (void)setType:(NSString *)arg0;
- (NSString *)type;
- (ABUIPerson *)person;
- (void)setPerson:(ABUIPerson *)arg0;

@end
