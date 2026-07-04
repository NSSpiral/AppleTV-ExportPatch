/* Runtime dump - ATVCupidSharedPhotoStream
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class ATVCupidAccessObject;
@interface ATVCupidSharedPhotoStream : ATVDataCollection
{
    MSASAlbum * _album;
    ACAccount * _appleAccount;
}

@property (retain, nonatomic) MSASAlbum * album;
@property (retain, nonatomic) ACAccount * appleAccount;

+ (ATVCupidSharedPhotoStream *)collectionTypeForAlbum:(id)arg0;
+ (NSObject *)collectionWithDataClient:(NSObject *)arg0 album:(MSASAlbum *)arg1 accessObject:(ATVCupidAccessObject *)arg2;

- (void)setAppleAccount:(ACAccount *)arg0;
- (ATVCupidSharedPhotoStream *)initWithDataClient:(ATVDataClient *)arg0 album:(MSASAlbum *)arg1 appleAccount:(ACAccount *)arg2;
- (void).cxx_destruct;
- (ACAccount *)appleAccount;
- (ATVCupidSharedPhotoStream *)initWithDataClient:(ATVDataClient *)arg0;
- (NSObject *)concreteValueForProperty:(NSString *)arg0;
- (void)setAlbum:(MSASAlbum *)arg0;
- (MSASAlbum *)album;

@end
