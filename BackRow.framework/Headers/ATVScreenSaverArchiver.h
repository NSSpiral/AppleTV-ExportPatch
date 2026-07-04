/* Runtime dump - ATVScreenSaverArchiver
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface ATVScreenSaverArchiver : NSObject

+ (ATVScreenSaverArchiver *)screenSaverTypeFromArchive:(id)arg0;
+ (ATVScreenSaverArchiver *)screenSaverServerFromArchive:(id)arg0;
+ (ATVScreenSaverArchiver *)screenSaverCollectionIDFromArchive:(id)arg0;
+ (NSString *)collectionForScreenSaverName:(NSString *)arg0 collectionInfo:(NSDictionary *)arg1 imageURLs:(id)arg2;
+ (ATVScreenSaverArchiver *)screenSaverCollectionInfoFromArchive:(id)arg0;
+ (ATVScreenSaverArchiver *)screenSaverServerIDFromArchive:(id)arg0;
+ (ATVScreenSaverArchiver *)screenSaverCollectionNameFromArchive:(id)arg0;
+ (void)requestScreenSaverFromArchive:(id)arg0 refreshData:(char)arg1;
+ (ATVScreenSaverArchiver *)_parentalControlVerificationForArchive:(id)arg0;
+ (char)_queryScreenSaverDataForArchive:(id)arg0 refreshData:(char)arg1 connect:(char)arg2;
+ (void)_postScreenSaverDataReadyNotificationForCollection:(id)arg0;
+ (ATVScreenSaverArchiver *)_screenSaverServerIDFromArchive:(id)arg0;
+ (ATVScreenSaverArchiver *)archiveForCollection:(id)arg0;
+ (void)requestScreenSaverFromArchive:(id)arg0;
+ (ATVScreenSaverArchiver *)archiveForCollection:(id)arg0 customKeys:(NSArray *)arg1;
+ (ATVScreenSaverArchiver *)newItemsQueryForCollection:(id)arg0;
+ (ATVScreenSaverArchiver *)_providerForCollection:(id)arg0;
+ (void)_dataClientConnectionHandler:(id /* block */)arg0;

@end
