/* Runtime dump - BRTextEntryHistoryItem
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class BRTextEntryHistoryClient;
@interface BRTextEntryHistoryItem : NSManagedObject

@property (copy, nonatomic) NSString * historyItemString;
@property (retain, nonatomic) NSDate * lastUsedDate;
@property (retain, nonatomic) BRTextEntryHistoryClient * client;

@end
