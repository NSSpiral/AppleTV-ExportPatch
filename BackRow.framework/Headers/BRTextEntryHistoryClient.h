/* Runtime dump - BRTextEntryHistoryClient
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class BRTextEntryHistoryBehavior;
@interface BRTextEntryHistoryClient : NSManagedObject

@property (retain, nonatomic) NSNumber * maxNumHistoryItems;
@property (retain, nonatomic) NSString * clientIdentifier;
@property (retain, nonatomic) NSSet * historyItems;
@property (retain, nonatomic) BRTextEntryHistoryBehavior * behavior;

@end
