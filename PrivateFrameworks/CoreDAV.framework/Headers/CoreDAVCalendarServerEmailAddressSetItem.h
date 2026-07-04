/* Runtime dump - CoreDAVCalendarServerEmailAddressSetItem
 * Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVCalendarServerEmailAddressSetItem : CoreDAVItem
{
    NSMutableSet * _emailAddresses;
    CoreDAVItemWithNoChildren * _unauthenticated;
}

@property (retain, nonatomic) NSMutableSet * emailAddresses;
@property (retain, nonatomic) CoreDAVItemWithNoChildren * unauthenticated;

+ (NSArray *)copyParseRules;

- (void)dealloc;
- (CoreDAVCalendarServerEmailAddressSetItem *)init;
- (NSString *)description;
- (CoreDAVItemWithNoChildren *)unauthenticated;
- (void)setUnauthenticated:(CoreDAVItemWithNoChildren *)arg0;
- (void)addEmailAddress:(NSString *)arg0;
- (NSMutableSet *)emailAddresses;
- (void)setEmailAddresses:(NSMutableSet *)arg0;

@end
