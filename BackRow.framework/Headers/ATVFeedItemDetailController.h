/* Runtime dump - ATVFeedItemDetailController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFeedItemDetailControllerTemplate.h>
@interface ATVFeedItemDetailController : ATVFeedItemDetailControllerTemplate

- (int)_mainImageStyleForData:(NSData *)arg0;
- (void)_configureLinesLayer;
- (CALayer *)_linesLayer;
- (id)_labelValueViews;
- (id)_labelTitleViews;
- (void)_initViewWithData:(NSData *)arg0;
- (void)_updateViewWithData:(NSData *)arg0 loadType:(int)arg1;
- (float)_maxTableWidth;
- (NSObject *)_viewForTableCell:(NSObject *)arg0 columnDefinitionData:(NSData *)arg1 columnWidth:(float)arg2 wrapControlForAlignment:(char *)arg3;
- (NSString *)_viewForTableColumnHeader:(NSString *)arg0 columnWidth:(float)arg1;
- (char)_supportsViewDisplayMode:(int)arg0;
- (NSObject *)_tableView;

@end
