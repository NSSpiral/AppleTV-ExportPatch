/* Runtime dump - ATVSearchTerm
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRSimpleMenuItem.h>
@interface ATVSearchTerm : BRSimpleMenuItem
{
    NSString * _searchTerm;
    NSDate * _lastUsed;
}

+ (ATVSearchTerm *)searchTermWithString:(NSString *)arg0;

- (NSString *)rightJustifiedText;
- (void)updateLastUsed;
- (ATVSearchTerm *)initWithSearchTerm:(NSString *)arg0 date:(NSDate *)arg1;
- (NSDate *)lastUsed;
- (int)titlePosition;
- (int)menuItemType;
- (NSString *)searchTerm;
- (void)dealloc;
- (NSString *)title;

@end
