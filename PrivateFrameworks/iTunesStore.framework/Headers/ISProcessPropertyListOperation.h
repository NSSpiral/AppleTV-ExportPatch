/* Runtime dump - ISProcessPropertyListOperation
 * Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISProcessPropertyListOperation : ISOperation
{
    ISPropertyListProvider * _dataProvider;
    NSDictionary * _propertyList;
}

@property (retain) ISPropertyListProvider * dataProvider;

- (ISProcessPropertyListOperation *)initWithPropertyList:(NSDictionary *)arg0;
- (void)dealloc;
- (void)run;
- (void)setDataProvider:(ISPropertyListProvider *)arg0;
- (ISPropertyListProvider *)dataProvider;

@end
