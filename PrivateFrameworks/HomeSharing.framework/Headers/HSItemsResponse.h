/* Runtime dump - HSItemsResponse
 * Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

@interface HSItemsResponse : HSResponse
{
    NSArray * _items;
}

@property (copy, nonatomic) NSArray * items;

- (NSArray *)items;
- (void)setItems:(NSArray *)arg0;
- (void).cxx_destruct;

@end
