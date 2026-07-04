/* Runtime dump - BRCSharedDocumentItem
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCSharedDocumentItem : BRCDocumentItem

@property (readonly, nonatomic) NSString * enclosurePathRelativeToRoot;

- (NSString *)parentFileID;
- (NSString *)enclosurePathRelativeToRoot;
- (BRCItemID *)aliasItemID;
- (float)prepareDeletionSyncUpWithOperation:(NSObject *)arg0 defaults:(SBFWallpaperDefaults *)arg1;

@end
