/* Runtime dump - PLWarningHelper
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLWarningHelper : NSObject
{
    NSArray * __assets;
    NSArray * __additionalPhotoStreamAssets;
    NSString * __clientName;
    int __style;
}

@property (retain, nonatomic) NSArray * _assets;
@property (retain, nonatomic) NSArray * _additionalPhotoStreamAssets;
@property (retain, nonatomic) NSString * _clientName;
@property (nonatomic) int _style;

+ (void)_getWarningTitle:(id *)arg0 message:(id *)arg1 buttonTitle:(id *)arg2 forItemSuffix:(NSString *)arg3 count:(unsigned int)arg4 operation:(int)arg5 clientName:(NSString *)arg6;
+ (void)getAvalancheDeleteWarning:(id *)arg0 actualDeletionCount:(int *)arg1 forAssets:(NSArray *)arg2;
+ (NSNumber *)_usedElsewhereWarningTextForAssetCount:(int)arg0 inPhotoStreamCount:(int)arg1 iniPhotoCount:(int)arg2 inSomeAlbumCount:(int)arg3 affectedLocalAlbumsCount:(int)arg4 itemKindSuffix:(NSString *)arg5 actualDeletionCount:(int)arg6;
+ (void)getWarningTitle:(id *)arg0 message:(id *)arg1 buttonTitle:(id *)arg2 forAssets:(NSArray *)arg3 operation:(int)arg4 clientName:(NSString *)arg5;
+ (void)getDeletionWarningTitle:(id *)arg0 message:(id *)arg1 buttonTitle:(id *)arg2 forAssets:(NSArray *)arg3 additionalPhotoStreamAssets:(NSArray *)arg4 clientName:(NSString *)arg5 style:(int)arg6;
+ (void)getDeletionWarningTitle:(id *)arg0 message:(id *)arg1 buttonTitle:(id *)arg2 forAlbums:(id)arg3 folders:(NSMutableArray *)arg4 clientName:(NSString *)arg5 style:(int)arg6;
+ (PLWarningHelper *)allWarningMessageCombinations;

- (void)dealloc;
- (int)_style;
- (void)_setStyle:(int)arg0;
- (NSArray *)_assets;
- (void)_setAssets:(NSArray *)arg0;
- (void)_setAdditionalPhotoStreamAssets:(NSArray *)arg0;
- (void)_setClientName:(NSString *)arg0;
- (void)_getDeletionWarningTitle:(id *)arg0 message:(id *)arg1 buttonTitle:(id *)arg2;
- (NSArray *)_cloudSharedWarningTextForAssets:(NSArray *)arg0;
- (NSArray *)_additionalPhotoStreamAssets;
- (NSArray *)_usedElsewhereWarningTextForAssets:(NSArray *)arg0 additionalPhotoStreamAssets:(NSArray *)arg1 actualDeletionCount:(int)arg2;
- (NSString *)_clientName;

@end
