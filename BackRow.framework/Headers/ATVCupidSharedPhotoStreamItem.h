/* Runtime dump - ATVCupidSharedPhotoStreamItem
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class ATVCupidAccessObject;
@interface ATVCupidSharedPhotoStreamItem : ATVDataItem
{
    MSASAssetCollection * _asset;
    ACAccount * _appleAccount;
}

@property (retain, nonatomic) MSASAssetCollection * asset;
@property (retain, nonatomic) ACAccount * appleAccount;

+ (ATVCupidSharedPhotoStreamItem *)_commentDictionaryFromMSASComment:(id)arg0;
+ (ATVCupidSharedPhotoStreamItem *)_userDictionaryFromMSASComment:(id)arg0;
+ (NSDate *)_commentGUIDForLastViewedCommentDate:(NSDate *)arg0 comments:(NSMutableArray *)arg1;
+ (NSObject *)itemWithDataClient:(NSObject *)arg0 asset:(MSASAssetCollection *)arg1 accessObject:(ATVCupidAccessObject *)arg2;

- (void)setAppleAccount:(ACAccount *)arg0;
- (ATVCupidSharedPhotoStreamItem *)initWithDataClient:(ATVDataClient *)arg0 asset:(MSASAssetCollection *)arg1 appleAccount:(ACAccount *)arg2;
- (void)resolveMediaURLWithAccessObject:(ATVCupidAccessObject *)arg0 completionHandler:(id /* block */)arg1;
- (void).cxx_destruct;
- (MSASAssetCollection *)asset;
- (void)setAsset:(MSASAssetCollection *)arg0;
- (ACAccount *)appleAccount;
- (NSObject *)concreteValueForProperty:(NSString *)arg0;

@end
