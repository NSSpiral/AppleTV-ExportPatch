/* Runtime dump - RemoteUITableViewSubtitleAndValueLayoutManager
 * Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@interface RemoteUITableViewSubtitleAndValueLayoutManager : UITableViewCellLayoutManager

+ (RemoteUITableViewSubtitleAndValueLayoutManager *)sharedManager;

- (void)layoutSubviewsOfCell:(NSObject *)arg0;
- (NSObject *)textLabelForCell:(NSObject *)arg0;
- (NSObject *)detailTextLabelForCell:(NSObject *)arg0;
- (NSObject *)imageViewForCell:(NSObject *)arg0;
- (float)defaultDetailTextLabelFontSizeForCell:(NSObject *)arg0;
- (NSObject *)valueTextLabelForCell:(NSObject *)arg0;
- (float)defaultValueTextLabelFontSizeForCell:(NSObject *)arg0;

@end
