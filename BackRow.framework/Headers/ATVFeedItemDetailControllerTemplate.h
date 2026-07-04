/* Runtime dump - ATVFeedItemDetailControllerTemplate
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFeedController.h>

@class ATVFeedElement, ATVFeedRootElement, BREvent;
@interface ATVFeedItemDetailControllerTemplate : ATVFeedController
{
    int _displayMode;
}

@property (nonatomic) int displayMode;

- (char)brEventAction:(BREvent *)arg0;
- (ATVFeedItemDetailControllerTemplate *)initWithFeedElement:(ATVFeedElement *)arg0;
- (long)numberOfColumnsInTableView:(NSObject *)arg0;
- (float)tableView:(UITableView *)arg0 heightForRow:(long)arg1;
- (float)tableView:(UITableView *)arg0 widthForColumn:(long)arg1;
- (long)numberOfRowsInTableView:(NSObject *)arg0;
- (long)numberOfHeaderColumnsInTableView:(NSObject *)arg0;
- (NSObject *)tableView:(UITableView *)arg0 itemForRow:(long)arg1 inColumn:(long)arg2;
- (NSObject *)tableView:(UITableView *)arg0 headerForColumn:(long)arg1;
- (float)tableView:(UITableView *)arg0 widthForHeaderColumn:(long)arg1;
- (float)headerHeightForTableView:(NSObject *)arg0;
- (void)_handleUpdateWithFeedElement:(ATVFeedRootElement *)arg0 loadType:(int)arg1;
- (NSObject *)transitionType;
- (void)transitionToMoreInfo;
- (NSObject *)_tableElement;
- (NSData *)_tableData;
- (float)_widthOfColumn:(long)arg0 tableView:(UITableView *)arg1;
- (char)_hasHeader:(NSString *)arg0;
- (void)dealloc;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (ATVFeedItemDetailControllerTemplate *)initWithDictionary:(NSDictionary *)arg0;
- (int)displayMode;
- (void)setDisplayMode:(int)arg0;

@end
