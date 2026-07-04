/* Runtime dump - ATVCupidPhotoBatch
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface ATVCupidPhotoBatch : NSObject
{
    NSString * _ID;
    NSString * _batchDescription;
    NSDate * _modifiedDate;
    NSMutableArray * _photos;
    int _selectedIndex;
}

@property (retain, nonatomic) NSString * ID;
@property (retain, nonatomic) NSString * batchDescription;
@property (retain, nonatomic) NSDate * modifiedDate;
@property (retain, nonatomic) NSMutableArray * photos;
@property (nonatomic) int selectedIndex;

- (void)setBatchDescription:(NSString *)arg0;
- (NSString *)batchDescription;
- (NSString *)ID;
- (NSString *)description;
- (int)selectedIndex;
- (void)setSelectedIndex:(int)arg0;
- (void).cxx_destruct;
- (void)setID:(NSSet *)arg0;
- (void)setPhotos:(NSMutableArray *)arg0;
- (NSMutableArray *)photos;
- (NSDate *)modifiedDate;
- (void)setModifiedDate:(NSDate *)arg0;

@end
