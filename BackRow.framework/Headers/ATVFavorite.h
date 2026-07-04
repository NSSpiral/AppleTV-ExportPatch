/* Runtime dump - ATVFavorite
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface ATVFavorite : NSObject
{
    NSDate * _dateAdded;
    NSString * _title;
    NSString * _itemID;
}

@property (copy) NSDate * dateAdded;
@property (copy) NSString * title;
@property (copy) NSString * itemID;

+ (ATVFavorite *)favoriteFromDictionary:(NSDictionary *)arg0;

- (char)isSaved;
- (void)encodeWithDictionary:(NSDictionary *)arg0;
- (char)removeUponAcquisition;
- (void)save;
- (void)dealloc;
- (void)setTitle:(NSString *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (ATVFavorite *)initWithDictionary:(NSDictionary *)arg0;
- (NSString *)title;
- (void)remove;
- (NSString *)itemID;
- (void)setItemID:(NSString *)arg0;
- (NSDate *)dateAdded;
- (void)setDateAdded:(NSDate *)arg0;

@end
