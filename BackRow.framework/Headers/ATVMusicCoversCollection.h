/* Runtime dump - ATVMusicCoversCollection
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRPhotoMediaCollection.h>
@interface ATVMusicCoversCollection : BRPhotoMediaCollection
{
    ATVDataClient * _dataClient;
    unsigned int _dataClientType;
    NSArray * _albums;
    NSArray * _assets;
}

@property (retain, nonatomic) NSArray * albums;
@property (retain, nonatomic) ATVDataClient * dataClient;
@property (nonatomic) unsigned int dataClientType;
@property (retain, nonatomic) NSArray * assets;

- (NSArray *)photoAssets;
- (NSArray *)mediaAssets;
- (NSObject *)newAlbumsQuery;
- (void)dealloc;
- (NSString *)title;
- (NSSet *)mediaTypes;
- (ATVDataClient *)dataClient;
- (ATVMusicCoversCollection *)initWithDataClient:(ATVDataClient *)arg0;
- (void)setDataClient:(ATVDataClient *)arg0;
- (unsigned int)dataClientType;
- (void)setDataClientType:(unsigned int)arg0;
- (NSString *)collectionID;
- (NSArray *)albums;
- (NSArray *)assets;
- (void)setAssets:(NSArray *)arg0;
- (void)setAlbums:(NSArray *)arg0;

@end
