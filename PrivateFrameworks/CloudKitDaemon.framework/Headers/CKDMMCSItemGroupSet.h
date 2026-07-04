/* Runtime dump - CKDMMCSItemGroupSet
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDMMCSItemGroupSet : NSObject
{
    NSMutableDictionary * _itemsByGroupTuple;
}

@property (readonly, nonatomic) NSError * error;
@property (retain, nonatomic) NSMutableDictionary * itemsByGroupTuple;

- (CKDMMCSItemGroupSet *)init;
- (NSString *)description;
- (CKDMMCSItemGroupSet *)initWithItems:(NSArray *)arg0;
- (void)addItem:(NSObject *)arg0;
- (void).cxx_destruct;
- (NSError *)error;
- (NSString *)CKPropertiesDescription;
- (id)allItemGroups;
- (NSMutableDictionary *)itemsByGroupTuple;
- (void)setItemsByGroupTuple:(NSMutableDictionary *)arg0;

@end
