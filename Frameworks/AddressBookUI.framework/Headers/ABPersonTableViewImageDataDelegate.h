/* Runtime dump - ABPersonTableViewImageDataDelegate
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABPersonTableViewImageDataDelegate : NSObject <ABPersonImageDataDelegate>
{
    NSMutableDictionary * _currentImageData;
    ABUIPerson * _personForImageData;
    char _hasImageChanges;
    char _didChangePreferredPersonForImage;
    ABPersonTableViewDataSource * _dataSource;
}

@property (nonatomic) ABPersonTableViewDataSource * dataSource;

- (NSMutableDictionary *)currentImageData;
- (NSArray *)writablePeople;
- (char)hasImageDataForPerson:(NSObject *)arg0;
- (ABUIPerson *)personForImageData;
- (NSString *)imageDataWithFormat:(int)arg0 cropRect:(struct CGRect *)arg1 forPerson:(struct CGSize)arg2;
- (void)setPersonForImageData:(ABUIPerson *)arg0;
- (void)refreshImageData;
- (void)removeImageDataForPerson:(NSObject *)arg0;
- (void)setImageData:(NSData *)arg0 withFormat:(int)arg1 cropRect:(struct CGRect)arg2 forPerson:(struct CGSize)arg3;
- (NSString *)imageDataWithFormat:(int)arg0 cropRect:(struct CGRect *)arg1 forPerson:(struct CGSize)arg2 isRemoved:(id)arg3;
- (void)markImagesWith:(id)arg0 forPerson:(void *)arg1;
- (id)personForImageDataExcludingPeople:(id)arg0;
- (void)reloadImageData;
- (void)setCurrentImageData:(NSMutableDictionary *)arg0;
- (void)resetImageData;
- (void)imageWillSave;
- (char)hasImageChanges;
- (void)updateRecordImages;
- (char)didChangePreferredPersonForImage;
- (void)dealloc;
- (void)setDataSource:(ABPersonTableViewDataSource *)arg0;
- (ABPersonTableViewDataSource *)dataSource;
- (NSSet *)people;

@end
