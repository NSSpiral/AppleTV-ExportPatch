/* Runtime dump - BSTransactionAuditHistoryItem
 * Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSTransactionAuditHistoryItem : NSObject
{
    NSDate * _date;
    NSString * _category;
    NSString * _description;
}

+ (NSString *)itemWithDescription:(NSString *)arg0;
+ (NSString *)itemWithDescriptionWithFormat:(NSString *)arg0;

- (void)dealloc;
- (NSString *)description;
- (BSTransactionAuditHistoryItem *)initWithDescription:(NSString *)arg0;
- (NSObject *)_timeFormatter;

@end
