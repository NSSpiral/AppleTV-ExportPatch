/* Runtime dump - CommunicationFilterItemCache
 * Image: /System/Library/PrivateFrameworks/CommunicationsFilter.framework/CommunicationsFilter
 */

@interface CommunicationFilterItemCache : NSObject
{
    CommunicationFilterItem * _filterItem;
    long long _isInList;
}

@property (nonatomic) long long isInList;

- (void)dealloc;
- (CommunicationFilterItemCache *)initWithFilterItem:(CommunicationFilterItem *)arg0 isInList:(long long)arg1;
- (char)matchesItem:(NSObject *)arg0;
- (long long)isInList;
- (void)setIsInList:(long long)arg0;

@end
