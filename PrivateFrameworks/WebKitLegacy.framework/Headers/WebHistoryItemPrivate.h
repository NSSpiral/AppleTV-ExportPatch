/* Runtime dump - WebHistoryItemPrivate
 * Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebHistoryItemPrivate : NSObject
{
    struct RefPtr<WebCore::HistoryItem> _historyItem;
    double _lastVisitedTime;
}

- (void).cxx_construct;
- (void).cxx_destruct;

@end
